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
# 230 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_13
# 231 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_25
# 248 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_26
# 265 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_27
Zone1A_EventScript_GiveFWG_24:
# 283 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 284 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_26, MSGBOX_YESNO
# 285 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_43
Zone1A_EventScript_GiveFWG_14:
# 291 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 292 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_19
Zone1A_EventScript_GiveFWG_18:
# 314 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 315 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 316 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 317 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_29, MSGBOX_DEFAULT
# 318 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 319 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_30
# 320 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 321 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 322 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_31, MSGBOX_YESNO
# 323 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_32
Zone1A_EventScript_GiveFWG_31:
# 327 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 328 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_32, MSGBOX_DEFAULT
# 329 "data/maps/Zone1A/scripts.pory"
	closemessage
# 330 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data/maps/Zone1A/scripts.pory"
	removeobject 8
# 332 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 333 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 334 "data/maps/Zone1A/scripts.pory"
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
# 109 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_38
# 168 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_39
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_19:
# 293 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_27, MSGBOX_AUTOCLOSE
# 294 "data/maps/Zone1A/scripts.pory"
	special ChoosePartyMon
# 295 "data/maps/Zone1A/scripts.pory"
	waitstate
# 296 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 297 "data/maps/Zone1A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone1A_EventScript_GiveFWG_35
# 302 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 303 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 304 "data/maps/Zone1A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 305 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_28, MSGBOX_YESNO
# 306 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_64
# 311 "data/maps/Zone1A/scripts.pory"
	special SendChosenMonToPC
# 312 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone1A_EventScript_GiveFWG_18

Zone1A_EventScript_GiveFWG_21:
# 48 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_25:
# 232 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_14, Zone1A_EventScript_GiveFWG_Text_15, Zone1A_EventScript_GiveFWG_Text_16, Zone1A_EventScript_GiveFWG_Text_17, Zone1A_EventScript_GiveFWG_Text_8
# 233 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 234 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_46
# 236 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_47
# 238 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_48
# 240 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_49
# 242 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_50
# 243 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_50
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_26:
# 249 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_8
# 250 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 251 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_52
# 253 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_53
# 255 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_54
# 257 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_55
# 259 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_56
# 260 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_56
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_27:
# 266 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_8
# 267 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 268 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_58
# 270 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_59
# 272 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_60
# 274 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_61
# 276 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_62
# 277 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_62
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_32:
# 324 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 325 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_31

Zone1A_EventScript_GiveFWG_35:
# 298 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 299 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_37:
# 51 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_9, MSGBOX_YESNO
# 52 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_67
# 57 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 58 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 59 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_76
Zone1A_EventScript_GiveFWG_75:
# 62 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 63 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_85
Zone1A_EventScript_GiveFWG_84:
# 66 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 67 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_94
Zone1A_EventScript_GiveFWG_93:
# 70 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 71 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_103
Zone1A_EventScript_GiveFWG_102:
# 74 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_112
# 79 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_120:
# 80 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_121
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_38:
# 110 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_YESNO
# 111 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_70
# 116 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 117 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 118 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_79
Zone1A_EventScript_GiveFWG_78:
# 121 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 122 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_88
Zone1A_EventScript_GiveFWG_87:
# 125 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 126 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_97
Zone1A_EventScript_GiveFWG_96:
# 129 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 130 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_106
Zone1A_EventScript_GiveFWG_105:
# 133 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_115
# 138 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_123:
# 139 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_124
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_39:
# 169 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_YESNO
# 170 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_73
# 175 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 176 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 177 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_82
Zone1A_EventScript_GiveFWG_81:
# 180 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 181 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_91
Zone1A_EventScript_GiveFWG_90:
# 184 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 185 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_100
Zone1A_EventScript_GiveFWG_99:
# 188 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 189 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_109
Zone1A_EventScript_GiveFWG_108:
# 192 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_118
# 197 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_126:
# 198 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_127
	goto Zone1A_EventScript_GiveFWG_14

Zone1A_EventScript_GiveFWG_43:
# 286 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 287 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_46:
# 235 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_47:
# 237 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_48:
# 239 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_49:
# 241 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_50:
# 244 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 245 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_52:
# 252 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_53:
# 254 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_54:
# 256 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_55:
# 258 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_56:
# 261 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 262 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_58:
# 269 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_59:
# 271 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_60:
# 273 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_61:
# 275 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_24

Zone1A_EventScript_GiveFWG_62:
# 278 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 279 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_64:
# 307 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 308 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_67:
# 53 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 54 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_70:
# 112 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 113 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_73:
# 171 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 172 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_76:
# 60 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_75

