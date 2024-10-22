Zone1A_MapScripts::
# 2 "data/maps/Zone1A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2
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
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 47 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_15
# 52 "data/maps/Zone1A/scripts.pory"
	call EventScript_NuzlockeVerifyGift
# 53 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone1A_EventScript_GiveFWG_18
# 249 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_11
# 250 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_28
# 269 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_29
# 288 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_30
Zone1A_EventScript_GiveFWG_27:
# 308 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 309 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_27, MSGBOX_YESNO
# 310 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_40
Zone1A_EventScript_GiveFWG_17:
# 316 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 317 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 318 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 319 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_28, MSGBOX_DEFAULT
# 320 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 321 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_29
# 322 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 323 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 324 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_30, MSGBOX_YESNO
# 325 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_22
Zone1A_EventScript_GiveFWG_21:
# 329 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 330 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_31, MSGBOX_DEFAULT
# 331 "data/maps/Zone1A/scripts.pory"
	closemessage
# 332 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 333 "data/maps/Zone1A/scripts.pory"
	removeobject 8
# 334 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_RECEIVED_FWG
# 335 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 336 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_2:
# 21 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_1, MSGBOX_DEFAULT
	goto Zone1A_EventScript_GiveFWG_1

Zone1A_EventScript_GiveFWG_6:
# 27 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
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
	msgbox Zone1A_Text_FWG_ComeBack
# 43 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_15:
# 48 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_9
# 49 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_18:
# 54 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone1A_EventScript_GiveFWG_24
# 57 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_34
# 120 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_35
# 183 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_36
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_22:
# 326 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 327 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_21

Zone1A_EventScript_GiveFWG_24:
# 55 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_28:
# 251 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_12, Zone1A_EventScript_GiveFWG_Text_13, Zone1A_EventScript_GiveFWG_Text_14, Zone1A_EventScript_GiveFWG_Text_15, Zone1A_EventScript_GiveFWG_Text_16, Zone1A_EventScript_GiveFWG_Text_8
# 252 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_43
# 255 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_44
# 257 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_45
# 259 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_46
# 261 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_47
# 263 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_48
# 264 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_48
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_29:
# 270 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_17, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_8
# 271 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_50
# 274 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_51
# 276 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_52
# 278 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_53
# 280 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_54
# 282 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_55
# 283 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_55
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_30:
# 289 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_26, Zone1A_EventScript_GiveFWG_Text_8
# 290 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_57
# 293 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_58
# 295 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_59
# 297 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_60
# 299 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_61
# 301 "data/maps/Zone1A/scripts.pory"
	case 5, Zone1A_EventScript_GiveFWG_62
# 302 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_62
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_34:
# 58 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 59 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 60 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_64
Zone1A_EventScript_GiveFWG_63:
# 63 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CACNEA
# 64 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_73
Zone1A_EventScript_GiveFWG_72:
# 67 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 68 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_82
Zone1A_EventScript_GiveFWG_81:
# 71 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SMOLIV
# 72 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_91
Zone1A_EventScript_GiveFWG_90:
# 75 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BOUNSWEET
# 76 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_100
Zone1A_EventScript_GiveFWG_99:
# 79 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_109
# 84 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_117:
# 85 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_118
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_35:
# 121 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 122 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 123 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_67
Zone1A_EventScript_GiveFWG_66:
# 126 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 127 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_76
Zone1A_EventScript_GiveFWG_75:
# 130 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SALANDIT
# 131 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_85
Zone1A_EventScript_GiveFWG_84:
# 134 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 135 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_94
Zone1A_EventScript_GiveFWG_93:
# 138 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SIZZLIPEDE
# 139 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_103
Zone1A_EventScript_GiveFWG_102:
# 142 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_112
# 147 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_120:
# 148 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_121
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_36:
# 184 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 185 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 186 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_70
Zone1A_EventScript_GiveFWG_69:
# 189 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_WIGLETT
# 190 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_79
Zone1A_EventScript_GiveFWG_78:
# 193 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 194 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_88
Zone1A_EventScript_GiveFWG_87:
# 197 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SEEL
# 198 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_97
Zone1A_EventScript_GiveFWG_96:
# 201 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 202 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_106
Zone1A_EventScript_GiveFWG_105:
# 205 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 5
	goto_if_eq Zone1A_EventScript_GiveFWG_115
