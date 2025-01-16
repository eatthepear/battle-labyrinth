Zone0A_MapScripts::
# 6 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0A_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0A_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Zone0A/scripts.pory"
	call Zone0A_EventScript_TryMoveDayCareMan
# 8 "data/maps/Zone0A/scripts.pory"
	call Zone0A_EventScript_TryMoveBerryGirl
	return

Zone0A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 0, Zone0A_EventScript_Intro
# 4 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 2, Zone0A_EventScript_MoveDown
	.2byte 0


Zone0A_EventScript_TryMoveBerryGirl::
# 13 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE_0_STATE, 0
	goto_if_eq Zone0A_EventScript_TryMoveBerryGirl_1
	return

Zone0A_EventScript_TryMoveBerryGirl_1:
# 14 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 14, 40, 9
	return


Zone0A_EventScript_Intro::
# 19 "data/maps/Zone0A/scripts.pory"
	lockall
# 20 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 21 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_FaceLeft
# 22 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 24 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 25 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone0A/scripts.pory"
	waitse
# 27 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_WalkLeft2
# 28 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 29 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 32 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_Intro_2
# 32 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_Intro_2
# 35 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2
Zone0A_EventScript_Intro_1:
# 37 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 38 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 39 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone0A/scripts.pory"
	waitse
# 41 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_3, MSGBOX_AUTOCLOSE
# 42 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_WalkRight6
# 43 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone0A/scripts.pory"
	applymovement 14, Common_Movement_WalkRight
# 45 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 46 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 14, 53, 7
# 47 "data/maps/Zone0A/scripts.pory"
	setobjectxy 14, 53, 7
# 48 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 49 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Intro_2:
# 33 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_1
	goto Zone0A_EventScript_Intro_1


Zone0A_EventScript_BerryGirl::
# 54 "data/maps/Zone0A/scripts.pory"
	lock
# 55 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 56 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_0
# 57 "data/maps/Zone0A/scripts.pory"
	release
	end


Zone0A_EventScript_MoveDown::
# 62 "data/maps/Zone0A/scripts.pory"
	lockall
# 63 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 64 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 66 "data/maps/Zone0A/scripts.pory"
	releaseall
	end


Zone0A_EventScript_Exit::
# 71 "data/maps/Zone0A/scripts.pory"
	lockall
# 72 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Exit_Text_0
# 73 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 74 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_1, 0
# 75 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 1
	goto_if_gt Zone0A_EventScript_Exit_2
Zone0A_EventScript_Exit_1:
# 78 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt Zone0A_EventScript_Exit_5
Zone0A_EventScript_Exit_4:
# 81 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_gt Zone0A_EventScript_Exit_8
Zone0A_EventScript_Exit_7:
# 84 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_gt Zone0A_EventScript_Exit_11
Zone0A_EventScript_Exit_10:
# 87 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt Zone0A_EventScript_Exit_14
Zone0A_EventScript_Exit_13:
# 90 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_gt Zone0A_EventScript_Exit_17
Zone0A_EventScript_Exit_16:
# 93 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_gt Zone0A_EventScript_Exit_20
Zone0A_EventScript_Exit_19:
# 96 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt Zone0A_EventScript_Exit_23
Zone0A_EventScript_Exit_22:
# 99 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_gt Zone0A_EventScript_Exit_26
Zone0A_EventScript_Exit_25:
# 102 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt Zone0A_EventScript_Exit_29
Zone0A_EventScript_Exit_28:
# 105 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_gt Zone0A_EventScript_Exit_32
Zone0A_EventScript_Exit_31:
# 108 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_gt Zone0A_EventScript_Exit_35
Zone0A_EventScript_Exit_34:
# 111 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_gt Zone0A_EventScript_Exit_38
Zone0A_EventScript_Exit_37:
# 114 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 14
	goto_if_gt Zone0A_EventScript_Exit_41
Zone0A_EventScript_Exit_40:
# 117 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_gt Zone0A_EventScript_Exit_44
Zone0A_EventScript_Exit_43:
# 120 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_gt Zone0A_EventScript_Exit_47
Zone0A_EventScript_Exit_46:
# 123 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_gt Zone0A_EventScript_Exit_50
Zone0A_EventScript_Exit_49:
# 126 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_gt Zone0A_EventScript_Exit_53
Zone0A_EventScript_Exit_52:
# 129 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 19
	goto_if_gt Zone0A_EventScript_Exit_56
