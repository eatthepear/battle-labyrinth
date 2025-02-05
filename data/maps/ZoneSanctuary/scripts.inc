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
# 124 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_NextZone_4
# 126 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_NextZone_5
Sanctuary_EventScript_NextZone_1:
# 129 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_WhenUReady
	return

Sanctuary_EventScript_NextZone_3:
# 16 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 17 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_NextZone_7
# 26 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_NextZone_8
# 35 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_NextZone_9
# 46 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_NextZone_10
# 55 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_NextZone_11
# 64 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_NextZone_12
# 73 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_NextZone_13
# 82 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_NextZone_14
# 96 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_NextZone_15
# 105 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_NextZone_16
# 114 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_NextZone_17
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_4:
# 125 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Settings
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_5:
# 127 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_7:
# 18 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_5, MSGBOX_YESNO
# 19 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_18
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_8:
# 27 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_6, MSGBOX_YESNO
# 28 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_20
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_9:
# 36 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_7, MSGBOX_YESNO
# 37 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_22
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_10:
# 47 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_8, MSGBOX_YESNO
# 48 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_24
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_11:
# 56 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_9, MSGBOX_YESNO
# 57 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_26
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_12:
# 65 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_10, MSGBOX_YESNO
# 66 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_28
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_13:
# 74 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_11, MSGBOX_YESNO
# 75 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_30
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_14:
# 83 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_12, MSGBOX_YESNO
# 84 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_32
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_15:
# 97 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_13, MSGBOX_YESNO
# 98 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_34
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_16:
# 106 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_14, MSGBOX_YESNO
# 107 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_36
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_17:
# 115 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_15, MSGBOX_YESNO
# 116 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_38
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_18:
# 20 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 21 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 7
# 22 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 23 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_20:
# 29 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 30 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 9
# 31 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 32 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_22:
# 38 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 39 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 11
# 40 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
# 41 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_REMI
# 42 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 43 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_24:
# 49 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 50 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 13
# 51 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 52 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_26:
# 58 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 59 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 60 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 61 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_28:
# 67 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 68 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 69 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 70 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_30:
# 76 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 77 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 20
# 78 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 79 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_32:
# 85 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 86 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 87 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE
# 88 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE
# 89 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE
# 90 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ERICA_WINSTRATE
# 91 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
# 92 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE9A, 255, 41, 22
# 93 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_34:
# 99 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 100 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 23
# 101 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 102 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_36:
# 108 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 109 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 110 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 111 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_38:
# 117 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 118 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 26
# 119 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 120 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end


Sanctuary_EventScript_EnterZone::
# 133 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IN_NEW_ZONE
# 134 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterZone_Text_0, MSGBOX_AUTOCLOSE
# 135 "data/maps/ZoneSanctuary/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 136 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Sanctuary_EventScript_EnterZone_2
Sanctuary_EventScript_EnterZone_1:
# 143 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Sanctuary_EventScript_EnterZone_5
Sanctuary_EventScript_EnterZone_4:
# 150 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq Sanctuary_EventScript_EnterZone_8
Sanctuary_EventScript_EnterZone_7:
# 157 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 158 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	return

Sanctuary_EventScript_EnterZone_2:
# 137 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 138 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 139 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 140 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 141 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_1

Sanctuary_EventScript_EnterZone_5:
# 144 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 145 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 146 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 147 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 148 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_4

Sanctuary_EventScript_EnterZone_8:
# 151 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 152 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 153 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 154 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 155 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_7


Sanctuary_EventScript_EnterSanctuary::
# 199 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 200 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_GENERIC, 0
# 201 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_IN_NEW_ZONE
# 202 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_ZONE_PC_USED
# 203 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 204 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 205 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 206 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 207 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 208 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 209 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 210 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 211 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 212 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 213 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 214 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_3
# 218 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_4
# 222 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_5
# 226 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_6
# 230 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_7
# 234 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_8
# 238 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_9
# 242 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_10
# 246 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_11
# 250 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_12
# 254 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_13
# 258 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_14
# 262 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_EnterSanctuary_15
# 266 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_EnterSanctuary_16
# 270 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_EnterSanctuary_17
# 274 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_18
# 278 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_EnterSanctuary_19
# 282 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_EnterSanctuary_20
# 286 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_EnterSanctuary_21
# 290 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_EnterSanctuary_22
# 294 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_23
Sanctuary_EventScript_EnterSanctuary_1:
# 299 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 300 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_26
# 303 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_27
# 313 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_28
# 316 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_29
# 323 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_30
# 326 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_31
# 329 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_32
# 336 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_33
# 339 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_34
# 348 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_35
Sanctuary_EventScript_EnterSanctuary_24:
# 352 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 353 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_38
# 356 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_39
# 360 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_40
# 376 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_41
# 379 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_42
# 392 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_43
# 403 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_44
# 415 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_45
# 418 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_46
# 438 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_47
# 441 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_48
# 444 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_49
# 448 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_EnterSanctuary_50
# 451 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_EnterSanctuary_51
# 454 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_EnterSanctuary_52
# 457 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_53
# 461 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_EnterSanctuary_54
# 464 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_EnterSanctuary_55
# 467 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_EnterSanctuary_56
# 470 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_EnterSanctuary_57
# 473 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_58
# 477 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_EnterSanctuary_59
# 480 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_EnterSanctuary_60
# 483 "data/maps/ZoneSanctuary/scripts.pory"
	case 28, Sanctuary_EventScript_EnterSanctuary_61
