Zone4E_MapScripts::
# 2 "data/maps/Zone4E/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_RANDOM_1, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_POISON_BARB, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4E_EventScript_LeviathanBattle::
# 17 "data/maps/Zone4E/scripts.pory"
	lockall
# 18 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 19 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone4E/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 21 "data/maps/Zone4E/scripts.pory"
	applymovement 4, Common_Movement_WalkRight2
# 22 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone4E/scripts.pory"
	fadeoutbgm 1
# 24 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_Text_Leviathan4Intro
# 25 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 26 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_2
# 26 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone4E_EventScript_LeviathanBattle_2
# 29 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
# 31 "data/maps/Zone4E/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 32 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/Zone4E/scripts.pory"
	giveitem ITEM_TM02
# 34 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
# 35 "data/maps/Zone4E/scripts.pory"
	closemessage
# 36 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 37 "data/maps/Zone4E/scripts.pory"
	removeobject 3
# 38 "data/maps/Zone4E/scripts.pory"
	removeobject 4
# 39 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_4
# 40 "data/maps/Zone4E/scripts.pory"
	setvar VAR_ZONE_4_STATE, 1
# 41 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 42 "data/maps/Zone4E/scripts.pory"
	releaseall
	end

Zone4E_EventScript_LeviathanBattle_2:
# 27 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_BRUTAL, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1


Zone4E_EventScript_ItemRandom1::
# 55 "data/maps/Zone4E/scripts.pory"
	lock
# 56 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_RANDOM_1, Zone4E_EventScript_ItemRandom1_2
# 61 "data/maps/Zone4E/scripts.pory"
	waitse
# 62 "data/maps/Zone4E/scripts.pory"
	removeobject VAR_LAST_TALKED
# 63 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 64 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ITEM_ZONE4E_RANDOM_1
# 65 "data/maps/Zone4E/scripts.pory"
	addobject VAR_LAST_TALKED
# 66 "data/maps/Zone4E/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 67 "data/maps/Zone4E/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 68 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_ItemRandom1_2:
# 57 "data/maps/Zone4E/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 58 "data/maps/Zone4E/scripts.pory"
	release
	end


Zone4E_EventScript_ItemPoisonBarb::
# 73 "data/maps/Zone4E/scripts.pory"
	lock
# 74 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_POISON_BARB, Zone4E_EventScript_ItemPoisonBarb_2
# 79 "data/maps/Zone4E/scripts.pory"
	waitse
# 80 "data/maps/Zone4E/scripts.pory"
	removeobject VAR_LAST_TALKED
# 81 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 82 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ITEM_ZONE4E_POISON_BARB
# 83 "data/maps/Zone4E/scripts.pory"
	addobject VAR_LAST_TALKED
# 84 "data/maps/Zone4E/scripts.pory"
	finditem ITEM_POISON_BARB, 1
# 85 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_ItemPoisonBarb_2:
# 75 "data/maps/Zone4E/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 76 "data/maps/Zone4E/scripts.pory"
	release
	end


Zone4E_EventScript_Sign::
# 90 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_Text_Sign, MSGBOX_SIGN
	end


Zone4E_EventScript_LeviathanBattle_Text_0:
# 32 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: Wargh! Not only are we lost in the\n"
	.string "wood…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: We could've won that battle, you\n"
	.string "misunderstood!\p"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: I guess our teamwork could be\n"
	.string "improved…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Yeah… Oh right, here's a thing for\n"
	.string "those approved!$"

Zone4E_EventScript_LeviathanBattle_Text_1:
# 34 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: That rhyme barely worked!\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Oh, don't be irked!$"

Zone4E_Text_Leviathan4Intro::
# 46 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: Watch out!\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Don't fear!\p"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: The dynamic duo of Ella & Bella…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Will always persevere!\p"
	.string "{COLOR BLUE}Ella & Bella{COLOR DARK_GRAY}: It's time to battle it out,\n"
	.string "victory is near!$"

Zone4E_Text_Leviathan4Defeat::
# 50 "data/maps/Zone4E/scripts.pory"
	.string "We lost!$"

Zone4E_Text_Sign::
# 94 "data/maps/Zone4E/scripts.pory"
	.string "Trainer Tips\p"
	.string "The Pokémon you encounter in different\n"
	.string "areas of the same zone may have slight\l"
	.string "differences!$"
