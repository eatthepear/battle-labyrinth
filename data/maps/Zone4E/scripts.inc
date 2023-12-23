Zone4E_MapScripts::
# 2 "data/maps/Zone4E/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4E_EventScript_LeviathanBattleLeft::
# 12 "data/maps/Zone4E/scripts.pory"
	lockall
# 13 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 14 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 15 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 16 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 17 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 18 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 19 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone4E/scripts.pory"
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattleMiddle::
# 24 "data/maps/Zone4E/scripts.pory"
	lockall
# 25 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 26 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 27 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 28 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone4E/scripts.pory"
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattleRight::
# 33 "data/maps/Zone4E/scripts.pory"
	lockall
# 34 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 35 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 36 "data/maps/Zone4E/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 37 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 38 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 41 "data/maps/Zone4E/scripts.pory"
	goto Zone4E_EventScript_LeviathanBattle
	return


Zone4E_EventScript_LeviathanBattle::
# 45 "data/maps/Zone4E/scripts.pory"
	fadeoutbgm 1
# 46 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_Text_Leviathan4Intro
# 47 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 48 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_2
# 48 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone4E_EventScript_LeviathanBattle_2
# 52 "data/maps/Zone4E/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
# 53 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_RITA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
# 55 "data/maps/Zone4E/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 56 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0
# 57 "data/maps/Zone4E/scripts.pory"
	giveitem ITEM_TM02
# 58 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
# 59 "data/maps/Zone4E/scripts.pory"
	closemessage
# 60 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/Zone4E/scripts.pory"
	removeobject 1
# 62 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_4
# 63 "data/maps/Zone4E/scripts.pory"
	setvar VAR_ZONE_4_STATE, 1
# 64 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_8
Zone4E_EventScript_LeviathanBattle_7:
# 68 "data/maps/Zone4E/scripts.pory"
	releaseall
	end

Zone4E_EventScript_LeviathanBattle_2:
# 49 "data/maps/Zone4E/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_RITA
# 50 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_RITA_LEVIATHAN_4_BRUTAL, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1

Zone4E_EventScript_LeviathanBattle_8:
# 66 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
	goto Zone4E_EventScript_LeviathanBattle_7


Zone4E_EventScript_ItemSuperPotion::
# 82 "data/maps/Zone4E/scripts.pory"
	lock
# 83 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_SUPER_POTION, Zone4E_EventScript_ItemSuperPotion_2
# 88 "data/maps/Zone4E/scripts.pory"
	waitse
# 89 "data/maps/Zone4E/scripts.pory"
	removeobject VAR_LAST_TALKED
# 90 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 91 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ITEM_ZONE4E_SUPER_POTION
# 92 "data/maps/Zone4E/scripts.pory"
	addobject VAR_LAST_TALKED
# 93 "data/maps/Zone4E/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 94 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_ItemSuperPotion_2:
# 84 "data/maps/Zone4E/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 85 "data/maps/Zone4E/scripts.pory"
	release
	end


# 98 "data/maps/Zone4E/scripts.pory"

# 99 "data/maps/Zone4E/scripts.pory"
Zone4E_EventScript_Sign::
# 100 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_Text_Sign, MSGBOX_SIGN
# 101 "data/maps/Zone4E/scripts.pory"
	end
# 102 "data/maps/Zone4E/scripts.pory"

# 103 "data/maps/Zone4E/scripts.pory"
Zone4E_Text_Sign:
# 104 "data/maps/Zone4E/scripts.pory"
	.string "Trainer Tips!\p"
# 105 "data/maps/Zone4E/scripts.pory"
	.string "Golden Trees often have Berries\n"
# 106 "data/maps/Zone4E/scripts.pory"
	.string "or wild Pokémon!$"

Zone4E_EventScript_LeviathanBattle_Text_0:
# 56 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: That was great! I hope our\n"
	.string "Pokémon are friends now, too!\p"
	.string "Here, I want you to have this gift, from\n"
	.string "me!\p"
	.string "The best way to bring out one's inner\n"
	.string "power is through friendship!$"

Zone4E_EventScript_LeviathanBattle_Text_1:
# 58 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Alright, I'm off to go meet some\n"
	.string "more friends!\p"
	.string "See you around!$"

Zone4E_Text_Leviathan4Intro::
# 72 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Rita{COLOR DARK_GRAY}: Hey! I'm {COLOR BLUE}Rita{COLOR DARK_GRAY}.\p"
	.string "Nice to meet you!\p"
	.string "People always criticize me for being too\n"
	.string "friendly with others.\p"
	.string "But I just find that's the best way to\n"
	.string "make new friends!\p"
	.string "Well, how about a battle, friend?$"

Zone4E_Text_Leviathan4Defeat::
# 76 "data/maps/Zone4E/scripts.pory"
	.string "That was a lovely battle.\n"
	.string "Thank you!$"