# 210 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_123:
# 211 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_124
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_40:
# 311 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 312 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_43:
# 254 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_44:
# 256 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CACNEA
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_45:
# 258 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_46:
# 260 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_47:
# 262 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_48:
# 265 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 266 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_50:
# 273 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_51:
# 275 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_52:
# 277 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_53:
# 279 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_54:
# 281 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_55:
# 284 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 285 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_57:
# 292 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_58:
# 294 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WIGLETT
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_59:
# 296 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_60:
# 298 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_61:
# 300 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_62:
# 303 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 304 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_64:
# 61 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_63

Zone1A_EventScript_GiveFWG_67:
# 124 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_66

Zone1A_EventScript_GiveFWG_70:
# 187 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_69

Zone1A_EventScript_GiveFWG_73:
# 65 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_72

Zone1A_EventScript_GiveFWG_76:
# 128 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_75

Zone1A_EventScript_GiveFWG_79:
# 191 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_78

Zone1A_EventScript_GiveFWG_82:
# 69 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_81

Zone1A_EventScript_GiveFWG_85:
# 132 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_84

Zone1A_EventScript_GiveFWG_88:
# 195 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_87

Zone1A_EventScript_GiveFWG_91:
# 73 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_90

Zone1A_EventScript_GiveFWG_94:
# 136 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_93

Zone1A_EventScript_GiveFWG_97:
# 199 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_96

Zone1A_EventScript_GiveFWG_100:
# 77 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_99

Zone1A_EventScript_GiveFWG_103:
# 140 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_102

Zone1A_EventScript_GiveFWG_106:
# 203 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_105

Zone1A_EventScript_GiveFWG_109:
# 80 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10
# 81 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_112:
# 143 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10
# 144 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_115:
# 206 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10
# 207 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_118:
# 86 "data/maps/Zone1A/scripts.pory"
	random 5
# 87 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_127
# 94 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_128
# 100 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_129
# 106 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_130
# 112 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_131
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_121:
# 149 "data/maps/Zone1A/scripts.pory"
	random 5
# 150 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_133
# 157 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_134
# 163 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_135
# 169 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_136
# 175 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_137
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_124:
# 212 "data/maps/Zone1A/scripts.pory"
	random 5
# 213 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_139
# 220 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_140
# 226 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_141
# 232 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_142
# 238 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_143
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_127:
# 89 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 90 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_145
# 93 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_128:
# 95 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CACNEA
# 96 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_148
# 99 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CACNEA
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_129:
# 101 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 102 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_151
# 105 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_130:
# 107 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SMOLIV
# 108 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_154
# 111 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_131:
# 113 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BOUNSWEET
# 114 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_157
# 117 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_133:
# 152 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 153 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_160
# 156 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_134:
# 158 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 159 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_163
# 162 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_135:
# 164 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SALANDIT
# 165 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_166
# 168 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_136:
# 170 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 171 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_169
# 174 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_137:
# 176 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SIZZLIPEDE
# 177 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_172
# 180 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_139:
# 215 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 216 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_175
# 219 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_140:
# 221 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_WIGLETT
# 222 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_178
# 225 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WIGLETT
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_141:
# 227 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 228 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_181
# 231 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_142:
# 233 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SEEL
# 234 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_184
# 237 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_143:
# 239 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 240 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_187
# 243 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_145:
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_148:
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_151:
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_154:
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_157:
	goto Zone1A_EventScript_GiveFWG_117

