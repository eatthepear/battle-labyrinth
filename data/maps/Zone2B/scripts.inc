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
	giveitem ITEM_PERSIM_BERRY, 2
# 47 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 48 "data/maps/Zone2B/scripts.pory"
	closemessage
# 49 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 50 "data/maps/Zone2B/scripts.pory"
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
# 71 "data/maps/Zone2B/scripts.pory"
	lock
# 72 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 73 "data/maps/Zone2B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone2B_EventScript_BuyBug_2
Zone2B_EventScript_BuyBug_1:
# 84 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_6
Zone2B_EventScript_BuyBug_4:
# 89 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 90 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_6, MSGBOX_YESNO
# 91 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_13
# 97 "data/maps/Zone2B/scripts.pory"
	checkmoney 500, 0
# 98 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_16
# 104 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_19
# 230 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_11
# 231 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_12, Zone2B_EventScript_BuyBug_Text_13, Zone2B_EventScript_BuyBug_Text_14, Zone2B_EventScript_BuyBug_Text_15, Zone2B_EventScript_BuyBug_Text_16, Zone2B_EventScript_BuyBug_Text_17, Zone2B_EventScript_BuyBug_Text_18, Zone2B_EventScript_BuyBug_Text_19, Zone2B_EventScript_BuyBug_Text_20, Zone2B_EventScript_BuyBug_Text_21
# 232 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_29
# 235 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_30
# 237 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_31
# 239 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_32
# 241 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_33
# 243 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_34
# 245 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_35
# 247 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_36
# 249 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_37
# 251 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_38
# 253 "data/maps/Zone2B/scripts.pory"
	case MULTI_B_PRESSED, Zone2B_EventScript_BuyBug_39
Zone2B_EventScript_BuyBug_18:
# 261 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 262 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_23
Zone2B_EventScript_BuyBug_22:
# 286 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_41
# 296 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 297 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_25, MSGBOX_YESNO
# 298 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_56
Zone2B_EventScript_BuyBug_40:
# 305 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_51
Zone2B_EventScript_BuyBug_50:
# 309 "data/maps/Zone2B/scripts.pory"
	removemoney 500
# 310 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 311 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_26, MSGBOX_DEFAULT
# 312 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 313 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 6, ITEM_NONE
# 314 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 315 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 316 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_27, MSGBOX_DEFAULT
# 317 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_28
# 319 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 320 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 321 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_29, MSGBOX_YESNO
# 322 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_64
Zone2B_EventScript_BuyBug_63:
# 326 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_30, MSGBOX_DEFAULT
# 327 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_2:
# 74 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_0, MSGBOX_YESNO
# 75 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_10
# 80 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOSH, Zone2B_EventScript_BuyBug_Text_3
# 82 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_4, MSGBOX_DEFAULT
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_5:
# 85 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_5
# 86 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_6:
# 84 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_5
	goto Zone2B_EventScript_BuyBug_4

Zone2B_EventScript_BuyBug_10:
# 76 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 77 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_13:
# 92 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 93 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 94 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_16:
# 99 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_7
# 100 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 101 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_19:
# 105 "data/maps/Zone2B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone2B_EventScript_BuyBug_25
# 227 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_23:
# 263 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_22, MSGBOX_AUTOCLOSE
# 264 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 265 "data/maps/Zone2B/scripts.pory"
	special ChoosePartyMon
# 266 "data/maps/Zone2B/scripts.pory"
	waitstate
# 267 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 268 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 269 "data/maps/Zone2B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone2B_EventScript_BuyBug_45
# 275 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 276 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 277 "data/maps/Zone2B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 278 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_23, MSGBOX_YESNO
# 279 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_58
	goto Zone2B_EventScript_BuyBug_22

