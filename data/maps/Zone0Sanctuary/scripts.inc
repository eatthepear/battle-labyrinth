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
	setflag FLAG_BOOSTED_IVS
# 14 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_MoveCameraUp
# 15 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 16 "data/maps/Zone0Sanctuary/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 18 "data/maps/Zone0Sanctuary/scripts.pory"
	waitse
# 19 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 20 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_0
# 21 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkDown
# 22 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_MoveCameraDown
# 23 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_1, MSGBOX_YESNO
# 25 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_2
Zone0Sanctuary_EventScript_Intro_1:
# 35 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SETTINGS_EXP_ALL
# 36 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_3, MSGBOX_YESNO
# 37 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_5
Zone0Sanctuary_EventScript_Intro_4:
# 50 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
# 51 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_Intro_8
Zone0Sanctuary_EventScript_Intro_7:
# 168 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone0Sanctuary_EventScript_Intro_15
Zone0Sanctuary_EventScript_Intro_14:
# 183 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0Sanctuary_EventScript_Intro_19
# 196 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_19, MSGBOX_DEFAULT
# 199 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Zone0Sanctuary_EventScript_Intro_2:
# 26 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_2
# 33 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 96
	goto Zone0Sanctuary_EventScript_Intro_1

Zone0Sanctuary_EventScript_Intro_5:
# 38 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_9, 1
# 39 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_4, MSGBOX_DEFAULT
Zone0Sanctuary_EventScript_Intro_11:
# 40 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq Zone0Sanctuary_EventScript_Intro_12
# 47 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_6, MSGBOX_DEFAULT
# 48 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_9, 0
	goto Zone0Sanctuary_EventScript_Intro_4

Zone0Sanctuary_EventScript_Intro_8:
# 52 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_7
# 53 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_FirstShop
# 54 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FirstShop
# 55 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 57 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 58 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 59 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 60 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 61 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 62 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 63 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_8
# 65 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 66 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 67 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 68 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 70 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 72 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_SecondShop
# 73 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_SecondShop
# 74 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 75 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 76 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 77 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 78 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 79 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 80 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 81 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 82 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_9
# 84 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 85 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 86 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 87 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 88 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 89 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 90 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_ThirdShop
# 92 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ThirdShop
# 93 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 94 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 95 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 96 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 97 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 98 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 99 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 100 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 101 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_10
# 103 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 104 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 105 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 106 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 107 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 108 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 109 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_FourthShop
# 111 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_FourthShop
# 112 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 113 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 114 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 115 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 117 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 118 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 119 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 120 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_11
# 122 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 123 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 124 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 125 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 126 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 127 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 128 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 129 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_ToWarp
# 130 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_ToWarp
# 131 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 132 "data/maps/Zone0Sanctuary/scripts.pory"
	special SpawnCameraObject
# 133 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 134 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 135 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 136 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 137 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 138 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 139 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 140 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 141 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 142 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 143 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 144 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 145 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_12
# 146 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 147 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 148 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 149 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 150 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 151 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 152 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 153 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 154 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 155 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 156 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 157 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 158 "data/maps/Zone0Sanctuary/scripts.pory"
	special RemoveCameraObject
# 159 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Zone0Sanctuary_Movement_Colress_BackMid
# 160 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone0Sanctuary_Movement_Player_BackMid
# 161 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 0
# 162 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_13
# 166 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 96
	goto Zone0Sanctuary_EventScript_Intro_7

Zone0Sanctuary_EventScript_Intro_12:
# 41 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_Settings
# 42 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_5, MSGBOX_YESNO
# 43 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_17
	goto Zone0Sanctuary_EventScript_Intro_11

Zone0Sanctuary_EventScript_Intro_15:
# 169 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_14
# 170 "data/maps/Zone0Sanctuary/scripts.pory"
	callnative GiveRandomStarter
