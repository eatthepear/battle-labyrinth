HiddenGrotto_MapScripts::
# 2 "data/maps/HiddenGrotto/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, HiddenGrotto_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

HiddenGrotto_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/HiddenGrotto/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, VAR_GROTTO_SPECIES + OBJ_EVENT_MON
	return

