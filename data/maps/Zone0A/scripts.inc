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
	call Zone0A_EventScript_TryMoveScientist
	return

Zone0A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 0, Zone0A_EventScript_Intro
# 4 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 2, Zone0A_EventScript_MoveDown
	.2byte 0


Zone0A_EventScript_TryMoveScientist::
# 13 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE_0_STATE, 0
	goto_if_eq Zone0A_EventScript_TryMoveScientist_1
	return

Zone0A_EventScript_TryMoveScientist_1:
# 14 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 15, 40, 9
	return


Zone0A_EventScript_Intro::
# 19 "data/maps/Zone0A/scripts.pory"
	lockall
# 20 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 21 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 22 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 24 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 25 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone0A/scripts.pory"
	waitse
# 27 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkLeft2
# 28 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 29 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 32 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_1
# 33 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 34 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 35 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 36 "data/maps/Zone0A/scripts.pory"
	waitse
# 37 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_WalkUp
# 39 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 41 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 42 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 15, 53, 7
# 43 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 44 "data/maps/Zone0A/scripts.pory"
	releaseall
	end


Zone0A_EventScript_Scientist::
# 49 "data/maps/Zone0A/scripts.pory"
	lock
# 50 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 51 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Scientist_Text_0
# 52 "data/maps/Zone0A/scripts.pory"
	release
	end


Zone0A_EventScript_BerryGirl::
# 57 "data/maps/Zone0A/scripts.pory"
	lock
# 58 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 59 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_BerryGirl_2
# 59 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_BerryGirl_2
# 62 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_1
Zone0A_EventScript_BerryGirl_1:
# 64 "data/maps/Zone0A/scripts.pory"
	release
	end

Zone0A_EventScript_BerryGirl_2:
# 60 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_BerryGirl_Text_0
	goto Zone0A_EventScript_BerryGirl_1


Zone0A_EventScript_MoveDown::
# 69 "data/maps/Zone0A/scripts.pory"
	lockall
# 70 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 71 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 72 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 73 "data/maps/Zone0A/scripts.pory"
	releaseall
	end


Zone0A_EventScript_Exit::
# 78 "data/maps/Zone0A/scripts.pory"
	lockall
# 79 "data/maps/Zone0A/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 80 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Exit_Text_0
# 82 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 83 "data/maps/Zone0A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Zone0A_EventScript_Exit_Text_1, Zone0A_EventScript_Exit_Text_2, Zone0A_EventScript_Exit_Text_3, Zone0A_EventScript_Exit_Text_4
# 84 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/Zone0A/scripts.pory"
	case 0, Zone0A_EventScript_Exit_3
# 90 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_4
# 238 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_5
# 239 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_5
# 240 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_5
Zone0A_EventScript_Exit_1:
# 245 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Exit_3:
# 86 "data/maps/Zone0A/scripts.pory"
	closemessage
# 87 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 88 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE_SHOPS, 255, 46, 1
# 89 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_4:
# 91 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 1
	goto_if_gt Zone0A_EventScript_Exit_7
Zone0A_EventScript_Exit_6:
# 94 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt Zone0A_EventScript_Exit_10
Zone0A_EventScript_Exit_9:
# 97 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_gt Zone0A_EventScript_Exit_13
Zone0A_EventScript_Exit_12:
# 100 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_gt Zone0A_EventScript_Exit_16
Zone0A_EventScript_Exit_15:
# 103 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt Zone0A_EventScript_Exit_19
Zone0A_EventScript_Exit_18:
# 106 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_gt Zone0A_EventScript_Exit_22
Zone0A_EventScript_Exit_21:
# 109 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_gt Zone0A_EventScript_Exit_25
Zone0A_EventScript_Exit_24:
# 112 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt Zone0A_EventScript_Exit_28
Zone0A_EventScript_Exit_27:
# 115 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_gt Zone0A_EventScript_Exit_31
Zone0A_EventScript_Exit_30:
# 118 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt Zone0A_EventScript_Exit_34
Zone0A_EventScript_Exit_33:
# 121 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_gt Zone0A_EventScript_Exit_37
Zone0A_EventScript_Exit_36:
# 124 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_gt Zone0A_EventScript_Exit_40
Zone0A_EventScript_Exit_39:
# 127 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_gt Zone0A_EventScript_Exit_43
Zone0A_EventScript_Exit_42:
# 130 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 14
	goto_if_gt Zone0A_EventScript_Exit_46
