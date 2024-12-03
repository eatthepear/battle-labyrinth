Zone2Sanctuary_MapScripts::
# 2 "data/maps/Zone2Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone2Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone2Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone2Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 2, Zone2Sanctuary_EventScript_Intro
	.2byte 0


Zone2Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone2Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone2Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone2Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone2Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone2Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox Zone2Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone2Sanctuary/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 17 "data/maps/Zone2Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox Zone2Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Zone2Sanctuary/scripts.pory"
	waitfanfare
# 20 "data/maps/Zone2Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2Sanctuary_EventScript_Intro_2
Zone2Sanctuary_EventScript_Intro_1:
# 23 "data/maps/Zone2Sanctuary/scripts.pory"
	setvar VAR_ZONE, 3
# 24 "data/maps/Zone2Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 25 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 26 "data/maps/Zone2Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 27 "data/maps/Zone2Sanctuary/scripts.pory"
	waitmovement 0
# 28 "data/maps/Zone2Sanctuary/scripts.pory"
	releaseall
	return

Zone2Sanctuary_EventScript_Intro_2:
# 21 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox Zone2Sanctuary_EventScript_Intro_Text_1, MSGBOX_DEFAULT
	goto Zone2Sanctuary_EventScript_Intro_1


Zone2Sanctuary_EventScript_NextZone::
# 32 "data/maps/Zone2Sanctuary/scripts.pory"
	lock
# 33 "data/maps/Zone2Sanctuary/scripts.pory"
	faceplayer
# 34 "data/maps/Zone2Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 35 "data/maps/Zone2Sanctuary/scripts.pory"
	waitmessage
# 36 "data/maps/Zone2Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone2Sanctuary_EventScript_NextZone_Text_0, Zone2Sanctuary_EventScript_NextZone_Text_1, Zone2Sanctuary_EventScript_NextZone_Text_2, Zone2Sanctuary_EventScript_NextZone_Text_3
# 37 "data/maps/Zone2Sanctuary/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/Zone2Sanctuary/scripts.pory"
	case 0, Zone2Sanctuary_EventScript_NextZone_3
# 48 "data/maps/Zone2Sanctuary/scripts.pory"
	case 1, Zone2Sanctuary_EventScript_NextZone_4
# 50 "data/maps/Zone2Sanctuary/scripts.pory"
	case 2, Zone2Sanctuary_EventScript_NextZone_5
Zone2Sanctuary_EventScript_NextZone_1:
# 53 "data/maps/Zone2Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone2Sanctuary_EventScript_NextZone_3:
# 39 "data/maps/Zone2Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 40 "data/maps/Zone2Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 41 "data/maps/Zone2Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2Sanctuary_EventScript_NextZone_6
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_4:
# 49 "data/maps/Zone2Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_5:
# 51 "data/maps/Zone2Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone2Sanctuary_EventScript_NextZone_1

Zone2Sanctuary_EventScript_NextZone_6:
# 42 "data/maps/Zone2Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 43 "data/maps/Zone2Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
# 44 "data/maps/Zone2Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_REMI
# 45 "data/maps/Zone2Sanctuary/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 46 "data/maps/Zone2Sanctuary/scripts.pory"
	waitstate
	goto Zone2Sanctuary_EventScript_NextZone_1


Zone2Sanctuary_EventScript_Intro_Text_0:
# 18 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Zone2Sanctuary_EventScript_Intro_Text_1:
# 21 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "Note that on Nuzlocke mode, DexNav\n"
	.string "encounters are unable to be caught.$"

Zone2Sanctuary_EventScript_NextZone_Text_0:
# 36 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone2Sanctuary_EventScript_NextZone_Text_1:
# 36 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "Settings$"

Zone2Sanctuary_EventScript_NextZone_Text_2:
# 36 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "Documentation$"

Zone2Sanctuary_EventScript_NextZone_Text_3:
# 36 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "Exit$"

Zone2Sanctuary_Text_Reward::
# 56 "data/maps/Zone2Sanctuary/scripts.pory"
	.string "The {COLOR RED}DexNav{COLOR DARK_GRAY}!$"