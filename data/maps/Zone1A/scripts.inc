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
# 260 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_13
# 261 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_25
# 280 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_26
# 299 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_27
Zone1A_EventScript_GiveFWG_24:
# 319 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 320 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_29, MSGBOX_YESNO
# 321 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_43
Zone1A_EventScript_GiveFWG_14:
# 327 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 328 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_19
Zone1A_EventScript_GiveFWG_18:
# 350 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 351 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 352 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 353 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_32, MSGBOX_DEFAULT
# 354 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 355 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_33
# 356 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 357 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 358 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_34, MSGBOX_YESNO
# 359 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_32
Zone1A_EventScript_GiveFWG_31:
# 363 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 364 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_35, MSGBOX_DEFAULT
# 365 "data/maps/Zone1A/scripts.pory"
	closemessage
# 366 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 367 "data/maps/Zone1A/scripts.pory"
	removeobject 8
# 368 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 369 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 370 "data/maps/Zone1A/scripts.pory"
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
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone1A_EventScript_GiveFWG_21
# 50 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_37
# 119 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_38
# 188 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_39
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_19:
# 329 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_30, MSGBOX_AUTOCLOSE
# 330 "data/maps/Zone1A/scripts.pory"
	special ChoosePartyMon
# 331 "data/maps/Zone1A/scripts.pory"
	waitstate
# 332 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 333 "data/maps/Zone1A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone1A_EventScript_GiveFWG_35
# 338 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 339 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 340 "data/maps/Zone1A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 341 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_31, MSGBOX_YESNO
# 342 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_67
# 347 "data/maps/Zone1A/scripts.pory"
	special SendChosenMonToPC
# 348 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone1A_EventScript_GiveFWG_18

Zone1A_EventScript_GiveFWG_21:
# 48 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_25:
# 262 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_14, Zone1A_EventScript_GiveFWG_Text_15, Zone1A_EventScript_GiveFWG_Text_16, Zone1A_EventScript_GiveFWG_Text_17, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_8
# 263 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 264 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_46
# 266 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_47
# 268 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_48
# 270 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_49
# 272 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_50
# 274 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_51
# 275 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_51
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_26:
# 281 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_8
# 282 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 283 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_53
# 285 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_54
# 287 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_55
# 289 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_56
# 291 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_57
# 293 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_58
# 294 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_58
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_27:
# 300 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_26, Zone1A_EventScript_GiveFWG_Text_27, Zone1A_EventScript_GiveFWG_Text_28, Zone1A_EventScript_GiveFWG_Text_8
# 301 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 302 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_60
# 304 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_61
# 306 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_62
# 308 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_63
# 310 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_64
# 312 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_65
# 313 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_65
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_32:
# 360 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 361 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_31

Zone1A_EventScript_GiveFWG_35:
# 334 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 335 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_37:
# 51 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_9, MSGBOX_YESNO
# 52 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_70
# 57 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 58 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 59 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_79
Zone1A_EventScript_GiveFWG_78:
# 62 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_HOPPIP
# 63 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_88
Zone1A_EventScript_GiveFWG_87:
# 66 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 67 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_97
Zone1A_EventScript_GiveFWG_96:
# 70 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SMOLIV
# 71 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_106
Zone1A_EventScript_GiveFWG_105:
# 74 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BOUNSWEET
# 75 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_115
Zone1A_EventScript_GiveFWG_114:
# 78 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_124
# 83 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_132:
# 84 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_133
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_38:
# 120 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_YESNO
# 121 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_73
# 126 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 127 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 128 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_82
Zone1A_EventScript_GiveFWG_81:
# 131 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 132 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_91
Zone1A_EventScript_GiveFWG_90:
# 135 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SALANDIT
# 136 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_100
Zone1A_EventScript_GiveFWG_99:
# 139 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 140 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_109
Zone1A_EventScript_GiveFWG_108:
# 143 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SIZZLIPEDE
# 144 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_118
Zone1A_EventScript_GiveFWG_117:
# 147 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_127
# 152 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_135:
# 153 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_136
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_39:
# 189 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_YESNO
# 190 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_76
# 195 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 196 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 197 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_85
Zone1A_EventScript_GiveFWG_84:
# 200 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 201 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_94
Zone1A_EventScript_GiveFWG_93:
# 204 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 205 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_103
Zone1A_EventScript_GiveFWG_102:
# 208 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SEEL
# 209 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_112
Zone1A_EventScript_GiveFWG_111:
# 212 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 213 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_121
Zone1A_EventScript_GiveFWG_120:
# 216 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_130
# 221 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_138:
# 222 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_139
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_43:
# 322 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 323 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_46:
# 265 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_47:
# 267 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HOPPIP
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_48:
# 269 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_49:
# 271 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_50:
# 273 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_51:
# 276 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 277 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_53:
# 284 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_54:
# 286 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_55:
# 288 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_56:
# 290 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_57:
# 292 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_58:
# 295 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 296 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_60:
# 303 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_61:
# 305 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_62:
# 307 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_63:
# 309 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_64:
# 311 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_65:
# 314 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 315 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_67:
# 343 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 344 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_70:
# 53 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 54 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_73:
# 122 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 123 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_76:
# 191 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 192 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_79:
# 60 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_78

