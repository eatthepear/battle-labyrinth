Zone5B_MapScripts::
# 2 "data/maps/Zone5B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_TM03, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_POTION_X2, Zone5B_MapScripts_MAP_SCRIPT_ON_RESUME_6
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
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
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
	applymovement 1, Zone5B_Declan_Movement_WalkDown
# 34 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone5B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 36 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq Zone5B_EventScript_LeviathanBattle_2
Zone5B_EventScript_LeviathanBattle_1:
# 42 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, 0
# 43 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/Zone5B/scripts.pory"
	fadeoutbgm 1
# 45 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_Leviathan5Intro
# 46 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 47 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone5B_EventScript_LeviathanBattle_5
# 47 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone5B_EventScript_LeviathanBattle_5
# 50 "data/maps/Zone5B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DECLAN_LEVIATHAN_5, Zone5B_Text_Leviathan5Defeat
Zone5B_EventScript_LeviathanBattle_4:
# 52 "data/maps/Zone5B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 53 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/Zone5B/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 55 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/Zone5B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 57 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 28
	goto_if_eq Zone5B_EventScript_LeviathanBattle_11
Zone5B_EventScript_LeviathanBattle_10:
# 61 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_0, 0
# 62 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
# 63 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Zone5B_Declan_Movement_WalkUp
# 64 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone5B/scripts.pory"
	removeobject 1
# 66 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_5
# 67 "data/maps/Zone5B/scripts.pory"
	setvar VAR_ZONE_5_STATE, 1
# 68 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_LeviathanBattle_2:
# 37 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 38 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 40 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
	goto Zone5B_EventScript_LeviathanBattle_1

Zone5B_EventScript_LeviathanBattle_5:
# 48 "data/maps/Zone5B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DECLAN_LEVIATHAN_5_BRUTAL, Zone5B_Text_Leviathan5Defeat
	goto Zone5B_EventScript_LeviathanBattle_4

Zone5B_EventScript_LeviathanBattle_11:
# 58 "data/maps/Zone5B/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 59 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
	goto Zone5B_EventScript_LeviathanBattle_10


# 72 "data/maps/Zone5B/scripts.pory"
Zone5B_Declan_Movement_WalkDown:
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 73 "data/maps/Zone5B/scripts.pory"
	walk_down
# 74 "data/maps/Zone5B/scripts.pory"
	walk_left
# 74 "data/maps/Zone5B/scripts.pory"
	walk_left
	step_end

# 85 "data/maps/Zone5B/scripts.pory"
Zone5B_Declan_Movement_WalkUp:
# 86 "data/maps/Zone5B/scripts.pory"
	walk_right
# 86 "data/maps/Zone5B/scripts.pory"
	walk_right
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
# 87 "data/maps/Zone5B/scripts.pory"
	walk_up
	step_end

Zone5B_EventScript_BuyPikaClone::
# 91 "data/maps/Zone5B/scripts.pory"
	lock
# 92 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 93 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_3
Zone5B_EventScript_BuyPikaClone_1:
# 98 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 99 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_1, MSGBOX_YESNO
# 100 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_7
# 106 "data/maps/Zone5B/scripts.pory"
	checkmoney 1000, 0
# 107 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_10
# 113 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_13
# 209 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_6
# 210 "data/maps/Zone5B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone5B_EventScript_BuyPikaClone_Text_7, Zone5B_EventScript_BuyPikaClone_Text_8, Zone5B_EventScript_BuyPikaClone_Text_9, Zone5B_EventScript_BuyPikaClone_Text_10, Zone5B_EventScript_BuyPikaClone_Text_11
# 211 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_23
# 214 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_24
# 216 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_25
# 218 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_26
# 220 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_27
# 222 "data/maps/Zone5B/scripts.pory"
	case MULTI_B_PRESSED, Zone5B_EventScript_BuyPikaClone_28
Zone5B_EventScript_BuyPikaClone_12:
# 230 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 231 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_17
Zone5B_EventScript_BuyPikaClone_16:
# 255 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5B_EventScript_BuyPikaClone_30
# 265 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 266 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_15, MSGBOX_YESNO
# 267 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_45
Zone5B_EventScript_BuyPikaClone_29:
# 274 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_40
Zone5B_EventScript_BuyPikaClone_39:
# 278 "data/maps/Zone5B/scripts.pory"
	removemoney 1000
# 279 "data/maps/Zone5B/scripts.pory"
	updatemoneybox
# 280 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_16, MSGBOX_DEFAULT
# 281 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 282 "data/maps/Zone5B/scripts.pory"
	givemon VAR_TEMP_1, 12, ITEM_NONE
