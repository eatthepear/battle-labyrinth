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
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_3, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_13
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
	trainerbattle_no_intro TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE, Zone5B_Text_Leviathan5Defeat
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
	checkmoney 500, 0
# 115 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_10
# 121 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_13
# 211 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_6
# 212 "data/maps/Zone5B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone5B_EventScript_BuyPikaClone_Text_7, Zone5B_EventScript_BuyPikaClone_Text_8, Zone5B_EventScript_BuyPikaClone_Text_9, Zone5B_EventScript_BuyPikaClone_Text_10, Zone5B_EventScript_BuyPikaClone_Text_11, Zone5B_EventScript_BuyPikaClone_Text_12
# 213 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_23
# 216 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_24
# 218 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_25
# 220 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_26
# 222 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_27
# 224 "data/maps/Zone5B/scripts.pory"
	case 5, Zone5B_EventScript_BuyPikaClone_28
# 226 "data/maps/Zone5B/scripts.pory"
	case MULTI_B_PRESSED, Zone5B_EventScript_BuyPikaClone_29
Zone5B_EventScript_BuyPikaClone_12:
# 234 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 235 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_17
Zone5B_EventScript_BuyPikaClone_16:
# 259 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_31
# 269 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 270 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_16, MSGBOX_YESNO
# 271 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_46
Zone5B_EventScript_BuyPikaClone_30:
# 278 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_41
Zone5B_EventScript_BuyPikaClone_40:
# 282 "data/maps/Zone5B/scripts.pory"
	removemoney 500
# 283 "data/maps/Zone5B/scripts.pory"
	updatemoneybox
# 284 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_17, MSGBOX_DEFAULT
# 285 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 286 "data/maps/Zone5B/scripts.pory"
	givemon VAR_TEMP_1, 12, ITEM_NONE
# 287 "data/maps/Zone5B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 250
# 288 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 289 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_18, MSGBOX_DEFAULT
# 290 "data/maps/Zone5B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_19
# 292 "data/maps/Zone5B/scripts.pory"
	waitmessage
# 293 "data/maps/Zone5B/scripts.pory"
	waitfanfare
# 294 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_20, MSGBOX_YESNO
# 295 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5B_EventScript_BuyPikaClone_54
Zone5B_EventScript_BuyPikaClone_53:
# 299 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_21, MSGBOX_DEFAULT
# 300 "data/maps/Zone5B/scripts.pory"
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
# 208 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_17:
# 236 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_13, MSGBOX_AUTOCLOSE
# 237 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 238 "data/maps/Zone5B/scripts.pory"
	special ChoosePartyMon
# 239 "data/maps/Zone5B/scripts.pory"
	waitstate
# 240 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 241 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 242 "data/maps/Zone5B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone5B_EventScript_BuyPikaClone_35
# 248 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 249 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 250 "data/maps/Zone5B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 251 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_14, MSGBOX_YESNO
# 252 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_48
	goto Zone5B_EventScript_BuyPikaClone_16

Zone5B_EventScript_BuyPikaClone_19:
# 123 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 125 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_38
Zone5B_EventScript_BuyPikaClone_37:
# 129 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_51
Zone5B_EventScript_BuyPikaClone_50:
# 133 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_57
Zone5B_EventScript_BuyPikaClone_56:
# 137 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_60
Zone5B_EventScript_BuyPikaClone_59:
# 141 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_63
Zone5B_EventScript_BuyPikaClone_62:
# 145 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_66
Zone5B_EventScript_BuyPikaClone_65:
# 148 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq Zone5B_EventScript_BuyPikaClone_69
# 154 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_5, MSGBOX_YESNO
# 155 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_72
# 161 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone5B_EventScript_BuyPikaClone_74:
# 162 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone5B_EventScript_BuyPikaClone_75
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_23:
# 215 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_24:
# 217 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_25:
# 219 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_26:
# 221 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_27:
# 223 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_28:
# 225 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MINUN
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_29:
# 227 "data/maps/Zone5B/scripts.pory"
	closemessage
# 228 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 229 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 230 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_31:
# 260 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_15, MSGBOX_YESNO
# 261 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_44
# 267 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
	goto Zone5B_EventScript_BuyPikaClone_30

Zone5B_EventScript_BuyPikaClone_35:
# 243 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 244 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 245 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_38:
# 126 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_37

Zone5B_EventScript_BuyPikaClone_41:
# 279 "data/maps/Zone5B/scripts.pory"
	special SendChosenMonToPC
