Zone8B_MapScripts::
# 2 "data/maps/Zone8B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_HARD_STONE, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_DUSK_BALL, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_SUPER_POTION, Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8B_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8B_EventScript_ItemHardStone::
# 22 "data/maps/Zone8B/scripts.pory"
	lock
# 23 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_HARD_STONE, Zone8B_EventScript_ItemHardStone_2
# 28 "data/maps/Zone8B/scripts.pory"
	waitse
# 29 "data/maps/Zone8B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 31 "data/maps/Zone8B/scripts.pory"
	setflag FLAG_ITEM_ZONE8B_HARD_STONE
# 32 "data/maps/Zone8B/scripts.pory"
	addobject VAR_LAST_TALKED
# 33 "data/maps/Zone8B/scripts.pory"
	finditem ITEM_HARD_STONE, 1
# 34 "data/maps/Zone8B/scripts.pory"
	release
	end

Zone8B_EventScript_ItemHardStone_2:
# 24 "data/maps/Zone8B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 25 "data/maps/Zone8B/scripts.pory"
	release
	end


Zone8B_EventScript_ItemDuskBall::
# 39 "data/maps/Zone8B/scripts.pory"
	lock
# 40 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_DUSK_BALL, Zone8B_EventScript_ItemDuskBall_2
# 45 "data/maps/Zone8B/scripts.pory"
	waitse
# 46 "data/maps/Zone8B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 47 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 48 "data/maps/Zone8B/scripts.pory"
	setflag FLAG_ITEM_ZONE8B_DUSK_BALL
# 49 "data/maps/Zone8B/scripts.pory"
	addobject VAR_LAST_TALKED
# 50 "data/maps/Zone8B/scripts.pory"
	finditem ITEM_DUSK_BALL, 1
# 51 "data/maps/Zone8B/scripts.pory"
	release
	end

Zone8B_EventScript_ItemDuskBall_2:
# 41 "data/maps/Zone8B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 42 "data/maps/Zone8B/scripts.pory"
	release
	end


Zone8B_EventScript_ItemSuperPotion::
# 56 "data/maps/Zone8B/scripts.pory"
	lock
# 57 "data/maps/Zone8B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8B_SUPER_POTION, Zone8B_EventScript_ItemSuperPotion_2
# 62 "data/maps/Zone8B/scripts.pory"
	waitse
# 63 "data/maps/Zone8B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/Zone8B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 65 "data/maps/Zone8B/scripts.pory"
	setflag FLAG_ITEM_ZONE8B_SUPER_POTION
# 66 "data/maps/Zone8B/scripts.pory"
	addobject VAR_LAST_TALKED
# 67 "data/maps/Zone8B/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 68 "data/maps/Zone8B/scripts.pory"
	release
	end

Zone8B_EventScript_ItemSuperPotion_2:
# 58 "data/maps/Zone8B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 59 "data/maps/Zone8B/scripts.pory"
	release
	end


# 72 "data/maps/Zone8B/scripts.pory"

# 73 "data/maps/Zone8B/scripts.pory"
Zone8B_EventScript_Jayden::
# 74 "data/maps/Zone8B/scripts.pory"
	trainerbattle_single TRAINER_PBL_JAYDEN, Zone8B_Text_JaydenIntro, Zone8B_Text_JaydenDefeat
# 75 "data/maps/Zone8B/scripts.pory"
	msgbox Zone8B_Text_JaydenPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Zone8B/scripts.pory"
	end
# 77 "data/maps/Zone8B/scripts.pory"

# 78 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_JaydenIntro:
# 79 "data/maps/Zone8B/scripts.pory"
	.string "I'm an explorer, a spelunkerer,\n"
# 80 "data/maps/Zone8B/scripts.pory"
	.string "an adventurer, a Hiker!$"
# 81 "data/maps/Zone8B/scripts.pory"

# 82 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_JaydenDefeat:
# 83 "data/maps/Zone8B/scripts.pory"
	.string "Also a bit of a sore loser…$"
# 84 "data/maps/Zone8B/scripts.pory"

# 85 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_JaydenPostBattle:
# 86 "data/maps/Zone8B/scripts.pory"
	.string "Next time, I'll be a winner too!$"
# 87 "data/maps/Zone8B/scripts.pory"

# 88 "data/maps/Zone8B/scripts.pory"
Zone8B_EventScript_Karen::
# 89 "data/maps/Zone8B/scripts.pory"
	trainerbattle_single TRAINER_PBL_KAREN, Zone8B_Text_KarenIntro, Zone8B_Text_KarenDefeat
# 90 "data/maps/Zone8B/scripts.pory"
	msgbox Zone8B_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Zone8B/scripts.pory"
	end
# 92 "data/maps/Zone8B/scripts.pory"

# 93 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_KarenIntro:
# 94 "data/maps/Zone8B/scripts.pory"
	.string "Can I speak to your manager?$"
# 95 "data/maps/Zone8B/scripts.pory"

# 96 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_KarenDefeat:
# 97 "data/maps/Zone8B/scripts.pory"
	.string "What do you mean you don't have a\n"
# 98 "data/maps/Zone8B/scripts.pory"
	.string "manager?$"
# 99 "data/maps/Zone8B/scripts.pory"

# 100 "data/maps/Zone8B/scripts.pory"
Zone8B_Text_KarenPostBattle:
# 101 "data/maps/Zone8B/scripts.pory"
	.string "Argh! You're a cheapskate,\n"
# 102 "data/maps/Zone8B/scripts.pory"
	.string "just like the rest of them!$"