# 171 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 173 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_Intro_Text_15
# 174 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 175 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 176 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_16, MSGBOX_YESNO
# 177 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_23
Zone0Sanctuary_EventScript_Intro_22:
# 181 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	goto Zone0Sanctuary_EventScript_Intro_14

Zone0Sanctuary_EventScript_Intro_17:
# 44 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_4, 1
	goto Zone0Sanctuary_EventScript_Intro_11

Zone0Sanctuary_EventScript_Intro_19:
# 184 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_17
# 187 "data/maps/Zone0Sanctuary/scripts.pory"
	special ChooseStarter
# 188 "data/maps/Zone0Sanctuary/scripts.pory"
	waitstate
# 189 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18, MSGBOX_YESNO
# 190 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_Intro_26
Zone0Sanctuary_EventScript_Intro_25:
# 194 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_Intro_23:
# 178 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 179 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_22

Zone0Sanctuary_EventScript_Intro_26:
# 191 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 192 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_Intro_25


Zone0Sanctuary_EventScript_HandleStarterSelectionDefault::
# 204 "data/maps/Zone0Sanctuary/scripts.pory"
	hidemonpic
# 205 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0, MSGBOX_DEFAULT
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28
# 207 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3
# 211 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4
# 214 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5
# 217 "data/maps/Zone0Sanctuary/scripts.pory"
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6
# 220 "data/maps/Zone0Sanctuary/scripts.pory"
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7
# 223 "data/maps/Zone0Sanctuary/scripts.pory"
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8
# 226 "data/maps/Zone0Sanctuary/scripts.pory"
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9
# 229 "data/maps/Zone0Sanctuary/scripts.pory"
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10
# 232 "data/maps/Zone0Sanctuary/scripts.pory"
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11
# 235 "data/maps/Zone0Sanctuary/scripts.pory"
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12
# 238 "data/maps/Zone0Sanctuary/scripts.pory"
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13
# 241 "data/maps/Zone0Sanctuary/scripts.pory"
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14
# 244 "data/maps/Zone0Sanctuary/scripts.pory"
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15
# 247 "data/maps/Zone0Sanctuary/scripts.pory"
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16
# 250 "data/maps/Zone0Sanctuary/scripts.pory"
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17
# 253 "data/maps/Zone0Sanctuary/scripts.pory"
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18
# 256 "data/maps/Zone0Sanctuary/scripts.pory"
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19
# 259 "data/maps/Zone0Sanctuary/scripts.pory"
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20
# 262 "data/maps/Zone0Sanctuary/scripts.pory"
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21
# 265 "data/maps/Zone0Sanctuary/scripts.pory"
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22
# 268 "data/maps/Zone0Sanctuary/scripts.pory"
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23
# 271 "data/maps/Zone0Sanctuary/scripts.pory"
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24
# 274 "data/maps/Zone0Sanctuary/scripts.pory"
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25
# 277 "data/maps/Zone0Sanctuary/scripts.pory"
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26
# 280 "data/maps/Zone0Sanctuary/scripts.pory"
	case 24, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27
# 283 "data/maps/Zone0Sanctuary/scripts.pory"
	case 25, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28
# 286 "data/maps/Zone0Sanctuary/scripts.pory"
	case 26, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29
# 289 "data/maps/Zone0Sanctuary/scripts.pory"
	case 27, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_30
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1:
# 292 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31:
# 374 "data/maps/Zone0Sanctuary/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_3
# 375 "data/maps/Zone0Sanctuary/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 376 "data/maps/Zone0Sanctuary/scripts.pory"
	playmoncry VAR_TEMP_3, 0
# 377 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30, MSGBOX_YESNO
# 378 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmoncry
# 379 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_34:
# 382 "data/maps/Zone0Sanctuary/scripts.pory"
	givemon VAR_TEMP_3, 5, ITEM_NONE
# 383 "data/maps/Zone0Sanctuary/scripts.pory"
	hidemonpic
