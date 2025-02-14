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
	giveitem ITEM_EVERSTONE
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
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_Intro_2
# 28 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone0A_EventScript_Intro_2
# 31 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_3, MSGBOX_AUTOCLOSE
Zone0A_EventScript_Intro_1:
# 33 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkRight3
# 34 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 36 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 38 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Intro_2:
# 29 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
	goto Zone0A_EventScript_Intro_1


Zone0A_EventScript_Scientist::
# 43 "data/maps/Zone0A/scripts.pory"
	lock
# 44 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 45 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Scientist_Text_0
# 46 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 47 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 1
	goto_if_gt Zone0A_EventScript_Scientist_2
Zone0A_EventScript_Scientist_1:
# 50 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt Zone0A_EventScript_Scientist_5
Zone0A_EventScript_Scientist_4:
# 53 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_gt Zone0A_EventScript_Scientist_8
Zone0A_EventScript_Scientist_7:
# 56 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_gt Zone0A_EventScript_Scientist_11
Zone0A_EventScript_Scientist_10:
# 59 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt Zone0A_EventScript_Scientist_14
Zone0A_EventScript_Scientist_13:
# 62 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_gt Zone0A_EventScript_Scientist_17
Zone0A_EventScript_Scientist_16:
# 65 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_gt Zone0A_EventScript_Scientist_20
Zone0A_EventScript_Scientist_19:
# 68 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt Zone0A_EventScript_Scientist_23
Zone0A_EventScript_Scientist_22:
# 71 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_gt Zone0A_EventScript_Scientist_26
Zone0A_EventScript_Scientist_25:
# 74 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt Zone0A_EventScript_Scientist_29
Zone0A_EventScript_Scientist_28:
# 77 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_gt Zone0A_EventScript_Scientist_32
Zone0A_EventScript_Scientist_31:
# 80 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_gt Zone0A_EventScript_Scientist_35
Zone0A_EventScript_Scientist_34:
# 83 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_gt Zone0A_EventScript_Scientist_38
Zone0A_EventScript_Scientist_37:
# 86 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 14
	goto_if_gt Zone0A_EventScript_Scientist_41
Zone0A_EventScript_Scientist_40:
# 89 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_gt Zone0A_EventScript_Scientist_44
Zone0A_EventScript_Scientist_43:
# 92 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_gt Zone0A_EventScript_Scientist_47
Zone0A_EventScript_Scientist_46:
# 95 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_gt Zone0A_EventScript_Scientist_50
Zone0A_EventScript_Scientist_49:
# 98 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_gt Zone0A_EventScript_Scientist_53
Zone0A_EventScript_Scientist_52:
# 101 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 19
	goto_if_gt Zone0A_EventScript_Scientist_56
Zone0A_EventScript_Scientist_55:
# 104 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt Zone0A_EventScript_Scientist_59
Zone0A_EventScript_Scientist_58:
# 107 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_gt Zone0A_EventScript_Scientist_62
Zone0A_EventScript_Scientist_61:
# 110 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_gt Zone0A_EventScript_Scientist_65
Zone0A_EventScript_Scientist_64:
# 113 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_gt Zone0A_EventScript_Scientist_68
Zone0A_EventScript_Scientist_67:
# 116 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_gt Zone0A_EventScript_Scientist_71
Zone0A_EventScript_Scientist_70:
# 119 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt Zone0A_EventScript_Scientist_74
Zone0A_EventScript_Scientist_73:
# 122 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_gt Zone0A_EventScript_Scientist_77
Zone0A_EventScript_Scientist_76:
# 125 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_gt Zone0A_EventScript_Scientist_80
Zone0A_EventScript_Scientist_79:
# 128 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_gt Zone0A_EventScript_Scientist_83
Zone0A_EventScript_Scientist_82:
# 131 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_gt Zone0A_EventScript_Scientist_86
Zone0A_EventScript_Scientist_85:
# 134 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt Zone0A_EventScript_Scientist_89
Zone0A_EventScript_Scientist_88:
# 137 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_31, 51
# 138 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 139 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Scientist_93
# 159 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Scientist_94
# 178 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Scientist_95
# 197 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Scientist_96
# 216 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Scientist_97
# 235 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Scientist_98
# 254 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Scientist_99
# 273 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Scientist_100
# 292 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Scientist_101
# 311 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Scientist_102
# 330 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Scientist_103
# 349 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Scientist_104
# 368 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Scientist_105
# 369 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Scientist_105
Zone0A_EventScript_Scientist_91:
# 372 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_Scientist_2:
# 48 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_1, 1
	goto Zone0A_EventScript_Scientist_1

