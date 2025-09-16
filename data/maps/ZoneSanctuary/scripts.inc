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
# 133 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_NextZone_4
# 135 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_NextZone_5
Sanctuary_EventScript_NextZone_1:
# 138 "data/maps/ZoneSanctuary/scripts.pory"
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
# 123 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_NextZone_18
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_4:
# 134 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Settings
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_5:
# 136 "data/maps/ZoneSanctuary/scripts.pory"
	goto EventScript_Documentation
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_7:
# 18 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_5, MSGBOX_YESNO
# 19 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_19
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_8:
# 27 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_6, MSGBOX_YESNO
# 28 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_21
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_9:
# 36 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_7, MSGBOX_YESNO
# 37 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_23
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_10:
# 47 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_8, MSGBOX_YESNO
# 48 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_25
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_11:
# 56 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_9, MSGBOX_YESNO
# 57 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_27
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_12:
# 65 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_10, MSGBOX_YESNO
# 66 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_29
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_13:
# 74 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_11, MSGBOX_YESNO
# 75 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_31
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_14:
# 83 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_12, MSGBOX_YESNO
# 84 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_33
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_15:
# 97 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_13, MSGBOX_YESNO
# 98 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_35
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_16:
# 106 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_14, MSGBOX_YESNO
# 107 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_37
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_17:
# 115 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_15, MSGBOX_YESNO
# 116 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_39
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_18:
# 124 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_NextZone_Text_16, MSGBOX_YESNO
# 125 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_NextZone_41
	goto Sanctuary_EventScript_NextZone_1

Sanctuary_EventScript_NextZone_19:
# 20 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 21 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 7
# 22 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 23 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_21:
# 29 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 30 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 9
# 31 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 32 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_23:
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

Sanctuary_EventScript_NextZone_25:
# 49 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 50 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 13
# 51 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 52 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_27:
# 58 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 59 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 15
# 60 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 0
# 61 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_29:
# 67 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 68 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 69 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 70 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_31:
# 76 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 77 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 20
# 78 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE7A, 255, 10, 33
# 79 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_33:
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

Sanctuary_EventScript_NextZone_35:
# 99 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 100 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 23
# 101 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE10A, 255, 42, 51
# 102 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_37:
# 108 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 109 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 110 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 111 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_39:
# 117 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 118 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 26
# 119 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE12A, 255, 9, 16
# 120 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end

Sanctuary_EventScript_NextZone_41:
# 126 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_EnterZone
# 127 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 30
# 128 "data/maps/ZoneSanctuary/scripts.pory"
	warp MAP_ZONE13A, 255, 18, 10
# 129 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
	end


Sanctuary_EventScript_EnterZone::
# 142 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IN_NEW_ZONE
# 143 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterZone_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/ZoneSanctuary/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 145 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Sanctuary_EventScript_EnterZone_2
Sanctuary_EventScript_EnterZone_1:
# 152 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq Sanctuary_EventScript_EnterZone_5
Sanctuary_EventScript_EnterZone_4:
# 159 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq Sanctuary_EventScript_EnterZone_8
Sanctuary_EventScript_EnterZone_7:
# 166 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 167 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	return

Sanctuary_EventScript_EnterZone_2:
# 146 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 147 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 148 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 149 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 150 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_1

Sanctuary_EventScript_EnterZone_5:
# 153 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 154 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 155 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 156 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 157 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_4

Sanctuary_EventScript_EnterZone_8:
# 160 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 161 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 162 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 163 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 164 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
	goto Sanctuary_EventScript_EnterZone_7


Sanctuary_EventScript_EnterSanctuary::
# 208 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 209 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_GENERIC, 0
# 210 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_IN_NEW_ZONE
# 211 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_ZONE_PC_USED
# 212 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 213 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 214 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 215 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 216 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 217 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 218 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 219 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 220 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 221 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 222 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 223 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_3
# 227 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_4
# 231 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_5
# 235 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_6
# 239 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_7
# 243 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_8
# 247 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_9
# 251 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_10
# 255 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_11
# 259 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_12
# 263 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_13
# 267 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_14
# 271 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_EnterSanctuary_15
# 275 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_EnterSanctuary_16
# 279 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_EnterSanctuary_17
# 283 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_18
# 287 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_EnterSanctuary_19
# 291 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_EnterSanctuary_20
# 295 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_EnterSanctuary_21
# 299 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_EnterSanctuary_22
# 303 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_23
Sanctuary_EventScript_EnterSanctuary_1:
# 308 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 309 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_26
# 312 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_27
# 322 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_28
# 325 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_29
# 332 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_30
# 335 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_31
# 338 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_32
# 345 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_33
# 348 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_34
# 357 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_35
# 360 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_36
Sanctuary_EventScript_EnterSanctuary_24:
# 364 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_ZONE
# 365 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_EnterSanctuary_39
# 368 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_EnterSanctuary_40
# 372 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_EnterSanctuary_41
# 388 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_EnterSanctuary_42
# 391 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_EnterSanctuary_43
# 404 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_EnterSanctuary_44
# 416 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_EnterSanctuary_45
# 428 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_EnterSanctuary_46
# 431 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_EnterSanctuary_47
# 451 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_EnterSanctuary_48
# 454 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_EnterSanctuary_49
# 465 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_EnterSanctuary_50
# 469 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_EnterSanctuary_51
# 472 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_EnterSanctuary_52
# 475 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_EnterSanctuary_53
# 479 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_EnterSanctuary_54
# 483 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_EnterSanctuary_55
# 486 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_EnterSanctuary_56
# 489 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_EnterSanctuary_57
# 492 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_EnterSanctuary_58
# 496 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_EnterSanctuary_59
# 500 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_EnterSanctuary_60
# 503 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_EnterSanctuary_61
# 506 "data/maps/ZoneSanctuary/scripts.pory"
	case 28, Sanctuary_EventScript_EnterSanctuary_62
# 509 "data/maps/ZoneSanctuary/scripts.pory"
	case 29, Sanctuary_EventScript_EnterSanctuary_63
# 512 "data/maps/ZoneSanctuary/scripts.pory"
	case 30, Sanctuary_EventScript_EnterSanctuary_64
# 515 "data/maps/ZoneSanctuary/scripts.pory"
	case 31, Sanctuary_EventScript_EnterSanctuary_65
