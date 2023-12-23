Zone0C_MapScripts::
# 2 "data/maps/Zone0C/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0C_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone0C_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone0C/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 2, Zone0C_EventScript_Intro
	.2byte 0


Zone0C_EventScript_Intro::
# 9 "data/maps/Zone0C/scripts.pory"
	lockall
# 10 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 11 "data/maps/Zone0C/scripts.pory"
	playse SE_PIN
# 12 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 13 "data/maps/Zone0C/scripts.pory"
	waitse
# 14 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_Intro_Text_0
# 15 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 16 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 18 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 19 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 20 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 21 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_Text_Intro
# 22 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Zone0C_Movement_PostIntro
# 23 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_0_STATE, 3
# 25 "data/maps/Zone0C/scripts.pory"
	releaseall
	return


Zone0C_EventScript_Scientist::
# 36 "data/maps/Zone0C/scripts.pory"
	lock
# 37 "data/maps/Zone0C/scripts.pory"
	faceplayer
# 38 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_Text_Explain
# 39 "data/maps/Zone0C/scripts.pory"
	release
	return


Zone0C_EventScript_WarpBack::
# 80 "data/maps/Zone0C/scripts.pory"
	lockall
# 81 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_0_STATE, 3
	goto_if_eq Zone0C_EventScript_WarpBack_2
Zone0C_EventScript_WarpBack_1:
# 84 "data/maps/Zone0C/scripts.pory"
	switch VAR_ZONE
# 85 "data/maps/Zone0C/scripts.pory"
	case 1, Zone0C_EventScript_WarpBack_5
# 88 "data/maps/Zone0C/scripts.pory"
	case 2, Zone0C_EventScript_WarpBack_6
# 91 "data/maps/Zone0C/scripts.pory"
	case 3, Zone0C_EventScript_WarpBack_7
# 94 "data/maps/Zone0C/scripts.pory"
	case 4, Zone0C_EventScript_WarpBack_8
# 97 "data/maps/Zone0C/scripts.pory"
	case 5, Zone0C_EventScript_WarpBack_9
# 100 "data/maps/Zone0C/scripts.pory"
	case 6, Zone0C_EventScript_WarpBack_10
# 103 "data/maps/Zone0C/scripts.pory"
	case 7, Zone0C_EventScript_WarpBack_11
# 106 "data/maps/Zone0C/scripts.pory"
	case 9, Zone0C_EventScript_WarpBack_12
# 109 "data/maps/Zone0C/scripts.pory"
	case 10, Zone0C_EventScript_WarpBack_13
# 112 "data/maps/Zone0C/scripts.pory"
	case 11, Zone0C_EventScript_WarpBack_14
# 115 "data/maps/Zone0C/scripts.pory"
	case 12, Zone0C_EventScript_WarpBack_15
# 118 "data/maps/Zone0C/scripts.pory"
	case 13, Zone0C_EventScript_WarpBack_16
# 121 "data/maps/Zone0C/scripts.pory"
	case 15, Zone0C_EventScript_WarpBack_17
# 124 "data/maps/Zone0C/scripts.pory"
	case 16, Zone0C_EventScript_WarpBack_18
# 127 "data/maps/Zone0C/scripts.pory"
	case 17, Zone0C_EventScript_WarpBack_19
# 130 "data/maps/Zone0C/scripts.pory"
	case 18, Zone0C_EventScript_WarpBack_20
# 133 "data/maps/Zone0C/scripts.pory"
	case 20, Zone0C_EventScript_WarpBack_21
# 136 "data/maps/Zone0C/scripts.pory"
	case 21, Zone0C_EventScript_WarpBack_22
# 139 "data/maps/Zone0C/scripts.pory"
	case 22, Zone0C_EventScript_WarpBack_23
# 142 "data/maps/Zone0C/scripts.pory"
	case 23, Zone0C_EventScript_WarpBack_24
# 145 "data/maps/Zone0C/scripts.pory"
	case 24, Zone0C_EventScript_WarpBack_25
# 148 "data/maps/Zone0C/scripts.pory"
	case 26, Zone0C_EventScript_WarpBack_26
	return

Zone0C_EventScript_WarpBack_2:
# 82 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_0_STATE, 4
	goto Zone0C_EventScript_WarpBack_1

