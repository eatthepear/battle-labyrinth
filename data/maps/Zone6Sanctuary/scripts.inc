Zone6Sanctuary_MapScripts::
# 2 "data/maps/Zone6Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone6Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone6Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone6Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 6, Zone6Sanctuary_EventScript_Intro
	.2byte 0


Zone6Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone6Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone6Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone6Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone6Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone6Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone6Sanctuary/scripts.pory"
	giveitem ITEM_SLEDGEHAMMER
# 17 "data/maps/Zone6Sanctuary/scripts.pory"
	setvar VAR_ZONE, 7
# 18 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_Explain, MSGBOX_DEFAULT
# 19 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 20 "data/maps/Zone6Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 21 "data/maps/Zone6Sanctuary/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone6Sanctuary/scripts.pory"
	releaseall
	return


Zone6Sanctuary_EventScript_NextZone::
# 26 "data/maps/Zone6Sanctuary/scripts.pory"
	lock
# 27 "data/maps/Zone6Sanctuary/scripts.pory"
	faceplayer
# 28 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone6Sanctuary_EventScript_NextZone_Text_0, Zone6Sanctuary_EventScript_NextZone_Text_1, Zone6Sanctuary_EventScript_NextZone_Text_2, Zone6Sanctuary_EventScript_NextZone_Text_3
# 30 "data/maps/Zone6Sanctuary/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/Zone6Sanctuary/scripts.pory"
	case 0, Zone6Sanctuary_EventScript_NextZone_3
# 38 "data/maps/Zone6Sanctuary/scripts.pory"
	case 1, Zone6Sanctuary_EventScript_NextZone_4
# 40 "data/maps/Zone6Sanctuary/scripts.pory"
	case 2, Zone6Sanctuary_EventScript_NextZone_5
Zone6Sanctuary_EventScript_NextZone_1:
# 43 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone6Sanctuary_EventScript_NextZone_3:
# 32 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 33 "data/maps/Zone6Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone6Sanctuary_EventScript_NextZone_6
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_4:
# 39 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_5:
# 41 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_6:
# 34 "data/maps/Zone6Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 35 "data/maps/Zone6Sanctuary/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 36 "data/maps/Zone6Sanctuary/scripts.pory"
	waitstate
	goto Zone6Sanctuary_EventScript_NextZone_1


Zone6Sanctuary_EventScript_NextZone_Text_0:
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone6Sanctuary_EventScript_NextZone_Text_1:
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Settings$"

Zone6Sanctuary_EventScript_NextZone_Text_2:
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Documentation$"

Zone6Sanctuary_EventScript_NextZone_Text_3:
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Exit$"

Zone6Sanctuary_Text_Reward::
# 46 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "The Sledgehammer!$"

Zone6Sanctuary_Text_Colress_Explain::
# 50 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 7{COLOR DARK_GRAY} and\n"
	.string "{COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone6Sanctuary_Text_Colress_WhenUReady::
# 55 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, speak to me.$"

Zone6Sanctuary_Text_Colress_ReadyToLeave::
# 59 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"
