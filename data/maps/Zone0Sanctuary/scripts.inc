Zone0Sanctuary_MapScripts::
# 2 "data/maps/Zone0Sanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0Sanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone0Sanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 0, Zone0Sanctuary_EventScript_Intro
	.2byte 0


Zone0Sanctuary_EventScript_Intro::
# 8 "data/maps/Zone0Sanctuary/scripts.pory"
	lockall
# 9 "data/maps/Zone0Sanctuary/scripts.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 10 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 11 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 12 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 13 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_MoveCameraUp
# 14 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/Zone0Sanctuary/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone0Sanctuary/scripts.pory"
	waitse
# 18 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 19 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_0
# 20 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 21 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_MoveCameraDown
# 22 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_1, MSGBOX_YESNO
# 24 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_2
Zone0Sanctuary_EventScript_Intro_1:
# 34 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SETTINGS_EXP_ALL
# 35 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_3, MSGBOX_YESNO
# 36 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_5
Zone0Sanctuary_EventScript_Intro_4:
# 48 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
# 49 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_8
Zone0Sanctuary_EventScript_Intro_7:
# 140 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone0Sanctuary_EventScript_Intro_15
Zone0Sanctuary_EventScript_Intro_14:
# 155 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0Sanctuary_EventScript_Intro_19
# 169 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_20, MSGBOX_DEFAULT
# 172 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Zone0Sanctuary_EventScript_Intro_2:
# 25 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_0, 1
# 26 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_2
# 32 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
	goto Zone0Sanctuary_EventScript_Intro_1

Zone0Sanctuary_EventScript_Intro_5:
# 37 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_4, MSGBOX_DEFAULT
Zone0Sanctuary_EventScript_Intro_11:
# 39 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_12
# 46 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_6, MSGBOX_DEFAULT
	goto Zone0Sanctuary_EventScript_Intro_4

Zone0Sanctuary_EventScript_Intro_8:
# 50 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_7
# 51 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_FirstShop
# 52 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FirstShop
# 53 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 54 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 55 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 56 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_8
# 59 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 60 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 61 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 62 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_SecondShop
# 63 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_SecondShop
# 64 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 67 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_9
# 70 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 71 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 72 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 73 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_ThirdShop
# 74 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ThirdShop
# 75 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 76 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 77 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 78 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 79 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_10
# 81 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 82 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 83 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_FourthShop
# 85 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FourthShop
# 86 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 87 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 88 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 89 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 90 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_11
# 92 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 93 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 94 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 95 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_FifthShop
# 96 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FifthShop
# 97 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 98 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 100 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 101 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_12
# 103 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 104 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 105 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 106 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_SixthShop
# 107 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_SixthShop
# 108 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 109 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 111 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 112 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_13
# 114 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 115 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 117 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_ToPokemonCenter
# 118 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ToPokemonCenter
# 119 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 120 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 121 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 122 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 123 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 124 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 125 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_14
# 126 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 127 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 128 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 129 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 130 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 131 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_BackMid
# 132 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_BackMid
# 133 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 134 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_15
# 138 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
	goto Zone0Sanctuary_EventScript_Intro_7

Zone0Sanctuary_EventScript_Intro_12:
# 40 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_Settings
# 41 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_5, MSGBOX_YESNO
# 42 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_17
	goto Zone0Sanctuary_EventScript_Intro_11

Zone0Sanctuary_EventScript_Intro_15:
# 141 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_16
# 142 "data/maps/Zone0Sanctuary/scripts.pory"
	callnative GiveRandomStarter
# 143 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 144 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 145 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_Intro_Text_17
# 146 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 147 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 148 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18, MSGBOX_YESNO
# 149 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_23
Zone0Sanctuary_EventScript_Intro_22:
# 153 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	goto Zone0Sanctuary_EventScript_Intro_14

Zone0Sanctuary_EventScript_Intro_17:
# 43 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Zone0Sanctuary_EventScript_Intro_11

Zone0Sanctuary_EventScript_Intro_19:
# 156 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_19
# 159 "data/maps/Zone0Sanctuary/scripts.pory"
	special ChooseStarter
# 160 "data/maps/Zone0Sanctuary/scripts.pory"
	waitstate
# 161 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 162 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18, MSGBOX_YESNO
# 163 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_26
Zone0Sanctuary_EventScript_Intro_25:
# 167 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_Intro_23:
# 150 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 151 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_22

Zone0Sanctuary_EventScript_Intro_26:
# 164 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 165 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_25


