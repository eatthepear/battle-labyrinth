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
# 243 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_28
# 262 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_29
# 281 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_30
Zone1A_EventScript_GiveFWG_27:
# 301 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 302 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_27, MSGBOX_YESNO
# 303 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_46
Zone1A_EventScript_GiveFWG_17:
# 309 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 310 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone1A_EventScript_GiveFWG_22
Zone1A_EventScript_GiveFWG_21:
# 332 "data/maps/Zone1A/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 333 "data/maps/Zone1A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 245
# 334 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 335 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_30, MSGBOX_DEFAULT
# 336 "data/maps/Zone1A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 337 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_31
# 338 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 339 "data/maps/Zone1A/scripts.pory"
	waitfanfare
# 340 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_32, MSGBOX_YESNO
# 341 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_GiveFWG_35
Zone1A_EventScript_GiveFWG_34:
# 345 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 346 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_33
# 347 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 348 "data/maps/Zone1A/scripts.pory"
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
# 122 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Zone1A_EventScript_GiveFWG_41
# 181 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq Zone1A_EventScript_GiveFWG_42
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_22:
# 311 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_28, MSGBOX_AUTOCLOSE
# 312 "data/maps/Zone1A/scripts.pory"
	special ChoosePartyMon
# 313 "data/maps/Zone1A/scripts.pory"
	waitstate
# 314 "data/maps/Zone1A/scripts.pory"
	faceplayer
# 315 "data/maps/Zone1A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone1A_EventScript_GiveFWG_38
# 320 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 321 "data/maps/Zone1A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 322 "data/maps/Zone1A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 323 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_29, MSGBOX_YESNO
# 324 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_67
# 329 "data/maps/Zone1A/scripts.pory"
	special SendChosenMonToPC
# 330 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone1A_EventScript_GiveFWG_21

Zone1A_EventScript_GiveFWG_24:
# 53 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_28:
# 244 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 245 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 246 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_15, Zone1A_EventScript_GiveFWG_Text_16, Zone1A_EventScript_GiveFWG_Text_17, Zone1A_EventScript_GiveFWG_Text_18, Zone1A_EventScript_GiveFWG_Text_9
# 247 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_49
# 250 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_50
# 252 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_51
# 254 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_52
# 256 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_53
# 257 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_53
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_29:
# 263 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 264 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 265 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_19, Zone1A_EventScript_GiveFWG_Text_20, Zone1A_EventScript_GiveFWG_Text_21, Zone1A_EventScript_GiveFWG_Text_22, Zone1A_EventScript_GiveFWG_Text_9
# 266 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_55
# 269 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_56
# 271 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_57
# 273 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_58
# 275 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_59
# 276 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_59
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_30:
# 282 "data/maps/Zone1A/scripts.pory"
	message Zone1A_EventScript_GiveFWG_Text_14
# 283 "data/maps/Zone1A/scripts.pory"
	waitmessage
# 284 "data/maps/Zone1A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Zone1A_EventScript_GiveFWG_Text_23, Zone1A_EventScript_GiveFWG_Text_24, Zone1A_EventScript_GiveFWG_Text_25, Zone1A_EventScript_GiveFWG_Text_26, Zone1A_EventScript_GiveFWG_Text_9
# 285 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_61
# 288 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_62
# 290 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_63
# 292 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_64
# 294 "data/maps/Zone1A/scripts.pory"
	case 4, Zone1A_EventScript_GiveFWG_65
# 295 "data/maps/Zone1A/scripts.pory"
	case MULTI_B_PRESSED, Zone1A_EventScript_GiveFWG_65
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_35:
# 342 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 343 "data/maps/Zone1A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone1A_EventScript_GiveFWG_34

Zone1A_EventScript_GiveFWG_38:
# 316 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 317 "data/maps/Zone1A/scripts.pory"
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
	setvar VAR_TEMP_0, SPECIES_PANSAGE
