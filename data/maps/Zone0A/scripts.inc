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
	giveitem ITEM_GREEN_APRICORN
# 23 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_RED_APRICORN
# 24 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_BLUE_APRICORN
# 25 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_1
# 26 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 27 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone0A/scripts.pory"
	waitse
# 30 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
# 31 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkRight3
# 32 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 33 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 34 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 36 "data/maps/Zone0A/scripts.pory"
	releaseall
	end


Zone0A_EventScript_Scientist::
# 41 "data/maps/Zone0A/scripts.pory"
	lock
# 42 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 43 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Scientist_Text_0
# 44 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 45 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 1
	goto_if_gt Zone0A_EventScript_Scientist_2
Zone0A_EventScript_Scientist_1:
# 48 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt Zone0A_EventScript_Scientist_5
Zone0A_EventScript_Scientist_4:
# 51 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_gt Zone0A_EventScript_Scientist_8
Zone0A_EventScript_Scientist_7:
# 54 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_gt Zone0A_EventScript_Scientist_11
Zone0A_EventScript_Scientist_10:
# 57 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt Zone0A_EventScript_Scientist_14
Zone0A_EventScript_Scientist_13:
# 60 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_gt Zone0A_EventScript_Scientist_17
Zone0A_EventScript_Scientist_16:
# 63 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_gt Zone0A_EventScript_Scientist_20
Zone0A_EventScript_Scientist_19:
# 66 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt Zone0A_EventScript_Scientist_23
Zone0A_EventScript_Scientist_22:
# 69 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_gt Zone0A_EventScript_Scientist_26
Zone0A_EventScript_Scientist_25:
# 72 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt Zone0A_EventScript_Scientist_29
Zone0A_EventScript_Scientist_28:
# 75 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_gt Zone0A_EventScript_Scientist_32
Zone0A_EventScript_Scientist_31:
# 78 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_gt Zone0A_EventScript_Scientist_35
Zone0A_EventScript_Scientist_34:
# 81 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_gt Zone0A_EventScript_Scientist_38
Zone0A_EventScript_Scientist_37:
# 84 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 14
	goto_if_gt Zone0A_EventScript_Scientist_41
Zone0A_EventScript_Scientist_40:
# 87 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_gt Zone0A_EventScript_Scientist_44
Zone0A_EventScript_Scientist_43:
# 90 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_gt Zone0A_EventScript_Scientist_47
Zone0A_EventScript_Scientist_46:
# 93 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_gt Zone0A_EventScript_Scientist_50
Zone0A_EventScript_Scientist_49:
# 96 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_gt Zone0A_EventScript_Scientist_53
Zone0A_EventScript_Scientist_52:
# 99 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 19
	goto_if_gt Zone0A_EventScript_Scientist_56
Zone0A_EventScript_Scientist_55:
# 102 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt Zone0A_EventScript_Scientist_59
Zone0A_EventScript_Scientist_58:
# 105 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_gt Zone0A_EventScript_Scientist_62
Zone0A_EventScript_Scientist_61:
# 108 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_gt Zone0A_EventScript_Scientist_65
Zone0A_EventScript_Scientist_64:
# 111 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_gt Zone0A_EventScript_Scientist_68
Zone0A_EventScript_Scientist_67:
# 114 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_gt Zone0A_EventScript_Scientist_71
Zone0A_EventScript_Scientist_70:
# 117 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt Zone0A_EventScript_Scientist_74
Zone0A_EventScript_Scientist_73:
# 120 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_gt Zone0A_EventScript_Scientist_77
Zone0A_EventScript_Scientist_76:
# 123 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_gt Zone0A_EventScript_Scientist_80
Zone0A_EventScript_Scientist_79:
# 126 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_gt Zone0A_EventScript_Scientist_83
Zone0A_EventScript_Scientist_82:
# 129 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_gt Zone0A_EventScript_Scientist_86
Zone0A_EventScript_Scientist_85:
# 132 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt Zone0A_EventScript_Scientist_89
Zone0A_EventScript_Scientist_88:
# 135 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_31, 51
# 136 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 137 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Scientist_93
# 157 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Scientist_94
# 176 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Scientist_95
# 195 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Scientist_96
# 214 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Scientist_97
# 233 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Scientist_98
# 252 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Scientist_99
# 271 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Scientist_100
# 290 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Scientist_101
# 309 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Scientist_102
# 328 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Scientist_103
# 347 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Scientist_104
# 366 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Scientist_105
# 367 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Scientist_105
Zone0A_EventScript_Scientist_91:
# 370 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_Scientist_2:
# 46 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_1, 1
	goto Zone0A_EventScript_Scientist_1

