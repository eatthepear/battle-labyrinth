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
	giveitem ITEM_TM08
# 102 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_18, MSGBOX_DEFAULT
# 103 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_19, MSGBOX_DEFAULT
# 104 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_20, MSGBOX_DEFAULT
# 105 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_21, MSGBOX_DEFAULT
# 106 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_22
# 107 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_6
# 108 "data/maps/Zone6A/scripts.pory"
	setvar VAR_ZONE_6_STATE, 1
# 109 "data/maps/Zone6A/scripts.pory"
	applymovement 2, Zone6A_Movement_Coby_WalkDown
# 110 "data/maps/Zone6A/scripts.pory"
	applymovement 3, Zone6A_Movement_Zack_WalkDown
# 111 "data/maps/Zone6A/scripts.pory"
	waitmovement 0
# 112 "data/maps/Zone6A/scripts.pory"
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
	trainerbattle_no_intro TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_BRUTAL, Zone6A_Text_Leviathan6Defeat
# 69 "data/maps/Zone6A/scripts.pory"
	resetweather
# 70 "data/maps/Zone6A/scripts.pory"
	doweather
	goto Zone6A_EventScript_LeviathanBattle_9


# 116 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Mina_MoveOutOfWay:
# 117 "data/maps/Zone6A/scripts.pory"
	walk_right
# 117 "data/maps/Zone6A/scripts.pory"
	walk_right
# 118 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 121 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Coby_WalkUp:
# 122 "data/maps/Zone6A/scripts.pory"
	walk_up
# 122 "data/maps/Zone6A/scripts.pory"
	walk_up
# 122 "data/maps/Zone6A/scripts.pory"
	walk_up
# 123 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 126 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Zack_WalkUp:
# 127 "data/maps/Zone6A/scripts.pory"
	walk_left
# 128 "data/maps/Zone6A/scripts.pory"
	walk_up
# 128 "data/maps/Zone6A/scripts.pory"
	walk_up
# 129 "data/maps/Zone6A/scripts.pory"
	face_left
	step_end

# 132 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Coby_WalkDown:
# 133 "data/maps/Zone6A/scripts.pory"
	walk_down
# 133 "data/maps/Zone6A/scripts.pory"
	walk_down
# 133 "data/maps/Zone6A/scripts.pory"
	walk_down
	step_end

# 136 "data/maps/Zone6A/scripts.pory"
Zone6A_Movement_Zack_WalkDown:
# 137 "data/maps/Zone6A/scripts.pory"
	walk_down
# 137 "data/maps/Zone6A/scripts.pory"
	walk_down
# 138 "data/maps/Zone6A/scripts.pory"
	walk_right
# 139 "data/maps/Zone6A/scripts.pory"
	face_down
	step_end

Zone6A_EventScript_Mina::
# 147 "data/maps/Zone6A/scripts.pory"
	lock
# 148 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 149 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Mina_Text_0
# 150 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_Coby::
# 155 "data/maps/Zone6A/scripts.pory"
	lock
# 156 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 157 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Coby_Text_0
# 158 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_Zack::
# 163 "data/maps/Zone6A/scripts.pory"
	lock
# 164 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 165 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_Zack_Text_0
# 166 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemNetBall::
# 171 "data/maps/Zone6A/scripts.pory"
	lock
# 172 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_EventScript_ItemNetBall_2
# 177 "data/maps/Zone6A/scripts.pory"
	waitse
# 178 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 179 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 180 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NET_BALL
# 181 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 182 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NET_BALL, 1
# 183 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemNetBall_2:
# 173 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 174 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemGems::
# 188 "data/maps/Zone6A/scripts.pory"
	lock
# 189 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_GEMS, Zone6A_EventScript_ItemGems_2
# 194 "data/maps/Zone6A/scripts.pory"
	waitse
# 195 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 196 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 197 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_GEMS
# 198 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 199 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_WATER_GEM
# 200 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_FLYING_GEM
# 201 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_ICE_GEM
# 202 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemGems_2:
# 190 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 191 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemNestBall::
# 207 "data/maps/Zone6A/scripts.pory"
	lock
# 208 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_EventScript_ItemNestBall_2
# 213 "data/maps/Zone6A/scripts.pory"
	waitse
# 214 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 215 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 216 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NEST_BALL
# 217 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 218 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NEST_BALL, 1
# 219 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemNestBall_2:
# 209 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 210 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemTMDrainingKiss::
# 224 "data/maps/Zone6A/scripts.pory"
	lock
# 225 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_TM_DRAINING_KISS, Zone6A_EventScript_ItemTMDrainingKiss_2
# 230 "data/maps/Zone6A/scripts.pory"
	waitse
# 231 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 232 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 233 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_TM_DRAINING_KISS
# 234 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 235 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_TM_DRAINING_KISS
# 236 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemTMDrainingKiss_2:
# 226 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 227 "data/maps/Zone6A/scripts.pory"
	release
	end