Zone0Sanctuary_EventScript_HandleStarterSelectionDefault::
# 177 "data/maps/Zone0Sanctuary/scripts.pory"
	hidemonpic
# 178 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28
# 180 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3
# 183 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4
# 185 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5
# 187 "data/maps/Zone0Sanctuary/scripts.pory"
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6
# 189 "data/maps/Zone0Sanctuary/scripts.pory"
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7
# 191 "data/maps/Zone0Sanctuary/scripts.pory"
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8
# 193 "data/maps/Zone0Sanctuary/scripts.pory"
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9
# 195 "data/maps/Zone0Sanctuary/scripts.pory"
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10
# 197 "data/maps/Zone0Sanctuary/scripts.pory"
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11
# 199 "data/maps/Zone0Sanctuary/scripts.pory"
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12
# 201 "data/maps/Zone0Sanctuary/scripts.pory"
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13
# 203 "data/maps/Zone0Sanctuary/scripts.pory"
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14
# 205 "data/maps/Zone0Sanctuary/scripts.pory"
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15
# 207 "data/maps/Zone0Sanctuary/scripts.pory"
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16
# 209 "data/maps/Zone0Sanctuary/scripts.pory"
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17
# 211 "data/maps/Zone0Sanctuary/scripts.pory"
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18
# 213 "data/maps/Zone0Sanctuary/scripts.pory"
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19
# 215 "data/maps/Zone0Sanctuary/scripts.pory"
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20
# 217 "data/maps/Zone0Sanctuary/scripts.pory"
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21
# 219 "data/maps/Zone0Sanctuary/scripts.pory"
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22
# 221 "data/maps/Zone0Sanctuary/scripts.pory"
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23
# 223 "data/maps/Zone0Sanctuary/scripts.pory"
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24
# 225 "data/maps/Zone0Sanctuary/scripts.pory"
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25
# 227 "data/maps/Zone0Sanctuary/scripts.pory"
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26
# 229 "data/maps/Zone0Sanctuary/scripts.pory"
	case 24, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27
# 231 "data/maps/Zone0Sanctuary/scripts.pory"
	case 25, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28
# 233 "data/maps/Zone0Sanctuary/scripts.pory"
	case 26, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29
# 235 "data/maps/Zone0Sanctuary/scripts.pory"
	case 27, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_30
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1:
# 238 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31:
# 296 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_3
# 297 "data/maps/Zone0Sanctuary/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 298 "data/maps/Zone0Sanctuary/scripts.pory"
	playmoncry VAR_TEMP_3, 0
# 299 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30, MSGBOX_YESNO
# 300 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmoncry
# 301 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_34:
# 305 "data/maps/Zone0Sanctuary/scripts.pory"
	givemon VAR_TEMP_3, 5, ITEM_NONE
# 306 "data/maps/Zone0Sanctuary/scripts.pory"
	hidemonpic
# 307 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_Intro_Text_17
# 309 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 310 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 311 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 312 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18, MSGBOX_YESNO
# 313 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_63
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_62:
# 317 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3:
# 182 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4:
# 184 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5:
# 186 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6:
# 188 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7:
# 190 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8:
# 192 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9:
# 194 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10:
# 196 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11:
# 198 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12:
# 200 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13:
# 202 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14:
# 204 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16:
# 208 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17:
# 210 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18:
# 212 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19:
# 214 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20:
# 216 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21:
# 218 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22:
# 220 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23:
# 222 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24:
# 224 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25:
# 226 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26:
# 228 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27:
# 230 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SPRIGATITO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28:
# 232 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FUECOCO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29:
# 234 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_QUAXLY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_30:
# 236 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32:
# 239 "data/maps/Zone0Sanctuary/scripts.pory"
	playse SE_CONTEST_PLACE
# 240 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29
# 241 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 96
# 242 "data/maps/Zone0Sanctuary/scripts.pory"
	waitse
# 243 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 244 "data/maps/Zone0Sanctuary/scripts.pory"
	random 24
