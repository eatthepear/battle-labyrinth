Zone8D_MapScripts::
	.byte 0


Zone8D_EventScript_LeviathanBattle::
# 4 "data/maps/Zone8D/scripts.pory"
	lockall
# 5 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 6 "data/maps/Zone8D/scripts.pory"
	playse SE_PIN
# 7 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 8 "data/maps/Zone8D/scripts.pory"
	waitse
# 9 "data/maps/Zone8D/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 10 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Zone8D_EventScript_LeviathanBattle_2
# 13 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq Zone8D_EventScript_LeviathanBattle_3
# 16 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq Zone8D_EventScript_LeviathanBattle_4
# 19 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Zone8D_EventScript_LeviathanBattle_5
Zone8D_EventScript_LeviathanBattle_1:
# 23 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkDown2
# 24 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
# 26 "data/maps/Zone8D/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone8D_EventScript_LeviathanBattle_11
# 50 "data/maps/Zone8D/scripts.pory"
	fadeoutbgm 1
# 51 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 52 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Leviathan8Intro
# 53 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 54 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone8D_EventScript_LeviathanBattle_14
# 54 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone8D_EventScript_LeviathanBattle_14
# 57 "data/maps/Zone8D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ALISTAIR_LEVIATHAN_8, Zone8D_Text_Leviathan8Defeat
Zone8D_EventScript_LeviathanBattle_13:
# 59 "data/maps/Zone8D/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 60 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 61 "data/maps/Zone8D/scripts.pory"
	giveitem ITEM_TM_THIEF
# 62 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_3
# 63 "data/maps/Zone8D/scripts.pory"
	closemessage
# 64 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 65 "data/maps/Zone8D/scripts.pory"
	removeobject 2
# 66 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_8_STATE, 1
# 67 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_8
# 68 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 69 "data/maps/Zone8D/scripts.pory"
	release
	end

Zone8D_EventScript_LeviathanBattle_2:
# 11 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft2
# 12 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_1

Zone8D_EventScript_LeviathanBattle_3:
# 14 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 15 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_1

Zone8D_EventScript_LeviathanBattle_4:
# 17 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 18 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_1

Zone8D_EventScript_LeviathanBattle_5:
# 20 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkRight2
# 21 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_1

Zone8D_EventScript_LeviathanBattle_11:
# 27 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 29 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Zone8D_EventScript_LeviathanBattle_20
# 33 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq Zone8D_EventScript_LeviathanBattle_21
# 36 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq Zone8D_EventScript_LeviathanBattle_22
# 39 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Zone8D_EventScript_LeviathanBattle_23
Zone8D_EventScript_LeviathanBattle_19:
# 43 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkUp2
# 44 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 45 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 46 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 47 "data/maps/Zone8D/scripts.pory"
	releaseall
	end

Zone8D_EventScript_LeviathanBattle_14:
# 55 "data/maps/Zone8D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE, Zone8D_Text_Leviathan8Defeat
	goto Zone8D_EventScript_LeviathanBattle_13

Zone8D_EventScript_LeviathanBattle_20:
# 31 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkRight2
# 32 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_19

Zone8D_EventScript_LeviathanBattle_21:
# 34 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 35 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_19

Zone8D_EventScript_LeviathanBattle_22:
# 37 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 38 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_19

Zone8D_EventScript_LeviathanBattle_23:
# 40 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft2
# 41 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_LeviathanBattle_19


Zone8D_EventScript_LeviathanBattle_Text_0:
# 25 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: Well, well, well. You're almost\n"
	.string "out, but you have another challenge to\l"
	.string "face: me.\p"
	.string "Ready to duke it out?$"

Zone8D_EventScript_LeviathanBattle_Text_1:
# 27 "data/maps/Zone8D/scripts.pory"
	.string "Well, if you're not ready, I respect it.$"

Zone8D_EventScript_LeviathanBattle_Text_2:
# 60 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: Ugh. I can't believe I lost\n"
	.string "this one.\p"
	.string "I guess I owe you a little something for\n"
	.string "winning.$"

Zone8D_EventScript_LeviathanBattle_Text_3:
# 62 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: It's a tough world out there.\n"
	.string "Watch your step.$"

Zone8D_Text_Leviathan8Intro::
# 73 "data/maps/Zone8D/scripts.pory"
	.string "Right on!$"

Zone8D_Text_Leviathan8Defeat::
# 77 "data/maps/Zone8D/scripts.pory"
	.string "Beaten by a chump like you!$"
