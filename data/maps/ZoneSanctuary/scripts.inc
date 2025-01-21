ZoneSanctuary_MapScripts::
# 2 "data/maps/ZoneSanctuary/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZoneSanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZoneSanctuary_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZoneSanctuary/scripts.pory"
	map_script_2 VAR_ZONE, 0, Sanctuary_EventScript_GameIntro
# 4 "data/maps/ZoneSanctuary/scripts.pory"
	map_script_2 VAR_GENERIC, 1, Sanctuary_EventScript_EnterSanctuary
	.2byte 0


Sanctuary_EventScript_NextZone::
# 9 "data/maps/ZoneSanctuary/scripts.pory"
	lock
# 10 "data/maps/ZoneSanctuary/scripts.pory"
	faceplayer
# 11 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_NextZone_Text_0
# 12 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 13 "data/maps/ZoneSanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Sanctuary_EventScript_NextZone_Text_1, Sanctuary_EventScript_NextZone_Text_2, Sanctuary_EventScript_NextZone_Text_3, Sanctuary_EventScript_NextZone_Text_4
# 14 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_NextZone_3
# 167 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_NextZone_4
# 169 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_NextZone_5
Sanctuary_EventScript_NextZone_1:
# 172 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 173 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 174 "data/maps/ZoneSanctuary/scripts.pory"
	release
	return

Sanctuary_EventScript_NextZone_3:
# 16 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_eq Sanctuary_EventScript_NextZone_7
Sanctuary_EventScript_NextZone_6:
# 22 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_eq Sanctuary_EventScript_NextZone_10
Sanctuary_EventScript_NextZone_9:
# 28 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_eq Sanctuary_EventScript_NextZone_15
Sanctuary_EventScript_NextZone_14:
# 34 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_eq Sanctuary_EventScript_NextZone_20
Sanctuary_EventScript_NextZone_19:
# 40 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 41 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_9, MSGBOX_YESNO
# 42 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_24
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_4:
# 168 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Settings
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_5:
# 170 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_7:
# 17 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_5, MSGBOX_YESNO
# 18 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_NextZone_12
	goto Sanctuary_EventScript_NextZone_6

Sanctuary_EventScript_NextZone_10:
# 23 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_6, MSGBOX_YESNO
# 24 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_NextZone_17
	goto Sanctuary_EventScript_NextZone_9

Sanctuary_EventScript_NextZone_12:
# 19 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_WhenUReady
	goto Sanctuary_EventScript_NextZone_6

Sanctuary_EventScript_NextZone_15:
# 29 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_7, MSGBOX_YESNO
# 30 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_NextZone_22
	goto Sanctuary_EventScript_NextZone_14

Sanctuary_EventScript_NextZone_17:
# 25 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_WhenUReady
	goto Sanctuary_EventScript_NextZone_9

Sanctuary_EventScript_NextZone_20:
# 35 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_8, MSGBOX_YESNO
# 36 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_NextZone_26
	goto Sanctuary_EventScript_NextZone_19

Sanctuary_EventScript_NextZone_22:
# 31 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_WhenUReady
	goto Sanctuary_EventScript_NextZone_14

Sanctuary_EventScript_NextZone_24:
# 43 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IN_NEW_ZONE
# 44 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_10, MSGBOX_AUTOCLOSE
# 45 "data/maps/ZoneSanctuary/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 46 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Sanctuary_EventScript_NextZone_29
Sanctuary_EventScript_NextZone_28:
# 53 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Sanctuary_EventScript_NextZone_32
Sanctuary_EventScript_NextZone_31:
# 60 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq Sanctuary_EventScript_NextZone_35
Sanctuary_EventScript_NextZone_34:
# 67 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 68 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 69 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 70 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_NextZone_38
# 75 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_NextZone_39
# 80 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_NextZone_40
# 87 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_NextZone_41
# 92 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_NextZone_42
# 97 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_NextZone_43
# 102 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_NextZone_44
# 107 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_NextZone_45
# 117 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_NextZone_46
# 122 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_NextZone_47
# 127 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_NextZone_48
# 132 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_NextZone_49
# 135 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_NextZone_50
# 138 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_NextZone_51
# 141 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_NextZone_52
# 144 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_NextZone_53
# 147 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_NextZone_54
# 150 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_NextZone_55
# 153 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_NextZone_56
# 156 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_NextZone_57
# 159 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_NextZone_58
# 162 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_NextZone_59
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_26:
# 37 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_WhenUReady
	goto Sanctuary_EventScript_NextZone_19

Sanctuary_EventScript_NextZone_29:
# 47 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 48 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 49 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 50 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 51 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_NextZone_28

Sanctuary_EventScript_NextZone_32:
# 54 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 55 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 56 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 57 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 58 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_NextZone_31

Sanctuary_EventScript_NextZone_35:
# 61 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 62 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 63 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 64 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 65 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_NextZone_34

