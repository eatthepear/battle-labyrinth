Zone26Sanctuary_MapScripts::
# 2 "data/maps/Zone26Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone26Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone26Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone26Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 26, Zone26Sanctuary_EventScript_Intro
	.2byte 0


Zone26Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone26Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone26Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone26Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone26Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone26Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox Zone26Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone26Sanctuary/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 17 "data/maps/Zone26Sanctuary/scripts.pory"
	setvar VAR_ZONE, 27
# 18 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox Zone26Sanctuary_Text_Colress_Explain, MSGBOX_DEFAULT
# 19 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox Zone26Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 20 "data/maps/Zone26Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 21 "data/maps/Zone26Sanctuary/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone26Sanctuary/scripts.pory"
	releaseall
	end


Zone26Sanctuary_EventScript_NextZone::
# 27 "data/maps/Zone26Sanctuary/scripts.pory"
	lock
# 28 "data/maps/Zone26Sanctuary/scripts.pory"
	faceplayer
# 29 "data/maps/Zone26Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 30 "data/maps/Zone26Sanctuary/scripts.pory"
	waitmessage
# 31 "data/maps/Zone26Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone26Sanctuary_EventScript_NextZone_Text_0, Zone26Sanctuary_EventScript_NextZone_Text_1, Zone26Sanctuary_EventScript_NextZone_Text_2, Zone26Sanctuary_EventScript_NextZone_Text_3
# 32 "data/maps/Zone26Sanctuary/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/Zone26Sanctuary/scripts.pory"
	case 0, Zone26Sanctuary_EventScript_NextZone_3
# 41 "data/maps/Zone26Sanctuary/scripts.pory"
	case 1, Zone26Sanctuary_EventScript_NextZone_4
# 43 "data/maps/Zone26Sanctuary/scripts.pory"
	case 2, Zone26Sanctuary_EventScript_NextZone_5
Zone26Sanctuary_EventScript_NextZone_1:
# 46 "data/maps/Zone26Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone26Sanctuary_EventScript_NextZone_3:
# 34 "data/maps/Zone26Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 35 "data/maps/Zone26Sanctuary/scripts.pory"
	msgbox Zone26Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 36 "data/maps/Zone26Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone26Sanctuary_EventScript_NextZone_6
	goto Zone26Sanctuary_EventScript_NextZone_1

Zone26Sanctuary_EventScript_NextZone_4:
# 42 "data/maps/Zone26Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone26Sanctuary_EventScript_NextZone_1

Zone26Sanctuary_EventScript_NextZone_5:
# 44 "data/maps/Zone26Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone26Sanctuary_EventScript_NextZone_1

Zone26Sanctuary_EventScript_NextZone_6:
# 37 "data/maps/Zone26Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 38 "data/maps/Zone26Sanctuary/scripts.pory"
	warp MAP_ZONE24A, 255, 31, 26
# 39 "data/maps/Zone26Sanctuary/scripts.pory"
	waitstate
	goto Zone26Sanctuary_EventScript_NextZone_1


Zone26Sanctuary_EventScript_NextZone_Text_0:
# 31 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone26Sanctuary_EventScript_NextZone_Text_1:
# 31 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "Settings$"

Zone26Sanctuary_EventScript_NextZone_Text_2:
# 31 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "Documentation$"

Zone26Sanctuary_EventScript_NextZone_Text_3:
# 31 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "Exit$"

Zone26Sanctuary_Text_Reward::
# 49 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "The Cleanse Tag!$"

Zone26Sanctuary_Text_Colress_ReadyToLeave::
# 53 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}.$"

Zone26Sanctuary_Text_Colress_Explain::
# 57 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n{COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}, are combined.\pYou will not be able to access a\nSanctuary in between the Zones.$"

Zone26Sanctuary_Text_Colress_WhenUReady::
# 61 "data/maps/Zone26Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to\nenter {COLOR RED}Zone 27{COLOR DARK_GRAY} and {COLOR RED}Zone 28{COLOR DARK_GRAY}, speak to me.$"