Zone0A_EventScript_Scientist_5:
# 49 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_2, 2
	goto Zone0A_EventScript_Scientist_4

Zone0A_EventScript_Scientist_8:
# 52 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_3, 3
	goto Zone0A_EventScript_Scientist_7

Zone0A_EventScript_Scientist_11:
# 55 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_4, 4
	goto Zone0A_EventScript_Scientist_10

Zone0A_EventScript_Scientist_14:
# 58 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_5, 5
	goto Zone0A_EventScript_Scientist_13

Zone0A_EventScript_Scientist_17:
# 61 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_6, 6
	goto Zone0A_EventScript_Scientist_16

Zone0A_EventScript_Scientist_20:
# 64 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_7, 7
	goto Zone0A_EventScript_Scientist_19

Zone0A_EventScript_Scientist_23:
# 67 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_8, 8
	goto Zone0A_EventScript_Scientist_22

Zone0A_EventScript_Scientist_26:
# 70 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_9, 9
	goto Zone0A_EventScript_Scientist_25

Zone0A_EventScript_Scientist_29:
# 73 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_10, 10
	goto Zone0A_EventScript_Scientist_28

Zone0A_EventScript_Scientist_32:
# 76 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_11, 11
	goto Zone0A_EventScript_Scientist_31

Zone0A_EventScript_Scientist_35:
# 79 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_12, 12
	goto Zone0A_EventScript_Scientist_34

Zone0A_EventScript_Scientist_38:
# 82 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_13, 13
	goto Zone0A_EventScript_Scientist_37

Zone0A_EventScript_Scientist_41:
# 85 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_14, 14
	goto Zone0A_EventScript_Scientist_40

Zone0A_EventScript_Scientist_44:
# 88 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_15, 15
	goto Zone0A_EventScript_Scientist_43

Zone0A_EventScript_Scientist_47:
# 91 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_16, 16
	goto Zone0A_EventScript_Scientist_46

Zone0A_EventScript_Scientist_50:
# 94 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_17, 17
	goto Zone0A_EventScript_Scientist_49

Zone0A_EventScript_Scientist_53:
# 97 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_18, 18
	goto Zone0A_EventScript_Scientist_52

Zone0A_EventScript_Scientist_56:
# 100 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_19, 19
	goto Zone0A_EventScript_Scientist_55

Zone0A_EventScript_Scientist_59:
# 103 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_20, 20
	goto Zone0A_EventScript_Scientist_58

Zone0A_EventScript_Scientist_62:
# 106 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_21, 21
	goto Zone0A_EventScript_Scientist_61

Zone0A_EventScript_Scientist_65:
# 109 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_22, 22
	goto Zone0A_EventScript_Scientist_64

Zone0A_EventScript_Scientist_68:
# 112 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_23, 23
	goto Zone0A_EventScript_Scientist_67

Zone0A_EventScript_Scientist_71:
# 115 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_24, 24
	goto Zone0A_EventScript_Scientist_70

Zone0A_EventScript_Scientist_74:
# 118 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_25, 25
	goto Zone0A_EventScript_Scientist_73

Zone0A_EventScript_Scientist_77:
# 121 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_26, 26
	goto Zone0A_EventScript_Scientist_76

Zone0A_EventScript_Scientist_80:
# 124 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_27, 27
	goto Zone0A_EventScript_Scientist_79

Zone0A_EventScript_Scientist_83:
# 127 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_28, 28
	goto Zone0A_EventScript_Scientist_82

Zone0A_EventScript_Scientist_86:
# 130 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_29, 29
	goto Zone0A_EventScript_Scientist_85

Zone0A_EventScript_Scientist_89:
# 133 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_30, 30
	goto Zone0A_EventScript_Scientist_88

Zone0A_EventScript_Scientist_93:
# 139 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 140 "data/maps/Zone0A/scripts.pory"
	closemessage
# 141 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 142 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_107
# 149 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 150 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 151 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 152 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 153 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_106:
# 155 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1A, 255, 16, 28
# 156 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_94:
# 158 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 159 "data/maps/Zone0A/scripts.pory"
	closemessage
# 160 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 161 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_111
# 168 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 169 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 170 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 171 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 172 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_110:
# 174 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE2A, 255, 4, 3
# 175 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_95:
# 177 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 178 "data/maps/Zone0A/scripts.pory"
	closemessage