# 64 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 65 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_79
Zone1A_EventScript_GiveFWG_78:
# 68 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GOSSIFLEUR
# 69 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 70 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_88
Zone1A_EventScript_GiveFWG_87:
# 73 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
# 74 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 75 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_97
Zone1A_EventScript_GiveFWG_96:
# 78 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHERUBI
# 79 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 80 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_106
Zone1A_EventScript_GiveFWG_105:
# 83 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_115
# 88 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_123:
# 89 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_124
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_41:
# 123 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_12, MSGBOX_YESNO
# 124 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_73
# 129 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 131 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_82
Zone1A_EventScript_GiveFWG_81:
# 135 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_91
Zone1A_EventScript_GiveFWG_90:
# 139 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_100
Zone1A_EventScript_GiveFWG_99:
# 143 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_109
Zone1A_EventScript_GiveFWG_108:
# 146 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_118
# 151 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_126:
# 152 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_127
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_42:
# 182 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_13, MSGBOX_YESNO
# 183 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone1A_EventScript_GiveFWG_76
# 188 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 190 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_85
Zone1A_EventScript_GiveFWG_84:
# 194 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_94
Zone1A_EventScript_GiveFWG_93:
# 198 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_103
Zone1A_EventScript_GiveFWG_102:
# 202 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_112
Zone1A_EventScript_GiveFWG_111:
# 205 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone1A_EventScript_GiveFWG_121
# 210 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone1A_EventScript_GiveFWG_129:
# 211 "data/maps/Zone1A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone1A_EventScript_GiveFWG_130
	goto Zone1A_EventScript_GiveFWG_17

Zone1A_EventScript_GiveFWG_46:
# 304 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 305 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_49:
# 249 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_50:
# 251 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_51:
# 253 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_52:
# 255 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_53:
# 258 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 259 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_55:
# 268 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_56:
# 270 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_57:
# 272 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_58:
# 274 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_59:
# 277 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 278 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_61:
# 287 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_62:
# 289 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_63:
# 291 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_64:
# 293 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto Zone1A_EventScript_GiveFWG_27

Zone1A_EventScript_GiveFWG_65:
# 296 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 297 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_67:
# 325 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 326 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_70:
# 58 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 59 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_73:
# 125 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 126 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_76:
# 184 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_FWG_ComeBack
# 185 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_79:
# 66 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_78

Zone1A_EventScript_GiveFWG_82:
# 132 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_81

Zone1A_EventScript_GiveFWG_85:
# 191 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_84

Zone1A_EventScript_GiveFWG_88:
# 71 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_87

Zone1A_EventScript_GiveFWG_91:
# 136 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_90

Zone1A_EventScript_GiveFWG_94:
# 195 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_93

Zone1A_EventScript_GiveFWG_97:
# 76 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_96

Zone1A_EventScript_GiveFWG_100:
# 140 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_99

Zone1A_EventScript_GiveFWG_103:
# 199 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_102

Zone1A_EventScript_GiveFWG_106:
# 81 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_105

Zone1A_EventScript_GiveFWG_109:
# 144 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_108

Zone1A_EventScript_GiveFWG_112:
# 203 "data/maps/Zone1A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone1A_EventScript_GiveFWG_111

Zone1A_EventScript_GiveFWG_115:
# 84 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 85 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_118:
# 147 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 148 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_121:
# 206 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_GiveFWG_Text_11, MSGBOX_AUTOCLOSE
# 207 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_GiveFWG_124:
# 90 "data/maps/Zone1A/scripts.pory"
	random 4
# 91 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_133
# 99 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_134
# 106 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_135
# 113 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_136
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_127:
# 153 "data/maps/Zone1A/scripts.pory"
	random 4
# 154 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_138
# 161 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_139
# 167 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_140
# 173 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_141
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_130:
# 212 "data/maps/Zone1A/scripts.pory"
	random 4
# 213 "data/maps/Zone1A/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_GiveFWG_143
# 220 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_GiveFWG_144
# 226 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_GiveFWG_145
# 232 "data/maps/Zone1A/scripts.pory"
	case 3, Zone1A_EventScript_GiveFWG_146
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_133:
# 93 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
# 94 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 95 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_148
# 98 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_134:
# 100 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GOSSIFLEUR
# 101 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 102 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_151
# 105 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOSSIFLEUR
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_135:
# 107 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
# 108 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 109 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_154
# 112 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_136:
# 114 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHERUBI
# 115 "data/maps/Zone1A/scripts.pory"
	callnative CheckSpeciesClause
# 116 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone1A_EventScript_GiveFWG_157
# 119 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHERUBI
	goto Zone1A_EventScript_GiveFWG_123

Zone1A_EventScript_GiveFWG_138:
# 157 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_160
# 160 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_139:
# 163 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_163
# 166 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_140:
# 169 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_166
# 172 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_141:
# 175 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_169
# 178 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LITLEO
	goto Zone1A_EventScript_GiveFWG_126

Zone1A_EventScript_GiveFWG_143:
# 216 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_172
# 219 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_144:
# 222 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_175
# 225 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_145:
# 228 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_178
# 231 "data/maps/Zone1A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto Zone1A_EventScript_GiveFWG_129

