Zone6A_MapScripts::
# 2 "data/maps/Zone6A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_GEMS, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_TM_DRAINING_KISS, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_TM_CHEST
	return

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone6A_EventScript_LeviathanBattle::
# 27 "data/maps/Zone6A/scripts.pory"
	lockall
# 28 "data/maps/Zone6A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 29 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone6A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 31 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
# 33 "data/maps/Zone6A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone6A_EventScript_LeviathanBattle_2
# 41 "data/maps/Zone6A/scripts.pory"
	fadeoutbgm 1
# 42 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 43 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 44 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_5
# 44 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_5
Zone6A_EventScript_LeviathanBattle_4:
# 49 "data/maps/Zone6A/scripts.pory"
	closemessage
# 50 "data/maps/Zone6A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MINA, Zone6A_EventScript_LeviathanBattle_Text_4
# 51 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_5, MSGBOX_AUTOCLOSE
# 52 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 53 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 54 "data/maps/Zone6A/scripts.pory"
	playse SE_PIN
# 55 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone6A/scripts.pory"
	waitse
# 57 "data/maps/Zone6A/scripts.pory"
	delay 16
# 58 "data/maps/Zone6A/scripts.pory"
	applymovement 1, Zone6A_Movement_Mina_MoveOutOfWay
# 59 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Zone6A_Movement_Coby_WalkUp
# 60 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Zone6A_Movement_Zack_WalkUp
# 61 "data/maps/Zone6A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 62 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 63 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
# 64 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_7, MSGBOX_DEFAULT
# 65 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_8, MSGBOX_DEFAULT
# 66 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_9
# 67 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_10
# 67 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_10
# 72 "data/maps/Zone6A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6, Zone6A_Text_Leviathan6Defeat
Zone6A_EventScript_LeviathanBattle_9:
# 74 "data/maps/Zone6A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 75 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_10, MSGBOX_DEFAULT
# 76 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_11, MSGBOX_DEFAULT
# 77 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 78 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 79 "data/maps/Zone6A/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone6A/scripts.pory"
	waitse
# 82 "data/maps/Zone6A/scripts.pory"
	delay 16
# 83 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 84 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 85 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 86 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_12, MSGBOX_DEFAULT
# 87 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_13, MSGBOX_DEFAULT
# 88 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 89 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 90 "data/maps/Zone6A/scripts.pory"
	playse SE_PIN
# 91 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 92 "data/maps/Zone6A/scripts.pory"
	waitse
# 93 "data/maps/Zone6A/scripts.pory"
	delay 16
# 94 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_14, MSGBOX_DEFAULT
# 95 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_15, MSGBOX_DEFAULT
# 96 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 97 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 98 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 99 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_16, MSGBOX_DEFAULT
# 100 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_17, MSGBOX_DEFAULT
# 101 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_18, MSGBOX_DEFAULT
# 102 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_19, MSGBOX_DEFAULT
# 103 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_20, MSGBOX_DEFAULT
# 104 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_21, MSGBOX_DEFAULT
# 105 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_22
# 106 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_6
# 107 "data/maps/Zone6A/scripts.pory"
	setvar VAR_ZONE_6_STATE, 1
# 108 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Zone6A_Movement_Coby_WalkDown
# 109 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Zone6A_Movement_Zack_WalkDown
# 110 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 111 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_LeviathanBattle_2:
# 34 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_1
# 35 "data/maps/Zone6A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 36 "data/maps/Zone6A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 37 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 38 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_LeviathanBattle_5:
# 45 "data/maps/Zone6A/scripts.pory"
	setweather WEATHER_RAIN
# 46 "data/maps/Zone6A/scripts.pory"
	doweather
# 47 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_3
	goto Zone6A_EventScript_LeviathanBattle_4

Zone6A_EventScript_LeviathanBattle_10:
# 68 "data/maps/Zone6A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE, Zone6A_Text_Leviathan6Defeat
# 69 "data/maps/Zone6A/scripts.pory"
	resetweather
# 70 "data/maps/Zone6A/scripts.pory"
	doweather
	goto Zone6A_EventScript_LeviathanBattle_9


# 115 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Mina_MoveOutOfWay:
# 116 "data/maps/Zone6A/scripts.pory"
	walk_right
# 116 "data/maps/Zone6A/scripts.pory"
	walk_right
# 117 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 120 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Coby_WalkUp:
# 121 "data/maps/Zone6A/scripts.pory"
	walk_up
# 121 "data/maps/Zone6A/scripts.pory"
	walk_up