Zone0A_EventScript_Exit_45:
# 133 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_gt Zone0A_EventScript_Exit_49
Zone0A_EventScript_Exit_48:
# 136 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_gt Zone0A_EventScript_Exit_52
Zone0A_EventScript_Exit_51:
# 139 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_gt Zone0A_EventScript_Exit_55
Zone0A_EventScript_Exit_54:
# 142 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_gt Zone0A_EventScript_Exit_58
Zone0A_EventScript_Exit_57:
# 145 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 19
	goto_if_gt Zone0A_EventScript_Exit_61
Zone0A_EventScript_Exit_60:
# 148 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt Zone0A_EventScript_Exit_64
Zone0A_EventScript_Exit_63:
# 151 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_gt Zone0A_EventScript_Exit_67
Zone0A_EventScript_Exit_66:
# 154 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_gt Zone0A_EventScript_Exit_70
Zone0A_EventScript_Exit_69:
# 157 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_gt Zone0A_EventScript_Exit_73
Zone0A_EventScript_Exit_72:
# 160 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_gt Zone0A_EventScript_Exit_76
Zone0A_EventScript_Exit_75:
# 163 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt Zone0A_EventScript_Exit_79
Zone0A_EventScript_Exit_78:
# 166 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_gt Zone0A_EventScript_Exit_82
Zone0A_EventScript_Exit_81:
# 169 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_gt Zone0A_EventScript_Exit_85
Zone0A_EventScript_Exit_84:
# 172 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_gt Zone0A_EventScript_Exit_88
Zone0A_EventScript_Exit_87:
# 175 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_gt Zone0A_EventScript_Exit_91
Zone0A_EventScript_Exit_90:
# 178 "data/maps/Zone0A/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt Zone0A_EventScript_Exit_94
Zone0A_EventScript_Exit_93:
# 181 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_4, 51
# 182 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 183 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_97
# 188 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_98
# 192 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_99
# 196 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_100
# 200 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_101
# 204 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_102
# 208 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_103
# 212 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Exit_104
# 216 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_105
# 220 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_106
# 224 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_107
# 228 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_108
# 232 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Exit_109
# 233 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_109
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_5:
# 241 "data/maps/Zone0A/scripts.pory"
	closemessage
# 242 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 243 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_7:
# 92 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_5, 1
	goto Zone0A_EventScript_Exit_6

Zone0A_EventScript_Exit_10:
# 95 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_6, 2
	goto Zone0A_EventScript_Exit_9

Zone0A_EventScript_Exit_13:
# 98 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_7, 3
	goto Zone0A_EventScript_Exit_12

Zone0A_EventScript_Exit_16:
# 101 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_8, 4
	goto Zone0A_EventScript_Exit_15

Zone0A_EventScript_Exit_19:
# 104 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_9, 5
	goto Zone0A_EventScript_Exit_18

Zone0A_EventScript_Exit_22:
# 107 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_10, 6
	goto Zone0A_EventScript_Exit_21

Zone0A_EventScript_Exit_25:
# 110 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_11, 7
	goto Zone0A_EventScript_Exit_24

Zone0A_EventScript_Exit_28:
# 113 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_12, 8
	goto Zone0A_EventScript_Exit_27

Zone0A_EventScript_Exit_31:
# 116 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_13, 9
	goto Zone0A_EventScript_Exit_30

Zone0A_EventScript_Exit_34:
# 119 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_14, 10
	goto Zone0A_EventScript_Exit_33

Zone0A_EventScript_Exit_37:
# 122 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_15, 11
	goto Zone0A_EventScript_Exit_36

Zone0A_EventScript_Exit_40:
# 125 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_16, 12
	goto Zone0A_EventScript_Exit_39

Zone0A_EventScript_Exit_43:
# 128 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_17, 13
	goto Zone0A_EventScript_Exit_42