# 245 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 246 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38
# 248 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39
# 250 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40
# 252 "data/maps/Zone0Sanctuary/scripts.pory"
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41
# 254 "data/maps/Zone0Sanctuary/scripts.pory"
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42
# 256 "data/maps/Zone0Sanctuary/scripts.pory"
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43
# 258 "data/maps/Zone0Sanctuary/scripts.pory"
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44
# 260 "data/maps/Zone0Sanctuary/scripts.pory"
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45
# 262 "data/maps/Zone0Sanctuary/scripts.pory"
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46
# 264 "data/maps/Zone0Sanctuary/scripts.pory"
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47
# 266 "data/maps/Zone0Sanctuary/scripts.pory"
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48
# 268 "data/maps/Zone0Sanctuary/scripts.pory"
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49
# 270 "data/maps/Zone0Sanctuary/scripts.pory"
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50
# 272 "data/maps/Zone0Sanctuary/scripts.pory"
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51
# 274 "data/maps/Zone0Sanctuary/scripts.pory"
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52
# 276 "data/maps/Zone0Sanctuary/scripts.pory"
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53
# 278 "data/maps/Zone0Sanctuary/scripts.pory"
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54
# 280 "data/maps/Zone0Sanctuary/scripts.pory"
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55
# 282 "data/maps/Zone0Sanctuary/scripts.pory"
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56
# 284 "data/maps/Zone0Sanctuary/scripts.pory"
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57
# 286 "data/maps/Zone0Sanctuary/scripts.pory"
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58
# 288 "data/maps/Zone0Sanctuary/scripts.pory"
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59
# 290 "data/maps/Zone0Sanctuary/scripts.pory"
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60
# 292 "data/maps/Zone0Sanctuary/scripts.pory"
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_61
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35:
# 302 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
# 303 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_34

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38:
# 247 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39:
# 249 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40:
# 251 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41:
# 253 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42:
# 255 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43:
# 257 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44:
# 259 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45:
# 261 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46:
# 263 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47:
# 265 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48:
# 267 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49:
# 269 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50:
# 271 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51:
# 273 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52:
# 275 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53:
# 277 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54:
# 279 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55:
# 281 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56:
# 283 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57:
# 285 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58:
# 287 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59:
# 289 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60:
# 291 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_61:
# 293 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_63:
# 314 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 315 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_62


Zone0Sanctuary_EventScript_EndIntro::
# 321 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_EndIntro_2
# 370 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_10
# 399 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_POTION, 5
Zone0Sanctuary_EventScript_EndIntro_9:
# 401 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_POKE_BALL, 15
Zone0Sanctuary_EventScript_EndIntro_1:
# 403 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 404 "data/maps/Zone0Sanctuary/scripts.pory"
	special SetUnlockedPokedexFlags
# 405 "data/maps/Zone0Sanctuary/scripts.pory"
	special NewGameSetup
# 406 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 407 "data/maps/Zone0Sanctuary/scripts.pory"
	special EnableNationalPokedex
# 408 "data/maps/Zone0Sanctuary/scripts.pory"
	initclock 1, 1
# 409 "data/maps/Zone0Sanctuary/scripts.pory"
	callnative ReturnFromStartWallClock
# 410 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_ZONE, 1
# 411 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 7
# 412 "data/maps/Zone0Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 413 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 414 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 415 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 1
# 416 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_IS_DEBUGGING_SAVEFILE
# 417 "data/maps/Zone0Sanctuary/scripts.pory"
	releaseall
	end

Zone0Sanctuary_EventScript_EndIntro_2:
# 322 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_0
# 323 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
# 324 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_6
# 357 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
# 358 "data/maps/Zone0Sanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 359 "data/maps/Zone0Sanctuary/scripts.pory"
	giveitem ITEM_POTION, 5
# 360 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
# 362 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
Zone0Sanctuary_EventScript_EndIntro_5:
# 364 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 365 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
# 366 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 367 "data/maps/Zone0Sanctuary/scripts.pory"
	closemessage
# 368 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
	goto Zone0Sanctuary_EventScript_EndIntro_1

Zone0Sanctuary_EventScript_EndIntro_6:
# 325 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
# 326 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 327 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 328 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 329 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 330 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 331 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 332 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 333 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 334 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 335 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 336 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 337 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 338 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 339 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 340 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 341 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 342 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 343 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 344 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 345 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 346 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 347 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 348 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 349 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 350 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 351 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 352 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 353 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
# 355 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
	goto Zone0Sanctuary_EventScript_EndIntro_5

Zone0Sanctuary_EventScript_EndIntro_10:
# 371 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 372 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 373 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 374 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 375 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 376 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 377 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 378 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 379 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 380 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 381 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 382 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 383 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 384 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 385 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 386 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 387 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 388 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 389 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 390 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 391 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 392 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 393 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 394 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 395 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 396 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 397 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
	goto Zone0Sanctuary_EventScript_EndIntro_9


Zone0Sanctuary_EventScript_NextZone::
# 422 "data/maps/Zone0Sanctuary/scripts.pory"
	lock
