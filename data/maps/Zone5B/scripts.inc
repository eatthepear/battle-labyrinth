Zone5B_MapScripts::
# 2 "data/maps/Zone5B/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone5B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone5B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone5B/scripts.pory"
	map_script_2 VAR_ZONE_5_STATE, 1, Zone5B_EventScript_Intro
	.2byte 0


Zone5B_EventScript_Intro::
# 8 "data/maps/Zone5B/scripts.pory"
	lockall
# 9 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 10 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 11 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 12 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 13 "data/maps/Zone5B/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 15 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 16 "data/maps/Zone5B/scripts.pory"
	special RemoveCameraObject
# 17 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 18 "data/maps/Zone5B/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone5B/scripts.pory"
	waitse
# 21 "data/maps/Zone5B/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 22 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 23 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone5B/scripts.pory"
	waitmoncry
# 25 "data/maps/Zone5B/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 27 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 28 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone5B/scripts.pory"
	special RemoveCameraObject
# 30 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 31 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_Intro_Text_0
# 33 "data/maps/Zone5B/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 34 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 35 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 36 "data/maps/Zone5B/scripts.pory"
	waitmoncry
# 37 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 38 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 40 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 41 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 42 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 43 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateRight
# 45 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 46 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 47 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 48 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 49 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 50 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 51 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 53 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 54 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 56 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 58 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 59 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 60 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 61 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 62 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateLeft
# 63 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 65 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 66 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 67 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 69 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 70 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 72 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 73 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_Intro_Text_1
# 74 "data/maps/Zone5B/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 75 "data/maps/Zone5B/scripts.pory"
	delay 40
# 76 "data/maps/Zone5B/scripts.pory"
	waitmoncry
# 77 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 78 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 79 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Zone5B_Porygon_AnimateDown
# 80 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 82 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 83 "data/maps/Zone5B/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 84 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 85 "data/maps/Zone5B/scripts.pory"
	removeobject 2
# 86 "data/maps/Zone5B/scripts.pory"
	setflag FLAG_HIDE_ZONE5B_SHINY_PORYGON
# 87 "data/maps/Zone5B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 88 "data/maps/Zone5B/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Zone5B/scripts.pory"
	waitmovement 0
# 90 "data/maps/Zone5B/scripts.pory"
	waitse
# 91 "data/maps/Zone5B/scripts.pory"
	msgbox Zone5B_EventScript_Intro_Text_2
# 92 "data/maps/Zone5B/scripts.pory"
	setvar VAR_ZONE_5_STATE, 2
# 93 "data/maps/Zone5B/scripts.pory"
	releaseall
	return


# 96 "data/maps/Zone5B/scripts.pory"
Zone5B_Porygon_AnimateRight:
# 97 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_right
# 97 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_right
	step_end

# 100 "data/maps/Zone5B/scripts.pory"
Zone5B_Porygon_AnimateDown:
# 101 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_down
# 101 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_down
	step_end

# 104 "data/maps/Zone5B/scripts.pory"
Zone5B_Porygon_AnimateLeft:
# 105 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_left
# 105 "data/maps/Zone5B/scripts.pory"
	walk_in_place_slow_left
	step_end

Zone5B_EventScript_Intro_Text_0:
# 32 "data/maps/Zone5B/scripts.pory"
	.string "This {COLOR BLUE}Porygon{COLOR DARK_GRAY} is a strange color…\p"
	.string "It almost seems… familiar?$"

Zone5B_EventScript_Intro_Text_1:
# 73 "data/maps/Zone5B/scripts.pory"
	.string "The {COLOR BLUE}Porygon{COLOR DARK_GRAY} looks confused…$"

Zone5B_EventScript_Intro_Text_2:
# 91 "data/maps/Zone5B/scripts.pory"
	.string "The strange-colored {COLOR BLUE}Porygon{COLOR DARK_GRAY}\n"
	.string "disappeared!$"
