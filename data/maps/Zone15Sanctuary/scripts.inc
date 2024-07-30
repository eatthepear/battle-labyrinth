Zone15Sanctuary_MapScripts::
# 2 "data/maps/Zone15Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone15Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone15Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone15Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 15, Zone15Sanctuary_EventScript_Intro
	.2byte 0


Zone15Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone15Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone15Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone15Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone15Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone15Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox Zone15Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone15Sanctuary/scripts.pory"
	giveitem ITEM_SURFBOARD
# 17 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_Unlocked, MSGBOX_DEFAULT
# 18 "data/maps/Zone15Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedGeneral, MSGBOX_DEFAULT
# 20 "data/maps/Zone15Sanctuary/scripts.pory"
	waitfanfare
# 21 "data/maps/Zone15Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedUnique, MSGBOX_DEFAULT
# 23 "data/maps/Zone15Sanctuary/scripts.pory"
	waitfanfare
# 24 "data/maps/Zone15Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_UnlockedServices, MSGBOX_DEFAULT
# 26 "data/maps/Zone15Sanctuary/scripts.pory"
	waitfanfare
# 27 "data/maps/Zone15Sanctuary/scripts.pory"
	setvar VAR_ZONE, 16
# 28 "data/maps/Zone15Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 29 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 30 "data/maps/Zone15Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 31 "data/maps/Zone15Sanctuary/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone15Sanctuary/scripts.pory"
	releaseall
	end


Zone15Sanctuary_EventScript_NextZone::
# 37 "data/maps/Zone15Sanctuary/scripts.pory"
	lock
# 38 "data/maps/Zone15Sanctuary/scripts.pory"
	faceplayer
# 39 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 40 "data/maps/Zone15Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone15Sanctuary_EventScript_NextZone_Text_0, Zone15Sanctuary_EventScript_NextZone_Text_1, Zone15Sanctuary_EventScript_NextZone_Text_2, Zone15Sanctuary_EventScript_NextZone_Text_3
# 41 "data/maps/Zone15Sanctuary/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Zone15Sanctuary/scripts.pory"
	case 0, Zone15Sanctuary_EventScript_NextZone_3
# 50 "data/maps/Zone15Sanctuary/scripts.pory"
	case 1, Zone15Sanctuary_EventScript_NextZone_4
# 52 "data/maps/Zone15Sanctuary/scripts.pory"
	case 2, Zone15Sanctuary_EventScript_NextZone_5
Zone15Sanctuary_EventScript_NextZone_1:
# 55 "data/maps/Zone15Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone15Sanctuary_EventScript_NextZone_3:
# 43 "data/maps/Zone15Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 44 "data/maps/Zone15Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 45 "data/maps/Zone15Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone15Sanctuary_EventScript_NextZone_6
	goto Zone15Sanctuary_EventScript_NextZone_1

Zone15Sanctuary_EventScript_NextZone_4:
# 51 "data/maps/Zone15Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone15Sanctuary_EventScript_NextZone_1

Zone15Sanctuary_EventScript_NextZone_5:
# 53 "data/maps/Zone15Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone15Sanctuary_EventScript_NextZone_1

Zone15Sanctuary_EventScript_NextZone_6:
# 46 "data/maps/Zone15Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 47 "data/maps/Zone15Sanctuary/scripts.pory"
	warp MAP_ZONE16A, 255, 6, 4
# 48 "data/maps/Zone15Sanctuary/scripts.pory"
	waitstate
	goto Zone15Sanctuary_EventScript_NextZone_1


Zone15Sanctuary_EventScript_NextZone_Text_0:
# 40 "data/maps/Zone15Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone15Sanctuary_EventScript_NextZone_Text_1:
# 40 "data/maps/Zone15Sanctuary/scripts.pory"
	.string "Settings$"

Zone15Sanctuary_EventScript_NextZone_Text_2:
# 40 "data/maps/Zone15Sanctuary/scripts.pory"
	.string "Documentation$"

Zone15Sanctuary_EventScript_NextZone_Text_3:
# 40 "data/maps/Zone15Sanctuary/scripts.pory"
	.string "Exit$"

Zone15Sanctuary_Text_Reward::
# 58 "data/maps/Zone15Sanctuary/scripts.pory"
	.string "The Surfboard!$"