Zone1A_EventScript_GiveFWG_79:
# 119 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_78

Zone1A_EventScript_GiveFWG_82:
# 178 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_81

Zone1A_EventScript_GiveFWG_85:
# 64 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_84

Zone1A_EventScript_GiveFWG_88:
# 123 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_87

Zone1A_EventScript_GiveFWG_91:
# 182 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_90

Zone1A_EventScript_GiveFWG_94:
# 68 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_93

Zone1A_EventScript_GiveFWG_97:
# 127 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_96

Zone1A_EventScript_GiveFWG_100:
# 186 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_99

Zone1A_EventScript_GiveFWG_103:
# 72 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_102

Zone1A_EventScript_GiveFWG_106:
# 131 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_105

Zone1A_EventScript_GiveFWG_109:
# 190 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_108

Zone1A_EventScript_GiveFWG_112:
# 75 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 76 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_115:
# 134 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 135 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_118:
# 193 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_AUTOCLOSE
# 194 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_121:
# 81 "data/maps/Zone1A/scripts.pory"
	random 4
# 82 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_130
# 89 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_131
# 95 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_132
# 101 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_133
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_124:
# 140 "data/maps/Zone1A/scripts.pory"
	random 4
# 141 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_135
# 148 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_136
# 154 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_137
# 160 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_138
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_127:
# 199 "data/maps/Zone1A/scripts.pory"
	random 4
# 200 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_140
# 207 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_141
# 213 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_142
# 219 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_143
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_130:
# 84 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 85 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_145
# 88 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_131:
# 90 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 91 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_148
# 94 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_132:
# 96 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 97 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_151
# 100 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_133:
# 102 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 103 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_154
# 106 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_135:
# 143 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 144 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_157
# 147 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_136:
# 149 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 150 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_160
# 153 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_137:
# 155 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 156 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_163
# 159 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_138:
# 161 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 162 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_166
# 165 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_140:
# 202 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 203 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_169
# 206 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_141:
# 208 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 209 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_172
# 212 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_142:
# 214 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 215 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_175
# 218 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_143:
# 220 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 221 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_178
# 224 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_145:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_148:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_151:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_154:
	goto Zone1A_EventScript_GiveFWG_120

Zone1A_EventScript_GiveFWG_157:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_160:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_163:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_166:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_169:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_172:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_175:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_178:
	goto Zone1A_EventScript_GiveFWG_126


# 342 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 343 "data/maps/Zone1A/scripts.pory"
	walk_left
# 343 "data/maps/Zone1A/scripts.pory"
	walk_left
# 343 "data/maps/Zone1A/scripts.pory"
	walk_left
# 343 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 346 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 347 "data/maps/Zone1A/scripts.pory"
	walk_right
# 347 "data/maps/Zone1A/scripts.pory"
	walk_right
# 347 "data/maps/Zone1A/scripts.pory"
	walk_right
# 347 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 351 "data/maps/Zone1A/scripts.pory"
	lockall
# 352 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 353 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 354 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 355 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 356 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 357 "data/maps/Zone1A/scripts.pory"
	waitse
# 358 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 359 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 360 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 361 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 362 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 363 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_2
Zone1A_EventScript_TriggerLeviathanBottom_1:
# 366 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 367 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 368 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 369 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 370 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 371 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 372 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 373 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 374 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 375 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanBottom_2:
# 364 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanBottom_1


Zone1A_EventScript_TriggerLeviathanMiddle::
# 379 "data/maps/Zone1A/scripts.pory"
	lockall
# 380 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 381 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 382 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 383 "data/maps/Zone1A/scripts.pory"
	waitse
# 384 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 385 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 386 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 387 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_2
Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 390 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 391 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 392 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 393 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 394 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 395 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 396 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 397 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanMiddle_2:
# 388 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanMiddle_1


Zone1A_EventScript_TriggerLeviathanTop::
# 401 "data/maps/Zone1A/scripts.pory"
	lockall
# 402 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 403 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 404 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 405 "data/maps/Zone1A/scripts.pory"
	waitse
# 406 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 407 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 408 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 409 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 410 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 411 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_2
Zone1A_EventScript_TriggerLeviathanTop_1:
# 414 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 415 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 416 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 417 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 418 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 419 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 420 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 421 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 422 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 423 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanTop_2:
# 412 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanTop_1


Zone1A_EventScript_LeviathanBattle::
# 427 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 428 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 429 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 430 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 431 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 431 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 441 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 442 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_12
# 444 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_13
# 446 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_14
Zone1A_EventScript_LeviathanBattle_1:
# 450 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 451 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
# 452 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
# 453 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
# 454 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
# 455 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
# 456 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 457 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 458 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 459 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 460 "data/maps/Zone1A/scripts.pory"
	closemessage