# 486 "data/maps/ZoneSanctuary/scripts.pory"
	case 29, Sanctuary_EventScript_EnterSanctuary_62
# 489 "data/maps/ZoneSanctuary/scripts.pory"
	case 30, Sanctuary_EventScript_EnterSanctuary_63
# 492 "data/maps/ZoneSanctuary/scripts.pory"
	case 31, Sanctuary_EventScript_EnterSanctuary_64
# 495 "data/maps/ZoneSanctuary/scripts.pory"
	case 32, Sanctuary_EventScript_EnterSanctuary_65
# 498 "data/maps/ZoneSanctuary/scripts.pory"
	case 33, Sanctuary_EventScript_EnterSanctuary_66
# 501 "data/maps/ZoneSanctuary/scripts.pory"
	case 34, Sanctuary_EventScript_EnterSanctuary_67
# 504 "data/maps/ZoneSanctuary/scripts.pory"
	case 35, Sanctuary_EventScript_EnterSanctuary_68
# 507 "data/maps/ZoneSanctuary/scripts.pory"
	case 36, Sanctuary_EventScript_EnterSanctuary_69
# 510 "data/maps/ZoneSanctuary/scripts.pory"
	case 37, Sanctuary_EventScript_EnterSanctuary_70
# 513 "data/maps/ZoneSanctuary/scripts.pory"
	case 38, Sanctuary_EventScript_EnterSanctuary_71
# 516 "data/maps/ZoneSanctuary/scripts.pory"
	case 39, Sanctuary_EventScript_EnterSanctuary_72
# 519 "data/maps/ZoneSanctuary/scripts.pory"
	case 40, Sanctuary_EventScript_EnterSanctuary_73
# 522 "data/maps/ZoneSanctuary/scripts.pory"
	case 41, Sanctuary_EventScript_EnterSanctuary_74
# 525 "data/maps/ZoneSanctuary/scripts.pory"
	case 42, Sanctuary_EventScript_EnterSanctuary_75
# 528 "data/maps/ZoneSanctuary/scripts.pory"
	case 43, Sanctuary_EventScript_EnterSanctuary_76
# 531 "data/maps/ZoneSanctuary/scripts.pory"
	case 44, Sanctuary_EventScript_EnterSanctuary_77
# 534 "data/maps/ZoneSanctuary/scripts.pory"
	case 45, Sanctuary_EventScript_EnterSanctuary_78
# 537 "data/maps/ZoneSanctuary/scripts.pory"
	case 46, Sanctuary_EventScript_EnterSanctuary_79
# 540 "data/maps/ZoneSanctuary/scripts.pory"
	case 47, Sanctuary_EventScript_EnterSanctuary_80
# 543 "data/maps/ZoneSanctuary/scripts.pory"
	case 48, Sanctuary_EventScript_EnterSanctuary_81
# 546 "data/maps/ZoneSanctuary/scripts.pory"
	case 49, Sanctuary_EventScript_EnterSanctuary_82
# 549 "data/maps/ZoneSanctuary/scripts.pory"
	case 50, Sanctuary_EventScript_EnterSanctuary_83