Sanctuary_EventScript_NextZone_38:
# 71 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 7
# 72 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 73 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_39:
# 76 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 9
# 77 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 78 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_40:
# 81 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 11
# 82 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
# 83 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_REMI
# 84 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 85 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_41:
# 88 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 13
# 89 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 90 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_42:
# 93 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 15
# 94 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 0
# 95 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_43:
# 98 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 99 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 100 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_44:
# 103 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 20
# 104 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 105 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_45:
# 108 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 109 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE
# 110 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE
# 111 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE
# 112 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ERICA_WINSTRATE
# 113 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
# 114 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 115 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_46:
# 118 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 23
# 119 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 120 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_47:
# 123 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 124 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE11A, 255, 46, 2
# 125 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_48:
# 128 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 26
# 129 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 130 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_49:
# 133 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 30
	end

Sanctuary_EventScript_NextZone_50:
# 136 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 32
	end

Sanctuary_EventScript_NextZone_51:
# 139 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 33
	end

Sanctuary_EventScript_NextZone_52:
# 142 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 34
	end

Sanctuary_EventScript_NextZone_53:
# 145 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 37
	end

Sanctuary_EventScript_NextZone_54:
# 148 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 39
	end

Sanctuary_EventScript_NextZone_55:
# 151 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
	end

Sanctuary_EventScript_NextZone_56:
# 154 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 43
	end

Sanctuary_EventScript_NextZone_57:
# 157 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 45
	end

Sanctuary_EventScript_NextZone_58:
# 160 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 48
	end

Sanctuary_EventScript_NextZone_59:
# 163 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 49
	end


Sanctuary_EventScript_EnterSanctuary::
# 218 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 219 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_GENERIC, 0
# 220 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_IN_NEW_ZONE
# 221 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_ZONE_PC_USED
# 222 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 223 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 224 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 225 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 226 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 227 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 228 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 229 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 230 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 231 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 232 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 233 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_3
# 236 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_4
# 239 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_5
# 242 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_6
# 246 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 247 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_4, MSGBOX_DEFAULT
# 248 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 249 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 250 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_5, MSGBOX_DEFAULT
Sanctuary_EventScript_EnterSanctuary_1:
# 252 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 253 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_10
# 256 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_11
# 266 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_12
# 269 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_13
# 276 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_14
# 279 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_15
# 282 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_16
# 289 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_17
# 292 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_18
# 301 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_19
Sanctuary_EventScript_EnterSanctuary_8:
# 305 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 306 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_22
# 309 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_23
# 313 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_24
# 329 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_25
# 332 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_26
# 345 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_27
# 356 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_28
# 368 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_29
# 371 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_30
# 391 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_31
# 394 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_32
# 397 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_33
# 401 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_EnterSanctuary_34
# 404 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_EnterSanctuary_35
# 407 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_EnterSanctuary_36
# 410 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_37
# 414 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_EnterSanctuary_38
# 417 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_EnterSanctuary_39
# 420 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_EnterSanctuary_40
# 423 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_EnterSanctuary_41
# 426 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_42
# 430 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_EnterSanctuary_43
# 433 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_EnterSanctuary_44
# 436 "data/maps/ZoneSanctuary/scripts.pory"
	case 28, Sanctuary_EventScript_EnterSanctuary_45
# 439 "data/maps/ZoneSanctuary/scripts.pory"
	case 29, Sanctuary_EventScript_EnterSanctuary_46
# 442 "data/maps/ZoneSanctuary/scripts.pory"
	case 30, Sanctuary_EventScript_EnterSanctuary_47
# 445 "data/maps/ZoneSanctuary/scripts.pory"
	case 31, Sanctuary_EventScript_EnterSanctuary_48
# 448 "data/maps/ZoneSanctuary/scripts.pory"
	case 32, Sanctuary_EventScript_EnterSanctuary_49
# 451 "data/maps/ZoneSanctuary/scripts.pory"
	case 33, Sanctuary_EventScript_EnterSanctuary_50
# 454 "data/maps/ZoneSanctuary/scripts.pory"
	case 34, Sanctuary_EventScript_EnterSanctuary_51
# 457 "data/maps/ZoneSanctuary/scripts.pory"
	case 35, Sanctuary_EventScript_EnterSanctuary_52
# 460 "data/maps/ZoneSanctuary/scripts.pory"
	case 36, Sanctuary_EventScript_EnterSanctuary_53
# 463 "data/maps/ZoneSanctuary/scripts.pory"
	case 37, Sanctuary_EventScript_EnterSanctuary_54
# 466 "data/maps/ZoneSanctuary/scripts.pory"
	case 38, Sanctuary_EventScript_EnterSanctuary_55
# 469 "data/maps/ZoneSanctuary/scripts.pory"
	case 39, Sanctuary_EventScript_EnterSanctuary_56
# 472 "data/maps/ZoneSanctuary/scripts.pory"
	case 40, Sanctuary_EventScript_EnterSanctuary_57
# 475 "data/maps/ZoneSanctuary/scripts.pory"
	case 41, Sanctuary_EventScript_EnterSanctuary_58
# 478 "data/maps/ZoneSanctuary/scripts.pory"
	case 42, Sanctuary_EventScript_EnterSanctuary_59
