Zone14B_MapScripts::
# 2 "data/maps/Zone14B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME
# 9 "data/maps/Zone14B/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14B_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone14B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14B_HYPER_POTION, Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone14B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone14B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone14B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return

Zone14B_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Zone14B/scripts.pory"
	setflashlevel 4
	return


Zone14B_EventScript_LeviathanBattle::
# 15 "data/maps/Zone14B/scripts.pory"
	lock
# 16 "data/maps/Zone14B/scripts.pory"
	faceplayer
# 17 "data/maps/Zone14B/scripts.pory"
	fadeoutbgm 1
# 18 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_Text_Leviathan12Intro
# 19 "data/maps/Zone14B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 20 "data/maps/Zone14B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone14B_EventScript_LeviathanBattle_2
# 20 "data/maps/Zone14B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone14B_EventScript_LeviathanBattle_2
# 24 "data/maps/Zone14B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIGUEL
# 25 "data/maps/Zone14B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIGUEL_LEVIATHAN_12, Zone14B_Text_Leviathan12Defeat
Zone14B_EventScript_LeviathanBattle_1:
# 27 "data/maps/Zone14B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 28 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_EventScript_LeviathanBattle_Text_0
# 29 "data/maps/Zone14B/scripts.pory"
	additem ITEM_CHILAN_BERRY
# 30 "data/maps/Zone14B/scripts.pory"
	additem ITEM_OCCA_BERRY
# 31 "data/maps/Zone14B/scripts.pory"
	additem ITEM_PASSHO_BERRY
# 32 "data/maps/Zone14B/scripts.pory"
	additem ITEM_WACAN_BERRY
# 33 "data/maps/Zone14B/scripts.pory"
	additem ITEM_RINDO_BERRY
# 34 "data/maps/Zone14B/scripts.pory"
	additem ITEM_YACHE_BERRY
# 35 "data/maps/Zone14B/scripts.pory"
	additem ITEM_CHOPLE_BERRY
# 36 "data/maps/Zone14B/scripts.pory"
	additem ITEM_KEBIA_BERRY
# 37 "data/maps/Zone14B/scripts.pory"
	additem ITEM_SHUCA_BERRY
# 38 "data/maps/Zone14B/scripts.pory"
	additem ITEM_COBA_BERRY
# 39 "data/maps/Zone14B/scripts.pory"
	additem ITEM_PAYAPA_BERRY
# 40 "data/maps/Zone14B/scripts.pory"
	additem ITEM_TANGA_BERRY
# 41 "data/maps/Zone14B/scripts.pory"
	additem ITEM_CHARTI_BERRY
# 42 "data/maps/Zone14B/scripts.pory"
	additem ITEM_KASIB_BERRY
# 43 "data/maps/Zone14B/scripts.pory"
	additem ITEM_HABAN_BERRY
# 44 "data/maps/Zone14B/scripts.pory"
	additem ITEM_COLBUR_BERRY
# 45 "data/maps/Zone14B/scripts.pory"
	additem ITEM_BABIRI_BERRY
# 46 "data/maps/Zone14B/scripts.pory"
	additem ITEM_ROSELI_BERRY
# 47 "data/maps/Zone14B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 49 "data/maps/Zone14B/scripts.pory"
	waitfanfare
# 50 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_EventScript_LeviathanBattle_Text_2
# 51 "data/maps/Zone14B/scripts.pory"
	closemessage
# 52 "data/maps/Zone14B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/maps/Zone14B/scripts.pory"
	removeobject 4
# 54 "data/maps/Zone14B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_12
# 55 "data/maps/Zone14B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 56 "data/maps/Zone14B/scripts.pory"
	release
	end

Zone14B_EventScript_LeviathanBattle_2:
# 21 "data/maps/Zone14B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIGUEL
# 22 "data/maps/Zone14B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL, Zone14B_Text_Leviathan12Defeat
	goto Zone14B_EventScript_LeviathanBattle_1


