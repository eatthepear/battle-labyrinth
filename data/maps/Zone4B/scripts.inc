Zone4B_MapScripts::
# 2 "data/maps/Zone4B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4B_RANDOM_1, Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone4B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone4B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4B_EventScript_ItemRandom1::
# 12 "data/maps/Zone4B/scripts.pory"
	lock
# 13 "data/maps/Zone4B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4B_RANDOM_1, Zone4B_EventScript_ItemRandom1_2
# 18 "data/maps/Zone4B/scripts.pory"
	waitse
# 19 "data/maps/Zone4B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Zone4B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 21 "data/maps/Zone4B/scripts.pory"
	setflag FLAG_ITEM_ZONE4B_RANDOM_1
# 22 "data/maps/Zone4B/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/Zone4B/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 24 "data/maps/Zone4B/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 25 "data/maps/Zone4B/scripts.pory"
	release
	end

Zone4B_EventScript_ItemRandom1_2:
# 14 "data/maps/Zone4B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/Zone4B/scripts.pory"
	release
	end


Zone4B_EventScript_Callie::
# 31 "data/maps/Zone4B/scripts.pory"
	trainerbattle_single TRAINER_PBL_CALLIE, Zone4B_EventScript_Callie_Text_0, Zone4B_EventScript_Callie_Text_1
# 32 "data/maps/Zone4B/scripts.pory"
	msgbox Zone4B_EventScript_Callie_Text_2, MSGBOX_AUTOCLOSE
	end


Zone4B_EventScript_Sign::
# 37 "data/maps/Zone4B/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 38 "data/maps/Zone4B/scripts.pory"
	msgbox Zone4B_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


# 42 "data/maps/Zone4B/scripts.pory"

# 43 "data/maps/Zone4B/scripts.pory"
Zone4B_EventScript_Ralph::
# 44 "data/maps/Zone4B/scripts.pory"
	trainerbattle_single TRAINER_PBL_RALPH, Zone4B_Text_RalphIntro, Zone4B_Text_RalphDefeat
# 45 "data/maps/Zone4B/scripts.pory"
	msgbox Zone4B_Text_RalphPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Zone4B/scripts.pory"
	end
# 47 "data/maps/Zone4B/scripts.pory"

# 48 "data/maps/Zone4B/scripts.pory"
Zone4B_Text_RalphIntro:
# 49 "data/maps/Zone4B/scripts.pory"
	.string "Ugh, where am I? Maybe you'll\n"
# 50 "data/maps/Zone4B/scripts.pory"
	.string "tell me if I beat you!$"
# 51 "data/maps/Zone4B/scripts.pory"

# 52 "data/maps/Zone4B/scripts.pory"
Zone4B_Text_RalphDefeat:
# 53 "data/maps/Zone4B/scripts.pory"
	.string "You don't know either? Oof!$"
# 54 "data/maps/Zone4B/scripts.pory"

# 55 "data/maps/Zone4B/scripts.pory"
Zone4B_Text_RalphPostBattle:
# 56 "data/maps/Zone4B/scripts.pory"
	.string "I guess the more important question is,\n"
# 57 "data/maps/Zone4B/scripts.pory"
	.string "where am I going?$"

Zone4B_EventScript_Callie_Text_0:
# 31 "data/maps/Zone4B/scripts.pory"
	.string "Do you like doggos as much as I do?$"

Zone4B_EventScript_Callie_Text_1:
# 31 "data/maps/Zone4B/scripts.pory"
	.string "My poor doggos!$"

Zone4B_EventScript_Callie_Text_2:
# 32 "data/maps/Zone4B/scripts.pory"
	.string "As much as I love dogs, I also kind of\n"
	.string "like cats.$"

Zone4B_EventScript_Sign_Text_0:
# 38 "data/maps/Zone4B/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can see detailed information about\n"
	.string "a Pokémon species in its Pokédex entry\l"
	.string "after capturing it, such as what moves\l"
	.string "it learns or how to evolve it.$"