Zone0A_EventScript_Exit_46:
# 131 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_18, 14
	goto Zone0A_EventScript_Exit_45

Zone0A_EventScript_Exit_49:
# 134 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_19, 15
	goto Zone0A_EventScript_Exit_48

Zone0A_EventScript_Exit_52:
# 137 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_20, 16
	goto Zone0A_EventScript_Exit_51

Zone0A_EventScript_Exit_55:
# 140 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_21, 17
	goto Zone0A_EventScript_Exit_54

Zone0A_EventScript_Exit_58:
# 143 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_22, 18
	goto Zone0A_EventScript_Exit_57

Zone0A_EventScript_Exit_61:
# 146 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_23, 19
	goto Zone0A_EventScript_Exit_60

Zone0A_EventScript_Exit_64:
# 149 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_24, 20
	goto Zone0A_EventScript_Exit_63

Zone0A_EventScript_Exit_67:
# 152 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_25, 21
	goto Zone0A_EventScript_Exit_66

Zone0A_EventScript_Exit_70:
# 155 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_26, 22
	goto Zone0A_EventScript_Exit_69

Zone0A_EventScript_Exit_73:
# 158 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_27, 23
	goto Zone0A_EventScript_Exit_72

Zone0A_EventScript_Exit_76:
# 161 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_28, 24
	goto Zone0A_EventScript_Exit_75

Zone0A_EventScript_Exit_79:
# 164 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_29, 25
	goto Zone0A_EventScript_Exit_78

Zone0A_EventScript_Exit_82:
# 167 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_30, 26
	goto Zone0A_EventScript_Exit_81

Zone0A_EventScript_Exit_85:
# 170 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_31, 27
	goto Zone0A_EventScript_Exit_84

Zone0A_EventScript_Exit_88:
# 173 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_32, 28
	goto Zone0A_EventScript_Exit_87

Zone0A_EventScript_Exit_91:
# 176 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_33, 29
	goto Zone0A_EventScript_Exit_90

Zone0A_EventScript_Exit_94:
# 179 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_34, 30
	goto Zone0A_EventScript_Exit_93

Zone0A_EventScript_Exit_97:
# 185 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 186 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 187 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_98:
# 189 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 190 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 191 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_99:
# 193 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 194 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 195 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_100:
# 197 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 198 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 199 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_101:
# 201 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 202 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 0
# 203 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_102:
# 205 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 206 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 207 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_103:
# 209 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 210 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 211 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_104:
# 213 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 214 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE8A, 255, 21, 26
# 215 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_105:
# 217 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 218 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 219 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_106:
# 221 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 222 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 223 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_107:
# 225 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 226 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 227 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_108:
# 229 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 230 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 231 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_109:
# 234 "data/maps/Zone0A/scripts.pory"
	closemessage
# 235 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 236 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_1


# 277 "data/maps/Zone0A/scripts.pory"

# 278 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 279 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 280 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 281 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 282 "data/maps/Zone0A/scripts.pory"
	return
# 283 "data/maps/Zone0A/scripts.pory"

# 284 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 285 "data/maps/Zone0A/scripts.pory"
	lock
# 286 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 287 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 288 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 289 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 290 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 291 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 292 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 293 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 294 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 295 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 296 "data/maps/Zone0A/scripts.pory"
	release
# 297 "data/maps/Zone0A/scripts.pory"
	end
# 298 "data/maps/Zone0A/scripts.pory"

# 299 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 300 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 301 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 302 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 303 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 304 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 305 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 306 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 307 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 308 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 309 "data/maps/Zone0A/scripts.pory"
	release
# 310 "data/maps/Zone0A/scripts.pory"
	end
# 311 "data/maps/Zone0A/scripts.pory"

# 312 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 313 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 314 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 315 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 316 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 317 "data/maps/Zone0A/scripts.pory"
	release
# 318 "data/maps/Zone0A/scripts.pory"
	end
# 319 "data/maps/Zone0A/scripts.pory"

# 320 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 321 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 322 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 323 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 324 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 325 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 326 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 327 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 328 "data/maps/Zone0A/scripts.pory"
	release
