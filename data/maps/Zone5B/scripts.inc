Zone5B_MapScripts::
# 2 "data/maps/Zone5B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_1, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_2, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GEMS, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GENTLE_MINT, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5B_EventScript_LeviathanBattle::
# 30 "data/maps/Zone5B/scripts.pory"
	lockall
# 31 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 32 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 33 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
# 34 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_LeviathanBattle_2
# 40 "data/maps/Zone5B/scripts.pory"
	closemessage
# 41 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Zone5B_Maria_Movement_WalkDown
# 42 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 43 "data/maps/Zone5B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 44 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq Zone5B_EventScript_LeviathanBattle_5
Zone5B_EventScript_LeviathanBattle_4:
# 50 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, 0
# 51 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
# 52 "data/maps/Zone5B/scripts.pory"
	fadeoutbgm 1
# 53 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_Leviathan5Intro
# 54 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 55 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone5B_EventScript_LeviathanBattle_8
# 55 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone5B_EventScript_LeviathanBattle_8
# 58 "data/maps/Zone5B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MARIA_LEVIATHAN_5, Zone5B_Text_Leviathan5Defeat
Zone5B_EventScript_LeviathanBattle_7:
# 60 "data/maps/Zone5B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 61 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 62 "data/maps/Zone5B/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 63 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_LeviathanBattle_Text_2, MSGBOX_AUTOCLOSE
# 64 "data/maps/Zone5B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq Zone5B_EventScript_LeviathanBattle_14
Zone5B_EventScript_LeviathanBattle_13:
# 69 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, 0
# 70 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
# 71 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Zone5B_Maria_Movement_WalkUp
# 72 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 73 "data/maps/Zone5B/scripts.pory"
	removeobject 1
# 74 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_5
# 75 "data/maps/Zone5B/scripts.pory"
	setvar VAR_ZONE_5_STATE, 1
# 76 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_LeviathanBattle_2:
# 35 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 36 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone5B/scripts.pory"
	releaseall
	end

Zone5B_EventScript_LeviathanBattle_5:
# 45 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 46 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 47 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 48 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
	goto Zone5B_EventScript_LeviathanBattle_4

Zone5B_EventScript_LeviathanBattle_8:
# 56 "data/maps/Zone5B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MARIA_LEVIATHAN_5_BRUTAL, Zone5B_Text_Leviathan5Defeat
	goto Zone5B_EventScript_LeviathanBattle_7

Zone5B_EventScript_LeviathanBattle_14:
# 66 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 67 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
	goto Zone5B_EventScript_LeviathanBattle_13


# 80 "data/maps/Zone5B/scripts.pory"
Zone5B_Maria_Movement_WalkDown:
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 81 "data/maps/Zone5B/scripts.pory"
	walk_down
# 82 "data/maps/Zone5B/scripts.pory"
	walk_left
# 82 "data/maps/Zone5B/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/Zone5B/scripts.pory"
Zone5B_Maria_Movement_WalkUp:
# 94 "data/maps/Zone5B/scripts.pory"
	walk_right
# 94 "data/maps/Zone5B/scripts.pory"
	walk_right
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
# 95 "data/maps/Zone5B/scripts.pory"
	walk_up
	step_end

Zone5B_EventScript_BuyPikaClone::
# 99 "data/maps/Zone5B/scripts.pory"
	lock
# 100 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 101 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_3
Zone5B_EventScript_BuyPikaClone_1:
# 106 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 107 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_1, MSGBOX_YESNO
# 108 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_7
# 114 "data/maps/Zone5B/scripts.pory"
	checkmoney 1000, 0