Zone0A_EventScript_Exit_55:
# 132 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt Zone0A_EventScript_Exit_59
Zone0A_EventScript_Exit_58:
# 135 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_gt Zone0A_EventScript_Exit_62
Zone0A_EventScript_Exit_61:
# 138 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_gt Zone0A_EventScript_Exit_65
Zone0A_EventScript_Exit_64:
# 141 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_gt Zone0A_EventScript_Exit_68
Zone0A_EventScript_Exit_67:
# 144 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_gt Zone0A_EventScript_Exit_71
Zone0A_EventScript_Exit_70:
# 147 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt Zone0A_EventScript_Exit_74
Zone0A_EventScript_Exit_73:
# 150 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_gt Zone0A_EventScript_Exit_77
Zone0A_EventScript_Exit_76:
# 153 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_gt Zone0A_EventScript_Exit_80
Zone0A_EventScript_Exit_79:
# 156 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_gt Zone0A_EventScript_Exit_83
Zone0A_EventScript_Exit_82:
# 159 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_gt Zone0A_EventScript_Exit_86
Zone0A_EventScript_Exit_85:
# 162 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt Zone0A_EventScript_Exit_89
Zone0A_EventScript_Exit_88:
# 165 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_32, 51
# 166 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 167 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/Zone0A/scripts.pory"
	case 0, Zone0A_EventScript_Exit_93
# 239 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_94
# 243 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_95
# 247 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_96
# 251 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_97
# 255 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_98
# 259 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_99
# 263 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_100
# 267 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Exit_101
# 271 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_102
# 275 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_103
# 279 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_104
# 283 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_105
# 287 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Exit_106
# 288 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_106
Zone0A_EventScript_Exit_91:
# 294 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Exit_2:
# 76 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_2, 1
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_5:
# 79 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_3, 2
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_8:
# 82 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_4, 3
	goto Zone0A_EventScript_Exit_7

Zone0A_EventScript_Exit_11:
# 85 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_5, 4
	goto Zone0A_EventScript_Exit_10

Zone0A_EventScript_Exit_14:
# 88 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_6, 5
	goto Zone0A_EventScript_Exit_13

Zone0A_EventScript_Exit_17:
# 91 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_7, 6
	goto Zone0A_EventScript_Exit_16

Zone0A_EventScript_Exit_20:
# 94 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_8, 7
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_23:
# 97 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_9, 8
	goto Zone0A_EventScript_Exit_22

Zone0A_EventScript_Exit_26:
# 100 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_10, 9
	goto Zone0A_EventScript_Exit_25

Zone0A_EventScript_Exit_29:
# 103 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_11, 10
	goto Zone0A_EventScript_Exit_28

Zone0A_EventScript_Exit_32:
# 106 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_12, 11
	goto Zone0A_EventScript_Exit_31

Zone0A_EventScript_Exit_35:
# 109 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_13, 12
	goto Zone0A_EventScript_Exit_34

Zone0A_EventScript_Exit_38:
# 112 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_14, 13
	goto Zone0A_EventScript_Exit_37

Zone0A_EventScript_Exit_41:
# 115 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_15, 14
	goto Zone0A_EventScript_Exit_40

Zone0A_EventScript_Exit_44:
# 118 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_16, 15
	goto Zone0A_EventScript_Exit_43

Zone0A_EventScript_Exit_47:
# 121 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_17, 16
	goto Zone0A_EventScript_Exit_46

Zone0A_EventScript_Exit_50:
# 124 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_18, 17
	goto Zone0A_EventScript_Exit_49

Zone0A_EventScript_Exit_53:
# 127 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_19, 18
	goto Zone0A_EventScript_Exit_52

Zone0A_EventScript_Exit_56:
# 130 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_20, 19
	goto Zone0A_EventScript_Exit_55

Zone0A_EventScript_Exit_59:
# 133 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_21, 20
	goto Zone0A_EventScript_Exit_58

Zone0A_EventScript_Exit_62:
# 136 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_22, 21
	goto Zone0A_EventScript_Exit_61

Zone0A_EventScript_Exit_65:
# 139 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_23, 22
	goto Zone0A_EventScript_Exit_64

Zone0A_EventScript_Exit_68:
# 142 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_24, 23
	goto Zone0A_EventScript_Exit_67

Zone0A_EventScript_Exit_71:
# 145 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_25, 24
	goto Zone0A_EventScript_Exit_70