# 329 "data/maps/Zone0A/scripts.pory"
	end
# 330 "data/maps/Zone0A/scripts.pory"

# 331 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 332 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 333 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 334 "data/maps/Zone0A/scripts.pory"
	release
# 335 "data/maps/Zone0A/scripts.pory"
	end
# 336 "data/maps/Zone0A/scripts.pory"

# 337 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 338 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 339 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 340 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 341 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 342 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 343 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 344 "data/maps/Zone0A/scripts.pory"
	release
# 345 "data/maps/Zone0A/scripts.pory"
	end
# 346 "data/maps/Zone0A/scripts.pory"

# 347 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 348 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 349 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 350 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 351 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 352 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 353 "data/maps/Zone0A/scripts.pory"

# 354 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 355 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 356 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 357 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 358 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 359 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 360 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 361 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 362 "data/maps/Zone0A/scripts.pory"

# 363 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 364 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 365 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 366 "data/maps/Zone0A/scripts.pory"

# 367 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 368 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 369 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 370 "data/maps/Zone0A/scripts.pory"

# 371 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 372 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 373 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 374 "data/maps/Zone0A/scripts.pory"

# 375 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 376 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 377 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 378 "data/maps/Zone0A/scripts.pory"

# 379 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 380 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 381 "data/maps/Zone0A/scripts.pory"

# 382 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 383 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 384 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 385 "data/maps/Zone0A/scripts.pory"

# 386 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 387 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 388 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"

Zone0A_EventScript_Intro_Text_0:
# 30 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "Welcome to my home, {COLOR GREEN}Harvest Road{COLOR DARK_GRAY}.\p"
	.string "There are no trainers here, and no\n"
	.string "challenges to face. Everything is meant\l"
	.string "to help you on your journey.\p"
	.string "As a welcome gift, I'd like you to have\n"
	.string "this.$"

Zone0A_EventScript_Intro_Text_1:
# 32 "data/maps/Zone0A/scripts.pory"
	.string "I help run the TPI, or Teleport\n"
	.string "Institute.\p"
	.string "You can easily access the Sanctuary,\n"
	.string "prior areas, or even extra areas here.$"

Zone0A_EventScript_Intro_Text_2:
# 37 "data/maps/Zone0A/scripts.pory"
	.string "Oh, right! I just remembered something.\p"
	.string "I've heard the Pokémon Day-Care nearby\n"
	.string "is having a special gift Pokémon\l"
	.string "promotion.\p"
	.string "It might be worth a look.$"

Zone0A_EventScript_Scientist_Text_0:
# 51 "data/maps/Zone0A/scripts.pory"
	.string "The TPI connects to the Sanctuary,\n"
	.string "prior areas you've been to, and some\l"
	.string "extra areas as well.\p"
	.string "I've been working on getting more extra\n"
	.string "areas linked in, so do come back to see\l"
	.string "them.$"

Zone0A_EventScript_BerryGirl_Text_0:
# 60 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_BerryGirl_Text_1:
# 62 "data/maps/Zone0A/scripts.pory"
	.string "I'm the caretaker of the berry fields\n"
	.string "here.\p"
	.string "You should try growing some berries\n"
	.string "yourself, though beware wild Pokémon\l"
	.string "that might be nibbling on your Berries.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_Exit_Text_0:
# 81 "data/maps/Zone0A/scripts.pory"
	.string "Where do you want to go to?$"

Zone0A_EventScript_Exit_Text_1:
# 83 "data/maps/Zone0A/scripts.pory"
	.string "Sanctuary$"

Zone0A_EventScript_Exit_Text_2:
# 83 "data/maps/Zone0A/scripts.pory"
	.string "Zones$"

Zone0A_EventScript_Exit_Text_3:
# 83 "data/maps/Zone0A/scripts.pory"
	.string "Extra Areas$"

Zone0A_EventScript_Exit_Text_4:
# 83 "data/maps/Zone0A/scripts.pory"
	.string "Exit$"

Zone0A_EventScript_Exit_Text_5:
# 92 "data/maps/Zone0A/scripts.pory"
	.string "Zone 1$"