Sanctuary_EventScript_EnterSanctuary_36:
# 553 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_WhenUReadyDialogue
# 554 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 555 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 556 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EnterSanctuary_3:
# 215 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_0
# 216 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 217 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_1
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_4:
# 219 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_2
# 220 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 221 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_3
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_5:
# 223 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_4
# 224 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 225 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_5
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_6:
# 227 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_6
# 228 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 229 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_7
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_7:
# 231 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_8
# 232 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 233 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_9
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_8:
# 235 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_10
# 236 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 237 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_11
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_9:
# 239 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_12
# 240 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 241 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_13
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_10:
# 243 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_14
# 244 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 245 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_15
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_11:
# 247 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_16
# 248 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 249 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_17
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_12:
# 251 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_18
# 252 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 253 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_19
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_13:
# 255 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_20
# 256 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 257 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_21
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_14:
# 259 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 260 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 261 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_15:
# 263 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_24
# 264 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 265 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_25
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_16:
# 267 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_26
# 268 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 269 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_27
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_17:
# 271 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_28
# 272 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 273 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_29
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_18:
# 275 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 276 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 277 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_19:
# 279 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_30
# 280 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 281 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_31
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_20:
# 283 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_32
# 284 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 285 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_33
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_21:
# 287 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_34
# 288 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 289 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_35
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_22:
# 291 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_36
# 292 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 293 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_37
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_23:
# 295 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 296 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 297 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_26:
# 301 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_38, MSGBOX_DEFAULT
# 302 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_27:
# 304 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_39, MSGBOX_DEFAULT
# 305 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 306 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DETECTOR_MODE
# 307 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_40, MSGBOX_DEFAULT
# 309 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 310 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Sanctuary_EventScript_EnterSanctuary_84
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_28:
# 314 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_42, MSGBOX_DEFAULT
# 315 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_REVIVE, 5
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_29:
# 317 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_43, MSGBOX_DEFAULT
# 318 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 319 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_44, MSGBOX_DEFAULT
# 321 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 322 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_45, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_30:
# 324 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_46, MSGBOX_DEFAULT
# 325 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_RED_SHARD, 10
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_31:
# 327 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_47, MSGBOX_DEFAULT
# 328 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_SLEDGEHAMMER
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_32:
# 330 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_48, MSGBOX_DEFAULT
# 331 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_49, MSGBOX_DEFAULT
# 332 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 333 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_50, MSGBOX_DEFAULT
# 334 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_51, MSGBOX_DEFAULT
# 335 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_MACHETE
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_33:
# 337 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_52, MSGBOX_DEFAULT
# 338 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_COVET
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_34:
# 340 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_53, MSGBOX_DEFAULT
# 341 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TERA_ORB
# 342 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_USED_TERA
# 343 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EnterSanctuary_87
Sanctuary_EventScript_EnterSanctuary_86:
# 347 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_55
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_35:
# 349 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_56, MSGBOX_DEFAULT
# 350 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_GRASS_KNOT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_38:
# 354 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 355 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 2
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_39:
# 357 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 358 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 359 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 3
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_40:
# 361 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 362 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 4
# 363 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 364 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 365 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 366 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 367 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 368 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 369 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 370 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 371 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 372 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 373 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 374 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 375 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_41:
# 377 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 378 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 5
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_42:
# 380 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 381 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 6
# 382 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 383 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 384 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 385 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 386 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 387 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 388 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 389 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 390 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 391 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_43:
# 393 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 394 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 395 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 7
# 396 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 397 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 398 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 399 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 400 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 401 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 402 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_44:
# 404 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 405 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 406 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 407 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 9
# 408 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 409 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 411 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 412 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 413 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 414 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_45:
# 416 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 417 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 10
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_46:
# 419 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 420 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
# 421 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 11
# 422 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 423 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 424 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 425 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 426 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 427 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 428 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 429 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 430 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 431 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 432 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 433 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 434 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 435 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 436 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedRecovery, MSGBOX_DEFAULT
# 437 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_47:
# 439 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_11
# 440 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 12
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_48:
# 442 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_12
# 443 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 13
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_49:
# 445 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_13
# 446 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_14
# 447 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 15
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_50:
# 449 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_15
# 450 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 16
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_51:
# 452 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_16
# 453 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 17
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_52:
# 455 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_17
# 456 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 18
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_53:
# 458 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_18
# 459 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_19
# 460 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 20
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_54:
# 462 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_20
# 463 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 21
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_55:
# 465 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_21
# 466 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 22
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_56:
# 468 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_22
# 469 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 23
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_57:
# 471 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_23
# 472 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 24
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_58:
# 474 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_24
# 475 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_25
# 476 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 26
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_59:
# 478 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_26
# 479 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 27
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_60:
# 481 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_27
# 482 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 28
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_61:
# 484 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_28
# 485 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 29
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_62:
# 487 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_29
# 488 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 30
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_63:
# 490 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_30
# 491 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 31
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_64:
# 493 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_31
# 494 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 32
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_65:
# 496 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_32
# 497 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 33
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_66:
# 499 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_33
# 500 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 34
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_67:
# 502 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_34
# 503 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 35
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_68:
# 505 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_35
# 506 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 36
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_69:
# 508 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_36
# 509 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 37
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_70:
# 511 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_37
# 512 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 38
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_71:
# 514 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_38
# 515 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 39
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_72:
# 517 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_39
# 518 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 40
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_73:
# 520 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_40
# 521 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 41
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_74:
# 523 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_41
# 524 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 42
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_75:
# 526 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_42
# 527 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 43
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_76:
# 529 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_43
# 530 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 44
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_77:
# 532 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_44
# 533 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 45
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_78:
# 535 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_45
# 536 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 46
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_79:
# 538 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_46
# 539 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 47
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_80:
# 541 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_47
# 542 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 48
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_81:
# 544 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_48
# 545 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 49
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_82:
# 547 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_49
# 548 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 50
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_83:
# 550 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_50
# 551 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 51
	goto Sanctuary_EventScript_EnterSanctuary_36