# 121 "data/maps/Zone6A/scripts.pory"
	walk_up
# 122 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 125 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Zack_WalkUp:
# 126 "data/maps/Zone6A/scripts.pory"
	walk_left
# 127 "data/maps/Zone6A/scripts.pory"
	walk_up
# 127 "data/maps/Zone6A/scripts.pory"
	walk_up
# 128 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 131 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Coby_WalkDown:
# 132 "data/maps/Zone6A/scripts.pory"
	walk_down
# 132 "data/maps/Zone6A/scripts.pory"
	walk_down
# 132 "data/maps/Zone6A/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Zack_WalkDown:
# 136 "data/maps/Zone6A/scripts.pory"
	walk_down
# 136 "data/maps/Zone6A/scripts.pory"
	walk_down
# 137 "data/maps/Zone6A/scripts.pory"
	walk_right
# 138 "data/maps/Zone6A/scripts.pory"
	face_down
	step_end

Zone6A_EventScript_Mina::
# 146 "data/maps/Zone6A/scripts.pory"
	lock
# 147 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 148 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Mina_Text_0
# 149 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_Coby::
# 154 "data/maps/Zone6A/scripts.pory"
	lock
# 155 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 156 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Coby_Text_0
# 157 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_Zack::
# 162 "data/maps/Zone6A/scripts.pory"
	lock
# 163 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 164 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Zack_Text_0
# 165 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_TradeDelibird::
# 170 "data/maps/Zone6A/scripts.pory"
	lock
# 171 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ZONE6A_TRADED_DELIBIRD, Zone6A_EventScript_TradeDelibird_2
# 177 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_1
# 178 "data/maps/Zone6A/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 179 "data/maps/Zone6A/scripts.pory"
	playse SE_PIN
# 180 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 181 "data/maps/Zone6A/scripts.pory"
	waitse
# 182 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 183 "data/maps/Zone6A/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 184 "data/maps/Zone6A/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 185 "data/maps/Zone6A/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 186 "data/maps/Zone6A/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 187 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_2, MSGBOX_YESNO
# 188 "data/maps/Zone6A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone6A_EventScript_TradeDelibird_5
# 193 "data/maps/Zone6A/scripts.pory"
	special ChoosePartyMon
# 194 "data/maps/Zone6A/scripts.pory"
	waitstate
# 195 "data/maps/Zone6A/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 196 "data/maps/Zone6A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone6A_EventScript_TradeDelibird_8
# 202 "data/maps/Zone6A/scripts.pory"
	specialvar VAR_RESULT, IsPokemonFainted
# 203 "data/maps/Zone6A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone6A_EventScript_TradeDelibird_11
# 208 "data/maps/Zone6A/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 209 "data/maps/Zone6A/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 210 "data/maps/Zone6A/scripts.pory"
	special CreateInGameTradePokemon
# 211 "data/maps/Zone6A/scripts.pory"
	special DoInGameTradeScene
# 212 "data/maps/Zone6A/scripts.pory"
	waitstate
# 213 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_5, MSGBOX_DEFAULT
# 214 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ZONE6A_TRADED_DELIBIRD
# 215 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_TradeDelibird_2:
# 172 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 173 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_0
# 174 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_TradeDelibird_5:
# 189 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_3, MSGBOX_DEFAULT
# 190 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_TradeDelibird_8:
# 197 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_3, MSGBOX_DEFAULT
# 198 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_TradeDelibird_11:
# 204 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_TradeDelibird_Text_4
# 205 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_NetBall::
# 220 "data/maps/Zone6A/scripts.pory"
	lock
# 221 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_EventScript_NetBall_2
# 226 "data/maps/Zone6A/scripts.pory"
	waitse
# 227 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 228 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 229 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NET_BALL
# 230 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 231 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NET_BALL, 1
# 232 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_NetBall_2:
# 222 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 223 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_Gems::
# 237 "data/maps/Zone6A/scripts.pory"
	lock
# 238 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_GEMS, Zone6A_EventScript_Gems_2
# 243 "data/maps/Zone6A/scripts.pory"
	waitse
# 244 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 245 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 246 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_GEMS
# 247 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 248 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_WATER_GEM
# 249 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_FLYING_GEM
# 250 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_ICE_GEM
# 251 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_Gems_2:
# 239 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 240 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_NestBall::
# 256 "data/maps/Zone6A/scripts.pory"
	lock
# 257 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_EventScript_NestBall_2
# 262 "data/maps/Zone6A/scripts.pory"
	waitse
