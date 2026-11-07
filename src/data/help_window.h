// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_START_MENU] =
    {
        .header = COMPOUND_STRING("Information: Pokédex"),
        .desc = COMPOUND_STRING("To access the Pokédex, press {START_BUTTON}\n"
                                "while you're in the overworld!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL
    },
    [HELP_MEGA_EVOLUTION] =
    {
        .header = COMPOUND_STRING("Information: Mega Evolution"),
        .desc = COMPOUND_STRING("In battle, press {START_BUTTON} to Mega Evolve!\n\n"
                                "The Pokémon must hold their Mega Stone\n"
                                "to be able to Mega Evolve.\n"
                                "You can only Mega Evolve once per battle."
                            ),
    },
    [HELP_MASTER_BALL] =
    {
        .header = COMPOUND_STRING("Information: Master Ball"),
        .desc = COMPOUND_STRING("There is only one Master Ball in Pokémon;\n"
                                "use it wisely!\n"
                                "Professor Oak suggests using it on a Pokémon\n"
                                "you want to add to your team but are hard to\n"
                                "catch, like a Fearow or Tentacruel!"
                            ),
    },
    [HELP_GIMMIGHOUL_COINS] =
    {
        .header = COMPOUND_STRING("Information: Evolving Gimmighoul into Gholdengo"),
        .desc = COMPOUND_STRING("To evolve Gimmighoul into Gholdengo, you\n"
                                "need to gather 999 {COLOR RED}Gimmighoul Coins{COLOR DARK_GRAY}.\n\n"
                                "You can find Gimmighoul Coins scattered\n"
                                "all around Paldea."
                            ),
        .headerFont = FONT_NARROWER,
    },

    [HELP_DIFFICULTY_EASY] =
    {
        .header = COMPOUND_STRING("Difficulty: Easy"),
        .desc = COMPOUND_STRING("Suited for casual players.\n\n"
                                "Similar to the hardest vanilla Pokémon games.\n"
                                "You can grind experience and money.\n"
                                "You gain double the amount of money from\n"
                                "battles, and all trainers are one level\n"
                                "lower than {COLOR GREEN}Normal{COLOR DARK_GRAY}."),
    },

    [HELP_DIFFICULTY_NORMAL] =
    {
        .header = COMPOUND_STRING("Difficulty: Normal"),
        .desc = COMPOUND_STRING("Suited for the typical player.\n\n"
                                "More challenging than the hardest vanilla\n"
                                "Pokémon games.\n"
                                "This is the developer intended experience.\n"
                                "Recommended for first time playthroughs!"),
    },

    [HELP_DIFFICULTY_HARD] =
    {
        .header = COMPOUND_STRING("Difficulty: Hard"),
        .desc = COMPOUND_STRING("Suited for players looking for a challenge.\n\n"
                                "You can't use in-battle items during\n"
                                "non-wild battles.\n"
                                "You must play on SET mode.\n"
                                "Pokémon can't gain EVs."),
    },

    [HELP_DIFFICULTY_BRUTAL] =
    {
        .header = COMPOUND_STRING("Difficulty: Brutal"),
        .desc = COMPOUND_STRING("Suited for hardcore players.\n\n"
                                "All changes from {COLOR GREEN}Hard{COLOR DARK_GRAY} are carried over.\n"
                                "All bosses are harder and never heal you.\n"
                                "The amount of money from trainers is halved.\n"
                                "Some Pokémon, moves, abilities, NPCs, and\n"
                                "services are more limited."),
    },

    [HELP_NUZLOCKE] =
    {
        .header = COMPOUND_STRING("Nuzlocke"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Nuzlocke{COLOR DARK_GRAY} challenge is a set of rules\n"
                                "that create a higher level of difficulty.\n"
                                "All standard Nuzlocke rules plus Species,\n"
                                "Shiny, and Gift Clause are implemented.\n"
                                "Gift Pokémon are random among the options.\n"
                                "DexNav encounters cannot be caught.\n"
                                "Honey Trees always let you reroll when\n"
                                "Species Clause triggers."),
    },

    [HELP_NOTEBOOK_BOSS_1_GRASS_STARTER] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Panpour{COLOR DARK_GRAY}, {COLOR GREEN}Pansear{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_1_GRASS_STARTER_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Panpour{COLOR DARK_GRAY}, {COLOR GREEN}Pansage{COLOR DARK_GRAY}, {COLOR GREEN}Pansear{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_1_FIRE_STARTER] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pansage{COLOR DARK_GRAY}, {COLOR GREEN}Panpour{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_1_FIRE_STARTER_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pansage{COLOR DARK_GRAY}, {COLOR GREEN}Pansear{COLOR DARK_GRAY}, {COLOR GREEN}Panpour{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_1_WATER_STARTER] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pansear{COLOR DARK_GRAY}, {COLOR GREEN}Pansage{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_1_WATER_STARTER_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 1 Boss"),
        .desc = COMPOUND_STRING("Rising Star {COLOR BLUE}Cori{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pansear{COLOR DARK_GRAY}, {COLOR GREEN}Panpour{COLOR DARK_GRAY}, {COLOR GREEN}Pansage{COLOR DARK_GRAY}\n\n"
                                "Theme: Elemental Monkeys"),
    },

    [HELP_NOTEBOOK_BOSS_2] =
    {
        .header = COMPOUND_STRING("Zone 2 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Blue{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pidgey{COLOR DARK_GRAY}, {COLOR GREEN}Squirtle{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Blue{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_2_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 2 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Blue{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pidgey{COLOR DARK_GRAY}, {COLOR GREEN}Exeggcute{COLOR DARK_GRAY}, {COLOR GREEN}Squirtle{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Blue{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_OPTIONAL_2] =
    {
        .header = COMPOUND_STRING("Zone 2 Optional"),
        .desc = COMPOUND_STRING("Youngster {COLOR BLUE}Shaun{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Bunnelby{COLOR DARK_GRAY}, {COLOR GREEN}Skwovet{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Oran Berry{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_3] =
    {
        .header = COMPOUND_STRING("Zone 3 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Grant{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Tyrunt{COLOR DARK_GRAY}, {COLOR GREEN}Amaura{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Rock{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_3_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 3 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Grant{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Tyrunt{COLOR DARK_GRAY}, {COLOR GREEN}Shieldon{COLOR DARK_GRAY}, {COLOR GREEN}Amaura{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Rock{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_OPTIONAL_3] =
    {
        .header = COMPOUND_STRING("Zone 3 Optional"),
        .desc = COMPOUND_STRING("Lass {COLOR BLUE}Fern{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Bidoof{COLOR DARK_GRAY}, {COLOR GREEN}Sandshrew{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Rollout{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_4] =
    {
        .header = COMPOUND_STRING("Zone 4 Boss"),
        .desc = COMPOUND_STRING("Rainbow Rocket Executive {COLOR BLUE}Proton{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Koffing{COLOR DARK_GRAY}, {COLOR GREEN}Drowzee{COLOR DARK_GRAY}, {COLOR GREEN}Beedrill{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Poison Gas{COLOR DARK_GRAY} + {COLOR GREEN}Venoshock{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_4_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 4 Boss"),
        .desc = COMPOUND_STRING("Rainbow Rocket Executive {COLOR BLUE}Proton{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Koffing{COLOR DARK_GRAY}, {COLOR GREEN}Drowzee{COLOR DARK_GRAY}, {COLOR GREEN}Beedrill{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Double Battle{COLOR DARK_GRAY}.\n\n"
                                "Theme: {COLOR GREEN}Poison Gas{COLOR DARK_GRAY} + {COLOR GREEN}Venoshock{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_5] =
    {
        .header = COMPOUND_STRING("Zone 5 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Liza{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Spoink{COLOR DARK_GRAY}, {COLOR GREEN}Baltoy{COLOR DARK_GRAY}, {COLOR GREEN}Lunatone{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Psychic{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_5_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 5 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Liza{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Spoink{COLOR DARK_GRAY}, {COLOR GREEN}Baltoy{COLOR DARK_GRAY}, {COLOR GREEN}Natu{COLOR DARK_GRAY}, {COLOR GREEN}Lunatone{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Psychic{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_OPTIONAL_5] =
    {
        .header = COMPOUND_STRING("Zone 5 Optional"),
        .desc = COMPOUND_STRING("Rich Boy {COLOR BLUE}Bill{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Pidove{COLOR DARK_GRAY}, {COLOR GREEN}Remoraid{COLOR DARK_GRAY}, {COLOR GREEN}Farfetch'd-Galar{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Critical Hit{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_6] =
    {
        .header = COMPOUND_STRING("Zone 6 Gauntlet"),
        .desc = COMPOUND_STRING("Tuber {COLOR BLUE}Mina{COLOR DARK_GRAY}, Tuber {COLOR BLUE}Zack{COLOR DARK_GRAY}, Swimmer {COLOR BLUE}Coby{COLOR DARK_GRAY}\n\n"
                                "{COLOR BLUE}Mina{COLOR DARK_GRAY}: {COLOR GREEN}Finneon{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Zack{COLOR DARK_GRAY}: {COLOR GREEN}Pyukumuku{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Coby{COLOR DARK_GRAY}: {COLOR GREEN}Goldeen{COLOR DARK_GRAY}, {COLOR GREEN}Barboach{COLOR DARK_GRAY}, {COLOR GREEN}Corsola{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_6_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 6 Gauntlet"),
        .desc = COMPOUND_STRING("Tuber {COLOR BLUE}Mina{COLOR DARK_GRAY}, Tuber {COLOR BLUE}Zack{COLOR DARK_GRAY}, Swimmer {COLOR BLUE}Coby{COLOR DARK_GRAY}\n\n"
                                "{COLOR BLUE}Mina{COLOR DARK_GRAY}: {COLOR GREEN}Finneon{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Zack{COLOR DARK_GRAY}: {COLOR GREEN}Pyukumuku{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Coby{COLOR DARK_GRAY}: {COLOR GREEN}Goldeen{COLOR DARK_GRAY}, {COLOR GREEN}Barboach{COLOR DARK_GRAY}, {COLOR GREEN}Corsola{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Permanent Rain{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_OPTIONAL_6] =
    {
        .header = COMPOUND_STRING("Zone 6 Optional (requires Surf)"),
        .desc = COMPOUND_STRING("Aspiring Leader {COLOR BLUE}Declan{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Kricketune{COLOR DARK_GRAY}, {COLOR GREEN}Masquerain{COLOR DARK_GRAY}, {COLOR GREEN}Leavanny{COLOR DARK_GRAY}, {COLOR GREEN}Kleavor{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Bug{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_7] =
    {
        .header = COMPOUND_STRING("Zone 7 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Wally{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Roselia{COLOR DARK_GRAY}, {COLOR GREEN}Fletchinder{COLOR DARK_GRAY}, {COLOR GREEN}Kirlia{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Wally{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_7_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 7 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Wally{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Roselia{COLOR DARK_GRAY}, {COLOR GREEN}Fletchinder{COLOR DARK_GRAY}, {COLOR GREEN}Azumarill{COLOR DARK_GRAY}, {COLOR GREEN}Kirlia{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Wally{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_OPTIONAL_7] =
    {
        .header = COMPOUND_STRING("Zone 7 Optional"),
        .desc = COMPOUND_STRING("Lady {COLOR BLUE}Betty{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Dolliv{COLOR DARK_GRAY}, {COLOR GREEN}Gulpin{COLOR DARK_GRAY}, {COLOR GREEN}Dedenne{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Sitrus Berry{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_8] =
    {
        .header = COMPOUND_STRING("Zone 8 Boss"),
        .desc = COMPOUND_STRING("Galactic Commander {COLOR BLUE}Mars{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Impidimp{COLOR DARK_GRAY}, {COLOR GREEN}Stunfisk{COLOR DARK_GRAY}, {COLOR GREEN}Purugly{COLOR DARK_GRAY}\n\n"
                                "Theme: Ugly Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_8_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 8 Boss"),
        .desc = COMPOUND_STRING("Galactic Commander {COLOR BLUE}Mars{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Impidimp{COLOR DARK_GRAY}, {COLOR GREEN}Stunfisk{COLOR DARK_GRAY}, {COLOR GREEN}Bruxish{COLOR DARK_GRAY}, {COLOR GREEN}Purugly{COLOR DARK_GRAY}\n\n"
                                "Theme: Ugly Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_9] =
    {
        .header = COMPOUND_STRING("Zone 9 Gauntlet"),
        .desc = COMPOUND_STRING("Winstrates {COLOR BLUE}Ari{COLOR DARK_GRAY}, {COLOR BLUE}Bertha{COLOR DARK_GRAY}, {COLOR BLUE}Cassandra{COLOR DARK_GRAY}, {COLOR BLUE}Dominic{COLOR DARK_GRAY}\n\n"
                                "{COLOR BLUE}Ari{COLOR DARK_GRAY}: {COLOR GREEN}Squawkabilly{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: {COLOR GREEN}Carnivine{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: {COLOR GREEN}Wailmer{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: {COLOR GREEN}Morpeko{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_9_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 9 Gauntlet"),
        .desc = COMPOUND_STRING("Winstrates {COLOR BLUE}Ari{COLOR DARK_GRAY}, {COLOR BLUE}Bertha{COLOR DARK_GRAY}, {COLOR BLUE}Cassandra{COLOR DARK_GRAY}, {COLOR BLUE}Dominic{COLOR DARK_GRAY}\n\n"
                                "{COLOR BLUE}Ari{COLOR DARK_GRAY}: {COLOR GREEN}Squawkabilly{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: {COLOR GREEN}Carnivine{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: {COLOR GREEN}Wailmer{COLOR DARK_GRAY}, {COLOR GREEN}Seel{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: {COLOR GREEN}Morpeko{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_OPTIONAL_9] =
    {
        .header = COMPOUND_STRING("Zone 9 Optional"),
        .desc = COMPOUND_STRING("Battle Girl {COLOR BLUE}Jackie{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Tyrogue{COLOR DARK_GRAY}, {COLOR GREEN}Hitmonlee{COLOR DARK_GRAY}, {COLOR GREEN}Hitmonchan{COLOR DARK_GRAY}, {COLOR GREEN}Hitmontop{COLOR DARK_GRAY}\n\n"
                                "Theme: Hitmons"),
    },

    [HELP_NOTEBOOK_BOSS_10] =
    {
        .header = COMPOUND_STRING("Zone 10 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Jasmine{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Tinkatuff{COLOR DARK_GRAY}, {COLOR GREEN}Togedemaru{COLOR DARK_GRAY}, {COLOR GREEN}Steelix{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Permanent Sandstorm{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Steel{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_10_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 10 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Jasmine{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Tinkatuff{COLOR DARK_GRAY}, {COLOR GREEN}Togedemaru{COLOR DARK_GRAY}, {COLOR GREEN}Prinplup{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Steelix-Mega{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Permanent Sandstorm{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Steel{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_OPTIONAL_10] =
    {
        .header = COMPOUND_STRING("Zone 10 Optional (requires Rock Climb)"),
        .desc = COMPOUND_STRING("Aspiring Leader {COLOR BLUE}Henry{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Hippowdon{COLOR DARK_GRAY}, {COLOR GREEN}Gastrodon{COLOR DARK_GRAY}, {COLOR GREEN}Sandslash{COLOR DARK_GRAY}, {COLOR GREEN}Nidoking{COLOR DARK_GRAY}\n"
                                "Conditions: {COLOR GREEN}Double Battle{COLOR DARK_GRAY}, {COLOR GREEN}Permanent Sand{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Ground{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_11] =
    {
        .header = COMPOUND_STRING("Zone 11 Boss"),
        .desc = COMPOUND_STRING("Rainbow Rocket Executive {COLOR BLUE}Archer{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Sandile{COLOR DARK_GRAY}, {COLOR GREEN}Dartrix{COLOR DARK_GRAY}, {COLOR GREEN}Houndoom{COLOR DARK_GRAY}\n"
                                "Conditions: {COLOR GREEN}Double Battle{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Permanent Misty Terrain{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Swagger{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_11_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 11 Boss"),
        .desc = COMPOUND_STRING("Rainbow Rocket Executive {COLOR BLUE}Archer{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Sandile{COLOR DARK_GRAY}, {COLOR GREEN}Dartrix{COLOR DARK_GRAY}, {COLOR GREEN}Druddigon{COLOR DARK_GRAY}, {COLOR GREEN}Houndoom{COLOR DARK_GRAY}\n"
                                "Conditions: {COLOR GREEN}Double Battle{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Permanent Misty Terrain{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Swagger{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_12] =
    {
        .header = COMPOUND_STRING("Zone 12 Boss"),
        .desc = COMPOUND_STRING("Proprietor {COLOR BLUE}Inver{COLOR DARK_GRAY}\n"
                                "Semi-randomized team of 3 Pokémon\n"
                                "Condition: {COLOR GREEN}Inverse Battle{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Inverse Battle{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_12_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 12 Boss"),
        .desc = COMPOUND_STRING("Proprietor {COLOR BLUE}Inver{COLOR DARK_GRAY}\n"
                                "Semi-randomized team of 4 Pokémon\n"
                                "Condition: {COLOR GREEN}Inverse Battle{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Inverse Battle{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_OPTIONAL_12] =
    {
        .header = COMPOUND_STRING("Zone 12 Optional (requires Strength)"),
        .desc = COMPOUND_STRING("Aspiring Leader {COLOR BLUE}Charles{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Fearow{COLOR DARK_GRAY}, {COLOR GREEN}Bombirdier{COLOR DARK_GRAY}, {COLOR GREEN}Swanna{COLOR DARK_GRAY}, {COLOR GREEN}Hawlucha{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Flying{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_13] =
    {
        .header = COMPOUND_STRING("Zone 13 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Serena{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Braixen{COLOR DARK_GRAY}, {COLOR GREEN}Vivillon{COLOR DARK_GRAY}, {COLOR GREEN}Piloswine{COLOR DARK_GRAY}, {COLOR GREEN}Gogoat{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Serena{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_13_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 13 Boss"),
        .desc = COMPOUND_STRING("{PKMN} Trainer {COLOR BLUE}Serena{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Braixen{COLOR DARK_GRAY}, {COLOR GREEN}Vivillon{COLOR DARK_GRAY}, {COLOR GREEN}Piloswine{COLOR DARK_GRAY}, {COLOR GREEN}Gogoat{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Clawitzer{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR BLUE}Serena{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_14] =
    {
        .header = COMPOUND_STRING("Zone 14 Boss"),
        .desc = COMPOUND_STRING("Magma Admin {COLOR BLUE}Courtney{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Thievul{COLOR DARK_GRAY}, {COLOR GREEN}Nidoqueen{COLOR DARK_GRAY}, {COLOR GREEN}Swoobat{COLOR DARK_GRAY}, {COLOR GREEN}Pyroar{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Attract{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_14_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 14 Boss"),
        .desc = COMPOUND_STRING("Magma Admin {COLOR BLUE}Courtney{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Thievul{COLOR DARK_GRAY}, {COLOR GREEN}Nidoqueen{COLOR DARK_GRAY}, {COLOR GREEN}Swoobat{COLOR DARK_GRAY}, {COLOR GREEN}Tsareena{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Pyroar{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Attract{COLOR DARK_GRAY}"),
    },

    [HELP_NOTEBOOK_BOSS_15] =
    {
        .header = COMPOUND_STRING("Zone 15 Gauntlet"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Sophocles' Pokémon{COLOR DARK_GRAY}\n\n"
                                "Battle 1 (Double Battle): {COLOR GREEN}Minun{COLOR DARK_GRAY}, {COLOR GREEN}Ampharos{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Double Battle{COLOR DARK_GRAY}\n\n"
                                "Battle 2 (Single Battle): {COLOR GREEN}Ampharos-Mega{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Single Battle{COLOR DARK_GRAY}\n\n"
                                "Theme: Loose Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_15_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 15 Gauntlet"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Sophocles' Pokémon{COLOR DARK_GRAY}\n\n"
                                "Battle 1: {COLOR GREEN}Minun{COLOR DARK_GRAY}, {COLOR GREEN}Ampharos{COLOR DARK_GRAY} (+1 all stats)\n"
                                "Condition: {COLOR GREEN}Double Battle{COLOR DARK_GRAY}\n\n"
                                "Battle 2: {COLOR GREEN}Ampharos-Mega{COLOR DARK_GRAY} (+1 all stats)\n"
                                "Condition: {COLOR GREEN}Single Battle{COLOR DARK_GRAY}\n\n"
                                "Theme: Loose Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_16] =
    {
        .header = COMPOUND_STRING("Zone 16 Boss"),
        .desc = COMPOUND_STRING("Galactic Commander {COLOR BLUE}Jupiter{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Oinkologne{COLOR DARK_GRAY}, {COLOR GREEN}Aromatisse{COLOR DARK_GRAY}, {COLOR GREEN}Victreebel{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Skuntank{COLOR DARK_GRAY}\n\n"
                                "Theme: Smelly Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_16_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 16 Boss"),
        .desc = COMPOUND_STRING("Galactic Commander {COLOR BLUE}Jupiter{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Oinkologne{COLOR DARK_GRAY}, {COLOR GREEN}Aromatisse{COLOR DARK_GRAY}, {COLOR GREEN}Victreebel{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Garbodor{COLOR DARK_GRAY}, {COLOR GREEN}Skuntank{COLOR DARK_GRAY}\n\n"
                                "Theme: Smelly Pokémon"),
    },

    [HELP_NOTEBOOK_BOSS_17] =
    {
        .header = COMPOUND_STRING("Zone 17 Boss"),
        .desc = COMPOUND_STRING("Elite Four {COLOR BLUE}Lacey{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Slurpuff{COLOR DARK_GRAY}, {COLOR GREEN}Whimsicott{COLOR DARK_GRAY}, {COLOR GREEN}Wigglytuff{COLOR DARK_GRAY}, {COLOR GREEN}Mimikyu{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Permanent Rain{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Permanent Electric Terrain{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Fairy{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_17_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 17 Boss"),
        .desc = COMPOUND_STRING("Elite Four {COLOR BLUE}Lacey{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Slurpuff{COLOR DARK_GRAY}, {COLOR GREEN}Whimsicott{COLOR DARK_GRAY}, {COLOR GREEN}Wigglytuff{COLOR DARK_GRAY}, {COLOR GREEN}Mimikyu{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Excadrill{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Permanent Rain{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Permanent Electric Terrain{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Fairy{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_18] =
    {
        .header = COMPOUND_STRING("Zone 18 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Larry{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Komala{COLOR DARK_GRAY}, {COLOR GREEN}Dudunsparce{COLOR DARK_GRAY}, {COLOR GREEN}Noctowl{COLOR DARK_GRAY}, {COLOR GREEN}Staraptor{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Normal{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_18_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 18 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Larry{COLOR DARK_GRAY}\n"
                                "{COLOR GREEN}Komala{COLOR DARK_GRAY}, {COLOR GREEN}Dudunsparce{COLOR DARK_GRAY}, {COLOR GREEN}Noctowl{COLOR DARK_GRAY}, {COLOR GREEN}Lickilicky{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Staraptor-Mega{COLOR DARK_GRAY}\n\n"
                                "Theme: {COLOR GREEN}Normal{COLOR DARK_GRAY}-type specialist"),
    },

    [HELP_NOTEBOOK_BOSS_19] =
    {
        .header = COMPOUND_STRING("Zone 19 Gauntlet"),
        .desc = COMPOUND_STRING("2x Aqua Grunt, Aqua Admin {COLOR BLUE}Matt{COLOR DARK_GRAY}\n"
                                "Grunt 1: {COLOR GREEN}Qwilfish{COLOR DARK_GRAY}, {COLOR GREEN}Drednaw{COLOR DARK_GRAY}\n"
                                "Grunt 2: {COLOR GREEN}Chatot{COLOR DARK_GRAY}, {COLOR GREEN}Kingler{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Matt{COLOR DARK_GRAY}: {COLOR GREEN}Pelipper{COLOR DARK_GRAY}, {COLOR GREEN}Perrserker{COLOR DARK_GRAY}, {COLOR GREEN}Eelektross{COLOR DARK_GRAY}\n\n"
                                "Theme: Aqua Gauntlet"),
    },

    [HELP_NOTEBOOK_BOSS_19_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 19 Gauntlet"),
        .desc = COMPOUND_STRING("2x Aqua Grunt, Aqua Admin {COLOR BLUE}Matt{COLOR DARK_GRAY}\n"
                                "Grunt 1: {COLOR GREEN}Qwilfish{COLOR DARK_GRAY}, {COLOR GREEN}Drednaw{COLOR DARK_GRAY}\n"
                                "Grunt 2: {COLOR GREEN}Chatot{COLOR DARK_GRAY}, {COLOR GREEN}Kingler{COLOR DARK_GRAY}\n"
                                "{COLOR BLUE}Matt{COLOR DARK_GRAY}: {COLOR GREEN}Pelipper{COLOR DARK_GRAY}, {COLOR GREEN}Perrserker{COLOR DARK_GRAY}, {COLOR GREEN}Floatzel{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Eelektross{COLOR DARK_GRAY}\n\n"
                                "Theme: Aqua Gauntlet"),
    },

    [HELP_NOTEBOOK_BOSS_20] =
    {
        .header = COMPOUND_STRING("Zone 20 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Cilan{COLOR DARK_GRAY}: {COLOR GREEN}Simisage{COLOR DARK_GRAY}, {COLOR GREEN}Serperior{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Torterra{COLOR DARK_GRAY}, {COLOR GREEN}Chesnaught{COLOR DARK_GRAY}\n"
                                "Gym Leader {COLOR BLUE}Chili{COLOR DARK_GRAY}: {COLOR GREEN}Simisear{COLOR DARK_GRAY}, {COLOR GREEN}Typhlosion{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Skeledirge{COLOR DARK_GRAY}, {COLOR GREEN}Emboar{COLOR DARK_GRAY}\n"
                                "Gym Leader {COLOR BLUE}Cress{COLOR DARK_GRAY}: {COLOR GREEN}Simipour{COLOR DARK_GRAY}, {COLOR GREEN}Swampert{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Samurott{COLOR DARK_GRAY}, {COLOR GREEN}Quaquaval{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Tag Battle{COLOR DARK_GRAY} (partner with one)\n"
                                "Theme: {COLOR GREEN}Grass{COLOR DARK_GRAY}/{COLOR GREEN}Fire{COLOR DARK_GRAY}/{COLOR GREEN}Water{COLOR DARK_GRAY}-type specialists"),
    },

    [HELP_NOTEBOOK_BOSS_20_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 20 Boss"),
        .desc = COMPOUND_STRING("Gym Leader {COLOR BLUE}Cilan{COLOR DARK_GRAY}: {COLOR GREEN}Simisage{COLOR DARK_GRAY}, {COLOR GREEN}Serperior{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Torterra{COLOR DARK_GRAY}, {COLOR GREEN}Chesnaught{COLOR DARK_GRAY}, {COLOR GREEN}Sceptile-Mega{COLOR DARK_GRAY}\n"
                                "Gym Leader {COLOR BLUE}Chili{COLOR DARK_GRAY}: {COLOR GREEN}Simisear{COLOR DARK_GRAY}, {COLOR GREEN}Typhlosion{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Skeledirge{COLOR DARK_GRAY}, {COLOR GREEN}Emboar{COLOR DARK_GRAY}, {COLOR GREEN}Charizard-Mega X{COLOR DARK_GRAY}\n"
                                "Gym Leader {COLOR BLUE}Cress{COLOR DARK_GRAY}: {COLOR GREEN}Simipour{COLOR DARK_GRAY}, {COLOR GREEN}Swampert{COLOR DARK_GRAY},\n"
                                "{COLOR GREEN}Samurott{COLOR DARK_GRAY}, {COLOR GREEN}Quaquaval{COLOR DARK_GRAY}, {COLOR GREEN}Feraligatr-Mega{COLOR DARK_GRAY}\n"
                                "Condition: {COLOR GREEN}Tag Battle{COLOR DARK_GRAY} (partner with one)\n"
                                "Theme: {COLOR GREEN}Grass{COLOR DARK_GRAY}/{COLOR GREEN}Fire{COLOR DARK_GRAY}/{COLOR GREEN}Water{COLOR DARK_GRAY}-type specialists"),
    },

    [HELP_CHANGES_ACCURACY] =
    {
        .header = COMPOUND_STRING("Battle Changes: Accuracy"),
        .desc = COMPOUND_STRING("All moves with 95%, 90%, 85%, and 80%\n"
                                "accuracy have increased to 100% accuracy.\n\n"
                                "There are some exceptions to this listed on\n"
                                "the next page."),
    },

    [HELP_CHANGES_ACCURACY_EXCEPTIONS] =
    {
        .header = COMPOUND_STRING("Exceptions to Accuracy Changes"),
        .desc = COMPOUND_STRING("Jump Kick, Supercell Slam, Axe Kick,\n"
                                "High Jump Kick, Population Bomb, Triple Axel,\n"
                                "Heat Wave, Muddy Water, Fire Blast,\n"
                                "Megahorn, Power Whip, Cross Chop,\n"
                                "Hydro Pump, Stone Edge, Gunk Shot,\n"
                                "Head Smash, Bleakwind Storm,\n"
                                "Wildbolt Storm, & Sandsear Storm"),
    },

    [HELP_CHANGES_EXPERIENCE] =
    {
        .header = COMPOUND_STRING("Battle Changes: Experience"),
        .desc = COMPOUND_STRING("There are hard level caps built in, which\n"
                                "typically increase by 2 every {COLOR GREEN}Zone{COLOR DARK_GRAY}.\n\n"
                                "Defeated wild Pokémon don't give experience\n"
                                "except on {COLOR GREEN}Easy{COLOR DARK_GRAY} difficulty."
                                "A few Pokémon have their experience yields tweaked."),
    },

    [HELP_CHANGES_ABILITIES] =
    {
        .header = COMPOUND_STRING("Battle Changes: Abilities"),
        .desc = COMPOUND_STRING("{COLOR GREEN}Pickup{COLOR DARK_GRAY} does not activate after wild battles\n"
                                "unless on {COLOR GREEN}Easy{COLOR DARK_GRAY} difficulty.\n\n"
                                "{COLOR GREEN}Honey Gather{COLOR DARK_GRAY} does not activate after wild\n"
                                "battles unless on {COLOR GREEN}Easy{COLOR DARK_GRAY} difficulty.\n\n"
                                "{COLOR GREEN}Harvest{COLOR DARK_GRAY} does not activate during wild\n"
                                "battles unless on {COLOR GREEN}Easy{COLOR DARK_GRAY} difficulty."),
    },

    [HELP_CHANGES_DEXNAV] =
    {
        .header = COMPOUND_STRING("Changes: DexNav"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}DexNav{COLOR DARK_GRAY} displays all wild Pokémon\n"
                                "available in a Zone.\n"
                                "Pokémon in the Hidden category are found\n"
                                "while fishing, surfing, in Honey trees,\n"
                                "smashing rocks, etc.\n"
                                "Pokémon do not flee from the {COLOR GREEN}DexNav{COLOR DARK_GRAY}'s search.\n"
                                "The {COLOR GREEN}DexNav{COLOR DARK_GRAY} cannot chain Pokémon."),
    },

    [HELP_CHANGES_HIDDEN_GROTTO] =
    {
        .header = COMPOUND_STRING("Changes: Hidden Grotto"),
        .desc = COMPOUND_STRING("{COLOR GREEN}Hidden Grottoes{COLOR DARK_GRAY} contain one specific Pokémon\n"
                                "species with its Hidden Ability, chosen\n"
                                "randomly from a pool.\n\n"
                                "Pokémon respawn upon exiting the\n"
                                "{COLOR GREEN}Hidden Grotto{COLOR DARK_GRAY}, though it will always be\n"
                                "the same species."),
    },

    [HELP_CHANGES_HONEY_SWEET_SCENT] =
    {
        .header = COMPOUND_STRING("Honey & Sweet Scent"),
        .desc = COMPOUND_STRING("{COLOR GREEN}Honey{COLOR DARK_GRAY} can be slathered on a Honey Tree to\n"
                                "encounter a Pokémon.\n"
                                "{COLOR GREEN}Honey{COLOR DARK_GRAY} can also be used to start a wild\n"
                                "Double Battle if used from the Bag.\n\n"
                                "The field move {COLOR GREEN}Sweet Scent{COLOR DARK_GRAY} can also start\n"
                                "a wild Double Battle this way!"),
    },

    [HELP_CHANGES_ITEM_PRICE] =
    {
        .header = COMPOUND_STRING("Item Price"),
        .desc = COMPOUND_STRING("Items sell for 1/4 of their original price.\n"
                                "Some items have had their prices changed\n"
                                "from vanilla Pokémon games.\n\n"
                                "{COLOR GREEN}Honey{COLOR DARK_GRAY}, Mints, & Exp. Candies cost ¥80.\n"
                                "Shards cost ¥200.\n"
                                "Tera Shards cost ¥200.\n"
                                "Heart Scales cost ¥2400."),
    },

    [HELP_FARMERS_STAND] =
    {
        .header = COMPOUND_STRING("Farmer's Stand"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Farmer's Stand{COLOR DARK_GRAY} sells freshly grown or\n"
                                "baked goods, and all items cost only ¥80.\n\n"
                                "However, there is a per-customer limit on\n"
                                "how many items you can buy.\n"
                                "This limit resets after completing\n"
                                "{COLOR GREEN}every 5th Zone{COLOR DARK_GRAY}."),
    },

    [HELP_ENDLESS_REPEL] =
    {
        .header = COMPOUND_STRING("Endless Repel"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Endless Repellent{COLOR DARK_GRAY} allows you to avoid\n"
                                "encountering any wild Pokémon.\n"
                                "It works regardless of your Pokémon's level.\n\n"
                                "It is recommended to register the\n"
                                "{COLOR GREEN}Endless Repellent{COLOR DARK_GRAY} for easy toggling."),
    },

    [HELP_ENDLESS_CANDY] =
    {
        .header = COMPOUND_STRING("Endless Candy"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Endless Candy{COLOR DARK_GRAY} can be used to increase\n"
                                "your Pokémon's level.\n\n"
                                "If you are in the {COLOR GREEN}Sanctuary{COLOR DARK_GRAY}, the maximum\n"
                                "level is the current level cap.\n"
                                "If you are in a {COLOR GREEN}Zone{COLOR DARK_GRAY}, the maximum level is\n"
                                "the prior level cap."),
    },

    [HELP_CHANGES_SURVEIL] =
    {
        .header = COMPOUND_STRING("Surveil"),
        .desc = COMPOUND_STRING("In battle, you can use {COLOR GREEN}Surveil{COLOR DARK_GRAY} to see the\n"
                                "opposing Pokémon."),
    },

    [HELP_CHANGES_HIDDEN_MACHINES] =
    {
        .header = COMPOUND_STRING("Hidden Machines"),
        .desc = COMPOUND_STRING("A Hidden Machine (HM for short) teaches a\n"
                                "a move that can be used in the field!\n"
                                "Unlike vanilla Pokémon games, HMs can be\n"
                                "easily forgotten.\n"
                                "In addition, HMs can be used even without\n"
                                "any Pokémon in your party knowing the move.\n"
                                "You just need to have the HM on hand, as\n"
                                "well as the corresponding Gym Badge."),
    },

    [HELP_SIGN_NOTES] =
    {
        .header = COMPOUND_STRING("Notes"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Notes{COLOR DARK_GRAY} are filled with useful\n"
                                "information, including mechanics changes\n"
                                "from vanilla Pokémon games, upcoming Zones\n"
                                "and boss battles, and difficulty info."),
    },

    [HELP_SIGN_COMPLETING_A_ZONE] =
    {
        .header = COMPOUND_STRING("Completing a Zone"),
        .desc = COMPOUND_STRING("Defeat the {COLOR GREEN}Zone{COLOR DARK_GRAY}'s challenge (usually a boss)\n"
                                "and find {COLOR GREEN}Porygon{COLOR DARK_GRAY} to complete a {COLOR GREEN}Zone{COLOR DARK_GRAY}.\n\n"
                                "Your Pokémon are automatically healed before\n"
                                "fighting mandatory bosses."),
    },

    [HELP_SIGN_LEVEL_CAP] =
    {
        .header = COMPOUND_STRING("Level Cap"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Notes{COLOR DARK_GRAY} contains the current level cap."),
    },

    [HELP_SIGN_RUNNING_SHOES] =
    {
        .header = COMPOUND_STRING("Running Shoes"),
        .desc = COMPOUND_STRING("Press the {L_BUTTON} to toggle the Running Shoes.\n\n"
                                "While the Running Shoes are toggled on by\n"
                                "default, you can hold {B_BUTTON} to walk."),
    },

    [HELP_SIGN_ZONE_INFO] =
    {
        .header = COMPOUND_STRING("Zone Info"),
        .desc = COMPOUND_STRING("You can see a short preview of the next Zone\n"
                                "by consulting the {COLOR GREEN}Notes{COLOR DARK_GRAY}.\n\n"
                                "This includes:\n"
                                "- a general description of the Zone\n"
                                "- how many opponents remain in the Zone\n"
                                "- a summary of any bosses in the Zone"),
    },

    [HELP_SIGN_OPTIONAL_BOSSES] =
    {
        .header = COMPOUND_STRING("Optional Bosses"),
        .desc = COMPOUND_STRING("Some Zones have an optional boss that\n"
                                "gives a special reward for beating them."),
    },

    [HELP_SIGN_CHANGE_MUSIC] =
    {
        .header = COMPOUND_STRING("Change Music"),
        .desc = COMPOUND_STRING("You can change some of the music you hear by\n"
                                "changing your selections in the Options menu."),
    },

    [HELP_SIGN_LEADER] =
    {
        .header = COMPOUND_STRING("Gym Leader"),
        .desc = COMPOUND_STRING("Some Zones have {COLOR GREEN}Gym Leaders{COLOR DARK_GRAY}, a particularly\n"
                                "challenging boss specializing in a single\n"
                                "type of Pokémon.\n\n"
                                "These Gym Leaders give multiple rewards\n"
                                "for defeating them, including a Gym Badge.\n"
                                "A Gym Badge lets you use a corresponding\n"
                                "{COLOR GREEN}Hidden Machine{COLOR DARK_GRAY} outside battle."),
    },

    [HELP_SIGN_DOWSING_MACHINE] =
    {
        .header = COMPOUND_STRING("Dowsing Machine"),
        .desc = COMPOUND_STRING("You can use the {COLOR GREEN}Dowsing Machine{COLOR DARK_GRAY} to help you\n"
                                "find such hidden items.\n\n"
                                "As you get closer to a hidden item, the\n"
                                "Dowsing Machine will make noises, change\n"
                                "color, and shake until it shakes red,\n"
                                "meaning an item is right in front of you!"),
    },

    [HELP_SIGN_POKEMON_CHANGES] =
    {
        .header = COMPOUND_STRING("Pokémon Changes"),
        .desc = COMPOUND_STRING("Many Pokémon have minor adjustments to\n"
                                "their evolution methods and abilities from\n"
                                "vanilla Pokémon games.\n\n"
                                "Consult the {COLOR GREEN}Notes{COLOR DARK_GRAY} for these changes."),
    },

    [HELP_SIGN_POKEDEX_INFO] =
    {
        .header = COMPOUND_STRING("Pokedex Info"),
        .desc = COMPOUND_STRING("You can see detailed information about a\n"
                                "Pokémon species in its Pokédex entry, such\n"
                                "such as its moveset or how to evolve it.\n\n"
                                "Any changes from vanilla can be found in\n"
                                "the {COLOR GREEN}Notes{COLOR DARK_GRAY}."),
    },

    [HELP_SIGN_STATS_IV_EV] =
    {
        .header = COMPOUND_STRING("Viewing IVs/EVs"),
        .desc = COMPOUND_STRING("While you are on the Pokémon stats screen,\n"
                                "you can press {A_BUTTON} to switch between\n"
                                "stats, IVs, and EVs."),
    },

    [HELP_SIGN_BAG_TIPS] =
    {
        .header = COMPOUND_STRING("Bag Tips"),
        .desc = COMPOUND_STRING("You can sort items in the Bag using {START_BUTTON}.\n\n"
                                "You can register Key Items from the Bag for\n"
                                "easy use. Once an item is registered,\n"
                                "press {SELECT_BUTTON} to use it!\n"
                                "You can register multiple Key Items at a time."),
    },

    [HELP_SIGN_BATTLE_CHANGES] =
    {
        .header = COMPOUND_STRING("Battle Changes"),
        .desc = COMPOUND_STRING("Some battle mechanics have minor adjustments\n"
                                "from vanilla, such as:\n"
                                "- increased accuracy for many moves\n"
                                "- Pokémon's experience yields\n\n"
                                "Consult the {COLOR GREEN}Notes{COLOR DARK_GRAY} for more details."),
    },

    [HELP_SIGN_SELECT_SWITCH] =
    {
        .header = COMPOUND_STRING("{SELECT_BUTTON} Switch"),
        .desc = COMPOUND_STRING("In the party menu, you can press {SELECT_BUTTON} to\n"
                                "quickly shift a Pokémon to the front of your\n"
                                "party."),
    },

    [HELP_SIGN_GAUNTLET] =
    {
        .header = COMPOUND_STRING("Gauntlets"),
        .desc = COMPOUND_STRING("Not all Zones have a single boss.\n\n"
                                "Some Zones have gauntlets, where you must\n"
                                "win multiple battles in a row."),
    },

    [HELP_SIGN_SANCTUARY_AREAS] =
    {
        .header = COMPOUND_STRING("Sanctuary Areas"),
        .desc = COMPOUND_STRING("The Sanctuary has a few connected areas\n"
                                "that are unlocked with new HMs."),
    },

    [HELP_SIGN_RESTORE_HELD_ITEMS] =
    {
        .header = COMPOUND_STRING("Held Items"),
        .desc = COMPOUND_STRING("All held items (except Berries) are\n"
                                "restored after battle.\n\n"),
    },

    [HELP_SIGN_TAG_SURVEIL] =
    {
        .header = COMPOUND_STRING("Tag Battles"),
        .desc = COMPOUND_STRING("In a Tag Battle, you partner with another\n"
                                "trainer against your opponent(s).\n"
                                "Toggle between viewing your party and\n"
                                "your partner's party with {R_BUTTON}.\n"
                                "Similary, press {R_BUTTON} while using {COLOR GREEN}Surveil{COLOR DARK_GRAY}\n"
                                "to toggle between the opposing teams."),
    },

    // end regular signs here

    [HELP_SIGN_COMPLETING_A_ZONE_BRUTAL] =
    {
        .header = COMPOUND_STRING("Completing a Zone"),
        .desc = COMPOUND_STRING("Defeat the {COLOR GREEN}Zone{COLOR DARK_GRAY}'s challenge (usually a boss)\n"
                                "and find {COLOR GREEN}Porygon{COLOR DARK_GRAY} to complete a {COLOR GREEN}Zone{COLOR DARK_GRAY}."),
    },

    [HELP_PSYCHIC_TERRAIN] =
    {
        .header = COMPOUND_STRING("Psychic Terrain"),
        .desc = COMPOUND_STRING("{COLOR GREEN}Psychic Terrain{COLOR DARK_GRAY} has the following effects on\n"
                                "Pokémon that are on the ground:\n"
                                "- Boosts the power of Psychic-type moves\n"
                                "used by affected Pokémon by 30%.\n"
                                "- Affected Pokémon become immune to\n"
                                "opponents' moves with increased priority."),
    },

    [HELP_CHANGES_BOX_LINK] =
    {
        .header = COMPOUND_STRING("{PKMN} Box Link"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}{PKMN} Box Link{COLOR DARK_GRAY} is used to access the\n"
                                "{PKMN} Storage System from the field.\n\n"
                                "It can only be used once per {COLOR GREEN}Zone{COLOR DARK_GRAY},\n"
                                "but can be accessed at will from the\n"
                                "{COLOR GREEN}Sanctuary{COLOR DARK_GRAY}."),
    },

    [HELP_BICYCLE] =
    {
        .header = COMPOUND_STRING("Bike"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Bike{COLOR DARK_GRAY} has two modes,\n"
                                "Mach and Acro. Toggle with {L_BUTTON}.\n\n"
                                "Mach is fast and can dodge holes.\n"
                                "Hold {B_BUTTON} to hop in place with Acro.\n"
                                "Press {B_BUTTON} and a direction to jump\n"
                                "in the direction with Acro."),
    },
};
