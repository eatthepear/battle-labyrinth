Zone23Sanctuary_MapScripts::
# 2 "data/maps/Zone23Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone23Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone23Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone23Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 23, Zone23Sanctuary_EventScript_Intro
	.2byte 0


Zone23Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone23Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone23Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone23Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone23Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone23Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox Zone23Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone23Sanctuary/scripts.pory"
	giveitem ITEM_TM33
# 17 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 18 "data/maps/Zone23Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedUnique, MSGBOX_DEFAULT
# 20 "data/maps/Zone23Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone23Sanctuary/scripts.pory"
	setvar VAR_ZONE, 24
# 22 "data/maps/Zone23Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 23 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox Zone23Sanctuary_Text_Colress_Explain, MSGBOX_DEFAULT
# 24 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 25 "data/maps/Zone23Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 26 "data/maps/Zone23Sanctuary/scripts.pory"
	waitmovement 0
# 27 "data/maps/Zone23Sanctuary/scripts.pory"
	releaseall
	end


Zone23Sanctuary_EventScript_NextZone::
# 32 "data/maps/Zone23Sanctuary/scripts.pory"
	lock
# 33 "data/maps/Zone23Sanctuary/scripts.pory"
	faceplayer
# 34 "data/maps/Zone23Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 35 "data/maps/Zone23Sanctuary/scripts.pory"
	waitmessage
# 36 "data/maps/Zone23Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone23Sanctuary_EventScript_NextZone_Text_0, Zone23Sanctuary_EventScript_NextZone_Text_1, Zone23Sanctuary_EventScript_NextZone_Text_2, Zone23Sanctuary_EventScript_NextZone_Text_3
# 37 "data/maps/Zone23Sanctuary/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/Zone23Sanctuary/scripts.pory"
	case 0, Zone23Sanctuary_EventScript_NextZone_3
# 47 "data/maps/Zone23Sanctuary/scripts.pory"
	case 1, Zone23Sanctuary_EventScript_NextZone_4
# 49 "data/maps/Zone23Sanctuary/scripts.pory"
	case 2, Zone23Sanctuary_EventScript_NextZone_5
Zone23Sanctuary_EventScript_NextZone_1:
# 52 "data/maps/Zone23Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone23Sanctuary_EventScript_NextZone_3:
# 39 "data/maps/Zone23Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 40 "data/maps/Zone23Sanctuary/scripts.pory"
	msgbox Zone23Sanctuary_Text_Colress_ReadyToLeave, MSGBOX_YESNO
# 41 "data/maps/Zone23Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone23Sanctuary_EventScript_NextZone_6
	goto Zone23Sanctuary_EventScript_NextZone_1

Zone23Sanctuary_EventScript_NextZone_4:
# 48 "data/maps/Zone23Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone23Sanctuary_EventScript_NextZone_1

Zone23Sanctuary_EventScript_NextZone_5:
# 50 "data/maps/Zone23Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone23Sanctuary_EventScript_NextZone_1

Zone23Sanctuary_EventScript_NextZone_6:
# 42 "data/maps/Zone23Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 43 "data/maps/Zone23Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE25L_COLRESS
# 44 "data/maps/Zone23Sanctuary/scripts.pory"
	warp MAP_ZONE24A, 255, 31, 23
# 45 "data/maps/Zone23Sanctuary/scripts.pory"
	waitstate
	goto Zone23Sanctuary_EventScript_NextZone_1


Zone23Sanctuary_EventScript_NextZone_Text_0:
# 36 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone23Sanctuary_EventScript_NextZone_Text_1:
# 36 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "Settings$"

Zone23Sanctuary_EventScript_NextZone_Text_2:
# 36 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "Documentation$"

Zone23Sanctuary_EventScript_NextZone_Text_3:
# 36 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "Exit$"

Zone23Sanctuary_Text_Reward::
# 55 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "TM33 - Rain Dance!$"

Zone23Sanctuary_Text_Colress_Explain::
# 59 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones,\n{COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}, are combined.\pYou will not be able to access a\nSanctuary in between the Zones.$"

Zone23Sanctuary_Text_Colress_WhenUReady::
# 63 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to\nenter {COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}, speak to me.$"

Zone23Sanctuary_Text_Colress_ReadyToLeave::
# 67 "data/maps/Zone23Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}.$"