# 263 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 264 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 265 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NEST_BALL
# 266 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 267 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NEST_BALL, 1
# 268 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_NestBall_2:
# 258 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 259 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_TMDrainingKiss::
# 273 "data/maps/Zone6A/scripts.pory"
	lock
# 274 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_TM_DRAINING_KISS, Zone6A_EventScript_TMDrainingKiss_2
# 279 "data/maps/Zone6A/scripts.pory"
	waitse
# 280 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 281 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 282 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_TM_DRAINING_KISS
# 283 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 284 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_TM_DRAINING_KISS
# 285 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_TMDrainingKiss_2:
# 275 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 276 "data/maps/Zone6A/scripts.pory"
	release
	end


# 289 "data/maps/Zone6A/scripts.pory"

# 290 "data/maps/Zone6A/scripts.pory"

# 291 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Gilbert::
# 292 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GILBERT, Zone6A_Text_GilbertIntro, Zone6A_Text_GilbertDefeat
# 293 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Zone6A/scripts.pory"
	end
# 295 "data/maps/Zone6A/scripts.pory"

# 296 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertIntro:
# 297 "data/maps/Zone6A/scripts.pory"
	.string "You made me miss my catch!$"
# 298 "data/maps/Zone6A/scripts.pory"

# 299 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertDefeat:
# 300 "data/maps/Zone6A/scripts.pory"
	.string "Argh, there was no catch!\n"
# 301 "data/maps/Zone6A/scripts.pory"
	.string "I'm just frustrated!$"
# 302 "data/maps/Zone6A/scripts.pory"

# 303 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertPostBattle:
# 304 "data/maps/Zone6A/scripts.pory"
	.string "Sorry for taking out my fishing\n"
# 305 "data/maps/Zone6A/scripts.pory"
	.string "frustration out on you.$"
# 306 "data/maps/Zone6A/scripts.pory"

# 307 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Melanie::
# 308 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
# 309 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
# 310 "data/maps/Zone6A/scripts.pory"
	end
# 311 "data/maps/Zone6A/scripts.pory"

# 312 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieIntro:
# 313 "data/maps/Zone6A/scripts.pory"
	.string "Hey, have you ever ridden a horse\n"
# 314 "data/maps/Zone6A/scripts.pory"
	.string "before?$"
# 315 "data/maps/Zone6A/scripts.pory"

# 316 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieDefeat:
# 317 "data/maps/Zone6A/scripts.pory"
	.string "You should try horseback riding\n"
# 318 "data/maps/Zone6A/scripts.pory"
	.string "sometime!$"
# 319 "data/maps/Zone6A/scripts.pory"

# 320 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelaniePostBattle:
# 321 "data/maps/Zone6A/scripts.pory"
	.string "Now that I think about it,\n"
# 322 "data/maps/Zone6A/scripts.pory"
	.string "what even is a horse?\p"
# 323 "data/maps/Zone6A/scripts.pory"
	.string "I mean, we call them horse Pokémon,\n"
# 324 "data/maps/Zone6A/scripts.pory"
	.string "but like, what is a horse?$"
# 325 "data/maps/Zone6A/scripts.pory"

# 326 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Constance::
# 327 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
# 328 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Zone6A/scripts.pory"
	end
# 330 "data/maps/Zone6A/scripts.pory"

# 331 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceIntro:
# 332 "data/maps/Zone6A/scripts.pory"
	.string "Want to join my picnic?$"
# 333 "data/maps/Zone6A/scripts.pory"

# 334 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceDefeat:
# 335 "data/maps/Zone6A/scripts.pory"
	.string "Oops, I forgot to pack food!$"
# 336 "data/maps/Zone6A/scripts.pory"

# 337 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstancePostBattle:
# 338 "data/maps/Zone6A/scripts.pory"
	.string "I can look for some Berries or\n"
# 339 "data/maps/Zone6A/scripts.pory"
	.string "something…$"
# 340 "data/maps/Zone6A/scripts.pory"

# 341 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Frank::
# 342 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
# 343 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
# 344 "data/maps/Zone6A/scripts.pory"
	end
# 345 "data/maps/Zone6A/scripts.pory"

# 346 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankIntro:
# 347 "data/maps/Zone6A/scripts.pory"
	.string "The beach is full of surprises!$"
# 348 "data/maps/Zone6A/scripts.pory"

# 349 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankDefeat:
# 350 "data/maps/Zone6A/scripts.pory"
	.string "This time, I was surprised by you!$"
# 351 "data/maps/Zone6A/scripts.pory"