# 283 "data/maps/Zone5B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 250
# 284 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 285 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_17, MSGBOX_DEFAULT
# 286 "data/maps/Zone5B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/Zone5B/scripts.pory"
	message Zone5B_EventScript_BuyPikaClone_Text_18
# 288 "data/maps/Zone5B/scripts.pory"
	waitmessage
# 289 "data/maps/Zone5B/scripts.pory"
	waitfanfare
# 290 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_19, MSGBOX_YESNO
# 291 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5B_EventScript_BuyPikaClone_53
Zone5B_EventScript_BuyPikaClone_52:
# 295 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_20, MSGBOX_DEFAULT
# 296 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_2:
# 94 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_0
# 95 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_3:
# 93 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE, Zone5B_EventScript_BuyPikaClone_2
	goto Zone5B_EventScript_BuyPikaClone_1

Zone5B_EventScript_BuyPikaClone_7:
# 101 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 102 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 103 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_10:
# 108 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_3
# 109 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 110 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_13:
# 114 "data/maps/Zone5B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone5B_EventScript_BuyPikaClone_19
# 206 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_17:
# 232 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_12, MSGBOX_AUTOCLOSE
# 233 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 234 "data/maps/Zone5B/scripts.pory"
	special ChoosePartyMon
# 235 "data/maps/Zone5B/scripts.pory"
	waitstate
# 236 "data/maps/Zone5B/scripts.pory"
	faceplayer
# 237 "data/maps/Zone5B/scripts.pory"
	showmoneybox 0, 0, 0
# 238 "data/maps/Zone5B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone5B_EventScript_BuyPikaClone_34
# 244 "data/maps/Zone5B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 245 "data/maps/Zone5B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 246 "data/maps/Zone5B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 247 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_13, MSGBOX_YESNO
# 248 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_47
	goto Zone5B_EventScript_BuyPikaClone_16

Zone5B_EventScript_BuyPikaClone_19:
# 115 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 116 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 117 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_37
Zone5B_EventScript_BuyPikaClone_36:
# 120 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 121 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_50
Zone5B_EventScript_BuyPikaClone_49:
# 124 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 125 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_56
Zone5B_EventScript_BuyPikaClone_55:
# 128 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PLUSLE
# 129 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_59
Zone5B_EventScript_BuyPikaClone_58:
# 132 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MINUN
# 133 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_62
Zone5B_EventScript_BuyPikaClone_61:
# 136 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 137 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_65
Zone5B_EventScript_BuyPikaClone_64:
# 140 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 141 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_68
Zone5B_EventScript_BuyPikaClone_67:
# 144 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 145 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_71
Zone5B_EventScript_BuyPikaClone_70:
# 148 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 149 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_74
Zone5B_EventScript_BuyPikaClone_73:
# 152 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 153 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_77
Zone5B_EventScript_BuyPikaClone_76:
# 156 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone5B_EventScript_BuyPikaClone_80
# 162 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_5, MSGBOX_YESNO
# 163 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_83
# 169 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone5B_EventScript_BuyPikaClone_85:
# 170 "data/maps/Zone5B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone5B_EventScript_BuyPikaClone_86
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_23:
# 213 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_24:
# 215 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_25:
# 217 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_26:
# 219 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_27:
# 221 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MINUN
	goto Zone5B_EventScript_BuyPikaClone_12

Zone5B_EventScript_BuyPikaClone_28:
# 223 "data/maps/Zone5B/scripts.pory"
	closemessage
# 224 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 225 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 226 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_30:
# 256 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_14, MSGBOX_YESNO
# 257 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5B_EventScript_BuyPikaClone_43
# 263 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
	goto Zone5B_EventScript_BuyPikaClone_29

Zone5B_EventScript_BuyPikaClone_34:
# 239 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 240 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 241 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_37:
# 118 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_36

Zone5B_EventScript_BuyPikaClone_40:
# 275 "data/maps/Zone5B/scripts.pory"
	special SendChosenMonToPC
# 276 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone5B_EventScript_BuyPikaClone_39

Zone5B_EventScript_BuyPikaClone_43:
# 258 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 259 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 260 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_45:
# 268 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 269 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 270 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_47:
# 249 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 250 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 251 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_50:
# 122 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_49

Zone5B_EventScript_BuyPikaClone_53:
# 292 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 293 "data/maps/Zone5B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone5B_EventScript_BuyPikaClone_52

Zone5B_EventScript_BuyPikaClone_56:
# 126 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_55

