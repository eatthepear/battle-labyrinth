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
                                "lower than {COLOR RED}Normal{COLOR DARK_GRAY}."),
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

    [HELP_ACCURACY] =
    {
        .header = COMPOUND_STRING("Battle Changes: Accuracy"),
        .desc = COMPOUND_STRING("All moves with 95%, 90%, 85%, 80%, and 75%\n"
                                "accuracy have increased to 100% accuracy.\n\n"
                                "There are some exceptions to this listed on\n"
                                "the next page."),
    },

    [HELP_ACCURACY_EXCEPTIONS] =
    {
        .header = COMPOUND_STRING("Exceptions to Accuracy Changes"),
        .desc = COMPOUND_STRING("Jump Kick, Supercell Slam, Axe Kick,\n"
                                "High Jump Kick, Population Bomb, Triple Axel,\n"
                                "Heat Wave, Muddy Water, Fire Blast,\n"
                                "Megahorn, Power Whip, Cross Chop,\n"
                                "Hydro Pump, Stone Edge, Gunk Shot,\n"
                                "Head Smash, Bleakwind Storm, Wildbolt Storm,\n"
                                "Sandsear Storm, Sleep Powder, & Lovely Kiss"),
    },

    [HELP_DIFFICULTY_BRUTAL] =
    {
        .header = COMPOUND_STRING("Difficulty: Brutal"),
        .desc = COMPOUND_STRING("Suited for hardcore players.\n\n"
                                "All changes from {COLOR RED}Hard{COLOR DARK_GRAY} are carried over.\n"
                                "All boss battles are more difficult.\n"
                                "The amount of money from trainers is halved.\n"
                                "Some Pokémon, moves, abilities, NPCs, and\n"
                                "services are more limited."),
    },

    [HELP_NOTEBOOK] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Notebook"),
        .desc = COMPOUND_STRING("The {COLOR RED}Notebook{COLOR DARK_GRAY} is filled with useful\n"
                                "information, including mechanics changes\n"
                                "from vanilla Pokémon games, upcoming Zones\n"
                                "and boss battles, and difficulty info.\n\n"
                                "Any Trainer Tips signs you read will have\n"
                                "their messages transcribed in the Notebook."),
    },

    [HELP_COMPLETING_A_ZONE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Completing a Zone"),
        .desc = COMPOUND_STRING("To complete a Zone, find {COLOR RED}Porygon{COLOR DARK_GRAY}.\n\n"
                                "You don't necessarily need to defeat all\n"
                                "opponents to complete a Zone."),
    },

    [HELP_RUNNING_SHOES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Running Shoes"),
        .desc = COMPOUND_STRING("Press the {L_BUTTON} to toggle the Running Shoes.\n\n"
                                "While the Running Shoes are toggled on by\n"
                                "default, you can hold {B_BUTTON} to walk."),
    },

    [HELP_ZONE_INFO] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Zone Info"),
        .desc = COMPOUND_STRING("You can see a short preview of the next Zone\n"
                                "by consulting the {COLOR RED}Notebook{COLOR DARK_GRAY}.\n\n"
                                "This includes:\n"
                                "- a general description of the Zone\n"
                                "- how many opponents remain in the Zone\n"
                                "- a summary of any bosses in the Zone"),
    },

    [HELP_INFINITE_CANDY] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Infinite Candy"),
        .desc = COMPOUND_STRING("The {COLOR RED}Infinite Candy{COLOR DARK_GRAY} can be used to increase\n"
                                "your Pokémon's level.\n\n"
                                "If you are in the {COLOR GREEN}Sanctuary{COLOR DARK_GRAY}, the maximum\n"
                                "level is the current level cap.\n"
                                "If you are in a {COLOR GREEN}Zone{COLOR DARK_GRAY}, the maximum level is\n"
                                "the prior level cap."),
    },

    [HELP_SURVEIL] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Surveil"),
        .desc = COMPOUND_STRING("In battle, you can use {COLOR RED}Surveil{COLOR DARK_GRAY} to see the\n"
                                "opposing team(s).\n\n"
                                "In a battle against two opponents, press {R_BUTTON}\n"
                                "to toggle between the oppposing teams."),
    },

    [HELP_HONEY_SWEET_SCENT] =
    { // todo
        .header = COMPOUND_STRING("Trainer Tips: Honey & Sweet Scent"),
        .desc = COMPOUND_STRING("{COLOR RED}Honey{COLOR DARK_GRAY} can be slathered on a Honey Tree to\n"
                                "encounter a Pokémon.\n"
                                "{COLOR RED}Honey{COLOR DARK_GRAY} can also be used to start a wild\n"
                                "Double Battle if used from the Bag.\n\n"
                                "The field move {COLOR RED}Sweet Scent{COLOR DARK_GRAY} can also start\n"
                                "a wild Double Battle this way!"),
    },

    [HELP_DOWSING_MACHINE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Dowsing Machine"),
        .desc = COMPOUND_STRING("You can use the {COLOR RED}Dowsing Machine{COLOR DARK_GRAY} to help you\n"
                                "find such hidden items.\n\n"
                                "As you get closer to a hidden item, the\n"
                                "Dowsing Machine will make noises, change\n"
                                "color, and shake until it shakes red,\n"
                                "meaning an item is right in front of you!"),
    },

    [HELP_HIDDEN_MACHINES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Hidden Machines"),
        .desc = COMPOUND_STRING("A Hidden Machine (HM for short) teaches a\n"
                                "a move that can be used in the field!\n"
                                "Unlike vanilla Pokémon games, HMs can be\n"
                                "easily forgotten.\n"
                                "In addition, HMs can be used even without\n"
                                "any Pokémon in your party knowing the move.\n"
                                "You just need to have the HM on hand, as\n"
                                "well as the corresponding Gym Badge."),
    },

    [HELP_LEADER] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Gym Leader"),
        .desc = COMPOUND_STRING("Some Zones have {COLOR RED}Gym Leaders{COLOR DARK_GRAY}, a particularly\n"
                                "challenging boss specializing in a single\n"
                                "type of Pokémon.\n\n"
                                "These Gym Leaders give multiple rewards\n"
                                "for defeating them, including a Gym Badge.\n"
                                "A Gym Badge lets you use a corresponding\n"
                                "{COLOR RED}Hidden Machine{COLOR DARK_GRAY} outside battle."),
    },

    [HELP_OPTIONAL_BOSSES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Optional Bosses"),
        .desc = COMPOUND_STRING("Some Zones have an optional boss that\n"
                                "gives a special reward for beating them."),
    },

    [HELP_FIELD_MOVES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Field Moves"),
        .desc = COMPOUND_STRING("In addition to HMs, a number of other moves\n"
                                "have been made into field moves.\n"
                                "These custom field moves cost PP.\n\n"
                                "Aromatherapy, Heal Bell, and Refresh\n"
                                "cure status.\n"
                                "Sweet Scent is used to start a wild\n"
                                "Double Battle."),
    },

    [HELP_POKEMON_CHANGES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Pokémon Changes"),
        .desc = COMPOUND_STRING("Many Pokémon have minor adjustments to\n"
                                "their evolution methods and abilities from\n"
                                "vanilla Pokémon games.\n\n"
                                "Consult the {COLOR RED}Notebook{COLOR DARK_GRAY} for these changes."),
    },

    [HELP_DIFFERENT_AREAS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Different Areas"),
        .desc = COMPOUND_STRING("The encounterable Pokémon in different areas\n"
                                "of the same Zone may vary significantly."),
    },

    [HELP_POKEDEX_INFO] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Pokedex Info"),
        .desc = COMPOUND_STRING("You can see detailed information about a\n"
                                "Pokémon species in its Pokédex entry, such\n"
                                "such as its moveset or how to evolve it.\n\n"
                                "Any changes from vanilla can be found in\n"
                                "the {COLOR RED}Notebook{COLOR DARK_GRAY}."),
    },

    [HELP_BAG_TIPS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Bag Tips"),
        .desc = COMPOUND_STRING("You can sort items in the Bag using {START_BUTTON}.\n\n"
                                "You can register Key Items from the Bag for\n"
                                "easy use. Once an item is registered,\n"
                                "press {SELECT_BUTTON} to use it!\n"
                                "You can register multiple Key Items at a time."),
    },

    [HELP_CHANGE_MUSIC] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Change Music"),
        .desc = COMPOUND_STRING("You can change some of the music you hear by\n"
                                "speaking to the Guitarist in the Sanctuary."),
    },

    [HELP_STATS_IV_EV] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Viewing IVs/EVs"),
        .desc = COMPOUND_STRING("While you are on the Pokémon stats screen,\n"
                                "you can press {A_BUTTON} to switch between\n"
                                "stats, IVs, and EVs."),
    },

    [HELP_LEVEL_CAP] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Level Cap"),
        .desc = COMPOUND_STRING("The {COLOR RED}Notebook{COLOR DARK_GRAY} contains the current level cap."),
    },

    [HELP_BATTLE_CHANGES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Battle Changes"),
        .desc = COMPOUND_STRING("Some battle mechanics have minor adjustments\n"
                                "from vanilla, including:\n"
                                "- increased accuracy for many moves\n"
                                "- the Frostbite condition instead of Freeze\n"
                                "- experience gain\n\n"
                                "Consult the {COLOR RED}Notebook{COLOR DARK_GRAY} for more details."),
    },

    [HELP_SELECT_SWITCH] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Switch with Select"),
        .desc = COMPOUND_STRING("In the party menu, you can press {SELECT_BUTTON} to\n"
                                "quickly shift a Pokémon to the front of your\n"
                                "party."),
    },

    [HELP_GAUNTLET] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Gauntlets"),
        .desc = COMPOUND_STRING("Not all Zones have a single boss.\n\n"
                                "Some Zones have gauntlets, where you must\n"
                                "win multiple battles in a row."),
    },

    [HELP_SANCTUARY_AREAS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Sanctuary Areas"),
        .desc = COMPOUND_STRING("The Sanctuary has a few connected areas\n"
                                "that are unlocked with new HMs."),
    },

    [HELP_RESTORE_HELD_ITEMS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Held Items"),
        .desc = COMPOUND_STRING("All held items (except Berries) are\n"
                                "restored after battle.\n\n"
                                "This matches Gen 9 mechanics."),
    },

    [HELP_SELL_PRICE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Sell Price"),
        .desc = COMPOUND_STRING("Items can be sold at 1/4 of their original\n"
                                "price.\n\n"
                                "This matches Gen 9 mechanics."),
    },
    // rest is todo
};