# 352 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankPostBattle:
# 353 "data/maps/Zone6A/scripts.pory"
	.string "Your skills are astounding!$"
# 354 "data/maps/Zone6A/scripts.pory"

# 355 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Dudley::
# 356 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DUDLEY, Zone6A_Text_DudleyIntro, Zone6A_Text_DudleyDefeat
# 357 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Zone6A/scripts.pory"
	end
# 359 "data/maps/Zone6A/scripts.pory"

# 360 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyIntro:
# 361 "data/maps/Zone6A/scripts.pory"
	.string "Birds of a feather flock together!$"
# 362 "data/maps/Zone6A/scripts.pory"

# 363 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyDefeat:
# 364 "data/maps/Zone6A/scripts.pory"
	.string "This bird has been sent crashing\n"
# 365 "data/maps/Zone6A/scripts.pory"
	.string "down!$"
# 366 "data/maps/Zone6A/scripts.pory"

# 367 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyPostBattle:
# 368 "data/maps/Zone6A/scripts.pory"
	.string "Oh, how the mighty have fallen!$"
# 369 "data/maps/Zone6A/scripts.pory"

# 370 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Daisy::
# 371 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DAISY, Zone6A_Text_DaisyIntro, Zone6A_Text_DaisyDefeat
# 372 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Zone6A/scripts.pory"
	end
# 374 "data/maps/Zone6A/scripts.pory"

# 375 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyIntro:
# 376 "data/maps/Zone6A/scripts.pory"
	.string "These Pokémon are just so cute!$"
# 377 "data/maps/Zone6A/scripts.pory"

# 378 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyDefeat:
# 379 "data/maps/Zone6A/scripts.pory"
	.string "They're not too great in battle,\n"
# 380 "data/maps/Zone6A/scripts.pory"
	.string "though.$"
# 381 "data/maps/Zone6A/scripts.pory"

# 382 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyPostBattle:
# 383 "data/maps/Zone6A/scripts.pory"
	.string "I guess these little ones need more\n"
# 384 "data/maps/Zone6A/scripts.pory"
	.string "time to get stronger and evolve!$"
# 385 "data/maps/Zone6A/scripts.pory"

# 386 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_VicandDell::
# 387 "data/maps/Zone6A/scripts.pory"
	trainerbattle_double TRAINER_PBL_VIC_AND_DELL, Zone6A_Text_VicandDellIntro, Zone6A_Text_VicandDellDefeat, gText_NotEnoughMons
# 388 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_VicandDellPostBattle, MSGBOX_DEFAULT
# 389 "data/maps/Zone6A/scripts.pory"
	release
# 390 "data/maps/Zone6A/scripts.pory"
	end
# 391 "data/maps/Zone6A/scripts.pory"

# 392 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellIntro:
# 393 "data/maps/Zone6A/scripts.pory"
	.string "Vic: We're strong!\p"
# 394 "data/maps/Zone6A/scripts.pory"
	.string "Dell: We work together!$"
# 395 "data/maps/Zone6A/scripts.pory"

# 396 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellDefeat:
# 397 "data/maps/Zone6A/scripts.pory"
	.string "Dell: Aww!\p"
# 398 "data/maps/Zone6A/scripts.pory"
	.string "Vic: Aww!$"
# 399 "data/maps/Zone6A/scripts.pory"

# 400 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellPostBattle:
# 401 "data/maps/Zone6A/scripts.pory"
	.string "Vic: Losing has its pluses!\p"
# 402 "data/maps/Zone6A/scripts.pory"
	.string "Dell: And its minuses!$"

Zone6A_EventScript_LeviathanBattle_Text_0:
# 32 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Woah!\p"
	.string "You're trying to sneak past me to get\n"
	.string "to my family's treasures?\p"
	.string "No can do!\p"
	.string "You really want to be taught a lesson?$"

Zone6A_EventScript_LeviathanBattle_Text_1:
# 34 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: That's what I thought!$"

Zone6A_EventScript_LeviathanBattle_Text_2:
# 42 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Who do you think you are?$"

Zone6A_EventScript_LeviathanBattle_Text_3:
# 47 "data/maps/Zone6A/scripts.pory"
	.string "It suddenly began to rain!$"

Zone6A_EventScript_LeviathanBattle_Text_4:
# 50 "data/maps/Zone6A/scripts.pory"
	.string "Rain, rain, go away…$"

Zone6A_EventScript_LeviathanBattle_Text_5:
# 51 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Uh, sorry I was so angry at you.\p"
	.string "I didn't mean to… You're just passing\n"
	.string "by. Sorry!$"