Zone1A_EventScript_GiveFWG_82:
# 129 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_81

Zone1A_EventScript_GiveFWG_85:
# 198 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_84

Zone1A_EventScript_GiveFWG_88:
# 64 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_87

Zone1A_EventScript_GiveFWG_91:
# 133 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_90

Zone1A_EventScript_GiveFWG_94:
# 202 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_93

Zone1A_EventScript_GiveFWG_97:
# 68 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_96

Zone1A_EventScript_GiveFWG_100:
# 137 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_99

Zone1A_EventScript_GiveFWG_103:
# 206 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_102

Zone1A_EventScript_GiveFWG_106:
# 72 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_105

Zone1A_EventScript_GiveFWG_109:
# 141 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_108

Zone1A_EventScript_GiveFWG_112:
# 210 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_111

Zone1A_EventScript_GiveFWG_115:
# 76 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_114

Zone1A_EventScript_GiveFWG_118:
# 145 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_121:
# 214 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_124:
# 79 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 80 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_127:
# 148 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 149 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_130:
# 217 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 218 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_133:
# 85 "data/maps/Zone1A/scripts.pory"
	random 5
# 86 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_142
# 93 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_143
# 99 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_144
# 105 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_145
# 111 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_146
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_136:
# 154 "data/maps/Zone1A/scripts.pory"
	random 5
# 155 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_148
# 162 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_149
# 168 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_150
# 174 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_151
# 180 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_152
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_139:
# 223 "data/maps/Zone1A/scripts.pory"
	random 5
# 224 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_154
# 231 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_155
# 237 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_156
# 243 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_157
# 249 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_158
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_142:
# 88 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 89 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_160
# 92 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_143:
# 94 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_HOPPIP
# 95 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_163
# 98 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HOPPIP
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_144:
# 100 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 101 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_166
# 104 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_145:
# 106 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SMOLIV
# 107 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_169
# 110 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_146:
# 112 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BOUNSWEET
# 113 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_172
# 116 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_148:
# 157 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 158 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_175
# 161 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_149:
# 163 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 164 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_178
# 167 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_150:
# 169 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SALANDIT
# 170 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_181
# 173 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_151:
# 175 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 176 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_184
# 179 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_152:
# 181 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SIZZLIPEDE
# 182 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_187
# 185 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_154:
# 226 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 227 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_190
# 230 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_155:
# 232 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 233 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_193
# 236 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_156:
# 238 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 239 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_196
# 242 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_157:
# 244 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SEEL
# 245 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_199
# 248 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_158:
# 250 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 251 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_202
# 254 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_160:
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_163:
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_166:
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_169:
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_172:
	goto Zone1A_EventScript_GiveFWG_132

Zone1A_EventScript_GiveFWG_175:
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_178:
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_181:
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_184:
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_187:
	goto Zone1A_EventScript_GiveFWG_135

Zone1A_EventScript_GiveFWG_190:
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_193:
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_196:
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_199:
	goto Zone1A_EventScript_GiveFWG_138

Zone1A_EventScript_GiveFWG_202:
	goto Zone1A_EventScript_GiveFWG_138


# 378 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 379 "data/maps/Zone1A/scripts.pory"
	walk_left
# 379 "data/maps/Zone1A/scripts.pory"
	walk_left