# 240 "data/maps/Zone6A/scripts.pory"

# 241 "data/maps/Zone6A/scripts.pory"

# 242 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Gilbert::
# 243 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GILBERT, Zone6A_Text_GilbertIntro, Zone6A_Text_GilbertDefeat
# 244 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Zone6A/scripts.pory"
	end
# 246 "data/maps/Zone6A/scripts.pory"

# 247 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertIntro:
# 248 "data/maps/Zone6A/scripts.pory"
	.string "You made me miss my catch!$"
# 249 "data/maps/Zone6A/scripts.pory"

# 250 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertDefeat:
# 251 "data/maps/Zone6A/scripts.pory"
	.string "Argh, there was no catch!\n"
# 252 "data/maps/Zone6A/scripts.pory"
	.string "I'm just frustrated!$"
# 253 "data/maps/Zone6A/scripts.pory"

# 254 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_GilbertPostBattle:
# 255 "data/maps/Zone6A/scripts.pory"
	.string "Sorry for taking out my fishing\n"
# 256 "data/maps/Zone6A/scripts.pory"
	.string "frustration out on you.$"
# 257 "data/maps/Zone6A/scripts.pory"

# 258 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Melanie::
# 259 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
# 260 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Zone6A/scripts.pory"
	end
# 262 "data/maps/Zone6A/scripts.pory"

# 263 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieIntro:
# 264 "data/maps/Zone6A/scripts.pory"
	.string "Hey, have you ever ridden a horse\n"
# 265 "data/maps/Zone6A/scripts.pory"
	.string "before?$"
# 266 "data/maps/Zone6A/scripts.pory"

# 267 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieDefeat:
# 268 "data/maps/Zone6A/scripts.pory"
	.string "You should try horseback riding\n"
# 269 "data/maps/Zone6A/scripts.pory"
	.string "sometime!$"
# 270 "data/maps/Zone6A/scripts.pory"

# 271 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelaniePostBattle:
# 272 "data/maps/Zone6A/scripts.pory"
	.string "Now that I think about it,\n"
# 273 "data/maps/Zone6A/scripts.pory"
	.string "what even is a horse?\p"
# 274 "data/maps/Zone6A/scripts.pory"
	.string "I mean, we call them horse Pokémon,\n"
# 275 "data/maps/Zone6A/scripts.pory"
	.string "but like, what is a horse?$"
# 276 "data/maps/Zone6A/scripts.pory"

# 277 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Constance::
# 278 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
# 279 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Zone6A/scripts.pory"
	end
# 281 "data/maps/Zone6A/scripts.pory"

# 282 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceIntro:
# 283 "data/maps/Zone6A/scripts.pory"
	.string "Want to join my picnic?$"
# 284 "data/maps/Zone6A/scripts.pory"

# 285 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceDefeat:
# 286 "data/maps/Zone6A/scripts.pory"
	.string "Oops, I forgot to pack food!$"
# 287 "data/maps/Zone6A/scripts.pory"

# 288 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstancePostBattle:
# 289 "data/maps/Zone6A/scripts.pory"
	.string "I can look for some Berries or\n"
# 290 "data/maps/Zone6A/scripts.pory"
	.string "something…$"
# 291 "data/maps/Zone6A/scripts.pory"

# 292 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Frank::
# 293 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
# 294 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Zone6A/scripts.pory"
	end
# 296 "data/maps/Zone6A/scripts.pory"

# 297 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankIntro:
# 298 "data/maps/Zone6A/scripts.pory"
	.string "The beach is full of surprises!$"
# 299 "data/maps/Zone6A/scripts.pory"

# 300 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankDefeat:
# 301 "data/maps/Zone6A/scripts.pory"
	.string "This time, I was surprised by you!$"
# 302 "data/maps/Zone6A/scripts.pory"

# 303 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankPostBattle:
# 304 "data/maps/Zone6A/scripts.pory"
	.string "Your skills are astounding!$"
# 305 "data/maps/Zone6A/scripts.pory"

# 306 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Dudley::
# 307 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DUDLEY, Zone6A_Text_DudleyIntro, Zone6A_Text_DudleyDefeat
# 308 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Zone6A/scripts.pory"
	end
# 310 "data/maps/Zone6A/scripts.pory"

# 311 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyIntro:
# 312 "data/maps/Zone6A/scripts.pory"
	.string "Birds of a feather flock together!$"
# 313 "data/maps/Zone6A/scripts.pory"

# 314 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyDefeat:
# 315 "data/maps/Zone6A/scripts.pory"
	.string "This bird has been sent crashing\n"
# 316 "data/maps/Zone6A/scripts.pory"
	.string "down!$"
# 317 "data/maps/Zone6A/scripts.pory"

