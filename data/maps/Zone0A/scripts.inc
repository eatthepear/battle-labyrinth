Zone0A_MapScripts::
# 5 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0A_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0A_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Zone0A/scripts.pory"
	call Zone0A_EventScript_TryMoveDayCareMan
	return

Zone0A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 0, Zone0A_EventScript_Intro
	.2byte 0


Zone0A_EventScript_Intro::
# 11 "data/maps/Zone0A/scripts.pory"
	lockall
# 12 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 13 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 14 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 15 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 16 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 18 "data/maps/Zone0A/scripts.pory"
	waitse
# 19 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft3
# 20 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 21 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 23 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_1
# 24 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 25 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 26 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 27 "data/maps/Zone0A/scripts.pory"
	waitse
# 28 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkRight3
# 30 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 32 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 33 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 34 "data/maps/Zone0A/scripts.pory"
	releaseall
	end


Zone0A_EventScript_Scientist::
# 39 "data/maps/Zone0A/scripts.pory"
	lock
# 40 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 41 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Scientist_Text_0
# 42 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 43 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 1
	goto_if_gt Zone0A_EventScript_Scientist_2
Zone0A_EventScript_Scientist_1:
# 46 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt Zone0A_EventScript_Scientist_5
Zone0A_EventScript_Scientist_4:
# 49 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_gt Zone0A_EventScript_Scientist_8
Zone0A_EventScript_Scientist_7:
# 52 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_gt Zone0A_EventScript_Scientist_11
Zone0A_EventScript_Scientist_10:
# 55 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt Zone0A_EventScript_Scientist_14
Zone0A_EventScript_Scientist_13:
# 58 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_gt Zone0A_EventScript_Scientist_17
Zone0A_EventScript_Scientist_16:
# 61 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_gt Zone0A_EventScript_Scientist_20
Zone0A_EventScript_Scientist_19:
# 64 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt Zone0A_EventScript_Scientist_23
Zone0A_EventScript_Scientist_22:
# 67 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_gt Zone0A_EventScript_Scientist_26
Zone0A_EventScript_Scientist_25:
# 70 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt Zone0A_EventScript_Scientist_29
Zone0A_EventScript_Scientist_28:
# 73 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_gt Zone0A_EventScript_Scientist_32
Zone0A_EventScript_Scientist_31:
# 76 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_gt Zone0A_EventScript_Scientist_35
Zone0A_EventScript_Scientist_34:
# 79 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_gt Zone0A_EventScript_Scientist_38
Zone0A_EventScript_Scientist_37:
# 82 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 14
	goto_if_gt Zone0A_EventScript_Scientist_41
Zone0A_EventScript_Scientist_40:
# 85 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_gt Zone0A_EventScript_Scientist_44
Zone0A_EventScript_Scientist_43:
# 88 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_gt Zone0A_EventScript_Scientist_47
Zone0A_EventScript_Scientist_46:
# 91 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_gt Zone0A_EventScript_Scientist_50
Zone0A_EventScript_Scientist_49:
# 94 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_gt Zone0A_EventScript_Scientist_53
Zone0A_EventScript_Scientist_52:
# 97 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 19
	goto_if_gt Zone0A_EventScript_Scientist_56
Zone0A_EventScript_Scientist_55:
# 100 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt Zone0A_EventScript_Scientist_59
Zone0A_EventScript_Scientist_58:
# 103 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_gt Zone0A_EventScript_Scientist_62
Zone0A_EventScript_Scientist_61:
# 106 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_gt Zone0A_EventScript_Scientist_65
Zone0A_EventScript_Scientist_64:
# 109 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_gt Zone0A_EventScript_Scientist_68
Zone0A_EventScript_Scientist_67:
# 112 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_gt Zone0A_EventScript_Scientist_71
Zone0A_EventScript_Scientist_70:
# 115 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt Zone0A_EventScript_Scientist_74
Zone0A_EventScript_Scientist_73:
# 118 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_gt Zone0A_EventScript_Scientist_77
Zone0A_EventScript_Scientist_76:
# 121 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_gt Zone0A_EventScript_Scientist_80
Zone0A_EventScript_Scientist_79:
# 124 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_gt Zone0A_EventScript_Scientist_83
Zone0A_EventScript_Scientist_82:
# 127 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_gt Zone0A_EventScript_Scientist_86
Zone0A_EventScript_Scientist_85:
# 130 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt Zone0A_EventScript_Scientist_89
Zone0A_EventScript_Scientist_88:
# 133 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_31, 51
# 134 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 135 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Scientist_93
# 155 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Scientist_94
# 174 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Scientist_95
# 193 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Scientist_96
# 212 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Scientist_97
# 231 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Scientist_98
# 250 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Scientist_99
# 269 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Scientist_100
# 288 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Scientist_101
# 307 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Scientist_102
# 326 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Scientist_103
# 345 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Scientist_104
# 364 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Scientist_105
# 365 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Scientist_105
Zone0A_EventScript_Scientist_91:
# 368 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_Scientist_2:
# 44 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_1, 1
	goto Zone0A_EventScript_Scientist_1