# 518 "data/maps/ZoneSanctuary/scripts.pory"
	case 32, Sanctuary_EventScript_EnterSanctuary_66
# 521 "data/maps/ZoneSanctuary/scripts.pory"
	case 33, Sanctuary_EventScript_EnterSanctuary_67
# 524 "data/maps/ZoneSanctuary/scripts.pory"
	case 34, Sanctuary_EventScript_EnterSanctuary_68
# 527 "data/maps/ZoneSanctuary/scripts.pory"
	case 35, Sanctuary_EventScript_EnterSanctuary_69
# 530 "data/maps/ZoneSanctuary/scripts.pory"
	case 36, Sanctuary_EventScript_EnterSanctuary_70
# 533 "data/maps/ZoneSanctuary/scripts.pory"
	case 37, Sanctuary_EventScript_EnterSanctuary_71
# 536 "data/maps/ZoneSanctuary/scripts.pory"
	case 38, Sanctuary_EventScript_EnterSanctuary_72
# 539 "data/maps/ZoneSanctuary/scripts.pory"
	case 39, Sanctuary_EventScript_EnterSanctuary_73
# 542 "data/maps/ZoneSanctuary/scripts.pory"
	case 40, Sanctuary_EventScript_EnterSanctuary_74
# 545 "data/maps/ZoneSanctuary/scripts.pory"
	case 41, Sanctuary_EventScript_EnterSanctuary_75
# 548 "data/maps/ZoneSanctuary/scripts.pory"
	case 42, Sanctuary_EventScript_EnterSanctuary_76
# 551 "data/maps/ZoneSanctuary/scripts.pory"
	case 43, Sanctuary_EventScript_EnterSanctuary_77
# 554 "data/maps/ZoneSanctuary/scripts.pory"
	case 44, Sanctuary_EventScript_EnterSanctuary_78
# 557 "data/maps/ZoneSanctuary/scripts.pory"
	case 45, Sanctuary_EventScript_EnterSanctuary_79
# 560 "data/maps/ZoneSanctuary/scripts.pory"
	case 46, Sanctuary_EventScript_EnterSanctuary_80
# 563 "data/maps/ZoneSanctuary/scripts.pory"
	case 47, Sanctuary_EventScript_EnterSanctuary_81
# 566 "data/maps/ZoneSanctuary/scripts.pory"
	case 48, Sanctuary_EventScript_EnterSanctuary_82
# 569 "data/maps/ZoneSanctuary/scripts.pory"
	case 49, Sanctuary_EventScript_EnterSanctuary_83
# 572 "data/maps/ZoneSanctuary/scripts.pory"
	case 50, Sanctuary_EventScript_EnterSanctuary_84
Sanctuary_EventScript_EnterSanctuary_37:
# 576 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_WhenUReadyDialogue
# 577 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 578 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 579 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EnterSanctuary_3:
# 224 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_0
# 225 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 226 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_1
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_4:
# 228 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_2
# 229 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 230 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_3
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_5:
# 232 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_4
# 233 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 234 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_5
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_6:
# 236 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_6
# 237 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 238 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_7
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_7:
# 240 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_8
# 241 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 242 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_9
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_8:
# 244 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_10
# 245 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 246 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_11
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_9:
# 248 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_12
# 249 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 250 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_13
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_10:
# 252 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_14
# 253 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 254 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_15
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_11:
# 256 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_16
# 257 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 258 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_17
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_12:
# 260 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_18
# 261 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 262 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_19
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_13:
# 264 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_20
# 265 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 266 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_21
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_14:
# 268 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 269 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 270 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_15:
# 272 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_24
# 273 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 274 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_25
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_16:
# 276 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_26
# 277 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 278 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_27
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_17:
# 280 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_28
# 281 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 282 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_29
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_18:
# 284 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 285 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 286 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_19:
# 288 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_30
# 289 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 290 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_31
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_20:
# 292 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_32
# 293 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 294 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_33
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_21:
# 296 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_34
# 297 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 298 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_35
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_22:
# 300 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_36
# 301 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 302 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_37
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_23:
# 304 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_22
# 305 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 306 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_23
	goto Sanctuary_EventScript_EnterSanctuary_1

