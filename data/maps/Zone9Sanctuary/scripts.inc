Zone9Sanctuary_MapScripts::
# 2 "data/maps/Zone9Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone9Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone9Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone9Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 9, Zone9Sanctuary_EventScript_Intro
	.2byte 0


Zone9Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone9Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone9Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone9Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone9Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone9Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone9Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone9Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone9Sanctuary/scripts.pory"
	msgbox Zone9Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone9Sanctuary/scripts.pory"
	giveitem ITEM_TM15
# 17 "data/maps/Zone9Sanctuary/scripts.pory"
	setvar VAR_ZONE, 10
# 18 "data/maps/Zone9Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 19 "data/maps/Zone9Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 20 "data/maps/Zone9Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 21 "data/maps/Zone9Sanctuary/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone9Sanctuary/scripts.pory"
	releaseall
	return


Zone9Sanctuary_EventScript_NextZone::
# 26 "data/maps/Zone9Sanctuary/scripts.pory"
	lock
# 27 "data/maps/Zone9Sanctuary/scripts.pory"
	faceplayer
# 28 "data/maps/Zone9Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 29 "data/maps/Zone9Sanctuary/scripts.pory"
	waitmessage
# 30 "data/maps/Zone9Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone9Sanctuary_EventScript_NextZone_Text_0, Zone9Sanctuary_EventScript_NextZone_Text_1, Zone9Sanctuary_EventScript_NextZone_Text_2, Zone9Sanctuary_EventScript_NextZone_Text_3
# 31 "data/maps/Zone9Sanctuary/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Zone9Sanctuary/scripts.pory"
	case 0, Zone9Sanctuary_EventScript_NextZone_3
# 40 "data/maps/Zone9Sanctuary/scripts.pory"
	case 1, Zone9Sanctuary_EventScript_NextZone_4
# 42 "data/maps/Zone9Sanctuary/scripts.pory"
	case 2, Zone9Sanctuary_EventScript_NextZone_5
Zone9Sanctuary_EventScript_NextZone_1:
# 45 "data/maps/Zone9Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone9Sanctuary_EventScript_NextZone_3:
# 33 "data/maps/Zone9Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 34 "data/maps/Zone9Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 35 "data/maps/Zone9Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone9Sanctuary_EventScript_NextZone_6
	goto Zone9Sanctuary_EventScript_NextZone_1

Zone9Sanctuary_EventScript_NextZone_4:
# 41 "data/maps/Zone9Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone9Sanctuary_EventScript_NextZone_1

Zone9Sanctuary_EventScript_NextZone_5:
# 43 "data/maps/Zone9Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone9Sanctuary_EventScript_NextZone_1

Zone9Sanctuary_EventScript_NextZone_6:
# 36 "data/maps/Zone9Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 37 "data/maps/Zone9Sanctuary/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 38 "data/maps/Zone9Sanctuary/scripts.pory"
	waitstate
	goto Zone9Sanctuary_EventScript_NextZone_1


Zone9Sanctuary_EventScript_NextZone_Text_0:
# 30 "data/maps/Zone9Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone9Sanctuary_EventScript_NextZone_Text_1:
# 30 "data/maps/Zone9Sanctuary/scripts.pory"
	.string "Settings$"

Zone9Sanctuary_EventScript_NextZone_Text_2:
# 30 "data/maps/Zone9Sanctuary/scripts.pory"
	.string "Documentation$"

Zone9Sanctuary_EventScript_NextZone_Text_3:
# 30 "data/maps/Zone9Sanctuary/scripts.pory"
	.string "Exit$"

Zone9Sanctuary_Text_Reward::
# 48 "data/maps/Zone9Sanctuary/scripts.pory"
	.string "TM15 - Bullet Seed!$"
