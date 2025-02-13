Zone1A_MapScripts::
# 2 "data/maps/Zone1A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone1A_EventScript_GiveFWG::
# 17 "data/maps/Zone1A/scripts.pory"
	lock
# 18 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 19 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_0, MSGBOX_YESNO
# 20 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_2
# 23 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_2, MSGBOX_DEFAULT
Zone1A_EventScript_GiveFWG_1:
# 25 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_3, MSGBOX_YESNO
# 26 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_6
# 31 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_4
# 32 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_5, Zone1A_EventScript_GiveFWG_Text_6, Zone1A_EventScript_GiveFWG_Text_7, Zone1A_EventScript_GiveFWG_Text_8
# 33 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_10
# 36 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_11
# 38 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_12
# 40 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_13
# 41 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_13
Zone1A_EventScript_GiveFWG_8:
# 46 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone1A_EventScript_GiveFWG_15
# 253 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_25
# 278 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_26
# 303 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_27
Zone1A_EventScript_GiveFWG_24:
# 329 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 330 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_30, MSGBOX_YESNO
# 331 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_40
Zone1A_EventScript_GiveFWG_14:
# 337 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 338 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_19
Zone1A_EventScript_GiveFWG_18:
# 360 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 361 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 362 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 363 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_33, MSGBOX_DEFAULT
# 364 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 365 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_34
# 366 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 367 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 368 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_35, MSGBOX_YESNO
# 369 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_32
Zone1A_EventScript_GiveFWG_31:
# 373 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 374 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_52
# 377 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_53
# 380 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_54
Zone1A_EventScript_GiveFWG_51:
# 384 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ZONE1A_NUZLOCKE_RECEIVED_FWG
# 385 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_2:
# 21 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_1, MSGBOX_DEFAULT
	goto Zone1A_EventScript_GiveFWG_1

Zone1A_EventScript_GiveFWG_6:
# 27 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack, MSGBOX_AUTOCLOSE
# 28 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_10:
# 35 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 0
	goto Zone1A_EventScript_GiveFWG_8

Zone1A_EventScript_GiveFWG_11:
# 37 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 1
	goto Zone1A_EventScript_GiveFWG_8

Zone1A_EventScript_GiveFWG_12:
# 39 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 2
	goto Zone1A_EventScript_GiveFWG_8

Zone1A_EventScript_GiveFWG_13:
# 42 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack, MSGBOX_AUTOCLOSE
# 43 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_15:
# 47 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ZONE1A_NUZLOCKE_RECEIVED_FWG, Zone1A_EventScript_GiveFWG_22
# 52 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone1A_EventScript_GiveFWG_37
# 55 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_61
# 120 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_62
# 185 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_63
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_19:
# 339 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_31, MSGBOX_AUTOCLOSE
# 340 "data/maps/Zone1A/scripts.pory"
	special ChoosePartyMon
# 341 "data/maps/Zone1A/scripts.pory"
	waitstate
# 342 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 343 "data/maps/Zone1A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone1A_EventScript_GiveFWG_35
# 348 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 349 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 350 "data/maps/Zone1A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 351 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_32, MSGBOX_YESNO
# 352 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_59
# 357 "data/maps/Zone1A/scripts.pory"
	special SendChosenMonToPC
# 358 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone1A_EventScript_GiveFWG_18

Zone1A_EventScript_GiveFWG_22:
# 48 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_9
# 49 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_25:
	checkitem ITEM_GREEN_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_43
# 260 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_17
# 261 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 262 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_8
# 263 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 264 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_68
# 266 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_69
# 268 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_70
# 270 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_71
# 272 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_72
# 273 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_72
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_26:
	checkitem ITEM_RED_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_46
# 285 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_17
# 286 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 287 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_8
# 288 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_74
# 291 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_75
# 293 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_76
# 295 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_77
# 297 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_78
# 298 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_78
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_27:
	checkitem ITEM_BLUE_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_49