# 481 "data/maps/ZoneSanctuary/scripts.pory"
	case 43, Sanctuary_EventScript_EnterSanctuary_60
# 484 "data/maps/ZoneSanctuary/scripts.pory"
	case 44, Sanctuary_EventScript_EnterSanctuary_61
# 487 "data/maps/ZoneSanctuary/scripts.pory"
	case 45, Sanctuary_EventScript_EnterSanctuary_62
# 490 "data/maps/ZoneSanctuary/scripts.pory"
	case 46, Sanctuary_EventScript_EnterSanctuary_63
# 493 "data/maps/ZoneSanctuary/scripts.pory"
	case 47, Sanctuary_EventScript_EnterSanctuary_64
# 496 "data/maps/ZoneSanctuary/scripts.pory"
	case 48, Sanctuary_EventScript_EnterSanctuary_65
# 499 "data/maps/ZoneSanctuary/scripts.pory"
	case 49, Sanctuary_EventScript_EnterSanctuary_66
# 502 "data/maps/ZoneSanctuary/scripts.pory"
	case 50, Sanctuary_EventScript_EnterSanctuary_67
Sanctuary_EventScript_EnterSanctuary_20:
# 506 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 507 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_75
# 510 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_76
# 513 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_77
# 516 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_78
# 520 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 521 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
Sanctuary_EventScript_EnterSanctuary_73:
# 523 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 524 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 525 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EnterSanctuary_3:
# 234 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_0, MSGBOX_DEFAULT
# 235 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_4:
# 237 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_1, MSGBOX_DEFAULT
# 238 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_5:
# 240 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_2, MSGBOX_DEFAULT
# 241 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_6:
# 243 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_3, MSGBOX_DEFAULT
# 244 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_10:
# 254 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_6, MSGBOX_DEFAULT
# 255 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_11:
# 257 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_7, MSGBOX_DEFAULT
# 258 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 259 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DETECTOR_MODE
# 260 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 261 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_8, MSGBOX_DEFAULT
# 262 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 263 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Sanctuary_EventScript_EnterSanctuary_68
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_12:
# 267 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_10, MSGBOX_DEFAULT
# 268 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_REVIVE, 5
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_13:
# 270 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_11, MSGBOX_DEFAULT
# 271 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 272 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_12, MSGBOX_DEFAULT
# 274 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 275 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_13, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_14:
# 277 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_14, MSGBOX_DEFAULT
# 278 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_RED_SHARD, 10
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_15:
# 280 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_15, MSGBOX_DEFAULT
# 281 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_SLEDGEHAMMER
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_16:
# 283 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_16, MSGBOX_DEFAULT
# 284 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_17, MSGBOX_DEFAULT
# 285 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 286 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_18, MSGBOX_DEFAULT
# 287 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_19, MSGBOX_DEFAULT
# 288 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_MACHETE
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_17:
# 290 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_20, MSGBOX_DEFAULT
# 291 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_COVET
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_18:
# 293 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_21, MSGBOX_DEFAULT
# 294 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TERA_ORB
# 295 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_USED_TERA
# 296 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EnterSanctuary_71
Sanctuary_EventScript_EnterSanctuary_70:
# 300 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_19:
# 302 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_24, MSGBOX_DEFAULT
# 303 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_GRASS_KNOT
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_22:
# 307 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 308 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 2
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_23:
# 310 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 311 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 312 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 3
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_24:
# 314 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 315 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 4
# 316 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 317 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 318 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 319 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 320 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 321 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 322 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 323 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 325 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 326 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 327 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 328 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_25:
# 330 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 331 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 5
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_26:
# 333 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 334 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 6
# 335 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 336 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 337 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 338 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 339 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 340 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 341 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 342 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 343 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 344 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_27:
# 346 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 347 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 348 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 7
# 349 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 350 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 351 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 352 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 353 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 354 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 355 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_28:
# 357 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 358 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 359 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 360 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 9
# 361 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 362 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 363 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 364 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 365 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 366 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 367 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_29:
# 369 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 370 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 10
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_30:
# 372 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 373 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
# 374 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 11
# 375 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 376 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 378 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 379 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 381 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 382 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 384 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 385 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 386 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 387 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 388 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 389 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedRecovery, MSGBOX_DEFAULT
# 390 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_31:
# 392 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_11
# 393 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 12
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_32:
# 395 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_12
# 396 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 13
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_33:
# 398 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_13
# 399 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_14
# 400 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 15
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_34:
# 402 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_15
# 403 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 16
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_35:
# 405 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_16
# 406 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 17
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_36:
# 408 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_17
# 409 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 18
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_37:
# 411 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_18
# 412 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_19
# 413 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 20
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_38:
# 415 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_20
# 416 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 21
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_39:
# 418 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_21
# 419 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 22
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_40:
# 421 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_22
# 422 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 23
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_41:
# 424 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_23
# 425 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 24
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_42:
# 427 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_24
# 428 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_25
# 429 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 26
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_43:
# 431 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_26
# 432 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 27
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_44:
# 434 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_27
# 435 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 28
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_45:
# 437 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_28
# 438 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 29
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_46:
# 440 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_29
# 441 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 30
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_47:
# 443 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_30
# 444 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 31
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_48:
# 446 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_31
# 447 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 32
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_49:
# 449 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_32
# 450 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 33
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_50:
# 452 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_33
# 453 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 34
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_51:
# 455 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_34
# 456 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 35
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_52:
# 458 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_35
# 459 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 36
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_53:
# 461 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_36
# 462 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 37
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_54:
# 464 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_37
# 465 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 38
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_55:
# 467 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_38
# 468 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 39
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_56:
# 470 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_39
# 471 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 40
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_57:
# 473 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_40
# 474 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 41
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_58:
# 476 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_41
# 477 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 42
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_59:
# 479 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_42
# 480 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 43
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_60:
# 482 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_43
# 483 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 44
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_61:
# 485 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_44
# 486 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 45
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_62:
# 488 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_45
# 489 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 46
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_63:
# 491 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_46
# 492 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 47
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_64:
# 494 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_47
# 495 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 48
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_65:
# 497 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_48
# 498 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 49
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_66:
# 500 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_49
# 501 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 50
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_67:
# 503 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_50
# 504 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 51
	goto Sanctuary_EventScript_EnterSanctuary_20

