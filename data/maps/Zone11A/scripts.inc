Zone11A_MapScripts::
# 2 "data/maps/Zone11A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone11A_EventScript_LeviathanIntro::
# 22 "data/maps/Zone11A/scripts.pory"
	lockall
# 23 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 24 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 26 "data/maps/Zone11A/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 28 "data/maps/Zone11A/scripts.pory"
	waitse
# 29 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 30 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 32 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 33 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 34 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_0, MSGBOX_YESNO
# 36 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_LeviathanIntro_2
# 47 "data/maps/Zone11A/scripts.pory"
	fadeoutbgm 1
# 48 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_2
# 49 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 50 "data/maps/Zone11A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_NEWTON
# 51 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11A_EventScript_LeviathanIntro_6
# 51 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone11A_EventScript_LeviathanIntro_6
# 54 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10, Zone11A_Text_Leviathan10Defeat
Zone11A_EventScript_LeviathanIntro_5:
# 56 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 57 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 58 "data/maps/Zone11A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 59 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_3, MSGBOX_DEFAULT
# 60 "data/maps/Zone11A/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 61 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 62 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 63 "data/maps/Zone11A/scripts.pory"
	setvar VAR_ZONE_11_STATE, 1
Zone11A_EventScript_LeviathanIntro_1:
# 65 "data/maps/Zone11A/scripts.pory"
	releaseall
	end

Zone11A_EventScript_LeviathanIntro_2:
# 37 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_1
# 38 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 39 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 41 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 42 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 43 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone11A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 45 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
	goto Zone11A_EventScript_LeviathanIntro_1

Zone11A_EventScript_LeviathanIntro_6:
# 52 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL, Zone11A_Text_Leviathan10Defeat
	goto Zone11A_EventScript_LeviathanIntro_5


Zone11A_EventScript_Leviathan::
# 74 "data/maps/Zone11A/scripts.pory"
	lock
# 75 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 76 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 77 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_BuyRuin::
# 86 "data/maps/Zone11A/scripts.pory"
	lock
# 87 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 88 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_4
Zone11A_EventScript_BuyRuin_3:
# 93 "data/maps/Zone11A/scripts.pory"
	showmoneybox 0, 0, 0
# 94 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_1, MSGBOX_YESNO
# 95 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_BuyRuin_7
# 100 "data/maps/Zone11A/scripts.pory"
	checkmoney 4000, 0
# 101 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone11A_EventScript_BuyRuin_10
# 105 "data/maps/Zone11A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 106 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone11A_EventScript_BuyRuin_14
# 112 "data/maps/Zone11A/scripts.pory"
	call EventScript_NuzlockeVerifyGift
# 113 "data/maps/Zone11A/scripts.pory"
	removemoney 4000
# 114 "data/maps/Zone11A/scripts.pory"
	updatemoneybox
# 115 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_5
# 116 "data/maps/Zone11A/scripts.pory"
	closemessage
# 117 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 118 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_17
# 177 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_7, MSGBOX_DEFAULT
# 178 "data/maps/Zone11A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone11A_EventScript_BuyRuin_Text_8, Zone11A_EventScript_BuyRuin_Text_9, Zone11A_EventScript_BuyRuin_Text_10, Zone11A_EventScript_BuyRuin_Text_11
# 179 "data/maps/Zone11A/scripts.pory"
	switch VAR_RESULT
# 180 "data/maps/Zone11A/scripts.pory"
	case 0, Zone11A_EventScript_BuyRuin_28
# 182 "data/maps/Zone11A/scripts.pory"
	case 1, Zone11A_EventScript_BuyRuin_29
# 184 "data/maps/Zone11A/scripts.pory"
	case 2, Zone11A_EventScript_BuyRuin_30
# 186 "data/maps/Zone11A/scripts.pory"
	case 3, Zone11A_EventScript_BuyRuin_31
Zone11A_EventScript_BuyRuin_16:
# 190 "data/maps/Zone11A/scripts.pory"
	givemon VAR_TEMP_1, 20, ITEM_NONE
# 191 "data/maps/Zone11A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 246
# 192 "data/maps/Zone11A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 193 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_12
# 194 "data/maps/Zone11A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/Zone11A/scripts.pory"
	message Zone11A_EventScript_BuyRuin_Text_13
# 196 "data/maps/Zone11A/scripts.pory"
	waitmessage
# 197 "data/maps/Zone11A/scripts.pory"
	waitfanfare
