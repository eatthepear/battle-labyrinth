Zone13A_MapScripts::
# 2 "data/maps/Zone13A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone13A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE13A_LEAF_STONE, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone13A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE13A_SHINY_STONE, Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone13A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone13A_EventScript_ParasolLady::
# 17 "data/maps/Zone13A/scripts.pory"
	lock
# 18 "data/maps/Zone13A/scripts.pory"
	faceplayer
# 19 "data/maps/Zone13A/scripts.pory"
	goto_if_unset FLAG_ZONE13A_RECEIVED_UTILITY_UMBRELLA, Zone13A_EventScript_ParasolLady_2
Zone13A_EventScript_ParasolLady_1:
# 24 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_EventScript_ParasolLady_Text_1
# 25 "data/maps/Zone13A/scripts.pory"
	release
	end

Zone13A_EventScript_ParasolLady_2:
# 20 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_EventScript_ParasolLady_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/Zone13A/scripts.pory"
	giveitem ITEM_UTILITY_UMBRELLA
# 22 "data/maps/Zone13A/scripts.pory"
	setflag FLAG_ZONE13A_RECEIVED_UTILITY_UMBRELLA
	goto Zone13A_EventScript_ParasolLady_1


Zone13A_EventScript_LeafStone::
# 30 "data/maps/Zone13A/scripts.pory"
	lock
# 31 "data/maps/Zone13A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE13A_LEAF_STONE, Zone13A_EventScript_LeafStone_2
# 36 "data/maps/Zone13A/scripts.pory"
	waitse
# 37 "data/maps/Zone13A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 39 "data/maps/Zone13A/scripts.pory"
	setflag FLAG_ITEM_ZONE13A_LEAF_STONE
# 40 "data/maps/Zone13A/scripts.pory"
	addobject VAR_LAST_TALKED
# 41 "data/maps/Zone13A/scripts.pory"
	finditem ITEM_LEAF_STONE, 1
# 42 "data/maps/Zone13A/scripts.pory"
	release
	end

Zone13A_EventScript_LeafStone_2:
# 32 "data/maps/Zone13A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 33 "data/maps/Zone13A/scripts.pory"
	release
	end


Zone13A_EventScript_ShinyStone::
# 47 "data/maps/Zone13A/scripts.pory"
	lock
# 48 "data/maps/Zone13A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE13A_SHINY_STONE, Zone13A_EventScript_ShinyStone_2
# 53 "data/maps/Zone13A/scripts.pory"
	waitse
# 54 "data/maps/Zone13A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 55 "data/maps/Zone13A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 56 "data/maps/Zone13A/scripts.pory"
	setflag FLAG_ITEM_ZONE13A_SHINY_STONE
# 57 "data/maps/Zone13A/scripts.pory"
	addobject VAR_LAST_TALKED
# 58 "data/maps/Zone13A/scripts.pory"
	finditem ITEM_SHINY_STONE, 1
# 59 "data/maps/Zone13A/scripts.pory"
	release
	end

Zone13A_EventScript_ShinyStone_2:
# 49 "data/maps/Zone13A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 50 "data/maps/Zone13A/scripts.pory"
	release
	end


# 63 "data/maps/Zone13A/scripts.pory"

# 64 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_Violet::
# 65 "data/maps/Zone13A/scripts.pory"
	trainerbattle_single TRAINER_PBL_VIOLET, Zone13A_Text_VioletIntro, Zone13A_Text_VioletDefeat
# 66 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Zone13A/scripts.pory"
	end
# 68 "data/maps/Zone13A/scripts.pory"

# 69 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_VioletIntro:
# 70 "data/maps/Zone13A/scripts.pory"
	.string "Ah, finally, a pleasant aroma!$"
# 71 "data/maps/Zone13A/scripts.pory"

# 72 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_VioletDefeat:
# 73 "data/maps/Zone13A/scripts.pory"
	.string "I wasn't talking about you!\n"
# 74 "data/maps/Zone13A/scripts.pory"
	.string "I meant the flowers!$"
# 75 "data/maps/Zone13A/scripts.pory"

# 76 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_VioletPostBattle:
# 77 "data/maps/Zone13A/scripts.pory"
	.string "Though, you do smell nice.\n"
# 78 "data/maps/Zone13A/scripts.pory"
	.string "Uh, nevermind.$"
# 79 "data/maps/Zone13A/scripts.pory"
	
# 80 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_Wanda::
# 81 "data/maps/Zone13A/scripts.pory"
	trainerbattle_single TRAINER_PBL_WANDA, Zone13A_Text_WandaIntro, Zone13A_Text_WandaDefeat
# 82 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_WandaPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Zone13A/scripts.pory"
	end
# 84 "data/maps/Zone13A/scripts.pory"

# 85 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_WandaIntro:
# 86 "data/maps/Zone13A/scripts.pory"
	.string "Would you like to see my Pokémon?\n"
# 87 "data/maps/Zone13A/scripts.pory"
	.string "I paid big money to get them!$"
# 88 "data/maps/Zone13A/scripts.pory"

# 89 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_WandaDefeat:
# 90 "data/maps/Zone13A/scripts.pory"
	.string "Well, kind of.\n"
# 91 "data/maps/Zone13A/scripts.pory"
	.string "It's a long story.$"
# 92 "data/maps/Zone13A/scripts.pory"

# 93 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_WandaPostBattle:
# 94 "data/maps/Zone13A/scripts.pory"
	.string "Have you ever heard the word\n"
# 95 "data/maps/Zone13A/scripts.pory"
	.string "nepotism?$"
# 96 "data/maps/Zone13A/scripts.pory"

