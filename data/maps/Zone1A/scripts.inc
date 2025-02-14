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
	goto_if_set FLAG_ZONE1A_RECEIVED_FWG, Zone1A_EventScript_GiveFWG_2
# 24 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_1, MSGBOX_YESNO
# 25 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_5
# 28 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_3, MSGBOX_DEFAULT
Zone1A_EventScript_GiveFWG_4:
# 30 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_4, MSGBOX_YESNO
# 31 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_9
# 36 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_5
# 37 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_6, Zone1A_EventScript_GiveFWG_Text_7, Zone1A_EventScript_GiveFWG_Text_8, Zone1A_EventScript_GiveFWG_Text_9
# 38 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_13
# 41 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_14
# 43 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_15
# 45 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_16
# 46 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_16
Zone1A_EventScript_GiveFWG_11:
# 51 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone1A_EventScript_GiveFWG_18
# 235 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_28
# 254 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_29
# 273 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_30
Zone1A_EventScript_GiveFWG_27:
# 293 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 294 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_27, MSGBOX_YESNO
# 295 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_46
Zone1A_EventScript_GiveFWG_17:
# 301 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 302 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_22
Zone1A_EventScript_GiveFWG_21:
# 324 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 325 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 326 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 327 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_30, MSGBOX_DEFAULT
# 328 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 329 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_31
# 330 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 331 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 332 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_32, MSGBOX_YESNO
# 333 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_35
Zone1A_EventScript_GiveFWG_34:
# 337 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 338 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_33
# 339 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 340 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_2:
# 20 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_0
# 21 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_5:
# 26 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_2, MSGBOX_DEFAULT
	goto Zone1A_EventScript_GiveFWG_4

Zone1A_EventScript_GiveFWG_9:
# 32 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack, MSGBOX_AUTOCLOSE
# 33 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_13:
# 40 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 0
	goto Zone1A_EventScript_GiveFWG_11

Zone1A_EventScript_GiveFWG_14:
# 42 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 1
	goto Zone1A_EventScript_GiveFWG_11

Zone1A_EventScript_GiveFWG_15:
# 44 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_4, 2
	goto Zone1A_EventScript_GiveFWG_11

Zone1A_EventScript_GiveFWG_16:
# 47 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack, MSGBOX_AUTOCLOSE
# 48 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_18:
# 52 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone1A_EventScript_GiveFWG_24
# 55 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_40
# 114 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_41
# 173 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_42
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_22:
# 303 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_28, MSGBOX_AUTOCLOSE
# 304 "data/maps/Zone1A/scripts.pory"
	special ChoosePartyMon
# 305 "data/maps/Zone1A/scripts.pory"
	waitstate
# 306 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 307 "data/maps/Zone1A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone1A_EventScript_GiveFWG_38
# 312 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 313 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 314 "data/maps/Zone1A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 315 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_29, MSGBOX_YESNO
# 316 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_67
# 321 "data/maps/Zone1A/scripts.pory"
	special SendChosenMonToPC
# 322 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone1A_EventScript_GiveFWG_21

Zone1A_EventScript_GiveFWG_24:
# 53 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_28:
# 236 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 237 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 238 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_15, Zone1A_EventScript_GiveFWG_Text_16, Zone1A_EventScript_GiveFWG_Text_17, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_9
# 239 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 240 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_49
# 242 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_50
# 244 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_51
# 246 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_52
# 248 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_53
# 249 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_53
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_29:
# 255 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 256 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 257 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_9
# 258 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 259 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_55
# 261 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_56
# 263 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_57
# 265 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_58
# 267 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_59
# 268 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_59
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_30:
# 274 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 275 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 276 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_26, Zone1A_EventScript_GiveFWG_Text_9
# 277 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 278 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_61
# 280 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_62
# 282 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_63
# 284 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_64
# 286 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_65
# 287 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_65
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_35:
# 334 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 335 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_34