# 115 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_10
# 121 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_13
# 217 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_6
# 218 "data/maps/Zone5B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone5B_EventScript_BuyPikaClone_Text_7, Zone5B_EventScript_BuyPikaClone_Text_8, Zone5B_EventScript_BuyPikaClone_Text_9, Zone5B_EventScript_BuyPikaClone_Text_10, Zone5B_EventScript_BuyPikaClone_Text_11
# 219 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 220 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_23
# 222 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_24
# 224 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_25
# 226 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_26
# 228 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_27
# 230 "data/maps/Zone5B/scripts.pory"
	case MULTI_B_PRESSED, Zone5B_EventScript_BuyPikaClone_28
Zone5B_EventScript_BuyPikaClone_12:
# 238 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 239 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_17
Zone5B_EventScript_BuyPikaClone_16:
# 263 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_30
# 273 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 274 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_15, MSGBOX_YESNO
# 275 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_45
Zone5B_EventScript_BuyPikaClone_29:
# 282 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_40
Zone5B_EventScript_BuyPikaClone_39:
# 286 "data/maps/Zone5B/scripts.pory"
	removemoney 1000
# 287 "data/maps/Zone5B/scripts.pory"
	updatemoneybox
# 288 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_16, MSGBOX_DEFAULT
# 289 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 290 "data/maps/Zone5B/scripts.pory"
	givemon VAR_TEMP_1, 12, ITEM_NONE
# 291 "data/maps/Zone5B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 250
# 292 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 293 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_17, MSGBOX_DEFAULT
# 294 "data/maps/Zone5B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 295 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_18
# 296 "data/maps/Zone5B/scripts.pory"
	waitmessage
# 297 "data/maps/Zone5B/scripts.pory"
	waitfanfare
# 298 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_19, MSGBOX_YESNO
# 299 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5B_EventScript_BuyPikaClone_53
Zone5B_EventScript_BuyPikaClone_52:
# 303 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_20, MSGBOX_DEFAULT
# 304 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_2:
# 102 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_0
# 103 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_3:
# 101 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE, Zone5B_EventScript_BuyPikaClone_2
	goto Zone5B_EventScript_BuyPikaClone_1

Zone5B_EventScript_BuyPikaClone_7:
# 109 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 110 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 111 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_10:
# 116 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_3
# 117 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 118 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_13:
# 122 "data/maps/Zone5B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone5B_EventScript_BuyPikaClone_19
# 214 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_17:
# 240 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_12, MSGBOX_AUTOCLOSE
# 241 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 242 "data/maps/Zone5B/scripts.pory"
	special ChoosePartyMon
# 243 "data/maps/Zone5B/scripts.pory"
	waitstate
# 244 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 245 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 246 "data/maps/Zone5B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone5B_EventScript_BuyPikaClone_34
# 252 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 253 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 254 "data/maps/Zone5B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 255 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_13, MSGBOX_YESNO
# 256 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_47
	goto Zone5B_EventScript_BuyPikaClone_16

Zone5B_EventScript_BuyPikaClone_19:
# 123 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 124 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 125 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_37
Zone5B_EventScript_BuyPikaClone_36:
# 128 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 129 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_50
Zone5B_EventScript_BuyPikaClone_49:
# 132 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 133 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_56
Zone5B_EventScript_BuyPikaClone_55:
# 136 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PLUSLE
# 137 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_59
Zone5B_EventScript_BuyPikaClone_58:
# 140 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MINUN
# 141 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_62
Zone5B_EventScript_BuyPikaClone_61:
# 144 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 145 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_65
Zone5B_EventScript_BuyPikaClone_64:
# 148 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 149 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_68
Zone5B_EventScript_BuyPikaClone_67:
# 152 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 153 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_71
Zone5B_EventScript_BuyPikaClone_70:
# 156 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 157 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_74
Zone5B_EventScript_BuyPikaClone_73:
# 160 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 161 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_77
Zone5B_EventScript_BuyPikaClone_76:
# 164 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone5B_EventScript_BuyPikaClone_80
# 170 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_5, MSGBOX_YESNO
# 171 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_83
# 177 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone5B_EventScript_BuyPikaClone_85:
# 178 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone5B_EventScript_BuyPikaClone_86
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_23:
# 221 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_24:
# 223 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_25:
# 225 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_26:
# 227 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_27:
# 229 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MINUN
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_28:
# 231 "data/maps/Zone5B/scripts.pory"
	closemessage