# 97 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_AmberandKim::
# 98 "data/maps/Zone13A/scripts.pory"
	trainerbattle_double TRAINER_PBL_AMBER_AND_KIM, Zone13A_Text_AmberandKimIntro, Zone13A_Text_AmberandKimDefeat, gText_NotEnoughMons
# 99 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_AmberandKimPostBattle, MSGBOX_DEFAULT
# 100 "data/maps/Zone13A/scripts.pory"
	release
# 101 "data/maps/Zone13A/scripts.pory"
	end
# 102 "data/maps/Zone13A/scripts.pory"

# 103 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_AmberandKimIntro:
# 104 "data/maps/Zone13A/scripts.pory"
	.string "Amber: As twins, we're in sync!\n"
# 105 "data/maps/Zone13A/scripts.pory"
	.string "We always finish each others\p"
# 106 "data/maps/Zone13A/scripts.pory"
	.string "Kim: Sandwiches!$"
# 107 "data/maps/Zone13A/scripts.pory"

# 108 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_AmberandKimDefeat:
# 109 "data/maps/Zone13A/scripts.pory"
	.string "Amber: Let it go!\p"
# 110 "data/maps/Zone13A/scripts.pory"
	.string "Kim: I love Frozen!$"
# 111 "data/maps/Zone13A/scripts.pory"

# 112 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_AmberandKimPostBattle:
# 113 "data/maps/Zone13A/scripts.pory"
	.string "Amber: Kim, next time, hit em with\n"
# 114 "data/maps/Zone13A/scripts.pory"
	.string "the one-two, okay?\p"
# 115 "data/maps/Zone13A/scripts.pory"
	.string "Kim: Okay, sister!$"
# 116 "data/maps/Zone13A/scripts.pory"

# 117 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_JanandErin::
# 118 "data/maps/Zone13A/scripts.pory"
	trainerbattle_double TRAINER_PBL_JAN_AND_ERIN, Zone13A_Text_JanandErinIntro, Zone13A_Text_JanandErinDefeat, gText_NotEnoughMons
# 119 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_JanandErinPostBattle, MSGBOX_DEFAULT
# 120 "data/maps/Zone13A/scripts.pory"
	release
# 121 "data/maps/Zone13A/scripts.pory"
	end
# 122 "data/maps/Zone13A/scripts.pory"

# 123 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_JanandErinIntro:
# 124 "data/maps/Zone13A/scripts.pory"
	.string "Jan: After our time together\n"
# 125 "data/maps/Zone13A/scripts.pory"
	.string "terrorizing new trainers in Kalos,\p"
# 126 "data/maps/Zone13A/scripts.pory"
	.string "Erin: We've come to rain on your\n"
# 127 "data/maps/Zone13A/scripts.pory"
	.string "parade with our Furfrou!$"
# 128 "data/maps/Zone13A/scripts.pory"

# 129 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_JanandErinDefeat:
# 130 "data/maps/Zone13A/scripts.pory"
	.string "Jan: My Furfrou!\p"
# 131 "data/maps/Zone13A/scripts.pory"
	.string "Erin: My Furfrou!$"
# 132 "data/maps/Zone13A/scripts.pory"

# 133 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_JanandErinPostBattle:
# 134 "data/maps/Zone13A/scripts.pory"
	.string "Jan: Maybe it's time to settle down.\p"
# 135 "data/maps/Zone13A/scripts.pory"
	.string "Erin: Yeah. In Hoenn, maybe.$"
# 136 "data/maps/Zone13A/scripts.pory"

# 137 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_Steve::
# 138 "data/maps/Zone13A/scripts.pory"
	trainerbattle_single TRAINER_PBL_STEVE, Zone13A_Text_SteveIntro, Zone13A_Text_SteveDefeat
# 139 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_StevePostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Zone13A/scripts.pory"
	end
# 141 "data/maps/Zone13A/scripts.pory"

# 142 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_SteveIntro:
# 143 "data/maps/Zone13A/scripts.pory"
	.string "I can hear them buzzing!\n"
# 144 "data/maps/Zone13A/scripts.pory"
	.string "Where are you, my precious Bug\l"
# 145 "data/maps/Zone13A/scripts.pory"
	.string "Pokémon?$"
# 146 "data/maps/Zone13A/scripts.pory"

# 147 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_SteveDefeat:
# 148 "data/maps/Zone13A/scripts.pory"
	.string "Bzzt!$"
# 149 "data/maps/Zone13A/scripts.pory"

# 150 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_StevePostBattle:
# 151 "data/maps/Zone13A/scripts.pory"
	.string "The only pest I found was you!$"
# 152 "data/maps/Zone13A/scripts.pory"

# 153 "data/maps/Zone13A/scripts.pory"
Zone13A_EventScript_Sign::
# 154 "data/maps/Zone13A/scripts.pory"
	msgbox Zone13A_Text_Sign, MSGBOX_SIGN
# 155 "data/maps/Zone13A/scripts.pory"
	end
# 156 "data/maps/Zone13A/scripts.pory"

# 157 "data/maps/Zone13A/scripts.pory"
Zone13A_Text_Sign:
# 158 "data/maps/Zone13A/scripts.pory"
	.string "Mining Facility$"

Zone13A_EventScript_ParasolLady_Text_0:
# 20 "data/maps/Zone13A/scripts.pory"
	.string "Rain or shine, it's important to protect\n"
	.string "yourself from the elements!$"

Zone13A_EventScript_ParasolLady_Text_1:
# 24 "data/maps/Zone13A/scripts.pory"
	.string "The Utility Umbrella nullifies the\n"
	.string "effects of harsh sunlight or rain on\l"
	.string "the user.\p"
	.string "Isn't that neat?$"