# 310 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_17
# 311 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 312 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_26, Zone1A_EventScript_GiveFWG_Text_27, Zone1A_EventScript_GiveFWG_Text_28, Zone1A_EventScript_GiveFWG_Text_29, Zone1A_EventScript_GiveFWG_Text_8
# 313 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 314 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_80
# 316 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_81
# 318 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_82
# 320 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_83
# 322 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_84
# 323 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_84
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_32:
# 370 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 371 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_31

Zone1A_EventScript_GiveFWG_35:
# 344 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 345 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_37:
# 53 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_40:
# 332 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 333 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_43:
# 255 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10
# 256 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 257 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_46:
# 280 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_13
# 281 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 282 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_49:
# 305 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_15
# 306 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 307 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_52:
# 375 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_36, MSGBOX_AUTOCLOSE
# 376 "data/maps/Zone1A/scripts.pory"
	removeitem ITEM_GREEN_APRICORN
	goto Zone1A_EventScript_GiveFWG_51

Zone1A_EventScript_GiveFWG_53:
# 378 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_37, MSGBOX_AUTOCLOSE
# 379 "data/maps/Zone1A/scripts.pory"
	removeitem ITEM_RED_APRICORN
	goto Zone1A_EventScript_GiveFWG_51

Zone1A_EventScript_GiveFWG_54:
# 381 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_38, MSGBOX_AUTOCLOSE
# 382 "data/maps/Zone1A/scripts.pory"
	removeitem ITEM_BLUE_APRICORN
	goto Zone1A_EventScript_GiveFWG_51

Zone1A_EventScript_GiveFWG_59:
# 353 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 354 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_61:
	checkitem ITEM_GREEN_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_86
# 62 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_YESNO
# 63 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_95
# 68 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 69 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 70 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_104
Zone1A_EventScript_GiveFWG_103:
# 73 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 74 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_113
Zone1A_EventScript_GiveFWG_112:
# 77 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 78 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_122
Zone1A_EventScript_GiveFWG_121:
# 81 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 82 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_131
Zone1A_EventScript_GiveFWG_130:
# 85 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_140
# 90 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_148:
# 91 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_149
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_62:
	checkitem ITEM_RED_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_89
# 127 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_14, MSGBOX_YESNO
# 128 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_98
# 133 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 134 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 135 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_107
Zone1A_EventScript_GiveFWG_106:
# 138 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 139 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_116
Zone1A_EventScript_GiveFWG_115:
# 142 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 143 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_125
Zone1A_EventScript_GiveFWG_124:
# 146 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 147 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_134
Zone1A_EventScript_GiveFWG_133:
# 150 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_143
# 155 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_151:
# 156 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_152
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_63:
	checkitem ITEM_BLUE_APRICORN
# 0 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone1A_EventScript_GiveFWG_92
# 192 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_16, MSGBOX_YESNO
# 193 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_101
# 198 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 199 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 200 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_110
Zone1A_EventScript_GiveFWG_109:
# 203 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 204 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_119
Zone1A_EventScript_GiveFWG_118:
# 207 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 208 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_128
Zone1A_EventScript_GiveFWG_127:
# 211 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 212 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_137
Zone1A_EventScript_GiveFWG_136:
# 215 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_146
# 220 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_154:
# 221 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_155
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_68:
# 265 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_69:
# 267 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_70:
# 269 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_71:
# 271 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_72:
# 274 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 275 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_74:
# 290 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_75:
# 292 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_76:
# 294 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_77:
# 296 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_78:
# 299 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 300 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_80:
# 315 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_81:
# 317 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_82:
# 319 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_83:
# 321 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_84:
# 324 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 325 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_86:
# 57 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10
# 58 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 59 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_89:
# 122 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_13
# 123 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 124 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_92:
# 187 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_15
# 188 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 189 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_95:
# 64 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 65 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_98:
# 129 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 130 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_101:
# 194 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 195 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_104:
# 71 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_103

Zone1A_EventScript_GiveFWG_107:
# 136 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_106

Zone1A_EventScript_GiveFWG_110:
# 201 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_109

Zone1A_EventScript_GiveFWG_113:
# 75 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_112