Sanctuary_EventScript_EnterSanctuary_68:
# 264 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_9, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_8

Sanctuary_EventScript_EnterSanctuary_71:
# 297 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22, MSGBOX_DEFAULT
# 298 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 900
	goto Sanctuary_EventScript_EnterSanctuary_70

Sanctuary_EventScript_EnterSanctuary_75:
# 508 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_25, MSGBOX_DEFAULT
# 509 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady_78, MSGBOX_AUTOCLOSE
	goto Sanctuary_EventScript_EnterSanctuary_73

Sanctuary_EventScript_EnterSanctuary_76:
# 511 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_26, MSGBOX_DEFAULT
# 512 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady_1314
	goto Sanctuary_EventScript_EnterSanctuary_73

Sanctuary_EventScript_EnterSanctuary_77:
# 514 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_27, MSGBOX_DEFAULT
# 515 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady_1819, MSGBOX_AUTOCLOSE
	goto Sanctuary_EventScript_EnterSanctuary_73

Sanctuary_EventScript_EnterSanctuary_78:
# 517 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_28, MSGBOX_DEFAULT
# 518 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady_2425, MSGBOX_AUTOCLOSE
	goto Sanctuary_EventScript_EnterSanctuary_73


Sanctuary_EventScript_MoveCameraUp::
# 546 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 547 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 548 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 549 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_MoveCameraDown::
# 554 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 555 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 556 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 557 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_GameIntro::
# 563 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 564 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 565 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 566 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 567 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 568 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_AUTORUN_TOGGLE
# 569 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 570 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 571 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 572 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 573 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 574 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 575 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_0, MSGBOX_AUTOCLOSE
# 576 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 577 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 578 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 579 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_1, MSGBOX_YESNO
# 580 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_2
Sanctuary_EventScript_GameIntro_1:
# 590 "data/maps/ZoneSanctuary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PBL
# 591 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SETTINGS_EXP_ALL
# 592 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_3, MSGBOX_YESNO
# 593 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_5
Sanctuary_EventScript_GameIntro_4:
# 605 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 606 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_8
Sanctuary_EventScript_GameIntro_7:
# 697 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Sanctuary_EventScript_GameIntro_15
Sanctuary_EventScript_GameIntro_14:
# 712 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Sanctuary_EventScript_GameIntro_19
# 726 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_20
# 729 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Sanctuary_EventScript_GameIntro_2:
# 581 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_5, 1
# 582 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_2, MSGBOX_AUTOCLOSE
# 588 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_1

Sanctuary_EventScript_GameIntro_5:
# 594 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 1
# 595 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_4, MSGBOX_DEFAULT
Sanctuary_EventScript_GameIntro_11:
# 596 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_12
# 603 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_6, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_GameIntro_4

Sanctuary_EventScript_GameIntro_8:
# 607 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_7, MSGBOX_AUTOCLOSE
# 608 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FirstShop
# 609 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FirstShop
# 610 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 611 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 612 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 613 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 614 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_8, MSGBOX_AUTOCLOSE
# 616 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 617 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 618 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 619 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SecondShop
# 620 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SecondShop
# 621 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 622 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 623 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 624 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 625 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_9, MSGBOX_AUTOCLOSE
# 627 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 628 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 629 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 630 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ThirdShop
# 631 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ThirdShop
# 632 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 633 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 634 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 635 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 636 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_10, MSGBOX_AUTOCLOSE
# 638 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 639 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 640 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 641 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FourthShop
# 642 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FourthShop
# 643 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 644 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 645 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 646 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 647 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_11, MSGBOX_AUTOCLOSE
# 649 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 650 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 651 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 652 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FifthShop
# 653 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FifthShop
# 654 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 655 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 656 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 657 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 658 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_12, MSGBOX_AUTOCLOSE
# 660 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 661 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 662 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 663 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SixthShop
# 664 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SixthShop
# 665 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 666 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 667 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 668 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 669 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_13, MSGBOX_AUTOCLOSE
# 671 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 672 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 673 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 674 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ToPokemonCenter
# 675 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ToPokemonCenter
# 676 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 677 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 678 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 679 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 680 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 681 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 682 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_14, MSGBOX_AUTOCLOSE
# 683 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 684 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 685 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 686 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 687 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 688 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_BackMid
# 689 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_BackMid
# 690 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 691 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_15, MSGBOX_AUTOCLOSE
# 695 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_7

