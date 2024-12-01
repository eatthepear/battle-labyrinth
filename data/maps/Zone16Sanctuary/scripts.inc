Zone16Sanctuary_MapScripts::
# 2 "data/maps/Zone16Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone16Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone16Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone16Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 16, Zone16Sanctuary_EventScript_Intro
	.2byte 0


Zone16Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone16Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone16Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone16Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 11 "data/maps/Zone16Sanctuary/scripts.pory"
	msgbox gText_Colress_ReachedZone, MSGBOX_DEFAULT
# 12 "data/maps/Zone16Sanctuary/scripts.pory"
	waitfanfare
# 13 "data/maps/Zone16Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 14 "data/maps/Zone16Sanctuary/scripts.pory"
	msgbox gText_RewardClear, MSGBOX_DEFAULT
# 15 "data/maps/Zone16Sanctuary/scripts.pory"
	msgbox Zone16Sanctuary_Text_Reward, MSGBOX_DEFAULT
# 16 "data/maps/Zone16Sanctuary/scripts.pory"
	giveitem ITEM_ABSORB_BULB, 3
# 17 "data/maps/Zone16Sanctuary/scripts.pory"
	giveitem ITEM_LUMINOUS_MOSS, 3
# 18 "data/maps/Zone16Sanctuary/scripts.pory"
	setvar VAR_ZONE, 17
# 19 "data/maps/Zone16Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 20 "data/maps/Zone16Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 21 "data/maps/Zone16Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 22 "data/maps/Zone16Sanctuary/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone16Sanctuary/scripts.pory"
	releaseall
	end


Zone16Sanctuary_EventScript_NextZone::
# 28 "data/maps/Zone16Sanctuary/scripts.pory"
	lock
# 29 "data/maps/Zone16Sanctuary/scripts.pory"
	faceplayer
# 30 "data/maps/Zone16Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 31 "data/maps/Zone16Sanctuary/scripts.pory"
	waitmessage
# 32 "data/maps/Zone16Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone16Sanctuary_EventScript_NextZone_Text_0, Zone16Sanctuary_EventScript_NextZone_Text_1, Zone16Sanctuary_EventScript_NextZone_Text_2, Zone16Sanctuary_EventScript_NextZone_Text_3
# 33 "data/maps/Zone16Sanctuary/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Zone16Sanctuary/scripts.pory"
	case 0, Zone16Sanctuary_EventScript_NextZone_3
# 45 "data/maps/Zone16Sanctuary/scripts.pory"
	case 1, Zone16Sanctuary_EventScript_NextZone_4
# 47 "data/maps/Zone16Sanctuary/scripts.pory"
	case 2, Zone16Sanctuary_EventScript_NextZone_5
Zone16Sanctuary_EventScript_NextZone_1:
# 50 "data/maps/Zone16Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone16Sanctuary_EventScript_NextZone_3:
# 35 "data/maps/Zone16Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 36 "data/maps/Zone16Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 37 "data/maps/Zone16Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone16Sanctuary_EventScript_NextZone_6
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_4:
# 46 "data/maps/Zone16Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_5:
# 48 "data/maps/Zone16Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone16Sanctuary_EventScript_NextZone_1

Zone16Sanctuary_EventScript_NextZone_6:
# 38 "data/maps/Zone16Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 39 "data/maps/Zone16Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 40 "data/maps/Zone16Sanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_PORYGON
# 41 "data/maps/Zone16Sanctuary/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_15
# 42 "data/maps/Zone16Sanctuary/scripts.pory"
	warp MAP_ZONE17A, 255, 13, 38
# 43 "data/maps/Zone16Sanctuary/scripts.pory"
	waitstate
	goto Zone16Sanctuary_EventScript_NextZone_1


Zone16Sanctuary_EventScript_NextZone_Text_0:
# 32 "data/maps/Zone16Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone16Sanctuary_EventScript_NextZone_Text_1:
# 32 "data/maps/Zone16Sanctuary/scripts.pory"
	.string "Settings$"

Zone16Sanctuary_EventScript_NextZone_Text_2:
# 32 "data/maps/Zone16Sanctuary/scripts.pory"
	.string "Documentation$"

Zone16Sanctuary_EventScript_NextZone_Text_3:
# 32 "data/maps/Zone16Sanctuary/scripts.pory"
	.string "Exit$"

Zone16Sanctuary_Text_Reward::
# 53 "data/maps/Zone16Sanctuary/scripts.pory"
	.string "3 Absorb Bulbs and 3 Luminous Mosses!$"