Zone0A_EventScript_Scientist_5:
# 47 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_2, 2
	goto Zone0A_EventScript_Scientist_4

Zone0A_EventScript_Scientist_8:
# 50 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_3, 3
	goto Zone0A_EventScript_Scientist_7

Zone0A_EventScript_Scientist_11:
# 53 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_4, 4
	goto Zone0A_EventScript_Scientist_10

Zone0A_EventScript_Scientist_14:
# 56 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_5, 5
	goto Zone0A_EventScript_Scientist_13

Zone0A_EventScript_Scientist_17:
# 59 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_6, 6
	goto Zone0A_EventScript_Scientist_16

Zone0A_EventScript_Scientist_20:
# 62 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_7, 7
	goto Zone0A_EventScript_Scientist_19

Zone0A_EventScript_Scientist_23:
# 65 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_8, 8
	goto Zone0A_EventScript_Scientist_22

Zone0A_EventScript_Scientist_26:
# 68 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_9, 9
	goto Zone0A_EventScript_Scientist_25

Zone0A_EventScript_Scientist_29:
# 71 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_10, 10
	goto Zone0A_EventScript_Scientist_28

Zone0A_EventScript_Scientist_32:
# 74 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_11, 11
	goto Zone0A_EventScript_Scientist_31

Zone0A_EventScript_Scientist_35:
# 77 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_12, 12
	goto Zone0A_EventScript_Scientist_34

Zone0A_EventScript_Scientist_38:
# 80 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_13, 13
	goto Zone0A_EventScript_Scientist_37

Zone0A_EventScript_Scientist_41:
# 83 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_14, 14
	goto Zone0A_EventScript_Scientist_40

Zone0A_EventScript_Scientist_44:
# 86 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_15, 15
	goto Zone0A_EventScript_Scientist_43

Zone0A_EventScript_Scientist_47:
# 89 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_16, 16
	goto Zone0A_EventScript_Scientist_46

Zone0A_EventScript_Scientist_50:
# 92 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_17, 17
	goto Zone0A_EventScript_Scientist_49

Zone0A_EventScript_Scientist_53:
# 95 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_18, 18
	goto Zone0A_EventScript_Scientist_52

Zone0A_EventScript_Scientist_56:
# 98 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_19, 19
	goto Zone0A_EventScript_Scientist_55

Zone0A_EventScript_Scientist_59:
# 101 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_20, 20
	goto Zone0A_EventScript_Scientist_58

Zone0A_EventScript_Scientist_62:
# 104 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_21, 21
	goto Zone0A_EventScript_Scientist_61

Zone0A_EventScript_Scientist_65:
# 107 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_22, 22
	goto Zone0A_EventScript_Scientist_64

Zone0A_EventScript_Scientist_68:
# 110 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_23, 23
	goto Zone0A_EventScript_Scientist_67

Zone0A_EventScript_Scientist_71:
# 113 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_24, 24
	goto Zone0A_EventScript_Scientist_70

Zone0A_EventScript_Scientist_74:
# 116 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_25, 25
	goto Zone0A_EventScript_Scientist_73

Zone0A_EventScript_Scientist_77:
# 119 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_26, 26
	goto Zone0A_EventScript_Scientist_76

Zone0A_EventScript_Scientist_80:
# 122 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_27, 27
	goto Zone0A_EventScript_Scientist_79

Zone0A_EventScript_Scientist_83:
# 125 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_28, 28
	goto Zone0A_EventScript_Scientist_82

Zone0A_EventScript_Scientist_86:
# 128 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_29, 29
	goto Zone0A_EventScript_Scientist_85

Zone0A_EventScript_Scientist_89:
# 131 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_30, 30
	goto Zone0A_EventScript_Scientist_88

Zone0A_EventScript_Scientist_93:
# 137 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 138 "data/maps/Zone0A/scripts.pory"
	closemessage
# 139 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 140 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_107
# 147 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 148 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 149 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 150 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 151 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_106:
# 153 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1A, 255, 16, 28
# 154 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_94:
# 156 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 157 "data/maps/Zone0A/scripts.pory"
	closemessage