Sanctuary_EventScript_GameIntro_12:
# 597 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_Settings
# 598 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_5, MSGBOX_YESNO
# 599 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_17
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_15:
# 698 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_16
# 699 "data/maps/ZoneSanctuary/scripts.pory"
	callnative GiveRandomStarter
# 700 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 701 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 702 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 703 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 704 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 705 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 706 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_23
Sanctuary_EventScript_GameIntro_22:
# 710 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	goto Sanctuary_EventScript_GameIntro_14

Sanctuary_EventScript_GameIntro_17:
# 600 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_19:
# 713 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_19
# 716 "data/maps/ZoneSanctuary/scripts.pory"
	special ChooseStarter
# 717 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
# 718 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 719 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 720 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_26
Sanctuary_EventScript_GameIntro_25:
# 724 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_GameIntro_23:
# 707 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 708 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_22

Sanctuary_EventScript_GameIntro_26:
# 721 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 722 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_25


Sanctuary_EventScript_HandleStarterSelectionDefault::
# 734 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 735 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28
# 737 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 738 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_3
# 740 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_4
# 742 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_5
# 744 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_6
# 746 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_7
# 748 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_8
# 750 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_9
# 752 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_10
# 754 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_11
# 756 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_12
# 758 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_13
# 760 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_14
# 762 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_15
# 764 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_16
# 766 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_17
# 768 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_18
# 770 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_19
# 772 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_20
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_21
# 776 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_22
# 778 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_23
# 780 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_24
# 782 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_25
# 784 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_26
# 786 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_HandleStarterSelectionDefault_27
# 788 "data/maps/ZoneSanctuary/scripts.pory"
	case 25, Sanctuary_EventScript_HandleStarterSelectionDefault_28
# 790 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_HandleStarterSelectionDefault_29
# 792 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_HandleStarterSelectionDefault_30
Sanctuary_EventScript_HandleStarterSelectionDefault_1:
# 795 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_32
Sanctuary_EventScript_HandleStarterSelectionDefault_31:
# 853 "data/maps/ZoneSanctuary/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_3
# 854 "data/maps/ZoneSanctuary/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 855 "data/maps/ZoneSanctuary/scripts.pory"
	playmoncry VAR_TEMP_3, 0
# 856 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30, MSGBOX_YESNO
# 857 "data/maps/ZoneSanctuary/scripts.pory"
	waitmoncry
# 858 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_35
Sanctuary_EventScript_HandleStarterSelectionDefault_34:
# 862 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_TEMP_3
# 863 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_BULBASAUR, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 864 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIKORITA, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 865 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TREECKO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 866 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TURTWIG, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 867 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SNIVY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 868 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHESPIN, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 869 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_ROWLET, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 870 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_GROOKEY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 871 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SPRIGATITO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 873 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHARMANDER, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 874 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CYNDAQUIL, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 875 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TORCHIC, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 876 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIMCHAR, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 877 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TEPIG, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 878 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FENNEKIN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 879 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_LITTEN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 880 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SCORBUNNY, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 881 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FUECOCO, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 883 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SQUIRTLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 884 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TOTODILE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 885 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_MUDKIP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 886 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_PIPLUP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 887 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_OSHAWOTT, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 888 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FROAKIE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 889 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_POPPLIO, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 890 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SOBBLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 891 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_QUAXLY, Sanctuary_EventScript_HandleStarterSelectionDefault_66
Sanctuary_EventScript_HandleStarterSelectionDefault_62:
# 894 "data/maps/ZoneSanctuary/scripts.pory"
	givemon VAR_TEMP_3, 5, ITEM_NONE
# 895 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 896 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 897 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 898 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 899 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 900 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 901 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 902 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_68
Sanctuary_EventScript_HandleStarterSelectionDefault_67:
# 906 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_HandleStarterSelectionDefault_3:
# 739 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_4:
# 741 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_5:
# 743 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_6:
# 745 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_7:
# 747 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_8:
# 749 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_9:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_10:
# 753 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_11:
# 755 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_12:
# 757 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_13:
# 759 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_14:
# 761 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_15:
# 763 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_16:
# 765 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_17:
# 767 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_18:
# 769 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_19:
# 771 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_20:
# 773 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_21:
# 775 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_22:
# 777 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_23:
# 779 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_24:
# 781 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_25:
# 783 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_26:
# 785 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_27:
# 787 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SPRIGATITO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_28:
# 789 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FUECOCO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_29:
# 791 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_QUAXLY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_30:
# 793 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_32:
# 796 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_CONTEST_PLACE
# 797 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29
# 798 "data/maps/ZoneSanctuary/scripts.pory"
	delay 96
