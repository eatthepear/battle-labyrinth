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
                                "All boss battles are more difficult.\n"
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

    [HELP_NOTEBOOK_LEVIATHAN_1] =
    {
        .header = COMPOUND_STRING("Zone 1 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Cori{COLOR DARK_GRAY} the School Kid has:\n"
                                "{COLOR GREEN}Pansage{COLOR DARK_GRAY}, {COLOR GREEN}Pansear{COLOR DARK_GRAY}, and {COLOR GREEN}Panpour{COLOR DARK_GRAY}.\n\n"
                                "She leads with the one weak to your starter.\n"
                                "Her ace is strong against your starter."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_2] =
    {
        .header = COMPOUND_STRING("Zone 2 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Shaun{COLOR DARK_GRAY} the Youngster has:\n"
                                "{COLOR GREEN}Bunnelby{COLOR DARK_GRAY}, {COLOR GREEN}Smoliv{COLOR DARK_GRAY}, and {COLOR GREEN}Skwovet{COLOR DARK_GRAY}.\n\n"
                                "His Pokémon utilize {COLOR GREEN}Oran Berries{COLOR DARK_GRAY} well."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_2_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 2 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Shaun{COLOR DARK_GRAY} the Youngster has:\n"
                                "{COLOR GREEN}Bunnelby{COLOR DARK_GRAY}, {COLOR GREEN}Smoliv{COLOR DARK_GRAY}, {COLOR GREEN}Gulpin{COLOR DARK_GRAY}, and {COLOR GREEN}Skwovet{COLOR DARK_GRAY}.\n\n"
                                "His Pokémon utilize {COLOR GREEN}Oran Berries{COLOR DARK_GRAY} well."),
    },

    [HELP_NOTEBOOK_OPTIONAL_1] =
    {
        .header = COMPOUND_STRING("Zone 3 Optional"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Bill{COLOR DARK_GRAY} the Rich Boy has:\n"
                                "{COLOR GREEN}Bidoof{COLOR DARK_GRAY}, {COLOR GREEN}Sandshrew{COLOR DARK_GRAY}, and {COLOR GREEN}Marill{COLOR DARK_GRAY}.\n\n"
                                "His Pokémon use {COLOR GREEN}Defense Curl{COLOR DARK_GRAY} and {COLOR GREEN}Rollout{COLOR DARK_GRAY}."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_3] =
    {
        .header = COMPOUND_STRING("Zone 3 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Grant{COLOR DARK_GRAY} the Gym Leader has:\n"
                                "{COLOR GREEN}Tyrunt{COLOR DARK_GRAY} and {COLOR GREEN}Amaura{COLOR DARK_GRAY}.\n\n"
                                "He is a Rock-type specialist.\n"
                                "His Pokémon have high stats and strong\n"
                                "typings to counter their weaknesses."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_3_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 3 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Grant{COLOR DARK_GRAY} the Gym Leader has:\n"
                                "{COLOR GREEN}Tyrunt{COLOR DARK_GRAY}, {COLOR GREEN}Shieldon{COLOR DARK_GRAY}, and {COLOR GREEN}Amaura{COLOR DARK_GRAY}.\n\n"
                                "He is a Rock-type specialist.\n"
                                "His Pokémon have high stats and strong\n"
                                "typings to counter their weaknesses."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_4] =
    {
        .header = COMPOUND_STRING("Zone 4 Leviathan (Double Battle)"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Proton{COLOR DARK_GRAY} the Team Rainbow Rocket Admin has:\n"
                                "{COLOR GREEN}Koffing{COLOR DARK_GRAY}, {COLOR GREEN}Salandit{COLOR DARK_GRAY}, and {COLOR GREEN}Whirlipede{COLOR DARK_GRAY}.\n\n"
                                "His Pokémon use {COLOR GREEN}Poison Gas{COLOR DARK_GRAY} to inflict\n"
                                "poison, which enables moves like {COLOR GREEN}Venoshock{COLOR DARK_GRAY}."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_4_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 4 Leviathan (Double Battle)"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Proton{COLOR DARK_GRAY} the Team Rainbow Rocket Admin has:\n"
                                "{COLOR GREEN}Koffing{COLOR DARK_GRAY}, {COLOR GREEN}Salandit{COLOR DARK_GRAY}, {COLOR GREEN}Frillish{COLOR DARK_GRAY}, and {COLOR GREEN}Whirlipede{COLOR DARK_GRAY}.\n\n"
                                "His Pokémon use {COLOR GREEN}Poison Gas{COLOR DARK_GRAY} to inflict\n"
                                "poison, which enables moves like {COLOR GREEN}Venoshock{COLOR DARK_GRAY}."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_5] =
    {
        .header = COMPOUND_STRING("Zone 5 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Liza{COLOR DARK_GRAY} the Gym Leader has:\n"
                                "{COLOR GREEN}Munna{COLOR DARK_GRAY}, {COLOR GREEN}Spoink{COLOR DARK_GRAY}, and {COLOR GREEN}Lunatone{COLOR DARK_GRAY}.\n\n"
                                "She is fought in permanent {COLOR GREEN}Psychic Terrain{COLOR DARK_GRAY}.\n"
                                "She is a Psychic-type specialist.\n"
                                "Her Pokémon like to set up {COLOR GREEN}Reflect{COLOR DARK_GRAY} and\n"
                                "{COLOR GREEN}Light Screen{COLOR DARK_GRAY}."),
    },

    [HELP_NOTEBOOK_LEVIATHAN_5_BRUTAL] =
    {
        .header = COMPOUND_STRING("Zone 5 Leviathan"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Liza{COLOR DARK_GRAY} the Gym Leader has:\n"
                                "{COLOR GREEN}Munna{COLOR DARK_GRAY}, {COLOR GREEN}Spoink{COLOR DARK_GRAY}, {COLOR GREEN}Natu{COLOR DARK_GRAY}, and {COLOR GREEN}Lunatone{COLOR DARK_GRAY}.\n\n"
                                "She is fought in permanent {COLOR GREEN}Psychic Terrain{COLOR DARK_GRAY}.\n"
                                "She is a Psychic-type specialist.\n"
                                "Her Pokémon like to set up {COLOR GREEN}Reflect{COLOR DARK_GRAY} and\n"
                                "{COLOR GREEN}Light Screen{COLOR DARK_GRAY}."),
    },

    [HELP_NOTEBOOK_OPTIONAL_2] =
    {
        .header = COMPOUND_STRING("Zone 5 Optional"),
        .desc = COMPOUND_STRING("{COLOR BLUE}Melinda{COLOR DARK_GRAY} the Lady has:\n"
                                "{COLOR GREEN}Luvdisc{COLOR DARK_GRAY}, {COLOR GREEN}Delibird{COLOR DARK_GRAY}, and {COLOR GREEN}Spinda{COLOR DARK_GRAY}.\n\n"
                                "Her Pokémon may not seem strong, but they\n"
                                "are fully evolved, which can be a threat."),
    },

    [HELP_CHANGES_ACCURACY] =
    {
        .header = COMPOUND_STRING("Battle Changes: Accuracy"),
        .desc = COMPOUND_STRING("All moves with 95%, 90%, 85%, 80%, and 75%\n"
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
                                "Head Smash, Bleakwind Storm, Wildbolt Storm,\n"
                                "Sandsear Storm, Sleep Powder, & Lovely Kiss"),
    },

    [HELP_CHANGES_EXPERIENCE] =
    {
        .header = COMPOUND_STRING("Battle Changes: Experience"),
        .desc = COMPOUND_STRING("There are hard level caps built in, which\n"
                                "typically increase by 2 every {COLOR GREEN}Zone{COLOR DARK_GRAY}.\n"
                                "The amount of experience gained from a\n"
                                "defeated Pokémon is a flat number based on\n"
                                "the current {COLOR GREEN}Zone{COLOR DARK_GRAY} only.\n"
                                "Pokémon don't gain experience through wild\n"
                                "battles except on {COLOR GREEN}Easy{COLOR DARK_GRAY} difficulty."),
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

    [HELP_INFINITE_REPEL] =
    {
        .header = COMPOUND_STRING("Infinite Repel"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Infinite Repellent{COLOR DARK_GRAY} allows you to avoid\n"
                                "encountering any wild Pokémon.\n"
                                "It works regardless of your Pokémon's level.\n\n"
                                "It is recommended to register the\n"
                                "{COLOR GREEN}Infinite Repellent{COLOR DARK_GRAY} for easy toggling."),
    },

    [HELP_SIGN_NOTEBOOK] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Notebook"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Notebook{COLOR DARK_GRAY} is filled with useful\n"
                                "information, including mechanics changes\n"
                                "from vanilla Pokémon games, upcoming Zones\n"
                                "and boss battles, and difficulty info.\n\n"
                                "Any Trainer Tips signs you read will have\n"
                                "their messages transcribed in the Notebook."),
    },

    [HELP_SIGN_COMPLETING_A_ZONE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Completing a Zone"),
        .desc = COMPOUND_STRING("To complete a Zone, find {COLOR GREEN}Porygon{COLOR DARK_GRAY}.\n\n"
                                "You don't necessarily need to defeat all\n"
                                "opponents to complete a Zone."),
    },

    [HELP_SIGN_RUNNING_SHOES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Running Shoes"),
        .desc = COMPOUND_STRING("Press the {L_BUTTON} to toggle the Running Shoes.\n\n"
                                "While the Running Shoes are toggled on by\n"
                                "default, you can hold {B_BUTTON} to walk."),
    },

    [HELP_SIGN_ZONE_INFO] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Zone Info"),
        .desc = COMPOUND_STRING("You can see a short preview of the next Zone\n"
                                "by consulting the {COLOR GREEN}Notebook{COLOR DARK_GRAY}.\n\n"
                                "This includes:\n"
                                "- a general description of the Zone\n"
                                "- how many opponents remain in the Zone\n"
                                "- a summary of any bosses in the Zone"),
    },

    [HELP_SIGN_INFINITE_CANDY] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Infinite Candy"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Infinite Candy{COLOR DARK_GRAY} can be used to increase\n"
                                "your Pokémon's level.\n\n"
                                "If you are in the {COLOR GREEN}Sanctuary{COLOR DARK_GRAY}, the maximum\n"
                                "level is the current level cap.\n"
                                "If you are in a {COLOR GREEN}Zone{COLOR DARK_GRAY}, the maximum level is\n"
                                "the prior level cap."),
    },

    [HELP_SIGN_SURVEIL] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Surveil"),
        .desc = COMPOUND_STRING("In battle, you can use {COLOR GREEN}Surveil{COLOR DARK_GRAY} to see the\n"
                                "opposing team(s).\n\n"
                                "In a battle against two opponents, press {R_BUTTON}\n"
                                "to toggle between the oppposing teams."),
    },

    [HELP_SIGN_HONEY_SWEET_SCENT] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Honey & Sweet Scent"),
        .desc = COMPOUND_STRING("{COLOR GREEN}Honey{COLOR DARK_GRAY} can be slathered on a Honey Tree to\n"
                                "encounter a Pokémon.\n"
                                "{COLOR GREEN}Honey{COLOR DARK_GRAY} can also be used to start a wild\n"
                                "Double Battle if used from the Bag.\n\n"
                                "The field move {COLOR GREEN}Sweet Scent{COLOR DARK_GRAY} can also start\n"
                                "a wild Double Battle this way!"),
    },

    [HELP_SIGN_DOWSING_MACHINE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Dowsing Machine"),
        .desc = COMPOUND_STRING("You can use the {COLOR GREEN}Dowsing Machine{COLOR DARK_GRAY} to help you\n"
                                "find such hidden items.\n\n"
                                "As you get closer to a hidden item, the\n"
                                "Dowsing Machine will make noises, change\n"
                                "color, and shake until it shakes red,\n"
                                "meaning an item is right in front of you!"),
    },

    [HELP_SIGN_HIDDEN_MACHINES] =
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

    [HELP_SIGN_LEADER] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Gym Leader"),
        .desc = COMPOUND_STRING("Some Zones have {COLOR GREEN}Gym Leaders{COLOR DARK_GRAY}, a particularly\n"
                                "challenging boss specializing in a single\n"
                                "type of Pokémon.\n\n"
                                "These Gym Leaders give multiple rewards\n"
                                "for defeating them, including a Gym Badge.\n"
                                "A Gym Badge lets you use a corresponding\n"
                                "{COLOR GREEN}Hidden Machine{COLOR DARK_GRAY} outside battle."),
    },

    [HELP_SIGN_OPTIONAL_BOSSES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Optional Bosses"),
        .desc = COMPOUND_STRING("Some Zones have an optional boss that\n"
                                "gives a special reward for beating them."),
    },

    [HELP_SIGN_FIELD_MOVES] =
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

    [HELP_SIGN_POKEMON_CHANGES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Pokémon Changes"),
        .desc = COMPOUND_STRING("Many Pokémon have minor adjustments to\n"
                                "their evolution methods and abilities from\n"
                                "vanilla Pokémon games.\n\n"
                                "Consult the {COLOR GREEN}Notebook{COLOR DARK_GRAY} for these changes."),
    },

    [HELP_SIGN_DIFFERENT_AREAS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Different Areas"),
        .desc = COMPOUND_STRING("The encounterable Pokémon in different areas\n"
                                "of the same Zone may vary significantly."),
    },

    [HELP_SIGN_POKEDEX_INFO] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Pokedex Info"),
        .desc = COMPOUND_STRING("You can see detailed information about a\n"
                                "Pokémon species in its Pokédex entry, such\n"
                                "such as its moveset or how to evolve it.\n\n"
                                "Any changes from vanilla can be found in\n"
                                "the {COLOR GREEN}Notebook{COLOR DARK_GRAY}."),
    },

    [HELP_SIGN_BAG_TIPS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Bag Tips"),
        .desc = COMPOUND_STRING("You can sort items in the Bag using {START_BUTTON}.\n\n"
                                "You can register Key Items from the Bag for\n"
                                "easy use. Once an item is registered,\n"
                                "press {SELECT_BUTTON} to use it!\n"
                                "You can register multiple Key Items at a time."),
    },

    [HELP_SIGN_CHANGE_MUSIC] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Change Music"),
        .desc = COMPOUND_STRING("You can change some of the music you hear by\n"
                                "speaking to the Guitarist in the Sanctuary."),
    },

    [HELP_SIGN_STATS_IV_EV] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Viewing IVs/EVs"),
        .desc = COMPOUND_STRING("While you are on the Pokémon stats screen,\n"
                                "you can press {A_BUTTON} to switch between\n"
                                "stats, IVs, and EVs."),
    },

    [HELP_SIGN_LEVEL_CAP] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Level Cap"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Notebook{COLOR DARK_GRAY} contains the current level cap."),
    },

    [HELP_SIGN_BATTLE_CHANGES] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Battle Changes"),
        .desc = COMPOUND_STRING("Some battle mechanics have minor adjustments\n"
                                "from vanilla, including:\n"
                                "- increased accuracy for many moves\n"
                                "- the Frostbite condition instead of Freeze\n"
                                "- experience gain\n\n"
                                "Consult the {COLOR GREEN}Notebook{COLOR DARK_GRAY} for more details."),
    },

    [HELP_SIGN_SELECT_SWITCH] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Switch with Select"),
        .desc = COMPOUND_STRING("In the party menu, you can press {SELECT_BUTTON} to\n"
                                "quickly shift a Pokémon to the front of your\n"
                                "party."),
    },

    [HELP_SIGN_GAUNTLET] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Gauntlets"),
        .desc = COMPOUND_STRING("Not all Zones have a single boss.\n\n"
                                "Some Zones have gauntlets, where you must\n"
                                "win multiple battles in a row."),
    },

    [HELP_SIGN_SANCTUARY_AREAS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Sanctuary Areas"),
        .desc = COMPOUND_STRING("The Sanctuary has a few connected areas\n"
                                "that are unlocked with new HMs."),
    },

    [HELP_SIGN_RESTORE_HELD_ITEMS] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Held Items"),
        .desc = COMPOUND_STRING("All held items (except Berries) are\n"
                                "restored after battle.\n\n"),
    },

    [HELP_SIGN_ITEM_PRICE] =
    {
        .header = COMPOUND_STRING("Trainer Tips: Item Price"),
        .desc = COMPOUND_STRING("Items sell for 1/4 of their original price.\n"
                                "Some items have had their prices changed\n"
                                "from vanilla Pokémon games.\n\n"
                                "{COLOR GREEN}Honey{COLOR DARK_GRAY}, Mints, & Exp. Candies cost ¥80.\n"
                                "Shards cost ¥200.\n"
                                "Tera Shards cost ¥200.\n"
                                "Heart Scales cost ¥2400."),
    },

    [HELP_SACRED_ASH] =
    {
        .header = COMPOUND_STRING("Sacred Ash"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Sacred Ash{COLOR DARK_GRAY} is a single use item that\n"
                                "restores your entire party to full HP and\n"
                                "cures any status condition, including\n"
                                "reviving fainted Pokémon.\n"
                                "It is exceedingly rare."),
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

    [HELP_PORTABLE_PC] =
    {
        .header = COMPOUND_STRING("Portable PC"),
        .desc = COMPOUND_STRING("The {COLOR GREEN}Portable PC{COLOR DARK_GRAY} can be accessed from the\n"
                                "{START_BUTTON} menu.\n\n"
                                "It can only be used once per {COLOR GREEN}Zone{COLOR DARK_GRAY},\n"
                                "but can be accessed at will from the\n"
                                "{COLOR GREEN}Sanctuary{COLOR DARK_GRAY}."),
    },
};