# 158 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 159 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_111
# 166 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 167 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 168 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 169 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 170 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_110:
# 172 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE2A, 255, 4, 3
# 173 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_95:
# 175 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 176 "data/maps/Zone0A/scripts.pory"
	closemessage
# 177 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 178 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_115
# 185 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 186 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 187 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 188 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 189 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_114:
# 191 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE3A, 255, 38, 25
# 192 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_96:
# 194 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 195 "data/maps/Zone0A/scripts.pory"
	closemessage
# 196 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 197 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_119
# 204 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 205 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 206 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 207 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 208 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_118:
# 210 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE4A, 255, 6, 4
# 211 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_97:
# 213 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 214 "data/maps/Zone0A/scripts.pory"
	closemessage
# 215 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 216 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_123
# 223 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 224 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 225 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 226 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 227 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_122:
# 229 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE5A, 255, 3, 0
# 230 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_98:
# 232 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 233 "data/maps/Zone0A/scripts.pory"
	closemessage
# 234 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 235 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_127
# 242 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 243 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 244 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 245 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 246 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_126:
# 248 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE6A, 255, 51, 22
# 249 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_99:
# 251 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 252 "data/maps/Zone0A/scripts.pory"
	closemessage
# 253 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 254 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_131
# 261 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 262 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 263 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 264 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 265 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_130:
# 267 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE7A, 255, 10, 33
# 268 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_100:
# 270 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 271 "data/maps/Zone0A/scripts.pory"
	closemessage
# 272 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 273 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_135
# 280 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 281 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 282 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 283 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 284 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_134:
# 286 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE8A, 255, 21, 26
# 287 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_101:
# 289 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 290 "data/maps/Zone0A/scripts.pory"
	closemessage
# 291 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 292 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_139
# 299 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 300 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 301 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 302 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 303 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_138:
# 305 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE9A, 255, 41, 22
# 306 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_102:
# 308 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 309 "data/maps/Zone0A/scripts.pory"
	closemessage
# 310 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 311 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_143
# 318 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 319 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 320 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 321 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 322 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_142:
# 324 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE10A, 255, 42, 51
# 325 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_103:
# 327 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 328 "data/maps/Zone0A/scripts.pory"
	closemessage
# 329 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 330 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_147
# 337 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 338 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 339 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 340 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 341 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_146:
# 343 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE11A, 255, 46, 2
# 344 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_104:
# 346 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 347 "data/maps/Zone0A/scripts.pory"
	closemessage
# 348 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 349 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_151
# 356 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 357 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 358 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 359 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 360 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_150:
# 362 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE12A, 255, 9, 16
# 363 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_105:
# 366 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Scientist_Text_32
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_107:
# 141 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 142 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 143 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 144 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 145 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_106

Zone0A_EventScript_Scientist_111:
# 160 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 161 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 162 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 163 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 164 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_110

Zone0A_EventScript_Scientist_115:
# 179 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 180 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 181 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 182 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 183 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_114

Zone0A_EventScript_Scientist_119:
# 198 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 199 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 200 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 201 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 202 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_118

Zone0A_EventScript_Scientist_123:
# 217 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 218 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 219 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 220 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 221 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_122

Zone0A_EventScript_Scientist_127:
# 236 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 237 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 238 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 239 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 240 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_126

Zone0A_EventScript_Scientist_131:
# 255 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 256 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 257 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 258 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 259 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_130

Zone0A_EventScript_Scientist_135:
# 274 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 275 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 276 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 277 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 278 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_134

Zone0A_EventScript_Scientist_139:
# 293 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 294 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 295 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 296 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 297 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_138

Zone0A_EventScript_Scientist_143:
# 312 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 313 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 314 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 315 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 316 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_142

Zone0A_EventScript_Scientist_147:
# 331 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 332 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 333 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 334 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 335 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_146

Zone0A_EventScript_Scientist_151:
# 350 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 351 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 352 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 353 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 354 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_150


Zone0A_EventScript_Collector::
# 373 "data/maps/Zone0A/scripts.pory"
	lock
# 374 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 375 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Collector_Text_0
# 376 "data/maps/Zone0A/scripts.pory"
	release
	end


Zone0A_EventScript_BerryGirl::
# 381 "data/maps/Zone0A/scripts.pory"
	lock
# 382 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 383 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_BerryGirl_2
# 383 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_BerryGirl_2
# 386 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_1
Zone0A_EventScript_BerryGirl_1:
# 388 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_BerryGirl_2:
# 384 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_0
	goto Zone0A_EventScript_BerryGirl_1


# 420 "data/maps/Zone0A/scripts.pory"