Sanctuary_EventScript_EnterSanctuary_84:
# 311 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_41, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_87:
# 344 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_54, MSGBOX_DEFAULT
# 345 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 900
	goto Sanctuary_EventScript_EnterSanctuary_86


Sanctuary_EventScript_MoveCameraUp::
# 561 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 562 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 563 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 564 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_MoveCameraDown::
# 569 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 570 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 571 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 572 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_GameIntro::
# 578 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 579 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 580 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 581 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 582 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 583 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_AUTORUN_TOGGLE
# 584 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 585 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 586 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 587 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 588 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 589 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 590 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_0, MSGBOX_AUTOCLOSE
# 591 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 592 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 593 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 594 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_1, MSGBOX_YESNO
# 595 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_2
Sanctuary_EventScript_GameIntro_1:
# 605 "data/maps/ZoneSanctuary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PBL
# 606 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SETTINGS_EXP_ALL
# 607 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_3, MSGBOX_YESNO
# 608 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_5
Sanctuary_EventScript_GameIntro_4:
# 620 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 621 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_8
Sanctuary_EventScript_GameIntro_7:
# 712 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Sanctuary_EventScript_GameIntro_15
Sanctuary_EventScript_GameIntro_14:
# 727 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Sanctuary_EventScript_GameIntro_19
# 741 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_20
# 744 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Sanctuary_EventScript_GameIntro_2:
# 596 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_5, 1
# 597 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_2, MSGBOX_AUTOCLOSE
# 603 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_1

Sanctuary_EventScript_GameIntro_5:
# 609 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 1
# 610 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_4, MSGBOX_DEFAULT
Sanctuary_EventScript_GameIntro_11:
# 611 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_12
# 618 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_6, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_GameIntro_4

Sanctuary_EventScript_GameIntro_8:
# 622 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_7, MSGBOX_AUTOCLOSE
# 623 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FirstShop
# 624 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FirstShop
# 625 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 626 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 627 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 628 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 629 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_8, MSGBOX_AUTOCLOSE
# 631 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 632 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 633 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 634 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SecondShop
# 635 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SecondShop
# 636 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 637 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 638 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 639 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 640 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_9, MSGBOX_AUTOCLOSE
# 642 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 643 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 644 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 645 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ThirdShop
# 646 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ThirdShop
# 647 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 648 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 649 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 650 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 651 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_10, MSGBOX_AUTOCLOSE
# 653 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 654 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 655 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 656 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FourthShop
# 657 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FourthShop
# 658 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 659 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 660 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 661 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 662 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_11, MSGBOX_AUTOCLOSE
# 664 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 665 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 666 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 667 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FifthShop
# 668 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FifthShop
# 669 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 670 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 671 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 672 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 673 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_12, MSGBOX_AUTOCLOSE
# 675 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 676 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 677 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 678 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SixthShop
# 679 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SixthShop
# 680 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 681 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 682 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 683 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 684 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_13, MSGBOX_AUTOCLOSE
# 686 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 687 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 688 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 689 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ToPokemonCenter
# 690 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ToPokemonCenter
# 691 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 692 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 693 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 694 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 695 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 696 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 697 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_14, MSGBOX_AUTOCLOSE
# 698 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 699 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 700 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 701 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 702 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 703 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_BackMid
# 704 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_BackMid
# 705 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 706 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_15, MSGBOX_AUTOCLOSE
# 710 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_7

Sanctuary_EventScript_GameIntro_12:
# 612 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_Settings
# 613 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_5, MSGBOX_YESNO
# 614 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_17
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_15:
# 713 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_16
# 714 "data/maps/ZoneSanctuary/scripts.pory"
	callnative GiveRandomStarter
# 715 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 716 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 717 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 718 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 719 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 720 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 721 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_23
Sanctuary_EventScript_GameIntro_22:
# 725 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	goto Sanctuary_EventScript_GameIntro_14

Sanctuary_EventScript_GameIntro_17:
# 615 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_19:
# 728 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_19
# 731 "data/maps/ZoneSanctuary/scripts.pory"
	special ChooseStarter
# 732 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
# 733 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 734 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 735 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_26
Sanctuary_EventScript_GameIntro_25:
# 739 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_GameIntro_23:
# 722 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 723 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_22

Sanctuary_EventScript_GameIntro_26:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 737 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_25