# 179 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 180 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_115
# 187 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 188 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 189 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 190 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 191 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_114:
# 193 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE3A, 255, 38, 25
# 194 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_96:
# 196 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 197 "data/maps/Zone0A/scripts.pory"
	closemessage
# 198 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 199 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_119
# 206 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 207 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 208 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 209 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 210 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_118:
# 212 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE4A, 255, 6, 4
# 213 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_97:
# 215 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 216 "data/maps/Zone0A/scripts.pory"
	closemessage
# 217 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 218 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_123
# 225 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 226 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 227 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 228 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 229 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_122:
# 231 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE5A, 255, 3, 0
# 232 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_98:
# 234 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 235 "data/maps/Zone0A/scripts.pory"
	closemessage
# 236 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 237 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_127
# 244 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 245 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 246 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 247 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 248 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_126:
# 250 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE6A, 255, 51, 22
# 251 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_99:
# 253 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 254 "data/maps/Zone0A/scripts.pory"
	closemessage
# 255 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 256 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_131
# 263 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 264 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 265 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 266 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 267 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_130:
# 269 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE7A, 255, 10, 33
# 270 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_100:
# 272 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 273 "data/maps/Zone0A/scripts.pory"
	closemessage
# 274 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 275 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_135
# 282 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 283 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 284 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 285 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 286 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_134:
# 288 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE8A, 255, 21, 26
# 289 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_101:
# 291 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 292 "data/maps/Zone0A/scripts.pory"
	closemessage
# 293 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 294 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_139
# 301 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 302 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 303 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 304 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 305 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_138:
# 307 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE9A, 255, 41, 22
# 308 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_102:
# 310 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 311 "data/maps/Zone0A/scripts.pory"
	closemessage
# 312 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 313 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_143
# 320 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 321 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 322 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 323 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 324 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_142:
# 326 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE10A, 255, 42, 51
# 327 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_103:
# 329 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 330 "data/maps/Zone0A/scripts.pory"
	closemessage
# 331 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 332 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_147
# 339 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 340 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 341 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 342 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 343 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_146:
# 345 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE11A, 255, 46, 2
# 346 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_104:
# 348 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 349 "data/maps/Zone0A/scripts.pory"
	closemessage
# 350 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 351 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_151
# 358 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 359 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 360 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 361 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 362 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_150:
# 364 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE12A, 255, 9, 16
# 365 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_105:
# 368 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Scientist_Text_32
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_107:
# 143 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 144 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 145 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 146 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 147 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_106

Zone0A_EventScript_Scientist_111:
# 162 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 163 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 164 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 165 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 166 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_110

Zone0A_EventScript_Scientist_115:
# 181 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 182 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 183 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 184 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 185 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_114

Zone0A_EventScript_Scientist_119:
# 200 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 201 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 202 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 203 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 204 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_118

Zone0A_EventScript_Scientist_123:
# 219 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 220 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 221 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 222 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 223 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_122

Zone0A_EventScript_Scientist_127:
# 238 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 239 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 240 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 241 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 242 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_126

Zone0A_EventScript_Scientist_131:
# 257 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 258 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 259 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 260 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 261 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_130

Zone0A_EventScript_Scientist_135:
# 276 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 277 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 278 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 279 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 280 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_134

Zone0A_EventScript_Scientist_139:
# 295 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 296 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 297 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 298 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 299 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_138

Zone0A_EventScript_Scientist_143:
# 314 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 315 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 316 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 317 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 318 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_142

Zone0A_EventScript_Scientist_147:
# 333 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 334 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 335 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 336 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 337 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_146

Zone0A_EventScript_Scientist_151:
# 352 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 353 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 354 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 355 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 356 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_150


Zone0A_EventScript_BerryGirl::
# 375 "data/maps/Zone0A/scripts.pory"
	lock
# 376 "data/maps/Zone0A/scripts.pory"
	faceplayer
	checkitem ITEM_WAILMER_PAIL
# 0 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone0A_EventScript_BerryGirl_2
Zone0A_EventScript_BerryGirl_1:
# 381 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_BerryGirl_5
# 381 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_BerryGirl_5
# 384 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_2
Zone0A_EventScript_BerryGirl_4:
# 386 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_BerryGirl_2:
# 378 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_0
# 379 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
	goto Zone0A_EventScript_BerryGirl_1

Zone0A_EventScript_BerryGirl_5:
# 382 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_1
	goto Zone0A_EventScript_BerryGirl_4


# 418 "data/maps/Zone0A/scripts.pory"

# 419 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 420 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 421 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 422 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 423 "data/maps/Zone0A/scripts.pory"
	return
# 424 "data/maps/Zone0A/scripts.pory"