Sanctuary_EventScript_EnterSanctuary_26:
# 310 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_38, MSGBOX_DEFAULT
# 311 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_INFINITE_REPEL
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_27:
# 313 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_39, MSGBOX_DEFAULT
# 314 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 315 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_DETECTOR_MODE
# 316 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_40, MSGBOX_DEFAULT
# 318 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 319 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Sanctuary_EventScript_EnterSanctuary_85
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_28:
# 323 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_42, MSGBOX_DEFAULT
# 324 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_REVIVE, 5
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_29:
# 326 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_43, MSGBOX_DEFAULT
# 327 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 328 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 329 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_44, MSGBOX_DEFAULT
# 330 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 331 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_45, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_30:
# 333 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_46, MSGBOX_DEFAULT
# 334 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_RED_SHARD, 10
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_31:
# 336 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_47, MSGBOX_DEFAULT
# 337 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_SLEDGEHAMMER
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_32:
# 339 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_48, MSGBOX_DEFAULT
# 340 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_49, MSGBOX_DEFAULT
# 341 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 342 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_50, MSGBOX_DEFAULT
# 343 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_51, MSGBOX_DEFAULT
# 344 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_MACHETE
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_33:
# 346 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_52, MSGBOX_DEFAULT
# 347 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_COVET
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_34:
# 349 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_53, MSGBOX_DEFAULT
# 350 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TERA_ORB
# 351 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_USED_TERA
# 352 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EnterSanctuary_88
Sanctuary_EventScript_EnterSanctuary_87:
# 356 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_55
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_35:
# 358 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_56, MSGBOX_DEFAULT
# 359 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_TM_GRASS_KNOT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_36:
# 361 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_57, MSGBOX_DEFAULT
# 362 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 10
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_39:
# 366 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 367 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 2
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_40:
# 369 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 370 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 371 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 3
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_41:
# 373 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 374 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 4
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
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 381 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 382 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 384 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 385 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 386 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 387 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_42:
# 389 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 390 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 5
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_43:
# 392 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 393 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 6
# 394 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 395 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 396 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 397 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 398 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 399 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 400 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 401 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 403 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_44:
# 405 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 406 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 407 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 7
# 408 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 409 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 410 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 411 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 412 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 413 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 414 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 415 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_58, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_45:
# 417 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 418 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 419 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 420 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 9
# 421 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 422 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 423 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPokeball, MSGBOX_DEFAULT
# 424 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 425 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 426 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedBerries, MSGBOX_DEFAULT
# 427 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_46:
# 429 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 430 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 10
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_47:
# 432 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 433 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
# 434 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 11
# 435 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 436 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 437 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 438 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 439 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 440 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 441 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 442 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 443 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedEggs, MSGBOX_DEFAULT
# 444 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 445 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 446 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedServices, MSGBOX_DEFAULT
# 447 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 448 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 449 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedRecovery, MSGBOX_DEFAULT
# 450 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_48:
# 452 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_11
# 453 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 12
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_49:
# 455 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_12
# 456 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 13
# 457 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_Upgraded, MSGBOX_DEFAULT
# 458 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 459 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedPotions, MSGBOX_DEFAULT
# 460 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 461 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 462 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_Text_Colress_UpgradedItems, MSGBOX_DEFAULT
# 463 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 464 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_58, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_50:
# 466 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_13
# 467 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_14
# 468 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 15
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_51:
# 470 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_15
# 471 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 16
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_52:
# 473 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_16
# 474 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 17
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_53:
# 476 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_17
# 477 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 18
# 478 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_58, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_54:
# 480 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_18
# 481 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_19
# 482 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 20
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_55:
# 484 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_20
# 485 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 21
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_56:
# 487 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_21
# 488 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 22
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_57:
# 490 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_22
# 491 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 23
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_58:
# 493 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_23
# 494 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 24
# 495 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_58, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_59:
# 497 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_24
# 498 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_25
# 499 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 26
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_60:
# 501 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_26
# 502 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 27
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_61:
# 504 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_27
# 505 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 28
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_62:
# 507 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_28
# 508 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 29
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_63:
# 510 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_29
# 511 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 30
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_64:
# 513 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_30
# 514 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 31
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_65:
# 516 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_31
# 517 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 32
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_66:
# 519 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_32
# 520 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 33
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_67:
# 522 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_33
# 523 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 34
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_68:
# 525 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_34
# 526 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 35
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_69:
# 528 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_35
# 529 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 36
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_70:
# 531 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_36
# 532 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 37
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_71:
# 534 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_37
# 535 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 38
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_72:
# 537 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_38
# 538 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 39
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_73:
# 540 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_39
# 541 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 40
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_74:
# 543 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_40
# 544 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 41
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_75:
# 546 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_41
# 547 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 42
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_76:
# 549 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_42
# 550 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 43
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_77:
# 552 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_43
# 553 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 44
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_78:
# 555 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_44
# 556 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 45
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_79:
# 558 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_45
# 559 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 46
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_80:
# 561 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_46
# 562 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 47
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_81:
# 564 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_47
# 565 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 48
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_82:
# 567 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_48
# 568 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 49
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_83:
# 570 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_49
# 571 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 50
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_84:
# 573 "data/maps/ZoneSanctuary/scripts.pory"
	completesubquest QUEST_PBL, SUB_QUEST_50
# 574 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 51
	goto Sanctuary_EventScript_EnterSanctuary_37

Sanctuary_EventScript_EnterSanctuary_85:
# 320 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_41, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_EnterSanctuary_24

Sanctuary_EventScript_EnterSanctuary_88:
# 353 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EnterSanctuary_Text_54, MSGBOX_DEFAULT
# 354 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 900
	goto Sanctuary_EventScript_EnterSanctuary_87


Sanctuary_EventScript_MoveCameraUp::
# 584 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 585 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 586 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 587 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_MoveCameraDown::
# 592 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 593 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 594 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 595 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
	return


Sanctuary_EventScript_GameIntro::
# 601 "data/maps/ZoneSanctuary/scripts.pory"
	lockall
# 602 "data/maps/ZoneSanctuary/scripts.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 603 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 604 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 605 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 606 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_AUTORUN_TOGGLE
# 607 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraUp
# 608 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 609 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_PIN
# 610 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 611 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 612 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 613 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_0, MSGBOX_AUTOCLOSE
# 614 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 615 "data/maps/ZoneSanctuary/scripts.pory"
	call Sanctuary_EventScript_MoveCameraDown
# 616 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 617 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_1, MSGBOX_YESNO
# 618 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_2
Sanctuary_EventScript_GameIntro_1:
# 628 "data/maps/ZoneSanctuary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_PBL
# 629 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SETTINGS_EXP_ALL
# 630 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_3, MSGBOX_YESNO
# 631 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_5
Sanctuary_EventScript_GameIntro_4:
# 643 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 644 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_8
Sanctuary_EventScript_GameIntro_7:
# 735 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Sanctuary_EventScript_GameIntro_15
Sanctuary_EventScript_GameIntro_14:
# 750 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Sanctuary_EventScript_GameIntro_19
# 764 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_20
# 767 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	return

Sanctuary_EventScript_GameIntro_2:
# 619 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_5, 1
# 620 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_2, MSGBOX_AUTOCLOSE
# 626 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_1

Sanctuary_EventScript_GameIntro_5:
# 632 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 1
# 633 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_4, MSGBOX_DEFAULT
Sanctuary_EventScript_GameIntro_11:
# 634 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Sanctuary_EventScript_GameIntro_12
# 641 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_6, MSGBOX_DEFAULT
	goto Sanctuary_EventScript_GameIntro_4

