Zone22Sanctuary_MapScripts::
# 2 "data/maps/Zone22Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone22Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone22Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone22Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 22, Zone22Sanctuary_EventScript_Intro
	.2byte 0


Zone22Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone22Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone22Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone22Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone22Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone22Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone22Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone22Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone22Sanctuary/scripts.pory"
	msgbox Zone22Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone22Sanctuary/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 17 "data/maps/Zone22Sanctuary/scripts.pory"
	setvar VAR_ZONE, 23
# 18 "data/maps/Zone22Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 19 "data/maps/Zone22Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 20 "data/maps/Zone22Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 21 "data/maps/Zone22Sanctuary/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone22Sanctuary/scripts.pory"
	releaseall
	end


Zone22Sanctuary_EventScript_NextZone::
# 27 "data/maps/Zone22Sanctuary/scripts.pory"
	lock
# 28 "data/maps/Zone22Sanctuary/scripts.pory"
	faceplayer
# 29 "data/maps/Zone22Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 30 "data/maps/Zone22Sanctuary/scripts.pory"
	waitmessage
# 31 "data/maps/Zone22Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone22Sanctuary_EventScript_NextZone_Text_0, Zone22Sanctuary_EventScript_NextZone_Text_1, Zone22Sanctuary_EventScript_NextZone_Text_2, Zone22Sanctuary_EventScript_NextZone_Text_3
# 32 "data/maps/Zone22Sanctuary/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/Zone22Sanctuary/scripts.pory"
	case 0, Zone22Sanctuary_EventScript_NextZone_3
# 42 "data/maps/Zone22Sanctuary/scripts.pory"
	case 1, Zone22Sanctuary_EventScript_NextZone_4
# 44 "data/maps/Zone22Sanctuary/scripts.pory"
	case 2, Zone22Sanctuary_EventScript_NextZone_5
Zone22Sanctuary_EventScript_NextZone_1:
# 47 "data/maps/Zone22Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone22Sanctuary_EventScript_NextZone_3:
# 34 "data/maps/Zone22Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 35 "data/maps/Zone22Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 36 "data/maps/Zone22Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone22Sanctuary_EventScript_NextZone_6
	goto Zone22Sanctuary_EventScript_NextZone_1

Zone22Sanctuary_EventScript_NextZone_4:
# 43 "data/maps/Zone22Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone22Sanctuary_EventScript_NextZone_1

Zone22Sanctuary_EventScript_NextZone_5:
# 45 "data/maps/Zone22Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone22Sanctuary_EventScript_NextZone_1

Zone22Sanctuary_EventScript_NextZone_6:
# 37 "data/maps/Zone22Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 38 "data/maps/Zone22Sanctuary/scripts.pory"
	setflag FLAG_HIDE_CAM_AND_PAM
# 39 "data/maps/Zone22Sanctuary/scripts.pory"
	warp MAP_ZONE23A, 255, 9, 1
# 40 "data/maps/Zone22Sanctuary/scripts.pory"
	waitstate
	goto Zone22Sanctuary_EventScript_NextZone_1


Zone22Sanctuary_EventScript_NextZone_Text_0:
# 31 "data/maps/Zone22Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone22Sanctuary_EventScript_NextZone_Text_1:
# 31 "data/maps/Zone22Sanctuary/scripts.pory"
	.string "Settings$"

Zone22Sanctuary_EventScript_NextZone_Text_2:
# 31 "data/maps/Zone22Sanctuary/scripts.pory"
	.string "Documentation$"

Zone22Sanctuary_EventScript_NextZone_Text_3:
# 31 "data/maps/Zone22Sanctuary/scripts.pory"
	.string "Exit$"

Zone22Sanctuary_Text_Reward::
# 50 "data/maps/Zone22Sanctuary/scripts.pory"
	.string "The Assault Vest!$"
