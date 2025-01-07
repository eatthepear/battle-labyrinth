Zone2B_MapScripts::
# 2 "data/maps/Zone2B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_TM_BUG_BITE, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
	return

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone2B_EventScript_LeviathanBattle::
# 17 "data/maps/Zone2B/scripts.pory"
	lock
# 18 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 19 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_2, Zone2B_EventScript_LeviathanBattle_2
# 24 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2WantBattle, MSGBOX_YESNO
# 25 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_LeviathanBattle_5
# 30 "data/maps/Zone2B/scripts.pory"
	fadeoutbgm 1
# 31 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2Intro
# 32 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 33 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone2B_EventScript_LeviathanBattle_8
# 33 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone2B_EventScript_LeviathanBattle_8
# 36 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_SHAUN_LEVIATHAN_2, Zone2B_Text_Leviathan2Defeat
Zone2B_EventScript_LeviathanBattle_7:
# 38 "data/maps/Zone2B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 39 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 40 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 41 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 2
# 42 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 2
# 43 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_RAWST_BERRY, 2
# 44 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 2
# 45 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_ASPEAR_BERRY, 2
# 46 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 47 "data/maps/Zone2B/scripts.pory"
	closemessage
# 48 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 49 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_2:
# 20 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 21 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_5:
# 26 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2DenyBattle
# 27 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_8:
# 34 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_SHAUN_LEVIATHAN_2_CHALLENGE, Zone2B_Text_Leviathan2Defeat
	goto Zone2B_EventScript_LeviathanBattle_7


Zone2B_EventScript_BuyBug::
# 70 "data/maps/Zone2B/scripts.pory"
	lock
# 71 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 72 "data/maps/Zone2B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone2B_EventScript_BuyBug_2
Zone2B_EventScript_BuyBug_1:
# 83 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_6
Zone2B_EventScript_BuyBug_4:
# 88 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 89 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_6, MSGBOX_YESNO
# 90 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_13
# 96 "data/maps/Zone2B/scripts.pory"
	checkmoney 500, 0
# 97 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_16
# 103 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_19
# 229 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_11
# 230 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_12, Zone2B_EventScript_BuyBug_Text_13, Zone2B_EventScript_BuyBug_Text_14, Zone2B_EventScript_BuyBug_Text_15, Zone2B_EventScript_BuyBug_Text_16, Zone2B_EventScript_BuyBug_Text_17, Zone2B_EventScript_BuyBug_Text_18, Zone2B_EventScript_BuyBug_Text_19, Zone2B_EventScript_BuyBug_Text_20, Zone2B_EventScript_BuyBug_Text_21
# 231 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_29
# 234 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_30
# 236 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_31
# 238 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_32
# 240 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_33
# 242 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_34
# 244 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_35
# 246 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_36
# 248 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_37
# 250 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_38
# 252 "data/maps/Zone2B/scripts.pory"
	case MULTI_B_PRESSED, Zone2B_EventScript_BuyBug_39
Zone2B_EventScript_BuyBug_18:
# 260 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 261 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_23
Zone2B_EventScript_BuyBug_22:
# 285 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_41
# 295 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 296 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_25, MSGBOX_YESNO
# 297 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_56
Zone2B_EventScript_BuyBug_40:
# 304 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_51
Zone2B_EventScript_BuyBug_50:
# 308 "data/maps/Zone2B/scripts.pory"
	removemoney 500
# 309 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 310 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_26, MSGBOX_DEFAULT
# 311 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 312 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 6, ITEM_NONE
# 313 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 314 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 315 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_27, MSGBOX_DEFAULT
# 316 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_28
# 318 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 319 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 320 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_29, MSGBOX_YESNO
# 321 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_64
Zone2B_EventScript_BuyBug_63:
# 325 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_30, MSGBOX_DEFAULT
# 326 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_2:
# 73 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_0, MSGBOX_YESNO
# 74 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_10
# 79 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOSH, Zone2B_EventScript_BuyBug_Text_3
# 81 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_4, MSGBOX_DEFAULT
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_5:
# 84 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_5
# 85 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_6:
# 83 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_5
	goto Zone2B_EventScript_BuyBug_4

Zone2B_EventScript_BuyBug_10:
# 75 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 76 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_13:
# 91 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 92 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 93 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_16:
# 98 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_7
# 99 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 100 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_19:
# 104 "data/maps/Zone2B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone2B_EventScript_BuyBug_25
# 226 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_23:
# 262 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_22, MSGBOX_AUTOCLOSE
# 263 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 264 "data/maps/Zone2B/scripts.pory"
	special ChoosePartyMon
# 265 "data/maps/Zone2B/scripts.pory"
	waitstate
# 266 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 267 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 268 "data/maps/Zone2B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone2B_EventScript_BuyBug_45
# 274 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 275 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 276 "data/maps/Zone2B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 277 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_23, MSGBOX_YESNO
# 278 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_58
	goto Zone2B_EventScript_BuyBug_22