Sanctuary_EventScript_GameIntro_8:
# 645 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_7, MSGBOX_AUTOCLOSE
# 646 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FirstShop
# 647 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FirstShop
# 648 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 649 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 650 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 651 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 652 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_8, MSGBOX_AUTOCLOSE
# 654 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 655 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 656 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 657 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SecondShop
# 658 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SecondShop
# 659 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 660 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 661 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 662 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 663 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_9, MSGBOX_AUTOCLOSE
# 665 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 666 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 667 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 668 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ThirdShop
# 669 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ThirdShop
# 670 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 671 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 672 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 673 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 674 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_10, MSGBOX_AUTOCLOSE
# 676 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 677 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 678 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 679 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FourthShop
# 680 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FourthShop
# 681 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 682 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 683 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 684 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 685 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_11, MSGBOX_AUTOCLOSE
# 687 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 688 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 689 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 690 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_FifthShop
# 691 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_FifthShop
# 692 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 693 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 694 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 695 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 696 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_12, MSGBOX_AUTOCLOSE
# 698 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 699 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 700 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 701 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_SixthShop
# 702 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_SixthShop
# 703 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 704 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 705 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 706 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 707 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_13, MSGBOX_AUTOCLOSE
# 709 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 710 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 711 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 712 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_ToPokemonCenter
# 713 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_ToPokemonCenter
# 714 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 715 "data/maps/ZoneSanctuary/scripts.pory"
	special SpawnCameraObject
# 716 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 717 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 718 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 719 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 720 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_14, MSGBOX_AUTOCLOSE
# 721 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown2
# 722 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 723 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 724 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 725 "data/maps/ZoneSanctuary/scripts.pory"
	special RemoveCameraObject
# 726 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Sanctuary_Movement_Colress_BackMid
# 727 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sanctuary_Movement_Player_BackMid
# 728 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 0
# 729 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_15, MSGBOX_AUTOCLOSE
# 733 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_GameIntro_7

Sanctuary_EventScript_GameIntro_12:
# 635 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_Settings
# 636 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_5, MSGBOX_YESNO
# 637 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_17
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_15:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_16
# 738 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 739 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 740 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 741 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 742 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 743 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 744 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_23
Sanctuary_EventScript_GameIntro_22:
# 748 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	goto Sanctuary_EventScript_GameIntro_14

Sanctuary_EventScript_GameIntro_17:
# 638 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Sanctuary_EventScript_GameIntro_11

Sanctuary_EventScript_GameIntro_19:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_19
# 754 "data/maps/ZoneSanctuary/scripts.pory"
	special ChooseStarter
# 755 "data/maps/ZoneSanctuary/scripts.pory"
	waitstate
# 756 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 757 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 758 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_GameIntro_26
Sanctuary_EventScript_GameIntro_25:
# 762 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_GameIntro_23:
# 745 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 746 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_22

Sanctuary_EventScript_GameIntro_26:
# 759 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 760 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_GameIntro_25


Sanctuary_EventScript_HandleStarterSelectionDefault::
# 772 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 773 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27, Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28
# 775 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 776 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_3
# 778 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_4
# 780 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_5
# 782 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_6
# 784 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_7
# 786 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_8
# 788 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_9
# 790 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_10
# 792 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_11
# 794 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_12
# 796 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_13
# 798 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_14
# 800 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_15
# 802 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_16
# 804 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_17
# 806 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_18
# 808 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_19
# 810 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_20
# 812 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_21
# 814 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_22
# 816 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_23
# 818 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_24
# 820 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_25
# 822 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_26
# 824 "data/maps/ZoneSanctuary/scripts.pory"
	case 24, Sanctuary_EventScript_HandleStarterSelectionDefault_27
# 826 "data/maps/ZoneSanctuary/scripts.pory"
	case 25, Sanctuary_EventScript_HandleStarterSelectionDefault_28
# 828 "data/maps/ZoneSanctuary/scripts.pory"
	case 26, Sanctuary_EventScript_HandleStarterSelectionDefault_29
# 830 "data/maps/ZoneSanctuary/scripts.pory"
	case 27, Sanctuary_EventScript_HandleStarterSelectionDefault_30
Sanctuary_EventScript_HandleStarterSelectionDefault_1:
# 833 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_32
Sanctuary_EventScript_HandleStarterSelectionDefault_31:
# 891 "data/maps/ZoneSanctuary/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_3
# 892 "data/maps/ZoneSanctuary/scripts.pory"
	showmonpic VAR_TEMP_3, 10, 3
# 893 "data/maps/ZoneSanctuary/scripts.pory"
	playmoncry VAR_TEMP_3, 0
# 894 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30, MSGBOX_YESNO
# 895 "data/maps/ZoneSanctuary/scripts.pory"
	waitmoncry
# 896 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_35
Sanctuary_EventScript_HandleStarterSelectionDefault_34:
# 900 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_TEMP_3
# 901 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_BULBASAUR, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 902 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIKORITA, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 903 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TREECKO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 904 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TURTWIG, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 905 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SNIVY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 906 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHESPIN, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 907 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_ROWLET, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 908 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_GROOKEY, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 909 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SPRIGATITO, Sanctuary_EventScript_HandleStarterSelectionDefault_64
# 911 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHARMANDER, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 912 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CYNDAQUIL, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 913 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TORCHIC, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 914 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_CHIMCHAR, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 915 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TEPIG, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 916 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FENNEKIN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 917 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_LITTEN, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 918 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SCORBUNNY, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 919 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FUECOCO, Sanctuary_EventScript_HandleStarterSelectionDefault_65
# 921 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SQUIRTLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 922 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_TOTODILE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 923 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_MUDKIP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 924 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_PIPLUP, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 925 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_OSHAWOTT, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 926 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_FROAKIE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 927 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_POPPLIO, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 928 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_SOBBLE, Sanctuary_EventScript_HandleStarterSelectionDefault_66
# 929 "data/maps/ZoneSanctuary/scripts.pory"
	case SPECIES_QUAXLY, Sanctuary_EventScript_HandleStarterSelectionDefault_66
Sanctuary_EventScript_HandleStarterSelectionDefault_62:
# 932 "data/maps/ZoneSanctuary/scripts.pory"
	givemon VAR_TEMP_3, 5, ITEM_NONE
# 933 "data/maps/ZoneSanctuary/scripts.pory"
	hidemonpic
# 934 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 935 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_GameIntro_Text_17
# 936 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 937 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 938 "data/maps/ZoneSanctuary/scripts.pory"
	bufferleadmonspeciesname 0
# 939 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_GameIntro_Text_18, MSGBOX_YESNO
# 940 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sanctuary_EventScript_HandleStarterSelectionDefault_68
Sanctuary_EventScript_HandleStarterSelectionDefault_67:
# 944 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_EndIntro
	return