Zone1A_EventScript_GiveFWG_116:
# 140 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_115

Zone1A_EventScript_GiveFWG_119:
# 205 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_118

Zone1A_EventScript_GiveFWG_122:
# 79 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_121

Zone1A_EventScript_GiveFWG_125:
# 144 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_124

Zone1A_EventScript_GiveFWG_128:
# 209 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_127

Zone1A_EventScript_GiveFWG_131:
# 83 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_130

Zone1A_EventScript_GiveFWG_134:
# 148 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_133

Zone1A_EventScript_GiveFWG_137:
# 213 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_136

Zone1A_EventScript_GiveFWG_140:
# 86 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_AUTOCLOSE
# 87 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_143:
# 151 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_AUTOCLOSE
# 152 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_146:
# 216 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_AUTOCLOSE
# 217 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_149:
# 92 "data/maps/Zone1A/scripts.pory"
	random 4
# 93 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_158
# 100 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_159
# 106 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_160
# 112 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_161
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_152:
# 157 "data/maps/Zone1A/scripts.pory"
	random 4
# 158 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_163
# 165 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_164
# 171 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_165
# 177 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_166
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_155:
# 222 "data/maps/Zone1A/scripts.pory"
	random 4
# 223 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_168
# 230 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_169
# 236 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_170
# 242 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_171
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_158:
# 95 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 96 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_173
# 99 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_159:
# 101 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 102 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_176
# 105 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_160:
# 107 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 108 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_179
# 111 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_161:
# 113 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 114 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_182
# 117 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_163:
# 160 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 161 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_185
# 164 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_164:
# 166 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 167 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_188
# 170 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_165:
# 172 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 173 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_191
# 176 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_166:
# 178 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 179 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_194
# 182 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_168:
# 225 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 226 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_197
# 229 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_169:
# 231 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 232 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_200
# 235 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_170:
# 237 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 238 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_203
# 241 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_171:
# 243 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 244 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_206
# 247 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_173:
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_176:
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_179:
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_182:
	goto Zone1A_EventScript_GiveFWG_148

Zone1A_EventScript_GiveFWG_185:
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_188:
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_191:
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_194:
	goto Zone1A_EventScript_GiveFWG_151

Zone1A_EventScript_GiveFWG_197:
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_200:
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_203:
	goto Zone1A_EventScript_GiveFWG_154

Zone1A_EventScript_GiveFWG_206:
	goto Zone1A_EventScript_GiveFWG_154


# 393 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 394 "data/maps/Zone1A/scripts.pory"
	walk_left
# 394 "data/maps/Zone1A/scripts.pory"
	walk_left
# 394 "data/maps/Zone1A/scripts.pory"
	walk_left
# 394 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 397 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 398 "data/maps/Zone1A/scripts.pory"
	walk_right
# 398 "data/maps/Zone1A/scripts.pory"
	walk_right
# 398 "data/maps/Zone1A/scripts.pory"
	walk_right
# 398 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 402 "data/maps/Zone1A/scripts.pory"
	lockall
# 403 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 404 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 405 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 406 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 407 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 408 "data/maps/Zone1A/scripts.pory"
	waitse
# 409 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 410 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 411 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 412 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 413 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 414 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_2
Zone1A_EventScript_TriggerLeviathanBottom_1:
# 417 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 418 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 419 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 420 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 421 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 422 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 423 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 424 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 425 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 426 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanBottom_2:
# 415 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanBottom_1


Zone1A_EventScript_TriggerLeviathanMiddle::
# 430 "data/maps/Zone1A/scripts.pory"
	lockall
# 431 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 432 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 433 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 434 "data/maps/Zone1A/scripts.pory"
	waitse
# 435 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 436 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 437 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 438 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_2
Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 441 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 442 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 443 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 444 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 445 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 446 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 447 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 448 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanMiddle_2:
# 439 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanMiddle_1


Zone1A_EventScript_TriggerLeviathanTop::
# 452 "data/maps/Zone1A/scripts.pory"
	lockall
# 453 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 454 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 455 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 456 "data/maps/Zone1A/scripts.pory"
	waitse
