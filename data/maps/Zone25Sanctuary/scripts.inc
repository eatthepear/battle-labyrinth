Zone25Sanctuary_MapScripts::
# 2 "data/maps/Zone25Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone25Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone25Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone25Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 25, Zone25Sanctuary_EventScript_Intro
	.2byte 0


Zone25Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone25Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone25Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox Zone25Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
# 11 "data/maps/Zone25Sanctuary/scripts.pory"
	waitfanfare
# 12 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox Zone25Sanctuary_Text_RewardClear24, MSGBOX_DEFAULT
# 13 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox Zone25Sanctuary_Text_24Reward, MSGBOX_DEFAULT
# 14 "data/maps/Zone25Sanctuary/scripts.pory"
	giveitem ITEM_TM38
# 15 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox Zone25Sanctuary_Text_RewardClear25, MSGBOX_DEFAULT
# 16 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox Zone25Sanctuary_Text_25Reward, MSGBOX_DEFAULT
# 17 "data/maps/Zone25Sanctuary/scripts.pory"
	giveitem ITEM_MEGA_RING
# 18 "data/maps/Zone25Sanctuary/scripts.pory"
	closemessage
# 19 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 20 "data/maps/Zone25Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedGeneral, MSGBOX_DEFAULT
# 22 "data/maps/Zone25Sanctuary/scripts.pory"
	waitfanfare
# 23 "data/maps/Zone25Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedUnique, MSGBOX_DEFAULT
# 25 "data/maps/Zone25Sanctuary/scripts.pory"
	waitfanfare
# 26 "data/maps/Zone25Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedServices, MSGBOX_DEFAULT
# 28 "data/maps/Zone25Sanctuary/scripts.pory"
	waitfanfare
# 29 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedWarp, MSGBOX_DEFAULT
# 30 "data/maps/Zone25Sanctuary/scripts.pory"
	setvar VAR_ZONE, 26
# 31 "data/maps/Zone25Sanctuary/scripts.pory"
	setvar VAR_ZONE_B1_STATE, 1
# 32 "data/maps/Zone25Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 33 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 34 "data/maps/Zone25Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 35 "data/maps/Zone25Sanctuary/scripts.pory"
	waitmovement 0
# 36 "data/maps/Zone25Sanctuary/scripts.pory"
	releaseall
	end


Zone25Sanctuary_EventScript_NextZone::
# 41 "data/maps/Zone25Sanctuary/scripts.pory"
	lock
# 42 "data/maps/Zone25Sanctuary/scripts.pory"
	faceplayer
# 43 "data/maps/Zone25Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 44 "data/maps/Zone25Sanctuary/scripts.pory"
	waitmessage
# 45 "data/maps/Zone25Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone25Sanctuary_EventScript_NextZone_Text_0, Zone25Sanctuary_EventScript_NextZone_Text_1, Zone25Sanctuary_EventScript_NextZone_Text_2, Zone25Sanctuary_EventScript_NextZone_Text_3
# 46 "data/maps/Zone25Sanctuary/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/Zone25Sanctuary/scripts.pory"
	case 0, Zone25Sanctuary_EventScript_NextZone_3
# 55 "data/maps/Zone25Sanctuary/scripts.pory"
	case 1, Zone25Sanctuary_EventScript_NextZone_4
# 57 "data/maps/Zone25Sanctuary/scripts.pory"
	case 2, Zone25Sanctuary_EventScript_NextZone_5
Zone25Sanctuary_EventScript_NextZone_1:
# 60 "data/maps/Zone25Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone25Sanctuary_EventScript_NextZone_3:
# 48 "data/maps/Zone25Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 49 "data/maps/Zone25Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 50 "data/maps/Zone25Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone25Sanctuary_EventScript_NextZone_6
	goto Zone25Sanctuary_EventScript_NextZone_1

Zone25Sanctuary_EventScript_NextZone_4:
# 56 "data/maps/Zone25Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone25Sanctuary_EventScript_NextZone_1

Zone25Sanctuary_EventScript_NextZone_5:
# 58 "data/maps/Zone25Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone25Sanctuary_EventScript_NextZone_1

Zone25Sanctuary_EventScript_NextZone_6:
# 51 "data/maps/Zone25Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 52 "data/maps/Zone25Sanctuary/scripts.pory"
	warp MAP_ZONE26A, 255, 13, 29
# 53 "data/maps/Zone25Sanctuary/scripts.pory"
	waitstate
	goto Zone25Sanctuary_EventScript_NextZone_1


Zone25Sanctuary_EventScript_NextZone_Text_0:
# 45 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone25Sanctuary_EventScript_NextZone_Text_1:
# 45 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Settings$"

Zone25Sanctuary_EventScript_NextZone_Text_2:
# 45 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Documentation$"

Zone25Sanctuary_EventScript_NextZone_Text_3:
# 45 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Exit$"

Zone25Sanctuary_Text_Reward::
# 63 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "The Assault Vest!$"

Zone25Sanctuary_Text_Colress_ReachedZone::
# 67 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\nYou have cleared {COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}.$"

Zone25Sanctuary_Text_RewardClear24::
# 71 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 24{COLOR DARK_GRAY} is…$"

Zone25Sanctuary_Text_24Reward::
# 75 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "TM38 - Rock Slide!$"

Zone25Sanctuary_Text_RewardClear25::
# 79 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 25{COLOR DARK_GRAY} is…$"

Zone25Sanctuary_Text_25Reward::
# 83 "data/maps/Zone25Sanctuary/scripts.pory"
	.string "The Mega Ring!$"