Sanctuary_EventScript_HandleStarterSelectionDefault_3:
# 777 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_4:
# 779 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_5:
# 781 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_6:
# 783 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_7:
# 785 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_8:
# 787 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_9:
# 789 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_10:
# 791 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_11:
# 793 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_12:
# 795 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_13:
# 797 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_14:
# 799 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_15:
# 801 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_16:
# 803 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_17:
# 805 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_18:
# 807 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_19:
# 809 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_20:
# 811 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_21:
# 813 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_22:
# 815 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_23:
# 817 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_24:
# 819 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_25:
# 821 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_26:
# 823 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_27:
# 825 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SPRIGATITO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_28:
# 827 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FUECOCO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_29:
# 829 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_QUAXLY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_30:
# 831 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_1

Sanctuary_EventScript_HandleStarterSelectionDefault_32:
# 834 "data/maps/ZoneSanctuary/scripts.pory"
	playse SE_CONTEST_PLACE
# 835 "data/maps/ZoneSanctuary/scripts.pory"
	message Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29
# 836 "data/maps/ZoneSanctuary/scripts.pory"
	delay 96
# 837 "data/maps/ZoneSanctuary/scripts.pory"
	waitse
# 838 "data/maps/ZoneSanctuary/scripts.pory"
	waitmessage
# 839 "data/maps/ZoneSanctuary/scripts.pory"
	random 24
# 840 "data/maps/ZoneSanctuary/scripts.pory"
	switch VAR_RESULT
# 841 "data/maps/ZoneSanctuary/scripts.pory"
	case 0, Sanctuary_EventScript_HandleStarterSelectionDefault_38
# 843 "data/maps/ZoneSanctuary/scripts.pory"
	case 1, Sanctuary_EventScript_HandleStarterSelectionDefault_39
# 845 "data/maps/ZoneSanctuary/scripts.pory"
	case 2, Sanctuary_EventScript_HandleStarterSelectionDefault_40
# 847 "data/maps/ZoneSanctuary/scripts.pory"
	case 3, Sanctuary_EventScript_HandleStarterSelectionDefault_41
# 849 "data/maps/ZoneSanctuary/scripts.pory"
	case 4, Sanctuary_EventScript_HandleStarterSelectionDefault_42
# 851 "data/maps/ZoneSanctuary/scripts.pory"
	case 5, Sanctuary_EventScript_HandleStarterSelectionDefault_43
# 853 "data/maps/ZoneSanctuary/scripts.pory"
	case 6, Sanctuary_EventScript_HandleStarterSelectionDefault_44
# 855 "data/maps/ZoneSanctuary/scripts.pory"
	case 7, Sanctuary_EventScript_HandleStarterSelectionDefault_45
# 857 "data/maps/ZoneSanctuary/scripts.pory"
	case 8, Sanctuary_EventScript_HandleStarterSelectionDefault_46
# 859 "data/maps/ZoneSanctuary/scripts.pory"
	case 9, Sanctuary_EventScript_HandleStarterSelectionDefault_47
# 861 "data/maps/ZoneSanctuary/scripts.pory"
	case 10, Sanctuary_EventScript_HandleStarterSelectionDefault_48
# 863 "data/maps/ZoneSanctuary/scripts.pory"
	case 11, Sanctuary_EventScript_HandleStarterSelectionDefault_49
# 865 "data/maps/ZoneSanctuary/scripts.pory"
	case 12, Sanctuary_EventScript_HandleStarterSelectionDefault_50
# 867 "data/maps/ZoneSanctuary/scripts.pory"
	case 13, Sanctuary_EventScript_HandleStarterSelectionDefault_51
# 869 "data/maps/ZoneSanctuary/scripts.pory"
	case 14, Sanctuary_EventScript_HandleStarterSelectionDefault_52
# 871 "data/maps/ZoneSanctuary/scripts.pory"
	case 15, Sanctuary_EventScript_HandleStarterSelectionDefault_53
# 873 "data/maps/ZoneSanctuary/scripts.pory"
	case 16, Sanctuary_EventScript_HandleStarterSelectionDefault_54
# 875 "data/maps/ZoneSanctuary/scripts.pory"
	case 17, Sanctuary_EventScript_HandleStarterSelectionDefault_55
# 877 "data/maps/ZoneSanctuary/scripts.pory"
	case 18, Sanctuary_EventScript_HandleStarterSelectionDefault_56
# 879 "data/maps/ZoneSanctuary/scripts.pory"
	case 19, Sanctuary_EventScript_HandleStarterSelectionDefault_57
# 881 "data/maps/ZoneSanctuary/scripts.pory"
	case 20, Sanctuary_EventScript_HandleStarterSelectionDefault_58
# 883 "data/maps/ZoneSanctuary/scripts.pory"
	case 21, Sanctuary_EventScript_HandleStarterSelectionDefault_59
# 885 "data/maps/ZoneSanctuary/scripts.pory"
	case 22, Sanctuary_EventScript_HandleStarterSelectionDefault_60
# 887 "data/maps/ZoneSanctuary/scripts.pory"
	case 23, Sanctuary_EventScript_HandleStarterSelectionDefault_61
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_35:
# 897 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, 0
# 898 "data/maps/ZoneSanctuary/scripts.pory"
	goto Sanctuary_EventScript_HandleStarterSelectionDefault
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_34

Sanctuary_EventScript_HandleStarterSelectionDefault_38:
# 842 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_39:
# 844 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_40:
# 846 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_41:
# 848 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIKORITA
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_42:
# 850 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CYNDAQUIL
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_43:
# 852 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TOTODILE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_44:
# 854 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TREECKO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_45:
# 856 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_46:
# 858 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_MUDKIP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_47:
# 860 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TURTWIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_48:
# 862 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHIMCHAR
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_49:
# 864 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_50:
# 866 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SNIVY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_51:
# 868 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TEPIG
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_52:
# 870 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_OSHAWOTT
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_53:
# 872 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHESPIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_54:
# 874 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FENNEKIN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_55:
# 876 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_FROAKIE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_56:
# 878 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_57:
# 880 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_LITTEN
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_58:
# 882 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_POPPLIO
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_59:
# 884 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_GROOKEY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_60:
# 886 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SCORBUNNY
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_61:
# 888 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SOBBLE
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_31

Sanctuary_EventScript_HandleStarterSelectionDefault_64:
# 910 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_65:
# 920 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_66:
# 930 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_62

