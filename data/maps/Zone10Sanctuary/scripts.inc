Zone10Sanctuary_MapScripts::
# 2 "data/maps/Zone10Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone10Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone10Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone10Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 10, Zone10Sanctuary_EventScript_Intro
	.2byte 0


Zone10Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone10Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone10Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox Zone10Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone10Sanctuary/scripts.pory"
	giveitem ITEM_MACHETE
# 17 "data/maps/Zone10Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone10Sanctuary_EventScript_Intro_2
Zone10Sanctuary_EventScript_Intro_1:
# 21 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 22 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedServices, MSGBOX_DEFAULT
# 24 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 25 "data/maps/Zone10Sanctuary/scripts.pory"
	setvar VAR_ZONE, 11
# 26 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 27 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 28 "data/maps/Zone10Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 29 "data/maps/Zone10Sanctuary/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone10Sanctuary/scripts.pory"
	releaseall
	end

Zone10Sanctuary_EventScript_Intro_2:
# 18 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox Zone10Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 19 "data/maps/Zone10Sanctuary/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 900
	goto Zone10Sanctuary_EventScript_Intro_1


Zone10Sanctuary_EventScript_NextZone::
# 35 "data/maps/Zone10Sanctuary/scripts.pory"
	lock
# 36 "data/maps/Zone10Sanctuary/scripts.pory"
	faceplayer
# 37 "data/maps/Zone10Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 38 "data/maps/Zone10Sanctuary/scripts.pory"
	waitmessage
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone10Sanctuary_EventScript_NextZone_Text_0, Zone10Sanctuary_EventScript_NextZone_Text_1, Zone10Sanctuary_EventScript_NextZone_Text_2, Zone10Sanctuary_EventScript_NextZone_Text_3
# 40 "data/maps/Zone10Sanctuary/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/Zone10Sanctuary/scripts.pory"
	case 0, Zone10Sanctuary_EventScript_NextZone_3
# 49 "data/maps/Zone10Sanctuary/scripts.pory"
	case 1, Zone10Sanctuary_EventScript_NextZone_4
# 51 "data/maps/Zone10Sanctuary/scripts.pory"
	case 2, Zone10Sanctuary_EventScript_NextZone_5
Zone10Sanctuary_EventScript_NextZone_1:
# 54 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone10Sanctuary_EventScript_NextZone_3:
# 42 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 43 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 44 "data/maps/Zone10Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10Sanctuary_EventScript_NextZone_6
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_4:
# 50 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_5:
# 52 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_6:
# 45 "data/maps/Zone10Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 46 "data/maps/Zone10Sanctuary/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 47 "data/maps/Zone10Sanctuary/scripts.pory"
	waitstate
	goto Zone10Sanctuary_EventScript_NextZone_1


Zone10Sanctuary_EventScript_Intro_Text_0:
# 18 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "You also get Yellow Shards!$"

Zone10Sanctuary_EventScript_NextZone_Text_0:
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone10Sanctuary_EventScript_NextZone_Text_1:
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Settings$"

Zone10Sanctuary_EventScript_NextZone_Text_2:
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Documentation$"

Zone10Sanctuary_EventScript_NextZone_Text_3:
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Exit$"

Zone10Sanctuary_Text_Reward::
# 57 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "The Machete!$"