# 425 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 426 "data/maps/Zone0A/scripts.pory"
	lock
# 427 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 428 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 429 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 430 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 431 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 432 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 433 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 434 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 435 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 436 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 437 "data/maps/Zone0A/scripts.pory"
	release
# 438 "data/maps/Zone0A/scripts.pory"
	end
# 439 "data/maps/Zone0A/scripts.pory"

# 440 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 441 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 442 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 443 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 444 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 445 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 446 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 447 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 448 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 449 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 450 "data/maps/Zone0A/scripts.pory"
	release
# 451 "data/maps/Zone0A/scripts.pory"
	end
# 452 "data/maps/Zone0A/scripts.pory"

# 453 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 454 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 455 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 456 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 457 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 458 "data/maps/Zone0A/scripts.pory"
	release
# 459 "data/maps/Zone0A/scripts.pory"
	end
# 460 "data/maps/Zone0A/scripts.pory"

# 461 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 462 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 463 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 464 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 465 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 466 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 467 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 468 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 469 "data/maps/Zone0A/scripts.pory"
	release
# 470 "data/maps/Zone0A/scripts.pory"
	end
# 471 "data/maps/Zone0A/scripts.pory"

# 472 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 473 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 474 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 475 "data/maps/Zone0A/scripts.pory"
	release
# 476 "data/maps/Zone0A/scripts.pory"
	end
# 477 "data/maps/Zone0A/scripts.pory"

# 478 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 479 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 480 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 481 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 482 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 483 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 484 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 485 "data/maps/Zone0A/scripts.pory"
	release
# 486 "data/maps/Zone0A/scripts.pory"
	end
# 487 "data/maps/Zone0A/scripts.pory"

# 488 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 489 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 490 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 491 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 492 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 493 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 494 "data/maps/Zone0A/scripts.pory"

# 495 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 496 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 497 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 498 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 499 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 500 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 501 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 502 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 503 "data/maps/Zone0A/scripts.pory"

# 504 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 505 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 506 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 507 "data/maps/Zone0A/scripts.pory"

# 508 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 509 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 510 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 511 "data/maps/Zone0A/scripts.pory"

# 512 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 513 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 514 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 515 "data/maps/Zone0A/scripts.pory"

# 516 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 517 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 518 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 519 "data/maps/Zone0A/scripts.pory"

# 520 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 521 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 522 "data/maps/Zone0A/scripts.pory"

# 523 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 524 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 525 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 526 "data/maps/Zone0A/scripts.pory"

# 527 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 528 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 529 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"

Zone0A_EventScript_Intro_Text_0:
# 21 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Welcome to my home, {COLOR GREEN}Harvest Road{COLOR DARK_GRAY}.\p"
	.string "There are no trainers here, and no\n"
	.string "challenges to face. Everything is meant\l"
	.string "to help you on your journey.\p"
	.string "As a welcome gift, I'd like you to have\n"
	.string "these!$"

Zone0A_EventScript_Intro_Text_1:
# 25 "data/maps/Zone0A/scripts.pory"
	.string "I run this green building that you just\n"
	.string "walked out of, called the {COLOR GREEN}TPI{COLOR DARK_GRAY} or\l"
	.string "{COLOR GREEN}Teleport Institute{COLOR DARK_GRAY}.\p"
	.string "That door on the left leads back to the\n"
	.string "Sanctuary, while this door on the right\l"
	.string "is for prior areas.\p"
	.string "Let me know if I can help you get\n"
	.string "anywhere!$"

Zone0A_EventScript_Intro_Text_2:
# 30 "data/maps/Zone0A/scripts.pory"
	.string "Oh, right! I just remembered something.\p"
	.string "I've heard the Pokémon Day-Care nearby\n"
	.string "is having a special gift Pokémon\l"
	.string "promotion.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_Scientist_Text_0:
# 43 "data/maps/Zone0A/scripts.pory"
	.string "Where do you want to go to?$"

Zone0A_EventScript_Scientist_Text_1:
# 46 "data/maps/Zone0A/scripts.pory"
	.string "Zone 1$"

Zone0A_EventScript_Scientist_Text_2:
# 49 "data/maps/Zone0A/scripts.pory"
	.string "Zone 2$"

Zone0A_EventScript_Scientist_Text_3:
# 52 "data/maps/Zone0A/scripts.pory"
	.string "Zone 3$"

Zone0A_EventScript_Scientist_Text_4:
# 55 "data/maps/Zone0A/scripts.pory"
	.string "Zone 4$"

