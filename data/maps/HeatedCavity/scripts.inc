HeatedCavity_MapScripts::
# 2 "data/maps/HeatedCavity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HeatedCavity_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

HeatedCavity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/HeatedCavity/scripts.pory"
	goto_if_set FLAG_ITEM_HEATED_CAVITY_TM_ROCK_TOMB, HeatedCavity_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/HeatedCavity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
	return

HeatedCavity_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/HeatedCavity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


HeatedCavity_EventScript_TMRockTomb::
# 12 "data/maps/HeatedCavity/scripts.pory"
	lock
# 13 "data/maps/HeatedCavity/scripts.pory"
	goto_if_set FLAG_ITEM_HEATED_CAVITY_TM_ROCK_TOMB, HeatedCavity_EventScript_TMRockTomb_2
# 18 "data/maps/HeatedCavity/scripts.pory"
	waitse
# 19 "data/maps/HeatedCavity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/HeatedCavity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 21 "data/maps/HeatedCavity/scripts.pory"
	setflag FLAG_ITEM_HEATED_CAVITY_TM_ROCK_TOMB
# 22 "data/maps/HeatedCavity/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/HeatedCavity/scripts.pory"
	finditem ITEM_TM_ROCK_TOMB
# 24 "data/maps/HeatedCavity/scripts.pory"
	release
	end

HeatedCavity_EventScript_TMRockTomb_2:
# 14 "data/maps/HeatedCavity/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/HeatedCavity/scripts.pory"
	release
	end