Zone6A_EventScript_LeviathanBattle_Text_6:
# 63 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Hey! You're messing with my little\n"
	.string "sister!\p"
	.string "I'll teach you a lesson!$"

Zone6A_EventScript_LeviathanBattle_Text_7:
# 64 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: No one messes with our family!\p"
	.string "Let's show 'em, sis!$"

Zone6A_EventScript_LeviathanBattle_Text_8:
# 65 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Wait! It isn't their fault!$"

Zone6A_EventScript_LeviathanBattle_Text_9:
# 66 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: Combined family attack!$"

Zone6A_EventScript_LeviathanBattle_Text_10:
# 75 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Whew! You're a tough nut to crack.\n"
	.string "But we'll crush you for messing with our\l"
	.string "family!$"

Zone6A_EventScript_LeviathanBattle_Text_11:
# 76 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Wait! Just listen!$"

Zone6A_EventScript_LeviathanBattle_Text_12:
# 86 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: Shouldn't we go after this\n"
	.string "person, Mina? They're after the\l"
	.string "treasure!$"

Zone6A_EventScript_LeviathanBattle_Text_13:
# 87 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: I've been trying to tell you,\n"
	.string "they've just been trying to pass\l"
	.string "through!$"

Zone6A_EventScript_LeviathanBattle_Text_14:
# 94 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Oh. Uh…$"

Zone6A_EventScript_LeviathanBattle_Text_15:
# 95 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: This is awkward.$"

Zone6A_EventScript_LeviathanBattle_Text_16:
# 99 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: We're, um…$"

Zone6A_EventScript_LeviathanBattle_Text_17:
# 100 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: We're very sorry for antagonizing\n"
	.string "you. Really, very sorry.$"

Zone6A_EventScript_LeviathanBattle_Text_18:
# 101 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: C'mon, guys, this isn't enough. We\n"
	.string "were so mean to them…$"

Zone6A_EventScript_LeviathanBattle_Text_19:
# 102 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: Maybe we can share the treasure?\p"
	.string "We got most of it out of the sand\n"
	.string "already anyways.$"

Zone6A_EventScript_LeviathanBattle_Text_20:
# 103 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Good idea.\p"
	.string "You can have what's left of the\n"
	.string "treasure. We've already gotten our fair\l"
	.string "share.$"

Zone6A_EventScript_LeviathanBattle_Text_21:
# 104 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: We're really sorry, again. We didn't\n"
	.string "mean to be so mean.$"

Zone6A_EventScript_LeviathanBattle_Text_22:
# 105 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Well, you live and you learn.$"

Zone6A_EventScript_Mina_Text_0:
# 148 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: I'm here guarding some of the\n"
	.string "treasures our family dug up!$"

Zone6A_EventScript_Coby_Text_0:
# 156 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: I'm in charge of my younger\n"
	.string "siblings, though they get on my temper\l"
	.string "sometimes!$"

Zone6A_EventScript_Zack_Text_0:
# 164 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: The tubing life is really sweet!$"

Zone6A_EventScript_TradeDelibird_Text_0:
# 173 "data/maps/Zone6A/scripts.pory"
	.string "My Delibird is stronger than other\n"
	.string "Delibird, but it still stinks!$"

Zone6A_EventScript_TradeDelibird_Text_1:
# 177 "data/maps/Zone6A/scripts.pory"
	.string "Please, oh please, won't anyone trade me\n"
	.string "a better Pokémon?$"

Zone6A_EventScript_TradeDelibird_Text_2:
# 187 "data/maps/Zone6A/scripts.pory"
	.string "Please! You've got to trade me! I'll take\n"
	.string "anything! Delibird is the worst Pokémon\l"
	.string "ever!$"

Zone6A_EventScript_TradeDelibird_Text_3:
# 189 "data/maps/Zone6A/scripts.pory"
	.string "Please! I can't win any battles with a\n"
	.string "Delibird!$"

Zone6A_EventScript_TradeDelibird_Text_4:
# 204 "data/maps/Zone6A/scripts.pory"
	.string "Hey! Don't trade me a fainted Pokémon!$"

Zone6A_EventScript_TradeDelibird_Text_5:
# 213 "data/maps/Zone6A/scripts.pory"
	.string "Thank you! Now I've got a real Pokémon\n"
	.string "to use!$"

Zone6A_Text_Leviathan6Defeat::
# 141 "data/maps/Zone6A/scripts.pory"
	.string "Our family loses together!$"
