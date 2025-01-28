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
# 221 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_11
# 222 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 400, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_12, Zone2B_EventScript_BuyBug_Text_13, Zone2B_EventScript_BuyBug_Text_14, Zone2B_EventScript_BuyBug_Text_15, Zone2B_EventScript_BuyBug_Text_16, Zone2B_EventScript_BuyBug_Text_17, Zone2B_EventScript_BuyBug_Text_18, Zone2B_EventScript_BuyBug_Text_19, Zone2B_EventScript_BuyBug_Text_20
# 223 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_29
# 226 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_30
# 228 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_31
# 230 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_32
# 232 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_33
# 234 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_34
# 236 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_35
# 238 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_36
# 240 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_37
# 242 "data/maps/Zone2B/scripts.pory"
	case MULTI_B_PRESSED, Zone2B_EventScript_BuyBug_38
Zone2B_EventScript_BuyBug_18:
# 250 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 251 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_23
Zone2B_EventScript_BuyBug_22:
# 275 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_40
# 285 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 286 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_24, MSGBOX_YESNO
# 287 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_55
Zone2B_EventScript_BuyBug_39:
# 294 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_50
Zone2B_EventScript_BuyBug_49:
# 298 "data/maps/Zone2B/scripts.pory"
	removemoney 500
# 299 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 300 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_25, MSGBOX_DEFAULT
# 301 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 302 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 6, ITEM_NONE
# 303 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 304 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 305 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_26, MSGBOX_DEFAULT
# 306 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 307 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_27
# 308 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 309 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 310 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_28, MSGBOX_YESNO
# 311 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_63
Zone2B_EventScript_BuyBug_62:
# 315 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_29, MSGBOX_DEFAULT
# 316 "data/maps/Zone2B/scripts.pory"
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
# 218 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WURMPLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_23:
# 252 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_21, MSGBOX_AUTOCLOSE
# 253 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 254 "data/maps/Zone2B/scripts.pory"
	special ChoosePartyMon
# 255 "data/maps/Zone2B/scripts.pory"
	waitstate
# 256 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 257 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 258 "data/maps/Zone2B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone2B_EventScript_BuyBug_44
# 264 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 265 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 266 "data/maps/Zone2B/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 267 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_22, MSGBOX_YESNO
# 268 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_57
	goto Zone2B_EventScript_BuyBug_22

Zone2B_EventScript_BuyBug_25:
# 106 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 107 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WURMPLE
# 108 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_47
Zone2B_EventScript_BuyBug_46:
# 111 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 112 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_60
Zone2B_EventScript_BuyBug_59:
# 115 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 116 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_66
Zone2B_EventScript_BuyBug_65:
# 119 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SCATTERBUG
# 120 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_69
Zone2B_EventScript_BuyBug_68:
# 123 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 124 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_72
Zone2B_EventScript_BuyBug_71:
# 127 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 128 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_75
Zone2B_EventScript_BuyBug_74:
# 131 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 132 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_78
Zone2B_EventScript_BuyBug_77:
# 135 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 136 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_81
Zone2B_EventScript_BuyBug_80:
# 139 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 140 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_84
Zone2B_EventScript_BuyBug_83:
# 143 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 9
	goto_if_eq Zone2B_EventScript_BuyBug_87
# 149 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_9, MSGBOX_YESNO
# 150 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_90
# 156 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, 0
Zone2B_EventScript_BuyBug_92:
# 157 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_93
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_29:
# 225 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WURMPLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_30:
# 227 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_31:
# 229 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_32:
# 231 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCATTERBUG
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_33:
# 233 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_34:
# 235 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_35:
# 237 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_36:
# 239 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_37:
# 241 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_18

Zone2B_EventScript_BuyBug_38:
# 243 "data/maps/Zone2B/scripts.pory"
	closemessage
# 244 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 245 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 246 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_40:
# 276 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_23, MSGBOX_YESNO
# 277 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_53
# 283 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_39

Zone2B_EventScript_BuyBug_44:
# 259 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 260 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 261 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_47:
# 109 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_46

Zone2B_EventScript_BuyBug_50:
# 295 "data/maps/Zone2B/scripts.pory"
	special SendChosenMonToPC
# 296 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone2B_EventScript_BuyBug_49

Zone2B_EventScript_BuyBug_53:
# 278 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 279 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 280 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_55:
# 288 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 289 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 290 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_57:
# 269 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 270 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1
# 271 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_60:
# 113 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_59

Zone2B_EventScript_BuyBug_63:
# 312 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 313 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_62

Zone2B_EventScript_BuyBug_66:
# 117 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_65

Zone2B_EventScript_BuyBug_69:
# 121 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_68

Zone2B_EventScript_BuyBug_72:
# 125 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_71

Zone2B_EventScript_BuyBug_75:
# 129 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_74

Zone2B_EventScript_BuyBug_78:
# 133 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_77

Zone2B_EventScript_BuyBug_81:
# 137 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_80

Zone2B_EventScript_BuyBug_84:
# 141 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_83

Zone2B_EventScript_BuyBug_87:
# 144 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_8
# 145 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 146 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_90:
# 151 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 152 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_10
# 153 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_93:
# 158 "data/maps/Zone2B/scripts.pory"
	random 10
# 159 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_96
# 161 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_96
# 167 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_97
# 173 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_98
# 179 "data/maps/Zone2B/scripts.pory"
	case 4, Zone2B_EventScript_BuyBug_99