# 799 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 800 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 801 "data/maps/ZoneSanctuary/scripts.pory"
	random 24
# 802 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 803 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_38
# 805 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_39
# 807 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_40
# 809 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_41
# 811 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_42
# 813 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_43
# 815 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_44
# 817 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_45
# 819 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_46
# 821 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_47
# 823 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_48
# 825 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_49
# 827 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_50
# 829 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_51
# 831 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_52
# 833 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_53
# 835 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_54
# 837 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_55
# 839 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_56
# 841 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_57
# 843 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_58
# 845 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_59
# 847 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_60
# 849 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_61
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_35:
# 859 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
# 860 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_34

Sanctuary_EventScript_HandleStarterSelectionDefault_38:
# 804 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_39:
# 806 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_40:
# 808 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_41:
# 810 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_42:
# 812 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_43:
# 814 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_44:
# 816 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_45:
# 818 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_46:
# 820 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_47:
# 822 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_48:
# 824 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_49:
# 826 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_50:
# 828 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_51:
# 830 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_52:
# 832 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_53:
# 834 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_54:
# 836 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_55:
# 838 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_56:
# 840 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_57:
# 842 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_58:
# 844 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_59:
# 846 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_60:
# 848 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_61:
# 850 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_64:
# 872 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_65:
# 882 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_66:
# 892 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_68:
# 903 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 904 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_67


Sanctuary_EventScript_EndIntro::
# 910 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_EndIntro_2
# 959 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_10
# 964 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POTION, 10
Sanctuary_EventScript_EndIntro_9:
# 966 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POKE_BALL, 15
Sanctuary_EventScript_EndIntro_1:
# 968 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 969 "data/maps/ZoneSanctuary/scripts.pory"
	special SetUnlockedPokedexFlags
# 970 "data/maps/ZoneSanctuary/scripts.pory"
	setmonmetlocation 0, 255
# 971 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 972 "data/maps/ZoneSanctuary/scripts.pory"
	special EnableNationalPokedex
# 973 "data/maps/ZoneSanctuary/scripts.pory"
	initclock 1, 1
# 974 "data/maps/ZoneSanctuary/scripts.pory"
	callnative InitTimeBasedEvents
# 975 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 1
# 976 "data/maps/ZoneSanctuary/scripts.pory"
	buffernumberstring 0, VAR_ZONE
# 977 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 978 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 979 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 1
# 980 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IS_DEBUGGING_SAVEFILE
# 981 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EndIntro_2:
# 911 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_0
# 912 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 913 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_6
# 946 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
# 947 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 948 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POTION, 10
# 949 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 950 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
# 951 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
Sanctuary_EventScript_EndIntro_5:
# 953 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 954 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
# 955 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 956 "data/maps/ZoneSanctuary/scripts.pory"
	closemessage
# 957 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_EndIntro_1

Sanctuary_EventScript_EndIntro_6:
# 914 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
# 915 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 916 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 917 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 918 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 919 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 920 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 921 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 922 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 923 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 924 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 925 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 926 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 927 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 928 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 929 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 930 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 931 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 932 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 933 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 934 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 935 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 936 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 937 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 938 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 939 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 940 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 941 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 942 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 943 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
# 944 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EndIntro_5

Sanctuary_EventScript_EndIntro_10:
# 960 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 900
# 961 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 900
# 962 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 900
	goto Sanctuary_EventScript_EndIntro_9


# 985 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FirstShop:
# 986 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 989 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 992 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FirstShop:
# 993 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 993 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 994 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 997 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1000 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SecondShop:
# 1001 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1005 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1008 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SecondShop:
# 1009 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1009 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1012 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1014 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1017 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ThirdShop:
# 1018 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1018 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1018 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1021 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1024 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_ThirdShop:
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1031 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FourthShop:
# 1032 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1032 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1038 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FourthShop:
# 1039 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1039 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1039 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1045 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FifthShop:
# 1046 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1050 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1053 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FifthShop:
# 1054 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1054 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1058 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1059 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1062 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SixthShop:
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1067 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1070 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SixthShop:
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1075 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1076 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1079 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ToPokemonCenter:
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1082 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1082 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1082 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1083 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1084 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1087 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_ToPokemonCenter:
# 1088 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1088 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1091 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1091 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1091 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1093 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1096 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_BackMid:
# 1097 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1100 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1102 "data/maps/ZoneSanctuary/scripts.pory"
	face_down
	step_end

# 1105 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_BackMid:
# 1106 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1106 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
	step_end

Sanctuary_EventScript_NextZone_Text_0:
# 11 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Greetings, {PLAYER}.\p"
	.string "What can I help you with?$"

Sanctuary_EventScript_NextZone_Text_1:
# 13 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Next Zone$"

Sanctuary_EventScript_NextZone_Text_2:
# 13 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Settings$"

Sanctuary_EventScript_NextZone_Text_3:
# 13 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Documentation$"