Zone14B_EventScript_HyperPotion::
# 69 "data/maps/Zone14B/scripts.pory"
	lock
# 70 "data/maps/Zone14B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14B_HYPER_POTION, Zone14B_EventScript_HyperPotion_2
# 75 "data/maps/Zone14B/scripts.pory"
	waitse
# 76 "data/maps/Zone14B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 77 "data/maps/Zone14B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 78 "data/maps/Zone14B/scripts.pory"
	setflag FLAG_ITEM_ZONE14B_HYPER_POTION
# 79 "data/maps/Zone14B/scripts.pory"
	addobject VAR_LAST_TALKED
# 80 "data/maps/Zone14B/scripts.pory"
	finditem ITEM_HYPER_POTION, 1
# 81 "data/maps/Zone14B/scripts.pory"
	release
	end

Zone14B_EventScript_HyperPotion_2:
# 71 "data/maps/Zone14B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 72 "data/maps/Zone14B/scripts.pory"
	release
	end


# 85 "data/maps/Zone14B/scripts.pory"

# 86 "data/maps/Zone14B/scripts.pory"
Zone14B_EventScript_Randolph::
# 87 "data/maps/Zone14B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RANDOLPH, Zone14B_Text_RandolphIntro, Zone14B_Text_RandolphDefeat
# 88 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_Text_RandolphPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Zone14B/scripts.pory"
	end
# 90 "data/maps/Zone14B/scripts.pory"

# 91 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RandolphIntro:
# 92 "data/maps/Zone14B/scripts.pory"
	.string "You distracted me from my search!$"
# 93 "data/maps/Zone14B/scripts.pory"

# 94 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RandolphDefeat:
# 95 "data/maps/Zone14B/scripts.pory"
	.string "The search for cool Pokémon!$"
# 96 "data/maps/Zone14B/scripts.pory"

# 97 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RandolphPostBattle:
# 98 "data/maps/Zone14B/scripts.pory"
	.string "I guess you have some cool Pokémon.$"
# 99 "data/maps/Zone14B/scripts.pory"

# 100 "data/maps/Zone14B/scripts.pory"
Zone14B_EventScript_Todd::
# 101 "data/maps/Zone14B/scripts.pory"
	trainerbattle_single TRAINER_PBL_TODD, Zone14B_Text_ToddIntro, Zone14B_Text_ToddDefeat
# 102 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_Text_ToddPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Zone14B/scripts.pory"
	end
# 104 "data/maps/Zone14B/scripts.pory"

# 105 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_ToddIntro:
# 106 "data/maps/Zone14B/scripts.pory"
	.string "Hohoho!\n"
# 107 "data/maps/Zone14B/scripts.pory"
	.string "What a great place to work!$"
# 108 "data/maps/Zone14B/scripts.pory"

# 109 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_ToddDefeat:
# 110 "data/maps/Zone14B/scripts.pory"
	.string "Hohoho!\n"
# 111 "data/maps/Zone14B/scripts.pory"
	.string "What a terrible place to lose!$"
# 112 "data/maps/Zone14B/scripts.pory"

# 113 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_ToddPostBattle:
# 114 "data/maps/Zone14B/scripts.pory"
	.string "Hohoho!$"
# 115 "data/maps/Zone14B/scripts.pory"

# 116 "data/maps/Zone14B/scripts.pory"
Zone14B_EventScript_Russell::
# 117 "data/maps/Zone14B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RUSSELL, Zone14B_Text_RussellIntro, Zone14B_Text_RussellDefeat
# 118 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_Text_RussellPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Zone14B/scripts.pory"
	end
# 120 "data/maps/Zone14B/scripts.pory"

# 121 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RussellIntro:
# 122 "data/maps/Zone14B/scripts.pory"
	.string "In this old, abandoned mine,\n"
# 123 "data/maps/Zone14B/scripts.pory"
	.string "training is the best thing I can do\l"