# 379 "data/maps/Zone1A/scripts.pory"
	walk_left
# 379 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 382 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 383 "data/maps/Zone1A/scripts.pory"
	walk_right
# 383 "data/maps/Zone1A/scripts.pory"
	walk_right
# 383 "data/maps/Zone1A/scripts.pory"
	walk_right
# 383 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 387 "data/maps/Zone1A/scripts.pory"
	lockall
# 388 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 389 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 390 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 391 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 392 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 393 "data/maps/Zone1A/scripts.pory"
	waitse
# 394 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 395 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 396 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 397 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 398 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 399 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_2
Zone1A_EventScript_TriggerLeviathanBottom_1:
# 402 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 403 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 404 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 405 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 406 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 407 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 408 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 409 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 410 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 411 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanBottom_2:
# 400 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanBottom_1


Zone1A_EventScript_TriggerLeviathanMiddle::
# 415 "data/maps/Zone1A/scripts.pory"
	lockall
# 416 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 417 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 418 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 419 "data/maps/Zone1A/scripts.pory"
	waitse
# 420 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 421 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 422 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 423 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_2
Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 426 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 427 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 428 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 429 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 430 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 431 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 432 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 433 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanMiddle_2:
# 424 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanMiddle_1


Zone1A_EventScript_TriggerLeviathanTop::
# 437 "data/maps/Zone1A/scripts.pory"
	lockall
# 438 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 439 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 440 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 441 "data/maps/Zone1A/scripts.pory"
	waitse
# 442 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 443 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 444 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 445 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 446 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 447 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_2
Zone1A_EventScript_TriggerLeviathanTop_1:
# 450 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 451 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 452 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 453 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 454 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 455 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 456 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 457 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 458 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 459 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanTop_2:
# 448 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanTop_1


Zone1A_EventScript_LeviathanBattle::
# 463 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 464 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 465 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 466 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 467 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 467 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 477 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 478 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_12
# 480 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_13
# 482 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_14
Zone1A_EventScript_LeviathanBattle_1:
# 486 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 487 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
# 488 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
# 489 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
# 490 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
# 491 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
# 492 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 493 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 494 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 495 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 496 "data/maps/Zone1A/scripts.pory"
	closemessage
# 497 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 498 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 499 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 500 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 501 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 468 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 469 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_8
# 471 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_9
# 473 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_10
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_8:
# 470 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_9:
# 472 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_10:
# 474 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_12:
# 479 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_13:
# 481 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_14:
# 483 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_ItemRandom1::
# 526 "data/maps/Zone1A/scripts.pory"
	lock
# 527 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_EventScript_ItemRandom1_2
# 532 "data/maps/Zone1A/scripts.pory"
	waitse
# 533 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 534 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 535 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_RANDOM_1
# 536 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 537 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 538 "data/maps/Zone1A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 539 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemRandom1_2:
# 528 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 529 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_ItemQuickClaw::
# 544 "data/maps/Zone1A/scripts.pory"
	lock
# 545 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_ItemQuickClaw_2
# 550 "data/maps/Zone1A/scripts.pory"
	waitse
# 551 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 552 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 553 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 554 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 555 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 556 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemQuickClaw_2:
# 546 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 547 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_Sign_GoldenTree::
# 561 "data/maps/Zone1A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 562 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_Sign_GoldenTree_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_PorygonSign::
# 567 "data/maps/Zone1A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 568 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 569 "data/maps/Zone1A/scripts.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 570 "data/maps/Zone1A/scripts.pory"
	setseenmon SPECIES_PORYGON
# 571 "data/maps/Zone1A/scripts.pory"
	waitbuttonpress
# 572 "data/maps/Zone1A/scripts.pory"
	hidemonpic
# 573 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_Sign_RunningShoes::
# 578 "data/maps/Zone1A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 579 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_Sign_RunningShoes_Text_0, MSGBOX_SIGN
	end


# 583 "data/maps/Zone1A/scripts.pory"

# 584 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 585 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 586 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 587 "data/maps/Zone1A/scripts.pory"
	end
# 588 "data/maps/Zone1A/scripts.pory"

# 589 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 590 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 591 "data/maps/Zone1A/scripts.pory"

# 592 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 593 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 594 "data/maps/Zone1A/scripts.pory"