Zone0A_EventScript_Exit_74:
# 148 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_26, 25
	goto Zone0A_EventScript_Exit_73

Zone0A_EventScript_Exit_77:
# 151 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_27, 26
	goto Zone0A_EventScript_Exit_76

Zone0A_EventScript_Exit_80:
# 154 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_28, 27
	goto Zone0A_EventScript_Exit_79

Zone0A_EventScript_Exit_83:
# 157 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_29, 28
	goto Zone0A_EventScript_Exit_82

Zone0A_EventScript_Exit_86:
# 160 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_30, 29
	goto Zone0A_EventScript_Exit_85

Zone0A_EventScript_Exit_89:
# 163 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_31, 30
	goto Zone0A_EventScript_Exit_88

Zone0A_EventScript_Exit_93:
# 169 "data/maps/Zone0A/scripts.pory"
	closemessage
# 170 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 171 "data/maps/Zone0A/scripts.pory"
	switch VAR_ZONE
# 172 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_108
# 175 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_109
# 178 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_110
# 181 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_111
# 184 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_112
# 187 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_113
# 190 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_114
# 193 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_115
# 196 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_116
# 199 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_117
# 202 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_118
# 205 "data/maps/Zone0A/scripts.pory"
	case 13, Zone0A_EventScript_Exit_119
# 208 "data/maps/Zone0A/scripts.pory"
	case 15, Zone0A_EventScript_Exit_120
# 211 "data/maps/Zone0A/scripts.pory"
	case 16, Zone0A_EventScript_Exit_121
# 214 "data/maps/Zone0A/scripts.pory"
	case 17, Zone0A_EventScript_Exit_122
# 217 "data/maps/Zone0A/scripts.pory"
	case 18, Zone0A_EventScript_Exit_123
# 220 "data/maps/Zone0A/scripts.pory"
	case 20, Zone0A_EventScript_Exit_124
# 223 "data/maps/Zone0A/scripts.pory"
	case 21, Zone0A_EventScript_Exit_125
# 226 "data/maps/Zone0A/scripts.pory"
	case 22, Zone0A_EventScript_Exit_126
# 229 "data/maps/Zone0A/scripts.pory"
	case 23, Zone0A_EventScript_Exit_127
# 232 "data/maps/Zone0A/scripts.pory"
	case 24, Zone0A_EventScript_Exit_128
# 235 "data/maps/Zone0A/scripts.pory"
	case 26, Zone0A_EventScript_Exit_129
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_94:
# 240 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 241 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 242 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_95:
# 244 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 245 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 246 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_96:
# 248 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 249 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 250 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_97:
# 252 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 253 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 254 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_98:
# 256 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 257 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 0
# 258 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_99:
# 260 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 261 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 262 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_100:
# 264 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 265 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 266 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_101:
# 268 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 269 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE8A, 255, 21, 26
# 270 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_102:
# 272 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 273 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 274 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_103:
# 276 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 277 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 278 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_104:
# 280 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 281 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 282 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_105:
# 284 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 285 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 286 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_106:
# 289 "data/maps/Zone0A/scripts.pory"
	closemessage
# 290 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 291 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_108:
# 173 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE0SHOPS, 255, 46, 1
# 174 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_109:
# 176 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1SHOPS, 255, 46, 1
# 177 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_110:
# 179 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE2SHOPS, 255, 46, 1
# 180 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_111:
# 182 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE3SHOPS, 255, 46, 1
# 183 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_112:
# 185 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE4SHOPS, 255, 46, 1
# 186 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_113:
# 188 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE5SHOPS, 255, 46, 1
# 189 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_114:
# 191 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE6SHOPS, 255, 46, 1
# 192 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_115:
# 194 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE8SHOPS, 255, 46, 1
# 195 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_116:
# 197 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE9SHOPS, 255, 46, 1
# 198 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_117:
# 200 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE10SHOPS, 255, 46, 1
# 201 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_118:
# 203 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE11SHOPS, 255, 46, 1
# 204 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_119:
# 206 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE12SHOPS, 255, 46, 1
# 207 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_120:
# 209 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE14SHOPS, 255, 46, 1
# 210 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_121:
# 212 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE15SHOPS, 255, 46, 1
# 213 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_122:
# 215 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE16SHOPS, 255, 46, 1
# 216 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_123:
# 218 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE17SHOPS, 255, 46, 1
# 219 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_124:
# 221 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE20SHOPS, 255, 46, 1
# 222 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_125:
# 224 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE20SHOPS, 255, 46, 1
# 225 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_126:
# 227 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE21SHOPS, 255, 46, 1
# 228 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_127:
# 230 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE22SHOPS, 255, 46, 1
# 231 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_128:
# 233 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE23SHOPS, 255, 46, 1
# 234 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_129:
# 236 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE25SHOPS, 255, 46, 1
# 237 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91