Sanctuary_EventScript_HandleStarterSelectionDefault::
# 749 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 750 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28
# 752 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 753 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_3
# 755 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_4
# 757 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_5
# 759 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_6
# 761 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_7
# 763 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_8
# 765 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_9
# 767 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_10
# 769 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_11
# 771 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_12
# 773 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_13
# 775 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_14
# 777 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_15
# 779 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_16
# 781 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_17
# 783 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_18
# 785 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_19
# 787 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_20
# 789 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_21
# 791 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_22
# 793 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_23
# 795 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_24
# 797 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_25
# 799 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_26
# 801 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_HandleStarterSelectionDefault_27
# 803 "data/maps/ZoneSanctuary/scripts.pory"
	case 25, Sanctuary_EventScript_HandleStarterSelectionDefault_28
# 805 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_HandleStarterSelectionDefault_29
# 807 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_HandleStarterSelectionDefault_30
Sanctuary_EventScript_HandleStarterSelectionDefault_1:
# 810 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_32
Sanctuary_EventScript_HandleStarterSelectionDefault_31:
# 868 "data/maps/ZoneSanctuary/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_3
# 869 "data/maps/ZoneSanctuary/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 870 "data/maps/ZoneSanctuary/scripts.pory"
	playmoncry VAR_TEMP_3, 0
# 871 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30, MSGBOX_YESNO
# 872 "data/maps/ZoneSanctuary/scripts.pory"
	waitmoncry
# 873 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_35
Sanctuary_EventScript_HandleStarterSelectionDefault_34:
# 877 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_TEMP_3
# 878 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_BULBASAUR, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 879 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIKORITA, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 880 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TREECKO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 881 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TURTWIG, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 882 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SNIVY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 883 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHESPIN, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 884 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_ROWLET, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 885 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_GROOKEY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 886 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SPRIGATITO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 888 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHARMANDER, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 889 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CYNDAQUIL, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 890 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TORCHIC, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 891 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIMCHAR, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 892 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TEPIG, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 893 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FENNEKIN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 894 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_LITTEN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 895 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SCORBUNNY, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 896 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FUECOCO, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 898 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SQUIRTLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 899 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TOTODILE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 900 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_MUDKIP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 901 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_PIPLUP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 902 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_OSHAWOTT, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 903 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FROAKIE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 904 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_POPPLIO, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 905 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SOBBLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 906 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_QUAXLY, Sanctuary_EventScript_HandleStarterSelectionDefault_66
Sanctuary_EventScript_HandleStarterSelectionDefault_62:
# 909 "data/maps/ZoneSanctuary/scripts.pory"
	givemon VAR_TEMP_3, 5, ITEM_NONE
# 910 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 911 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 912 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 913 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 914 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 915 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 916 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 917 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_68
Sanctuary_EventScript_HandleStarterSelectionDefault_67:
# 921 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_HandleStarterSelectionDefault_3:
# 754 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_4:
# 756 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_5:
# 758 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_6:
# 760 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_7:
# 762 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_8:
# 764 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_9:
# 766 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_10:
# 768 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_11:
# 770 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_12:
# 772 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_13:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_14:
# 776 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_15:
# 778 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_16:
# 780 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_17:
# 782 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_18:
# 784 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_19:
# 786 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_20:
# 788 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_21:
# 790 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_22:
# 792 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_23:
# 794 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_24:
# 796 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_25:
# 798 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_26:
# 800 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_27:
# 802 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SPRIGATITO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_28:
# 804 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FUECOCO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_29:
# 806 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_QUAXLY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_30:
# 808 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_32:
# 811 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_CONTEST_PLACE
# 812 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29
# 813 "data/maps/ZoneSanctuary/scripts.pory"
	delay 96
# 814 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 815 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 816 "data/maps/ZoneSanctuary/scripts.pory"
	random 24
# 817 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 818 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_38
# 820 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_39
# 822 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_40
# 824 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_41
# 826 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_42
# 828 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_43
# 830 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_44
# 832 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_45
# 834 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_46
# 836 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_47
# 838 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_48
# 840 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_49
# 842 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_50
# 844 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_51
# 846 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_52
# 848 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_53
# 850 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_54
# 852 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_55
# 854 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_56
# 856 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_57
# 858 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_58
# 860 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_59
# 862 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_60
# 864 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_61
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_35:
# 874 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
# 875 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_34

Sanctuary_EventScript_HandleStarterSelectionDefault_38:
# 819 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_39:
# 821 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_40:
# 823 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_41:
# 825 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_42:
# 827 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_43:
# 829 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_44:
# 831 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_45:
# 833 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_46:
# 835 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_47:
# 837 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_48:
# 839 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_49:
# 841 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_50:
# 843 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_51:
# 845 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_52:
# 847 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_53:
# 849 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_54:
# 851 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_55:
# 853 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_56:
# 855 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_57:
# 857 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_58:
# 859 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_59:
# 861 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_60:
# 863 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_61:
# 865 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_64:
# 887 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_65:
# 897 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_66:
# 907 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_68:
# 918 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 919 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_67


