Zone12Sanctuary_MapScripts::
# 2 "data/maps/Zone12Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone12Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone12Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone12Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 12, Zone12Sanctuary_EventScript_Intro
	.2byte 0


Zone12Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone12Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone12Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone12Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone12Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone12Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox Zone12Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone12Sanctuary/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 10
# 17 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 18 "data/maps/Zone12Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedGeneral, MSGBOX_DEFAULT
# 20 "data/maps/Zone12Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone12Sanctuary/scripts.pory"
	setvar VAR_ZONE, 13
# 22 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox Zone12Sanctuary_Text_Colress_Explain
# 23 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 24 "data/maps/Zone12Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 25 "data/maps/Zone12Sanctuary/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone12Sanctuary/scripts.pory"
	releaseall
	return


Zone12Sanctuary_EventScript_NextZone::
# 30 "data/maps/Zone12Sanctuary/scripts.pory"
	lock
# 31 "data/maps/Zone12Sanctuary/scripts.pory"
	faceplayer
# 32 "data/maps/Zone12Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 33 "data/maps/Zone12Sanctuary/scripts.pory"
	waitmessage
# 34 "data/maps/Zone12Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone12Sanctuary_EventScript_NextZone_Text_0, Zone12Sanctuary_EventScript_NextZone_Text_1, Zone12Sanctuary_EventScript_NextZone_Text_2, Zone12Sanctuary_EventScript_NextZone_Text_3
# 35 "data/maps/Zone12Sanctuary/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/Zone12Sanctuary/scripts.pory"
	case 0, Zone12Sanctuary_EventScript_NextZone_3
# 43 "data/maps/Zone12Sanctuary/scripts.pory"
	case 1, Zone12Sanctuary_EventScript_NextZone_4
# 45 "data/maps/Zone12Sanctuary/scripts.pory"
	case 2, Zone12Sanctuary_EventScript_NextZone_5
Zone12Sanctuary_EventScript_NextZone_1:
# 48 "data/maps/Zone12Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone12Sanctuary_EventScript_NextZone_3:
# 37 "data/maps/Zone12Sanctuary/scripts.pory"
	msgbox Zone12Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 38 "data/maps/Zone12Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone12Sanctuary_EventScript_NextZone_6
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_4:
# 44 "data/maps/Zone12Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_5:
# 46 "data/maps/Zone12Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone12Sanctuary_EventScript_NextZone_1

Zone12Sanctuary_EventScript_NextZone_6:
# 39 "data/maps/Zone12Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 40 "data/maps/Zone12Sanctuary/scripts.pory"
	warp MAP_ZONE13A, 255, 26, 28
# 41 "data/maps/Zone12Sanctuary/scripts.pory"
	waitstate
	goto Zone12Sanctuary_EventScript_NextZone_1


Zone12Sanctuary_EventScript_NextZone_Text_0:
# 34 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone12Sanctuary_EventScript_NextZone_Text_1:
# 34 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "Settings$"

Zone12Sanctuary_EventScript_NextZone_Text_2:
# 34 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "Documentation$"

Zone12Sanctuary_EventScript_NextZone_Text_3:
# 34 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "Exit$"

Zone12Sanctuary_Text_Reward::
# 51 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "10 Ultra Balls!$"

Zone12Sanctuary_Text_Colress_Explain::
# 55 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 13{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 14{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Zone12Sanctuary_Text_Colress_WhenUReady::
# 60 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}, speak to me.$"

Zone12Sanctuary_Text_Colress_ReadyToLeave::
# 64 "data/maps/Zone12Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\n"
	.string "You will be entering\l"
	.string "{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}.$"