Sanctuary_EventScript_HandleStarterSelectionDefault_68:
# 941 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_0x8004, 0
# 942 "data/maps/ZoneSanctuary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Sanctuary_EventScript_HandleStarterSelectionDefault_67


Sanctuary_EventScript_EndIntro::
# 948 "data/maps/ZoneSanctuary/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Sanctuary_EventScript_EndIntro_2
# 997 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_10
# 1002 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POTION, 10
Sanctuary_EventScript_EndIntro_9:
# 1004 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_POKE_BALL, 15
Sanctuary_EventScript_EndIntro_1:
# 1006 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1007 "data/maps/ZoneSanctuary/scripts.pory"
	special SetUnlockedPokedexFlags
# 1008 "data/maps/ZoneSanctuary/scripts.pory"
	setmonmetlocation 0, 255
# 1009 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 1010 "data/maps/ZoneSanctuary/scripts.pory"
	special EnableNationalPokedex
# 1011 "data/maps/ZoneSanctuary/scripts.pory"
	initclock 1, 1
# 1012 "data/maps/ZoneSanctuary/scripts.pory"
	callnative InitTimeBasedEvents
# 1013 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_ZONE, 1
# 1014 "data/maps/ZoneSanctuary/scripts.pory"
	setvar VAR_LEVEL_CAP, 5
# 1015 "data/maps/ZoneSanctuary/scripts.pory"
	call EventScript_WhenUReadyDialogue
# 1016 "data/maps/ZoneSanctuary/scripts.pory"
	applymovement 1, Common_Movement_Colress_WalkUp
# 1017 "data/maps/ZoneSanctuary/scripts.pory"
	waitmovement 1
# 1018 "data/maps/ZoneSanctuary/scripts.pory"
	setflag FLAG_IS_DEBUGGING_SAVEFILE
# 1019 "data/maps/ZoneSanctuary/scripts.pory"
	releaseall
	end

Sanctuary_EventScript_EndIntro_2:
# 949 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_0
# 950 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
# 951 "data/maps/ZoneSanctuary/scripts.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, Sanctuary_EventScript_EndIntro_6
# 984 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_3, MSGBOX_DEFAULT
# 985 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 986 "data/maps/ZoneSanctuary/scripts.pory"
	giveitem ITEM_POTION, 10
# 987 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_4, MSGBOX_DEFAULT
# 989 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
Sanctuary_EventScript_EndIntro_5:
# 991 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 992 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_5, MSGBOX_DEFAULT
# 993 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
# 994 "data/maps/ZoneSanctuary/scripts.pory"
	closemessage
# 995 "data/maps/ZoneSanctuary/scripts.pory"
	delay 16
	goto Sanctuary_EventScript_EndIntro_1

Sanctuary_EventScript_EndIntro_6:
# 952 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_1, MSGBOX_DEFAULT
# 953 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 954 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 955 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 956 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 957 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 958 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 959 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 960 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 961 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 100
# 962 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 963 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 964 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 965 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 966 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 967 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 968 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 969 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 970 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 100
# 971 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 972 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 973 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 974 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 975 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 976 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 977 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 978 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 979 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 100
# 980 "data/maps/ZoneSanctuary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 981 "data/maps/ZoneSanctuary/scripts.pory"
	msgbox Sanctuary_EventScript_EndIntro_Text_2, MSGBOX_DEFAULT
# 982 "data/maps/ZoneSanctuary/scripts.pory"
	waitfanfare
	goto Sanctuary_EventScript_EndIntro_5

Sanctuary_EventScript_EndIntro_10:
# 998 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_FULL_RESTORE, 900
# 999 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_ELIXIR, 900
# 1000 "data/maps/ZoneSanctuary/scripts.pory"
	additem ITEM_MAX_REPEL, 900
	goto Sanctuary_EventScript_EndIntro_9


# 1023 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FirstShop:
# 1024 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1025 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1026 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1027 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1030 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FirstShop:
# 1031 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1031 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
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
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1034 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1035 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1038 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SecondShop:
# 1039 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1040 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1041 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1042 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1043 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1046 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SecondShop:
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1047 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
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
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1049 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1050 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1051 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1052 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1055 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ThirdShop:
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1056 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1057 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
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
Sanctuary_Movement_Player_ThirdShop:
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1063 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1064 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1065 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1066 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1069 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FourthShop:
# 1070 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1070 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1071 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1072 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1073 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1076 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FourthShop:
# 1077 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1077 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1077 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1078 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1079 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1080 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1083 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_FifthShop:
# 1084 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1085 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1086 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1087 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1088 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1091 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_FifthShop:
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1092 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1093 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1094 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1095 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1096 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1097 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1100 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_SixthShop:
# 1101 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1102 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1102 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1102 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1103 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1104 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1105 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1108 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_SixthShop:
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1109 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1110 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1111 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1112 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
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
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1113 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1114 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1117 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_ToPokemonCenter:
# 1118 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1119 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1120 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1120 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1120 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1121 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1122 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1125 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_ToPokemonCenter:
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1126 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1127 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1128 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1129 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1129 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1129 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1130 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1131 "data/maps/ZoneSanctuary/scripts.pory"
	face_up
	step_end

# 1134 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Colress_BackMid:
# 1135 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1136 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1137 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1138 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1139 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1140 "data/maps/ZoneSanctuary/scripts.pory"
	face_down
	step_end

# 1143 "data/maps/ZoneSanctuary/scripts.pory"
Sanctuary_Movement_Player_BackMid:
# 1144 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1144 "data/maps/ZoneSanctuary/scripts.pory"
	delay_16
# 1145 "data/maps/ZoneSanctuary/scripts.pory"
	walk_down
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1146 "data/maps/ZoneSanctuary/scripts.pory"
	walk_left
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1147 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1148 "data/maps/ZoneSanctuary/scripts.pory"
	walk_right
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
	walk_up
# 1149 "data/maps/ZoneSanctuary/scripts.pory"
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
	.string "will be entering {COLOR GREEN}Zone 2 - Warren Woods{COLOR DARK_GRAY}.$"

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
	.string "and {COLOR GREEN}Zone 8 - Gemini Caves{COLOR DARK_GRAY}.$"

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