Zone0C_EventScript_WarpBack_5:
# 86 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 22, 12
# 87 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_6:
# 89 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 22, 12
# 90 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_7:
# 92 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 22, 12
# 93 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_8:
# 95 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 22, 12
# 96 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_9:
# 98 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 22, 12
# 99 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_10:
# 101 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 22, 12
# 102 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_11:
# 104 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 22, 12
# 105 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_12:
# 107 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 22, 12
# 108 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_13:
# 110 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 22, 12
# 111 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_14:
# 113 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 22, 12
# 114 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_15:
# 116 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 22, 12
# 117 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_16:
# 119 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 22, 12
# 120 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_17:
# 122 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 22, 12
# 123 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_18:
# 125 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 22, 12
# 126 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_19:
# 128 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 22, 12
# 129 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_20:
# 131 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 22, 12
# 132 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_21:
# 134 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 12
# 135 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_22:
# 137 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 12
# 138 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_23:
# 140 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 22, 12
# 141 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_24:
# 143 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 22, 12
# 144 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_25:
# 146 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 22, 12
# 147 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_26:
# 149 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 22, 12
# 150 "data/maps/Zone0C/scripts.pory"
	waitstate
	return


Zone0C_EventScript_VerifyDestination::
# 155 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_0, MSGBOX_YESNO
# 156 "data/maps/Zone0C/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0C_EventScript_VerifyDestination_2
# 161 "data/maps/Zone0C/scripts.pory"
	setflag FLAG_IS_REVISITING_ZONE
	return

Zone0C_EventScript_VerifyDestination_2:
# 157 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_1
# 158 "data/maps/Zone0C/scripts.pory"
	releaseall
	end


Zone0C_EventScript_DenyWarp::
# 166 "data/maps/Zone0C/scripts.pory"
	lockall
# 167 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_DenyWarp_Text_0
# 168 "data/maps/Zone0C/scripts.pory"
	releaseall
	return


Zone0C_EventScript_WarpZone1::
# 172 "data/maps/Zone0C/scripts.pory"
	lockall
# 173 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_lt Zone0C_EventScript_WarpZone1_2
Zone0C_EventScript_WarpZone1_1:
# 176 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 1
# 177 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 178 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 179 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE1A, 255, 16, 28
# 180 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone1_2:
# 174 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone1_1


Zone0C_EventScript_WarpZone2::
# 184 "data/maps/Zone0C/scripts.pory"
	lockall
# 185 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_lt Zone0C_EventScript_WarpZone2_2
Zone0C_EventScript_WarpZone2_1:
# 188 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 2
# 189 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 190 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 191 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE2A, 255, 4, 3
# 192 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone2_2:
# 186 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone2_1


Zone0C_EventScript_WarpZone3::
# 196 "data/maps/Zone0C/scripts.pory"
	lockall
# 197 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_lt Zone0C_EventScript_WarpZone3_2
Zone0C_EventScript_WarpZone3_1:
# 200 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 3
# 201 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 202 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 203 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE3A, 255, 38, 25
# 204 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone3_2:
# 198 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone3_1


Zone0C_EventScript_WarpZone4::
# 208 "data/maps/Zone0C/scripts.pory"
	lockall
# 209 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_lt Zone0C_EventScript_WarpZone4_2
Zone0C_EventScript_WarpZone4_1:
# 212 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 4
# 213 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 214 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 215 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE4A, 255, 4, 3
# 216 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone4_2:
# 210 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone4_1


Zone0C_EventScript_WarpZone5::
# 220 "data/maps/Zone0C/scripts.pory"
	lockall
# 221 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_lt Zone0C_EventScript_WarpZone5_2
Zone0C_EventScript_WarpZone5_1:
# 224 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 5
# 225 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 226 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 227 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE5A, 255, 43, 31
# 228 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone5_2:
# 222 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone5_1


Zone0C_EventScript_WarpZone6::
# 232 "data/maps/Zone0C/scripts.pory"
	lockall
# 233 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_lt Zone0C_EventScript_WarpZone6_2
Zone0C_EventScript_WarpZone6_1:
# 236 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 6
# 237 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 238 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 239 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 51, 22
# 240 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone6_2:
# 234 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone6_1


Zone0C_EventScript_WarpZone7::
# 244 "data/maps/Zone0C/scripts.pory"
	lockall
# 245 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone7_2
Zone0C_EventScript_WarpZone7_1:
# 248 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 7
# 249 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 250 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 251 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 10, 33
# 252 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone7_2:
# 246 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone7_1


Zone0C_EventScript_WarpZone8::
# 256 "data/maps/Zone0C/scripts.pory"
	lockall