Zone1A_EventScript_GiveFWG_160:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_163:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_166:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_169:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_172:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_175:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_178:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_181:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_184:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_187:
	goto Zone1A_EventScript_GiveFWG_123


# 344 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 345 "data/maps/Zone1A/scripts.pory"
	walk_left
# 345 "data/maps/Zone1A/scripts.pory"
	walk_left
# 345 "data/maps/Zone1A/scripts.pory"
	walk_left
# 345 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 348 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 349 "data/maps/Zone1A/scripts.pory"
	walk_right
# 349 "data/maps/Zone1A/scripts.pory"
	walk_right
# 349 "data/maps/Zone1A/scripts.pory"
	walk_right
# 349 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 353 "data/maps/Zone1A/scripts.pory"
	lockall
# 354 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 355 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 356 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 357 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 358 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 359 "data/maps/Zone1A/scripts.pory"
	waitse
# 360 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 361 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 362 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 363 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 364 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 365 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_1
# 368 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 369 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 370 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 371 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 372 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 373 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 374 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 375 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 376 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanBottom_1:
# 366 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_TriggerLeviathanMiddle::
# 381 "data/maps/Zone1A/scripts.pory"
	lockall
# 382 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 383 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 384 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 385 "data/maps/Zone1A/scripts.pory"
	waitse
# 386 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 387 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 388 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 389 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_1
# 392 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 393 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 394 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 395 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 396 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 397 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 398 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 390 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_TriggerLeviathanTop::
# 403 "data/maps/Zone1A/scripts.pory"
	lockall
# 404 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 405 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 406 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 407 "data/maps/Zone1A/scripts.pory"
	waitse
# 408 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 409 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 410 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 411 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 412 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 413 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_1
# 416 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 417 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 418 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 419 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 420 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 421 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 422 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 423 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 424 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanTop_1:
# 414 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_LeviathanBattle::
# 429 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 430 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 431 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 432 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 433 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 433 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 437 "data/maps/Zone1A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
# 438 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1, Zone1A_Text_Leviathan1Defeat
Zone1A_EventScript_LeviathanBattle_1:
# 440 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 441 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 442 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 10
# 443 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1
# 444 "data/maps/Zone1A/scripts.pory"
	closemessage
# 445 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 446 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 447 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 448 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 449 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 434 "data/maps/Zone1A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
# 435 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_BRUTAL, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_ItemPotion::
# 474 "data/maps/Zone1A/scripts.pory"
	lock
# 475 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_EventScript_ItemPotion_2
# 480 "data/maps/Zone1A/scripts.pory"
	waitse
# 481 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 482 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 483 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_POTION
# 484 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 485 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_POTION, 1
# 486 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemPotion_2:
# 476 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 477 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_ItemQuickClaw::
# 491 "data/maps/Zone1A/scripts.pory"
	lock
# 492 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_ItemQuickClaw_2
# 497 "data/maps/Zone1A/scripts.pory"
	waitse
# 498 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 499 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 500 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 501 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 502 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 503 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemQuickClaw_2:
# 493 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 494 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_PorygonSign::
# 508 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 509 "data/maps/Zone1A/scripts.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 510 "data/maps/Zone1A/scripts.pory"
	setseenmon SPECIES_PORYGON
# 511 "data/maps/Zone1A/scripts.pory"
	waitbuttonpress
# 512 "data/maps/Zone1A/scripts.pory"
	hidemonpic
# 513 "data/maps/Zone1A/scripts.pory"
	release
	end


# 517 "data/maps/Zone1A/scripts.pory"

# 518 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 519 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 520 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/Zone1A/scripts.pory"
	end
# 522 "data/maps/Zone1A/scripts.pory"

# 523 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 524 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 525 "data/maps/Zone1A/scripts.pory"

# 526 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 527 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 528 "data/maps/Zone1A/scripts.pory"

# 529 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 530 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 531 "data/maps/Zone1A/scripts.pory"

# 532 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 533 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 534 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/Zone1A/scripts.pory"
	end