Zone1A_EventScript_GiveFWG_146:
# 234 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone1A_EventScript_GiveFWG_181
# 237 "data/maps/Zone1A/scripts.pory"
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


# 356 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 357 "data/maps/Zone1A/scripts.pory"
	walk_left
# 357 "data/maps/Zone1A/scripts.pory"
	walk_left
# 357 "data/maps/Zone1A/scripts.pory"
	walk_left
# 357 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 360 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 361 "data/maps/Zone1A/scripts.pory"
	walk_right
# 361 "data/maps/Zone1A/scripts.pory"
	walk_right
# 361 "data/maps/Zone1A/scripts.pory"
	walk_right
# 361 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 365 "data/maps/Zone1A/scripts.pory"
	lockall
# 366 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 367 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 368 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 369 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 370 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 371 "data/maps/Zone1A/scripts.pory"
	waitse
# 372 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 373 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 374 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 375 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 376 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 377 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_2
Zone1A_EventScript_TriggerLeviathanBottom_1:
# 380 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 381 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 382 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 383 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 384 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 385 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 386 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 387 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 388 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 389 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanBottom_2:
# 378 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanBottom_1


Zone1A_EventScript_TriggerLeviathanMiddle::
# 393 "data/maps/Zone1A/scripts.pory"
	lockall
# 394 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 395 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 396 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 397 "data/maps/Zone1A/scripts.pory"
	waitse
# 398 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 399 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 400 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 401 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_2
Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 404 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
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

Zone1A_EventScript_TriggerLeviathanMiddle_2:
# 402 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanMiddle_1


Zone1A_EventScript_TriggerLeviathanTop::
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
	applymovement 1, Common_Movement_WalkUp
# 421 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 422 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 423 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 424 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 425 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_2
Zone1A_EventScript_TriggerLeviathanTop_1:
# 428 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait, MSGBOX_AUTOCLOSE
# 429 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 430 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 431 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 432 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 433 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 434 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 435 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 436 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 437 "data/maps/Zone1A/scripts.pory"
	releaseall
	return

Zone1A_EventScript_TriggerLeviathanTop_2:
# 426 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	goto Zone1A_EventScript_TriggerLeviathanTop_1


Zone1A_EventScript_LeviathanBattle::
# 441 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 442 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 443 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 444 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 445 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 445 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 455 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 456 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_12
# 458 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_13
# 460 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_14
Zone1A_EventScript_LeviathanBattle_1:
# 464 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 465 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
# 466 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
# 467 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
# 468 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
# 469 "data/maps/Zone1A/scripts.pory"
	settrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
# 470 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 471 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 472 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 473 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 474 "data/maps/Zone1A/scripts.pory"
	closemessage
# 475 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 476 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 477 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 478 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 479 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 446 "data/maps/Zone1A/scripts.pory"
	switch VAR_STARTER_MON
# 447 "data/maps/Zone1A/scripts.pory"
	case 0, Zone1A_EventScript_LeviathanBattle_8
# 449 "data/maps/Zone1A/scripts.pory"
	case 1, Zone1A_EventScript_LeviathanBattle_9
# 451 "data/maps/Zone1A/scripts.pory"
	case 2, Zone1A_EventScript_LeviathanBattle_10
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_8:
# 448 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_9:
# 450 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_10:
# 452 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_12:
# 457 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_13:
# 459 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1

Zone1A_EventScript_LeviathanBattle_14:
# 461 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_Random1::
# 504 "data/maps/Zone1A/scripts.pory"
	lock
# 505 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_RANDOM_1, Zone1A_EventScript_Random1_2
# 510 "data/maps/Zone1A/scripts.pory"
	waitse
# 511 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 512 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 513 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_RANDOM_1
# 514 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 515 "data/maps/Zone1A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 516 "data/maps/Zone1A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 517 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_Random1_2:
# 506 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 507 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_QuickClaw::
# 522 "data/maps/Zone1A/scripts.pory"
	lock
# 523 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_QuickClaw_2
# 528 "data/maps/Zone1A/scripts.pory"
	waitse
# 529 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 530 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 531 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 532 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 533 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 534 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_QuickClaw_2:
# 524 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 525 "data/maps/Zone1A/scripts.pory"
	release
	end


# 538 "data/maps/Zone1A/scripts.pory"

# 539 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 540 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 541 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Zone1A/scripts.pory"
	end
# 543 "data/maps/Zone1A/scripts.pory"

# 544 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 545 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 546 "data/maps/Zone1A/scripts.pory"