# 232 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 233 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 234 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_30:
# 264 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_14, MSGBOX_YESNO
# 265 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_43
# 271 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
	goto Zone5B_EventScript_BuyPikaClone_29

Zone5B_EventScript_BuyPikaClone_34:
# 247 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 248 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 249 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_37:
# 126 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_36

Zone5B_EventScript_BuyPikaClone_40:
# 283 "data/maps/Zone5B/scripts.pory"
	special SendChosenMonToPC
# 284 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone5B_EventScript_BuyPikaClone_39

Zone5B_EventScript_BuyPikaClone_43:
# 266 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 267 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 268 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_45:
# 276 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 277 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 278 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_47:
# 257 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 258 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 259 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_50:
# 130 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_49

Zone5B_EventScript_BuyPikaClone_53:
# 300 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 301 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone5B_EventScript_BuyPikaClone_52

Zone5B_EventScript_BuyPikaClone_56:
# 134 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_55

Zone5B_EventScript_BuyPikaClone_59:
# 138 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_58

Zone5B_EventScript_BuyPikaClone_62:
# 142 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_61

Zone5B_EventScript_BuyPikaClone_65:
# 146 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_64

Zone5B_EventScript_BuyPikaClone_68:
# 150 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_67

Zone5B_EventScript_BuyPikaClone_71:
# 154 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_70

Zone5B_EventScript_BuyPikaClone_74:
# 158 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_73

Zone5B_EventScript_BuyPikaClone_77:
# 162 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_76

Zone5B_EventScript_BuyPikaClone_80:
# 165 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_4
# 166 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 167 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_83:
# 172 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 173 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 174 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_86:
# 179 "data/maps/Zone5B/scripts.pory"
	random 5
# 180 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_89
# 187 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_90
# 193 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_91
# 199 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_92
# 205 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_93
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_89:
# 182 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 183 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_95
# 186 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_90:
# 188 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 189 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_98
# 192 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_91:
# 194 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 195 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_101
# 198 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_92:
# 200 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PLUSLE
# 201 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_104
# 204 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_93:
# 206 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MINUN
# 207 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_107
# 210 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MINUN
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_95:
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_98:
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_101:
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_104:
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_107:
	goto Zone5B_EventScript_BuyPikaClone_85


Zone5B_EventScript_NeverMissTutor::
# 309 "data/maps/Zone5B/scripts.pory"
	lock
# 310 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 311 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 312 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_2
# 321 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_2, MSGBOX_YESNO
# 322 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_NeverMissTutor_10
Zone5B_EventScript_NeverMissTutor_1:
# 329 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_6
Zone5B_EventScript_NeverMissTutor_5:
# 338 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_NeverMissTutor_Text_4
# 339 "data/maps/Zone5B/scripts.pory"
	waitmessage
# 340 "data/maps/Zone5B/scripts.pory"
	dynmultichoice 21, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone5B_EventScript_NeverMissTutor_Text_5, Zone5B_EventScript_NeverMissTutor_Text_6, Zone5B_EventScript_NeverMissTutor_Text_7, Zone5B_EventScript_NeverMissTutor_Text_8, Zone5B_EventScript_NeverMissTutor_Text_9
# 341 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_NeverMissTutor_14
# 345 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_NeverMissTutor_15
# 348 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_NeverMissTutor_16
# 351 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_NeverMissTutor_17
# 354 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_NeverMissTutor_18
# 355 "data/maps/Zone5B/scripts.pory"
	case MULTI_B_PRESSED, Zone5B_EventScript_NeverMissTutor_18
Zone5B_EventScript_NeverMissTutor_12:
# 361 "data/maps/Zone5B/scripts.pory"
	buffermovename 0, VAR_TEMP_0
