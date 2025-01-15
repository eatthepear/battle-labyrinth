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
	giveitem ITEM_TERA_ORB
# 17 "data/maps/Zone10Sanctuary/scripts.pory"
	setflag FLAG_USED_TERA
# 18 "data/maps/Zone10Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone10Sanctuary_EventScript_Intro_2
Zone10Sanctuary_EventScript_Intro_1:
# 22 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox Zone10Sanctuary_EventScript_Intro_Text_1
# 23 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_Upgraded, MSGBOX_DEFAULT
# 24 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 26 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 27 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedItems, MSGBOX_DEFAULT
# 29 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 30 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 31 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 32 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 33 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedServices, MSGBOX_DEFAULT
# 35 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 36 "data/maps/Zone10Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_UpgradedRecovery, MSGBOX_DEFAULT
# 38 "data/maps/Zone10Sanctuary/scripts.pory"
	waitfanfare
# 39 "data/maps/Zone10Sanctuary/scripts.pory"
	setvar VAR_ZONE, 11
# 40 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 41 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 42 "data/maps/Zone10Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 43 "data/maps/Zone10Sanctuary/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone10Sanctuary/scripts.pory"
	releaseall
	end

Zone10Sanctuary_EventScript_Intro_2:
# 19 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox Zone10Sanctuary_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/Zone10Sanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 900
	goto Zone10Sanctuary_EventScript_Intro_1


Zone10Sanctuary_EventScript_NextZone::
# 49 "data/maps/Zone10Sanctuary/scripts.pory"
	lock
# 50 "data/maps/Zone10Sanctuary/scripts.pory"
	faceplayer
# 51 "data/maps/Zone10Sanctuary/scripts.pory"
	message gText_Colress_Greetings
# 52 "data/maps/Zone10Sanctuary/scripts.pory"
	waitmessage
# 53 "data/maps/Zone10Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone10Sanctuary_EventScript_NextZone_Text_0, Zone10Sanctuary_EventScript_NextZone_Text_1, Zone10Sanctuary_EventScript_NextZone_Text_2, Zone10Sanctuary_EventScript_NextZone_Text_3
# 54 "data/maps/Zone10Sanctuary/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/Zone10Sanctuary/scripts.pory"
	case 0, Zone10Sanctuary_EventScript_NextZone_3
# 63 "data/maps/Zone10Sanctuary/scripts.pory"
	case 1, Zone10Sanctuary_EventScript_NextZone_4
# 65 "data/maps/Zone10Sanctuary/scripts.pory"
	case 2, Zone10Sanctuary_EventScript_NextZone_5
Zone10Sanctuary_EventScript_NextZone_1:
# 68 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone10Sanctuary_EventScript_NextZone_3:
# 56 "data/maps/Zone10Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 57 "data/maps/Zone10Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 58 "data/maps/Zone10Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10Sanctuary_EventScript_NextZone_6
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_4:
# 64 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_5:
# 66 "data/maps/Zone10Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone10Sanctuary_EventScript_NextZone_1

Zone10Sanctuary_EventScript_NextZone_6:
# 59 "data/maps/Zone10Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 60 "data/maps/Zone10Sanctuary/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 61 "data/maps/Zone10Sanctuary/scripts.pory"
	waitstate
	goto Zone10Sanctuary_EventScript_NextZone_1


Zone10Sanctuary_EventScript_Intro_Text_0:
# 19 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Because you're playing on Infinite, you also get Blue Shards!$"

Zone10Sanctuary_EventScript_Intro_Text_1:
# 22 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "In battle, you can Terastilize your\n"
	.string "Pokémon now.\p"
	.string "Press {START_BUTTON} to Terastilize!\p"
	.string "After you use it, you'll have to go back\n"
	.string "to the Pokémon Center to recharge it.$"

Zone10Sanctuary_EventScript_NextZone_Text_0:
# 53 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone10Sanctuary_EventScript_NextZone_Text_1:
# 53 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Settings$"

Zone10Sanctuary_EventScript_NextZone_Text_2:
# 53 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Documentation$"

Zone10Sanctuary_EventScript_NextZone_Text_3:
# 53 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "Exit$"

Zone10Sanctuary_Text_Reward::
# 71 "data/maps/Zone10Sanctuary/scripts.pory"
	.string "The Tera Orb!$"