Zone2B_EventScript_BuyBug_25:
# 106 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 107 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 108 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_48
Zone2B_EventScript_BuyBug_47:
# 111 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 112 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_61
Zone2B_EventScript_BuyBug_60:
# 115 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 116 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_67
Zone2B_EventScript_BuyBug_66:
# 119 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 120 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_70
Zone2B_EventScript_BuyBug_69:
# 123 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 124 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_73
Zone2B_EventScript_BuyBug_72:
# 127 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 128 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_76
Zone2B_EventScript_BuyBug_75:
# 131 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 132 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_79
Zone2B_EventScript_BuyBug_78:
# 135 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 136 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_82
Zone2B_EventScript_BuyBug_81:
# 139 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 140 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_85
Zone2B_EventScript_BuyBug_84:
# 143 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 144 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_88
Zone2B_EventScript_BuyBug_87:
# 147 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone2B_EventScript_BuyBug_91
# 153 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_9, MSGBOX_YESNO
# 154 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_94
# 160 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone2B_EventScript_BuyBug_96:
# 161 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_97
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_29:
# 234 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_30:
# 236 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_31:
# 238 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_32:
# 240 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_33:
# 242 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_34:
# 244 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_35:
# 246 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_36:
# 248 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_37:
# 250 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_38:
# 252 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PARAS
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_39:
# 254 "data/maps/Zone2B/scripts.pory"
	closemessage
# 255 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 256 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 257 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_41:
# 287 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_24, MSGBOX_YESNO
# 288 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_54
# 294 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_40

Zone2B_EventScript_BuyBug_45:
# 270 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 271 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 272 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_48:
# 109 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_51:
# 306 "data/maps/Zone2B/scripts.pory"
	special SendChosenMonToPC
# 307 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone2B_EventScript_BuyBug_50

Zone2B_EventScript_BuyBug_54:
# 289 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 290 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 291 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_56:
# 299 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 300 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 301 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_58:
# 280 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 281 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 282 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_61:
# 113 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_60

Zone2B_EventScript_BuyBug_64:
# 323 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 324 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_63

Zone2B_EventScript_BuyBug_67:
# 117 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_66

Zone2B_EventScript_BuyBug_70:
# 121 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_69

Zone2B_EventScript_BuyBug_73:
# 125 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_72

Zone2B_EventScript_BuyBug_76:
# 129 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_75

Zone2B_EventScript_BuyBug_79:
# 133 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_78

Zone2B_EventScript_BuyBug_82:
# 137 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_81

Zone2B_EventScript_BuyBug_85:
# 141 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_84

Zone2B_EventScript_BuyBug_88:
# 145 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_87

Zone2B_EventScript_BuyBug_91:
# 148 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_8
# 149 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 150 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_94:
# 155 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 156 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_10
# 157 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_97:
# 162 "data/maps/Zone2B/scripts.pory"
	random 10
# 163 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_100
# 170 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_101
# 176 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_102
# 182 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_103
# 188 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_104
# 194 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_105
# 200 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_106
# 206 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_107
# 212 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_108
# 218 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_109
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_100:
# 165 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 166 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_111
# 169 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_101:
# 171 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 172 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_114
# 175 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_102:
# 177 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 178 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_117
# 181 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_103:
# 183 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 184 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_120
# 187 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_104:
# 189 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 190 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_123
# 193 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_105:
# 195 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 196 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_126
# 199 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_106:
# 201 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 202 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_129
# 205 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_107:
# 207 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 208 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_132
# 211 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_108:
# 213 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 214 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_135
# 217 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_109:
# 219 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 220 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_138
# 223 "data/maps/Zone2B/scripts.pory"
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


Zone2B_EventScript_Random1::
# 332 "data/maps/Zone2B/scripts.pory"
	lock
# 333 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_EventScript_Random1_2
# 338 "data/maps/Zone2B/scripts.pory"
	waitse
# 339 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 340 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 341 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_RANDOM_1
# 342 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 343 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 344 "data/maps/Zone2B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 345 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_Random1_2:
# 334 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 335 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_TMBugBite::
# 350 "data/maps/Zone2B/scripts.pory"
	lock
# 351 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_TM_BUG_BITE, Zone2B_EventScript_TMBugBite_2
# 356 "data/maps/Zone2B/scripts.pory"
	waitse
# 357 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 358 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 359 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_TM_BUG_BITE
# 360 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 361 "data/maps/Zone2B/scripts.pory"
	finditem ITEM_TM_BUG_BITE
