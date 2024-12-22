Zone20Sanctuary_MapScripts::
# 2 "data/maps/Zone20Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone20Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone20Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone20Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 20, Zone20Sanctuary_EventScript_Intro
	.2byte 0


Zone20Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone20Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone20Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone20Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone20Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone20Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox Zone20Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone20Sanctuary/scripts.pory"
	giveitem ITEM_TM27
# 17 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 18 "data/maps/Zone20Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedUnique, MSGBOX_DEFAULT
# 20 "data/maps/Zone20Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone20Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedServices, MSGBOX_DEFAULT
# 23 "data/maps/Zone20Sanctuary/scripts.pory"
	waitfanfare
# 24 "data/maps/Zone20Sanctuary/scripts.pory"
	setvar VAR_ZONE, 21
# 25 "data/maps/Zone20Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 26 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 27 "data/maps/Zone20Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 28 "data/maps/Zone20Sanctuary/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone20Sanctuary/scripts.pory"
	releaseall
	end


Zone20Sanctuary_EventScript_NextZone::
# 34 "data/maps/Zone20Sanctuary/scripts.pory"
	lock
# 35 "data/maps/Zone20Sanctuary/scripts.pory"
	faceplayer
# 36 "data/maps/Zone20Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 37 "data/maps/Zone20Sanctuary/scripts.pory"
	waitmessage
# 38 "data/maps/Zone20Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone20Sanctuary_EventScript_NextZone_Text_0, Zone20Sanctuary_EventScript_NextZone_Text_1, Zone20Sanctuary_EventScript_NextZone_Text_2, Zone20Sanctuary_EventScript_NextZone_Text_3
# 39 "data/maps/Zone20Sanctuary/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/Zone20Sanctuary/scripts.pory"
	case 0, Zone20Sanctuary_EventScript_NextZone_3
# 48 "data/maps/Zone20Sanctuary/scripts.pory"
	case 1, Zone20Sanctuary_EventScript_NextZone_4
# 50 "data/maps/Zone20Sanctuary/scripts.pory"
	case 2, Zone20Sanctuary_EventScript_NextZone_5
Zone20Sanctuary_EventScript_NextZone_1:
# 53 "data/maps/Zone20Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone20Sanctuary_EventScript_NextZone_3:
# 41 "data/maps/Zone20Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 42 "data/maps/Zone20Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 43 "data/maps/Zone20Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone20Sanctuary_EventScript_NextZone_6
	goto Zone20Sanctuary_EventScript_NextZone_1

Zone20Sanctuary_EventScript_NextZone_4:
# 49 "data/maps/Zone20Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone20Sanctuary_EventScript_NextZone_1

Zone20Sanctuary_EventScript_NextZone_5:
# 51 "data/maps/Zone20Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone20Sanctuary_EventScript_NextZone_1

Zone20Sanctuary_EventScript_NextZone_6:
# 44 "data/maps/Zone20Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 45 "data/maps/Zone20Sanctuary/scripts.pory"
	warp MAP_ZONE21A, 255, 38, 100
# 46 "data/maps/Zone20Sanctuary/scripts.pory"
	waitstate
	goto Zone20Sanctuary_EventScript_NextZone_1


Zone20Sanctuary_EventScript_NextZone_Text_0:
# 38 "data/maps/Zone20Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone20Sanctuary_EventScript_NextZone_Text_1:
# 38 "data/maps/Zone20Sanctuary/scripts.pory"
	.string "Settings$"

Zone20Sanctuary_EventScript_NextZone_Text_2:
# 38 "data/maps/Zone20Sanctuary/scripts.pory"
	.string "Documentation$"

Zone20Sanctuary_EventScript_NextZone_Text_3:
# 38 "data/maps/Zone20Sanctuary/scripts.pory"
	.string "Exit$"

Zone20Sanctuary_Text_Reward::
# 56 "data/maps/Zone20Sanctuary/scripts.pory"
	.string "TM27 - Sludge Bomb!$"