# 326 "data/maps/Zone0A/scripts.pory"

# 327 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 328 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 329 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 330 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 331 "data/maps/Zone0A/scripts.pory"
	return
# 332 "data/maps/Zone0A/scripts.pory"

# 333 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 334 "data/maps/Zone0A/scripts.pory"
	lock
# 335 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 336 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 337 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 338 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 339 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 340 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 341 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 342 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 343 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 344 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 345 "data/maps/Zone0A/scripts.pory"
	release
# 346 "data/maps/Zone0A/scripts.pory"
	end
# 347 "data/maps/Zone0A/scripts.pory"

# 348 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 349 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 350 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 351 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 352 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 353 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 354 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 355 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 356 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 357 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 358 "data/maps/Zone0A/scripts.pory"
	release
# 359 "data/maps/Zone0A/scripts.pory"
	end
# 360 "data/maps/Zone0A/scripts.pory"

# 361 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 362 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 363 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 364 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 365 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 366 "data/maps/Zone0A/scripts.pory"
	release
# 367 "data/maps/Zone0A/scripts.pory"
	end
# 368 "data/maps/Zone0A/scripts.pory"

# 369 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 370 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 371 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 372 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 373 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 374 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 375 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 376 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 377 "data/maps/Zone0A/scripts.pory"
	release
# 378 "data/maps/Zone0A/scripts.pory"
	end
# 379 "data/maps/Zone0A/scripts.pory"

# 380 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 381 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 382 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 383 "data/maps/Zone0A/scripts.pory"
	release
# 384 "data/maps/Zone0A/scripts.pory"
	end
# 385 "data/maps/Zone0A/scripts.pory"

# 386 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 387 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 388 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 389 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 390 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 391 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 392 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 393 "data/maps/Zone0A/scripts.pory"
	release
# 394 "data/maps/Zone0A/scripts.pory"
	end
# 395 "data/maps/Zone0A/scripts.pory"

# 396 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 397 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 398 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 399 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 400 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 401 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 402 "data/maps/Zone0A/scripts.pory"

# 403 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 404 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 405 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 406 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 407 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 408 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 409 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 410 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 411 "data/maps/Zone0A/scripts.pory"

# 412 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 413 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 414 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 415 "data/maps/Zone0A/scripts.pory"

# 416 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 417 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 418 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 419 "data/maps/Zone0A/scripts.pory"

# 420 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 421 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 422 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 423 "data/maps/Zone0A/scripts.pory"

# 424 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 425 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 426 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 427 "data/maps/Zone0A/scripts.pory"

# 428 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 429 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 430 "data/maps/Zone0A/scripts.pory"

# 431 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 432 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 433 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 434 "data/maps/Zone0A/scripts.pory"

# 435 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 436 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 437 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"

Zone0A_EventScript_Intro_Text_0:
# 30 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Welcome to my home.\p"
	.string "There are no trainers here, and no\n"
	.string "challenges to face. Everything is meant\l"
	.string "to help you on your journey.\p"
	.string "As a welcome gift, I'd like you to have\n"
	.string "this.$"

Zone0A_EventScript_Intro_Text_1:
# 33 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_Intro_Text_2:
# 35 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "You should try growing some berries\n"
	.string "yourself, though beware wild Pokémon\l"
	.string "that might be nibbling on your Berries.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_Intro_Text_3:
# 41 "data/maps/Zone0A/scripts.pory"
	.string "Oh, right! I just remembered something.\p"
	.string "I've heard the Pokémon Day-Care nearby\n"
	.string "is having a special gift Pokémon\l"
	.string "promotion.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_BerryGirl_Text_0:
# 56 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Hope you are doing well.$"

Zone0A_EventScript_Exit_Text_0:
# 72 "data/maps/Zone0A/scripts.pory"
	.string "Where do you want to go to?$"

Zone0A_EventScript_Exit_Text_1:
# 74 "data/maps/Zone0A/scripts.pory"
	.string "Sanctuary$"