# 185 "data/maps/Zone2B/scripts.pory"
	case 5, Zone2B_EventScript_BuyBug_100
# 191 "data/maps/Zone2B/scripts.pory"
	case 6, Zone2B_EventScript_BuyBug_101
# 197 "data/maps/Zone2B/scripts.pory"
	case 7, Zone2B_EventScript_BuyBug_102
# 203 "data/maps/Zone2B/scripts.pory"
	case 8, Zone2B_EventScript_BuyBug_103
# 209 "data/maps/Zone2B/scripts.pory"
	case 9, Zone2B_EventScript_BuyBug_104
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_96:
# 162 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WURMPLE
# 163 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_106
# 166 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WURMPLE
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_97:
# 168 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_CATERPIE
# 169 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_109
# 172 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CATERPIE
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_98:
# 174 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_WEEDLE
# 175 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_112
# 178 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_WEEDLE
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_99:
# 180 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SCATTERBUG
# 181 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_115
# 184 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCATTERBUG
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_100:
# 186 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SPINARAK
# 187 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_118
# 190 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SPINARAK
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_101:
# 192 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_LEDYBA
# 193 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_121
# 196 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LEDYBA
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_102:
# 198 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_KRICKETOT
# 199 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_124
# 202 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KRICKETOT
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_103:
# 204 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_TAROUNTULA
# 205 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_127
# 208 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAROUNTULA
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_104:
# 210 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 211 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_130
# 214 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_106:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_109:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_112:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_115:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_118:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_121:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_124:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_127:
	goto Zone2B_EventScript_BuyBug_92

Zone2B_EventScript_BuyBug_130:
	goto Zone2B_EventScript_BuyBug_92


Zone2B_EventScript_Random1::
# 321 "data/maps/Zone2B/scripts.pory"
	lock
# 322 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_RANDOM_1, Zone2B_EventScript_Random1_2
# 327 "data/maps/Zone2B/scripts.pory"
	waitse
# 328 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 329 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 330 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_RANDOM_1
# 331 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 332 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 333 "data/maps/Zone2B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 334 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_Random1_2:
# 323 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 324 "data/maps/Zone2B/scripts.pory"
	release
	end


Zone2B_EventScript_TMBugBite::
# 339 "data/maps/Zone2B/scripts.pory"
	lock
# 340 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_TM_BUG_BITE, Zone2B_EventScript_TMBugBite_2
# 345 "data/maps/Zone2B/scripts.pory"
	waitse
# 346 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 347 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 348 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_TM_BUG_BITE
# 349 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 350 "data/maps/Zone2B/scripts.pory"
	finditem ITEM_TM_BUG_BITE
# 351 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_TMBugBite_2:
# 341 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 342 "data/maps/Zone2B/scripts.pory"
	release
	end


# 355 "data/maps/Zone2B/scripts.pory"

# 356 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 357 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 358 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Zone2B/scripts.pory"
	end
# 360 "data/maps/Zone2B/scripts.pory"

# 361 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 362 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 363 "data/maps/Zone2B/scripts.pory"

# 364 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 365 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 366 "data/maps/Zone2B/scripts.pory"

# 367 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 368 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 369 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 370 "data/maps/Zone2B/scripts.pory"

# 371 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 372 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 373 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Zone2B/scripts.pory"
	end
# 375 "data/maps/Zone2B/scripts.pory"

# 376 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 377 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 378 "data/maps/Zone2B/scripts.pory"

# 379 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 380 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 381 "data/maps/Zone2B/scripts.pory"

# 382 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 383 "data/maps/Zone2B/scripts.pory"
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
# 144 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_9:
# 149 "data/maps/Zone2B/scripts.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon:\l"
	.string "Wurmple, Caterpie, Weedle, Scatterbug,\l"
	.string "Spinarak, Ledyba, Kricketot,\l"
	.string "Tarountula, or Sewaddle.\p"
	.string "Is this ok?$"

Zone2B_EventScript_BuyBug_Text_10:
# 152 "data/maps/Zone2B/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone2B_EventScript_BuyBug_Text_11:
# 221 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_12:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Wurmple$"

Zone2B_EventScript_BuyBug_Text_13:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Caterpie$"

Zone2B_EventScript_BuyBug_Text_14:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Weedle$"

Zone2B_EventScript_BuyBug_Text_15:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Scatterbug$"

Zone2B_EventScript_BuyBug_Text_16:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Spinarak$"

Zone2B_EventScript_BuyBug_Text_17:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Ledyba$"

Zone2B_EventScript_BuyBug_Text_18:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Kricketot$"

Zone2B_EventScript_BuyBug_Text_19:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Tarountula$"

Zone2B_EventScript_BuyBug_Text_20:
# 222 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_21:
# 252 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone2B_EventScript_BuyBug_Text_22:
# 267 "data/maps/Zone2B/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone2B_EventScript_BuyBug_Text_23:
# 276 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy a Bug for\n"
	.string "¥500?$"

Zone2B_EventScript_BuyBug_Text_24:
# 286 "data/maps/Zone2B/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy\n"
	.string "{STR_VAR_1} for ¥500?$"

Zone2B_EventScript_BuyBug_Text_25:
# 300 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_26:
# 305 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_27:
# 307 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_28:
# 310 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_29:
# 315 "data/maps/Zone2B/scripts.pory"
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