# 198 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_14, MSGBOX_YESNO
# 199 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone11A_EventScript_BuyRuin_21
Zone11A_EventScript_BuyRuin_20:
# 203 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_15, MSGBOX_DEFAULT
Zone11A_EventScript_BuyRuin_1:
# 207 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_2:
# 89 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_0
# 90 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_4:
# 88 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN, Zone11A_EventScript_BuyRuin_2
	goto Zone11A_EventScript_BuyRuin_3

Zone11A_EventScript_BuyRuin_7:
# 96 "data/maps/Zone11A/scripts.pory"
	closemessage
# 97 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 98 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_2
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_10:
# 102 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_3
# 103 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_14:
# 107 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_4
# 108 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 109 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_17:
# 119 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone11A_EventScript_BuyRuin_24
# 122 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 123 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_BALTOY
# 124 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_33
Zone11A_EventScript_BuyRuin_32:
# 127 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_GOLETT
# 128 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_36
Zone11A_EventScript_BuyRuin_35:
# 131 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK
# 132 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_39
Zone11A_EventScript_BuyRuin_38:
# 135 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK_GALARIAN
# 136 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_42
Zone11A_EventScript_BuyRuin_41:
# 139 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone11A_EventScript_BuyRuin_45
Zone11A_EventScript_BuyRuin_47:
# 145 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone11A_EventScript_BuyRuin_48
Zone11A_EventScript_BuyRuin_23:
# 175 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_21:
# 200 "data/maps/Zone11A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 201 "data/maps/Zone11A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone11A_EventScript_BuyRuin_20

Zone11A_EventScript_BuyRuin_24:
# 120 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_23

Zone11A_EventScript_BuyRuin_28:
# 181 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_29:
# 183 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_30:
# 185 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_31:
# 187 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALARIAN
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_33:
# 125 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_32

Zone11A_EventScript_BuyRuin_36:
# 129 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_35

Zone11A_EventScript_BuyRuin_39:
# 133 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_38

Zone11A_EventScript_BuyRuin_42:
# 137 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_41

Zone11A_EventScript_BuyRuin_45:
# 140 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_6
# 141 "data/maps/Zone11A/scripts.pory"
	addmoney 4000
# 142 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_48:
# 146 "data/maps/Zone11A/scripts.pory"
	random 4
# 147 "data/maps/Zone11A/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/Zone11A/scripts.pory"
	case 0, Zone11A_EventScript_BuyRuin_51
# 154 "data/maps/Zone11A/scripts.pory"
	case 1, Zone11A_EventScript_BuyRuin_52
# 160 "data/maps/Zone11A/scripts.pory"
	case 2, Zone11A_EventScript_BuyRuin_53
# 166 "data/maps/Zone11A/scripts.pory"
	case 3, Zone11A_EventScript_BuyRuin_54
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_51:
# 149 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_BALTOY
# 150 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_56
# 153 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_52:
# 155 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_GOLETT
# 156 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_59
# 159 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_53:
# 161 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK
# 162 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_62
# 165 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_54:
# 167 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK_GALARIAN
# 168 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_65
# 171 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALARIAN
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_56:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_59:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_62:
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_65:
	goto Zone11A_EventScript_BuyRuin_47


Zone11A_EventScript_TM22::
# 212 "data/maps/Zone11A/scripts.pory"
	lock
# 213 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_EventScript_TM22_2
# 218 "data/maps/Zone11A/scripts.pory"
	waitse
# 219 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 220 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 221 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TM22
# 222 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 223 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TM22, 1
# 224 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TM22_2:
# 214 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 215 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_MoonStone::
# 229 "data/maps/Zone11A/scripts.pory"
	lock
# 230 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_EventScript_MoonStone_2
# 235 "data/maps/Zone11A/scripts.pory"
	waitse
# 236 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 237 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 238 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_MOON_STONE
# 239 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 240 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_MOON_STONE
# 241 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_MoonStone_2:
# 231 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 232 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_TimerBall::
# 246 "data/maps/Zone11A/scripts.pory"
	lock
# 247 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_EventScript_TimerBall_2
# 252 "data/maps/Zone11A/scripts.pory"
	waitse
# 253 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 254 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 255 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TIMER_BALL
# 256 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 257 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TIMER_BALL, 1
# 258 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TimerBall_2:
# 248 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 249 "data/maps/Zone11A/scripts.pory"
	release
	end


# 262 "data/maps/Zone11A/scripts.pory"

# 263 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_CelebiIntro::
# 264 "data/maps/Zone11A/scripts.pory"
	lockall