Zone0A_EventScript_Scientist_5:
# 51 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_2, 2
	goto Zone0A_EventScript_Scientist_4

Zone0A_EventScript_Scientist_8:
# 54 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_3, 3
	goto Zone0A_EventScript_Scientist_7

Zone0A_EventScript_Scientist_11:
# 57 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_4, 4
	goto Zone0A_EventScript_Scientist_10

Zone0A_EventScript_Scientist_14:
# 60 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_5, 5
	goto Zone0A_EventScript_Scientist_13

Zone0A_EventScript_Scientist_17:
# 63 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_6, 6
	goto Zone0A_EventScript_Scientist_16

Zone0A_EventScript_Scientist_20:
# 66 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_7, 7
	goto Zone0A_EventScript_Scientist_19

Zone0A_EventScript_Scientist_23:
# 69 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_8, 8
	goto Zone0A_EventScript_Scientist_22

Zone0A_EventScript_Scientist_26:
# 72 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_9, 9
	goto Zone0A_EventScript_Scientist_25

Zone0A_EventScript_Scientist_29:
# 75 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_10, 10
	goto Zone0A_EventScript_Scientist_28

Zone0A_EventScript_Scientist_32:
# 78 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_11, 11
	goto Zone0A_EventScript_Scientist_31

Zone0A_EventScript_Scientist_35:
# 81 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_12, 12
	goto Zone0A_EventScript_Scientist_34

Zone0A_EventScript_Scientist_38:
# 84 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_13, 13
	goto Zone0A_EventScript_Scientist_37

Zone0A_EventScript_Scientist_41:
# 87 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_14, 14
	goto Zone0A_EventScript_Scientist_40

Zone0A_EventScript_Scientist_44:
# 90 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_15, 15
	goto Zone0A_EventScript_Scientist_43

Zone0A_EventScript_Scientist_47:
# 93 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_16, 16
	goto Zone0A_EventScript_Scientist_46

Zone0A_EventScript_Scientist_50:
# 96 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_17, 17
	goto Zone0A_EventScript_Scientist_49

Zone0A_EventScript_Scientist_53:
# 99 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_18, 18
	goto Zone0A_EventScript_Scientist_52

Zone0A_EventScript_Scientist_56:
# 102 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_19, 19
	goto Zone0A_EventScript_Scientist_55

Zone0A_EventScript_Scientist_59:
# 105 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_20, 20
	goto Zone0A_EventScript_Scientist_58

Zone0A_EventScript_Scientist_62:
# 108 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_21, 21
	goto Zone0A_EventScript_Scientist_61

Zone0A_EventScript_Scientist_65:
# 111 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_22, 22
	goto Zone0A_EventScript_Scientist_64

Zone0A_EventScript_Scientist_68:
# 114 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_23, 23
	goto Zone0A_EventScript_Scientist_67

Zone0A_EventScript_Scientist_71:
# 117 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_24, 24
	goto Zone0A_EventScript_Scientist_70

Zone0A_EventScript_Scientist_74:
# 120 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_25, 25
	goto Zone0A_EventScript_Scientist_73

Zone0A_EventScript_Scientist_77:
# 123 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_26, 26
	goto Zone0A_EventScript_Scientist_76