# 536 "data/maps/Zone1A/scripts.pory"

# 537 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 538 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 539 "data/maps/Zone1A/scripts.pory"

# 540 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 541 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 542 "data/maps/Zone1A/scripts.pory"

# 543 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 544 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 545 "data/maps/Zone1A/scripts.pory"

# 546 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 547 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 548 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 549 "data/maps/Zone1A/scripts.pory"
	end
# 550 "data/maps/Zone1A/scripts.pory"

# 551 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 552 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 553 "data/maps/Zone1A/scripts.pory"

# 554 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 555 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 556 "data/maps/Zone1A/scripts.pory"

# 557 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 558 "data/maps/Zone1A/scripts.pory"
	.string "I must reclaim my honor…$"
# 559 "data/maps/Zone1A/scripts.pory"

# 560 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Sign::
# 561 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Sign, MSGBOX_SIGN
# 562 "data/maps/Zone1A/scripts.pory"
	end
# 563 "data/maps/Zone1A/scripts.pory"

# 564 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_Sign:
# 565 "data/maps/Zone1A/scripts.pory"
	.string "Trainer Tips!\p"
# 566 "data/maps/Zone1A/scripts.pory"
	.string "Press {R_BUTTON} to enable\n"
# 567 "data/maps/Zone1A/scripts.pory"
	.string "or disable Auto Run.$"

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
	.string "I'm offering trainers a Grass, Water, or\n"
	.string "Fire type Pokémon to help supplement\l"
	.string "their teams. Interested?$"

Zone1A_EventScript_GiveFWG_Text_4:
# 31 "data/maps/Zone1A/scripts.pory"
	.string "Do you want a Grass, Water, or Fire\n"
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
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone1A_EventScript_GiveFWG_Text_10:
# 80 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_11:
# 249 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_12:
# 251 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_13:
# 251 "data/maps/Zone1A/scripts.pory"
	.string "Cacnea$"

Zone1A_EventScript_GiveFWG_Text_14:
# 251 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_15:
# 251 "data/maps/Zone1A/scripts.pory"
	.string "Smoliv$"

Zone1A_EventScript_GiveFWG_Text_16:
# 251 "data/maps/Zone1A/scripts.pory"
	.string "Bounsweet$"

Zone1A_EventScript_GiveFWG_Text_17:
# 270 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_18:
# 270 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_19:
# 270 "data/maps/Zone1A/scripts.pory"
	.string "Salandit$"

Zone1A_EventScript_GiveFWG_Text_20:
# 270 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_21:
# 270 "data/maps/Zone1A/scripts.pory"
	.string "Sizzlipede$"

Zone1A_EventScript_GiveFWG_Text_22:
# 289 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_23:
# 289 "data/maps/Zone1A/scripts.pory"
	.string "Wiglett$"

Zone1A_EventScript_GiveFWG_Text_24:
# 289 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_25:
# 289 "data/maps/Zone1A/scripts.pory"
	.string "Seel$"

Zone1A_EventScript_GiveFWG_Text_26:
# 289 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_27:
# 309 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_28:
# 319 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_29:
# 321 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_30:
# 324 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_31:
# 330 "data/maps/Zone1A/scripts.pory"
	.string "Good luck on the rest of your journey!$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 441 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I gave my Skwovet\n"
	.string "an Oran Berry, I would be able to win.\l"
	.string "Oran Berries really are the best!\p"
	.string "Here, let me share some with you and\n"
	.string "your Pokémon!$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 443 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 508 "data/maps/Zone1A/scripts.pory"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_Text_FWG_ComeBack::
# 340 "data/maps/Zone1A/scripts.pory"
	.string "Come back if you change your mind!$"

Zone1A_Text_Leviathan1Intro::
# 453 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 460 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 464 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 469 "data/maps/Zone1A/scripts.pory"
	.string "Drats! Even the Oran Berry wasn't\n"
	.string "enough!$"