# 257 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone8_2
Zone0C_EventScript_WarpZone8_1:
# 260 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 8
# 261 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 262 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 263 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 19, 5
# 264 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone8_2:
# 258 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone8_1


Zone0C_EventScript_WarpZone9::
# 268 "data/maps/Zone0C/scripts.pory"
	lockall
# 269 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_lt Zone0C_EventScript_WarpZone9_2
Zone0C_EventScript_WarpZone9_1:
# 272 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 9
# 273 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 274 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 275 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 18, 11
# 276 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone9_2:
# 270 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone9_1


Zone0C_EventScript_WarpZone10::
# 280 "data/maps/Zone0C/scripts.pory"
	lockall
# 281 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_lt Zone0C_EventScript_WarpZone10_2
Zone0C_EventScript_WarpZone10_1:
# 284 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 10
# 285 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 286 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 287 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 288 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone10_2:
# 282 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone10_1


Zone0C_EventScript_WarpZone11::
# 292 "data/maps/Zone0C/scripts.pory"
	lockall
# 293 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_lt Zone0C_EventScript_WarpZone11_2
Zone0C_EventScript_WarpZone11_1:
# 296 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 11
# 297 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 298 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 299 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 300 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone11_2:
# 294 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone11_1


Zone0C_EventScript_WarpZone12::
# 304 "data/maps/Zone0C/scripts.pory"
	lockall
# 305 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_lt Zone0C_EventScript_WarpZone12_2
Zone0C_EventScript_WarpZone12_1:
# 308 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 12
# 309 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 310 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 311 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 312 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone12_2:
# 306 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone12_1


Zone0C_EventScript_WarpZone13::
# 316 "data/maps/Zone0C/scripts.pory"
	lockall
# 317 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone13_2
Zone0C_EventScript_WarpZone13_1:
# 320 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 13
# 321 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 322 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 13
# 323 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 324 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone13_2:
# 318 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone13_1


Zone0C_EventScript_WarpZone14::
# 328 "data/maps/Zone0C/scripts.pory"
	lockall
# 329 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone14_2
Zone0C_EventScript_WarpZone14_1:
# 332 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 14
# 333 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 334 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 14
# 335 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 336 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone14_2:
# 330 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone14_1


Zone0C_EventScript_WarpZone15::
# 340 "data/maps/Zone0C/scripts.pory"
	lockall
# 341 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_lt Zone0C_EventScript_WarpZone15_2
Zone0C_EventScript_WarpZone15_1:
# 344 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 15
# 345 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 346 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 15
# 347 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 348 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone15_2:
# 342 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone15_1


Zone0C_EventScript_WarpZone16::
# 352 "data/maps/Zone0C/scripts.pory"
	lockall
# 353 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_lt Zone0C_EventScript_WarpZone16_2
Zone0C_EventScript_WarpZone16_1:
# 356 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 16
# 357 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 358 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 16
# 359 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 360 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone16_2:
# 354 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone16_1


Zone0C_EventScript_WarpZone17::
# 364 "data/maps/Zone0C/scripts.pory"
	lockall
# 365 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_lt Zone0C_EventScript_WarpZone17_2
Zone0C_EventScript_WarpZone17_1:
# 368 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 17
# 369 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 370 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 17
# 371 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 40
# 372 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone17_2:
# 366 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone17_1


Zone0C_EventScript_WarpZone18::
# 376 "data/maps/Zone0C/scripts.pory"
	lockall
# 377 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone18_2
Zone0C_EventScript_WarpZone18_1:
# 380 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 18
# 381 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 382 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 18
# 383 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 384 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone18_2:
# 378 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone18_1


Zone0C_EventScript_WarpZone19::
# 388 "data/maps/Zone0C/scripts.pory"
	lockall
# 389 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone19_2
Zone0C_EventScript_WarpZone19_1:
# 392 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 19
# 393 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 394 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 19
# 395 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 396 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone19_2:
# 390 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone19_1


Zone0C_EventScript_WarpZone20::
# 400 "data/maps/Zone0C/scripts.pory"
	lockall
# 401 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_lt Zone0C_EventScript_WarpZone20_2
Zone0C_EventScript_WarpZone20_1:
# 404 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 20
# 405 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 406 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 20
# 407 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 32, 76
# 408 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone20_2:
# 402 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone20_1


Zone0C_EventScript_WarpZone21::
# 412 "data/maps/Zone0C/scripts.pory"
	lockall
