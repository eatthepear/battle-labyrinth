#!/usr/bin/env python3

"""
Usage: python3 make_egg.py SOURCE_DIR

Build a C-header defining the set of egg moves for each configured-on
species-family based on the egg moves defined in SOURCE_DIR/all_learnables.json.

A move is "teachable" if it is:
    1. Can be taught by some Move Tutor in the overworld, which is identified by
       using the ChooseMonForMoveTutor special in a script and setting VAR_0x8005
       to the offered MOVE constant. (e.g., MOVE_SWAGGER)
    2. Assigned to some TM or HM in include/constants/tms_hms.h using the
       FOREACH_TM macro.
    3. A universal move, as defined by universalMoves in
       src/data/pokemon/special_movesets.json

For a given species, a move is considered teachable to that species if:
    1. The species can learn the move via *any* method within any Expansion-
       supported game.
    2. The species rule defined by their teachingType in the species_info folder
"""

from itertools import chain
from textwrap import dedent
from functools import reduce

import json
import pathlib
import re

SNAKIFY_PAT = re.compile(r"(?!^)([A-Z]+)")

def from_single(fname: pathlib.Path) -> dict[str, set[str]]:
    with open(fname, "r") as fp:
        return {
            species: set([move for move in by_method["EggMoves"]])
            for species, by_method in json.load(fp).items()
        }


def from_batch(dir: pathlib.Path) -> dict[str, set[str]]:
    return reduce(
        lambda acc, single: {
            species: acc.get(species, set()) | single.get(species, set())
            for species in acc.keys() | single.keys()
        },
        map(from_single, dir.glob("*.json")),
        {},
    )

def prepare_output(repo_teaching_types, egg_moves_input: dict[str, set[str]]) -> str:
    """
    Build the file content for teachable_learnsets.h.
    """

    new = dedent(
    """
    #include "constants/moves.h"

    static const u16 sNoneEggMoveLearnset[] = {
        MOVE_UNAVAILABLE,
    };

    """)

    joinpat = ",\n    "
    for species_data in repo_teaching_types:
        if isinstance(species_data, str):
            new += (species_data)
            continue
        species = species_data["name"]
        new += f"static const u16 s{species}EggMoveLearnset[] = "
        new += "{\n"
        species_upper =  SNAKIFY_PAT.sub(r"_\1", species).upper()

        if species_upper not in egg_moves_input:
            continue
        repo_species_egg_moves = egg_moves_input[species_upper]

        repo_species_egg_moves = list(dict.fromkeys(repo_species_egg_moves))
        new += "\n".join([
            f"    {joinpat.join(chain(repo_species_egg_moves, ('MOVE_UNAVAILABLE',)))},",
            "};\n",
        ])

    return new

def main():
    # egg_moves_dict = from_single(pathlib.Path("tools/learnset_helpers/porymoves_files/sv.json"))
    egg_moves_dict = from_batch(pathlib.Path("tools/learnset_helpers/porymoves_files"))

    with open("tools/learnset_helpers/build/all_teaching_types.json", "r") as source_fp:
        repo_teaching_types = json.load(source_fp)

    content = prepare_output(repo_teaching_types, egg_moves_dict)
    with open("./src/data/pokemon/egg_moves.h", "w") as egg_moves_fp:
        egg_moves_fp.write(content)

if __name__ == "__main__":
    main()