# 362 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_10, MSGBOX_DEFAULT
# 363 "data/maps/Zone5B/scripts.pory"
	special ChooseMonForMoveTutor
# 364 "data/maps/Zone5B/scripts.pory"
	waitstate
# 365 "data/maps/Zone5B/scripts.pory"
	lock
# 366 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 367 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone5B_EventScript_NeverMissTutor_22
# 373 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 374 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_11, MSGBOX_DEFAULT
# 375 "data/maps/Zone5B/scripts.pory"
	goto_if_unset FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_25
# 378 "data/maps/Zone5B/scripts.pory"
	removemoney 1000
# 379 "data/maps/Zone5B/scripts.pory"
	updatemoneybox
# 380 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_12, MSGBOX_DEFAULT
# 381 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
Zone5B_EventScript_NeverMissTutor_24:
# 383 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 384 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_2:
# 313 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_0, MSGBOX_YESNO
# 314 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_NeverMissTutor_8
	goto Zone5B_EventScript_NeverMissTutor_1

Zone5B_EventScript_NeverMissTutor_6:
# 330 "data/maps/Zone5B/scripts.pory"
	checkmoney 1000, 0
# 331 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5B_EventScript_NeverMissTutor_19
	goto Zone5B_EventScript_NeverMissTutor_5

Zone5B_EventScript_NeverMissTutor_8:
# 315 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 316 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 317 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_10:
# 323 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 324 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 325 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_14:
# 343 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_SWIFT
# 344 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_15:
# 346 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_AERIAL_ACE
# 347 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_AERIAL_ACE
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_16:
# 349 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_MAGICAL_LEAF
# 350 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_17:
# 352 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_SHOCK_WAVE
# 353 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_18:
# 356 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 357 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 358 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_19:
# 332 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_3
# 333 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 334 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_22:
# 368 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 369 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 370 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_25:
# 376 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS
	goto Zone5B_EventScript_NeverMissTutor_24


Zone5B_EventScript_ItemRandom1::
# 389 "data/maps/Zone5B/scripts.pory"
	lock
# 390 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_1, Zone5B_EventScript_ItemRandom1_2
# 395 "data/maps/Zone5B/scripts.pory"
	waitse
# 396 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 397 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 398 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_RANDOM_1
# 399 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 400 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 401 "data/maps/Zone5B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 402 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_ItemRandom1_2:
# 391 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 392 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_ItemRandom2::
# 407 "data/maps/Zone5B/scripts.pory"
	lock
# 408 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_2, Zone5B_EventScript_ItemRandom2_2
# 413 "data/maps/Zone5B/scripts.pory"
	waitse
# 414 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 415 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 416 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_RANDOM_2
# 417 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 418 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 419 "data/maps/Zone5B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 420 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_ItemRandom2_2:
# 409 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 410 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_ItemGems::
# 425 "data/maps/Zone5B/scripts.pory"
	lock
# 426 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GEMS, Zone5B_EventScript_ItemGems_2
# 431 "data/maps/Zone5B/scripts.pory"
	waitse
# 432 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 433 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 434 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_GEMS
# 435 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 436 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_NORMAL_GEM
# 437 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_BUG_GEM
# 438 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_GRASS_GEM
# 439 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_ItemGems_2:
# 427 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 428 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_GentleMint::
# 444 "data/maps/Zone5B/scripts.pory"
	lock
# 445 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GENTLE_MINT, Zone5B_EventScript_GentleMint_2
# 450 "data/maps/Zone5B/scripts.pory"
	waitse
# 451 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 452 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 453 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_GENTLE_MINT
# 454 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 455 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_GENTLE_MINT
# 456 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_GentleMint_2:
# 446 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 447 "data/maps/Zone5B/scripts.pory"
	release
	end


# 460 "data/maps/Zone5B/scripts.pory"