Zone2B_EventScript_BuyBug_25:
# 105 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 106 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 107 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_48
Zone2B_EventScript_BuyBug_47:
# 110 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 111 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_61
Zone2B_EventScript_BuyBug_60:
# 114 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 115 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_67
Zone2B_EventScript_BuyBug_66:
# 118 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 119 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_70
Zone2B_EventScript_BuyBug_69:
# 122 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 123 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_73
Zone2B_EventScript_BuyBug_72:
# 126 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 127 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_76
Zone2B_EventScript_BuyBug_75:
# 130 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 131 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_79
Zone2B_EventScript_BuyBug_78:
# 134 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 135 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_82
Zone2B_EventScript_BuyBug_81:
# 138 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 139 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_85
Zone2B_EventScript_BuyBug_84:
# 142 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 143 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_88
Zone2B_EventScript_BuyBug_87:
# 146 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone2B_EventScript_BuyBug_91
# 152 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_9, MSGBOX_YESNO
# 153 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_94
# 159 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone2B_EventScript_BuyBug_96:
# 160 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_97
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_29:
# 233 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_30:
# 235 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_31:
# 237 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_32:
# 239 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_33:
# 241 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_34:
# 243 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_35:
# 245 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_36:
# 247 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_37:
# 249 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_38:
# 251 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PARAS
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_39:
# 253 "data/maps/Zone2B/scripts.pory"
	closemessage
# 254 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 255 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 256 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_41:
# 286 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_24, MSGBOX_YESNO
# 287 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_54
# 293 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_40

Zone2B_EventScript_BuyBug_45:
# 269 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 270 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 271 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_48:
# 108 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_51:
# 305 "data/maps/Zone2B/scripts.pory"
	special SendChosenMonToPC
# 306 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone2B_EventScript_BuyBug_50

Zone2B_EventScript_BuyBug_54:
# 288 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 289 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 290 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_56:
# 298 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 299 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 300 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_58:
# 279 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 280 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 281 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_61:
# 112 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_60

Zone2B_EventScript_BuyBug_64:
# 322 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 323 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_63

Zone2B_EventScript_BuyBug_67:
# 116 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_66

Zone2B_EventScript_BuyBug_70:
# 120 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_69

Zone2B_EventScript_BuyBug_73:
# 124 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_72

Zone2B_EventScript_BuyBug_76:
# 128 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_75

Zone2B_EventScript_BuyBug_79:
# 132 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_78

Zone2B_EventScript_BuyBug_82:
# 136 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_81

Zone2B_EventScript_BuyBug_85:
# 140 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_84

Zone2B_EventScript_BuyBug_88:
# 144 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_87

Zone2B_EventScript_BuyBug_91:
# 147 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_8
# 148 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 149 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_94:
# 154 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 155 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_10
# 156 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_97:
# 161 "data/maps/Zone2B/scripts.pory"
	random 10
# 162 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 163 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_100
# 169 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_101
# 175 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_102
# 181 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_103
# 187 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_104
# 193 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_105
# 199 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_106
# 205 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_107
# 211 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_108
# 217 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_109
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_100:
# 164 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 165 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_111
# 168 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_101:
# 170 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 171 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_114
# 174 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_102:
# 176 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 177 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_117
# 180 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_103:
# 182 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 183 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_120
# 186 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_104:
# 188 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 189 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_123
# 192 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_105:
# 194 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 195 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_126
# 198 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_106:
# 200 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 201 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_129
# 204 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_107:
# 206 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 207 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_132
# 210 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_108:
# 212 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 213 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_135
# 216 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_109:
# 218 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 219 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_138
# 222 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PARAS
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_111:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_114:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_117:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_120:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_123:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_126:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_129:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_132:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_135:
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_138:
	goto Zone2B_EventScript_BuyBug_96


Zone2B_EventScript_ItemRandom1::
# 331 "data/maps/Zone2B/scripts.pory"
	lock
# 332 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_EventScript_ItemRandom1_2
# 337 "data/maps/Zone2B/scripts.pory"
	waitse
# 338 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 339 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 340 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_RANDOM_1
# 341 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 342 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 343 "data/maps/Zone2B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 344 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_ItemRandom1_2:
# 333 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 334 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_ItemTMBugBite::
# 349 "data/maps/Zone2B/scripts.pory"
	lock
# 350 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_TM_BUG_BITE, Zone2B_EventScript_ItemTMBugBite_2
# 355 "data/maps/Zone2B/scripts.pory"
	waitse
# 356 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 357 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 358 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_TM_BUG_BITE
# 359 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 360 "data/maps/Zone2B/scripts.pory"
	finditem ITEM_TM_BUG_BITE
# 361 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_ItemTMBugBite_2:
# 351 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 352 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_CautionSign::
# 366 "data/maps/Zone2B/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 367 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 372 "data/maps/Zone2B/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 373 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 378 "data/maps/Zone2B/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 379 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