Zone5B_EventScript_BuyPikaClone_59:
# 130 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_58

Zone5B_EventScript_BuyPikaClone_62:
# 134 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_61

Zone5B_EventScript_BuyPikaClone_65:
# 138 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_64

Zone5B_EventScript_BuyPikaClone_68:
# 142 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_67

Zone5B_EventScript_BuyPikaClone_71:
# 146 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_70

Zone5B_EventScript_BuyPikaClone_74:
# 150 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_73

Zone5B_EventScript_BuyPikaClone_77:
# 154 "data/maps/Zone5B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5B_EventScript_BuyPikaClone_76

Zone5B_EventScript_BuyPikaClone_80:
# 157 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_4
# 158 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 159 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_83:
# 164 "data/maps/Zone5B/scripts.pory"
	hidemoneybox
# 165 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_BuyPikaClone_Text_2
# 166 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_BuyPikaClone_86:
# 171 "data/maps/Zone5B/scripts.pory"
	random 5
# 172 "data/maps/Zone5B/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/Zone5B/scripts.pory"
	case 0, Zone5B_EventScript_BuyPikaClone_89
# 179 "data/maps/Zone5B/scripts.pory"
	case 1, Zone5B_EventScript_BuyPikaClone_90
# 185 "data/maps/Zone5B/scripts.pory"
	case 2, Zone5B_EventScript_BuyPikaClone_91
# 191 "data/maps/Zone5B/scripts.pory"
	case 3, Zone5B_EventScript_BuyPikaClone_92
# 197 "data/maps/Zone5B/scripts.pory"
	case 4, Zone5B_EventScript_BuyPikaClone_93
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_89:
# 174 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 175 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_95
# 178 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_90:
# 180 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 181 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_98
# 184 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_91:
# 186 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 187 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_101
# 190 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_92:
# 192 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_PLUSLE
# 193 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_104
# 196 "data/maps/Zone5B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PLUSLE
	goto Zone5B_EventScript_BuyPikaClone_85

Zone5B_EventScript_BuyPikaClone_93:
# 198 "data/maps/Zone5B/scripts.pory"
	checkspeciesclause SPECIES_MINUN
# 199 "data/maps/Zone5B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5B_EventScript_BuyPikaClone_107
# 202 "data/maps/Zone5B/scripts.pory"
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


Zone5B_EventScript_ItemTM03::
# 301 "data/maps/Zone5B/scripts.pory"
	lock
# 302 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_TM03, Zone5B_EventScript_ItemTM03_2
# 307 "data/maps/Zone5B/scripts.pory"
	waitse
# 308 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 309 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 310 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_TM03
# 311 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 312 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_TM03
# 313 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_ItemTM03_2:
# 303 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 304 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_Item2Potion::
# 318 "data/maps/Zone5B/scripts.pory"
	lock
# 319 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_POTION_X2, Zone5B_EventScript_Item2Potion_2
# 324 "data/maps/Zone5B/scripts.pory"
	waitse
# 325 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 326 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 327 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_POTION_X2
# 328 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 329 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_POTION, 2
# 330 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_Item2Potion_2:
# 320 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 321 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_ItemGems::
# 335 "data/maps/Zone5B/scripts.pory"
	lock
# 336 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GEMS, Zone5B_EventScript_ItemGems_2
# 341 "data/maps/Zone5B/scripts.pory"
	waitse
# 342 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 343 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 344 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_GEMS
# 345 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 346 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_NORMAL_GEM
# 347 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_BUG_GEM
# 348 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_GRASS_GEM
# 349 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_ItemGems_2:
# 337 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 338 "data/maps/Zone5B/scripts.pory"
	release
	end


Zone5B_EventScript_GentleMint::
# 354 "data/maps/Zone5B/scripts.pory"
	lock
# 355 "data/maps/Zone5B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5B_GENTLE_MINT, Zone5B_EventScript_GentleMint_2
# 360 "data/maps/Zone5B/scripts.pory"
	waitse
# 361 "data/maps/Zone5B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 362 "data/maps/Zone5B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 363 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_ITEM_ZONE5B_GENTLE_MINT
# 364 "data/maps/Zone5B/scripts.pory"
	addobject VAR_LAST_TALKED
# 365 "data/maps/Zone5B/scripts.pory"
	finditem ITEM_GENTLE_MINT
# 366 "data/maps/Zone5B/scripts.pory"
	release
	end

Zone5B_EventScript_GentleMint_2:
# 356 "data/maps/Zone5B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 357 "data/maps/Zone5B/scripts.pory"
	release
	end