# 124 "data/maps/Zone14B/scripts.pory"
	.string "for me and my Pokémon!$"
# 125 "data/maps/Zone14B/scripts.pory"

# 126 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RussellDefeat:
# 127 "data/maps/Zone14B/scripts.pory"
	.string "I'm sorry, my Pokémon!$"
# 128 "data/maps/Zone14B/scripts.pory"

# 129 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_RussellPostBattle:
# 130 "data/maps/Zone14B/scripts.pory"
	.string "We'll just have to train harder for\n"
# 131 "data/maps/Zone14B/scripts.pory"
	.string "next time!$"
# 132 "data/maps/Zone14B/scripts.pory"

# 133 "data/maps/Zone14B/scripts.pory"
Zone14B_EventScript_Otis::
# 134 "data/maps/Zone14B/scripts.pory"
	trainerbattle_single TRAINER_PBL_OTIS, Zone14B_Text_OtisIntro, Zone14B_Text_OtisDefeat
# 135 "data/maps/Zone14B/scripts.pory"
	msgbox Zone14B_Text_OtisPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Zone14B/scripts.pory"
	end
# 137 "data/maps/Zone14B/scripts.pory"

# 138 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_OtisIntro:
# 139 "data/maps/Zone14B/scripts.pory"
	.string "It takes extreme patience to raise\n"
# 140 "data/maps/Zone14B/scripts.pory"
	.string "Dragons.$"
# 141 "data/maps/Zone14B/scripts.pory"

# 142 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_OtisDefeat:
# 143 "data/maps/Zone14B/scripts.pory"
	.string "Do you have what it takes?$"
# 144 "data/maps/Zone14B/scripts.pory"

# 145 "data/maps/Zone14B/scripts.pory"
Zone14B_Text_OtisPostBattle:
# 146 "data/maps/Zone14B/scripts.pory"
	.string "These little ones are quite the\n"
# 147 "data/maps/Zone14B/scripts.pory"
	.string "handful. Just wait until they\l"
# 148 "data/maps/Zone14B/scripts.pory"
	.string "evolve!$"

Zone14B_EventScript_LeviathanBattle_Text_0:
# 28 "data/maps/Zone14B/scripts.pory"
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Oh… You're not here to cause\n"
	.string "trouble?\p"
	.string "You're just passing through?\p"
	.string "Well, I'm sorry about that! I get really\n"
	.string "riled up about protecting spaces for\l"
	.string "wild Pokémon.\p"
	.string "Here, as an apology, take these.$"

Zone14B_EventScript_LeviathanBattle_Text_1:
# 48 "data/maps/Zone14B/scripts.pory"
	.string "Obtained type-resisting Berries!$"

Zone14B_EventScript_LeviathanBattle_Text_2:
# 50 "data/maps/Zone14B/scripts.pory"
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Those Berries are especially\n"
	.string "useful if your Pokémon has a 4x\l"
	.string "weakness to a particular type.\p"
	.string "Alrighty, I'm going to check on other\n"
	.string "sections of the mine, to see if I can go\l"
	.string "catch the delinquents.\p"
	.string "You're free to pass through, so long as\n"
	.string "you don't disturb the wildlife.$"

Zone14B_Text_Leviathan12Intro::
# 60 "data/maps/Zone14B/scripts.pory"
	.string "{COLOR BLUE}Miguel{COLOR DARK_GRAY}: Hey you! You must be one of\n"
	.string "those delinquents causing trouble in\l"
	.string "this old mine!\p"
	.string "I've told you kids a hundred times, this\n"
	.string "area is off limits because it's a\l"
	.string "protected wild Pokémon habitat.\p"
	.string "All right, here's a lesson that'll teach\n"
	.string "you to stay out of places you aren't\l"
	.string "supposed to be!$"

Zone14B_Text_Leviathan12Defeat::
# 64 "data/maps/Zone14B/scripts.pory"
	.string "Wait, you're not a delinquent?$"
