Zone8A_MapScripts::
# 2 "data/maps/Zone8A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_POTION_X2, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_GREAT_BALL, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8A_EventScript_ItemMagnet::
# 22 "data/maps/Zone8A/scripts.pory"
	lock
# 23 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_EventScript_ItemMagnet_2
# 28 "data/maps/Zone8A/scripts.pory"
	waitse
# 29 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 31 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_MAGNET
# 32 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 33 "data/maps/Zone8A/scripts.pory"
	finditem ITEM_MAGNET, 1
# 34 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_ItemMagnet_2:
# 24 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 25 "data/maps/Zone8A/scripts.pory"
	release
	end


Zone8A_EventScript_ItemPotion2::
# 39 "data/maps/Zone8A/scripts.pory"
	lock
# 40 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_POTION_X2, Zone8A_EventScript_ItemPotion2_2
# 45 "data/maps/Zone8A/scripts.pory"
	waitse
# 46 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 47 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 48 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_POTION_X2
# 49 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 50 "data/maps/Zone8A/scripts.pory"
	finditem ITEM_POTION, 2
# 51 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_ItemPotion2_2:
# 41 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 42 "data/maps/Zone8A/scripts.pory"
	release
	end


Zone8A_EventScript_ItemGreatBall::
# 56 "data/maps/Zone8A/scripts.pory"
	lock
# 57 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_GREAT_BALL, Zone8A_EventScript_ItemGreatBall_2
# 62 "data/maps/Zone8A/scripts.pory"
	waitse
# 63 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 65 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_GREAT_BALL
# 66 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 67 "data/maps/Zone8A/scripts.pory"
	finditem ITEM_GREAT_BALL, 1
# 68 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_ItemGreatBall_2:
# 58 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 59 "data/maps/Zone8A/scripts.pory"
	release
	end


# 72 "data/maps/Zone8A/scripts.pory"

# 73 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Jimmy::
# 74 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JIMMY, Zone8A_Text_JimmyIntro, Zone8A_Text_JimmyDefeat
# 75 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_JimmyPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Zone8A/scripts.pory"
	end
# 77 "data/maps/Zone8A/scripts.pory"

# 78 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyIntro:
# 79 "data/maps/Zone8A/scripts.pory"
	.string "Rare Pokémon… Do you have them?$"
# 80 "data/maps/Zone8A/scripts.pory"

# 81 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyDefeat:
# 82 "data/maps/Zone8A/scripts.pory"
	.string "You do! You do have rare Pokémon!$"
# 83 "data/maps/Zone8A/scripts.pory"

# 84 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyPostBattle:
# 85 "data/maps/Zone8A/scripts.pory"
	.string "I want to collect all the rare\n"
# 86 "data/maps/Zone8A/scripts.pory"
	.string "Pokémon in the world!$"
# 87 "data/maps/Zone8A/scripts.pory"

# 88 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Beckham::
# 89 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BECKHAM, Zone8A_Text_BeckhamIntro, Zone8A_Text_BeckhamDefeat
# 90 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_BeckhamPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Zone8A/scripts.pory"
	end
# 92 "data/maps/Zone8A/scripts.pory"

# 93 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamIntro:
# 94 "data/maps/Zone8A/scripts.pory"
	.string "What's your favorite monster movie?$"
# 95 "data/maps/Zone8A/scripts.pory"

# 96 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamDefeat:
# 97 "data/maps/Zone8A/scripts.pory"
	.string "My favorite is Godzilla?$"
# 98 "data/maps/Zone8A/scripts.pory"

# 99 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamPostBattle:
# 100 "data/maps/Zone8A/scripts.pory"
	.string "Which one is my favorite?\n"
# 101 "data/maps/Zone8A/scripts.pory"
	.string "That's a good question…\l"
# 102 "data/maps/Zone8A/scripts.pory"
	.string "I'll have to think about it!$"
# 103 "data/maps/Zone8A/scripts.pory"

# 104 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Emiliano::
# 105 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_EMILIANO, Zone8A_Text_EmilianoIntro, Zone8A_Text_EmilianoDefeat
# 106 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_EmilianoPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Zone8A/scripts.pory"
	end
# 108 "data/maps/Zone8A/scripts.pory"

# 109 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoIntro:
# 110 "data/maps/Zone8A/scripts.pory"
	.string "I'm so hungry…$"
# 111 "data/maps/Zone8A/scripts.pory"

# 112 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoDefeat:
# 113 "data/maps/Zone8A/scripts.pory"
	.string "It's because I keep thinking about\n"
# 114 "data/maps/Zone8A/scripts.pory"
	.string "pancakes!$"
# 115 "data/maps/Zone8A/scripts.pory"

# 116 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoPostBattle:
# 117 "data/maps/Zone8A/scripts.pory"
	.string "Mmm… Pancakes…$"