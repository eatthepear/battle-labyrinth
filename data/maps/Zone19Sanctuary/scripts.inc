Zone19Sanctuary_MapScripts::
# 2 "data/maps/Zone19Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone19Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone19Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone19Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 18, Zone19Sanctuary_EventScript_Intro
	.2byte 0


Zone19Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone19Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone19Sanctuary/scripts.pory"
	call EventScript_EnterSanctuary
# 10 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox Zone19Sanctuary_Text_Colress_ReachedZone, MSGBOX_DEFAULT
# 11 "data/maps/Zone19Sanctuary/scripts.pory"
	waitfanfare
# 12 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox Zone19Sanctuary_Text_RewardClear18, MSGBOX_DEFAULT
# 13 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox Zone19Sanctuary_Text_18Reward, MSGBOX_DEFAULT
# 14 "data/maps/Zone19Sanctuary/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 5
# 15 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox Zone19Sanctuary_Text_RewardClear19, MSGBOX_DEFAULT
# 16 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox Zone19Sanctuary_Text_19Reward, MSGBOX_DEFAULT
# 17 "data/maps/Zone19Sanctuary/scripts.pory"
	giveitem ITEM_TM37
# 18 "data/maps/Zone19Sanctuary/scripts.pory"
	closemessage
# 19 "data/maps/Zone19Sanctuary/scripts.pory"
	setvar VAR_ZONE, 20
# 20 "data/maps/Zone19Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 21 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 22 "data/maps/Zone19Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 23 "data/maps/Zone19Sanctuary/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone19Sanctuary/scripts.pory"
	releaseall
	return


Zone19Sanctuary_EventScript_NextZone::
# 28 "data/maps/Zone19Sanctuary/scripts.pory"
	lock
# 29 "data/maps/Zone19Sanctuary/scripts.pory"
	faceplayer
# 30 "data/maps/Zone19Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 31 "data/maps/Zone19Sanctuary/scripts.pory"
	waitmessage
# 32 "data/maps/Zone19Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone19Sanctuary_EventScript_NextZone_Text_0, Zone19Sanctuary_EventScript_NextZone_Text_1, Zone19Sanctuary_EventScript_NextZone_Text_2, Zone19Sanctuary_EventScript_NextZone_Text_3
# 33 "data/maps/Zone19Sanctuary/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/Zone19Sanctuary/scripts.pory"
	case 0, Zone19Sanctuary_EventScript_NextZone_3
# 42 "data/maps/Zone19Sanctuary/scripts.pory"
	case 1, Zone19Sanctuary_EventScript_NextZone_4
# 44 "data/maps/Zone19Sanctuary/scripts.pory"
	case 2, Zone19Sanctuary_EventScript_NextZone_5
Zone19Sanctuary_EventScript_NextZone_1:
# 47 "data/maps/Zone19Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone19Sanctuary_EventScript_NextZone_3:
# 35 "data/maps/Zone19Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 36 "data/maps/Zone19Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 37 "data/maps/Zone19Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone19Sanctuary_EventScript_NextZone_6
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_4:
# 43 "data/maps/Zone19Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_5:
# 45 "data/maps/Zone19Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone19Sanctuary_EventScript_NextZone_1

Zone19Sanctuary_EventScript_NextZone_6:
# 38 "data/maps/Zone19Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 39 "data/maps/Zone19Sanctuary/scripts.pory"
	warp MAP_ZONE20A, 255, 32, 76
# 40 "data/maps/Zone19Sanctuary/scripts.pory"
	waitstate
	goto Zone19Sanctuary_EventScript_NextZone_1


Zone19Sanctuary_EventScript_NextZone_Text_0:
# 32 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone19Sanctuary_EventScript_NextZone_Text_1:
# 32 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Settings$"

Zone19Sanctuary_EventScript_NextZone_Text_2:
# 32 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Documentation$"

Zone19Sanctuary_EventScript_NextZone_Text_3:
# 32 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Exit$"

Zone19Sanctuary_Text_Colress_ReachedZone::
# 50 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"

Zone19Sanctuary_Text_RewardClear18::
# 55 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 18{COLOR DARK_GRAY} is…$"

Zone19Sanctuary_Text_18Reward::
# 59 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "5 Yellow Shards!$"

Zone19Sanctuary_Text_RewardClear19::
# 63 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 19{COLOR DARK_GRAY} is…$"

Zone19Sanctuary_Text_19Reward::
# 67 "data/maps/Zone19Sanctuary/scripts.pory"
	.string "TM37 - Thunder Wave!$"