Zone14C_MapScripts::
# 2 "data/maps/Zone14C/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14C_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Zone14C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone14C_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Zone14C/scripts.pory"
	call EventScript_HandleFlashlight
	return

Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Zone14C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14C_DUSK_STONE, Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 9 "data/maps/Zone14C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone14C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 7 "data/maps/Zone14C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone14C_EventScript_DuskStone::
# 15 "data/maps/Zone14C/scripts.pory"
	lock
# 16 "data/maps/Zone14C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14C_DUSK_STONE, Zone14C_EventScript_DuskStone_2
# 21 "data/maps/Zone14C/scripts.pory"
	waitse
# 22 "data/maps/Zone14C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/maps/Zone14C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 24 "data/maps/Zone14C/scripts.pory"
	setflag FLAG_ITEM_ZONE14C_DUSK_STONE
# 25 "data/maps/Zone14C/scripts.pory"
	addobject VAR_LAST_TALKED
# 26 "data/maps/Zone14C/scripts.pory"
	finditem ITEM_DUSK_STONE, 1
# 27 "data/maps/Zone14C/scripts.pory"
	release
	end

Zone14C_EventScript_DuskStone_2:
# 17 "data/maps/Zone14C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 18 "data/maps/Zone14C/scripts.pory"
	release
	end