Zone1A_EventScript_GiveFWG_38:
# 308 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 309 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_40:
# 56 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_10, MSGBOX_YESNO
# 57 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_70
# 62 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 63 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 64 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_79
Zone1A_EventScript_GiveFWG_78:
# 67 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 68 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_88
Zone1A_EventScript_GiveFWG_87:
# 71 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 72 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_97
Zone1A_EventScript_GiveFWG_96:
# 75 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 76 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_106
Zone1A_EventScript_GiveFWG_105:
# 79 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_115
# 84 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_123:
# 85 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_124
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_41:
# 115 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_YESNO
# 116 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_73
# 121 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 122 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 123 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_82
Zone1A_EventScript_GiveFWG_81:
# 126 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 127 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_91
Zone1A_EventScript_GiveFWG_90:
# 130 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 131 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_100
Zone1A_EventScript_GiveFWG_99:
# 134 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 135 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_109
Zone1A_EventScript_GiveFWG_108:
# 138 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_118
# 143 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_126:
# 144 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_127
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_42:
# 174 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_13, MSGBOX_YESNO
# 175 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_76
# 180 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 181 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 182 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_85
Zone1A_EventScript_GiveFWG_84:
# 185 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 186 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_94
Zone1A_EventScript_GiveFWG_93:
# 189 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 190 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_103
Zone1A_EventScript_GiveFWG_102:
# 193 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 194 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_112
Zone1A_EventScript_GiveFWG_111:
# 197 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_121
# 202 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_129:
# 203 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_130
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_46:
# 296 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 297 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_49:
# 241 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_50:
# 243 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_51:
# 245 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_52:
# 247 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_53:
# 250 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 251 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_55:
# 260 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_56:
# 262 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_57:
# 264 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_58:
# 266 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_59:
# 269 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 270 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_61:
# 279 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_62:
# 281 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_63:
# 283 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_64:
# 285 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_65:
# 288 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 289 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_67:
# 317 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 318 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_70:
# 58 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 59 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_73:
# 117 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 118 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_76:
# 176 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 177 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_79:
# 65 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_78

Zone1A_EventScript_GiveFWG_82:
# 124 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_81

Zone1A_EventScript_GiveFWG_85:
# 183 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_84

Zone1A_EventScript_GiveFWG_88:
# 69 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_87

Zone1A_EventScript_GiveFWG_91:
# 128 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_90

Zone1A_EventScript_GiveFWG_94:
# 187 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_93

Zone1A_EventScript_GiveFWG_97:
# 73 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_96

Zone1A_EventScript_GiveFWG_100:
# 132 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_99

Zone1A_EventScript_GiveFWG_103:
# 191 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_102

Zone1A_EventScript_GiveFWG_106:
# 77 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_105

Zone1A_EventScript_GiveFWG_109:
# 136 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_108

Zone1A_EventScript_GiveFWG_112:
# 195 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_111

Zone1A_EventScript_GiveFWG_115:
# 80 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 81 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_118:
# 139 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 140 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_121:
# 198 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 199 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_124:
# 86 "data/maps/Zone1A/scripts.pory"
	random 4
# 87 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_133
# 94 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_134
# 100 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_135
# 106 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_136
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_127:
# 145 "data/maps/Zone1A/scripts.pory"
	random 4
# 146 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_138
# 153 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_139
# 159 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_140
# 165 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_141
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_130:
# 204 "data/maps/Zone1A/scripts.pory"
	random 4
# 205 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_143
# 212 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_144
# 218 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_145
# 224 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_146
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_133:
# 89 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSAGE
# 90 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_148
# 93 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_134:
# 95 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOSSIFLEUR
# 96 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_151
# 99 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_135:
# 101 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SUNKERN
# 102 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_154
# 105 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_136:
# 107 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_CHERUBI
# 108 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_157
# 111 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_138:
# 148 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANSEAR
# 149 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_160
# 152 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_139:
# 154 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_VULPIX
# 155 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_163
# 158 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_140:
# 160 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_SLUGMA
# 161 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_166
# 164 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_141:
# 166 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_LITLEO
# 167 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_169
# 170 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_143:
# 207 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_PANPOUR
# 208 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_172
# 211 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_144:
# 213 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_BARBOACH
# 214 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_175
# 217 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_145:
# 219 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_GOLDEEN
# 220 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_178
# 223 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_146:
# 225 "data/maps/Zone1A/scripts.pory"
	checkspeciesclause SPECIES_FINNEON
# 226 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_181
# 229 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_148:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_151:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_154:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_157:
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_160:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_163:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_166:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_169:
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_172:
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_175:
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_178:
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_181:
	goto Zone1A_EventScript_GiveFWG_129


# 348 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 349 "data/maps/Zone1A/scripts.pory"
	walk_left
# 349 "data/maps/Zone1A/scripts.pory"
	walk_left
# 349 "data/maps/Zone1A/scripts.pory"
	walk_left