Sanctuary_EventScript_NextZone_Text_4:
# 13 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Exit$"

Sanctuary_EventScript_NextZone_Text_5:
# 17 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_6:
# 23 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_7:
# 29 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_8:
# 35 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave?\nYou will be entering\l{COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_9:
# 41 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR RED}Zone {STR_VAR_1}{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_10:
# 44 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

Sanctuary_EventScript_EnterSanctuary_Text_0:
# 234 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\nYou have cleared {COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_1:
# 237 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\nYou have cleared {COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_2:
# 240 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\nYou have cleared {COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_3:
# 243 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\nYou have cleared {COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_4:
# 247 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR RED}Zone {STR_VAR_1}{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_5:
# 250 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing\n"
	.string "{COLOR RED}Zone {STR_VAR_1}{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_6:
# 254 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Infinite Repellent{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_7:
# 257 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_8:
# 261 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_9:
# 264 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Note that on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}, DexNav\n"
	.string "encounters are unable to be caught.$"

Sanctuary_EventScript_EnterSanctuary_Text_10:
# 267 "data/maps/ZoneSanctuary/scripts.pory"
	.string "5 {COLOR RED}Revives{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_11:
# 270 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_12:
# 273 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_13:
# 275 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Note that if you are in a Zone,\n"
	.string "you can only use the Portable PC once\l"
	.string "before reaching the Sanctuary.$"

Sanctuary_EventScript_EnterSanctuary_Text_14:
# 277 "data/maps/ZoneSanctuary/scripts.pory"
	.string "10 {COLOR RED}Red Shards{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_15:
# 280 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Sledgehammer!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_16:
# 283 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 7{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_17:
# 284 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM39 - Rock Tomb!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_18:
# 286 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR RED}Zone 8{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_19:
# 287 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Machete{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_20:
# 290 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM15 - Covet{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_21:
# 293 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Tera Orb{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_22:
# 297 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you're playing on Infinite, you also get Blue Shards!$"

Sanctuary_EventScript_EnterSanctuary_Text_23:
# 300 "data/maps/ZoneSanctuary/scripts.pory"
	.string "In battle, you can Terastilize your\n"
	.string "Pokémon now.\p"
	.string "Press {START_BUTTON} to Terastilize!\p"
	.string "After you use it, you'll have to go back\n"
	.string "to the Pokémon Center to recharge it.$"

Sanctuary_EventScript_EnterSanctuary_Text_24:
# 302 "data/maps/ZoneSanctuary/scripts.pory"
	.string "TM86 - Grass Knot!$"

Sanctuary_EventScript_EnterSanctuary_Text_25:
# 508 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 7{COLOR DARK_GRAY} and\n"
	.string "{COLOR RED}Zone 8{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Sanctuary_EventScript_EnterSanctuary_Text_26:
# 511 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 13{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 14{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Sanctuary_EventScript_EnterSanctuary_Text_27:
# 514 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 18{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 19{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Sanctuary_EventScript_EnterSanctuary_Text_28:
# 517 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR RED}Zone 24{COLOR DARK_GRAY}\n"
	.string "and {COLOR RED}Zone 25{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Sanctuary_EventScript_GameIntro_Text_0:
# 575 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Sanctuary_EventScript_GameIntro_Text_1:
# 579 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Sanctuary_EventScript_GameIntro_Text_2:
# 582 "data/maps/ZoneSanctuary/scripts.pory"
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

Sanctuary_EventScript_GameIntro_Text_3:
# 592 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Pokémon Battle Labyrinth has many\n"
	.string "settings that are customizable,\l"
	.string "including {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode,\l"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode, and difficulty\l"
	.string "options.\p"
	.string "Would you like to modify these settings\n"
	.string "now from the default?$"

Sanctuary_EventScript_GameIntro_Text_4:
# 595 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Note that some settings cannot be\n"
	.string "adjusted once the challenge has\l"
	.string "started.\p"
	.string "If you're looking to play the hardest\n"
	.string "game mode, {COLOR RED}Brutal{COLOR DARK_GRAY} automatically enables\l"
	.string "most of the difficulty settings.\p"
	.string "Otherwise, information about each\n"
	.string "individual setting can be found by\l"
	.string "selecting it.$"

Sanctuary_EventScript_GameIntro_Text_5:
# 598 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Are you sure you are done selecting\n"
	.string "your settings?$"

Sanctuary_EventScript_GameIntro_Text_6:
# 603 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Settings saved!$"

Sanctuary_EventScript_GameIntro_Text_7:
# 607 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Sanctuary_EventScript_GameIntro_Text_8:
# 614 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Portentia's\n"
	.string "Potions{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, such as Potions or\n"
	.string "other curative measures, can be found\l"
	.string "here.$"

Sanctuary_EventScript_GameIntro_Text_9:
# 625 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Tim's Pokéball\n"
	.string "Shop{COLOR DARK_GRAY}.\p"
	.string "They have a variety of Pokéballs to\n"
	.string "buy.$"