# 265 "data/maps/Zone11A/scripts.pory"
	goto Zone11A_EventScript_NoCelebi
# 266 "data/maps/Zone11A/scripts.pory"
	releaseall
# 267 "data/maps/Zone11A/scripts.pory"
	end
# 268 "data/maps/Zone11A/scripts.pory"

# 269 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_NoCelebi:
# 270 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
# 271 "data/maps/Zone11A/scripts.pory"
	releaseall
# 272 "data/maps/Zone11A/scripts.pory"
	end
# 273 "data/maps/Zone11A/scripts.pory"

# 274 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_SacredTree:
# 275 "data/maps/Zone11A/scripts.pory"
	.string "This appears to be a sacred tree.$"
# 276 "data/maps/Zone11A/scripts.pory"

# 277 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Jeanette::
# 278 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
# 279 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Zone11A/scripts.pory"
	end
# 281 "data/maps/Zone11A/scripts.pory"

# 282 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteIntro:
# 283 "data/maps/Zone11A/scripts.pory"
	.string "Ah! An angry spirit!$"
# 284 "data/maps/Zone11A/scripts.pory"

# 285 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteDefeat:
# 286 "data/maps/Zone11A/scripts.pory"
	.string "I wasn't talking about you,\n"
# 287 "data/maps/Zone11A/scripts.pory"
	.string "I meant behind you!$"
# 288 "data/maps/Zone11A/scripts.pory"

# 289 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanettePostBattle:
# 290 "data/maps/Zone11A/scripts.pory"
	.string "It's gone now…$"
# 291 "data/maps/Zone11A/scripts.pory"

# 292 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_EmmaandLeo::
# 293 "data/maps/Zone11A/scripts.pory"
	trainerbattle_double TRAINER_PBL_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
# 294 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
# 295 "data/maps/Zone11A/scripts.pory"
	release
# 296 "data/maps/Zone11A/scripts.pory"
	end
# 297 "data/maps/Zone11A/scripts.pory"

# 298 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoIntro:
# 299 "data/maps/Zone11A/scripts.pory"
	.string "Leo: I'm gonna show my girlfriend\n"
# 300 "data/maps/Zone11A/scripts.pory"
	.string "that I'm brave!\p"
# 301 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Ugh. Enforcing gender norms,\n"
# 302 "data/maps/Zone11A/scripts.pory"
	.string "am I right?$"
# 303 "data/maps/Zone11A/scripts.pory"

# 304 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoDefeat:
# 305 "data/maps/Zone11A/scripts.pory"
	.string "Leo: My toxic masculinity, ruined!\p"
# 306 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Maybe I need a new SO…$"
# 307 "data/maps/Zone11A/scripts.pory"

# 308 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoPostBattle:
# 309 "data/maps/Zone11A/scripts.pory"
	.string "Leo: Don't talk to my girlfriend!\p"
# 310 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Pff.$"
# 311 "data/maps/Zone11A/scripts.pory"

# 312 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Joel::
# 313 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
# 314 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/Zone11A/scripts.pory"
	end
# 316 "data/maps/Zone11A/scripts.pory"

# 317 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelIntro:
# 318 "data/maps/Zone11A/scripts.pory"
	.string "Ugh, another forest maze?\n"
# 319 "data/maps/Zone11A/scripts.pory"
	.string "At least this one doesn't have warps…$"
# 320 "data/maps/Zone11A/scripts.pory"

# 321 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelDefeat:
# 322 "data/maps/Zone11A/scripts.pory"
	.string "Another defeat?\n"
# 323 "data/maps/Zone11A/scripts.pory"
	.string "Luck is just not on my side today…$"
# 324 "data/maps/Zone11A/scripts.pory"

# 325 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelPostBattle:
# 326 "data/maps/Zone11A/scripts.pory"
	.string "I'll see you another day.$"
# 327 "data/maps/Zone11A/scripts.pory"

# 328 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Marion::
# 329 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARION, Zone11A_Text_MarionIntro, Zone11A_Text_MarionDefeat
# 330 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Zone11A/scripts.pory"
	end
# 332 "data/maps/Zone11A/scripts.pory"

# 333 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionIntro:
# 334 "data/maps/Zone11A/scripts.pory"
	.string "My psychic powers have no match!$"
# 335 "data/maps/Zone11A/scripts.pory"

# 336 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionDefeat:
# 337 "data/maps/Zone11A/scripts.pory"
	.string "You're too powerful…$"
# 338 "data/maps/Zone11A/scripts.pory"