Sanctuary_EventScript_NextZone_Text_16:
# 124 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Are you sure you're ready? You\n"
	.string "will be entering {COLOR GREEN}Zone 13 - Gemini\l"
	.string "Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 14 - Gemini Caves{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterZone_Text_0:
# 143 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

Sanctuary_EventScript_EnterSanctuary_Text_0:
# 224 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_1:
# 226 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "1 - Leafway Trail{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_2:
# 228 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 2 - Warren Woods{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_3:
# 230 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "2 - Warren Woods{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_4:
# 232 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_5:
# 234 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "3 - Sunlit Pond{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_6:
# 236 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_7:
# 238 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "4 - Mystic Glade{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_8:
# 240 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 5 - Timberstep\l"
	.string "Plateau{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_9:
# 242 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "5 - Timberstep Plateau{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_10:
# 244 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 6 - Seabreeze\l"
	.string "Island{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_11:
# 246 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "6 - Seabreeze Island{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_12:
# 248 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 7 - Gemini\l"
	.string "Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 - Gemini Caves{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_13:
# 250 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "7 - Gemini Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 - Gemini\l"
	.string "Caves{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_14:
# 252 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 9 - Lushbranch\l"
	.string "Village{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_15:
# 254 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "9 - Lushbranch Village{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_16:
# 256 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 10 - Scornwind\l"
	.string "Desert{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_17:
# 258 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "10 - Scornwind Desert{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_18:
# 260 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 11 - Duskwither\l"
	.string "Maze{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_19:
# 262 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "11 - Duskwither Maze{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_20:
# 264 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 12 - Twinstream\l"
	.string "Plains{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_21:
# 266 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "12 - Twinstream Plains{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_22:
# 268 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_23:
# 270 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_24:
# 272 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 15 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_25:
# 274 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "15 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_26:
# 276 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 16 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_27:
# 278 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "16 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_28:
# 280 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 17 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_29:
# 282 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "17 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_30:
# 288 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 20 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_31:
# 290 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "20 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_32:
# 292 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 21 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_33:
# 294 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "21 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_34:
# 296 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 22 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_35:
# 298 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "22 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_36:
# 300 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Congratulations.\n"
	.string "You have cleared {COLOR GREEN}Zone 23 - {COLOR DARK_GRAY}.$"

Sanctuary_EventScript_EnterSanctuary_Text_37:
# 302 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Your reward for clearing {COLOR GREEN}Zone\n"
	.string "23 - {COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_38:
# 310 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Infinite Repellent{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_39:
# 313 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_40:
# 317 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_41:
# 320 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Note that on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}, DexNav\n"
	.string "encounters are unable to be caught.$"

Sanctuary_EventScript_EnterSanctuary_Text_42:
# 323 "data/maps/ZoneSanctuary/scripts.pory"
	.string "5 {COLOR RED}Revives{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_43:
# 326 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_44:
# 329 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}Portable PC{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_45:
# 331 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Note that if you are in a Zone,\n"
	.string "you can only use the Portable PC once\l"
	.string "before reaching the Sanctuary.$"

Sanctuary_EventScript_EnterSanctuary_Text_46:
# 333 "data/maps/ZoneSanctuary/scripts.pory"
	.string "10 {COLOR RED}Red Shards{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_47:
# 336 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Sledgehammer!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_48:
# 339 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR GREEN}Zone 7{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_49:
# 340 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM39 - Rock Tomb!{COLOR DARK_GRAY}$"

Sanctuary_EventScript_EnterSanctuary_Text_50:
# 342 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Your reward for clearing {COLOR GREEN}Zone 8{COLOR DARK_GRAY} is…$"

Sanctuary_EventScript_EnterSanctuary_Text_51:
# 343 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Machete{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_52:
# 346 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}TM15 - Covet{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_53:
# 349 "data/maps/ZoneSanctuary/scripts.pory"
	.string "The {COLOR RED}Tera Orb{COLOR DARK_GRAY}!$"

Sanctuary_EventScript_EnterSanctuary_Text_54:
# 353 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you're playing on Infinite, you also get Blue Shards!$"

Sanctuary_EventScript_EnterSanctuary_Text_55:
# 356 "data/maps/ZoneSanctuary/scripts.pory"
	.string "In battle, you can Terastilize your\n"
	.string "Pokémon now.\p"
	.string "Press {START_BUTTON} to Terastilize!\p"
	.string "After you use it, you'll have to go back\n"
	.string "to the Pokémon Center to recharge it.$"

Sanctuary_EventScript_EnterSanctuary_Text_56:
# 358 "data/maps/ZoneSanctuary/scripts.pory"
	.string "TM86 - Grass Knot!$"

Sanctuary_EventScript_EnterSanctuary_Text_57:
# 361 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Ultra Balls!$"

Sanctuary_EventScript_EnterSanctuary_Text_58:
# 415 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: The next two zones, {COLOR GREEN}Zone 7 -\n"
	.string "Gemini Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 - Gemini\l"
	.string "Caves{COLOR DARK_GRAY}, are combined.\p"
	.string "You will not be able to access a\n"
	.string "Sanctuary in between the Zones.$"

Sanctuary_EventScript_GameIntro_Text_0:
# 613 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Ah. You've arrived.$"

Sanctuary_EventScript_GameIntro_Text_1:
# 617 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Welcome to the\n{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY}.\pI am your guide for braving the\nchallenges ahead.\pWould you like to listen to the tutorial?$"

Sanctuary_EventScript_GameIntro_Text_2:
# 620 "data/maps/ZoneSanctuary/scripts.pory"
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
# 630 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Pokémon Battle Labyrinth has many\n"
	.string "settings that are customizable,\l"
	.string "including {COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode,\l"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode, and difficulty\l"
	.string "options.\p"
	.string "Would you like to modify these settings\n"
	.string "now from the default?$"

Sanctuary_EventScript_GameIntro_Text_4:
# 633 "data/maps/ZoneSanctuary/scripts.pory"
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
# 636 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Are you sure you are done selecting\n"
	.string "your settings?$"

Sanctuary_EventScript_GameIntro_Text_6:
# 641 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Settings saved!$"

Sanctuary_EventScript_GameIntro_Text_7:
# 645 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Allow me to show you each of\n"
	.string "the shops.$"