# 461 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_NovaandCora::
# 462 "data/maps/Zone5B/scripts.pory"
	trainerbattle_double TRAINER_PBL_NOVA_AND_CORA, Zone5B_Text_NovaandCoraIntro, Zone5B_Text_NovaandCoraDefeat, gText_NotEnoughMons
# 463 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_NovaandCoraPostBattle, MSGBOX_DEFAULT
# 464 "data/maps/Zone5B/scripts.pory"
	release
# 465 "data/maps/Zone5B/scripts.pory"
	end
# 466 "data/maps/Zone5B/scripts.pory"

# 467 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraIntro:
# 468 "data/maps/Zone5B/scripts.pory"
	.string "Nova: This grass is so tall!\p"
# 469 "data/maps/Zone5B/scripts.pory"
	.string "Cora: It's going up my nose!$"
# 470 "data/maps/Zone5B/scripts.pory"

# 471 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraDefeat:
# 472 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Achoo!\p"
# 473 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Achoo!$"
# 474 "data/maps/Zone5B/scripts.pory"

# 475 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraPostBattle:
# 476 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Being twins means-\p"
# 477 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Sharing allergies!$"
# 478 "data/maps/Zone5B/scripts.pory"

# 479 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Clinton::
# 480 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_CLINTON, Zone5B_Text_ClintonIntro, Zone5B_Text_ClintonDefeat
# 481 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Zone5B/scripts.pory"
	end
# 483 "data/maps/Zone5B/scripts.pory"

# 484 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonIntro:
# 485 "data/maps/Zone5B/scripts.pory"
	.string "I've had my Pokémon specially\n"
# 486 "data/maps/Zone5B/scripts.pory"
	.string "imported from rare habitats!$"
# 487 "data/maps/Zone5B/scripts.pory"

# 488 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonDefeat:
# 489 "data/maps/Zone5B/scripts.pory"
	.string "Um… I thought they were\n"
# 490 "data/maps/Zone5B/scripts.pory"
	.string "supposed to be strong!$"
# 491 "data/maps/Zone5B/scripts.pory"

# 492 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonPostBattle:
# 493 "data/maps/Zone5B/scripts.pory"
	.string "I suppose just because a\n"
# 494 "data/maps/Zone5B/scripts.pory"
	.string "Pokémon is rare, doesn't\l"
# 495 "data/maps/Zone5B/scripts.pory"
	.string "mean it's strong!$"
# 496 "data/maps/Zone5B/scripts.pory"

# 497 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Ryan::
# 498 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RYAN, Zone5B_Text_RyanIntro, Zone5B_Text_RyanDefeat
# 499 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Zone5B/scripts.pory"
	end
# 501 "data/maps/Zone5B/scripts.pory"

# 502 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanIntro:
# 503 "data/maps/Zone5B/scripts.pory"
	.string "Where am I?\n"
# 504 "data/maps/Zone5B/scripts.pory"
	.string "Ah! A wild Pokémon!$"
# 505 "data/maps/Zone5B/scripts.pory"

# 506 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanDefeat:
# 507 "data/maps/Zone5B/scripts.pory"
	.string "Sorry! I thought you were a\n"
# 508 "data/maps/Zone5B/scripts.pory"
	.string "Pokémon!$"
# 509 "data/maps/Zone5B/scripts.pory"

# 510 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanPostBattle:
# 511 "data/maps/Zone5B/scripts.pory"
	.string "This grass is just too tall to see!$"
# 512 "data/maps/Zone5B/scripts.pory"

# 513 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Kenneth::
# 514 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_KENNETH, Zone5B_Text_KennethIntro, Zone5B_Text_KennethDefeat
# 515 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/Zone5B/scripts.pory"
	end
# 517 "data/maps/Zone5B/scripts.pory"

# 518 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethIntro:
# 519 "data/maps/Zone5B/scripts.pory"
	.string "I'm running back and forth! Huzzah!$"
# 520 "data/maps/Zone5B/scripts.pory"

