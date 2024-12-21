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
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11A_EventScript_LeviathanIntro_6
# 50 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone11A_EventScript_LeviathanIntro_6
# 53 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10, Zone11A_Text_Leviathan10Defeat
Zone11A_EventScript_LeviathanIntro_5:
# 55 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 56 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone11A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 58 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/Zone11A/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 60 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 61 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 62 "data/maps/Zone11A/scripts.pory"
	setvar VAR_ZONE_11_STATE, 1
Zone11A_EventScript_LeviathanIntro_1:
# 64 "data/maps/Zone11A/scripts.pory"
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
# 51 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL, Zone11A_Text_Leviathan10Defeat
	goto Zone11A_EventScript_LeviathanIntro_5


Zone11A_EventScript_Leviathan::
# 73 "data/maps/Zone11A/scripts.pory"
	lock
# 74 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 75 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 76 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_BuyRuin::
# 85 "data/maps/Zone11A/scripts.pory"
	lock
# 86 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 87 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_4
Zone11A_EventScript_BuyRuin_3:
# 92 "data/maps/Zone11A/scripts.pory"
	showmoneybox 0, 0, 0
# 93 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_1, MSGBOX_YESNO
# 94 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_BuyRuin_7
# 99 "data/maps/Zone11A/scripts.pory"
	checkmoney 4000, 0
# 100 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone11A_EventScript_BuyRuin_10
# 104 "data/maps/Zone11A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 105 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone11A_EventScript_BuyRuin_14
# 111 "data/maps/Zone11A/scripts.pory"
	call EventScript_NuzlockeVerifyBuy
# 112 "data/maps/Zone11A/scripts.pory"
	removemoney 4000
# 113 "data/maps/Zone11A/scripts.pory"
	updatemoneybox
# 114 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_5
# 115 "data/maps/Zone11A/scripts.pory"
	closemessage
# 116 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 117 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone11A_EventScript_BuyRuin_17
# 176 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_7, MSGBOX_DEFAULT
# 177 "data/maps/Zone11A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone11A_EventScript_BuyRuin_Text_8, Zone11A_EventScript_BuyRuin_Text_9, Zone11A_EventScript_BuyRuin_Text_10, Zone11A_EventScript_BuyRuin_Text_11
# 178 "data/maps/Zone11A/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Zone11A/scripts.pory"
	case 0, Zone11A_EventScript_BuyRuin_28
# 181 "data/maps/Zone11A/scripts.pory"
	case 1, Zone11A_EventScript_BuyRuin_29
# 183 "data/maps/Zone11A/scripts.pory"
	case 2, Zone11A_EventScript_BuyRuin_30
# 185 "data/maps/Zone11A/scripts.pory"
	case 3, Zone11A_EventScript_BuyRuin_31
Zone11A_EventScript_BuyRuin_16:
# 189 "data/maps/Zone11A/scripts.pory"
	givemon VAR_TEMP_1, 20, ITEM_NONE
# 190 "data/maps/Zone11A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 246
# 191 "data/maps/Zone11A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 192 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_12
# 193 "data/maps/Zone11A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/Zone11A/scripts.pory"
	message Zone11A_EventScript_BuyRuin_Text_13
# 195 "data/maps/Zone11A/scripts.pory"
	waitmessage
# 196 "data/maps/Zone11A/scripts.pory"
	waitfanfare
# 197 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_14, MSGBOX_YESNO
# 198 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone11A_EventScript_BuyRuin_21
Zone11A_EventScript_BuyRuin_20:
# 202 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_15, MSGBOX_DEFAULT
Zone11A_EventScript_BuyRuin_1:
# 206 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_2:
# 88 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_0
# 89 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_4:
# 87 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN, Zone11A_EventScript_BuyRuin_2
	goto Zone11A_EventScript_BuyRuin_3

Zone11A_EventScript_BuyRuin_7:
# 95 "data/maps/Zone11A/scripts.pory"
	closemessage
# 96 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 97 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_2
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_10:
# 101 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_3
# 102 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
	goto Zone11A_EventScript_BuyRuin_1

Zone11A_EventScript_BuyRuin_14:
# 106 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_4
# 107 "data/maps/Zone11A/scripts.pory"
	hidemoneybox