# 457 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 458 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 459 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 460 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 461 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 462 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_2
Zone1A_EventScript_TriggerLeviathanTop_1:
# 465 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 466 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 467 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 468 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 469 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 470 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 471 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 472 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 473 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 474 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanTop_2:
# 463 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanTop_1


Zone1A_EventScript_LeviathanBattle::
# 478 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 479 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 480 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 481 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 482 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 482 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 492 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 493 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_12
# 495 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_13
# 497 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_14
Zone1A_EventScript_LeviathanBattle_1:
# 501 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 502 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
# 503 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
# 504 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
# 505 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
# 506 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
# 507 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 508 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 509 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 510 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 511 "data/maps/Zone1A/scripts.pory"
	closemessage
# 512 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 513 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 514 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 515 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 516 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 483 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 484 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_8
# 486 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_9
# 488 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_10
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_8:
# 485 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_9:
# 487 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_10:
# 489 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_12:
# 494 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_13:
# 496 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_14:
# 498 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_Random1::
# 541 "data/maps/Zone1A/scripts.pory"
	lock
# 542 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_EventScript_Random1_2
# 547 "data/maps/Zone1A/scripts.pory"
	waitse
# 548 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 549 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 550 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_RANDOM_1
# 551 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 552 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 553 "data/maps/Zone1A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 554 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_Random1_2:
# 543 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 544 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_QuickClaw::
# 559 "data/maps/Zone1A/scripts.pory"
	lock
# 560 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_QuickClaw_2
# 565 "data/maps/Zone1A/scripts.pory"
	waitse
# 566 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 567 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 568 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 569 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 570 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 571 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_QuickClaw_2:
# 561 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 562 "data/maps/Zone1A/scripts.pory"
	release
	end


# 575 "data/maps/Zone1A/scripts.pory"

# 576 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 577 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 578 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 579 "data/maps/Zone1A/scripts.pory"
	end
# 580 "data/maps/Zone1A/scripts.pory"

# 581 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 582 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 583 "data/maps/Zone1A/scripts.pory"

# 584 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 585 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 586 "data/maps/Zone1A/scripts.pory"

# 587 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 588 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 589 "data/maps/Zone1A/scripts.pory"

# 590 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 591 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 592 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 593 "data/maps/Zone1A/scripts.pory"
	end
# 594 "data/maps/Zone1A/scripts.pory"

# 595 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 596 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 597 "data/maps/Zone1A/scripts.pory"

# 598 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 599 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 600 "data/maps/Zone1A/scripts.pory"

# 601 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 602 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 603 "data/maps/Zone1A/scripts.pory"

# 604 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 605 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 606 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 607 "data/maps/Zone1A/scripts.pory"
	end
# 608 "data/maps/Zone1A/scripts.pory"

# 609 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 610 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 611 "data/maps/Zone1A/scripts.pory"

# 612 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 613 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 614 "data/maps/Zone1A/scripts.pory"

# 615 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 616 "data/maps/Zone1A/scripts.pory"
	.string "I must reclaim my honor…$"

Zone1A_EventScript_GiveFWG_Text_0:
# 19 "data/maps/Zone1A/scripts.pory"
	.string "Hello! You look like a new trainer.\p"
	.string "Do you know about Pokémon type\n"
	.string "matchups?$"

Zone1A_EventScript_GiveFWG_Text_1:
# 21 "data/maps/Zone1A/scripts.pory"
	.string "Type matchups are one of the most\n"
	.string "important parts of Pokémon battles!\p"
	.string "The most basic type matchup is Grass\n"
	.string "beats Water, Water beats Fire, and Fire\l"
	.string "beats Grass.\p"
	.string "It can be very important to have a\n"
	.string "diversity of types on your team.$"

Zone1A_EventScript_GiveFWG_Text_2:
# 23 "data/maps/Zone1A/scripts.pory"
	.string "Oh! Then I'm sure you could see the\n"
	.string "benefits of having a diversity of types\l"
	.string "on your team.$"