# 349 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 352 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 353 "data/maps/Zone1A/scripts.pory"
	walk_right
# 353 "data/maps/Zone1A/scripts.pory"
	walk_right
# 353 "data/maps/Zone1A/scripts.pory"
	walk_right
# 353 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 357 "data/maps/Zone1A/scripts.pory"
	lockall
# 358 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 359 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 360 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 361 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 362 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 363 "data/maps/Zone1A/scripts.pory"
	waitse
# 364 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 365 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 366 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 367 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 368 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 369 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_2
Zone1A_EventScript_TriggerLeviathanBottom_1:
# 372 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 373 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 374 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 375 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 376 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 377 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 378 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 379 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 380 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 381 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanBottom_2:
# 370 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanBottom_1


Zone1A_EventScript_TriggerLeviathanMiddle::
# 385 "data/maps/Zone1A/scripts.pory"
	lockall
# 386 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 387 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 388 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 389 "data/maps/Zone1A/scripts.pory"
	waitse
# 390 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 391 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 392 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 393 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_2
Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 396 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 397 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 398 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 399 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 400 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 401 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 402 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 403 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanMiddle_2:
# 394 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanMiddle_1


Zone1A_EventScript_TriggerLeviathanTop::
# 407 "data/maps/Zone1A/scripts.pory"
	lockall
# 408 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 409 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 410 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 411 "data/maps/Zone1A/scripts.pory"
	waitse
# 412 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 413 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 414 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 415 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 416 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 417 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_2
Zone1A_EventScript_TriggerLeviathanTop_1:
# 420 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 421 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 422 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 423 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 424 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 425 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 426 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 427 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 428 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 429 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanTop_2:
# 418 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanTop_1


Zone1A_EventScript_LeviathanBattle::
# 433 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 434 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 435 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 436 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 437 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 437 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 447 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 448 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_12
# 450 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_13
# 452 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_14
Zone1A_EventScript_LeviathanBattle_1:
# 456 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 457 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
# 458 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
# 459 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
# 460 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
# 461 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
# 462 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 463 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 464 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 465 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 466 "data/maps/Zone1A/scripts.pory"
	closemessage
# 467 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 468 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 469 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 470 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 471 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 438 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 439 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_8
# 441 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_9
# 443 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_10
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_8:
# 440 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_9:
# 442 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_10:
# 444 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_12:
# 449 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_13:
# 451 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_14:
# 453 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_Random1::
# 496 "data/maps/Zone1A/scripts.pory"
	lock
# 497 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_EventScript_Random1_2
# 502 "data/maps/Zone1A/scripts.pory"
	waitse
# 503 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 504 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 505 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_RANDOM_1
# 506 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 507 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 508 "data/maps/Zone1A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 509 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_Random1_2:
# 498 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 499 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_QuickClaw::
# 514 "data/maps/Zone1A/scripts.pory"
	lock
# 515 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_QuickClaw_2
# 520 "data/maps/Zone1A/scripts.pory"
	waitse
# 521 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 522 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 523 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 524 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 525 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 526 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_QuickClaw_2:
# 516 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 517 "data/maps/Zone1A/scripts.pory"
	release
	end


# 530 "data/maps/Zone1A/scripts.pory"

# 531 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 532 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 533 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 534 "data/maps/Zone1A/scripts.pory"
	end
# 535 "data/maps/Zone1A/scripts.pory"

# 536 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 537 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 538 "data/maps/Zone1A/scripts.pory"

# 539 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 540 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 541 "data/maps/Zone1A/scripts.pory"

# 542 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 543 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 544 "data/maps/Zone1A/scripts.pory"

# 545 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 546 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 547 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Zone1A/scripts.pory"
	end
# 549 "data/maps/Zone1A/scripts.pory"

# 550 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 551 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 552 "data/maps/Zone1A/scripts.pory"

# 553 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 554 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 555 "data/maps/Zone1A/scripts.pory"

# 556 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 557 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 558 "data/maps/Zone1A/scripts.pory"

# 559 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 560 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 561 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Zone1A/scripts.pory"
	end
# 563 "data/maps/Zone1A/scripts.pory"

# 564 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 565 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 566 "data/maps/Zone1A/scripts.pory"

# 567 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 568 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 569 "data/maps/Zone1A/scripts.pory"

# 570 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 571 "data/maps/Zone1A/scripts.pory"
	.string "I must reclaim my honor…$"

