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
	msgbox Zone8Sanctuary_Text_7Reward, MSGBOX_DEFAULT
# 14 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 15 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_RewardClear8, MSGBOX_DEFAULT
# 16 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox Zone8Sanctuary_Text_8Reward, MSGBOX_DEFAULT
# 17 "data/maps/Zone8Sanctuary/scripts.pory"
	giveitem ITEM_MACHETE
# 18 "data/maps/Zone8Sanctuary/scripts.pory"
	setvar VAR_ZONE, 9
# 19 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 20 "data/maps/Zone8Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 22 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 23 "data/maps/Zone8Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 25 "data/maps/Zone8Sanctuary/scripts.pory"
	waitfanfare
# 26 "data/maps/Zone8Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 27 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 28 "data/maps/Zone8Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 29 "data/maps/Zone8Sanctuary/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone8Sanctuary/scripts.pory"
	releaseall
	return


Zone8Sanctuary_EventScript_NextZone::
# 34 "data/maps/Zone8Sanctuary/scripts.pory"
	lock
# 35 "data/maps/Zone8Sanctuary/scripts.pory"
	faceplayer
# 36 "data/maps/Zone8Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 37 "data/maps/Zone8Sanctuary/scripts.pory"
	waitmessage
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone8Sanctuary_EventScript_NextZone_Text_0, Zone8Sanctuary_EventScript_NextZone_Text_1, Zone8Sanctuary_EventScript_NextZone_Text_2, Zone8Sanctuary_EventScript_NextZone_Text_3
# 39 "data/maps/Zone8Sanctuary/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/Zone8Sanctuary/scripts.pory"
	case 0, Zone8Sanctuary_EventScript_NextZone_3
# 53 "data/maps/Zone8Sanctuary/scripts.pory"
	case 1, Zone8Sanctuary_EventScript_NextZone_4
# 55 "data/maps/Zone8Sanctuary/scripts.pory"
	case 2, Zone8Sanctuary_EventScript_NextZone_5
Zone8Sanctuary_EventScript_NextZone_1:
# 58 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone8Sanctuary_EventScript_NextZone_3:
# 41 "data/maps/Zone8Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 42 "data/maps/Zone8Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 43 "data/maps/Zone8Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone8Sanctuary_EventScript_NextZone_6
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_4:
# 54 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_5:
# 56 "data/maps/Zone8Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone8Sanctuary_EventScript_NextZone_1

Zone8Sanctuary_EventScript_NextZone_6:
# 44 "data/maps/Zone8Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 45 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE
# 46 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE
# 47 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE
# 48 "data/maps/Zone8Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ERICA_WINSTRATE
# 49 "data/maps/Zone8Sanctuary/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
# 50 "data/maps/Zone8Sanctuary/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 51 "data/maps/Zone8Sanctuary/scripts.pory"
	waitstate
	goto Zone8Sanctuary_EventScript_NextZone_1


Zone8Sanctuary_EventScript_NextZone_Text_0:
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone8Sanctuary_EventScript_NextZone_Text_1:
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Settings$"

Zone8Sanctuary_EventScript_NextZone_Text_2:
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Documentation$"

Zone8Sanctuary_EventScript_NextZone_Text_3:
# 38 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Exit$"

Zone8Sanctuary_Text_Colress_ReachedZone::
# 61 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Zone8Sanctuary_Text_RewardClear7::
# 66 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 7{COLOR DARK_GRAY} is…$"

Zone8Sanctuary_Text_7Reward::
# 70 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "TM39 - Rock Tomb!$"

Zone8Sanctuary_Text_RewardClear8::
# 74 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 8{COLOR DARK_GRAY} is…$"

Zone8Sanctuary_Text_8Reward::
# 78 "data/maps/Zone8Sanctuary/scripts.pory"
	.string "The Machete!$"