Zone0A_EventScript_Exit_Text_6:
# 95 "data/maps/Zone0A/scripts.pory"
	.string "Zone 2$"

Zone0A_EventScript_Exit_Text_7:
# 98 "data/maps/Zone0A/scripts.pory"
	.string "Zone 3$"

Zone0A_EventScript_Exit_Text_8:
# 101 "data/maps/Zone0A/scripts.pory"
	.string "Zone 4$"

Zone0A_EventScript_Exit_Text_9:
# 104 "data/maps/Zone0A/scripts.pory"
	.string "Zone 5$"

Zone0A_EventScript_Exit_Text_10:
# 107 "data/maps/Zone0A/scripts.pory"
	.string "Zone 6$"

Zone0A_EventScript_Exit_Text_11:
# 110 "data/maps/Zone0A/scripts.pory"
	.string "Zone 7$"

Zone0A_EventScript_Exit_Text_12:
# 113 "data/maps/Zone0A/scripts.pory"
	.string "Zone 8$"

Zone0A_EventScript_Exit_Text_13:
# 116 "data/maps/Zone0A/scripts.pory"
	.string "Zone 9$"

Zone0A_EventScript_Exit_Text_14:
# 119 "data/maps/Zone0A/scripts.pory"
	.string "Zone 10$"

Zone0A_EventScript_Exit_Text_15:
# 122 "data/maps/Zone0A/scripts.pory"
	.string "Zone 11$"

Zone0A_EventScript_Exit_Text_16:
# 125 "data/maps/Zone0A/scripts.pory"
	.string "Zone 12$"

Zone0A_EventScript_Exit_Text_17:
# 128 "data/maps/Zone0A/scripts.pory"
	.string "Zone 13$"

Zone0A_EventScript_Exit_Text_18:
# 131 "data/maps/Zone0A/scripts.pory"
	.string "Zone 14$"

Zone0A_EventScript_Exit_Text_19:
# 134 "data/maps/Zone0A/scripts.pory"
	.string "Zone 15$"

Zone0A_EventScript_Exit_Text_20:
# 137 "data/maps/Zone0A/scripts.pory"
	.string "Zone 16$"

Zone0A_EventScript_Exit_Text_21:
# 140 "data/maps/Zone0A/scripts.pory"
	.string "Zone 17$"

Zone0A_EventScript_Exit_Text_22:
# 143 "data/maps/Zone0A/scripts.pory"
	.string "Zone 18$"

Zone0A_EventScript_Exit_Text_23:
# 146 "data/maps/Zone0A/scripts.pory"
	.string "Zone 19$"

Zone0A_EventScript_Exit_Text_24:
# 149 "data/maps/Zone0A/scripts.pory"
	.string "Zone 20$"

Zone0A_EventScript_Exit_Text_25:
# 152 "data/maps/Zone0A/scripts.pory"
	.string "Zone 21$"

Zone0A_EventScript_Exit_Text_26:
# 155 "data/maps/Zone0A/scripts.pory"
	.string "Zone 22$"

Zone0A_EventScript_Exit_Text_27:
# 158 "data/maps/Zone0A/scripts.pory"
	.string "Zone 23$"

Zone0A_EventScript_Exit_Text_28:
# 161 "data/maps/Zone0A/scripts.pory"
	.string "Zone 24$"

Zone0A_EventScript_Exit_Text_29:
# 164 "data/maps/Zone0A/scripts.pory"
	.string "Zone 25$"

Zone0A_EventScript_Exit_Text_30:
# 167 "data/maps/Zone0A/scripts.pory"
	.string "Zone 26$"

Zone0A_EventScript_Exit_Text_31:
# 170 "data/maps/Zone0A/scripts.pory"
	.string "Zone 27$"

Zone0A_EventScript_Exit_Text_32:
# 173 "data/maps/Zone0A/scripts.pory"
	.string "Zone 28$"

Zone0A_EventScript_Exit_Text_33:
# 176 "data/maps/Zone0A/scripts.pory"
	.string "Zone 29$"

Zone0A_EventScript_Exit_Text_34:
# 179 "data/maps/Zone0A/scripts.pory"
	.string "Zone 30$"