# 423 "data/maps/Zone0Sanctuary/scripts.pory"
	faceplayer
# 424 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone0Sanctuary_EventScript_NextZone_Text_0, Zone0Sanctuary_EventScript_NextZone_Text_1, Zone0Sanctuary_EventScript_NextZone_Text_2, Zone0Sanctuary_EventScript_NextZone_Text_3
# 426 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 427 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_NextZone_3
# 435 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_NextZone_4
# 437 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_NextZone_5
Zone0Sanctuary_EventScript_NextZone_1:
# 440 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone0Sanctuary_EventScript_NextZone_3:
# 428 "data/maps/Zone0Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 429 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 430 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_NextZone_6
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_4:
# 436 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_5:
# 438 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_6:
# 431 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 432 "data/maps/Zone0Sanctuary/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 433 "data/maps/Zone0Sanctuary/scripts.pory"
	waitstate
	goto Zone0Sanctuary_EventScript_NextZone_1


# 443 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_FirstShop:
# 444 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 446 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 447 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 450 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_FirstShop:
# 451 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 451 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 452 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 455 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 458 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_SecondShop:
# 459 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 461 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 463 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 466 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_SecondShop:
# 467 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 467 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 468 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 470 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 472 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 475 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_ThirdShop:
# 476 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 476 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 476 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 477 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 479 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 482 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_ThirdShop:
# 483 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 483 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 483 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 483 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 486 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 489 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_FourthShop:
# 490 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 490 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 492 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 493 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 496 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_FourthShop:
# 497 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 497 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 497 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 500 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 503 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_FifthShop:
# 504 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 508 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 511 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_FifthShop:
# 512 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 512 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 513 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 515 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 516 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 517 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 520 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_SixthShop:
# 521 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 522 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 522 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 522 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 525 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 528 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_SixthShop:
# 529 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 529 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 530 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 531 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 531 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 533 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 534 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 537 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_ToPokemonCenter:
# 538 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 540 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 540 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 540 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 542 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 545 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_ToPokemonCenter:
# 546 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 546 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 547 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 549 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 549 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 549 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 550 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 551 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
	step_end

# 554 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_BackMid:
# 555 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 560 "data/maps/Zone0Sanctuary/scripts.pory"
	face_down
	step_end

# 563 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_BackMid:
# 564 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 564 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 565 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
	step_end

Zone0Sanctuary_EventScript_Intro_Text_0:
# 19 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Zone0Sanctuary_EventScript_Intro_Text_1:
# 23 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Zone0Sanctuary_EventScript_Intro_Text_2:
# 26 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "The Pokémon Battle Labyrinth is\n"
	.string "comprised of many {COLOR RED}Zones{COLOR DARK_GRAY} you must\l"
	.string "traverse.\p"
	.string "In these Zones, you might encounter\n"
	.string "wild Pokémon, great treasures, tough\l"
	.string "trainers, and more.\p"
	.string "Each Zone typically contains a\n"
	.string "{COLOR RED}Leviathan{COLOR DARK_GRAY}, a boss that yields great\l"
	.string "rewards if defeated.\p"
	.string "At the end of each Zone and before the\n"
	.string "next Zone begins, you will find a\l"
	.string "{COLOR RED}Sanctuary{COLOR DARK_GRAY}, like this one, with shops to\l"
	.string "purchase supplies, heal your Pokémon,\l"
	.string "and other benefits.\p"
	.string "Once you enter a new Zone, you will not\n"
	.string "be able to access a Sanctuary until you\l"
	.string "exit that Zone.\p"
	.string "In order to win, you must progress\n"
	.string "through all Zones without losing a\l"
	.string "battle.$"

Zone0Sanctuary_EventScript_Intro_Text_3:
# 35 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Pokémon Battle Labyrinth has many\n"
	.string "settings that are customizable,\l"
	.string "including {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode,\l"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode, and difficulty\l"
	.string "options.\p"
	.string "Would you like to modify these settings\n"
	.string "now from the default?$"

Zone0Sanctuary_EventScript_Intro_Text_4:
# 38 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Note that some settings cannot be\n"
	.string "adjusted once the challenge has\l"
	.string "started.\p"
	.string "If you're looking to play the hardest\n"
	.string "game mode, {COLOR RED}Brutal{COLOR DARK_GRAY} automatically enables\l"
	.string "most of the difficulty settings.\p"
	.string "Otherwise, information about each\n"
	.string "individual setting can be found by\l"
	.string "selecting it.$"

