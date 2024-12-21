Zone2B_MapScripts::
# 2 "data/maps/Zone2B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1
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
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 41 "data/maps/Zone2B/scripts.pory"
	closemessage
# 42 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 43 "data/maps/Zone2B/scripts.pory"
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
# 64 "data/maps/Zone2B/scripts.pory"
	lock
# 65 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 66 "data/maps/Zone2B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone2B_EventScript_BuyBug_2
Zone2B_EventScript_BuyBug_1:
# 77 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_6
Zone2B_EventScript_BuyBug_4:
# 82 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 83 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_6, MSGBOX_YESNO
# 84 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_13
# 90 "data/maps/Zone2B/scripts.pory"
	checkmoney 500, 0
# 91 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_16
# 97 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_19
# 223 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_11
# 224 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_12, Zone2B_EventScript_BuyBug_Text_13, Zone2B_EventScript_BuyBug_Text_14, Zone2B_EventScript_BuyBug_Text_15, Zone2B_EventScript_BuyBug_Text_16, Zone2B_EventScript_BuyBug_Text_17, Zone2B_EventScript_BuyBug_Text_18, Zone2B_EventScript_BuyBug_Text_19, Zone2B_EventScript_BuyBug_Text_20, Zone2B_EventScript_BuyBug_Text_21
# 225 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_29
# 228 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_30
# 230 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_31
# 232 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_32
# 234 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_33
# 236 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_34
# 238 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_35
# 240 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_36
# 242 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_37
# 244 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_38
# 246 "data/maps/Zone2B/scripts.pory"
	case MULTI_B_PRESSED, Zone2B_EventScript_BuyBug_39
Zone2B_EventScript_BuyBug_18:
# 254 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 255 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_23
Zone2B_EventScript_BuyBug_22:
# 279 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_41
# 289 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 290 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_25, MSGBOX_YESNO
# 291 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_56
Zone2B_EventScript_BuyBug_40:
# 298 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_51
Zone2B_EventScript_BuyBug_50:
# 302 "data/maps/Zone2B/scripts.pory"
	removemoney 500
# 303 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 304 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_26, MSGBOX_DEFAULT
# 305 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 306 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 6, ITEM_NONE
# 307 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 308 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 309 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_27, MSGBOX_DEFAULT
# 310 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_28
# 312 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 313 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 314 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_29, MSGBOX_YESNO
# 315 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_64
Zone2B_EventScript_BuyBug_63:
# 319 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_30, MSGBOX_DEFAULT
# 320 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_2:
# 67 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_0, MSGBOX_YESNO
# 68 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_10
# 73 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOSH, Zone2B_EventScript_BuyBug_Text_3
# 75 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_4, MSGBOX_DEFAULT
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_5:
# 78 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_5
# 79 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_6:
# 77 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_5
	goto Zone2B_EventScript_BuyBug_4

Zone2B_EventScript_BuyBug_10:
# 69 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 70 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_13:
# 85 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 86 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 87 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_16:
# 92 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_7
# 93 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 94 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_19:
# 98 "data/maps/Zone2B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone2B_EventScript_BuyBug_25
# 220 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_23:
# 256 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_22, MSGBOX_AUTOCLOSE
# 257 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 258 "data/maps/Zone2B/scripts.pory"
	special ChoosePartyMon
# 259 "data/maps/Zone2B/scripts.pory"
	waitstate
# 260 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 261 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 262 "data/maps/Zone2B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone2B_EventScript_BuyBug_45
# 268 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 269 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 270 "data/maps/Zone2B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 271 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_23, MSGBOX_YESNO
# 272 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_58
	goto Zone2B_EventScript_BuyBug_22