# 547 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 548 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 549 "data/maps/Zone1A/scripts.pory"

# 550 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 551 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 552 "data/maps/Zone1A/scripts.pory"

# 553 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 554 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 555 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 556 "data/maps/Zone1A/scripts.pory"
	end
# 557 "data/maps/Zone1A/scripts.pory"

# 558 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 559 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 560 "data/maps/Zone1A/scripts.pory"

# 561 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 562 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 563 "data/maps/Zone1A/scripts.pory"

# 564 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 565 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 566 "data/maps/Zone1A/scripts.pory"

# 567 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 568 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 569 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Zone1A/scripts.pory"
	end
# 571 "data/maps/Zone1A/scripts.pory"

# 572 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 573 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 574 "data/maps/Zone1A/scripts.pory"

# 575 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 576 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 577 "data/maps/Zone1A/scripts.pory"

# 578 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 579 "data/maps/Zone1A/scripts.pory"
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
# 84 "data/maps/Zone1A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone1A_EventScript_GiveFWG_Text_12:
# 123 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Pansear, Vulpix, Slugma, or Litleo.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_13:
# 182 "data/maps/Zone1A/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Panpour, Barboach, Goldeen, or Finneon.\p"
	.string "Is this ok?$"

Zone1A_EventScript_GiveFWG_Text_14:
# 244 "data/maps/Zone1A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone1A_EventScript_GiveFWG_Text_15:
# 246 "data/maps/Zone1A/scripts.pory"
	.string "Pansage$"

Zone1A_EventScript_GiveFWG_Text_16:
# 246 "data/maps/Zone1A/scripts.pory"
	.string "Gossifleur$"

Zone1A_EventScript_GiveFWG_Text_17:
# 246 "data/maps/Zone1A/scripts.pory"
	.string "Sunkern$"

Zone1A_EventScript_GiveFWG_Text_18:
# 246 "data/maps/Zone1A/scripts.pory"
	.string "Cherubi$"

Zone1A_EventScript_GiveFWG_Text_19:
# 265 "data/maps/Zone1A/scripts.pory"
	.string "Pansear$"

Zone1A_EventScript_GiveFWG_Text_20:
# 265 "data/maps/Zone1A/scripts.pory"
	.string "Vulpix$"

Zone1A_EventScript_GiveFWG_Text_21:
# 265 "data/maps/Zone1A/scripts.pory"
	.string "Slugma$"

Zone1A_EventScript_GiveFWG_Text_22:
# 265 "data/maps/Zone1A/scripts.pory"
	.string "Litleo$"

Zone1A_EventScript_GiveFWG_Text_23:
# 284 "data/maps/Zone1A/scripts.pory"
	.string "Panpour$"

Zone1A_EventScript_GiveFWG_Text_24:
# 284 "data/maps/Zone1A/scripts.pory"
	.string "Barboach$"

Zone1A_EventScript_GiveFWG_Text_25:
# 284 "data/maps/Zone1A/scripts.pory"
	.string "Goldeen$"

Zone1A_EventScript_GiveFWG_Text_26:
# 284 "data/maps/Zone1A/scripts.pory"
	.string "Finneon$"

Zone1A_EventScript_GiveFWG_Text_27:
# 302 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want {STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_28:
# 311 "data/maps/Zone1A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone1A_EventScript_GiveFWG_Text_29:
# 323 "data/maps/Zone1A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone1A_EventScript_GiveFWG_Text_30:
# 335 "data/maps/Zone1A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone1A_EventScript_GiveFWG_Text_31:
# 337 "data/maps/Zone1A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone1A_EventScript_GiveFWG_Text_32:
# 340 "data/maps/Zone1A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone1A_EventScript_GiveFWG_Text_33:
# 346 "data/maps/Zone1A/scripts.pory"
	.string "Take care of your {STR_VAR_1}!$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 471 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I had a variety of\n"
	.string "types, I would be able to win.\p"
	.string "I guess there's more to battling than\n"
	.string "just having different Pokémon!\p"
	.string "As a reward for beating me, take this\n"
	.string "Exp. Share! It's useful for training up\l"
	.string "Pokémon.$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 473 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_Text_FWG_ComeBack::
# 352 "data/maps/Zone1A/scripts.pory"
	.string "Come back another time!$"

Zone1A_Text_Leviathan1Intro::
# 483 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 490 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 494 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 499 "data/maps/Zone1A/scripts.pory"
	.string "Drats! My Fire-Water-Grass core wasn't\n"
	.string "enough!$"