Zone0Sanctuary_EventScript_Intro_Text_5:
# 41 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Are you sure you are done selecting\n"
	.string "your settings?$"

Zone0Sanctuary_EventScript_Intro_Text_6:
# 46 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Settings saved!$"

Zone0Sanctuary_EventScript_Intro_Text_7:
# 50 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Zone0Sanctuary_EventScript_Intro_Text_8:
# 57 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Portentia's\n"
	.string "Potions{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, such as Potions or\n"
	.string "other curative measures, can be found\l"
	.string "here.$"

Zone0Sanctuary_EventScript_Intro_Text_9:
# 68 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Tim's Pokéball\n"
	.string "Shop{COLOR DARK_GRAY}.\p"
	.string "They have a variety of Pokéballs to\n"
	.string "buy.$"

Zone0Sanctuary_EventScript_Intro_Text_10:
# 79 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Gordon's Berries{COLOR DARK_GRAY}.\p"
	.string "Gordon is a legendary chef who curates\n"
	.string "a selection of Berries for Pokémon.$"

Zone0Sanctuary_EventScript_Intro_Text_11:
# 90 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Julia's TM Shop{COLOR DARK_GRAY}.\p"
	.string "Technical machines can be bought\n"
	.string "aplenty here.$"

Zone0Sanctuary_EventScript_Intro_Text_12:
# 101 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Varrick's One Time\n"
	.string "Wonders{COLOR DARK_GRAY}.\p"
	.string "Many single-use items, such as\n"
	.string "Evolutionary stones, are sold here.$"

Zone0Sanctuary_EventScript_Intro_Text_13:
# 112 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Alexander's\n"
	.string "Battle Shop{COLOR DARK_GRAY}.\p"
	.string "He sells items that are primarily used\n"
	.string "for battle.$"

Zone0Sanctuary_EventScript_Intro_Text_14:
# 125 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the {COLOR RED}Pokémon Center{COLOR DARK_GRAY},\n"
	.string "though don't let Joy catch you saying\l"
	.string "that.\p"
	.string "Your Pokémon can be healed at a flat\n"
	.string "fee.\p"
	.string "In addition, inside you might find other\n"
	.string "challengers of the Pokémon Battle\l"
	.string "Labyrinth who might give you advice or\l"
	.string "otherwise help you.\p"
	.string "You can also access {COLOR RED}Zone 0{COLOR DARK_GRAY} on the left\n"
	.string "inside.$"

Zone0Sanctuary_EventScript_Intro_Text_15:
# 134 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Zone0Sanctuary_EventScript_Intro_Text_16:
# 141 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Zone0Sanctuary_EventScript_Intro_Text_17:
# 145 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone0Sanctuary_EventScript_Intro_Text_18:
# 148 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Zone0Sanctuary_EventScript_Intro_Text_19:
# 156 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_Intro_Text_20:
# 169 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-9 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
# 178 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Choose a starter Pokémon.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Bulbasaur$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Charmander$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Squirtle$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chikorita$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Cyndaquil$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Totodile$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Treecko$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Torchic$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Mudkip$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Turtwig$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chimchar$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Piplup$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Snivy$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Tepig$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Oshawott$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chespin$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Fennekin$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Froakie$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Rowlet$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Litten$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Popplio$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Grookey$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Scorbunny$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Sobble$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Sprigatito$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Fuecoco$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Quaxly$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28:
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Random$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29:
# 240 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30:
# 299 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: You want {STR_VAR_1}?$"

Zone0Sanctuary_EventScript_EndIntro_Text_0:
# 322 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Zone0Sanctuary_EventScript_EndIntro_Text_1:
# 325 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Because you are playing on {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode, here are the items you'd need.\p"
	.string "You can get more by asking me about\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode again.$"

Zone0Sanctuary_EventScript_EndIntro_Text_2:
# 354 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Zone0Sanctuary_EventScript_EndIntro_Text_3:
# 357 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Zone0Sanctuary_EventScript_EndIntro_Text_4:
# 361 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Received ¥5000!$"

Zone0Sanctuary_EventScript_EndIntro_Text_5:
# 365 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

Zone0Sanctuary_EventScript_NextZone_Text_0:
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone0Sanctuary_EventScript_NextZone_Text_1:
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Settings$"

Zone0Sanctuary_EventScript_NextZone_Text_2:
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Documentation$"

Zone0Sanctuary_EventScript_NextZone_Text_3:
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Exit$"
