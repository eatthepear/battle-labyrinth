ZoneS1B_MapScripts::
# 2 "data/maps/ZoneS1B/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ZoneS1B_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ZoneS1B_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ZoneS1B/scripts.pory"
	call EventScript_HandleFlashlight
	return