# 108 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_17:
# 118 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone11A_EventScript_BuyRuin_24
# 121 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 122 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_BALTOY
# 123 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_33
Zone11A_EventScript_BuyRuin_32:
# 126 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_GOLETT
# 127 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_36
Zone11A_EventScript_BuyRuin_35:
# 130 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK
# 131 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_39
Zone11A_EventScript_BuyRuin_38:
# 134 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK_GALAR
# 135 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_42
Zone11A_EventScript_BuyRuin_41:
# 138 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone11A_EventScript_BuyRuin_45
Zone11A_EventScript_BuyRuin_47:
# 144 "data/maps/Zone11A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone11A_EventScript_BuyRuin_48
Zone11A_EventScript_BuyRuin_23:
# 174 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_21:
# 199 "data/maps/Zone11A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 200 "data/maps/Zone11A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone11A_EventScript_BuyRuin_20

Zone11A_EventScript_BuyRuin_24:
# 119 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_23

Zone11A_EventScript_BuyRuin_28:
# 180 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_29:
# 182 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_30:
# 184 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_31:
# 186 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALAR
	goto Zone11A_EventScript_BuyRuin_16

Zone11A_EventScript_BuyRuin_33:
# 124 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_32

Zone11A_EventScript_BuyRuin_36:
# 128 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_35

Zone11A_EventScript_BuyRuin_39:
# 132 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_38

Zone11A_EventScript_BuyRuin_42:
# 136 "data/maps/Zone11A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone11A_EventScript_BuyRuin_41

Zone11A_EventScript_BuyRuin_45:
# 139 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_BuyRuin_Text_6
# 140 "data/maps/Zone11A/scripts.pory"
	addmoney 4000
# 141 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_BuyRuin_48:
# 145 "data/maps/Zone11A/scripts.pory"
	random 4
# 146 "data/maps/Zone11A/scripts.pory"
	switch VAR_RESULT
# 147 "data/maps/Zone11A/scripts.pory"
	case 0, Zone11A_EventScript_BuyRuin_51
# 153 "data/maps/Zone11A/scripts.pory"
	case 1, Zone11A_EventScript_BuyRuin_52
# 159 "data/maps/Zone11A/scripts.pory"
	case 2, Zone11A_EventScript_BuyRuin_53
# 165 "data/maps/Zone11A/scripts.pory"
	case 3, Zone11A_EventScript_BuyRuin_54
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_51:
# 148 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_BALTOY
# 149 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_56
# 152 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BALTOY
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_52:
# 154 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_GOLETT
# 155 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_59
# 158 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GOLETT
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_53:
# 160 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK
# 161 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_62
# 164 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK
	goto Zone11A_EventScript_BuyRuin_47

Zone11A_EventScript_BuyRuin_54:
# 166 "data/maps/Zone11A/scripts.pory"
	checkspeciesclause SPECIES_YAMASK_GALAR
# 167 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone11A_EventScript_BuyRuin_65
# 170 "data/maps/Zone11A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_YAMASK_GALAR
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
# 211 "data/maps/Zone11A/scripts.pory"
	lock
# 212 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_EventScript_TM22_2
# 217 "data/maps/Zone11A/scripts.pory"
	waitse
# 218 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 219 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 220 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TM22
# 221 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 222 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TM22, 1
# 223 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TM22_2:
# 213 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 214 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_MoonStone::
# 228 "data/maps/Zone11A/scripts.pory"
	lock
# 229 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_EventScript_MoonStone_2
# 234 "data/maps/Zone11A/scripts.pory"
	waitse
# 235 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 236 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 237 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_MOON_STONE
# 238 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 239 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_MOON_STONE
# 240 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_MoonStone_2:
# 230 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 231 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_TimerBall::
# 245 "data/maps/Zone11A/scripts.pory"
	lock
# 246 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_EventScript_TimerBall_2
# 251 "data/maps/Zone11A/scripts.pory"
	waitse
# 252 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 253 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 254 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TIMER_BALL
# 255 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 256 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TIMER_BALL, 1
# 257 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TimerBall_2:
# 247 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 248 "data/maps/Zone11A/scripts.pory"
	release
	end


# 261 "data/maps/Zone11A/scripts.pory"

# 262 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_CelebiIntro::
# 263 "data/maps/Zone11A/scripts.pory"
	lockall