# 339 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionPostBattle:
# 340 "data/maps/Zone11A/scripts.pory"
	.string "Your power level…\n"
# 341 "data/maps/Zone11A/scripts.pory"
	.string "It's over 9000!$"
# 342 "data/maps/Zone11A/scripts.pory"

# 343 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Regina::
# 344 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
# 345 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Zone11A/scripts.pory"
	end
# 347 "data/maps/Zone11A/scripts.pory"

# 348 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaIntro:
# 349 "data/maps/Zone11A/scripts.pory"
	.string "Do you hear the call?$"
# 350 "data/maps/Zone11A/scripts.pory"

# 351 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaDefeat:
# 352 "data/maps/Zone11A/scripts.pory"
	.string "The spirits… I can hear their voices!$"
# 353 "data/maps/Zone11A/scripts.pory"

# 354 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaPostBattle:
# 355 "data/maps/Zone11A/scripts.pory"
	.string "It might just be the wind whistling,\n"
# 356 "data/maps/Zone11A/scripts.pory"
	.string "but I'm sure the voices are from the\l"
# 357 "data/maps/Zone11A/scripts.pory"
	.string "beyond.$"

Zone11A_EventScript_LeviathanIntro_Text_0:
# 35 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Excuse me, I realize this is\n"
	.string "rather sudden, but would you like to be\l"
	.string "a part of my experiment?$"

Zone11A_EventScript_LeviathanIntro_Text_1:
# 37 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: I see.$"

Zone11A_EventScript_LeviathanIntro_Text_2:
# 48 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Thank you! The experiment name\n"
	.string "is: Gravity and its Pokémon\l"
	.string "battle-winning properties!$"

Zone11A_EventScript_LeviathanIntro_Text_3:
# 59 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Gravity is not the only way to\n"
	.string "utilize lower accuracy moves\l"
	.string "consistently.\p"
	.string "I'd like you to have this Wide Lens.$"

Zone11A_EventScript_BuyRuin_Text_0:
# 89 "data/maps/Zone11A/scripts.pory"
	.string "I'm not offering any of these other\n"
	.string "Pokémon for sale anymore.$"

Zone11A_EventScript_BuyRuin_Text_1:
# 94 "data/maps/Zone11A/scripts.pory"
	.string "Hello, traveler! I search the world for\n"
	.string "ruins. It looks like there aren't any\l"
	.string "here, but I do have some rare Pokémon\l"
	.string "to offer you.\p"
	.string "For ¥4000, you can have one of Baltoy,\n"
	.string "Golett, Yamask, or Yamask-G!$"

Zone11A_EventScript_BuyRuin_Text_2:
# 98 "data/maps/Zone11A/scripts.pory"
	.string "I promise it won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_3:
# 102 "data/maps/Zone11A/scripts.pory"
	.string "You don't have enough money.$"

Zone11A_EventScript_BuyRuin_Text_4:
# 107 "data/maps/Zone11A/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone11A_EventScript_BuyRuin_Text_5:
# 115 "data/maps/Zone11A/scripts.pory"
	.string "Alrighty, I hope this won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_6:
# 140 "data/maps/Zone11A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone11A_EventScript_BuyRuin_Text_7:
# 177 "data/maps/Zone11A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone11A_EventScript_BuyRuin_Text_8:
# 178 "data/maps/Zone11A/scripts.pory"
	.string "Baltoy$"

Zone11A_EventScript_BuyRuin_Text_9:
# 178 "data/maps/Zone11A/scripts.pory"
	.string "Golett$"

Zone11A_EventScript_BuyRuin_Text_10:
# 178 "data/maps/Zone11A/scripts.pory"
	.string "Yamask$"

Zone11A_EventScript_BuyRuin_Text_11:
# 178 "data/maps/Zone11A/scripts.pory"
	.string "Yamask-G$"

Zone11A_EventScript_BuyRuin_Text_12:
# 193 "data/maps/Zone11A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone11A_EventScript_BuyRuin_Text_13:
# 195 "data/maps/Zone11A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone11A_EventScript_BuyRuin_Text_14:
# 198 "data/maps/Zone11A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone11A_EventScript_BuyRuin_Text_15:
# 203 "data/maps/Zone11A/scripts.pory"
	.string "I know these Pokémon are a little\n"
	.string "spooky, but they're quite endearing\l"
	.string "after a while!$"

Zone11A_Text_Leviathan10Defeat::
# 69 "data/maps/Zone11A/scripts.pory"
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
# 81 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