# 383 "data/maps/Zone2B/scripts.pory"

# 384 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 385 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 386 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/Zone2B/scripts.pory"
	end
# 388 "data/maps/Zone2B/scripts.pory"

# 389 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 390 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 391 "data/maps/Zone2B/scripts.pory"

# 392 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 393 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 394 "data/maps/Zone2B/scripts.pory"

# 395 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 396 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 397 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 398 "data/maps/Zone2B/scripts.pory"

# 399 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 400 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 401 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/Zone2B/scripts.pory"
	end
# 403 "data/maps/Zone2B/scripts.pory"

# 404 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 405 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 406 "data/maps/Zone2B/scripts.pory"

# 407 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 408 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 409 "data/maps/Zone2B/scripts.pory"

# 410 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 411 "data/maps/Zone2B/scripts.pory"
	.string "Sorry about earlier.$"

Zone2B_EventScript_LeviathanBattle_Text_0:
# 20 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: If you're looking for more\n"
	.string "Berries, I've heard you can either grow\l"
	.string "them yourself, or find a nice Golden\l"
	.string "Tree to shake them from.\p"
	.string "Those trees have Pokémon though;\n"
	.string "that's where I found some of my partner\l"
	.string "Pokémon!$"

Zone2B_EventScript_LeviathanBattle_Text_1:
# 39 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Even after all those Berries, it\n"
	.string "wasn't enough to get across the finish\l"
	.string "line.\p"
	.string "That's all right though;\p"
	.string "I enjoyed our battle so much, I want to\n"
	.string "give you some extra Berries!$"

Zone2B_EventScript_BuyBug_Text_0:
# 73 "data/maps/Zone2B/scripts.pory"
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Bug-type Pokémon sure are great.\p"
	.string "I can show you some Bugs, if you like?$"

Zone2B_EventScript_BuyBug_Text_1:
# 75 "data/maps/Zone2B/scripts.pory"
	.string "You don't want any? Fine. More for me.$"

Zone2B_EventScript_BuyBug_Text_2:
# 79 "data/maps/Zone2B/scripts.pory"
	.string "I'll show you some great Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_3:
# 80 "data/maps/Zone2B/scripts.pory"
	.string "They were great, weren't they?$"

Zone2B_EventScript_BuyBug_Text_4:
# 81 "data/maps/Zone2B/scripts.pory"
	.string "Hey, tell you what.\p"
	.string "I'm actually selling some Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_5:
# 84 "data/maps/Zone2B/scripts.pory"
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_6:
# 89 "data/maps/Zone2B/scripts.pory"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokémon?\p"
	.string "I've got quite the great selection for\n"
	.string "only ¥500!$"

Zone2B_EventScript_BuyBug_Text_7:
# 98 "data/maps/Zone2B/scripts.pory"
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_8:
# 147 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_9:
# 152 "data/maps/Zone2B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Sewaddle, Spinarak, Ledyba, Venipede,\l"
	.string "Nincada, Caterpie, Weedle, Tarountula,\l"
	.string "Kricketot, or Paras.\p"
	.string "Is this ok?$"

Zone2B_EventScript_BuyBug_Text_10:
# 155 "data/maps/Zone2B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone2B_EventScript_BuyBug_Text_11:
# 229 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_12:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_13:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Spinarak$"

Zone2B_EventScript_BuyBug_Text_14:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Ledyba$"

Zone2B_EventScript_BuyBug_Text_15:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Venipede$"

Zone2B_EventScript_BuyBug_Text_16:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Nincada$"

Zone2B_EventScript_BuyBug_Text_17:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Caterpie$"

Zone2B_EventScript_BuyBug_Text_18:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Weedle$"

Zone2B_EventScript_BuyBug_Text_19:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Tarountula$"

Zone2B_EventScript_BuyBug_Text_20:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Kricketot$"

Zone2B_EventScript_BuyBug_Text_21:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Paras$"

Zone2B_EventScript_BuyBug_Text_22:
# 262 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone2B_EventScript_BuyBug_Text_23:
# 277 "data/maps/Zone2B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone2B_EventScript_BuyBug_Text_24:
# 286 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Bug for\n"
	.string "¥500?$"

Zone2B_EventScript_BuyBug_Text_25:
# 296 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone2B_EventScript_BuyBug_Text_26:
# 310 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_27:
# 315 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_28:
# 317 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_29:
# 320 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_30:
# 325 "data/maps/Zone2B/scripts.pory"
	.string "Pleasure doing business with you.$"

Zone2B_EventScript_CautionSign_Text_0:
# 367 "data/maps/Zone2B/scripts.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 373 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 379 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone2B_Text_Leviathan2WantBattle::
# 53 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: My Pokémon love to eat, just like\n"
	.string "me! Want to see?$"

Zone2B_Text_Leviathan2Intro::
# 57 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
# 61 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
# 65 "data/maps/Zone2B/scripts.pory"
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
