Zone8Sanctuary_MapScripts::
# 2 "data/maps/Zone8Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone8Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone8Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 7, Zone8Sanctuary_EventScript_Intro
	.2byte 0


Zone8Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone8Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone8Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
# 11 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 12 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_RewardClear7, MSGBOX_DEFAULT
# 13 "data/maps/Zone8Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone8Sanctuary_EventScript_Intro_2
# 18 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_7Reward, MSGBOX_DEFAULT
# 19 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 3
Zone8Sanctuary_EventScript_Intro_1:
# 21 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_RewardClear8, MSGBOX_DEFAULT
# 22 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_8Reward, MSGBOX_DEFAULT
# 23 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_TM12
# 24 "data/maps/Zone8Sanctuary/scripts.pory"
	setvar VAR_ZONE, 9
# 25 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_Unlocked, MSGBOX_DEFAULT
# 26 "data/maps/Zone8Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
# 28 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 29 "data/maps/Zone8Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
# 31 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 32 "data/maps/Zone8Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
# 34 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 35 "data/maps/Zone8Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 36 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 37 "data/maps/Zone8Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone8Sanctuary/scripts.pory"
	releaseall
	return

Zone8Sanctuary_EventScript_Intro_2:
# 14 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_RED_SHARD, 900
# 16 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 900
	goto Zone8Sanctuary_EventScript_Intro_1


Zone8Sanctuary_EventScript_NextZone::
# 43 "data/maps/Zone8Sanctuary/scripts.pory"
	lock
# 44 "data/maps/Zone8Sanctuary/scripts.pory"
	faceplayer
# 45 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone8Sanctuary_EventScript_NextZone_Text_0, Zone8Sanctuary_EventScript_NextZone_Text_1, Zone8Sanctuary_EventScript_NextZone_Text_2, Zone8Sanctuary_EventScript_NextZone_Text_3
# 47 "data/maps/Zone8Sanctuary/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/Zone8Sanctuary/scripts.pory"
	case 0, Zone8Sanctuary_EventScript_NextZone_3
# 60 "data/maps/Zone8Sanctuary/scripts.pory"
	case 1, Zone8Sanctuary_EventScript_NextZone_4
# 62 "data/maps/Zone8Sanctuary/scripts.pory"
	case 2, Zone8Sanctuary_EventScript_NextZone_5
Zone8Sanctuary_EventScript_NextZone_1:
# 65 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone8Sanctuary_EventScript_NextZone_3:
# 49 "data/maps/Zone8Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 50 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 51 "data/maps/Zone8Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone8Sanctuary_EventScript_NextZone_6
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_4:
# 61 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_5:
# 63 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_6:
# 52 "data/maps/Zone8Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 53 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE
# 54 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE
# 55 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE
# 56 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ERICA_WINSTRATE
# 57 "data/maps/Zone8Sanctuary/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 58 "data/maps/Zone8Sanctuary/scripts.pory"
	waitstate
	goto Zone8Sanctuary_EventScript_NextZone_1


Zone8Sanctuary_EventScript_Intro_Text_0:
# 14 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Red Shards and Blue Shards!$"

Zone8Sanctuary_EventScript_NextZone_Text_0:
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone8Sanctuary_EventScript_NextZone_Text_1:
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Settings$"

Zone8Sanctuary_EventScript_NextZone_Text_2:
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Documentation$"

Zone8Sanctuary_EventScript_NextZone_Text_3:
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Exit$"

Zone8Sanctuary_Text_Colress_ReachedZone::
# 68 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Zone8Sanctuary_Text_RewardClear7::
# 73 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 7{COLOR DARK_GRAY} is…$"

Zone8Sanctuary_Text_7Reward::
# 77 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "3 Blue Shards!$"

Zone8Sanctuary_Text_RewardClear8::
# 81 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 8{COLOR DARK_GRAY} is…$"

Zone8Sanctuary_Text_8Reward::
# 85 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "TM12 - Rock Tomb!$"
