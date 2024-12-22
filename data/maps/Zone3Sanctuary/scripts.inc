Zone3Sanctuary_MapScripts::
# 2 "data/maps/Zone3Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone3Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone3Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone3Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 3, Zone3Sanctuary_EventScript_Intro
	.2byte 0


Zone3Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone3Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone3Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone3Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone3Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone3Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox Zone3Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone3Sanctuary/scripts.pory"
	giveitem ITEM_REVIVE, 5
# 17 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 18 "data/maps/Zone3Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 20 "data/maps/Zone3Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone3Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 23 "data/maps/Zone3Sanctuary/scripts.pory"
	waitfanfare
# 24 "data/maps/Zone3Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 26 "data/maps/Zone3Sanctuary/scripts.pory"
	waitfanfare
# 27 "data/maps/Zone3Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedItems, MSGBOX_DEFAULT
# 29 "data/maps/Zone3Sanctuary/scripts.pory"
	waitfanfare
# 30 "data/maps/Zone3Sanctuary/scripts.pory"
	setvar VAR_ZONE, 4
# 31 "data/maps/Zone3Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 32 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 33 "data/maps/Zone3Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 34 "data/maps/Zone3Sanctuary/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone3Sanctuary/scripts.pory"
	releaseall
	return


Zone3Sanctuary_EventScript_NextZone::
# 39 "data/maps/Zone3Sanctuary/scripts.pory"
	lock
# 40 "data/maps/Zone3Sanctuary/scripts.pory"
	faceplayer
# 41 "data/maps/Zone3Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 42 "data/maps/Zone3Sanctuary/scripts.pory"
	waitmessage
# 43 "data/maps/Zone3Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone3Sanctuary_EventScript_NextZone_Text_0, Zone3Sanctuary_EventScript_NextZone_Text_1, Zone3Sanctuary_EventScript_NextZone_Text_2, Zone3Sanctuary_EventScript_NextZone_Text_3
# 44 "data/maps/Zone3Sanctuary/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/Zone3Sanctuary/scripts.pory"
	case 0, Zone3Sanctuary_EventScript_NextZone_3
# 53 "data/maps/Zone3Sanctuary/scripts.pory"
	case 1, Zone3Sanctuary_EventScript_NextZone_4
# 55 "data/maps/Zone3Sanctuary/scripts.pory"
	case 2, Zone3Sanctuary_EventScript_NextZone_5
Zone3Sanctuary_EventScript_NextZone_1:
# 58 "data/maps/Zone3Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone3Sanctuary_EventScript_NextZone_3:
# 46 "data/maps/Zone3Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 47 "data/maps/Zone3Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 48 "data/maps/Zone3Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone3Sanctuary_EventScript_NextZone_6
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_4:
# 54 "data/maps/Zone3Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_5:
# 56 "data/maps/Zone3Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone3Sanctuary_EventScript_NextZone_1

Zone3Sanctuary_EventScript_NextZone_6:
# 49 "data/maps/Zone3Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 50 "data/maps/Zone3Sanctuary/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 51 "data/maps/Zone3Sanctuary/scripts.pory"
	waitstate
	goto Zone3Sanctuary_EventScript_NextZone_1


Zone3Sanctuary_EventScript_NextZone_Text_0:
# 43 "data/maps/Zone3Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone3Sanctuary_EventScript_NextZone_Text_1:
# 43 "data/maps/Zone3Sanctuary/scripts.pory"
	.string "Settings$"

Zone3Sanctuary_EventScript_NextZone_Text_2:
# 43 "data/maps/Zone3Sanctuary/scripts.pory"
	.string "Documentation$"

Zone3Sanctuary_EventScript_NextZone_Text_3:
# 43 "data/maps/Zone3Sanctuary/scripts.pory"
	.string "Exit$"

Zone3Sanctuary_Text_Reward::
# 61 "data/maps/Zone3Sanctuary/scripts.pory"
	.string "5 Revives!$"
