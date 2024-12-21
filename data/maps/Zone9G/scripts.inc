Zone9G_MapScripts::
# 2 "data/maps/Zone9G/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone9G/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9G_CHARCOAL, Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone9G/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone9G_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone9G/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone9G_EventScript_ItemCharcoal::
# 12 "data/maps/Zone9G/scripts.pory"
	lock
# 13 "data/maps/Zone9G/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9G_CHARCOAL, Zone9G_EventScript_ItemCharcoal_2
# 18 "data/maps/Zone9G/scripts.pory"
	waitse
# 19 "data/maps/Zone9G/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Zone9G/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 21 "data/maps/Zone9G/scripts.pory"
	setflag FLAG_ITEM_ZONE9G_CHARCOAL
# 22 "data/maps/Zone9G/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/Zone9G/scripts.pory"
	finditem ITEM_CHARCOAL, 1
# 24 "data/maps/Zone9G/scripts.pory"
	release
	end

Zone9G_EventScript_ItemCharcoal_2:
# 14 "data/maps/Zone9G/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/Zone9G/scripts.pory"
	release
	end