# 280 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone5B_EventScript_BuyPikaClone_40

Zone5B_EventScript_BuyPikaClone_44:
# 262 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 263 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 264 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_46:
# 272 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 273 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 274 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_48:
# 253 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 254 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 255 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_51:
# 130 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_50

Zone5B_EventScript_BuyPikaClone_54:
# 296 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 297 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone5B_EventScript_BuyPikaClone_53

Zone5B_EventScript_BuyPikaClone_57:
# 134 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_56

Zone5B_EventScript_BuyPikaClone_60:
# 138 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_59

Zone5B_EventScript_BuyPikaClone_63:
# 142 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_62

Zone5B_EventScript_BuyPikaClone_66:
# 146 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_65

Zone5B_EventScript_BuyPikaClone_69:
# 149 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_4
# 150 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 151 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_72:
# 156 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 157 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 158 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_75:
# 163 "data/maps/Zone5B/scripts.pory"
	random 10
# 164 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_78
# 166 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_78
# 172 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_79
# 173 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_79
# 179 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_80
# 180 "data/maps/Zone5B/scripts.pory"
	case 5, Zone5B_EventScript_BuyPikaClone_80
# 186 "data/maps/Zone5B/scripts.pory"
	case 6, Zone5B_EventScript_BuyPikaClone_81
# 187 "data/maps/Zone5B/scripts.pory"
	case 7, Zone5B_EventScript_BuyPikaClone_81
# 193 "data/maps/Zone5B/scripts.pory"
	case 8, Zone5B_EventScript_BuyPikaClone_82
# 199 "data/maps/Zone5B/scripts.pory"
	case 9, Zone5B_EventScript_BuyPikaClone_83
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_78:
# 168 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_85
# 171 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_79:
# 175 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_88
# 178 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_80:
# 182 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_91
# 185 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_81:
# 189 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_94
# 192 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_82:
# 195 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_97
# 198 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_83:
# 201 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_100
# 204 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MINUN
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_85:
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_88:
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_91:
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_94:
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_97:
	goto Zone5B_EventScript_BuyPikaClone_74

Zone5B_EventScript_BuyPikaClone_100:
	goto Zone5B_EventScript_BuyPikaClone_74


Zone5B_EventScript_NeverMissTutor::
# 305 "data/maps/Zone5B/scripts.pory"
	lock
# 306 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 307 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 308 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_2
# 317 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_2, MSGBOX_YESNO
# 318 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_NeverMissTutor_10
Zone5B_EventScript_NeverMissTutor_1:
# 325 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_6
Zone5B_EventScript_NeverMissTutor_5:
# 334 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_NeverMissTutor_Text_4
# 335 "data/maps/Zone5B/scripts.pory"
	waitmessage
# 336 "data/maps/Zone5B/scripts.pory"
	dynmultichoice 21, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone5B_EventScript_NeverMissTutor_Text_5, Zone5B_EventScript_NeverMissTutor_Text_6, Zone5B_EventScript_NeverMissTutor_Text_7, Zone5B_EventScript_NeverMissTutor_Text_8, Zone5B_EventScript_NeverMissTutor_Text_9
# 337 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 338 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_NeverMissTutor_14
# 341 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_NeverMissTutor_15
# 344 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_NeverMissTutor_16
# 347 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_NeverMissTutor_17
# 350 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_NeverMissTutor_18
# 351 "data/maps/Zone5B/scripts.pory"
	case MULTI_B_PRESSED, Zone5B_EventScript_NeverMissTutor_18
Zone5B_EventScript_NeverMissTutor_12:
# 357 "data/maps/Zone5B/scripts.pory"
	buffermovename 0, VAR_TEMP_0
# 358 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_10, MSGBOX_DEFAULT
# 359 "data/maps/Zone5B/scripts.pory"
	special ChooseMonForMoveTutor
# 360 "data/maps/Zone5B/scripts.pory"
	waitstate
# 361 "data/maps/Zone5B/scripts.pory"
	lock
# 362 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 363 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone5B_EventScript_NeverMissTutor_22
# 369 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 370 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_11, MSGBOX_DEFAULT
# 371 "data/maps/Zone5B/scripts.pory"
	goto_if_unset FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS, Zone5B_EventScript_NeverMissTutor_25
# 374 "data/maps/Zone5B/scripts.pory"
	removemoney 400
# 375 "data/maps/Zone5B/scripts.pory"
	updatemoneybox