# 264 "data/maps/Zone11A/scripts.pory"
	goto Zone11A_EventScript_NoCelebi
# 265 "data/maps/Zone11A/scripts.pory"
	releaseall
# 266 "data/maps/Zone11A/scripts.pory"
	end
# 267 "data/maps/Zone11A/scripts.pory"

# 268 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_NoCelebi:
# 269 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
# 270 "data/maps/Zone11A/scripts.pory"
	releaseall
# 271 "data/maps/Zone11A/scripts.pory"
	end
# 272 "data/maps/Zone11A/scripts.pory"

# 273 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_SacredTree:
# 274 "data/maps/Zone11A/scripts.pory"
	.string "This appears to be a sacred tree.$"
# 275 "data/maps/Zone11A/scripts.pory"

# 276 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Jeanette::
# 277 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
# 278 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
# 279 "data/maps/Zone11A/scripts.pory"
	end
# 280 "data/maps/Zone11A/scripts.pory"

# 281 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteIntro:
# 282 "data/maps/Zone11A/scripts.pory"
	.string "Ah! An angry spirit!$"
# 283 "data/maps/Zone11A/scripts.pory"

# 284 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteDefeat:
# 285 "data/maps/Zone11A/scripts.pory"
	.string "I wasn't talking about you,\n"
# 286 "data/maps/Zone11A/scripts.pory"
	.string "I meant behind you!$"
# 287 "data/maps/Zone11A/scripts.pory"

# 288 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanettePostBattle:
# 289 "data/maps/Zone11A/scripts.pory"
	.string "It's gone now…$"
# 290 "data/maps/Zone11A/scripts.pory"

# 291 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_EmmaandLeo::
# 292 "data/maps/Zone11A/scripts.pory"
	trainerbattle_double TRAINER_PBL_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
# 293 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
# 294 "data/maps/Zone11A/scripts.pory"
	release
# 295 "data/maps/Zone11A/scripts.pory"
	end
# 296 "data/maps/Zone11A/scripts.pory"

# 297 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoIntro:
# 298 "data/maps/Zone11A/scripts.pory"
	.string "Leo: I'm gonna show my girlfriend\n"
# 299 "data/maps/Zone11A/scripts.pory"
	.string "that I'm brave!\p"
# 300 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Ugh. Enforcing gender norms,\n"
# 301 "data/maps/Zone11A/scripts.pory"
	.string "am I right?$"
# 302 "data/maps/Zone11A/scripts.pory"

# 303 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoDefeat:
# 304 "data/maps/Zone11A/scripts.pory"
	.string "Leo: My toxic masculinity, ruined!\p"
# 305 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Maybe I need a new SO…$"
# 306 "data/maps/Zone11A/scripts.pory"

# 307 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoPostBattle:
# 308 "data/maps/Zone11A/scripts.pory"
	.string "Leo: Don't talk to my girlfriend!\p"
# 309 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Pff.$"
# 310 "data/maps/Zone11A/scripts.pory"

# 311 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Joel::
# 312 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
# 313 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Zone11A/scripts.pory"
	end
# 315 "data/maps/Zone11A/scripts.pory"

# 316 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelIntro:
# 317 "data/maps/Zone11A/scripts.pory"
	.string "Ugh, another forest maze?\n"
# 318 "data/maps/Zone11A/scripts.pory"
	.string "At least this one doesn't have warps…$"
# 319 "data/maps/Zone11A/scripts.pory"

# 320 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelDefeat:
# 321 "data/maps/Zone11A/scripts.pory"
	.string "Another defeat?\n"
# 322 "data/maps/Zone11A/scripts.pory"
	.string "Luck is just not on my side today…$"
# 323 "data/maps/Zone11A/scripts.pory"

# 324 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelPostBattle:
# 325 "data/maps/Zone11A/scripts.pory"
	.string "I'll see you another day.$"
# 326 "data/maps/Zone11A/scripts.pory"

# 327 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Marion::
# 328 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARION, Zone11A_Text_MarionIntro, Zone11A_Text_MarionDefeat
# 329 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Zone11A/scripts.pory"
	end
# 331 "data/maps/Zone11A/scripts.pory"

# 332 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionIntro:
# 333 "data/maps/Zone11A/scripts.pory"
	.string "My psychic powers have no match!$"