# 421 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 422 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 423 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 424 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 425 "data/maps/Zone0A/scripts.pory"
	return
# 426 "data/maps/Zone0A/scripts.pory"

# 427 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 428 "data/maps/Zone0A/scripts.pory"
	lock
# 429 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 430 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 431 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 432 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 433 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 434 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 435 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 436 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 437 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 438 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 439 "data/maps/Zone0A/scripts.pory"
	release
# 440 "data/maps/Zone0A/scripts.pory"
	end
# 441 "data/maps/Zone0A/scripts.pory"

# 442 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 443 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 444 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 445 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 446 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 447 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 448 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 449 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 450 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 451 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 452 "data/maps/Zone0A/scripts.pory"
	release
# 453 "data/maps/Zone0A/scripts.pory"
	end
# 454 "data/maps/Zone0A/scripts.pory"

# 455 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 456 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 457 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 458 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 459 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 460 "data/maps/Zone0A/scripts.pory"
	release
# 461 "data/maps/Zone0A/scripts.pory"
	end
# 462 "data/maps/Zone0A/scripts.pory"

# 463 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 464 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 465 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 466 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 467 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 468 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 469 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 470 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 471 "data/maps/Zone0A/scripts.pory"
	release
# 472 "data/maps/Zone0A/scripts.pory"
	end
# 473 "data/maps/Zone0A/scripts.pory"

# 474 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 475 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 476 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 477 "data/maps/Zone0A/scripts.pory"
	release
# 478 "data/maps/Zone0A/scripts.pory"
	end
# 479 "data/maps/Zone0A/scripts.pory"

# 480 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 481 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 482 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 483 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 484 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 485 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 486 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 487 "data/maps/Zone0A/scripts.pory"
	release
# 488 "data/maps/Zone0A/scripts.pory"
	end
# 489 "data/maps/Zone0A/scripts.pory"

# 490 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 491 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 492 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 493 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 494 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 495 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 496 "data/maps/Zone0A/scripts.pory"

# 497 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 498 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 499 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 500 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 501 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 502 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 503 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 504 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 505 "data/maps/Zone0A/scripts.pory"

# 506 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 507 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 508 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 509 "data/maps/Zone0A/scripts.pory"

# 510 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 511 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 512 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 513 "data/maps/Zone0A/scripts.pory"

# 514 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 515 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 516 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 517 "data/maps/Zone0A/scripts.pory"

# 518 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 519 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 520 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 521 "data/maps/Zone0A/scripts.pory"

# 522 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 523 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 524 "data/maps/Zone0A/scripts.pory"

# 525 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 526 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 527 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 528 "data/maps/Zone0A/scripts.pory"

# 529 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 530 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 531 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"

Zone0A_EventScript_Intro_Text_0:
# 21 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Welcome to my home, {COLOR GREEN}Harvest Road{COLOR DARK_GRAY}.\p"
	.string "There are no trainers here, and no\n"
	.string "challenges to face. Everything is meant\l"
	.string "to help you on your journey.\p"
	.string "As a welcome gift, I'd like you to have\n"
	.string "this.$"

Zone0A_EventScript_Intro_Text_1:
# 23 "data/maps/Zone0A/scripts.pory"
	.string "I run this green building that you just\n"
	.string "walked out of, called the {COLOR GREEN}TPI{COLOR DARK_GRAY} or\l"
	.string "{COLOR GREEN}Teleport Institute{COLOR DARK_GRAY}.\p"
	.string "That door on the left leads back to the\n"
	.string "Sanctuary, while this door on the right\l"
	.string "is for prior areas.\p"
	.string "Let me know if I can help you get\n"
	.string "anywhere!$"

Zone0A_EventScript_Intro_Text_2:
# 28 "data/maps/Zone0A/scripts.pory"
	.string "Oh, right! I just remembered something.\p"
	.string "I've heard the Pokémon Day-Care nearby\n"
	.string "is having a special gift Pokémon\l"
	.string "promotion.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_Scientist_Text_0:
# 41 "data/maps/Zone0A/scripts.pory"
	.string "Where do you want to go to?$"

Zone0A_EventScript_Scientist_Text_1:
# 44 "data/maps/Zone0A/scripts.pory"
	.string "Zone 1$"

Zone0A_EventScript_Scientist_Text_2:
# 47 "data/maps/Zone0A/scripts.pory"
	.string "Zone 2$"

Zone0A_EventScript_Scientist_Text_3:
# 50 "data/maps/Zone0A/scripts.pory"
	.string "Zone 3$"