Sanctuary_EventScript_GameIntro_Text_8:
# 652 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Portentia's\n"
	.string "Potions{COLOR DARK_GRAY}.\p"
	.string "Healing supplies, such as Potions or\n"
	.string "other curative measures, can be found\l"
	.string "here.$"

Sanctuary_EventScript_GameIntro_Text_9:
# 663 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Tim's Pokéball\n"
	.string "Shop{COLOR DARK_GRAY}.\p"
	.string "They have a variety of Pokéballs to\n"
	.string "buy.$"

Sanctuary_EventScript_GameIntro_Text_10:
# 674 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Julia's Berries{COLOR DARK_GRAY}.\p"
	.string "Julia is a legendary chef who curates a\n"
	.string "selection of Berries for Pokémon.$"

Sanctuary_EventScript_GameIntro_Text_11:
# 685 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Marie's Egg\n"
	.string "Delivery Service{COLOR DARK_GRAY}.\p"
	.string "Marie helps match Pokémon eggs with\n"
	.string "new owners.$"

Sanctuary_EventScript_GameIntro_Text_12:
# 696 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Varrick's\n"
	.string "Extravagant Emporium{COLOR DARK_GRAY}.\p"
	.string "A huge variety of items are sold here.$"

Sanctuary_EventScript_GameIntro_Text_13:
# 707 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This shop is {COLOR RED}Lelouch's\n"
	.string "Services Shop{COLOR DARK_GRAY}.\p"
	.string "He only sees customers who can pay his\n"
	.string "price.$"

Sanctuary_EventScript_GameIntro_Text_14:
# 720 "data/maps/ZoneSanctuary/scripts.pory"
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
# 729 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Our tour has finished.\p"
	.string "These shops will be available at every\n"
	.string "Sanctuary.\p"
	.string "As you progress through more Zones,\n"
	.string "more items and services will unlock.\p"
	.string "Also, it is highly recommended you stock\n"
	.string "up on any supplies before entering the\l"
	.string "next Zone.$"

Sanctuary_EventScript_GameIntro_Text_16:
# 736 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Because the {COLOR RED}Randomizer{COLOR DARK_GRAY} is on,\n"
	.string "you get a random starter.$"

Sanctuary_EventScript_GameIntro_Text_17:
# 740 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Sanctuary_EventScript_GameIntro_Text_18:
# 743 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: How about a nickname for your\n"
	.string "{STR_VAR_1}?$"

Sanctuary_EventScript_GameIntro_Text_19:
# 751 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "On Brutal difficulty, your choice is\n"
	.string "limited from the pool of possible\l"
	.string "starters to only three options.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_GameIntro_Text_20:
# 764 "data/maps/ZoneSanctuary/scripts.pory"
	.string "As a new challenger, you will receive a\n"
	.string "starter Pokémon.\p"
	.string "You may have your choice of any of the\n"
	.string "generation 1-9 starter Pokémon.\p"
	.string "Choose carefully as these Pokémon are\n"
	.string "very rare.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_0:
# 773 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Choose a starter Pokémon.\n"
	.string "Press {B_BUTTON} to randomize.$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_1:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Bulbasaur$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_2:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Charmander$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_3:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Squirtle$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_4:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chikorita$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_5:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Cyndaquil$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_6:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Totodile$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_7:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Treecko$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_8:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Torchic$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_9:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Mudkip$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_10:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Turtwig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_11:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chimchar$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_12:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Piplup$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_13:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Snivy$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_14:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Tepig$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_15:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Oshawott$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_16:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Chespin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_17:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fennekin$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_18:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Froakie$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_19:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Rowlet$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_20:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Litten$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_21:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Popplio$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_22:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Grookey$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_23:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Scorbunny$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_24:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sobble$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_25:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Sprigatito$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_26:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Fuecoco$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_27:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Quaxly$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_28:
# 774 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Random$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_29:
# 835 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Randomizing…$"

Sanctuary_EventScript_HandleStarterSelectionDefault_Text_30:
# 894 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: You want {STR_VAR_1}?$"

Sanctuary_EventScript_EndIntro_Text_0:
# 949 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Excellent choice.\p"
	.string "You can also re-nickname your Pokémon\n"
	.string "from the party menu.$"

Sanctuary_EventScript_EndIntro_Text_1:
# 952 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because you are playing on {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode, here are the items you'd need.\p"
	.string "You can get more by asking me about\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode again.$"

Sanctuary_EventScript_EndIntro_Text_2:
# 981 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Obtained Full Restores, Max Elixirs, and\n"
	.string "Max Repels!$"

Sanctuary_EventScript_EndIntro_Text_3:
# 984 "data/maps/ZoneSanctuary/scripts.pory"
	.string "I also have a beginner's kit with items\n"
	.string "and cash to get you started.$"

Sanctuary_EventScript_EndIntro_Text_4:
# 988 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received ¥5000!$"

Sanctuary_EventScript_EndIntro_Text_5:
# 992 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Received the {COLOR RED}Pokédex{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_EndofDemo::
# 171 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: This is the end of the demo.\n"
	.string "Our engineers are still working on the\l"
	.string "remainder of the {COLOR RED}Pokémon Battle\l"
	.string "Labyrinth{COLOR DARK_GRAY}. Please save your game using\l"
	.string "the in game save so you might be able to\l"
	.string "transfer your save file to the next\l"
	.string "version when it comes out.$"

Sanctuary_Text_Colress_Upgraded::
# 175 "data/maps/ZoneSanctuary/scripts.pory"
	.string "Because of your progress, the following\n"
	.string "shops are upgraded:$"

Sanctuary_Text_Colress_UpgradedPokeball::
# 179 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Tim's Pokéball Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedPotions::
# 183 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Portentia's Potions{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedItems::
# 187 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Varrick's Extravagant Emporium{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedBerries::
# 191 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Julia's Berries{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedEggs::
# 195 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Marie's Egg Delivery Service{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedServices::
# 199 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Lelouch's Services Shop{COLOR DARK_GRAY}!$"

Sanctuary_Text_Colress_UpgradedRecovery::
# 203 "data/maps/ZoneSanctuary/scripts.pory"
	.string "{COLOR RED}Joy's Center of Restoration{COLOR DARK_GRAY}!$"