# 376 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_12, MSGBOX_DEFAULT
# 377 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
Zone5B_EventScript_NeverMissTutor_24:
# 379 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 380 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_2:
# 309 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_0, MSGBOX_YESNO
# 310 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_NeverMissTutor_8
	goto Zone5B_EventScript_NeverMissTutor_1

Zone5B_EventScript_NeverMissTutor_6:
# 326 "data/maps/Zone5B/scripts.pory"
	checkmoney 400, 0
# 327 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5B_EventScript_NeverMissTutor_19
	goto Zone5B_EventScript_NeverMissTutor_5

Zone5B_EventScript_NeverMissTutor_8:
# 311 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 312 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 313 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_10:
# 319 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 320 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 321 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_14:
# 339 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_SWIFT
# 340 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_15:
# 342 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_AERIAL_ACE
# 343 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_AERIAL_ACE
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_16:
# 345 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_MAGICAL_LEAF
# 346 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_17:
# 348 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, MOVE_SHOCK_WAVE
# 349 "data/maps/Zone5B/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	goto Zone5B_EventScript_NeverMissTutor_12

Zone5B_EventScript_NeverMissTutor_18:
# 352 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 353 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 354 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_19:
# 328 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_3
# 329 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 330 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_22:
# 364 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_NeverMissTutor_Text_1
# 365 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 366 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_NeverMissTutor_25:
# 372 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ZONE5B_MOVE_TUTOR_TAUGHT_NEVER_MISS
	goto Zone5B_EventScript_NeverMissTutor_24


Zone5B_EventScript_Random1::
# 385 "data/maps/Zone5B/scripts.pory"
	lock
# 386 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_1, Zone5B_EventScript_Random1_2
# 391 "data/maps/Zone5B/scripts.pory"
	waitse
# 392 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 393 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 394 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_RANDOM_1
# 395 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 396 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 397 "data/maps/Zone5B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 398 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_Random1_2:
# 387 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 388 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_Random2::
# 403 "data/maps/Zone5B/scripts.pory"
	lock
# 404 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_2, Zone5B_EventScript_Random2_2
# 409 "data/maps/Zone5B/scripts.pory"
	waitse
# 410 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 411 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 412 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_RANDOM_2
# 413 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 414 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 415 "data/maps/Zone5B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 416 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_Random2_2:
# 405 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 406 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_Gems::
# 421 "data/maps/Zone5B/scripts.pory"
	lock
# 422 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GEMS, Zone5B_EventScript_Gems_2
# 427 "data/maps/Zone5B/scripts.pory"
	waitse
# 428 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 429 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 430 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_GEMS
# 431 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 432 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_NORMAL_GEM
# 433 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_BUG_GEM
# 434 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_GRASS_GEM
# 435 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_Gems_2:
# 423 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 424 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_Random3::
# 440 "data/maps/Zone5B/scripts.pory"
	lock
# 441 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_RANDOM_3, Zone5B_EventScript_Random3_2
# 446 "data/maps/Zone5B/scripts.pory"
	waitse
# 447 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 448 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 449 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_RANDOM_3
# 450 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 451 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 452 "data/maps/Zone5B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 453 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_Random3_2:
# 442 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 443 "data/maps/Zone5B/scripts.pory"
	release
	end


# 457 "data/maps/Zone5B/scripts.pory"

# 458 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_NovaandCora::
# 459 "data/maps/Zone5B/scripts.pory"
	trainerbattle_double TRAINER_PBL_NOVA_AND_CORA, Zone5B_Text_NovaandCoraIntro, Zone5B_Text_NovaandCoraDefeat, gText_NotEnoughMons
# 460 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_NovaandCoraPostBattle, MSGBOX_DEFAULT
# 461 "data/maps/Zone5B/scripts.pory"
	release
# 462 "data/maps/Zone5B/scripts.pory"
	end
# 463 "data/maps/Zone5B/scripts.pory"

# 464 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraIntro:
# 465 "data/maps/Zone5B/scripts.pory"
	.string "Nova: This grass is so tall!\p"
# 466 "data/maps/Zone5B/scripts.pory"
	.string "Cora: It's going up my nose!$"
# 467 "data/maps/Zone5B/scripts.pory"

# 468 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraDefeat:
# 469 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Achoo!\p"
# 470 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Achoo!$"
# 471 "data/maps/Zone5B/scripts.pory"