Zone1A_EventScript_GiveFWG_Text_3:
# 25 "data/maps/Zone1A/scripts.pory"
	.string "In exchange for a Green, Red, or Blue\n"
	.string "Apricorn, I'm offering trainers a Grass,\l"
	.string "Fire, or Water type Pokémon to help\l"
	.string "supplement their teams. Interested?$"

Zone1A_EventScript_GiveFWG_Text_4:
# 31 "data/maps/Zone1A/scripts.pory"
	.string "Do you want a Grass, Fire, or Water\n"
	.string "type?$"

Zone1A_EventScript_GiveFWG_Text_5:
# 32 "data/maps/Zone1A/scripts.pory"
	.string "Grass$"

Zone1A_EventScript_GiveFWG_Text_6:
# 32 "data/maps/Zone1A/scripts.pory"
	.string "Fire$"

Zone1A_EventScript_GiveFWG_Text_7:
# 32 "data/maps/Zone1A/scripts.pory"
	.string "Water$"

Zone1A_EventScript_GiveFWG_Text_8:
# 32 "data/maps/Zone1A/scripts.pory"
	.string "Exit$"

Zone1A_EventScript_GiveFWG_Text_9:
# 48 "data/maps/Zone1A/scripts.pory"
	.string "Uh… It looks like I'm actually almost\n"
	.string "out of Pokémon to give, so I can't give\l"
	.string "you anymore. Sorry!$"

Zone1A_EventScript_GiveFWG_Text_10:
# 57 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you do not have a Green\n"
	.string "Apricorn.$"

Zone1A_EventScript_GiveFWG_Text_11:
# 62 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansage, Gossifleur, Sunkern, or\l"
	.string "Cherubi.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_12:
# 86 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_13:
# 122 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you do not have a Red\n"
	.string "Apricorn.$"

Zone1A_EventScript_GiveFWG_Text_14:
# 127 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansear, Vulpix, Slugma, or Litleo.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_15:
# 187 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you do not have a Blue\n"
	.string "Apricorn.$"

Zone1A_EventScript_GiveFWG_Text_16:
# 192 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Panpour, Barboach, Goldeen, or Finneon.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_17:
# 260 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_18:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_19:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Gossifleur$"

Zone1A_EventScript_GiveFWG_Text_20:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_21:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Cherubi$"

Zone1A_EventScript_GiveFWG_Text_22:
# 287 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_23:
# 287 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_24:
# 287 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_25:
# 287 "data/maps/Zone1A/scripts.pory"
	.string "Litleo$"

Zone1A_EventScript_GiveFWG_Text_26:
# 312 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_27:
# 312 "data/maps/Zone1A/scripts.pory"
	.string "Barboach$"

Zone1A_EventScript_GiveFWG_Text_28:
# 312 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_29:
# 312 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_30:
# 330 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_31:
# 339 "data/maps/Zone1A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone1A_EventScript_GiveFWG_Text_32:
# 351 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone1A_EventScript_GiveFWG_Text_33:
# 363 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_34:
# 365 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_35:
# 368 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_36:
# 375 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} handed over 1 Green\n"
	.string "Apricorn.$"

Zone1A_EventScript_GiveFWG_Text_37:
# 378 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} handed over 1 Red Apricorn.$"

Zone1A_EventScript_GiveFWG_Text_38:
# 381 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} handed over 1 Blue Apricorn.$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 508 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I had a variety of\n"
	.string "types, I would be able to win.\p"
	.string "I guess there's more to battling than\n"
	.string "just having different Pokémon!\p"
	.string "As a reward for beating me, take this\n"
	.string "Exp. Share! It's useful for training up\l"
	.string "Pokémon.$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 510 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_Text_FWG_ComeBack::
# 389 "data/maps/Zone1A/scripts.pory"
	.string "Come back another time!$"

Zone1A_Text_Leviathan1Intro::
# 520 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 527 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 531 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 536 "data/maps/Zone1A/scripts.pory"
	.string "Drats! My Fire-Water-Grass core wasn't\n"
	.string "enough!$"