Zone0A_EventScript_Scientist_80:
# 126 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_27, 27
	goto Zone0A_EventScript_Scientist_79

Zone0A_EventScript_Scientist_83:
# 129 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_28, 28
	goto Zone0A_EventScript_Scientist_82

Zone0A_EventScript_Scientist_86:
# 132 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_29, 29
	goto Zone0A_EventScript_Scientist_85

Zone0A_EventScript_Scientist_89:
# 135 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Scientist_Text_30, 30
	goto Zone0A_EventScript_Scientist_88

Zone0A_EventScript_Scientist_93:
# 141 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 142 "data/maps/Zone0A/scripts.pory"
	closemessage
# 143 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 144 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_107
# 151 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 152 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 153 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 154 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 155 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_106:
# 157 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1A, 255, 16, 28
# 158 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_94:
# 160 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 161 "data/maps/Zone0A/scripts.pory"
	closemessage
# 162 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 163 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_111
# 170 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 171 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 172 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 173 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 174 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_110:
# 176 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE2A, 255, 4, 3
# 177 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_95:
# 179 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 180 "data/maps/Zone0A/scripts.pory"
	closemessage
# 181 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 182 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_115
# 189 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 190 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 191 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 192 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 193 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_114:
# 195 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE3A, 255, 38, 25
# 196 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_96:
# 198 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 199 "data/maps/Zone0A/scripts.pory"
	closemessage
# 200 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 201 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_119
# 208 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 209 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 210 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 211 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 212 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_118:
# 214 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE4A, 255, 6, 4
# 215 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_97:
# 217 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 218 "data/maps/Zone0A/scripts.pory"
	closemessage
# 219 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 220 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_123
# 227 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 228 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 229 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 230 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 231 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_122:
# 233 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE5A, 255, 3, 0
# 234 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_98:
# 236 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 237 "data/maps/Zone0A/scripts.pory"
	closemessage
# 238 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 239 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_127
# 246 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 247 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 248 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 249 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 250 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_126:
# 252 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE6A, 255, 51, 22
# 253 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_99:
# 255 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 256 "data/maps/Zone0A/scripts.pory"
	closemessage
# 257 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 258 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_131
# 265 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 266 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 267 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 268 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 269 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_130:
# 271 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE7A, 255, 10, 33
# 272 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_100:
# 274 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 275 "data/maps/Zone0A/scripts.pory"
	closemessage
# 276 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 277 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_135
# 284 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 285 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 286 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 287 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 288 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_134:
# 290 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE8A, 255, 21, 26
# 291 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_101:
# 293 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 294 "data/maps/Zone0A/scripts.pory"
	closemessage
# 295 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 296 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_139
# 303 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 304 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 305 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 306 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 307 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_138:
# 309 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE9A, 255, 41, 22
# 310 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_102:
# 312 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 313 "data/maps/Zone0A/scripts.pory"
	closemessage
# 314 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 315 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_143
# 322 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 323 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 324 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 325 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 326 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_142:
# 328 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE10A, 255, 42, 51
# 329 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_103:
# 331 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 332 "data/maps/Zone0A/scripts.pory"
	closemessage
# 333 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 334 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_147
# 341 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 342 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 343 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 344 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 345 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_146:
# 347 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE11A, 255, 46, 2
# 348 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_104:
# 350 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 351 "data/maps/Zone0A/scripts.pory"
	closemessage
# 352 "data/maps/Zone0A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 353 "data/maps/Zone0A/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Zone0A_EventScript_Scientist_151
# 360 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft
# 361 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 362 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 363 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 364 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
Zone0A_EventScript_Scientist_150:
# 366 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE12A, 255, 9, 16
# 367 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_105:
# 370 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Scientist_Text_32
	goto Zone0A_EventScript_Scientist_91

Zone0A_EventScript_Scientist_107:
# 145 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 146 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 147 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 148 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 149 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_106