# 318 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyPostBattle:
# 319 "data/maps/Zone6A/scripts.pory"
	.string "Oh, how the mighty have fallen!$"
# 320 "data/maps/Zone6A/scripts.pory"

# 321 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Daisy::
# 322 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DAISY, Zone6A_Text_DaisyIntro, Zone6A_Text_DaisyDefeat
# 323 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Zone6A/scripts.pory"
	end
# 325 "data/maps/Zone6A/scripts.pory"

# 326 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyIntro:
# 327 "data/maps/Zone6A/scripts.pory"
	.string "These Pokémon are just so cute!$"
# 328 "data/maps/Zone6A/scripts.pory"

# 329 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyDefeat:
# 330 "data/maps/Zone6A/scripts.pory"
	.string "They're not too great in battle,\n"
# 331 "data/maps/Zone6A/scripts.pory"
	.string "though.$"
# 332 "data/maps/Zone6A/scripts.pory"

# 333 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyPostBattle:
# 334 "data/maps/Zone6A/scripts.pory"
	.string "I guess these little ones need more\n"
# 335 "data/maps/Zone6A/scripts.pory"
	.string "time to get stronger and evolve!$"
# 336 "data/maps/Zone6A/scripts.pory"

# 337 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_VicandDell::
# 338 "data/maps/Zone6A/scripts.pory"
	trainerbattle_double TRAINER_PBL_VIC_AND_DELL, Zone6A_Text_VicandDellIntro, Zone6A_Text_VicandDellDefeat, gText_NotEnoughMons
# 339 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_VicandDellPostBattle, MSGBOX_DEFAULT
# 340 "data/maps/Zone6A/scripts.pory"
	release
# 341 "data/maps/Zone6A/scripts.pory"
	end
# 342 "data/maps/Zone6A/scripts.pory"

# 343 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellIntro:
# 344 "data/maps/Zone6A/scripts.pory"
	.string "Vic: We're strong!\p"
# 345 "data/maps/Zone6A/scripts.pory"
	.string "Dell: We work together!$"
# 346 "data/maps/Zone6A/scripts.pory"

# 347 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellDefeat:
# 348 "data/maps/Zone6A/scripts.pory"
	.string "Dell: Aww!\p"
# 349 "data/maps/Zone6A/scripts.pory"
	.string "Vic: Aww!$"
# 350 "data/maps/Zone6A/scripts.pory"

# 351 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_VicandDellPostBattle:
# 352 "data/maps/Zone6A/scripts.pory"
	.string "Vic: Losing has its pluses!\p"
# 353 "data/maps/Zone6A/scripts.pory"
	.string "Dell: And its minuses!$"
# 354 "data/maps/Zone6A/scripts.pory"

# 355 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Sign::
# 356 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_Sign, MSGBOX_SIGN
# 357 "data/maps/Zone6A/scripts.pory"
	end
# 358 "data/maps/Zone6A/scripts.pory"

# 359 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_Sign:
# 360 "data/maps/Zone6A/scripts.pory"
	.string "Trainer Tips\p"
# 361 "data/maps/Zone6A/scripts.pory"
	.string "You can sort items in the Bag\n"
# 362 "data/maps/Zone6A/scripts.pory"
	.string "using {START_BUTTON}.$"

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
	.string "you. Please take this gift as\l"
	.string "compensation.$"

Zone6A_EventScript_LeviathanBattle_Text_18:
# 102 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: C'mon, guys, this isn't enough. We\n"
	.string "were so mean to them…$"

Zone6A_EventScript_LeviathanBattle_Text_19:
# 103 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: Maybe we can share the treasure?\p"
	.string "We got most of it out of the sand\n"
	.string "already anyways.$"

Zone6A_EventScript_LeviathanBattle_Text_20:
# 104 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Good idea.\p"
	.string "You can have what's left of the\n"
	.string "treasure. We've already gotten our fair\l"
	.string "share.$"

Zone6A_EventScript_LeviathanBattle_Text_21:
# 105 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: We're really sorry, again. We didn't\n"
	.string "mean to be so mean.$"

Zone6A_EventScript_LeviathanBattle_Text_22:
# 106 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: Well, you live and you learn.$"

Zone6A_EventScript_Mina_Text_0:
# 149 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: I'm here guarding some of the\n"
	.string "treasures our family dug up!$"

Zone6A_EventScript_Coby_Text_0:
# 157 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Coby{COLOR DARK_GRAY}: I'm in charge of my younger\n"
	.string "siblings, though they get on my temper\l"
	.string "sometimes!$"

Zone6A_EventScript_Zack_Text_0:
# 165 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Zack{COLOR DARK_GRAY}: The tubing life is really sweet!$"

Zone6A_Text_Leviathan6Defeat::
# 142 "data/maps/Zone6A/scripts.pory"
	.string "Our family loses together!$"