# 362 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_TMBugBite_2:
# 352 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 353 "data/maps/Zone2B/scripts.pory"
	release
	end


# 366 "data/maps/Zone2B/scripts.pory"

# 367 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 368 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 369 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Zone2B/scripts.pory"
	end
# 371 "data/maps/Zone2B/scripts.pory"

# 372 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 373 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 374 "data/maps/Zone2B/scripts.pory"

# 375 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 376 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 377 "data/maps/Zone2B/scripts.pory"

# 378 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 379 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 380 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 381 "data/maps/Zone2B/scripts.pory"

# 382 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 383 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 384 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Zone2B/scripts.pory"
	end
# 386 "data/maps/Zone2B/scripts.pory"

# 387 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 388 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 389 "data/maps/Zone2B/scripts.pory"

# 390 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 391 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 392 "data/maps/Zone2B/scripts.pory"

# 393 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 394 "data/maps/Zone2B/scripts.pory"
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
# 74 "data/maps/Zone2B/scripts.pory"
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Bug-type Pokémon sure are great.\p"
	.string "I can show you some Bugs, if you like?$"

Zone2B_EventScript_BuyBug_Text_1:
# 76 "data/maps/Zone2B/scripts.pory"
	.string "You don't want any? Fine. More for me.$"

Zone2B_EventScript_BuyBug_Text_2:
# 80 "data/maps/Zone2B/scripts.pory"
	.string "I'll show you some great Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_3:
# 81 "data/maps/Zone2B/scripts.pory"
	.string "They were great, weren't they?$"

Zone2B_EventScript_BuyBug_Text_4:
# 82 "data/maps/Zone2B/scripts.pory"
	.string "Hey, tell you what.\p"
	.string "I'm actually selling some Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_5:
# 85 "data/maps/Zone2B/scripts.pory"
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_6:
# 90 "data/maps/Zone2B/scripts.pory"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokémon?\p"
	.string "I've got quite the great selection for\n"
	.string "only ¥500!$"

Zone2B_EventScript_BuyBug_Text_7:
# 99 "data/maps/Zone2B/scripts.pory"
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_8:
# 148 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_9:
# 153 "data/maps/Zone2B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Sewaddle, Spinarak, Ledyba, Venipede,\l"
	.string "Nincada, Caterpie, Weedle, Tarountula,\l"
	.string "Kricketot, or Paras.\p"
	.string "Is this ok?$"

Zone2B_EventScript_BuyBug_Text_10:
# 156 "data/maps/Zone2B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone2B_EventScript_BuyBug_Text_11:
# 230 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_12:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_13:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Spinarak$"

Zone2B_EventScript_BuyBug_Text_14:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Ledyba$"

Zone2B_EventScript_BuyBug_Text_15:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Venipede$"

Zone2B_EventScript_BuyBug_Text_16:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Nincada$"

Zone2B_EventScript_BuyBug_Text_17:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Caterpie$"

Zone2B_EventScript_BuyBug_Text_18:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Weedle$"

Zone2B_EventScript_BuyBug_Text_19:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Tarountula$"

Zone2B_EventScript_BuyBug_Text_20:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Kricketot$"

Zone2B_EventScript_BuyBug_Text_21:
# 231 "data/maps/Zone2B/scripts.pory"
	.string "Paras$"

Zone2B_EventScript_BuyBug_Text_22:
# 263 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone2B_EventScript_BuyBug_Text_23:
# 278 "data/maps/Zone2B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone2B_EventScript_BuyBug_Text_24:
# 287 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Bug for\n"
	.string "¥500?$"

Zone2B_EventScript_BuyBug_Text_25:
# 297 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone2B_EventScript_BuyBug_Text_26:
# 311 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_27:
# 316 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_28:
# 318 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_29:
# 321 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_30:
# 326 "data/maps/Zone2B/scripts.pory"
	.string "Pleasure doing business with you.$"

Zone2B_Text_Leviathan2WantBattle::
# 54 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: My Pokémon love to eat, just like\n"
	.string "me! Want to see?$"

Zone2B_Text_Leviathan2Intro::
# 58 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
# 62 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
# 66 "data/maps/Zone2B/scripts.pory"
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