# 370 "data/maps/Zone5B/scripts.pory"

# 371 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_NovaandCora::
# 372 "data/maps/Zone5B/scripts.pory"
	trainerbattle_double TRAINER_PBL_NOVA_AND_CORA, Zone5B_Text_NovaandCoraIntro, Zone5B_Text_NovaandCoraDefeat, gText_NotEnoughMons
# 373 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_NovaandCoraPostBattle, MSGBOX_DEFAULT
# 374 "data/maps/Zone5B/scripts.pory"
	release
# 375 "data/maps/Zone5B/scripts.pory"
	end
# 376 "data/maps/Zone5B/scripts.pory"

# 377 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraIntro:
# 378 "data/maps/Zone5B/scripts.pory"
	.string "Nova: This grass is so tall!\p"
# 379 "data/maps/Zone5B/scripts.pory"
	.string "Cora: It's going up my nose!$"
# 380 "data/maps/Zone5B/scripts.pory"

# 381 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraDefeat:
# 382 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Achoo!\p"
# 383 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Achoo!$"
# 384 "data/maps/Zone5B/scripts.pory"

# 385 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_NovaandCoraPostBattle:
# 386 "data/maps/Zone5B/scripts.pory"
	.string "Nova: Being twins means-\p"
# 387 "data/maps/Zone5B/scripts.pory"
	.string "Cora: Sharing allergies!$"
# 388 "data/maps/Zone5B/scripts.pory"

# 389 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Clinton::
# 390 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_CLINTON, Zone5B_Text_ClintonIntro, Zone5B_Text_ClintonDefeat
# 391 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Zone5B/scripts.pory"
	end
# 393 "data/maps/Zone5B/scripts.pory"

# 394 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonIntro:
# 395 "data/maps/Zone5B/scripts.pory"
	.string "Supposedly, item chests that are\n"
# 396 "data/maps/Zone5B/scripts.pory"
	.string "tinted yellow hold special items.$"
# 397 "data/maps/Zone5B/scripts.pory"

# 398 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonDefeat:
# 399 "data/maps/Zone5B/scripts.pory"
	.string "I don't bother checking them\n"
# 400 "data/maps/Zone5B/scripts.pory"
	.string "though!$"
# 401 "data/maps/Zone5B/scripts.pory"

# 402 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_ClintonPostBattle:
# 403 "data/maps/Zone5B/scripts.pory"
	.string "I can buy all the TMs I want!\n"
# 404 "data/maps/Zone5B/scripts.pory"
	.string "I don't need any item chests!$"
# 405 "data/maps/Zone5B/scripts.pory"

# 406 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Ryan::
# 407 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RYAN, Zone5B_Text_RyanIntro, Zone5B_Text_RyanDefeat
# 408 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
# 409 "data/maps/Zone5B/scripts.pory"
	end
# 410 "data/maps/Zone5B/scripts.pory"

# 411 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanIntro:
# 412 "data/maps/Zone5B/scripts.pory"
	.string "Where am I?\n"
# 413 "data/maps/Zone5B/scripts.pory"
	.string "Ah! A wild Pokémon!$"
# 414 "data/maps/Zone5B/scripts.pory"

# 415 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanDefeat:
# 416 "data/maps/Zone5B/scripts.pory"
	.string "Sorry! I thought you were a\n"
# 417 "data/maps/Zone5B/scripts.pory"
	.string "Pokémon!$"
# 418 "data/maps/Zone5B/scripts.pory"

# 419 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_RyanPostBattle:
# 420 "data/maps/Zone5B/scripts.pory"
	.string "This grass is just too tall to see!$"
# 421 "data/maps/Zone5B/scripts.pory"

# 422 "data/maps/Zone5B/scripts.pory"
Zone5B_EventScript_Kenneth::
# 423 "data/maps/Zone5B/scripts.pory"
	trainerbattle_single TRAINER_PBL_KENNETH, Zone5B_Text_KennethIntro, Zone5B_Text_KennethDefeat
# 424 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Zone5B/scripts.pory"
	end
# 426 "data/maps/Zone5B/scripts.pory"

# 427 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethIntro:
# 428 "data/maps/Zone5B/scripts.pory"
	.string "I'm running back and forth! Huzzah!$"
# 429 "data/maps/Zone5B/scripts.pory"

# 430 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethDefeat:
# 431 "data/maps/Zone5B/scripts.pory"
	.string "Whew! I'm all out of steam!$"
# 432 "data/maps/Zone5B/scripts.pory"