# 384 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 385 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_Intro_Text_15
# 386 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 387 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 388 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_Intro_Text_18, MSGBOX_YESNO
# 389 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_63
Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_62:
# 393 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_EndIntro
	return

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_3:
# 209 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 210 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_4:
# 212 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 213 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_5:
# 215 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 216 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_6:
# 218 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
# 219 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_7:
# 221 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
# 222 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_8:
# 224 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
# 225 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_9:
# 227 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
# 228 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_10:
# 230 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
# 231 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_11:
# 233 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
# 234 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_12:
# 236 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
# 237 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_13:
# 239 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
# 240 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_14:
# 242 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
# 243 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_15:
# 245 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
# 246 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_16:
# 248 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
# 249 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_17:
# 251 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
# 252 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_18:
# 254 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
# 255 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_19:
# 257 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
# 258 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_20:
# 260 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
# 261 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_21:
# 263 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
# 264 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_22:
# 266 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
# 267 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_23:
# 269 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
# 270 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_24:
# 272 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
# 273 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_25:
# 275 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
# 276 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_26:
# 278 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
# 279 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_27:
# 281 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SPRIGATITO
# 282 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_28:
# 284 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FUECOCO
# 285 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_29:
# 287 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_QUAXLY
# 288 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_30:
# 290 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_1

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_32:
# 293 "data/maps/Zone0Sanctuary/scripts.pory"
	playse SE_CONTEST_PLACE
# 294 "data/maps/Zone0Sanctuary/scripts.pory"
	message Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29
# 295 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 96
# 296 "data/maps/Zone0Sanctuary/scripts.pory"
	waitse
# 297 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmessage
# 298 "data/maps/Zone0Sanctuary/scripts.pory"
	random 24
# 299 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38
# 303 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39
# 306 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40
# 309 "data/maps/Zone0Sanctuary/scripts.pory"
	case 3, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41
# 312 "data/maps/Zone0Sanctuary/scripts.pory"
	case 4, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42
# 315 "data/maps/Zone0Sanctuary/scripts.pory"
	case 5, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43
# 318 "data/maps/Zone0Sanctuary/scripts.pory"
	case 6, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44
# 321 "data/maps/Zone0Sanctuary/scripts.pory"
	case 7, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45
# 324 "data/maps/Zone0Sanctuary/scripts.pory"
	case 8, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46
# 327 "data/maps/Zone0Sanctuary/scripts.pory"
	case 9, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47
# 330 "data/maps/Zone0Sanctuary/scripts.pory"
	case 10, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48
# 333 "data/maps/Zone0Sanctuary/scripts.pory"
	case 11, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49
# 336 "data/maps/Zone0Sanctuary/scripts.pory"
	case 12, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50
# 339 "data/maps/Zone0Sanctuary/scripts.pory"
	case 13, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51
# 342 "data/maps/Zone0Sanctuary/scripts.pory"
	case 14, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52
# 345 "data/maps/Zone0Sanctuary/scripts.pory"
	case 15, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53
# 348 "data/maps/Zone0Sanctuary/scripts.pory"
	case 16, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54
# 351 "data/maps/Zone0Sanctuary/scripts.pory"
	case 17, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55
# 354 "data/maps/Zone0Sanctuary/scripts.pory"
	case 18, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56
# 357 "data/maps/Zone0Sanctuary/scripts.pory"
	case 19, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57
# 360 "data/maps/Zone0Sanctuary/scripts.pory"
	case 20, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58
# 363 "data/maps/Zone0Sanctuary/scripts.pory"
	case 21, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59
# 366 "data/maps/Zone0Sanctuary/scripts.pory"
	case 22, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60
