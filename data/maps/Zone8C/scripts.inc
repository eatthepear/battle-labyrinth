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
	goto_if_set FLAG_ITEM_ZONE8C_SUPER_POTION, Zone8C_MapScripts_MAP_SCRIPT_ON_RESUME_9
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


Zone8C_EventScript_ItemSuperPotion::
# 56 "data/maps/Zone8C/scripts.pory"
	lock
# 57 "data/maps/Zone8C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8C_SUPER_POTION, Zone8C_EventScript_ItemSuperPotion_2
# 62 "data/maps/Zone8C/scripts.pory"
	waitse
# 63 "data/maps/Zone8C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/Zone8C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 65 "data/maps/Zone8C/scripts.pory"
	setflag FLAG_ITEM_ZONE8C_SUPER_POTION
# 66 "data/maps/Zone8C/scripts.pory"
	addobject VAR_LAST_TALKED
# 67 "data/maps/Zone8C/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 68 "data/maps/Zone8C/scripts.pory"
	release
	end

Zone8C_EventScript_ItemSuperPotion_2:
# 58 "data/maps/Zone8C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 59 "data/maps/Zone8C/scripts.pory"
	release
	end


# 72 "data/maps/Zone8C/scripts.pory"

# 73 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Neil::
# 74 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_NEIL, Zone8C_Text_NeilIntro, Zone8C_Text_NeilDefeat
# 75 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_NeilPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Zone8C/scripts.pory"
       end
# 77 "data/maps/Zone8C/scripts.pory"
	   
# 78 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilIntro:
# 79 "data/maps/Zone8C/scripts.pory"
       .string "I'm looking for another path down…$"
# 80 "data/maps/Zone8C/scripts.pory"

# 81 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilDefeat:
# 82 "data/maps/Zone8C/scripts.pory"
       .string "But all I found is you.$"
# 83 "data/maps/Zone8C/scripts.pory"

# 84 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_NeilPostBattle:
# 85 "data/maps/Zone8C/scripts.pory"
       .string "Maybe it's on the other side\n"
# 86 "data/maps/Zone8C/scripts.pory"
       .string "of the mountain?$"
# 87 "data/maps/Zone8C/scripts.pory"

# 88 "data/maps/Zone8C/scripts.pory"
Zone8C_EventScript_Tamara::
# 89 "data/maps/Zone8C/scripts.pory"
       trainerbattle_single TRAINER_PBL_TAMARA, Zone8C_Text_TamaraIntro, Zone8C_Text_TamaraDefeat
# 90 "data/maps/Zone8C/scripts.pory"
       msgbox Zone8C_Text_TamaraPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Zone8C/scripts.pory"
       end
# 92 "data/maps/Zone8C/scripts.pory"

# 93 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraIntro:
# 94 "data/maps/Zone8C/scripts.pory"
	.string "If I win, you have to lead me out of here!$"
# 95 "data/maps/Zone8C/scripts.pory"

# 96 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraDefeat:
# 97 "data/maps/Zone8C/scripts.pory"
	.string "Wahhhhh!!!$"
# 98 "data/maps/Zone8C/scripts.pory"

# 99 "data/maps/Zone8C/scripts.pory"
Zone8C_Text_TamaraPostBattle:
# 100 "data/maps/Zone8C/scripts.pory"
	.string "It's my destiny to wander this cave\n"
# 101 "data/maps/Zone8C/scripts.pory"
	.string "forever…$"