# 472 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraPostBattle:
# 473 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Being twins means-\p"
# 474 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Sharing allergies!$"
# 475 "data/maps/Zone5B/scripts.pory"

# 476 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Clinton::
# 477 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_CLINTON, Zone5B_Text_ClintonIntro, Zone5B_Text_ClintonDefeat
# 478 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/Zone5B/scripts.pory"
	end
# 480 "data/maps/Zone5B/scripts.pory"

# 481 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonIntro:
# 482 "data/maps/Zone5B/scripts.pory"
	.string "I've had my Pokémon specially\n"
# 483 "data/maps/Zone5B/scripts.pory"
	.string "imported from rare habitats!$"
# 484 "data/maps/Zone5B/scripts.pory"

# 485 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonDefeat:
# 486 "data/maps/Zone5B/scripts.pory"
	.string "Um… I thought they were\n"
# 487 "data/maps/Zone5B/scripts.pory"
	.string "supposed to be strong!$"
# 488 "data/maps/Zone5B/scripts.pory"

# 489 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonPostBattle:
# 490 "data/maps/Zone5B/scripts.pory"
	.string "I suppose just because a\n"
# 491 "data/maps/Zone5B/scripts.pory"
	.string "Pokémon is rare, doesn't\l"
# 492 "data/maps/Zone5B/scripts.pory"
	.string "mean it's strong!$"
# 493 "data/maps/Zone5B/scripts.pory"

# 494 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Ryan::
# 495 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RYAN, Zone5B_Text_RyanIntro, Zone5B_Text_RyanDefeat
# 496 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/Zone5B/scripts.pory"
	end
# 498 "data/maps/Zone5B/scripts.pory"

# 499 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanIntro:
# 500 "data/maps/Zone5B/scripts.pory"
	.string "Where am I?\n"
# 501 "data/maps/Zone5B/scripts.pory"
	.string "Ah! A wild Pokémon!$"
# 502 "data/maps/Zone5B/scripts.pory"

# 503 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanDefeat:
# 504 "data/maps/Zone5B/scripts.pory"
	.string "Sorry! I thought you were a\n"
# 505 "data/maps/Zone5B/scripts.pory"
	.string "Pokémon!$"
# 506 "data/maps/Zone5B/scripts.pory"

# 507 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanPostBattle:
# 508 "data/maps/Zone5B/scripts.pory"
	.string "This grass is just too tall to see!$"
# 509 "data/maps/Zone5B/scripts.pory"

# 510 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Kenneth::
# 511 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_KENNETH, Zone5B_Text_KennethIntro, Zone5B_Text_KennethDefeat
# 512 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Zone5B/scripts.pory"
	end
# 514 "data/maps/Zone5B/scripts.pory"

# 515 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethIntro:
# 516 "data/maps/Zone5B/scripts.pory"
	.string "I'm running back and forth! Huzzah!$"
# 517 "data/maps/Zone5B/scripts.pory"

# 518 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethDefeat:
# 519 "data/maps/Zone5B/scripts.pory"
	.string "Whew! I'm all out of steam!$"
# 520 "data/maps/Zone5B/scripts.pory"

# 521 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethPostBattle:
# 522 "data/maps/Zone5B/scripts.pory"
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
	.string "for only ¥500!$"

Zone5B_EventScript_BuyPikaClone_Text_2:
# 110 "data/maps/Zone5B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone5B_EventScript_BuyPikaClone_Text_3:
# 116 "data/maps/Zone5B/scripts.pory"
	.string "You don't have enough money.$"

Zone5B_EventScript_BuyPikaClone_Text_4:
# 149 "data/maps/Zone5B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone5B_EventScript_BuyPikaClone_Text_5:
# 154 "data/maps/Zone5B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pachirisu, Dedenne, Morpeko, Emolga,\l"
	.string "Plusle, or Minun.\p"
	.string "Is this ok?$"

Zone5B_EventScript_BuyPikaClone_Text_6:
# 211 "data/maps/Zone5B/scripts.pory"
	.string "Choose which Electric-type you would\n"
	.string "like.$"

Zone5B_EventScript_BuyPikaClone_Text_7:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Pachirisu$"

Zone5B_EventScript_BuyPikaClone_Text_8:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Dedenne$"

Zone5B_EventScript_BuyPikaClone_Text_9:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Morpeko$"

Zone5B_EventScript_BuyPikaClone_Text_10:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Emolga$"

