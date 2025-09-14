Zone20B_MapScripts::
	.byte 0


Zone20B_EventScript_InitiateBattle::
# 4 "data/maps/Zone20B/scripts.pory"
	lockall
# 5 "data/maps/Zone20B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 6 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 7 "data/maps/Zone20B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 8 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 9 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/Zone20B/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 13 "data/maps/Zone20B/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 14 "data/maps/Zone20B/scripts.pory"
	playse SE_PIN
# 15 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 16 "data/maps/Zone20B/scripts.pory"
	waitse
# 17 "data/maps/Zone20B/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 18 "data/maps/Zone20B/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 19 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/Zone20B/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 23 "data/maps/Zone20B/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 24 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 27 "data/maps/Zone20B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 28 "data/maps/Zone20B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone20B_EventScript_InitiateBattle_2
# 28 "data/maps/Zone20B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone20B_EventScript_InitiateBattle_2
Zone20B_EventScript_InitiateBattle_1:
# 35 "data/maps/Zone20B/scripts.pory"
	setflag FLAG_SHOULD_1V2
# 36 "data/maps/Zone20B/scripts.pory"
	dotrainerbattle
# 37 "data/maps/Zone20B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 38 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/Zone20B/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 42 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Zone20B/scripts.pory"
	msgbox Zone20B_EventScript_InitiateBattle_Text_0
# 44 "data/maps/Zone20B/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 45 "data/maps/Zone20B/scripts.pory"
	applymovement 1, Zone20B_Movement_Leave
# 46 "data/maps/Zone20B/scripts.pory"
	waitmovement 2
# 47 "data/maps/Zone20B/scripts.pory"
	applymovement 2, Zone20B_Movement_Leave
# 48 "data/maps/Zone20B/scripts.pory"
	waitmovement 0
# 49 "data/maps/Zone20B/scripts.pory"
	setflag FLAG_HIDE_ZONE20B_WORKERS
# 50 "data/maps/Zone20B/scripts.pory"
	removeobject 1
# 51 "data/maps/Zone20B/scripts.pory"
	removeobject 2
# 52 "data/maps/Zone20B/scripts.pory"
	setvar VAR_ZONE_20_STATE, 1
# 53 "data/maps/Zone20B/scripts.pory"
	releaseall
	end

Zone20B_EventScript_InitiateBattle_2:
	goto Zone20B_EventScript_InitiateBattle_1


# 57 "data/maps/Zone20B/scripts.pory"
Zone20B_Movement_Leave:
# 58 "data/maps/Zone20B/scripts.pory"
	walk_left
# 58 "data/maps/Zone20B/scripts.pory"
	walk_left
# 58 "data/maps/Zone20B/scripts.pory"
	walk_left
# 59 "data/maps/Zone20B/scripts.pory"
	walk_down
# 60 "data/maps/Zone20B/scripts.pory"
	walk_left
# 60 "data/maps/Zone20B/scripts.pory"
	walk_left
# 61 "data/maps/Zone20B/scripts.pory"
	walk_down
# 62 "data/maps/Zone20B/scripts.pory"
	walk_left
# 62 "data/maps/Zone20B/scripts.pory"
	walk_left
# 63 "data/maps/Zone20B/scripts.pory"
	walk_down
# 64 "data/maps/Zone20B/scripts.pory"
	walk_left
# 65 "data/maps/Zone20B/scripts.pory"
	walk_down
# 65 "data/maps/Zone20B/scripts.pory"
	walk_down
# 65 "data/maps/Zone20B/scripts.pory"
	walk_down
# 65 "data/maps/Zone20B/scripts.pory"
	walk_down
	step_end

Zone20B_EventScript_InitiateBattle_Text_0:
# 9 "data/maps/Zone20B/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}:$"
