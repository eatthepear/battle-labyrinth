Zone11Sanctuary_MapScripts::
# 2 "data/maps/Zone11Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone11Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone11Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone11Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 11, Zone11Sanctuary_EventScript_Intro
	.2byte 0


Zone11Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone11Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone11Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone11Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone11Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone11Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox Zone11Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone11Sanctuary/scripts.pory"
	giveitem ITEM_TM23
# 17 "data/maps/Zone11Sanctuary/scripts.pory"
	setvar VAR_ZONE, 12
# 18 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox Zone11Sanctuary_Text_NoBagAccessInNextZone, MSGBOX_DEFAULT
# 19 "data/maps/Zone11Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 20 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 21 "data/maps/Zone11Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 22 "data/maps/Zone11Sanctuary/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone11Sanctuary/scripts.pory"
	releaseall
	end


Zone11Sanctuary_EventScript_NextZone::
# 32 "data/maps/Zone11Sanctuary/scripts.pory"
	lock
# 33 "data/maps/Zone11Sanctuary/scripts.pory"
	faceplayer
# 34 "data/maps/Zone11Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 35 "data/maps/Zone11Sanctuary/scripts.pory"
	waitmessage
# 36 "data/maps/Zone11Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone11Sanctuary_EventScript_NextZone_Text_0, Zone11Sanctuary_EventScript_NextZone_Text_1, Zone11Sanctuary_EventScript_NextZone_Text_2, Zone11Sanctuary_EventScript_NextZone_Text_3
# 37 "data/maps/Zone11Sanctuary/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/Zone11Sanctuary/scripts.pory"
	case 0, Zone11Sanctuary_EventScript_NextZone_3
# 51 "data/maps/Zone11Sanctuary/scripts.pory"
	case 1, Zone11Sanctuary_EventScript_NextZone_4
# 53 "data/maps/Zone11Sanctuary/scripts.pory"
	case 2, Zone11Sanctuary_EventScript_NextZone_5
Zone11Sanctuary_EventScript_NextZone_1:
# 56 "data/maps/Zone11Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone11Sanctuary_EventScript_NextZone_3:
# 39 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox Zone11Sanctuary_Text_NoBagAccessInNextZone, MSGBOX_DEFAULT
# 40 "data/maps/Zone11Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 41 "data/maps/Zone11Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 42 "data/maps/Zone11Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone11Sanctuary_EventScript_NextZone_6
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_4:
# 52 "data/maps/Zone11Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_5:
# 54 "data/maps/Zone11Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_6:
# 43 "data/maps/Zone11Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 44 "data/maps/Zone11Sanctuary/scripts.pory"
	setflag FLAG_SYS_NO_BAG_START_MENU
# 45 "data/maps/Zone11Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11Sanctuary_EventScript_NextZone_9
# 45 "data/maps/Zone11Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone11Sanctuary_EventScript_NextZone_9
Zone11Sanctuary_EventScript_NextZone_8:
# 48 "data/maps/Zone11Sanctuary/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 17
# 49 "data/maps/Zone11Sanctuary/scripts.pory"
	waitstate
	goto Zone11Sanctuary_EventScript_NextZone_1

Zone11Sanctuary_EventScript_NextZone_9:
# 46 "data/maps/Zone11Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
	goto Zone11Sanctuary_EventScript_NextZone_8


Zone11Sanctuary_EventScript_NextZone_Text_0:
# 36 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone11Sanctuary_EventScript_NextZone_Text_1:
# 36 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "Settings$"

Zone11Sanctuary_EventScript_NextZone_Text_2:
# 36 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "Documentation$"

Zone11Sanctuary_EventScript_NextZone_Text_3:
# 36 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "Exit$"

Zone11Sanctuary_Text_NoBagAccessInNextZone::
# 27 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next zone, {COLOR RED}Zone 12{COLOR DARK_GRAY},\n"
	.string "restricts the use of your Bag.\p"
	.string "You will not be able to use items from\n"
	.string "your Bag outside of battle.$"

Zone11Sanctuary_Text_Reward::
# 59 "data/maps/Zone11Sanctuary/scripts.pory"
	.string "TM23 - Pluck!$"
