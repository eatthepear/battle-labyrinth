Zone4Sanctuary_MapScripts::
# 2 "data/maps/Zone4Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone4Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone4Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone4Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 4, Zone4Sanctuary_EventScript_Intro
	.2byte 0


Zone4Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone4Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone4Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone4Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone4Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone4Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox Zone4Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone4Sanctuary/scripts.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 17 "data/maps/Zone4Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 18 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox Zone4Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Zone4Sanctuary/scripts.pory"
	waitfanfare
# 20 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox Zone4Sanctuary_EventScript_Intro_Text_1, MSGBOX_DEFAULT
# 21 "data/maps/Zone4Sanctuary/scripts.pory"
	setvar VAR_ZONE, 5
# 22 "data/maps/Zone4Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 23 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 24 "data/maps/Zone4Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 25 "data/maps/Zone4Sanctuary/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone4Sanctuary/scripts.pory"
	releaseall
	end


Zone4Sanctuary_EventScript_NextZone::
# 31 "data/maps/Zone4Sanctuary/scripts.pory"
	lock
# 32 "data/maps/Zone4Sanctuary/scripts.pory"
	faceplayer
# 33 "data/maps/Zone4Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 34 "data/maps/Zone4Sanctuary/scripts.pory"
	waitmessage
# 35 "data/maps/Zone4Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone4Sanctuary_EventScript_NextZone_Text_0, Zone4Sanctuary_EventScript_NextZone_Text_1, Zone4Sanctuary_EventScript_NextZone_Text_2, Zone4Sanctuary_EventScript_NextZone_Text_3
# 36 "data/maps/Zone4Sanctuary/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/Zone4Sanctuary/scripts.pory"
	case 0, Zone4Sanctuary_EventScript_NextZone_3
# 45 "data/maps/Zone4Sanctuary/scripts.pory"
	case 1, Zone4Sanctuary_EventScript_NextZone_4
# 47 "data/maps/Zone4Sanctuary/scripts.pory"
	case 2, Zone4Sanctuary_EventScript_NextZone_5
Zone4Sanctuary_EventScript_NextZone_1:
# 50 "data/maps/Zone4Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone4Sanctuary_EventScript_NextZone_3:
# 38 "data/maps/Zone4Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 39 "data/maps/Zone4Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 40 "data/maps/Zone4Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4Sanctuary_EventScript_NextZone_6
	goto Zone4Sanctuary_EventScript_NextZone_1

Zone4Sanctuary_EventScript_NextZone_4:
# 46 "data/maps/Zone4Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone4Sanctuary_EventScript_NextZone_1

Zone4Sanctuary_EventScript_NextZone_5:
# 48 "data/maps/Zone4Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone4Sanctuary_EventScript_NextZone_1

Zone4Sanctuary_EventScript_NextZone_6:
# 41 "data/maps/Zone4Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 42 "data/maps/Zone4Sanctuary/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 1
# 43 "data/maps/Zone4Sanctuary/scripts.pory"
	waitstate
	goto Zone4Sanctuary_EventScript_NextZone_1


Zone4Sanctuary_EventScript_Intro_Text_0:
# 18 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Zone4Sanctuary_EventScript_Intro_Text_1:
# 20 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Note that if you are in a Zone,\n"
	.string "you can only use the Portable PC once\l"
	.string "before reaching the Sanctuary.$"

Zone4Sanctuary_EventScript_NextZone_Text_0:
# 35 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone4Sanctuary_EventScript_NextZone_Text_1:
# 35 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "Settings$"

Zone4Sanctuary_EventScript_NextZone_Text_2:
# 35 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "Documentation$"

Zone4Sanctuary_EventScript_NextZone_Text_3:
# 35 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "Exit$"

Zone4Sanctuary_Text_Reward::
# 53 "data/maps/Zone4Sanctuary/scripts.pory"
	.string "The {COLOR RED}Portable PC!{COLOR DARK_GRAY}$"