# 369 "data/maps/Zone0Sanctuary/scripts.pory"
	case 23, Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_61
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_35:
# 380 "data/maps/Zone0Sanctuary/scripts.pory"
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_34

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_38:
# 301 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 302 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_39:
# 304 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 305 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_40:
# 307 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 308 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_41:
# 310 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
# 311 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_42:
# 313 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
# 314 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_43:
# 316 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
# 317 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_44:
# 319 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
# 320 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_45:
# 322 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
# 323 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_46:
# 325 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
# 326 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_47:
# 328 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
# 329 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_48:
# 331 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
# 332 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_49:
# 334 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
# 335 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_50:
# 337 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
# 338 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_51:
# 340 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
# 341 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_52:
# 343 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
# 344 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_53:
# 346 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
# 347 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_54:
# 349 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
# 350 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_55:
# 352 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
# 353 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_56:
# 355 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
# 356 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_57:
# 358 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
# 359 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_58:
# 361 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
# 362 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_59:
# 364 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
# 365 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_60:
# 367 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
# 368 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_61:
# 370 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
# 371 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_31

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_63:
# 390 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 391 "data/maps/Zone0Sanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_62


Zone0Sanctuary_EventScript_EndIntro::
# 397 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Zone0Sanctuary_EventScript_EndIntro_2
# 447 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_10
# 476 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_POTION, 10
Zone0Sanctuary_EventScript_EndIntro_9:
# 478 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_POKE_BALL, 15
Zone0Sanctuary_EventScript_EndIntro_1:
# 480 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 481 "data/maps/Zone0Sanctuary/scripts.pory"
	special SetUnlockedPokedexFlags
# 482 "data/maps/Zone0Sanctuary/scripts.pory"
	special NewGameSetup
# 483 "data/maps/Zone0Sanctuary/scripts.pory"
	initclock 1, 1
# 484 "data/maps/Zone0Sanctuary/scripts.pory"
	callnative ReturnFromStartWallClock
# 485 "data/maps/Zone0Sanctuary/scripts.pory"
	setvar VAR_ZONE, 1
# 486 "data/maps/Zone0Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 487 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_WhenUReady
# 488 "data/maps/Zone0Sanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 489 "data/maps/Zone0Sanctuary/scripts.pory"
	waitmovement 1
# 490 "data/maps/Zone0Sanctuary/scripts.pory"
	setflag FLAG_IS_DEBUGGING_SAVEFILE
# 491 "data/maps/Zone0Sanctuary/scripts.pory"
	releaseall
	end

Zone0Sanctuary_EventScript_EndIntro_2:
# 398 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_0
# 400 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 96
# 401 "data/maps/Zone0Sanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Zone0Sanctuary_EventScript_EndIntro_6
# 434 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
# 435 "data/maps/Zone0Sanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 436 "data/maps/Zone0Sanctuary/scripts.pory"
	giveitem ITEM_POTION, 10
# 437 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 438 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
# 439 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
Zone0Sanctuary_EventScript_EndIntro_5:
# 441 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 442 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
# 443 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
# 444 "data/maps/Zone0Sanctuary/scripts.pory"
	closemessage
# 445 "data/maps/Zone0Sanctuary/scripts.pory"
	delay 16
	goto Zone0Sanctuary_EventScript_EndIntro_1

Zone0Sanctuary_EventScript_EndIntro_6:
# 402 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
# 403 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 404 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 405 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 406 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 407 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 408 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 409 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 410 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 411 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 412 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 413 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 414 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 415 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 416 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 417 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 418 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 419 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 420 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 421 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 422 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 423 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 424 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 425 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 426 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 427 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 428 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 429 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 430 "data/maps/Zone0Sanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox Zone0Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
# 432 "data/maps/Zone0Sanctuary/scripts.pory"
	waitfanfare
	goto Zone0Sanctuary_EventScript_EndIntro_5

Zone0Sanctuary_EventScript_EndIntro_10:
# 448 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 449 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 450 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 451 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 452 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 453 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 454 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 455 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 456 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 457 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 458 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 459 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 460 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 461 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 462 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 463 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 464 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 465 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 466 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 467 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 468 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 469 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 470 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 471 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 472 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 473 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 474 "data/maps/Zone0Sanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
	goto Zone0Sanctuary_EventScript_EndIntro_9


Zone0Sanctuary_EventScript_NextZone::
# 496 "data/maps/Zone0Sanctuary/scripts.pory"
	lock