# 413 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_lt Zone0C_EventScript_WarpZone21_2
Zone0C_EventScript_WarpZone21_1:
# 416 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 21
# 417 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 418 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 21
# 419 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE21A, 255, 38, 100
# 420 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone21_2:
# 414 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone21_1


Zone0C_EventScript_WarpZone22::
# 424 "data/maps/Zone0C/scripts.pory"
	lockall
# 425 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_lt Zone0C_EventScript_WarpZone22_2
Zone0C_EventScript_WarpZone22_1:
# 428 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 22
# 429 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 430 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 22
# 431 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE22A, 255, 9, 50
# 432 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone22_2:
# 426 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone22_1


Zone0C_EventScript_WarpZone23::
# 436 "data/maps/Zone0C/scripts.pory"
	lockall
# 437 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_lt Zone0C_EventScript_WarpZone23_2
Zone0C_EventScript_WarpZone23_1:
# 440 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 23
# 441 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 442 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 23
# 443 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE23A, 255, 9, 1
# 444 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone23_2:
# 438 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone23_1


Zone0C_EventScript_WarpZone24::
# 448 "data/maps/Zone0C/scripts.pory"
	lockall
# 449 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_lt Zone0C_EventScript_WarpZone24_2
Zone0C_EventScript_WarpZone24_1:
# 452 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 24
# 453 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 454 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 24
# 455 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE24A, 255, 31, 23
# 456 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone24_2:
# 450 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone24_1


Zone0C_EventScript_WarpZone25::
# 460 "data/maps/Zone0C/scripts.pory"
	lockall
# 461 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_lt Zone0C_EventScript_WarpZone25_2
Zone0C_EventScript_WarpZone25_1:
# 464 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 25
# 465 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 466 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 25
# 467 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE25A, 255, 10, 13
# 468 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone25_2:
# 462 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone25_1


Zone0C_EventScript_WarpZone26::
# 472 "data/maps/Zone0C/scripts.pory"
	lockall
# 473 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_lt Zone0C_EventScript_WarpZone26_2
Zone0C_EventScript_WarpZone26_1:
# 476 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 26
# 477 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 478 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 26
# 479 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 13, 29
# 480 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone26_2:
# 474 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone26_1


Zone0C_EventScript_WarpZone27::
# 484 "data/maps/Zone0C/scripts.pory"
	lockall
# 485 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_lt Zone0C_EventScript_WarpZone27_2
Zone0C_EventScript_WarpZone27_1:
# 488 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 27
# 489 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 490 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 27
# 491 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 5, 34
# 492 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone27_2:
# 486 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone27_1


Zone0C_EventScript_WarpZone28::
# 496 "data/maps/Zone0C/scripts.pory"
	lockall
# 497 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_lt Zone0C_EventScript_WarpZone28_2
Zone0C_EventScript_WarpZone28_1:
# 500 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 28
# 501 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 502 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 28
# 503 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 33, 9
# 504 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone28_2:
# 498 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone28_1


Zone0C_EventScript_WarpZone29::
# 508 "data/maps/Zone0C/scripts.pory"
	lockall
# 509 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_lt Zone0C_EventScript_WarpZone29_2
Zone0C_EventScript_WarpZone29_1:
# 512 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 29
# 513 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 514 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 29
# 515 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 23, 13
# 516 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone29_2:
# 510 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone29_1


Zone0C_EventScript_WarpZone30::
# 520 "data/maps/Zone0C/scripts.pory"
	lockall
# 521 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 31
	goto_if_lt Zone0C_EventScript_WarpZone30_2
Zone0C_EventScript_WarpZone30_1:
# 524 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 30
# 525 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 526 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 30
# 527 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 528 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone30_2:
# 522 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone30_1


Zone0C_EventScript_WarpZone31::
# 532 "data/maps/Zone0C/scripts.pory"
	lockall
# 533 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 32
	goto_if_lt Zone0C_EventScript_WarpZone31_2
Zone0C_EventScript_WarpZone31_1:
# 536 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 31
# 537 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 538 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 31
# 539 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 540 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone31_2:
# 534 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone31_1


Zone0C_EventScript_WarpZone32::
# 544 "data/maps/Zone0C/scripts.pory"
	lockall
# 545 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 33
	goto_if_lt Zone0C_EventScript_WarpZone32_2
Zone0C_EventScript_WarpZone32_1:
# 548 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 32
# 549 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 550 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 32
# 551 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 552 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone32_2:
# 546 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone32_1