# 334 "data/maps/Zone11A/scripts.pory"

# 335 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionDefeat:
# 336 "data/maps/Zone11A/scripts.pory"
	.string "You're too powerful…$"
# 337 "data/maps/Zone11A/scripts.pory"

# 338 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionPostBattle:
# 339 "data/maps/Zone11A/scripts.pory"
	.string "Your power level…\n"
# 340 "data/maps/Zone11A/scripts.pory"
	.string "It's over 9000!$"
# 341 "data/maps/Zone11A/scripts.pory"

# 342 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Regina::
# 343 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
# 344 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Zone11A/scripts.pory"
	end
# 346 "data/maps/Zone11A/scripts.pory"

# 347 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaIntro:
# 348 "data/maps/Zone11A/scripts.pory"
	.string "Do you hear the call?$"
# 349 "data/maps/Zone11A/scripts.pory"

# 350 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaDefeat:
# 351 "data/maps/Zone11A/scripts.pory"
	.string "The spirits… I can hear their voices!$"
# 352 "data/maps/Zone11A/scripts.pory"

# 353 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaPostBattle:
# 354 "data/maps/Zone11A/scripts.pory"
	.string "It might just be the wind whistling,\n"
# 355 "data/maps/Zone11A/scripts.pory"
	.string "but I'm sure the voices are from the\l"
# 356 "data/maps/Zone11A/scripts.pory"
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
# 58 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Gravity is not the only way to\n"
	.string "utilize lower accuracy moves\l"
	.string "consistently.\p"
	.string "I'd like you to have this Wide Lens.$"

Zone11A_EventScript_BuyRuin_Text_0:
# 88 "data/maps/Zone11A/scripts.pory"
	.string "I'm not offering any of these other\n"
	.string "Pokémon for sale anymore.$"

Zone11A_EventScript_BuyRuin_Text_1:
# 93 "data/maps/Zone11A/scripts.pory"
	.string "Hello, traveler! I search the world for\n"
	.string "ruins. It looks like there aren't any\l"
	.string "here, but I do have some rare Pokémon\l"
	.string "to offer you.\p"
	.string "For ¥4000, you can have one of Baltoy,\n"
	.string "Golett, Yamask, or Yamask-G!$"

Zone11A_EventScript_BuyRuin_Text_2:
# 97 "data/maps/Zone11A/scripts.pory"
	.string "I promise it won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_3:
# 101 "data/maps/Zone11A/scripts.pory"
	.string "You don't have enough money.$"

Zone11A_EventScript_BuyRuin_Text_4:
# 106 "data/maps/Zone11A/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone11A_EventScript_BuyRuin_Text_5:
# 114 "data/maps/Zone11A/scripts.pory"
	.string "Alrighty, I hope this won't ruin you!$"

Zone11A_EventScript_BuyRuin_Text_6:
# 139 "data/maps/Zone11A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone11A_EventScript_BuyRuin_Text_7:
# 176 "data/maps/Zone11A/scripts.pory"
	.string "Choose which Pokémon you would like.$"

Zone11A_EventScript_BuyRuin_Text_8:
# 177 "data/maps/Zone11A/scripts.pory"
	.string "Baltoy$"

Zone11A_EventScript_BuyRuin_Text_9:
# 177 "data/maps/Zone11A/scripts.pory"
	.string "Golett$"

Zone11A_EventScript_BuyRuin_Text_10:
# 177 "data/maps/Zone11A/scripts.pory"
	.string "Yamask$"

Zone11A_EventScript_BuyRuin_Text_11:
# 177 "data/maps/Zone11A/scripts.pory"
	.string "Yamask-G$"

Zone11A_EventScript_BuyRuin_Text_12:
# 192 "data/maps/Zone11A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone11A_EventScript_BuyRuin_Text_13:
# 194 "data/maps/Zone11A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone11A_EventScript_BuyRuin_Text_14:
# 197 "data/maps/Zone11A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone11A_EventScript_BuyRuin_Text_15:
# 202 "data/maps/Zone11A/scripts.pory"
	.string "I know these Pokémon are a little\n"
	.string "spooky, but they're quite endearing\l"
	.string "after a while!$"

Zone11A_Text_Leviathan10Defeat::
# 68 "data/maps/Zone11A/scripts.pory"
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
# 80 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