Sanctuary_EventScript_EndIntro::
# 925 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_EndIntro_2
# 974 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_10
# 979 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POTION, 10
Sanctuary_EventScript_EndIntro_9:
# 981 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POKE_BALL, 15
Sanctuary_EventScript_EndIntro_1:
# 983 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 984 "data/maps/ZoneSanctuary/scripts.pory"
	special SetUnlockedPokedexFlags
# 985 "data/maps/ZoneSanctuary/scripts.pory"
	setmonmetlocation 0, 255
# 986 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	special EnableNationalPokedex
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	initclock 1, 1
# 989 "data/maps/ZoneSanctuary/scripts.pory"
	callnative InitTimeBasedEvents
# 990 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 1
# 991 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 5
# 992 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_WhenUReadyDialogue
# 993 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 994 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 1
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IS_DEBUGGING_SAVEFILE
# 996 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EndIntro_2:
# 926 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_0
# 927 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 928 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_6
# 961 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
# 962 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 963 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POTION, 10
# 964 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 965 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
# 966 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
Sanctuary_EventScript_EndIntro_5:
# 968 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 969 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
# 970 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 971 "data/maps/ZoneSanctuary/scripts.pory"
	closemessage
# 972 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_EndIntro_1

Sanctuary_EventScript_EndIntro_6:
# 929 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
# 930 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 931 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 932 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 933 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 934 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 935 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 936 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 937 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 938 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 939 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 940 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 941 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 942 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 943 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 944 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 945 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 946 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 947 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 948 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 949 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 950 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 951 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 952 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 953 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 954 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 955 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 956 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 957 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 958 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
# 959 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EndIntro_5

Sanctuary_EventScript_EndIntro_10:
# 975 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 900
# 976 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 900
# 977 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 900
	goto Sanctuary_EventScript_EndIntro_9


# 1000 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FirstShop:
# 1001 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1003 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1007 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FirstShop:
# 1008 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1008 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1009 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1012 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1015 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SecondShop:
# 1016 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1018 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1020 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1023 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SecondShop:
# 1024 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1024 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1028 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1029 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1032 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ThirdShop:
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1033 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1036 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1039 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_ThirdShop:
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1043 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1046 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FourthShop:
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1048 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1050 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1053 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FourthShop:
# 1054 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1054 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1054 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1055 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1060 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FifthShop:
# 1061 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1062 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1068 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FifthShop:
# 1069 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1069 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1070 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1074 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1077 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SixthShop:
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1081 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1082 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1085 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SixthShop:
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1088 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1088 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1089 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1090 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1091 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1094 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ToPokemonCenter:
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1097 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1097 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1097 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1098 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1099 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1102 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_ToPokemonCenter:
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1106 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1106 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1106 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1107 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1108 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1111 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_BackMid:
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1115 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1116 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1117 "data/maps/ZoneSanctuary/scripts.pory"
	face_down
	step_end

# 1120 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_BackMid:
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1122 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1123 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1124 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1125 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
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
# 18 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_6:
# 27 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 2 - Duskwarren\l"
	.string "Woods{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_7:
# 36 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_8:
# 47 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_9:
# 56 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 5 - Timberstep\l"
	.string "Plateau{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_10:
# 65 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 6 - Seabreeze\l"
	.string "Island{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_11:
# 74 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you ready to leave? You\n"
	.string "will be entering {COLOR GREEN}Zone 7 - Gemini Heights{COLOR DARK_GRAY}\l"
	.string "and {COLOR GREEN}Zone 8 - Duskmire Hollow{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_12:
# 83 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 9 - Lushbranch\l"
	.string "Village{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_13:
# 97 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 10 - Scornwind\l"
	.string "Desert{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_14:
# 106 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 11 - Duskwither\l"
	.string "Maze{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_NextZone_Text_15:
# 115 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 12 - Twinstream\l"
	.string "Plains{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterZone_Text_0:
# 134 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

Sanctuary_EventScript_EnterSanctuary_Text_0:
# 215 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_1:
# 217 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "1 - Leafway Trail{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_2:
# 219 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 2 - Duskwarren\l"
	.string "Woods{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_3:
# 221 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "2 - Duskwarren Woods{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_4:
# 223 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_5:
# 225 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "3 - Sunlit Pond{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_6:
# 227 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_7:
# 229 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "4 - Mystic Glade{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_8:
# 231 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 5 - Timberstep\l"
	.string "Plateau{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_9:
# 233 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "5 - Timberstep Plateau{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_10:
# 235 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 6 - Seabreeze\l"
	.string "Island{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_11:
# 237 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "6 - Seabreeze Island{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_12:
# 239 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 7 - Gemini\l"
	.string "Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 - Duskmire Hollow{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_13:
# 241 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "7 - Gemini Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 - Duskmire\l"
	.string "Hollow{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_14:
# 243 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 9 - Lushbranch\l"
	.string "Village{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_15:
# 245 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "9 - Lushbranch Village{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_16:
# 247 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 10 - Scornwind\l"
	.string "Desert{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_17:
# 249 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "10 - Scornwind Desert{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_18:
# 251 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 11 - Duskwither\l"
	.string "Maze{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_19:
# 253 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "11 - Duskwither Maze{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_20:
# 255 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 12 - Twinstream\l"
	.string "Plains{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_21:
# 257 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "12 - Twinstream Plains{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_22:
# 259 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_23:
# 261 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_24:
# 263 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 15 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_25:
# 265 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "15 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_26:
# 267 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 16 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_27:
# 269 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "16 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_28:
# 271 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 17 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_29:
# 273 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "17 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_30:
# 279 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 20 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_31:
# 281 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "20 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_32:
# 283 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 21 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_33:
# 285 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "21 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_34:
# 287 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 22 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_35:
# 289 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "22 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_36:
# 291 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 23 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_37:
# 293 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "23 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_38:
# 301 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Infinite Repellent{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_39:
# 304 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_40:
# 308 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_41:
# 311 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Note that on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}, DexNav\n"
	.string "encounters are unable to be caught.$"

Sanctuary_EventScript_EnterSanctuary_Text_42:
# 314 "data/maps/ZoneSanctuary/scripts.pory"
	.string "5 {COLOR RED}Revives{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_43:
# 317 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_44:
# 320 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_45:
# 322 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Note that if you are in a Zone,\n"
	.string "you can only use the Portable PC once\l"
	.string "before reaching the Sanctuary.$"

Sanctuary_EventScript_EnterSanctuary_Text_46:
# 324 "data/maps/ZoneSanctuary/scripts.pory"
	.string "10 {COLOR RED}Red Shards{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_47:
# 327 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Sledgehammer!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_48:
# 330 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR GREEN}Zone 7{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_49:
# 331 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM39 - Rock Tomb!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_50:
# 333 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR GREEN}Zone 8{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_51:
# 334 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Machete{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_52:
# 337 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM15 - Covet{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_53:
# 340 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Tera Orb{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_54:
# 344 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you're playing on Infinite, you also get Blue Shards!$"

Sanctuary_EventScript_EnterSanctuary_Text_55:
# 347 "data/maps/ZoneSanctuary/scripts.pory"
	.string "In battle, you can Terastilize your\n"
	.string "Pokémon now.\p"
	.string "Press {START_BUTTON} to Terastilize!\p"
	.string "After you use it, you'll have to go back\n"
	.string "to the Pokémon Center to recharge it.$"

Sanctuary_EventScript_EnterSanctuary_Text_56:
# 349 "data/maps/ZoneSanctuary/scripts.pory"
	.string "TM86 - Grass Knot!$"

Sanctuary_EventScript_GameIntro_Text_0:
# 590 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Sanctuary_EventScript_GameIntro_Text_1:
# 594 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Sanctuary_EventScript_GameIntro_Text_2:
# 597 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The Pokémon Battle Labyrinth is\n"
	.string "comprised of many {COLOR GREEN}Zones{COLOR DARK_GRAY} you must\l"
	.string "traverse.\p"
	.string "In these Zones, you might encounter\n"
	.string "wild Pokémon, great treasures, tough\l"
	.string "trainers, and more.\p"
	.string "Each Zone typically contains a\n"
	.string "{COLOR RED}Leviathan{COLOR DARK_GRAY}, a boss that yields great\l"
	.string "rewards if defeated.\p"
	.string "At the end of each Zone and before the\n"
	.string "next Zone begins, you will find a\l"
	.string "{COLOR GREEN}Sanctuary{COLOR DARK_GRAY}, like this one, with shops to\l"
	.string "purchase supplies, heal your Pokémon,\l"
	.string "and other benefits.\p"
	.string "Once you enter a new Zone, you will not\n"
	.string "be able to access a Sanctuary until you\l"
	.string "exit that Zone.\p"
	.string "In order to win, you must progress\n"
	.string "through all Zones without losing a\l"
	.string "battle.$"

Sanctuary_EventScript_GameIntro_Text_3:
# 607 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Pokémon Battle Labyrinth has many\n"
	.string "settings that are customizable,\l"
	.string "including {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode,\l"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode, and difficulty\l"
	.string "options.\p"
	.string "Would you like to modify these settings\n"
	.string "now from the default?$"

Sanctuary_EventScript_GameIntro_Text_4:
# 610 "data/maps/ZoneSanctuary/scripts.pory"
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
# 613 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Are you sure you are done selecting\n"
	.string "your settings?$"

Sanctuary_EventScript_GameIntro_Text_6:
# 618 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Settings saved!$"

