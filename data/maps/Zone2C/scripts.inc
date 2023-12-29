Zone2C_MapScripts::
# 2 "data/maps/Zone2C/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone2C_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Zone2C_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Zone2C/scripts.pory"
	call EventScript_HandleFlashlight
	return

