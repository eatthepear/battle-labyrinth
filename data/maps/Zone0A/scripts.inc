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
# 173 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_94
# 177 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_95
# 181 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_96
# 185 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_97
# 189 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_98
# 193 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_99
# 197 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_100
# 201 "data/maps/Zone0A/scripts.pory"
	case 8, Zone0A_EventScript_Exit_101
# 205 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_102
# 209 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_103
# 213 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_104
# 217 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_105
# 221 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Exit_106
# 222 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_106
Zone0A_EventScript_Exit_91:
# 228 "data/maps/Zone0A/scripts.pory"
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
	warpdoor MAP_ZONE_SHOPS, 255, 46, 1
# 172 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_94:
# 174 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 175 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 176 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_95:
# 178 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 179 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 180 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_96:
# 182 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 183 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 184 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_97:
# 186 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 187 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 188 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_98:
# 190 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 191 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 0
# 192 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_99:
# 194 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 195 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 196 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_100:
# 198 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 199 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 200 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_101:
# 202 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 203 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE8A, 255, 21, 26
# 204 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_102:
# 206 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 207 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 208 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_103:
# 210 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 211 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 212 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_104:
# 214 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 215 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 216 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_105:
# 218 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 219 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 220 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_91

Zone0A_EventScript_Exit_106:
# 223 "data/maps/Zone0A/scripts.pory"
	closemessage
# 224 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 225 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_91


# 260 "data/maps/Zone0A/scripts.pory"

# 261 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 262 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 263 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 264 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 265 "data/maps/Zone0A/scripts.pory"
	return
# 266 "data/maps/Zone0A/scripts.pory"

# 267 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 268 "data/maps/Zone0A/scripts.pory"
	lock
# 269 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 270 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 271 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 272 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 273 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 274 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 275 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 276 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 277 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 278 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 279 "data/maps/Zone0A/scripts.pory"
	release
# 280 "data/maps/Zone0A/scripts.pory"
	end
# 281 "data/maps/Zone0A/scripts.pory"

# 282 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 283 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 284 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 285 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 286 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 287 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 288 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 289 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 290 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 291 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 292 "data/maps/Zone0A/scripts.pory"
	release
# 293 "data/maps/Zone0A/scripts.pory"
	end
# 294 "data/maps/Zone0A/scripts.pory"

# 295 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 296 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 297 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 298 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 299 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 300 "data/maps/Zone0A/scripts.pory"
	release
# 301 "data/maps/Zone0A/scripts.pory"
	end
# 302 "data/maps/Zone0A/scripts.pory"

# 303 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 304 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 305 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 306 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 307 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 308 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 309 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 310 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 311 "data/maps/Zone0A/scripts.pory"
	release
# 312 "data/maps/Zone0A/scripts.pory"
	end
# 313 "data/maps/Zone0A/scripts.pory"

# 314 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 315 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 316 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 317 "data/maps/Zone0A/scripts.pory"
	release
# 318 "data/maps/Zone0A/scripts.pory"
	end
# 319 "data/maps/Zone0A/scripts.pory"

# 320 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 321 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 322 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 323 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 324 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 325 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 326 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 327 "data/maps/Zone0A/scripts.pory"
	release
# 328 "data/maps/Zone0A/scripts.pory"
	end
# 329 "data/maps/Zone0A/scripts.pory"

# 330 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 331 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 332 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 333 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 334 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 335 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 336 "data/maps/Zone0A/scripts.pory"

# 337 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 338 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 339 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 340 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 341 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 342 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 343 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 344 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 345 "data/maps/Zone0A/scripts.pory"

# 346 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 347 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 348 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 349 "data/maps/Zone0A/scripts.pory"

# 350 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 351 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 352 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 353 "data/maps/Zone0A/scripts.pory"

# 354 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 355 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 356 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 357 "data/maps/Zone0A/scripts.pory"

# 358 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 359 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 360 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 361 "data/maps/Zone0A/scripts.pory"

# 362 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 363 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 364 "data/maps/Zone0A/scripts.pory"

# 365 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 366 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 367 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 368 "data/maps/Zone0A/scripts.pory"

# 369 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 370 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 371 "data/maps/Zone0A/scripts.pory"
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
