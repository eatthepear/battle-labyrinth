Zone2B_MapScripts::
# 2 "data/maps/Zone2B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2B_EventScript_LeviathanBattle::
# 12 "data/maps/Zone2B/scripts.pory"
	lock
# 13 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 14 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_2, Zone2B_EventScript_LeviathanBattle_2
# 19 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2WantBattle, MSGBOX_YESNO
# 20 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_LeviathanBattle_5
# 25 "data/maps/Zone2B/scripts.pory"
	fadeoutbgm 1
# 26 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2Intro
# 27 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 28 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone2B_EventScript_LeviathanBattle_8
# 28 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone2B_EventScript_LeviathanBattle_8
# 31 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_SHAUN_LEVIATHAN_2, Zone2B_Text_Leviathan2Defeat
Zone2B_EventScript_LeviathanBattle_7:
# 33 "data/maps/Zone2B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 34 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 35 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 5
# 36 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 2
# 37 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 2
# 38 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_RAWST_BERRY, 2
# 39 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 2
# 40 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_ASPEAR_BERRY, 2
# 41 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 42 "data/maps/Zone2B/scripts.pory"
	closemessage
# 43 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 44 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_2:
# 15 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 16 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_5:
# 21 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2DenyBattle
# 22 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_8:
# 29 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_SHAUN_LEVIATHAN_2_BRUTAL, Zone2B_Text_Leviathan2Defeat
	goto Zone2B_EventScript_LeviathanBattle_7


Zone2B_EventScript_BuyBug::
# 65 "data/maps/Zone2B/scripts.pory"
	lock
# 66 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 67 "data/maps/Zone2B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone2B_EventScript_BuyBug_2
Zone2B_EventScript_BuyBug_1:
# 78 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_6
Zone2B_EventScript_BuyBug_4:
# 83 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 84 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_6, MSGBOX_YESNO
# 85 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_13
# 91 "data/maps/Zone2B/scripts.pory"
	checkmoney 500, 0
# 92 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_16
# 98 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_19
# 224 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_11
# 225 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_12, Zone2B_EventScript_BuyBug_Text_13, Zone2B_EventScript_BuyBug_Text_14, Zone2B_EventScript_BuyBug_Text_15, Zone2B_EventScript_BuyBug_Text_16, Zone2B_EventScript_BuyBug_Text_17, Zone2B_EventScript_BuyBug_Text_18, Zone2B_EventScript_BuyBug_Text_19, Zone2B_EventScript_BuyBug_Text_20, Zone2B_EventScript_BuyBug_Text_21
# 226 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 227 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_29
# 229 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_30
# 231 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_31
# 233 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_32
# 235 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_33
# 237 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_34
# 239 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_35
# 241 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_36
# 243 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_37
# 245 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_38
# 247 "data/maps/Zone2B/scripts.pory"
	case MULTI_B_PRESSED, Zone2B_EventScript_BuyBug_39
Zone2B_EventScript_BuyBug_18:
# 255 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 256 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_23
Zone2B_EventScript_BuyBug_22:
# 280 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_41
# 290 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 291 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_25, MSGBOX_YESNO
# 292 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_56
Zone2B_EventScript_BuyBug_40:
# 299 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_51
Zone2B_EventScript_BuyBug_50:
# 303 "data/maps/Zone2B/scripts.pory"
	removemoney 500
# 304 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 305 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_26, MSGBOX_DEFAULT
# 306 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 307 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 6, ITEM_NONE
# 308 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 309 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 310 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_27, MSGBOX_DEFAULT
# 311 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 312 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_28
# 313 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 314 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 315 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_29, MSGBOX_YESNO
# 316 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_64
Zone2B_EventScript_BuyBug_63:
# 320 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_30, MSGBOX_DEFAULT
# 321 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_2:
# 68 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_0, MSGBOX_YESNO
# 69 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_10
# 74 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOSH, Zone2B_EventScript_BuyBug_Text_3
# 76 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_4, MSGBOX_DEFAULT
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_5:
# 79 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_5
# 80 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_6:
# 78 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_5
	goto Zone2B_EventScript_BuyBug_4

Zone2B_EventScript_BuyBug_10:
# 70 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 71 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_13:
# 86 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 87 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 88 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_16:
# 93 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_7
# 94 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 95 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_19:
# 99 "data/maps/Zone2B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone2B_EventScript_BuyBug_25
# 221 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_23:
# 257 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_22, MSGBOX_AUTOCLOSE
# 258 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 259 "data/maps/Zone2B/scripts.pory"
	special ChoosePartyMon
# 260 "data/maps/Zone2B/scripts.pory"
	waitstate
