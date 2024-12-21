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
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 18 "data/maps/Zone6Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 20 "data/maps/Zone6Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone6Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedItems, MSGBOX_DEFAULT
# 23 "data/maps/Zone6Sanctuary/scripts.pory"
	waitfanfare
# 24 "data/maps/Zone6Sanctuary/scripts.pory"
	setvar VAR_ZONE, 7
# 25 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_Explain, MSGBOX_DEFAULT
# 26 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 27 "data/maps/Zone6Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 28 "data/maps/Zone6Sanctuary/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone6Sanctuary/scripts.pory"
	releaseall
	return


Zone6Sanctuary_EventScript_NextZone::
# 33 "data/maps/Zone6Sanctuary/scripts.pory"
	lock
# 34 "data/maps/Zone6Sanctuary/scripts.pory"
	faceplayer
# 35 "data/maps/Zone6Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 36 "data/maps/Zone6Sanctuary/scripts.pory"
	waitmessage
# 37 "data/maps/Zone6Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone6Sanctuary_EventScript_NextZone_Text_0, Zone6Sanctuary_EventScript_NextZone_Text_1, Zone6Sanctuary_EventScript_NextZone_Text_2, Zone6Sanctuary_EventScript_NextZone_Text_3
# 38 "data/maps/Zone6Sanctuary/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Zone6Sanctuary/scripts.pory"
	case 0, Zone6Sanctuary_EventScript_NextZone_3
# 46 "data/maps/Zone6Sanctuary/scripts.pory"
	case 1, Zone6Sanctuary_EventScript_NextZone_4
# 48 "data/maps/Zone6Sanctuary/scripts.pory"
	case 2, Zone6Sanctuary_EventScript_NextZone_5
Zone6Sanctuary_EventScript_NextZone_1:
# 51 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone6Sanctuary_EventScript_NextZone_3:
# 40 "data/maps/Zone6Sanctuary/scripts.pory"
	msgbox Zone6Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 41 "data/maps/Zone6Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone6Sanctuary_EventScript_NextZone_6
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_4:
# 47 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_5:
# 49 "data/maps/Zone6Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone6Sanctuary_EventScript_NextZone_1

Zone6Sanctuary_EventScript_NextZone_6:
# 42 "data/maps/Zone6Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 43 "data/maps/Zone6Sanctuary/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 44 "data/maps/Zone6Sanctuary/scripts.pory"
	waitstate
	goto Zone6Sanctuary_EventScript_NextZone_1


Zone6Sanctuary_EventScript_NextZone_Text_0:
# 37 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone6Sanctuary_EventScript_NextZone_Text_1:
# 37 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Settings$"

Zone6Sanctuary_EventScript_NextZone_Text_2:
# 37 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Documentation$"

Zone6Sanctuary_EventScript_NextZone_Text_3:
# 37 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "Exit$"

Zone6Sanctuary_Text_Reward::
# 54 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "The Sledgehammer!$"

Zone6Sanctuary_Text_Colress_Explain::
# 58 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 7{COLOR DARK_GRAY} and\n"
	.string "{COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone6Sanctuary_Text_Colress_WhenUReady::
# 63 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, speak to me.$"

Zone6Sanctuary_Text_Colress_ReadyToLeave::
# 67 "data/maps/Zone6Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"