Zone0A_EventScript_Scientist_Text_5:
# 58 "data/maps/Zone0A/scripts.pory"
	.string "Zone 5$"

Zone0A_EventScript_Scientist_Text_6:
# 61 "data/maps/Zone0A/scripts.pory"
	.string "Zone 6$"

Zone0A_EventScript_Scientist_Text_7:
# 64 "data/maps/Zone0A/scripts.pory"
	.string "Zone 7$"

Zone0A_EventScript_Scientist_Text_8:
# 67 "data/maps/Zone0A/scripts.pory"
	.string "Zone 8$"

Zone0A_EventScript_Scientist_Text_9:
# 70 "data/maps/Zone0A/scripts.pory"
	.string "Zone 9$"

Zone0A_EventScript_Scientist_Text_10:
# 73 "data/maps/Zone0A/scripts.pory"
	.string "Zone 10$"

Zone0A_EventScript_Scientist_Text_11:
# 76 "data/maps/Zone0A/scripts.pory"
	.string "Zone 11$"

Zone0A_EventScript_Scientist_Text_12:
# 79 "data/maps/Zone0A/scripts.pory"
	.string "Zone 12$"

Zone0A_EventScript_Scientist_Text_13:
# 82 "data/maps/Zone0A/scripts.pory"
	.string "Zone 13$"

Zone0A_EventScript_Scientist_Text_14:
# 85 "data/maps/Zone0A/scripts.pory"
	.string "Zone 14$"

Zone0A_EventScript_Scientist_Text_15:
# 88 "data/maps/Zone0A/scripts.pory"
	.string "Zone 15$"

Zone0A_EventScript_Scientist_Text_16:
# 91 "data/maps/Zone0A/scripts.pory"
	.string "Zone 16$"

Zone0A_EventScript_Scientist_Text_17:
# 94 "data/maps/Zone0A/scripts.pory"
	.string "Zone 17$"

Zone0A_EventScript_Scientist_Text_18:
# 97 "data/maps/Zone0A/scripts.pory"
	.string "Zone 18$"

Zone0A_EventScript_Scientist_Text_19:
# 100 "data/maps/Zone0A/scripts.pory"
	.string "Zone 19$"

Zone0A_EventScript_Scientist_Text_20:
# 103 "data/maps/Zone0A/scripts.pory"
	.string "Zone 20$"

Zone0A_EventScript_Scientist_Text_21:
# 106 "data/maps/Zone0A/scripts.pory"
	.string "Zone 21$"

Zone0A_EventScript_Scientist_Text_22:
# 109 "data/maps/Zone0A/scripts.pory"
	.string "Zone 22$"

Zone0A_EventScript_Scientist_Text_23:
# 112 "data/maps/Zone0A/scripts.pory"
	.string "Zone 23$"

Zone0A_EventScript_Scientist_Text_24:
# 115 "data/maps/Zone0A/scripts.pory"
	.string "Zone 24$"

Zone0A_EventScript_Scientist_Text_25:
# 118 "data/maps/Zone0A/scripts.pory"
	.string "Zone 25$"

Zone0A_EventScript_Scientist_Text_26:
# 121 "data/maps/Zone0A/scripts.pory"
	.string "Zone 26$"

Zone0A_EventScript_Scientist_Text_27:
# 124 "data/maps/Zone0A/scripts.pory"
	.string "Zone 27$"

Zone0A_EventScript_Scientist_Text_28:
# 127 "data/maps/Zone0A/scripts.pory"
	.string "Zone 28$"

Zone0A_EventScript_Scientist_Text_29:
# 130 "data/maps/Zone0A/scripts.pory"
	.string "Zone 29$"

Zone0A_EventScript_Scientist_Text_30:
# 133 "data/maps/Zone0A/scripts.pory"
	.string "Zone 30$"

Zone0A_EventScript_Scientist_Text_31:
# 135 "data/maps/Zone0A/scripts.pory"
	.string "Cancel$"

Zone0A_EventScript_Scientist_Text_32:
# 368 "data/maps/Zone0A/scripts.pory"
	.string "Let me know if you need to go to any\n"
	.string "prior areas.$"

Zone0A_EventScript_BerryGirl_Text_0:
# 378 "data/maps/Zone0A/scripts.pory"
	.string "Hey there! You look new around here.\p"
	.string "Take this as a present!$"

Zone0A_EventScript_BerryGirl_Text_1:
# 382 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_BerryGirl_Text_2:
# 384 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "You should try growing some berries\n"
	.string "yourself, though beware wild Pokémon\l"
	.string "that might be nibbling on your Berries.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"
