Zone17Sanctuary_MapScripts::
# 2 "data/maps/Zone17Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone17Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone17Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone17Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 17, Zone17Sanctuary_EventScript_Intro
	.2byte 0


Zone17Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone17Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone17Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone17Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone17Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone17Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox Zone17Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone17Sanctuary/scripts.pory"
	giveitem ITEM_TM30
# 17 "data/maps/Zone17Sanctuary/scripts.pory"
	setvar VAR_ZONE, 18
# 18 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox Zone17Sanctuary_Text_Colress_Explain, MSGBOX_DEFAULT
# 19 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 20 "data/maps/Zone17Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 21 "data/maps/Zone17Sanctuary/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone17Sanctuary/scripts.pory"
	releaseall
	return


Zone17Sanctuary_EventScript_NextZone::
# 26 "data/maps/Zone17Sanctuary/scripts.pory"
	lock
# 27 "data/maps/Zone17Sanctuary/scripts.pory"
	faceplayer
# 28 "data/maps/Zone17Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 29 "data/maps/Zone17Sanctuary/scripts.pory"
	waitmessage
# 30 "data/maps/Zone17Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone17Sanctuary_EventScript_NextZone_Text_0, Zone17Sanctuary_EventScript_NextZone_Text_1, Zone17Sanctuary_EventScript_NextZone_Text_2, Zone17Sanctuary_EventScript_NextZone_Text_3
# 31 "data/maps/Zone17Sanctuary/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Zone17Sanctuary/scripts.pory"
	case 0, Zone17Sanctuary_EventScript_NextZone_3
# 44 "data/maps/Zone17Sanctuary/scripts.pory"
	case 1, Zone17Sanctuary_EventScript_NextZone_4
# 46 "data/maps/Zone17Sanctuary/scripts.pory"
	case 2, Zone17Sanctuary_EventScript_NextZone_5
Zone17Sanctuary_EventScript_NextZone_1:
# 49 "data/maps/Zone17Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone17Sanctuary_EventScript_NextZone_3:
# 33 "data/maps/Zone17Sanctuary/scripts.pory"
	msgbox Zone17Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 34 "data/maps/Zone17Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone17Sanctuary_EventScript_NextZone_6
	goto Zone17Sanctuary_EventScript_NextZone_1

Zone17Sanctuary_EventScript_NextZone_4:
# 45 "data/maps/Zone17Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone17Sanctuary_EventScript_NextZone_1

Zone17Sanctuary_EventScript_NextZone_5:
# 47 "data/maps/Zone17Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone17Sanctuary_EventScript_NextZone_1

Zone17Sanctuary_EventScript_NextZone_6:
# 35 "data/maps/Zone17Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 36 "data/maps/Zone17Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_PIRATES
# 37 "data/maps/Zone17Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_ELI
# 38 "data/maps/Zone17Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_ZOE
# 39 "data/maps/Zone17Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_BOAT
# 40 "data/maps/Zone17Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_PORYGON
# 41 "data/maps/Zone17Sanctuary/scripts.pory"
	warp MAP_ZONE18A, 255, 28, 19
# 42 "data/maps/Zone17Sanctuary/scripts.pory"
	waitstate
	goto Zone17Sanctuary_EventScript_NextZone_1


Zone17Sanctuary_EventScript_NextZone_Text_0:
# 30 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone17Sanctuary_EventScript_NextZone_Text_1:
# 30 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "Settings$"

Zone17Sanctuary_EventScript_NextZone_Text_2:
# 30 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "Documentation$"

Zone17Sanctuary_EventScript_NextZone_Text_3:
# 30 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "Exit$"

Zone17Sanctuary_Text_Reward::
# 52 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "TM30 - Shadow Claw!$"

Zone17Sanctuary_Text_Colress_Explain::
# 56 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 18{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 19{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone17Sanctuary_Text_Colress_WhenUReady::
# 61 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}, speak to me.$"

Zone17Sanctuary_Text_Colress_ReadyToLeave::
# 65 "data/maps/Zone17Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"