# 497 "data/maps/Zone0Sanctuary/scripts.pory"
	faceplayer
# 498 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_Greetings, MSGBOX_DEFAULT
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone0Sanctuary_EventScript_NextZone_Text_0, Zone0Sanctuary_EventScript_NextZone_Text_1, Zone0Sanctuary_EventScript_NextZone_Text_2, Zone0Sanctuary_EventScript_NextZone_Text_3
# 500 "data/maps/Zone0Sanctuary/scripts.pory"
	switch VAR_RESULT
# 501 "data/maps/Zone0Sanctuary/scripts.pory"
	case 0, Zone0Sanctuary_EventScript_NextZone_3
# 509 "data/maps/Zone0Sanctuary/scripts.pory"
	case 1, Zone0Sanctuary_EventScript_NextZone_4
# 511 "data/maps/Zone0Sanctuary/scripts.pory"
	case 2, Zone0Sanctuary_EventScript_NextZone_5
Zone0Sanctuary_EventScript_NextZone_1:
# 514 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Zone0Sanctuary_EventScript_NextZone_3:
# 502 "data/maps/Zone0Sanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 503 "data/maps/Zone0Sanctuary/scripts.pory"
	msgbox gText_Colress_SureReadyToLeave, MSGBOX_YESNO
# 504 "data/maps/Zone0Sanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0Sanctuary_EventScript_NextZone_6
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_4:
# 510 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_Settings
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_5:
# 512 "data/maps/Zone0Sanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Zone0Sanctuary_EventScript_NextZone_1

Zone0Sanctuary_EventScript_NextZone_6:
# 505 "data/maps/Zone0Sanctuary/scripts.pory"
	call EventScript_LeavingSetup
# 506 "data/maps/Zone0Sanctuary/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 507 "data/maps/Zone0Sanctuary/scripts.pory"
	waitstate
	goto Zone0Sanctuary_EventScript_NextZone_1


# 517 "data/maps/Zone0Sanctuary/scripts.pory"

# 518 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_FirstShop:
# 519 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 520 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 521 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 522 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 523 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 524 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 525 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 526 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 527 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 528 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 529 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 530 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 531 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 532 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 533 "data/maps/Zone0Sanctuary/scripts.pory"

# 534 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_FirstShop:
# 535 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 536 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 537 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 538 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 539 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 540 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 541 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 542 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 543 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 544 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 545 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 546 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 547 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 548 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 549 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 550 "data/maps/Zone0Sanctuary/scripts.pory"

# 551 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_SecondShop:
# 552 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 553 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 554 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 555 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 556 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 557 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 558 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 559 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 560 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 561 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 562 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 563 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 564 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 565 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 566 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 567 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 568 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 569 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 570 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 571 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 572 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 573 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 574 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 575 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 576 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 577 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 578 "data/maps/Zone0Sanctuary/scripts.pory"

# 579 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_SecondShop:
# 580 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 581 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 582 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 583 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 584 "data/maps/Zone0Sanctuary/scripts.pory"
	face_right
# 585 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 586 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 587 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 588 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 589 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 590 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 591 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 592 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 593 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 594 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 595 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 596 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 597 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 598 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 599 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 600 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 601 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 602 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 603 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 604 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 605 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 606 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 607 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 608 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 609 "data/maps/Zone0Sanctuary/scripts.pory"

# 610 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_ThirdShop:
# 611 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 612 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 613 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 614 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 615 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 616 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 617 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 618 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 619 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 620 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 621 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 622 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 623 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 624 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 625 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 626 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 627 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 628 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 629 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 630 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 631 "data/maps/Zone0Sanctuary/scripts.pory"

# 632 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_ThirdShop:
# 633 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 634 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 635 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 636 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 637 "data/maps/Zone0Sanctuary/scripts.pory"
	face_left