# 261 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 262 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 263 "data/maps/Zone2B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone2B_EventScript_BuyBug_45
# 269 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 270 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 271 "data/maps/Zone2B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 272 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_23, MSGBOX_YESNO
# 273 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_58
	goto Zone2B_EventScript_BuyBug_22

Zone2B_EventScript_BuyBug_25:
# 100 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 101 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 102 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_48
Zone2B_EventScript_BuyBug_47:
# 105 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 106 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_61
Zone2B_EventScript_BuyBug_60:
# 109 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 110 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_67
Zone2B_EventScript_BuyBug_66:
# 113 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 114 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_70
Zone2B_EventScript_BuyBug_69:
# 117 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 118 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_73
Zone2B_EventScript_BuyBug_72:
# 121 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 122 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_76
Zone2B_EventScript_BuyBug_75:
# 125 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 126 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_79
Zone2B_EventScript_BuyBug_78:
# 129 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 130 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_82
Zone2B_EventScript_BuyBug_81:
# 133 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 134 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_85
Zone2B_EventScript_BuyBug_84:
# 137 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 138 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_88
Zone2B_EventScript_BuyBug_87:
# 141 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone2B_EventScript_BuyBug_91
# 147 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_9, MSGBOX_YESNO
# 148 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_94
# 154 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone2B_EventScript_BuyBug_96:
# 155 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_97
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_29:
# 228 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_30:
# 230 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_31:
# 232 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_32:
# 234 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_33:
# 236 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_34:
# 238 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_35:
# 240 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_36:
# 242 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_37:
# 244 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_38:
# 246 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PARAS
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_39:
# 248 "data/maps/Zone2B/scripts.pory"
	closemessage
# 249 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 250 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 251 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_41:
# 281 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_24, MSGBOX_YESNO
# 282 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_54
# 288 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_40

Zone2B_EventScript_BuyBug_45:
# 264 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 265 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 266 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_48:
# 103 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_51:
# 300 "data/maps/Zone2B/scripts.pory"
	special SendChosenMonToPC
# 301 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone2B_EventScript_BuyBug_50

Zone2B_EventScript_BuyBug_54:
# 283 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 284 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 285 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_56:
# 293 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 294 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 295 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_58:
# 274 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 275 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 276 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_61:
# 107 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_60

Zone2B_EventScript_BuyBug_64:
# 317 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 318 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_63

Zone2B_EventScript_BuyBug_67:
# 111 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_66

Zone2B_EventScript_BuyBug_70:
# 115 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_69

Zone2B_EventScript_BuyBug_73:
# 119 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_72

Zone2B_EventScript_BuyBug_76:
# 123 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_75

Zone2B_EventScript_BuyBug_79:
# 127 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_78

Zone2B_EventScript_BuyBug_82:
# 131 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_81

Zone2B_EventScript_BuyBug_85:
# 135 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_84

Zone2B_EventScript_BuyBug_88:
# 139 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_87

Zone2B_EventScript_BuyBug_91:
# 142 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_8
# 143 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 144 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_94:
# 149 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 150 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_10
# 151 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_97:
# 156 "data/maps/Zone2B/scripts.pory"
	random 10
# 157 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_100
# 164 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_101
# 170 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_102
# 176 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_103
# 182 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_104
# 188 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_105
# 194 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_106
# 200 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_107
# 206 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_108
# 212 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_109
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_100:
# 159 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 160 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_111
# 163 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_101:
# 165 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 166 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_114
# 169 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_102:
# 171 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 172 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_117
# 175 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_103:
# 177 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 178 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_120
# 181 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_104:
# 183 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 184 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_123
# 187 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_105:
# 189 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 190 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_126
# 193 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_106:
# 195 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 196 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_129
# 199 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_107:
# 201 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 202 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_132
# 205 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_108:
# 207 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 208 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_135
# 211 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_109:
# 213 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 214 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_138
# 217 "data/maps/Zone2B/scripts.pory"
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
# 326 "data/maps/Zone2B/scripts.pory"
	lock
# 327 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_EventScript_ItemRandom1_2
# 332 "data/maps/Zone2B/scripts.pory"
	waitse
# 333 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 334 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 335 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_RANDOM_1
# 336 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 337 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 338 "data/maps/Zone2B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 339 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_ItemRandom1_2:
# 328 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 329 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_CautionSign::
# 344 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 349 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 354 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


# 358 "data/maps/Zone2B/scripts.pory"

# 359 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 360 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 361 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Zone2B/scripts.pory"
	end
# 363 "data/maps/Zone2B/scripts.pory"

# 364 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 365 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 366 "data/maps/Zone2B/scripts.pory"

