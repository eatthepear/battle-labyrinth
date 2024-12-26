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
	fadeoutbgm 1
# 26 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 27 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Leviathan8Intro
# 28 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 29 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone8D_EventScript_LeviathanBattle_11
# 29 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone8D_EventScript_LeviathanBattle_11
# 32 "data/maps/Zone8D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ALISTAIR_LEVIATHAN_8, Zone8D_Text_Leviathan8Defeat
Zone8D_EventScript_LeviathanBattle_10:
# 34 "data/maps/Zone8D/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 35 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/Zone8D/scripts.pory"
	giveitem ITEM_TM_THIEF
# 37 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_LeviathanBattle_Text_1
# 38 "data/maps/Zone8D/scripts.pory"
	closemessage
# 39 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 40 "data/maps/Zone8D/scripts.pory"
	removeobject 2
# 41 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_8_STATE, 1
# 42 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_8
# 43 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 44 "data/maps/Zone8D/scripts.pory"
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
# 30 "data/maps/Zone8D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE, Zone8D_Text_Leviathan8Defeat
	goto Zone8D_EventScript_LeviathanBattle_10


Zone8D_EventScript_LeviathanBattle_Text_0:
# 35 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: Ugh. I can't believe I lost\n"
	.string "this one.\p"
	.string "I guess I owe you a little something for\n"
	.string "winning.$"

Zone8D_EventScript_LeviathanBattle_Text_1:
# 37 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: It's a tough world out there.\n"
	.string "Watch your step.$"

Zone8D_Text_Leviathan8Intro::
# 48 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Alistair{COLOR DARK_GRAY}: Well, well, well. You're almost\n"
	.string "out, but you have another challenge to\l"
	.string "face: me.\p"
	.string "Ready or not, here I come.$"

Zone8D_Text_Leviathan8Defeat::
# 52 "data/maps/Zone8D/scripts.pory"
	.string "Beaten by a chump like you!$"