# 638 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 639 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 640 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 641 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 642 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 643 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 644 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 645 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 646 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 647 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 648 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 649 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 650 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 651 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 652 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 653 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 654 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 655 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 656 "data/maps/Zone0Sanctuary/scripts.pory"

# 657 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_FourthShop:
# 658 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 659 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 660 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 661 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 662 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 663 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 664 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 665 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 666 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 667 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 668 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 669 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 670 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 671 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 672 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 673 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 674 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 675 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 676 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 677 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 678 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 679 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 680 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 681 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 682 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 683 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 684 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 685 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 686 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 687 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 688 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 689 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 690 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 691 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 692 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 693 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 694 "data/maps/Zone0Sanctuary/scripts.pory"

# 695 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_FourthShop:
# 696 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 697 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 698 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 699 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 700 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 701 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 702 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 703 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 704 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 705 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 706 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 707 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 708 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 709 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 710 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 711 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 712 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 713 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 714 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 715 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 716 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 717 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 718 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 719 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 720 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 721 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 722 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 723 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 724 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 725 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 726 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 727 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 728 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 729 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 730 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 731 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 732 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 733 "data/maps/Zone0Sanctuary/scripts.pory"

# 734 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_ToWarp:
# 735 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 736 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 737 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 738 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 739 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 740 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 741 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 742 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 743 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 744 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 745 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 746 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 747 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 748 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 749 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 750 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 751 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 752 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 753 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 754 "data/maps/Zone0Sanctuary/scripts.pory"

# 755 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_ToWarp:
# 756 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 757 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 758 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 759 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 760 "data/maps/Zone0Sanctuary/scripts.pory"
	face_right
# 761 "data/maps/Zone0Sanctuary/scripts.pory"
	delay_16
# 762 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 763 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 764 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 765 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 766 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 767 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 768 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_down
# 769 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 770 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 771 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 772 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 773 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 774 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 775 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 776 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 777 "data/maps/Zone0Sanctuary/scripts.pory"

# 778 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Colress_BackMid:
# 779 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 780 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 781 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 782 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 783 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 784 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 785 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 786 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 787 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 788 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 789 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 790 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 791 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 792 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 793 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 794 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 795 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 796 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 797 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 798 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 799 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 800 "data/maps/Zone0Sanctuary/scripts.pory"
	face_down
# 801 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end
# 802 "data/maps/Zone0Sanctuary/scripts.pory"

# 803 "data/maps/Zone0Sanctuary/scripts.pory"
Zone0Sanctuary_Movement_Player_BackMid:
# 804 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 805 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 806 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 807 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 808 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_right
# 809 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 810 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 811 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 812 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 813 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 814 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 815 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 816 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 817 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 818 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 819 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_up
# 820 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 821 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 822 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 823 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 824 "data/maps/Zone0Sanctuary/scripts.pory"
	walk_left
# 825 "data/maps/Zone0Sanctuary/scripts.pory"
	face_up
# 826 "data/maps/Zone0Sanctuary/scripts.pory"
	step_end

Zone0Sanctuary_EventScript_Intro_Text_0:
# 20 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Zone0Sanctuary_EventScript_Intro_Text_1:
# 24 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Zone0Sanctuary_EventScript_Intro_Text_2:
# 27 "data/maps/Zone0Sanctuary/scripts.pory"
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
# 36 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Pokémon Battle Labyrinth has many\n"
	.string "settings that are customizable,\l"
	.string "including {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode,\l"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode, and difficulty\l"
	.string "options.\p"
	.string "Would you like to modify these settings\n"
	.string "now from the default?$"

Zone0Sanctuary_EventScript_Intro_Text_4:
# 39 "data/maps/Zone0Sanctuary/scripts.pory"
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
# 42 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Are you sure you are done selecting\n"
	.string "your settings?$"

Zone0Sanctuary_EventScript_Intro_Text_6:
# 47 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Settings saved!$"