Sanctuary_EventScript_GameIntro_Text_7:
# 622 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Sanctuary_EventScript_GameIntro_Text_8:
# 629 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Portentia's\n"
	.string "Potions{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, such as Potions or\n"
	.string "other curative measures, can be found\l"
	.string "here.$"

Sanctuary_EventScript_GameIntro_Text_9:
# 640 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Tim's Pokéball\n"
	.string "Shop{COLOR DARK_GRAY}.\p"
	.string "They have a variety of Pokéballs to\n"
	.string "buy.$"

Sanctuary_EventScript_GameIntro_Text_10:
# 651 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Julia's Berries{COLOR DARK_GRAY}.\p"
	.string "Julia is a legendary chef who curates a\n"
	.string "selection of Berries for Pokémon.$"

Sanctuary_EventScript_GameIntro_Text_11:
# 662 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Marie's Egg\n"
	.string "Delivery Service{COLOR DARK_GRAY}.\p"
	.string "Marie helps match Pokémon eggs with\n"
	.string "new owners.$"

Sanctuary_EventScript_GameIntro_Text_12:
# 673 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Varrick's\n"
	.string "Extravagant Emporium{COLOR DARK_GRAY}.\p"
	.string "A huge variety of items are sold here.$"

Sanctuary_EventScript_GameIntro_Text_13:
# 684 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Lelouch's\n"
	.string "Services Shop{COLOR DARK_GRAY}.\p"
	.string "He only sees customers who can pay his\n"
	.string "price.$"

Sanctuary_EventScript_GameIntro_Text_14:
# 697 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the {COLOR RED}Pokémon Center{COLOR DARK_GRAY},\n"
	.string "though don't let Joy catch you saying\l"
	.string "that.\p"
	.string "Your Pokémon can be healed at a flat\n"
	.string "fee.\p"
	.string "In addition, inside you might find\n"
	.string "people with advice or aid for you.\p"
	.string "Note the building has a back entrance\n"
	.string "for ease of access.\p"
	.string "You can also access {COLOR GREEN}Zone 0{COLOR DARK_GRAY} on the right\n"
	.string "inside.$"

Sanctuary_EventScript_GameIntro_Text_15:
# 706 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Sanctuary_EventScript_GameIntro_Text_16:
# 713 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Sanctuary_EventScript_GameIntro_Text_17:
# 717 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Sanctuary_EventScript_GameIntro_Text_18:
# 720 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Sanctuary_EventScript_GameIntro_Text_19:
# 728 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_GameIntro_Text_20:
# 741 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-9 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
# 750 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Choose a starter Pokémon.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Bulbasaur$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Charmander$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Squirtle$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chikorita$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Cyndaquil$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Totodile$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Treecko$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Torchic$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Mudkip$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Turtwig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chimchar$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Piplup$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Snivy$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Tepig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Oshawott$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chespin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fennekin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Froakie$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Rowlet$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Litten$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Popplio$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Grookey$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Scorbunny$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sobble$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sprigatito$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fuecoco$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Quaxly$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Random$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29:
# 812 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30:
# 871 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: You want {STR_VAR_1}?$"

Sanctuary_EventScript_EndIntro_Text_0:
# 926 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Sanctuary_EventScript_EndIntro_Text_1:
# 929 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you are playing on {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode, here are the items you'd need.\p"
	.string "You can get more by asking me about\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode again.$"

Sanctuary_EventScript_EndIntro_Text_2:
# 958 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Sanctuary_EventScript_EndIntro_Text_3:
# 961 "data/maps/ZoneSanctuary/scripts.pory"
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Sanctuary_EventScript_EndIntro_Text_4:
# 965 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received ¥5000!$"

Sanctuary_EventScript_EndIntro_Text_5:
# 969 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_EndofDemo::
# 162 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the end of the demo.\n"
	.string "Our engineers are still working on the\l"
	.string "remainder of the {COLOR RED}Pokémon Battle\l"
	.string "Labyrinth{COLOR DARK_GRAY}. Please save your game using\l"
	.string "the in game save so you might be able to\l"
	.string "transfer your save file to the next\l"
	.string "version when it comes out.$"

Sanctuary_Text_Colress_Upgraded::
# 166 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because of your progress, the following\n"
	.string "shops are upgraded:$"

Sanctuary_Text_Colress_UpgradedPokeball::
# 170 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Tim's Pokéball Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedPotions::
# 174 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Portentia's Potions{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedItems::
# 178 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Varrick's Extravagant Emporium{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedBerries::
# 182 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Julia's Berries{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedEggs::
# 186 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Marie's Egg Delivery Service{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedServices::
# 190 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Lelouch's Services Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedRecovery::
# 194 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Joy's Center of Restoration{COLOR DARK_GRAY}!$"