Zone5B_EventScript_BuyPikaClone_Text_11:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Plusle$"

Zone5B_EventScript_BuyPikaClone_Text_12:
# 212 "data/maps/Zone5B/scripts.pory"
	.string "Minun$"

Zone5B_EventScript_BuyPikaClone_Text_13:
# 236 "data/maps/Zone5B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone5B_EventScript_BuyPikaClone_Text_14:
# 251 "data/maps/Zone5B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone5B_EventScript_BuyPikaClone_Text_15:
# 260 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Pikachu\n"
	.string "clone for ¥500?$"

Zone5B_EventScript_BuyPikaClone_Text_16:
# 270 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone5B_EventScript_BuyPikaClone_Text_17:
# 284 "data/maps/Zone5B/scripts.pory"
	.string "I appreciate it!$"

Zone5B_EventScript_BuyPikaClone_Text_18:
# 289 "data/maps/Zone5B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone5B_EventScript_BuyPikaClone_Text_19:
# 291 "data/maps/Zone5B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone5B_EventScript_BuyPikaClone_Text_20:
# 294 "data/maps/Zone5B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone5B_EventScript_BuyPikaClone_Text_21:
# 299 "data/maps/Zone5B/scripts.pory"
	.string "Take good care of your new\n"
	.string "Electric-type, small mammal-like\l"
	.string "Pokémon!$"

Zone5B_EventScript_NeverMissTutor_Text_0:
# 309 "data/maps/Zone5B/scripts.pory"
	.string "Hey there! Ever been stuck because the\n"
	.string "opposing Pokémon is too hard to hit?\l"
	.string "Well, I specialize in teaching certain\l"
	.string "moves that always hit, no matter how\l"
	.string "evasive the foe is!\p"
	.string "For the low price of ¥400, I could teach\n"
	.string "one of your Pokémon one of these\l"
	.string "moves. Deal?$"

Zone5B_EventScript_NeverMissTutor_Text_1:
# 312 "data/maps/Zone5B/scripts.pory"
	.string "Evasion is really tough to deal with;\n"
	.string "come back if you need!$"

Zone5B_EventScript_NeverMissTutor_Text_2:
# 317 "data/maps/Zone5B/scripts.pory"
	.string "Hey there! Ever been stuck because the\n"
	.string "opposing Pokémon is too hard to hit?\l"
	.string "Well, I specialize in teaching certain\l"
	.string "moves that always hit, no matter how\l"
	.string "evasive the foe is!\p"
	.string "For the low price of ¥400, I could teach\n"
	.string "one of your Pokémon one of these\l"
	.string "moves. Tell you what, the first time I do\l"
	.string "this, it'll be free! Deal?$"

Zone5B_EventScript_NeverMissTutor_Text_3:
# 328 "data/maps/Zone5B/scripts.pory"
	.string "Hate to break it to you, but you don't have enough money.$"

Zone5B_EventScript_NeverMissTutor_Text_4:
# 334 "data/maps/Zone5B/scripts.pory"
	.string "What move should I teach?$"

Zone5B_EventScript_NeverMissTutor_Text_5:
# 336 "data/maps/Zone5B/scripts.pory"
	.string "Swift$"

Zone5B_EventScript_NeverMissTutor_Text_6:
# 336 "data/maps/Zone5B/scripts.pory"
	.string "Aerial Ace$"

Zone5B_EventScript_NeverMissTutor_Text_7:
# 336 "data/maps/Zone5B/scripts.pory"
	.string "Magical Leaf$"

Zone5B_EventScript_NeverMissTutor_Text_8:
# 336 "data/maps/Zone5B/scripts.pory"
	.string "Shock Wave$"

Zone5B_EventScript_NeverMissTutor_Text_9:
# 336 "data/maps/Zone5B/scripts.pory"
	.string "Exit$"

Zone5B_EventScript_NeverMissTutor_Text_10:
# 358 "data/maps/Zone5B/scripts.pory"
	.string "Which Pokémon should learn\n{STR_VAR_1}?$"

Zone5B_EventScript_NeverMissTutor_Text_11:
# 370 "data/maps/Zone5B/scripts.pory"
	.string "There! It's done. Use that move well!$"

Zone5B_EventScript_NeverMissTutor_Text_12:
# 376 "data/maps/Zone5B/scripts.pory"
	.string "{PLAYER} paid ¥400.$"

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
	.string "How!? My Pokémon was so bulky with its\n"
	.string "Eviolite!$"