Zone0Sanctuary_EventScript_Intro_Text_7:
# 52 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Zone0Sanctuary_EventScript_Intro_Text_8:
# 63 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top left shop is {COLOR RED}Tim's\n"
	.string "General Purpose Shop{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, basic Pokéballs, and\n"
	.string "other common items are sold here.$"

Zone0Sanctuary_EventScript_Intro_Text_9:
# 82 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The top right shop is {COLOR RED}Silph\n"
	.string "Unique Item Shop{COLOR DARK_GRAY}.\p"
	.string "They sell a variety of held items and\n"
	.string "single use items such as Pokéball\l"
	.string "variations, evolution items, Berries,\l"
	.string "and so on.$"

Zone0Sanctuary_EventScript_Intro_Text_10:
# 101 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom right shop is {COLOR RED}Joy's\n"
	.string "Healing Shop{COLOR DARK_GRAY}.\p"
	.string "At the low cost of ¥1000, they will heal\n"
	.string "your entire party.$"

Zone0Sanctuary_EventScript_Intro_Text_11:
# 120 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The bottom left shop is\n"
	.string "{COLOR RED}Lelouch's Special Services Shop{COLOR DARK_GRAY}.\p"
	.string "They offer a range of Pokémon services,\n"
	.string "but only to customers who can pay the\l"
	.string "right price.$"

Zone0Sanctuary_EventScript_Intro_Text_12:
# 145 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: In addition, you have access\n"
	.string "to {COLOR RED}Zone 0{COLOR DARK_GRAY}.\p"
	.string "If you would like to enter {COLOR RED}Zone 0{COLOR DARK_GRAY}, you\n"
	.string "can access it from any Sanctuary using\l"
	.string "this warp.$"

Zone0Sanctuary_EventScript_Intro_Text_13:
# 162 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Zone0Sanctuary_EventScript_Intro_Text_14:
# 169 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Zone0Sanctuary_EventScript_Intro_Text_15:
# 173 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone0Sanctuary_EventScript_Intro_Text_16:
# 176 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Zone0Sanctuary_EventScript_Intro_Text_17:
# 184 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_Intro_Text_18:
# 189 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for this\n"
	.string "wonderful Pokémon?$"

Zone0Sanctuary_EventScript_Intro_Text_19:
# 196 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-9 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
# 205 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Choose a starter Pokémon.$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Bulbasaur$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Charmander$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Squirtle$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chikorita$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Cyndaquil$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Totodile$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Treecko$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Torchic$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Mudkip$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Turtwig$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chimchar$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Piplup$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Snivy$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Tepig$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Oshawott$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Chespin$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Fennekin$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Froakie$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Rowlet$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Litten$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Popplio$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Grookey$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Scorbunny$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Sobble$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Sprigatito$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Fuecoco$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Quaxly$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28:
# 206 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Random$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29:
# 294 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Zone0Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30:
# 377 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you want\n"
	.string "{STR_VAR_1}?$"

Zone0Sanctuary_EventScript_EndIntro_Text_0:
# 398 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Zone0Sanctuary_EventScript_EndIntro_Text_1:
# 402 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Because you are playing on the infinite\n"
	.string "difficulty, here are the items you'd\l"
	.string "need.\p"
	.string "You can get more by speaking to me\n"
	.string "about your difficulty setting.$"

Zone0Sanctuary_EventScript_EndIntro_Text_2:
# 431 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Zone0Sanctuary_EventScript_EndIntro_Text_3:
# 434 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Zone0Sanctuary_EventScript_EndIntro_Text_4:
# 438 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Received ¥5000!$"

Zone0Sanctuary_EventScript_EndIntro_Text_5:
# 442 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

Zone0Sanctuary_EventScript_NextZone_Text_0:
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Next Zone$"

Zone0Sanctuary_EventScript_NextZone_Text_1:
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Settings$"

Zone0Sanctuary_EventScript_NextZone_Text_2:
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Documentation$"

Zone0Sanctuary_EventScript_NextZone_Text_3:
# 499 "data/maps/Zone0Sanctuary/scripts.pory"
	.string "Exit$"