# 433 "data/maps/Zone5B/scripts.pory"
Zone5B_Text_KennethPostBattle:
# 434 "data/maps/Zone5B/scripts.pory"
	.string "I gotta keep running!$"

Zone5B_EventScript_LeviathanBattle_Text_0:
# 53 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Argh, how did you manage to\n"
	.string "beat me?\p"
	.string "Well, I guess I'm supposed to give you a\n"
	.string "reward now.$"

Zone5B_EventScript_LeviathanBattle_Text_1:
# 55 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: The Eviolite boosts the\n"
	.string "defenses of Pokémon that can still\l"
	.string "evolve.\p"
	.string "Now then. You can pass through, but\n"
	.string "don't get in the way of my training\l"
	.string "again!$"

Zone5B_EventScript_BuyPikaClone_Text_0:
# 94 "data/maps/Zone5B/scripts.pory"
	.string "Sorry! I'm all out of Pikachu clones for\n"
	.string "sale right now.$"

Zone5B_EventScript_BuyPikaClone_Text_1:
# 99 "data/maps/Zone5B/scripts.pory"
	.string "You seem like the type that would like\n"
	.string "Pikachu!\p"
	.string "Now, I don't have Pikachu for sale, but I\n"
	.string "do have some very similar Pokémon, each\l"
	.string "for only ¥1000!$"

Zone5B_EventScript_BuyPikaClone_Text_2:
# 102 "data/maps/Zone5B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone5B_EventScript_BuyPikaClone_Text_3:
# 108 "data/maps/Zone5B/scripts.pory"
	.string "You don't have enough money.$"

Zone5B_EventScript_BuyPikaClone_Text_4:
# 157 "data/maps/Zone5B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone5B_EventScript_BuyPikaClone_Text_5:
# 162 "data/maps/Zone5B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pachirisu, Dedenne, Morpeko, Plusle, or\l"
	.string "Minun.\p"
	.string "Is this ok?$"

Zone5B_EventScript_BuyPikaClone_Text_6:
# 209 "data/maps/Zone5B/scripts.pory"
	.string "Choose which Electric-type you would\n"
	.string "like.$"

Zone5B_EventScript_BuyPikaClone_Text_7:
# 210 "data/maps/Zone5B/scripts.pory"
	.string "Pachirisu$"

Zone5B_EventScript_BuyPikaClone_Text_8:
# 210 "data/maps/Zone5B/scripts.pory"
	.string "Dedenne$"

Zone5B_EventScript_BuyPikaClone_Text_9:
# 210 "data/maps/Zone5B/scripts.pory"
	.string "Morpeko$"

Zone5B_EventScript_BuyPikaClone_Text_10:
# 210 "data/maps/Zone5B/scripts.pory"
	.string "Plusle$"

Zone5B_EventScript_BuyPikaClone_Text_11:
# 210 "data/maps/Zone5B/scripts.pory"
	.string "Minun$"

Zone5B_EventScript_BuyPikaClone_Text_12:
# 232 "data/maps/Zone5B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone5B_EventScript_BuyPikaClone_Text_13:
# 247 "data/maps/Zone5B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone5B_EventScript_BuyPikaClone_Text_14:
# 256 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Pikachu\n"
	.string "clone for ¥1000?$"

Zone5B_EventScript_BuyPikaClone_Text_15:
# 266 "data/maps/Zone5B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥1000?$"

Zone5B_EventScript_BuyPikaClone_Text_16:
# 280 "data/maps/Zone5B/scripts.pory"
	.string "I appreciate it!$"

Zone5B_EventScript_BuyPikaClone_Text_17:
# 285 "data/maps/Zone5B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone5B_EventScript_BuyPikaClone_Text_18:
# 287 "data/maps/Zone5B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone5B_EventScript_BuyPikaClone_Text_19:
# 290 "data/maps/Zone5B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone5B_EventScript_BuyPikaClone_Text_20:
# 295 "data/maps/Zone5B/scripts.pory"
	.string "Take good care of your new\n"
	.string "Electric-type, small mammal-like\l"
	.string "Pokémon!$"

Zone5B_Text_Leviathan5Intro::
# 77 "data/maps/Zone5B/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Not so fast! I'm training my\n"
	.string "Pokémon around here!\p"
	.string "You'll have to face our combined might\n"
	.string "to get past!\p"
	.string "This is where your journey forward\n"
	.string "stops!$"

Zone5B_Text_Leviathan5Defeat::
# 81 "data/maps/Zone5B/scripts.pory"
	.string "How!? My Pokémon were so bulky with\n"
	.string "their Eviolites!$"