Zone1A_EventScript_GiveFWG_Text_0:
# 20 "data/maps/Zone1A/scripts.pory"
	.string "Uh… It looks like I'm actually almost\n"
	.string "out of Pokémon to give, so I can't give\l"
	.string "you anymore. Sorry!$"

Zone1A_EventScript_GiveFWG_Text_1:
# 24 "data/maps/Zone1A/scripts.pory"
	.string "Hello! You look like a new trainer.\p"
	.string "Do you know about Pokémon type\n"
	.string "matchups?$"

Zone1A_EventScript_GiveFWG_Text_2:
# 26 "data/maps/Zone1A/scripts.pory"
	.string "Type matchups are one of the most\n"
	.string "important parts of Pokémon battles!\p"
	.string "The most basic type matchup is Grass\n"
	.string "beats Water, Water beats Fire, and Fire\l"
	.string "beats Grass.\p"
	.string "It can be very important to have a\n"
	.string "diversity of types on your team.$"

Zone1A_EventScript_GiveFWG_Text_3:
# 28 "data/maps/Zone1A/scripts.pory"
	.string "Oh! Then I'm sure you could see the\n"
	.string "benefits of having a diversity of types\l"
	.string "on your team.$"

Zone1A_EventScript_GiveFWG_Text_4:
# 30 "data/maps/Zone1A/scripts.pory"
	.string "I'm offering trainers a Grass, Fire, or\n"
	.string "Water type Pokémon to help supplement\l"
	.string "their teams. Interested?$"

Zone1A_EventScript_GiveFWG_Text_5:
# 36 "data/maps/Zone1A/scripts.pory"
	.string "Do you want a Grass, Fire, or Water\n"
	.string "type?$"

Zone1A_EventScript_GiveFWG_Text_6:
# 37 "data/maps/Zone1A/scripts.pory"
	.string "Grass$"

Zone1A_EventScript_GiveFWG_Text_7:
# 37 "data/maps/Zone1A/scripts.pory"
	.string "Fire$"

Zone1A_EventScript_GiveFWG_Text_8:
# 37 "data/maps/Zone1A/scripts.pory"
	.string "Water$"

Zone1A_EventScript_GiveFWG_Text_9:
# 37 "data/maps/Zone1A/scripts.pory"
	.string "Exit$"

Zone1A_EventScript_GiveFWG_Text_10:
# 56 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansage, Gossifleur, Sunkern, or\l"
	.string "Cherubi.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_11:
# 80 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_12:
# 115 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansear, Vulpix, Slugma, or Litleo.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_13:
# 174 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Panpour, Barboach, Goldeen, or Finneon.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_14:
# 236 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_15:
# 238 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_16:
# 238 "data/maps/Zone1A/scripts.pory"
	.string "Gossifleur$"

Zone1A_EventScript_GiveFWG_Text_17:
# 238 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_18:
# 238 "data/maps/Zone1A/scripts.pory"
	.string "Cherubi$"

Zone1A_EventScript_GiveFWG_Text_19:
# 257 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_20:
# 257 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_21:
# 257 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_22:
# 257 "data/maps/Zone1A/scripts.pory"
	.string "Litleo$"

Zone1A_EventScript_GiveFWG_Text_23:
# 276 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_24:
# 276 "data/maps/Zone1A/scripts.pory"
	.string "Barboach$"

Zone1A_EventScript_GiveFWG_Text_25:
# 276 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_26:
# 276 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_27:
# 294 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_28:
# 303 "data/maps/Zone1A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone1A_EventScript_GiveFWG_Text_29:
# 315 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone1A_EventScript_GiveFWG_Text_30:
# 327 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_31:
# 329 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_32:
# 332 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_33:
# 338 "data/maps/Zone1A/scripts.pory"
	.string "Take care of your {STR_VAR_1}!$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 463 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I had a variety of\n"
	.string "types, I would be able to win.\p"
	.string "I guess there's more to battling than\n"
	.string "just having different Pokémon!\p"
	.string "As a reward for beating me, take this\n"
	.string "Exp. Share! It's useful for training up\l"
	.string "Pokémon.$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 465 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_Text_FWG_ComeBack::
# 344 "data/maps/Zone1A/scripts.pory"
	.string "Come back another time!$"

Zone1A_Text_Leviathan1Intro::
# 475 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 482 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 486 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 491 "data/maps/Zone1A/scripts.pory"
	.string "Drats! My Fire-Water-Grass core wasn't\n"
	.string "enough!$"