Zone0A_EventScript_Exit_Text_2:
# 76 "data/maps/Zone0A/scripts.pory"
	.string "Zone 1$"

Zone0A_EventScript_Exit_Text_3:
# 79 "data/maps/Zone0A/scripts.pory"
	.string "Zone 2$"

Zone0A_EventScript_Exit_Text_4:
# 82 "data/maps/Zone0A/scripts.pory"
	.string "Zone 3$"

Zone0A_EventScript_Exit_Text_5:
# 85 "data/maps/Zone0A/scripts.pory"
	.string "Zone 4$"

Zone0A_EventScript_Exit_Text_6:
# 88 "data/maps/Zone0A/scripts.pory"
	.string "Zone 5$"

Zone0A_EventScript_Exit_Text_7:
# 91 "data/maps/Zone0A/scripts.pory"
	.string "Zone 6$"

Zone0A_EventScript_Exit_Text_8:
# 94 "data/maps/Zone0A/scripts.pory"
	.string "Zone 7$"

Zone0A_EventScript_Exit_Text_9:
# 97 "data/maps/Zone0A/scripts.pory"
	.string "Zone 8$"

Zone0A_EventScript_Exit_Text_10:
# 100 "data/maps/Zone0A/scripts.pory"
	.string "Zone 9$"

Zone0A_EventScript_Exit_Text_11:
# 103 "data/maps/Zone0A/scripts.pory"
	.string "Zone 10$"

Zone0A_EventScript_Exit_Text_12:
# 106 "data/maps/Zone0A/scripts.pory"
	.string "Zone 11$"

Zone0A_EventScript_Exit_Text_13:
# 109 "data/maps/Zone0A/scripts.pory"
	.string "Zone 12$"

Zone0A_EventScript_Exit_Text_14:
# 112 "data/maps/Zone0A/scripts.pory"
	.string "Zone 13$"

Zone0A_EventScript_Exit_Text_15:
# 115 "data/maps/Zone0A/scripts.pory"
	.string "Zone 14$"

Zone0A_EventScript_Exit_Text_16:
# 118 "data/maps/Zone0A/scripts.pory"
	.string "Zone 15$"

Zone0A_EventScript_Exit_Text_17:
# 121 "data/maps/Zone0A/scripts.pory"
	.string "Zone 16$"

Zone0A_EventScript_Exit_Text_18:
# 124 "data/maps/Zone0A/scripts.pory"
	.string "Zone 17$"

Zone0A_EventScript_Exit_Text_19:
# 127 "data/maps/Zone0A/scripts.pory"
	.string "Zone 18$"

Zone0A_EventScript_Exit_Text_20:
# 130 "data/maps/Zone0A/scripts.pory"
	.string "Zone 19$"

Zone0A_EventScript_Exit_Text_21:
# 133 "data/maps/Zone0A/scripts.pory"
	.string "Zone 20$"

Zone0A_EventScript_Exit_Text_22:
# 136 "data/maps/Zone0A/scripts.pory"
	.string "Zone 21$"

Zone0A_EventScript_Exit_Text_23:
# 139 "data/maps/Zone0A/scripts.pory"
	.string "Zone 22$"

Zone0A_EventScript_Exit_Text_24:
# 142 "data/maps/Zone0A/scripts.pory"
	.string "Zone 23$"

Zone0A_EventScript_Exit_Text_25:
# 145 "data/maps/Zone0A/scripts.pory"
	.string "Zone 24$"

Zone0A_EventScript_Exit_Text_26:
# 148 "data/maps/Zone0A/scripts.pory"
	.string "Zone 25$"

Zone0A_EventScript_Exit_Text_27:
# 151 "data/maps/Zone0A/scripts.pory"
	.string "Zone 26$"

Zone0A_EventScript_Exit_Text_28:
# 154 "data/maps/Zone0A/scripts.pory"
	.string "Zone 27$"

Zone0A_EventScript_Exit_Text_29:
# 157 "data/maps/Zone0A/scripts.pory"
	.string "Zone 28$"

Zone0A_EventScript_Exit_Text_30:
# 160 "data/maps/Zone0A/scripts.pory"
	.string "Zone 29$"

Zone0A_EventScript_Exit_Text_31:
# 163 "data/maps/Zone0A/scripts.pory"
	.string "Zone 30$"

Zone0A_EventScript_Exit_Text_32:
# 165 "data/maps/Zone0A/scripts.pory"
	.string "Exit$"