Zone0A_EventScript_Scientist_111:
# 164 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 165 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 166 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 167 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 168 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_110

Zone0A_EventScript_Scientist_115:
# 183 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 184 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 185 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 186 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 187 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_114

Zone0A_EventScript_Scientist_119:
# 202 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 203 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 204 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 205 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 206 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_118

Zone0A_EventScript_Scientist_123:
# 221 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 222 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 223 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 224 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 225 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_122

Zone0A_EventScript_Scientist_127:
# 240 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 241 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 242 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 243 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 244 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_126

Zone0A_EventScript_Scientist_131:
# 259 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 260 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 261 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 262 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 263 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_130

Zone0A_EventScript_Scientist_135:
# 278 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 279 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 280 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 281 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 282 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_134

Zone0A_EventScript_Scientist_139:
# 297 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 298 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 299 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 300 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 301 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_138

Zone0A_EventScript_Scientist_143:
# 316 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 317 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 318 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 319 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 320 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_142

Zone0A_EventScript_Scientist_147:
# 335 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 336 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 337 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 338 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 339 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_146

Zone0A_EventScript_Scientist_151:
# 354 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkDown
# 355 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 356 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 357 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 358 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Scientist_150


Zone0A_EventScript_BerryGirl::
# 377 "data/maps/Zone0A/scripts.pory"
	lock
# 378 "data/maps/Zone0A/scripts.pory"
	faceplayer
	checkitem ITEM_WAILMER_PAIL
# 0 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone0A_EventScript_BerryGirl_2
Zone0A_EventScript_BerryGirl_1:
# 383 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_BerryGirl_5
# 383 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_BerryGirl_5
# 386 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_2
Zone0A_EventScript_BerryGirl_4:
# 388 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_BerryGirl_2:
# 380 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_0
# 381 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
	goto Zone0A_EventScript_BerryGirl_1

Zone0A_EventScript_BerryGirl_5:
# 384 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_1
	goto Zone0A_EventScript_BerryGirl_4


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
	.string "this!$"

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
# 29 "data/maps/Zone0A/scripts.pory"
	.string "I've heard the Pokémon Day-Care takes\n"
	.string "care of your Pokémon for you.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_Intro_Text_3:
# 31 "data/maps/Zone0A/scripts.pory"
	.string "Oh, right! I just remembered something.\p"
	.string "I've heard the Pokémon Day-Care nearby\n"
	.string "is having a special gift Pokémon\l"
	.string "promotion.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_Scientist_Text_0:
# 45 "data/maps/Zone0A/scripts.pory"
	.string "Where do you want to go to?$"

Zone0A_EventScript_Scientist_Text_1:
# 48 "data/maps/Zone0A/scripts.pory"
	.string "Zone 1$"

Zone0A_EventScript_Scientist_Text_2:
# 51 "data/maps/Zone0A/scripts.pory"
	.string "Zone 2$"

Zone0A_EventScript_Scientist_Text_3:
# 54 "data/maps/Zone0A/scripts.pory"
	.string "Zone 3$"

Zone0A_EventScript_Scientist_Text_4:
# 57 "data/maps/Zone0A/scripts.pory"
	.string "Zone 4$"

Zone0A_EventScript_Scientist_Text_5:
# 60 "data/maps/Zone0A/scripts.pory"
	.string "Zone 5$"

Zone0A_EventScript_Scientist_Text_6:
# 63 "data/maps/Zone0A/scripts.pory"
	.string "Zone 6$"

Zone0A_EventScript_Scientist_Text_7:
# 66 "data/maps/Zone0A/scripts.pory"
	.string "Zone 7$"

Zone0A_EventScript_Scientist_Text_8:
# 69 "data/maps/Zone0A/scripts.pory"
	.string "Zone 8$"

Zone0A_EventScript_Scientist_Text_9:
# 72 "data/maps/Zone0A/scripts.pory"
	.string "Zone 9$"