# 521 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethDefeat:
# 522 "data/maps/Zone5B/scripts.pory"
	.string "Whew! I'm all out of steam!$"
# 523 "data/maps/Zone5B/scripts.pory"

# 524 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethPostBattle:
# 525 "data/maps/Zone5B/scripts.pory"
	.string "I gotta keep running!$"

Zone5B_EventScript_LeviathanBattle_Text_0:
# 33 "data/maps/Zone5B/scripts.pory"
	.string "It sounds like someone is running down\n"
	.string "towards you. Stay where you are?$"

Zone5B_EventScript_LeviathanBattle_Text_1:
# 61 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Argh, how did you manage to beat\n"
	.string "me?\p"
	.string "Well, I guess I'm supposed to give you a\n"
	.string "reward now.$"

Zone5B_EventScript_LeviathanBattle_Text_2:
# 63 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: The Eviolite boosts the\n"
	.string "defenses of Pokémon that can still\l"
	.string "evolve.\p"
	.string "Now then. You can pass through, but\n"
	.string "don't get in the way of my training\l"
	.string "again!$"

Zone5B_EventScript_BuyPikaClone_Text_0:
# 102 "data/maps/Zone5B/scripts.pory"
	.string "Sorry! I'm all out of Pikachu clones for\n"
	.string "sale right now.$"

Zone5B_EventScript_BuyPikaClone_Text_1:
# 107 "data/maps/Zone5B/scripts.pory"
	.string "You seem like the type that would like\n"
	.string "Pikachu!\p"
	.string "Now, I don't have Pikachu for sale, but I\n"
	.string "do have some very similar Pokémon, each\l"
	.string "for only ¥1000!$"

Zone5B_EventScript_BuyPikaClone_Text_2:
# 110 "data/maps/Zone5B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone5B_EventScript_BuyPikaClone_Text_3:
# 116 "data/maps/Zone5B/scripts.pory"
	.string "You don't have enough money.$"

Zone5B_EventScript_BuyPikaClone_Text_4:
# 165 "data/maps/Zone5B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone5B_EventScript_BuyPikaClone_Text_5:
# 170 "data/maps/Zone5B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pachirisu, Dedenne, Morpeko, Plusle, or\l"
	.string "Minun.\p"
	.string "Is this ok?$"

Zone5B_EventScript_BuyPikaClone_Text_6:
# 217 "data/maps/Zone5B/scripts.pory"
	.string "Choose which Electric-type you would\n"
	.string "like.$"

Zone5B_EventScript_BuyPikaClone_Text_7:
# 218 "data/maps/Zone5B/scripts.pory"
	.string "Pachirisu$"

Zone5B_EventScript_BuyPikaClone_Text_8:
# 218 "data/maps/Zone5B/scripts.pory"
	.string "Dedenne$"

Zone5B_EventScript_BuyPikaClone_Text_9:
# 218 "data/maps/Zone5B/scripts.pory"
	.string "Morpeko$"

Zone5B_EventScript_BuyPikaClone_Text_10:
# 218 "data/maps/Zone5B/scripts.pory"
	.string "Plusle$"

Zone5B_EventScript_BuyPikaClone_Text_11:
# 218 "data/maps/Zone5B/scripts.pory"
	.string "Minun$"

Zone5B_EventScript_BuyPikaClone_Text_12:
# 240 "data/maps/Zone5B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone5B_EventScript_BuyPikaClone_Text_13:
# 255 "data/maps/Zone5B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone5B_EventScript_BuyPikaClone_Text_14:
# 264 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Pikachu\n"
	.string "clone for ¥1000?$"

Zone5B_EventScript_BuyPikaClone_Text_15:
# 274 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥1000?$"

Zone5B_EventScript_BuyPikaClone_Text_16:
# 288 "data/maps/Zone5B/scripts.pory"
	.string "I appreciate it!$"

