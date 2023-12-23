Zone5Sanctuary_MapScripts::
# 2 "data/maps/Zone5Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone5Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone5Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone5Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 5, Zone5Sanctuary_EventScript_Intro
	.2byte 0


Zone5Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone5Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone5Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone5Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone5Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone5Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox Zone5Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone5Sanctuary/scripts.pory"
	giveitem ITEM_RED_SHARD, 5
# 17 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_Unlocked, MSGBOX_DEFAULT
# 18 "data/maps/Zone5Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
# 20 "data/maps/Zone5Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone5Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
# 23 "data/maps/Zone5Sanctuary/scripts.pory"
	waitfanfare
# 24 "data/maps/Zone5Sanctuary/scripts.pory"
	setvar VAR_ZONE, 6
# 25 "data/maps/Zone5Sanctuary/scripts.pory"
	compare VAR_ZONE_0_STATE, 0
	goto_if_eq Zone5Sanctuary_EventScript_Intro_2
Zone5Sanctuary_EventScript_Intro_1:
# 34 "data/maps/Zone5Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 35 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 36 "data/maps/Zone5Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 37 "data/maps/Zone5Sanctuary/scripts.pory"
	waitmovement 0
# 38 "data/maps/Zone5Sanctuary/scripts.pory"
	releaseall
	return

Zone5Sanctuary_EventScript_Intro_2:
# 26 "data/maps/Zone5Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 27 "data/maps/Zone5Sanctuary/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Zone5Sanctuary/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone5Sanctuary/scripts.pory"
	waitse
# 30 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox Zone5Sanctuary_EventScript_Intro_Text_0
# 31 "data/maps/Zone5Sanctuary/scripts.pory"
	warpteleport MAP_ZONE0A, 255, 17, 10
# 32 "data/maps/Zone5Sanctuary/scripts.pory"
	waitstate
	goto Zone5Sanctuary_EventScript_Intro_1


Zone5Sanctuary_EventScript_NextZone::
# 42 "data/maps/Zone5Sanctuary/scripts.pory"
	lock
# 43 "data/maps/Zone5Sanctuary/scripts.pory"
	faceplayer
# 44 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 45 "data/maps/Zone5Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone5Sanctuary_EventScript_NextZone_Text_0, Zone5Sanctuary_EventScript_NextZone_Text_1, Zone5Sanctuary_EventScript_NextZone_Text_2, Zone5Sanctuary_EventScript_NextZone_Text_3
# 46 "data/maps/Zone5Sanctuary/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/Zone5Sanctuary/scripts.pory"
	case 0, Zone5Sanctuary_EventScript_NextZone_3
# 55 "data/maps/Zone5Sanctuary/scripts.pory"
	case 1, Zone5Sanctuary_EventScript_NextZone_4
# 57 "data/maps/Zone5Sanctuary/scripts.pory"
	case 2, Zone5Sanctuary_EventScript_NextZone_5
Zone5Sanctuary_EventScript_NextZone_1:
# 60 "data/maps/Zone5Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone5Sanctuary_EventScript_NextZone_3:
# 48 "data/maps/Zone5Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 49 "data/maps/Zone5Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 50 "data/maps/Zone5Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5Sanctuary_EventScript_NextZone_6
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_4:
# 56 "data/maps/Zone5Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_5:
# 58 "data/maps/Zone5Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone5Sanctuary_EventScript_NextZone_1

Zone5Sanctuary_EventScript_NextZone_6:
# 51 "data/maps/Zone5Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 52 "data/maps/Zone5Sanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 53 "data/maps/Zone5Sanctuary/scripts.pory"
	waitstate
	goto Zone5Sanctuary_EventScript_NextZone_1


Zone5Sanctuary_EventScript_Intro_Text_0:
# 30 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: It seems you haven't entered\n"
	.string "Zone 0 yet.\p"
	.string "Zone 0 holds many useful areas that are\n"
	.string "helpful to challengers.\p"
	.string "You can typically access it using the\n"
	.string "warp pad in a Sanctuary, but just this\l"
	.string "once I will warp you there myself.$"

Zone5Sanctuary_EventScript_NextZone_Text_0:
# 45 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone5Sanctuary_EventScript_NextZone_Text_1:
# 45 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "Settings$"

Zone5Sanctuary_EventScript_NextZone_Text_2:
# 45 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "Documentation$"

Zone5Sanctuary_EventScript_NextZone_Text_3:
# 45 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "Exit$"

Zone5Sanctuary_Text_Reward::
# 63 "data/maps/Zone5Sanctuary/scripts.pory"
	.string "5 Red Shards!$"
