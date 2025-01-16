Zone8C_MapScripts::
# 2 "data/maps/Zone8C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_RANDOM_2, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_2
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


Zone8C_EventScript_Random2::
# 22 "data/maps/Zone8C/scripts.pory"
	lock
# 23 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_RANDOM_2, Zone8C_EventScript_Random2_2
# 28 "data/maps/Zone8C/scripts.pory"
	waitse
# 29 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 31 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_RANDOM_2
# 32 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 33 "data/maps/Zone8C/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 34 "data/maps/Zone8C/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 35 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_Random2_2:
# 24 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 25 "data/maps/Zone8C/scripts.pory"
	release
	end


Zone8C_EventScript_FullHeal::
# 40 "data/maps/Zone8C/scripts.pory"
	lock
# 41 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_FULL_HEAL, Zone8C_EventScript_FullHeal_2
# 46 "data/maps/Zone8C/scripts.pory"
	waitse
# 47 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 48 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 49 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_FULL_HEAL
# 50 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 51 "data/maps/Zone8C/scripts.pory"
	finditem ITEM_FULL_HEAL, 1
# 52 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_FullHeal_2:
# 42 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 43 "data/maps/Zone8C/scripts.pory"
	release
	end


Zone8C_EventScript_Random1::
# 57 "data/maps/Zone8C/scripts.pory"
	lock
# 58 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_RANDOM_1, Zone8C_EventScript_Random1_2
# 63 "data/maps/Zone8C/scripts.pory"
	waitse
# 64 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 65 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 66 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_RANDOM_1
# 67 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 68 "data/maps/Zone8C/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 69 "data/maps/Zone8C/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 70 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_Random1_2:
# 59 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 60 "data/maps/Zone8C/scripts.pory"
	release
	end


# 74 "data/maps/Zone8C/scripts.pory"

# 75 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Neil::
# 76 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_NEIL, Zone8C_Text_NeilIntro, Zone8C_Text_NeilDefeat
# 77 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Zone8C/scripts.pory"
       end
# 79 "data/maps/Zone8C/scripts.pory"
	   
# 80 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilIntro:
# 81 "data/maps/Zone8C/scripts.pory"
       .string "I'm looking for another path down…$"
# 82 "data/maps/Zone8C/scripts.pory"

# 83 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilDefeat:
# 84 "data/maps/Zone8C/scripts.pory"
       .string "But all I found is you.$"
# 85 "data/maps/Zone8C/scripts.pory"

# 86 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilPostBattle:
# 87 "data/maps/Zone8C/scripts.pory"
       .string "Maybe it's on the other side\n"
# 88 "data/maps/Zone8C/scripts.pory"
       .string "of the mountain?$"
# 89 "data/maps/Zone8C/scripts.pory"

# 90 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Tamara::
# 91 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_TAMARA, Zone8C_Text_TamaraIntro, Zone8C_Text_TamaraDefeat
# 92 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_TamaraPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Zone8C/scripts.pory"
       end
# 94 "data/maps/Zone8C/scripts.pory"

# 95 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraIntro:
# 96 "data/maps/Zone8C/scripts.pory"
	.string "If I win, you have to lead me out of here!$"
# 97 "data/maps/Zone8C/scripts.pory"

# 98 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraDefeat:
# 99 "data/maps/Zone8C/scripts.pory"
	.string "Wahhhhh!!!$"
# 100 "data/maps/Zone8C/scripts.pory"

# 101 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraPostBattle:
# 102 "data/maps/Zone8C/scripts.pory"
	.string "It's my destiny to wander this cave\n"
# 103 "data/maps/Zone8C/scripts.pory"
	.string "forever…$"