# 367 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 368 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 369 "data/maps/Zone2B/scripts.pory"

# 370 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 371 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 372 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 373 "data/maps/Zone2B/scripts.pory"

# 374 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 375 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 376 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Zone2B/scripts.pory"
	end
# 378 "data/maps/Zone2B/scripts.pory"

# 379 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 380 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 381 "data/maps/Zone2B/scripts.pory"

# 382 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 383 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 384 "data/maps/Zone2B/scripts.pory"

# 385 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 386 "data/maps/Zone2B/scripts.pory"
	.string "Sorry about earlier.$"

Zone2B_EventScript_LeviathanBattle_Text_0:
# 15 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: If you're looking for more\n"
	.string "Berries, I've heard you can either grow\l"
	.string "them yourself, or find a nice Golden\l"
	.string "Tree to shake them from.\p"
	.string "Those trees have Pokémon though;\n"
	.string "that's where I found some of my partner\l"
	.string "Pokémon!$"

Zone2B_EventScript_LeviathanBattle_Text_1:
# 34 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Even after all those Berries, it\n"
	.string "wasn't enough to get across the finish\l"
	.string "line.\p"
	.string "That's all right though;\p"
	.string "I enjoyed our battle so much, I want to\n"
	.string "give you some extra Berries!$"

Zone2B_EventScript_BuyBug_Text_0:
# 68 "data/maps/Zone2B/scripts.pory"
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Bug-type Pokémon sure are great.\p"
	.string "I can show you some Bugs, if you like?$"

Zone2B_EventScript_BuyBug_Text_1:
# 70 "data/maps/Zone2B/scripts.pory"
	.string "You don't want any? Fine. More for me.$"

Zone2B_EventScript_BuyBug_Text_2:
# 74 "data/maps/Zone2B/scripts.pory"
	.string "I'll show you some great Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_3:
# 75 "data/maps/Zone2B/scripts.pory"
	.string "They were great, weren't they?$"

Zone2B_EventScript_BuyBug_Text_4:
# 76 "data/maps/Zone2B/scripts.pory"
	.string "Hey, tell you what.\p"
	.string "I'm actually selling some Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_5:
# 79 "data/maps/Zone2B/scripts.pory"
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_6:
# 84 "data/maps/Zone2B/scripts.pory"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokémon?\p"
	.string "I've got quite the great selection for\n"
	.string "only ¥500!$"

Zone2B_EventScript_BuyBug_Text_7:
# 93 "data/maps/Zone2B/scripts.pory"
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_8:
# 142 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_9:
# 147 "data/maps/Zone2B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Sewaddle, Spinarak, Ledyba, Venipede,\l"
	.string "Nincada, Caterpie, Weedle, Tarountula,\l"
	.string "Kricketot, or Paras.\p"
	.string "Is this ok?$"

Zone2B_EventScript_BuyBug_Text_10:
# 150 "data/maps/Zone2B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone2B_EventScript_BuyBug_Text_11:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_12:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_13:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Spinarak$"

Zone2B_EventScript_BuyBug_Text_14:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Ledyba$"

Zone2B_EventScript_BuyBug_Text_15:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Venipede$"

Zone2B_EventScript_BuyBug_Text_16:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Nincada$"

Zone2B_EventScript_BuyBug_Text_17:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Caterpie$"

Zone2B_EventScript_BuyBug_Text_18:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Weedle$"

Zone2B_EventScript_BuyBug_Text_19:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Tarountula$"

Zone2B_EventScript_BuyBug_Text_20:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Kricketot$"

Zone2B_EventScript_BuyBug_Text_21:
# 225 "data/maps/Zone2B/scripts.pory"
	.string "Paras$"

Zone2B_EventScript_BuyBug_Text_22:
# 257 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone2B_EventScript_BuyBug_Text_23:
# 272 "data/maps/Zone2B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone2B_EventScript_BuyBug_Text_24:
# 281 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Bug for\n"
	.string "¥500?$"

Zone2B_EventScript_BuyBug_Text_25:
# 291 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone2B_EventScript_BuyBug_Text_26:
# 305 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_27:
# 310 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_28:
# 312 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_29:
# 315 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_30:
# 320 "data/maps/Zone2B/scripts.pory"
	.string "Pleasure doing business with you.$"

Zone2B_EventScript_CautionSign_Text_0:
# 344 "data/maps/Zone2B/scripts.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 349 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 354 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone2B_Text_Leviathan2WantBattle::
# 48 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: My Pokémon love to eat, just like\n"
	.string "me! Want to see?$"

Zone2B_Text_Leviathan2Intro::
# 52 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
# 56 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
# 60 "data/maps/Zone2B/scripts.pory"
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