Zone0C_EventScript_WarpZone33::
# 556 "data/maps/Zone0C/scripts.pory"
	lockall
# 557 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 34
	goto_if_lt Zone0C_EventScript_WarpZone33_2
Zone0C_EventScript_WarpZone33_1:
# 560 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 33
# 561 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 562 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 33
# 563 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 564 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone33_2:
# 558 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone33_1


Zone0C_EventScript_WarpZone34::
# 568 "data/maps/Zone0C/scripts.pory"
	lockall
# 569 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 35
	goto_if_lt Zone0C_EventScript_WarpZone34_2
Zone0C_EventScript_WarpZone34_1:
# 572 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 34
# 573 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 574 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 34
# 575 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 576 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone34_2:
# 570 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone34_1


Zone0C_EventScript_WarpZone35::
# 580 "data/maps/Zone0C/scripts.pory"
	lockall
# 581 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 36
	goto_if_lt Zone0C_EventScript_WarpZone35_2
Zone0C_EventScript_WarpZone35_1:
# 584 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 35
# 585 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 586 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 35
# 587 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 588 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone35_2:
# 582 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone35_1


Zone0C_EventScript_WarpZone36::
# 592 "data/maps/Zone0C/scripts.pory"
	lockall
# 593 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 37
	goto_if_lt Zone0C_EventScript_WarpZone36_2
Zone0C_EventScript_WarpZone36_1:
# 596 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 36
# 597 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 598 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 36
# 599 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 600 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone36_2:
# 594 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone36_1


Zone0C_EventScript_WarpZone37::
# 604 "data/maps/Zone0C/scripts.pory"
	lockall
# 605 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 38
	goto_if_lt Zone0C_EventScript_WarpZone37_2
Zone0C_EventScript_WarpZone37_1:
# 608 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 37
# 609 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 610 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 37
# 611 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 612 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone37_2:
# 606 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone37_1


Zone0C_EventScript_WarpZone38::
# 616 "data/maps/Zone0C/scripts.pory"
	lockall
# 617 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 39
	goto_if_lt Zone0C_EventScript_WarpZone38_2
Zone0C_EventScript_WarpZone38_1:
# 620 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 38
# 621 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 622 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 38
# 623 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 624 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone38_2:
# 618 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone38_1


Zone0C_EventScript_WarpZone39::
# 628 "data/maps/Zone0C/scripts.pory"
	lockall
# 629 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 40
	goto_if_lt Zone0C_EventScript_WarpZone39_2
Zone0C_EventScript_WarpZone39_1:
# 632 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 39
# 633 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 634 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 39
# 635 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 636 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone39_2:
# 630 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone39_1


Zone0C_EventScript_WarpZone40::
# 640 "data/maps/Zone0C/scripts.pory"
	lockall
# 641 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 41
	goto_if_lt Zone0C_EventScript_WarpZone40_2
Zone0C_EventScript_WarpZone40_1:
# 644 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 40
# 645 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 646 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 40
# 647 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 648 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone40_2:
# 642 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone40_1


Zone0C_EventScript_WarpZone41::
# 652 "data/maps/Zone0C/scripts.pory"
	lockall
# 653 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 42
	goto_if_lt Zone0C_EventScript_WarpZone41_2
Zone0C_EventScript_WarpZone41_1:
# 656 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 41
# 657 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 658 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 41
# 659 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 660 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone41_2:
# 654 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone41_1


Zone0C_EventScript_WarpZone42::
# 664 "data/maps/Zone0C/scripts.pory"
	lockall
# 665 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 43
	goto_if_lt Zone0C_EventScript_WarpZone42_2
Zone0C_EventScript_WarpZone42_1:
# 668 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 42
# 669 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 670 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 42
# 671 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 672 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone42_2:
# 666 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone42_1


Zone0C_EventScript_WarpZone43::
# 676 "data/maps/Zone0C/scripts.pory"
	lockall
# 677 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 44
	goto_if_lt Zone0C_EventScript_WarpZone43_2
Zone0C_EventScript_WarpZone43_1:
# 680 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 43
# 681 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 682 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 43
# 683 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 684 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone43_2:
# 678 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone43_1


Zone0C_EventScript_WarpZone44::
# 688 "data/maps/Zone0C/scripts.pory"
	lockall
# 689 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 45
	goto_if_lt Zone0C_EventScript_WarpZone44_2
Zone0C_EventScript_WarpZone44_1:
# 692 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 44
# 693 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 694 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 44
# 695 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 696 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone44_2:
# 690 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone44_1


