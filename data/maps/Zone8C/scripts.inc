Zone8C_MapScripts::
# 2 "data/maps/Zone8C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_NEVER_MELT_ICE, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_FULL_HEAL, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_RANDOM_1, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8C_EventScript_ItemNeverMeltIce::
# 22 "data/maps/Zone8C/scripts.pory"
	lock
# 23 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_NEVER_MELT_ICE, Zone8C_EventScript_ItemNeverMeltIce_2
# 28 "data/maps/Zone8C/scripts.pory"
	waitse
# 29 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 31 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_NEVER_MELT_ICE
# 32 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 33 "data/maps/Zone8C/scripts.pory"
	finditem ITEM_NEVER_MELT_ICE, 1
# 34 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_ItemNeverMeltIce_2:
# 24 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 25 "data/maps/Zone8C/scripts.pory"
	release
	end


Zone8C_EventScript_ItemFullHeal::
# 39 "data/maps/Zone8C/scripts.pory"
	lock
# 40 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_FULL_HEAL, Zone8C_EventScript_ItemFullHeal_2
# 45 "data/maps/Zone8C/scripts.pory"
	waitse
# 46 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 47 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 48 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_FULL_HEAL
# 49 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 50 "data/maps/Zone8C/scripts.pory"
	finditem ITEM_FULL_HEAL, 1
# 51 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_ItemFullHeal_2:
# 41 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 42 "data/maps/Zone8C/scripts.pory"
	release
	end


Zone8C_EventScript_ItemRandom1::
# 56 "data/maps/Zone8C/scripts.pory"
	lock
# 57 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_RANDOM_1, Zone8C_EventScript_ItemRandom1_2
# 62 "data/maps/Zone8C/scripts.pory"
	waitse
# 63 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 65 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_RANDOM_1
# 66 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 67 "data/maps/Zone8C/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 68 "data/maps/Zone8C/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 69 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_ItemRandom1_2:
# 58 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 59 "data/maps/Zone8C/scripts.pory"
	release
	end


# 73 "data/maps/Zone8C/scripts.pory"

# 74 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Neil::
# 75 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_NEIL, Zone8C_Text_NeilIntro, Zone8C_Text_NeilDefeat
# 76 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/Zone8C/scripts.pory"
       end
# 78 "data/maps/Zone8C/scripts.pory"
	   
# 79 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilIntro:
# 80 "data/maps/Zone8C/scripts.pory"
       .string "I'm looking for another path down…$"
# 81 "data/maps/Zone8C/scripts.pory"

# 82 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilDefeat:
# 83 "data/maps/Zone8C/scripts.pory"
       .string "But all I found is you.$"
# 84 "data/maps/Zone8C/scripts.pory"

# 85 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilPostBattle:
# 86 "data/maps/Zone8C/scripts.pory"
       .string "Maybe it's on the other side\n"
# 87 "data/maps/Zone8C/scripts.pory"
       .string "of the mountain?$"
# 88 "data/maps/Zone8C/scripts.pory"

# 89 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Tamara::
# 90 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_TAMARA, Zone8C_Text_TamaraIntro, Zone8C_Text_TamaraDefeat
# 91 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_TamaraPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Zone8C/scripts.pory"
       end
# 93 "data/maps/Zone8C/scripts.pory"

# 94 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraIntro:
# 95 "data/maps/Zone8C/scripts.pory"
	.string "If I win, you have to lead me out of here!$"
# 96 "data/maps/Zone8C/scripts.pory"

# 97 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraDefeat:
# 98 "data/maps/Zone8C/scripts.pory"
	.string "Wahhhhh!!!$"
# 99 "data/maps/Zone8C/scripts.pory"

# 100 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraPostBattle:
# 101 "data/maps/Zone8C/scripts.pory"
	.string "It's my destiny to wander this cave\n"
# 102 "data/maps/Zone8C/scripts.pory"
	.string "forever…$"