Sanctuary_EventScript_GameIntro_Text_10:
# 636 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Julia's Berries{COLOR DARK_GRAY}.\p"
	.string "Julia is a legendary chef who curates a\n"
	.string "selection of Berries for Pokémon.$"

Sanctuary_EventScript_GameIntro_Text_11:
# 647 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Marie's Egg\n"
	.string "Delivery Service{COLOR DARK_GRAY}.\p"
	.string "Marie helps match Pokémon eggs with\n"
	.string "new owners.$"

Sanctuary_EventScript_GameIntro_Text_12:
# 658 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Varrick's\n"
	.string "Extravagant Emporium{COLOR DARK_GRAY}.\p"
	.string "A huge variety of items are sold here.$"

Sanctuary_EventScript_GameIntro_Text_13:
# 669 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Lelouch's\n"
	.string "Services Shop{COLOR DARK_GRAY}.\p"
	.string "He only sees customers who can pay his\n"
	.string "price.$"

Sanctuary_EventScript_GameIntro_Text_14:
# 682 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the {COLOR RED}Pokémon Center{COLOR DARK_GRAY},\n"
	.string "though don't let Joy catch you saying\l"
	.string "that.\p"
	.string "Your Pokémon can be healed at a flat\n"
	.string "fee.\p"
	.string "In addition, inside you might find\n"
	.string "people with advice or aid for you.\p"
	.string "Note the building has a back entrance\n"
	.string "for ease of access.\p"
	.string "You can also access {COLOR RED}Zone 0{COLOR DARK_GRAY} on the right\n"
	.string "inside.$"

Sanctuary_EventScript_GameIntro_Text_15:
# 691 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Sanctuary_EventScript_GameIntro_Text_16:
# 698 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Sanctuary_EventScript_GameIntro_Text_17:
# 702 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Sanctuary_EventScript_GameIntro_Text_18:
# 705 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Sanctuary_EventScript_GameIntro_Text_19:
# 713 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_GameIntro_Text_20:
# 726 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-9 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
# 735 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Choose a starter Pokémon.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Bulbasaur$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Charmander$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Squirtle$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chikorita$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Cyndaquil$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Totodile$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Treecko$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Torchic$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Mudkip$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Turtwig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chimchar$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Piplup$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Snivy$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Tepig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Oshawott$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chespin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fennekin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Froakie$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Rowlet$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Litten$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Popplio$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Grookey$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Scorbunny$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sobble$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sprigatito$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fuecoco$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Quaxly$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Random$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29:
# 797 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30:
# 856 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: You want {STR_VAR_1}?$"

Sanctuary_EventScript_EndIntro_Text_0:
# 911 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Sanctuary_EventScript_EndIntro_Text_1:
# 914 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you are playing on {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode, here are the items you'd need.\p"
	.string "You can get more by asking me about\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode again.$"

Sanctuary_EventScript_EndIntro_Text_2:
# 943 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Sanctuary_EventScript_EndIntro_Text_3:
# 946 "data/maps/ZoneSanctuary/scripts.pory"
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Sanctuary_EventScript_EndIntro_Text_4:
# 950 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received ¥5000!$"

Sanctuary_EventScript_EndIntro_Text_5:
# 954 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_EndofDemo::
# 177 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the end of the demo.\n"
	.string "Our engineers are still working on the\l"
	.string "remainder of the {COLOR RED}Pokémon Battle\l"
	.string "Labyrinth{COLOR DARK_GRAY}. Please save your game using\l"
	.string "the in game save so you might be able to\l"
	.string "transfer your save file to the next\l"
	.string "version when it comes out.$"

Sanctuary_Text_Colress_WhenUReady::
# 181 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone {STR_VAR_1}{COLOR DARK_GRAY}, come speak to me.$"

Sanctuary_Text_Colress_Upgraded::
# 185 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because of your progress, the following\n"
	.string "shops are upgraded:$"

Sanctuary_Text_Colress_UpgradedPokeball::
# 189 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Tim's Pokéball Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedPotions::
# 193 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Portentia's Potions{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedItems::
# 197 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Varrick's Extravagant Emporium{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedBerries::
# 201 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Julia's Berries{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedEggs::
# 205 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Marie's Egg Delivery Service{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedServices::
# 209 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Lelouch's Services Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedRecovery::
# 213 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Joy's Center of Restoration{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_WhenUReady_78::
# 529 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 7{COLOR DARK_GRAY} and {COLOR RED}Zone 8{COLOR DARK_GRAY}, speak to me.$"

Sanctuary_Text_Colress_WhenUReady_1314::
# 533 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 13{COLOR DARK_GRAY} and {COLOR RED}Zone 14{COLOR DARK_GRAY}, speak to me.$"

Sanctuary_Text_Colress_WhenUReady_1819::
# 537 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 18{COLOR DARK_GRAY} and {COLOR RED}Zone 19{COLOR DARK_GRAY}, speak to me.$"

Sanctuary_Text_Colress_WhenUReady_2425::
# 541 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR RED}Zone 24{COLOR DARK_GRAY} and {COLOR RED}Zone 25{COLOR DARK_GRAY}, speak to me.$"