Zone0A_EventScript_Scientist_Text_4:
# 53 "data/maps/Zone0A/scripts.pory"
	.string "Zone 4$"

Zone0A_EventScript_Scientist_Text_5:
# 56 "data/maps/Zone0A/scripts.pory"
	.string "Zone 5$"

Zone0A_EventScript_Scientist_Text_6:
# 59 "data/maps/Zone0A/scripts.pory"
	.string "Zone 6$"

Zone0A_EventScript_Scientist_Text_7:
# 62 "data/maps/Zone0A/scripts.pory"
	.string "Zone 7$"

Zone0A_EventScript_Scientist_Text_8:
# 65 "data/maps/Zone0A/scripts.pory"
	.string "Zone 8$"

Zone0A_EventScript_Scientist_Text_9:
# 68 "data/maps/Zone0A/scripts.pory"
	.string "Zone 9$"

Zone0A_EventScript_Scientist_Text_10:
# 71 "data/maps/Zone0A/scripts.pory"
	.string "Zone 10$"

Zone0A_EventScript_Scientist_Text_11:
# 74 "data/maps/Zone0A/scripts.pory"
	.string "Zone 11$"

Zone0A_EventScript_Scientist_Text_12:
# 77 "data/maps/Zone0A/scripts.pory"
	.string "Zone 12$"

Zone0A_EventScript_Scientist_Text_13:
# 80 "data/maps/Zone0A/scripts.pory"
	.string "Zone 13$"

Zone0A_EventScript_Scientist_Text_14:
# 83 "data/maps/Zone0A/scripts.pory"
	.string "Zone 14$"

Zone0A_EventScript_Scientist_Text_15:
# 86 "data/maps/Zone0A/scripts.pory"
	.string "Zone 15$"

Zone0A_EventScript_Scientist_Text_16:
# 89 "data/maps/Zone0A/scripts.pory"
	.string "Zone 16$"

Zone0A_EventScript_Scientist_Text_17:
# 92 "data/maps/Zone0A/scripts.pory"
	.string "Zone 17$"

Zone0A_EventScript_Scientist_Text_18:
# 95 "data/maps/Zone0A/scripts.pory"
	.string "Zone 18$"

Zone0A_EventScript_Scientist_Text_19:
# 98 "data/maps/Zone0A/scripts.pory"
	.string "Zone 19$"

Zone0A_EventScript_Scientist_Text_20:
# 101 "data/maps/Zone0A/scripts.pory"
	.string "Zone 20$"

Zone0A_EventScript_Scientist_Text_21:
# 104 "data/maps/Zone0A/scripts.pory"
	.string "Zone 21$"

Zone0A_EventScript_Scientist_Text_22:
# 107 "data/maps/Zone0A/scripts.pory"
	.string "Zone 22$"

Zone0A_EventScript_Scientist_Text_23:
# 110 "data/maps/Zone0A/scripts.pory"
	.string "Zone 23$"

Zone0A_EventScript_Scientist_Text_24:
# 113 "data/maps/Zone0A/scripts.pory"
	.string "Zone 24$"

Zone0A_EventScript_Scientist_Text_25:
# 116 "data/maps/Zone0A/scripts.pory"
	.string "Zone 25$"

Zone0A_EventScript_Scientist_Text_26:
# 119 "data/maps/Zone0A/scripts.pory"
	.string "Zone 26$"

Zone0A_EventScript_Scientist_Text_27:
# 122 "data/maps/Zone0A/scripts.pory"
	.string "Zone 27$"

Zone0A_EventScript_Scientist_Text_28:
# 125 "data/maps/Zone0A/scripts.pory"
	.string "Zone 28$"

Zone0A_EventScript_Scientist_Text_29:
# 128 "data/maps/Zone0A/scripts.pory"
	.string "Zone 29$"

Zone0A_EventScript_Scientist_Text_30:
# 131 "data/maps/Zone0A/scripts.pory"
	.string "Zone 30$"

Zone0A_EventScript_Scientist_Text_31:
# 133 "data/maps/Zone0A/scripts.pory"
	.string "Cancel$"

Zone0A_EventScript_Scientist_Text_32:
# 366 "data/maps/Zone0A/scripts.pory"
	.string "Let me know if you need to go to any\n"
	.string "prior areas.$"

Zone0A_EventScript_Collector_Text_0:
# 375 "data/maps/Zone0A/scripts.pory"
	.string "TEMP$"

Zone0A_EventScript_BerryGirl_Text_0:
# 384 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_BerryGirl_Text_1:
# 386 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "You should try growing some berries\n"
	.string "yourself, though beware wild Pokémon\l"
	.string "that might be nibbling on your Berries.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"