# 595 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 596 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 597 "data/maps/Zone1A/scripts.pory"

# 598 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 599 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 600 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 601 "data/maps/Zone1A/scripts.pory"
	end
# 602 "data/maps/Zone1A/scripts.pory"

# 603 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 604 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 605 "data/maps/Zone1A/scripts.pory"

# 606 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 607 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 608 "data/maps/Zone1A/scripts.pory"

# 609 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 610 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 611 "data/maps/Zone1A/scripts.pory"

# 612 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 613 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 614 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 615 "data/maps/Zone1A/scripts.pory"
	end
# 616 "data/maps/Zone1A/scripts.pory"

# 617 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 618 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 619 "data/maps/Zone1A/scripts.pory"

# 620 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 621 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 622 "data/maps/Zone1A/scripts.pory"

# 623 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 624 "data/maps/Zone1A/scripts.pory"
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
	.string "I'm offering trainers a Grass, Fire, or\n"
	.string "Water type Pokémon to help supplement\l"
	.string "their teams. Interested?$"

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
# 51 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansage, Hoppip, Sunkern, Smoliv, or\l"
	.string "Bounsweet.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_10:
# 79 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_11:
# 120 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansear, Slugma, Salandit, Vulpix, or\l"
	.string "Sizzlipede.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_12:
# 189 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Panpour, Barboach, Finneon, Seel, or\l"
	.string "Goldeen.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_13:
# 260 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_14:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_15:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Hoppip$"

Zone1A_EventScript_GiveFWG_Text_16:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_17:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Smoliv$"

Zone1A_EventScript_GiveFWG_Text_18:
# 262 "data/maps/Zone1A/scripts.pory"
	.string "Bounsweet$"

Zone1A_EventScript_GiveFWG_Text_19:
# 281 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_20:
# 281 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_21:
# 281 "data/maps/Zone1A/scripts.pory"
	.string "Salandit$"

Zone1A_EventScript_GiveFWG_Text_22:
# 281 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_23:
# 281 "data/maps/Zone1A/scripts.pory"
	.string "Sizzlipede$"

Zone1A_EventScript_GiveFWG_Text_24:
# 300 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_25:
# 300 "data/maps/Zone1A/scripts.pory"
	.string "Barboach$"

Zone1A_EventScript_GiveFWG_Text_26:
# 300 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_27:
# 300 "data/maps/Zone1A/scripts.pory"
	.string "Seel$"

Zone1A_EventScript_GiveFWG_Text_28:
# 300 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_29:
# 320 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_30:
# 329 "data/maps/Zone1A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone1A_EventScript_GiveFWG_Text_31:
# 341 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone1A_EventScript_GiveFWG_Text_32:
# 353 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_33:
# 355 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_34:
# 358 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_35:
# 364 "data/maps/Zone1A/scripts.pory"
	.string "Good luck on the rest of your journey!$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 493 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I had a variety of\n"
	.string "types, I would be able to win.\p"
	.string "I guess there's more to battling than\n"
	.string "just having different Pokémon!\p"
	.string "As a reward for beating me, take this\n"
	.string "Exp. Share! It's useful for training up\l"
	.string "Pokémon.$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 495 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_EventScript_Sign_GoldenTree_Text_0:
# 562 "data/maps/Zone1A/scripts.pory"
	.string "Trainer Tips\p"
	.string "Shaking a Golden Tree might drop\n"
	.string "berries, though occasionally you'll\l"
	.string "disturb the wild Pokémon living in the\l"
	.string "tree!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 568 "data/maps/Zone1A/scripts.pory"
	.string "Trainer Tips\p"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_EventScript_Sign_RunningShoes_Text_0:
# 579 "data/maps/Zone1A/scripts.pory"
	.string "Trainer Tips\p"
	.string "Press {L_BUTTON} to enable or disable Auto Run.$"

Zone1A_Text_FWG_ComeBack::
# 374 "data/maps/Zone1A/scripts.pory"
	.string "Come back if you change your mind!$"

Zone1A_Text_Leviathan1Intro::
# 505 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 512 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 516 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 521 "data/maps/Zone1A/scripts.pory"
	.string "Drats! My Fire-Water-Grass core wasn't\n"
	.string "enough!$"