Zone5B_EventScript_BuyPikaClone_Text_17:
# 293 "data/maps/Zone5B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone5B_EventScript_BuyPikaClone_Text_18:
# 295 "data/maps/Zone5B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone5B_EventScript_BuyPikaClone_Text_19:
# 298 "data/maps/Zone5B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone5B_EventScript_BuyPikaClone_Text_20:
# 303 "data/maps/Zone5B/scripts.pory"
	.string "Take good care of your new\n"
	.string "Electric-type, small mammal-like\l"
	.string "Pokémon!$"

Zone5B_EventScript_NeverMissTutor_Text_0:
# 313 "data/maps/Zone5B/scripts.pory"
	.string "Hey there! Ever been stuck because the\n"
	.string "opposing Pokémon is too hard to hit?\l"
	.string "Well, I specialize in teaching certain\l"
	.string "moves that always hit, no matter how\l"
	.string "evasive the foe is!\p"
	.string "For the low price of ¥1000, I could\n"
	.string "teach one of your Pokémon one of these\l"
	.string "moves. Deal?$"

Zone5B_EventScript_NeverMissTutor_Text_1:
# 316 "data/maps/Zone5B/scripts.pory"
	.string "Evasion is really tough to deal with;\n"
	.string "come back if you need!$"

Zone5B_EventScript_NeverMissTutor_Text_2:
# 321 "data/maps/Zone5B/scripts.pory"
	.string "Hey there! Ever been stuck because the\n"
	.string "opposing Pokémon is too hard to hit?\l"
	.string "Well, I specialize in teaching certain\l"
	.string "moves that always hit, no matter how\l"
	.string "evasive the foe is!\p"
	.string "For the low price of ¥1000, I could\n"
	.string "teach one of your Pokémon one of these\l"
	.string "moves. Tell you what, the first time I do\l"
	.string "this, it'll be free! Deal?$"

Zone5B_EventScript_NeverMissTutor_Text_3:
# 332 "data/maps/Zone5B/scripts.pory"
	.string "Hate to break it to you, but you don't have enough money.$"

Zone5B_EventScript_NeverMissTutor_Text_4:
# 338 "data/maps/Zone5B/scripts.pory"
	.string "What move should I teach?$"

Zone5B_EventScript_NeverMissTutor_Text_5:
# 340 "data/maps/Zone5B/scripts.pory"
	.string "Swift$"

Zone5B_EventScript_NeverMissTutor_Text_6:
# 340 "data/maps/Zone5B/scripts.pory"
	.string "Aerial Ace$"

Zone5B_EventScript_NeverMissTutor_Text_7:
# 340 "data/maps/Zone5B/scripts.pory"
	.string "Magical Leaf$"

Zone5B_EventScript_NeverMissTutor_Text_8:
# 340 "data/maps/Zone5B/scripts.pory"
	.string "Shock Wave$"

Zone5B_EventScript_NeverMissTutor_Text_9:
# 340 "data/maps/Zone5B/scripts.pory"
	.string "Exit$"

Zone5B_EventScript_NeverMissTutor_Text_10:
# 362 "data/maps/Zone5B/scripts.pory"
	.string "Which Pokémon should learn\n{STR_VAR_1}?$"

Zone5B_EventScript_NeverMissTutor_Text_11:
# 374 "data/maps/Zone5B/scripts.pory"
	.string "There! It's done. Use that move well!$"

Zone5B_EventScript_NeverMissTutor_Text_12:
# 380 "data/maps/Zone5B/scripts.pory"
	.string "{PLAYER} paid ¥1000.$"

Zone5B_Text_Leviathan5Intro::
# 85 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Not so fast! I'm training my\n"
	.string "Pokémon around here!\p"
	.string "You'll have to face our combined might\n"
	.string "to get past!\p"
	.string "This is where your journey forward\n"
	.string "stops!$"

Zone5B_Text_Leviathan5Defeat::
# 89 "data/maps/Zone5B/scripts.pory"
	.string "How!? My Pokémon were so bulky with\n"
	.string "their Eviolites!$"