Zone0C_EventScript_WarpZone45::
# 700 "data/maps/Zone0C/scripts.pory"
	lockall
# 701 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 46
	goto_if_lt Zone0C_EventScript_WarpZone45_2
Zone0C_EventScript_WarpZone45_1:
# 704 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 45
# 705 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 706 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 45
# 707 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 708 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone45_2:
# 702 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone45_1


Zone0C_EventScript_WarpZone46::
# 712 "data/maps/Zone0C/scripts.pory"
	lockall
# 713 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 47
	goto_if_lt Zone0C_EventScript_WarpZone46_2
Zone0C_EventScript_WarpZone46_1:
# 716 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 46
# 717 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 718 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 46
# 719 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 720 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone46_2:
# 714 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone46_1


Zone0C_EventScript_WarpZone47::
# 724 "data/maps/Zone0C/scripts.pory"
	lockall
# 725 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 48
	goto_if_lt Zone0C_EventScript_WarpZone47_2
Zone0C_EventScript_WarpZone47_1:
# 728 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 47
# 729 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 730 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 47
# 731 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 732 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone47_2:
# 726 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone47_1


Zone0C_EventScript_WarpZone48::
# 736 "data/maps/Zone0C/scripts.pory"
	lockall
# 737 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 49
	goto_if_lt Zone0C_EventScript_WarpZone48_2
Zone0C_EventScript_WarpZone48_1:
# 740 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 48
# 741 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 742 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 48
# 743 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 744 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone48_2:
# 738 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone48_1


Zone0C_EventScript_WarpZone49::
# 748 "data/maps/Zone0C/scripts.pory"
	lockall
# 749 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 50
	goto_if_lt Zone0C_EventScript_WarpZone49_2
Zone0C_EventScript_WarpZone49_1:
# 752 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 49
# 753 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 754 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 49
# 755 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 756 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone49_2:
# 750 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone49_1


Zone0C_EventScript_WarpZone50::
# 760 "data/maps/Zone0C/scripts.pory"
	lockall
# 761 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 51
	goto_if_lt Zone0C_EventScript_WarpZone50_2
Zone0C_EventScript_WarpZone50_1:
# 764 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 50
# 765 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 766 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 50
# 767 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 768 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone50_2:
# 762 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone50_1


Zone0C_EventScript_WarpZoneB1::
# 772 "data/maps/Zone0C/scripts.pory"
	lockall
# 773 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_B1_STATE, 2
	goto_if_lt Zone0C_EventScript_WarpZoneB1_2
Zone0C_EventScript_WarpZoneB1_1:
# 776 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 51
# 777 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE_B1, 255, 11, 0
	end

Zone0C_EventScript_WarpZoneB1_2:
# 774 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZoneB1_1


# 781 "data/maps/Zone0C/scripts.pory"
Zone0C_Movement_PostIntro:
# 782 "data/maps/Zone0C/scripts.pory"
	walk_up
# 783 "data/maps/Zone0C/scripts.pory"
	walk_up
# 784 "data/maps/Zone0C/scripts.pory"
	walk_up
# 785 "data/maps/Zone0C/scripts.pory"
	face_down
	step_end

Zone0C_EventScript_Intro_Text_0:
# 14 "data/maps/Zone0C/scripts.pory"
	.string "A test subject! Perfect!$"

Zone0C_EventScript_VerifyDestination_Text_0:
# 155 "data/maps/Zone0C/scripts.pory"
	.string "Are you sure you want to go to {COLOR RED}Zone\n"
	.string "{STR_VAR_1}{COLOR DARK_GRAY}?$"

Zone0C_EventScript_VerifyDestination_Text_1:
# 157 "data/maps/Zone0C/scripts.pory"
	.string "Decided not to warp.$"

Zone0C_EventScript_DenyWarp_Text_0:
# 167 "data/maps/Zone0C/scripts.pory"
	.string "The warp doesn't seem to work…$"

Zone0C_Text_Intro::
# 28 "data/maps/Zone0C/scripts.pory"
	.string "Welcome to the Teleport Institute, or\n"
	.string "TPI for short.\p"
	.string "There are warps that will bring you to\n"
	.string "any area you've already visited.\p"
	.string "I'm sure you'll get the hang of it.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0C_Text_Explain::
# 42 "data/maps/Zone0C/scripts.pory"
	.string "The warps are hardwired to only\n"
	.string "teleport people to places they have\l"
	.string "been before.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"