Zone2B_EventScript_BuyBug_25:
# 99 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 100 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 101 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_48
Zone2B_EventScript_BuyBug_47:
# 104 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 105 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_61
Zone2B_EventScript_BuyBug_60:
# 108 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 109 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_67
Zone2B_EventScript_BuyBug_66:
# 112 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 113 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_70
Zone2B_EventScript_BuyBug_69:
# 116 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 117 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_73
Zone2B_EventScript_BuyBug_72:
# 120 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 121 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_76
Zone2B_EventScript_BuyBug_75:
# 124 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 125 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_79
Zone2B_EventScript_BuyBug_78:
# 128 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 129 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_82
Zone2B_EventScript_BuyBug_81:
# 132 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 133 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_85
Zone2B_EventScript_BuyBug_84:
# 136 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 137 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_88
Zone2B_EventScript_BuyBug_87:
# 140 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 10
	goto_if_eq Zone2B_EventScript_BuyBug_91
# 146 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_9, MSGBOX_YESNO
# 147 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_94
# 153 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone2B_EventScript_BuyBug_96:
# 154 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_97
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_29:
# 227 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_30:
# 229 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_31:
# 231 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_32:
# 233 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_33:
# 235 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_34:
# 237 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_35:
# 239 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_36:
# 241 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_37:
# 243 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_38:
# 245 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PARAS
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_39:
# 247 "data/maps/Zone2B/scripts.pory"
	closemessage
# 248 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 249 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 250 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_41:
# 280 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_24, MSGBOX_YESNO
# 281 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_54
# 287 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_40

Zone2B_EventScript_BuyBug_45:
# 263 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 264 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 265 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_48:
# 102 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_51:
# 299 "data/maps/Zone2B/scripts.pory"
	special SendChosenMonToPC
# 300 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone2B_EventScript_BuyBug_50

Zone2B_EventScript_BuyBug_54:
# 282 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 283 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 284 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_56:
# 292 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 293 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 294 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_58:
# 273 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 274 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 275 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_61:
# 106 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_60

Zone2B_EventScript_BuyBug_64:
# 316 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 317 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_63

Zone2B_EventScript_BuyBug_67:
# 110 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_66

Zone2B_EventScript_BuyBug_70:
# 114 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_69

Zone2B_EventScript_BuyBug_73:
# 118 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_72

Zone2B_EventScript_BuyBug_76:
# 122 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_75

Zone2B_EventScript_BuyBug_79:
# 126 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_78

Zone2B_EventScript_BuyBug_82:
# 130 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_81

Zone2B_EventScript_BuyBug_85:
# 134 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_84

Zone2B_EventScript_BuyBug_88:
# 138 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_87

Zone2B_EventScript_BuyBug_91:
# 141 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_8
# 142 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 143 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_94:
# 148 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 149 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_10
# 150 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_97:
# 155 "data/maps/Zone2B/scripts.pory"
	random 10
# 156 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_100
# 163 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_101
# 169 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_102
# 175 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_103
# 181 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_104
# 187 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_105
# 193 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_106
# 199 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_107
# 205 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_108
# 211 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_109
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_100:
# 158 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 159 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_111
# 162 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_101:
# 164 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 165 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_114
# 168 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_102:
# 170 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 171 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_117
# 174 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_103:
# 176 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 177 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_120
# 180 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_104:
# 182 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_NINCADA
# 183 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_123
# 186 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_NINCADA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_105:
# 188 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 189 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_126
# 192 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_106:
# 194 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 195 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_129
# 198 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_107:
# 200 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 201 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_132
# 204 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_108:
# 206 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 207 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_135
# 210 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_96

Zone2B_EventScript_BuyBug_109:
# 212 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_PARAS
# 213 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_138
# 216 "data/maps/Zone2B/scripts.pory"
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


Zone2B_EventScript_ItemPotion::
# 325 "data/maps/Zone2B/scripts.pory"
	lock
# 326 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_EventScript_ItemPotion_2
# 331 "data/maps/Zone2B/scripts.pory"
	waitse
# 332 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 333 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 334 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_POTION_X2
# 335 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 336 "data/maps/Zone2B/scripts.pory"
	finditem ITEM_POTION, 2
# 337 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_ItemPotion_2:
# 327 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 328 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_CautionSign::
# 342 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 347 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 352 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


# 356 "data/maps/Zone2B/scripts.pory"

# 357 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 358 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 359 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Zone2B/scripts.pory"
	end
# 361 "data/maps/Zone2B/scripts.pory"

