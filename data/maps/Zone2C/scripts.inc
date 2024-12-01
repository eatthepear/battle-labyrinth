Zone2C_MapScripts::
# 2 "data/maps/Zone2C/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone2C_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Zone2C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2C_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Zone2C/scripts.pory"
	call EventScript_HandleFlashlight
	return

Zone2C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/Zone2C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2C_SILK_SCARF, Zone2C_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 9 "data/maps/Zone2C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 7 "data/maps/Zone2C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2C_EventScript_ItemSilkScarf::
# 15 "data/maps/Zone2C/scripts.pory"
	lock
# 16 "data/maps/Zone2C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2C_SILK_SCARF, Zone2C_EventScript_ItemSilkScarf_2
# 21 "data/maps/Zone2C/scripts.pory"
	waitse
# 22 "data/maps/Zone2C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/maps/Zone2C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 24 "data/maps/Zone2C/scripts.pory"
	setflag FLAG_ITEM_ZONE2C_SILK_SCARF
# 25 "data/maps/Zone2C/scripts.pory"
	addobject VAR_LAST_TALKED
# 26 "data/maps/Zone2C/scripts.pory"
	finditem ITEM_SILK_SCARF
# 27 "data/maps/Zone2C/scripts.pory"
	release
	end

Zone2C_EventScript_ItemSilkScarf_2:
# 17 "data/maps/Zone2C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 18 "data/maps/Zone2C/scripts.pory"
	release
	end