# 461 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 462 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 463 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 464 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 465 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 432 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 433 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_8
# 435 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_9
# 437 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_10
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_8:
# 434 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_9:
# 436 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_10:
# 438 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_12:
# 443 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_13:
# 445 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_14:
# 447 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_Random1::
# 490 "data/maps/Zone1A/scripts.pory"
	lock
# 491 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_EventScript_Random1_2
# 496 "data/maps/Zone1A/scripts.pory"
	waitse
# 497 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 498 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 499 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_RANDOM_1
# 500 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 501 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 502 "data/maps/Zone1A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 503 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_Random1_2:
# 492 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 493 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_QuickClaw::
# 508 "data/maps/Zone1A/scripts.pory"
	lock
# 509 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_QuickClaw_2
# 514 "data/maps/Zone1A/scripts.pory"
	waitse
# 515 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 516 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 517 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 518 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 519 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 520 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_QuickClaw_2:
# 510 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 511 "data/maps/Zone1A/scripts.pory"
	release
	end


# 524 "data/maps/Zone1A/scripts.pory"

# 525 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 526 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 527 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/Zone1A/scripts.pory"
	end
# 529 "data/maps/Zone1A/scripts.pory"

# 530 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 531 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 532 "data/maps/Zone1A/scripts.pory"

# 533 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 534 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 535 "data/maps/Zone1A/scripts.pory"

# 536 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 537 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 538 "data/maps/Zone1A/scripts.pory"

# 539 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 540 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 541 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Zone1A/scripts.pory"
	end
# 543 "data/maps/Zone1A/scripts.pory"

# 544 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 545 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 546 "data/maps/Zone1A/scripts.pory"

# 547 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 548 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 549 "data/maps/Zone1A/scripts.pory"

# 550 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 551 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 552 "data/maps/Zone1A/scripts.pory"

# 553 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 554 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 555 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 556 "data/maps/Zone1A/scripts.pory"
	end
# 557 "data/maps/Zone1A/scripts.pory"

# 558 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 559 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 560 "data/maps/Zone1A/scripts.pory"

# 561 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 562 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 563 "data/maps/Zone1A/scripts.pory"

# 564 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 565 "data/maps/Zone1A/scripts.pory"
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
	.string "Pansage, Gossifleur, Sunkern, or\l"
	.string "Cherubi.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_10:
# 75 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_11:
# 110 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansear, Vulpix, Slugma, or Litleo.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_12:
# 169 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Panpour, Barboach, Goldeen, or Finneon.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_13:
# 230 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_14:
# 232 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_15:
# 232 "data/maps/Zone1A/scripts.pory"
	.string "Gossifleur$"

Zone1A_EventScript_GiveFWG_Text_16:
# 232 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_17:
# 232 "data/maps/Zone1A/scripts.pory"
	.string "Cherubi$"

Zone1A_EventScript_GiveFWG_Text_18:
# 249 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_19:
# 249 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_20:
# 249 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_21:
# 249 "data/maps/Zone1A/scripts.pory"
	.string "Litleo$"

Zone1A_EventScript_GiveFWG_Text_22:
# 266 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_23:
# 266 "data/maps/Zone1A/scripts.pory"
	.string "Barboach$"

Zone1A_EventScript_GiveFWG_Text_24:
# 266 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_25:
# 266 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_26:
# 284 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_27:
# 293 "data/maps/Zone1A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone1A_EventScript_GiveFWG_Text_28:
# 305 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone1A_EventScript_GiveFWG_Text_29:
# 317 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_30:
# 319 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_31:
# 322 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_32:
# 328 "data/maps/Zone1A/scripts.pory"
	.string "Good luck on the rest of your journey!$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 457 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I had a variety of\n"
	.string "types, I would be able to win.\p"
	.string "I guess there's more to battling than\n"
	.string "just having different Pokémon!\p"
	.string "As a reward for beating me, take this\n"
	.string "Exp. Share! It's useful for training up\l"
	.string "Pokémon.$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 459 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_Text_FWG_ComeBack::
# 338 "data/maps/Zone1A/scripts.pory"
	.string "Come back if you change your mind!$"

Zone1A_Text_Leviathan1Intro::
# 469 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 476 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 480 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 485 "data/maps/Zone1A/scripts.pory"
	.string "Drats! My Fire-Water-Grass core wasn't\n"
	.string "enough!$"