# 362 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 363 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 364 "data/maps/Zone2B/scripts.pory"

# 365 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 366 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 367 "data/maps/Zone2B/scripts.pory"

# 368 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 369 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 370 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 371 "data/maps/Zone2B/scripts.pory"

# 372 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 373 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 374 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Zone2B/scripts.pory"
	end
# 376 "data/maps/Zone2B/scripts.pory"

# 377 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 378 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 379 "data/maps/Zone2B/scripts.pory"

# 380 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 381 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 382 "data/maps/Zone2B/scripts.pory"

# 383 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 384 "data/maps/Zone2B/scripts.pory"
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
# 67 "data/maps/Zone2B/scripts.pory"
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Bug-type Pokémon sure are great.\p"
	.string "I can show you some Bugs, if you like?$"

Zone2B_EventScript_BuyBug_Text_1:
# 69 "data/maps/Zone2B/scripts.pory"
	.string "You don't want any? Fine. More for me.$"

Zone2B_EventScript_BuyBug_Text_2:
# 73 "data/maps/Zone2B/scripts.pory"
	.string "I'll show you some great Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_3:
# 74 "data/maps/Zone2B/scripts.pory"
	.string "They were great, weren't they?$"

Zone2B_EventScript_BuyBug_Text_4:
# 75 "data/maps/Zone2B/scripts.pory"
	.string "Hey, tell you what.\p"
	.string "I'm actually selling some Bug-type\n"
	.string "Pokémon!$"

Zone2B_EventScript_BuyBug_Text_5:
# 78 "data/maps/Zone2B/scripts.pory"
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_6:
# 83 "data/maps/Zone2B/scripts.pory"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokémon?\p"
	.string "I've got quite the great selection for\n"
	.string "only ¥500!$"

Zone2B_EventScript_BuyBug_Text_7:
# 92 "data/maps/Zone2B/scripts.pory"
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_8:
# 141 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_9:
# 146 "data/maps/Zone2B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Sewaddle, Spinarak, Ledyba, Venipede,\l"
	.string "Nincada, Caterpie, Weedle, Tarountula,\l"
	.string "Kricketot, or Paras.\p"
	.string "Is this ok?$"

Zone2B_EventScript_BuyBug_Text_10:
# 149 "data/maps/Zone2B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone2B_EventScript_BuyBug_Text_11:
# 223 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_12:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_13:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Spinarak$"

Zone2B_EventScript_BuyBug_Text_14:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Ledyba$"

Zone2B_EventScript_BuyBug_Text_15:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Venipede$"

Zone2B_EventScript_BuyBug_Text_16:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Nincada$"

Zone2B_EventScript_BuyBug_Text_17:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Caterpie$"

Zone2B_EventScript_BuyBug_Text_18:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Weedle$"

Zone2B_EventScript_BuyBug_Text_19:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Tarountula$"

Zone2B_EventScript_BuyBug_Text_20:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Kricketot$"

Zone2B_EventScript_BuyBug_Text_21:
# 224 "data/maps/Zone2B/scripts.pory"
	.string "Paras$"

Zone2B_EventScript_BuyBug_Text_22:
# 256 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone2B_EventScript_BuyBug_Text_23:
# 271 "data/maps/Zone2B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone2B_EventScript_BuyBug_Text_24:
# 280 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Bug for\n"
	.string "¥500?$"

Zone2B_EventScript_BuyBug_Text_25:
# 290 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone2B_EventScript_BuyBug_Text_26:
# 304 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_27:
# 309 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_28:
# 311 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_29:
# 314 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_30:
# 319 "data/maps/Zone2B/scripts.pory"
	.string "Pleasure doing business with you.$"

Zone2B_EventScript_CautionSign_Text_0:
# 342 "data/maps/Zone2B/scripts.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 347 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 352 "data/maps/Zone2B/scripts.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone2B_Text_Leviathan2WantBattle::
# 47 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: My Pokémon love to eat, just like\n"
	.string "me! Want to see?$"

Zone2B_Text_Leviathan2Intro::
# 51 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
# 55 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Shaun{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
# 59 "data/maps/Zone2B/scripts.pory"
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