Zone0A_EventScript_Scientist_Text_10:
# 75 "data/maps/Zone0A/scripts.pory"
	.string "Zone 10$"

Zone0A_EventScript_Scientist_Text_11:
# 78 "data/maps/Zone0A/scripts.pory"
	.string "Zone 11$"

Zone0A_EventScript_Scientist_Text_12:
# 81 "data/maps/Zone0A/scripts.pory"
	.string "Zone 12$"

Zone0A_EventScript_Scientist_Text_13:
# 84 "data/maps/Zone0A/scripts.pory"
	.string "Zone 13$"

Zone0A_EventScript_Scientist_Text_14:
# 87 "data/maps/Zone0A/scripts.pory"
	.string "Zone 14$"

Zone0A_EventScript_Scientist_Text_15:
# 90 "data/maps/Zone0A/scripts.pory"
	.string "Zone 15$"

Zone0A_EventScript_Scientist_Text_16:
# 93 "data/maps/Zone0A/scripts.pory"
	.string "Zone 16$"

Zone0A_EventScript_Scientist_Text_17:
# 96 "data/maps/Zone0A/scripts.pory"
	.string "Zone 17$"

Zone0A_EventScript_Scientist_Text_18:
# 99 "data/maps/Zone0A/scripts.pory"
	.string "Zone 18$"

Zone0A_EventScript_Scientist_Text_19:
# 102 "data/maps/Zone0A/scripts.pory"
	.string "Zone 19$"

Zone0A_EventScript_Scientist_Text_20:
# 105 "data/maps/Zone0A/scripts.pory"
	.string "Zone 20$"

Zone0A_EventScript_Scientist_Text_21:
# 108 "data/maps/Zone0A/scripts.pory"
	.string "Zone 21$"

Zone0A_EventScript_Scientist_Text_22:
# 111 "data/maps/Zone0A/scripts.pory"
	.string "Zone 22$"

Zone0A_EventScript_Scientist_Text_23:
# 114 "data/maps/Zone0A/scripts.pory"
	.string "Zone 23$"

Zone0A_EventScript_Scientist_Text_24:
# 117 "data/maps/Zone0A/scripts.pory"
	.string "Zone 24$"

Zone0A_EventScript_Scientist_Text_25:
# 120 "data/maps/Zone0A/scripts.pory"
	.string "Zone 25$"

Zone0A_EventScript_Scientist_Text_26:
# 123 "data/maps/Zone0A/scripts.pory"
	.string "Zone 26$"

Zone0A_EventScript_Scientist_Text_27:
# 126 "data/maps/Zone0A/scripts.pory"
	.string "Zone 27$"

Zone0A_EventScript_Scientist_Text_28:
# 129 "data/maps/Zone0A/scripts.pory"
	.string "Zone 28$"

Zone0A_EventScript_Scientist_Text_29:
# 132 "data/maps/Zone0A/scripts.pory"
	.string "Zone 29$"

Zone0A_EventScript_Scientist_Text_30:
# 135 "data/maps/Zone0A/scripts.pory"
	.string "Zone 30$"

Zone0A_EventScript_Scientist_Text_31:
# 137 "data/maps/Zone0A/scripts.pory"
	.string "Cancel$"

Zone0A_EventScript_Scientist_Text_32:
# 370 "data/maps/Zone0A/scripts.pory"
	.string "Let me know if you need to go to any\n"
	.string "prior areas.$"

Zone0A_EventScript_BerryGirl_Text_0:
# 380 "data/maps/Zone0A/scripts.pory"
	.string "Hey there! You look new around here.\p"
	.string "Take this as a present!$"

Zone0A_EventScript_BerryGirl_Text_1:
# 384 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_BerryGirl_Text_2:
# 386 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "You should try growing some berries\n"
	.string "yourself, though beware wild Pokémon\l"
	.string "that might be nibbling on your Berries.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"
