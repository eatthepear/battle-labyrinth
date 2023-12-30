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
	setvar VAR_ZONE_9_STATE, 0
# 276 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 18, 11
# 277 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone9_2:
# 270 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone9_1


Zone0C_EventScript_WarpZone10::
# 281 "data/maps/Zone0C/scripts.pory"
	lockall
# 282 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_lt Zone0C_EventScript_WarpZone10_2
Zone0C_EventScript_WarpZone10_1:
# 285 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 10
# 286 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 287 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 288 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 289 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone10_2:
# 283 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone10_1


Zone0C_EventScript_WarpZone11::
# 293 "data/maps/Zone0C/scripts.pory"
	lockall
# 294 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_lt Zone0C_EventScript_WarpZone11_2
Zone0C_EventScript_WarpZone11_1:
# 297 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 11
# 298 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 299 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 300 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 301 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone11_2:
# 295 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone11_1


Zone0C_EventScript_WarpZone12::
# 305 "data/maps/Zone0C/scripts.pory"
	lockall
# 306 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_lt Zone0C_EventScript_WarpZone12_2
Zone0C_EventScript_WarpZone12_1:
# 309 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 12
# 310 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 311 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 312 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 313 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone12_2:
# 307 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone12_1


Zone0C_EventScript_WarpZone13::
# 317 "data/maps/Zone0C/scripts.pory"
	lockall
# 318 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone13_2
Zone0C_EventScript_WarpZone13_1:
# 321 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 13
# 322 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 323 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 13
# 324 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 325 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone13_2:
# 319 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone13_1


Zone0C_EventScript_WarpZone14::
# 329 "data/maps/Zone0C/scripts.pory"
	lockall
# 330 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone14_2
Zone0C_EventScript_WarpZone14_1:
# 333 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 14
# 334 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 335 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 14
# 336 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 337 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone14_2:
# 331 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone14_1


Zone0C_EventScript_WarpZone15::
# 341 "data/maps/Zone0C/scripts.pory"
	lockall
# 342 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_lt Zone0C_EventScript_WarpZone15_2
Zone0C_EventScript_WarpZone15_1:
# 345 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 15
# 346 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 347 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 15
# 348 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 349 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone15_2:
# 343 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone15_1


Zone0C_EventScript_WarpZone16::
# 353 "data/maps/Zone0C/scripts.pory"
	lockall
# 354 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_lt Zone0C_EventScript_WarpZone16_2
Zone0C_EventScript_WarpZone16_1:
# 357 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 16
# 358 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 359 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 16
# 360 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 361 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone16_2:
# 355 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone16_1


Zone0C_EventScript_WarpZone17::
# 365 "data/maps/Zone0C/scripts.pory"
	lockall
# 366 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_lt Zone0C_EventScript_WarpZone17_2
Zone0C_EventScript_WarpZone17_1:
# 369 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 17
# 370 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 371 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 17
# 372 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 40
# 373 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone17_2:
# 367 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone17_1


Zone0C_EventScript_WarpZone18::
# 377 "data/maps/Zone0C/scripts.pory"
	lockall
# 378 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone18_2
Zone0C_EventScript_WarpZone18_1:
# 381 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 18
# 382 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 383 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 18
# 384 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 385 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone18_2:
# 379 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone18_1


Zone0C_EventScript_WarpZone19::
# 389 "data/maps/Zone0C/scripts.pory"
	lockall
# 390 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone19_2
Zone0C_EventScript_WarpZone19_1:
# 393 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 19
# 394 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 395 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 19
# 396 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 397 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone19_2:
# 391 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone19_1


Zone0C_EventScript_WarpZone20::
# 401 "data/maps/Zone0C/scripts.pory"
	lockall
# 402 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_lt Zone0C_EventScript_WarpZone20_2
Zone0C_EventScript_WarpZone20_1:
# 405 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 20
# 406 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 407 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 20
# 408 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 32, 76
# 409 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone20_2:
# 403 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone20_1


Zone0C_EventScript_WarpZone21::
# 413 "data/maps/Zone0C/scripts.pory"
	lockall
# 414 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_lt Zone0C_EventScript_WarpZone21_2
Zone0C_EventScript_WarpZone21_1:
# 417 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 21
# 418 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 419 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 21
# 420 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE21A, 255, 38, 100
# 421 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone21_2:
# 415 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone21_1


Zone0C_EventScript_WarpZone22::
# 425 "data/maps/Zone0C/scripts.pory"
	lockall
# 426 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_lt Zone0C_EventScript_WarpZone22_2
Zone0C_EventScript_WarpZone22_1:
# 429 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 22
# 430 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 431 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 22
# 432 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE22A, 255, 9, 50
# 433 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone22_2:
# 427 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone22_1


Zone0C_EventScript_WarpZone23::
# 437 "data/maps/Zone0C/scripts.pory"
	lockall
# 438 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_lt Zone0C_EventScript_WarpZone23_2
Zone0C_EventScript_WarpZone23_1:
# 441 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 23
# 442 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 443 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 23
# 444 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE23A, 255, 9, 1
# 445 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone23_2:
# 439 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone23_1


Zone0C_EventScript_WarpZone24::
# 449 "data/maps/Zone0C/scripts.pory"
	lockall
# 450 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_lt Zone0C_EventScript_WarpZone24_2
Zone0C_EventScript_WarpZone24_1:
# 453 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 24
# 454 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 455 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 24
# 456 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE24A, 255, 31, 23
# 457 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone24_2:
# 451 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone24_1


Zone0C_EventScript_WarpZone25::
# 461 "data/maps/Zone0C/scripts.pory"
	lockall
# 462 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_lt Zone0C_EventScript_WarpZone25_2
Zone0C_EventScript_WarpZone25_1:
# 465 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 25
# 466 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 467 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 25
# 468 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE25A, 255, 10, 13
# 469 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone25_2:
# 463 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone25_1


Zone0C_EventScript_WarpZone26::
# 473 "data/maps/Zone0C/scripts.pory"
	lockall
# 474 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_lt Zone0C_EventScript_WarpZone26_2
Zone0C_EventScript_WarpZone26_1:
# 477 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 26
# 478 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 479 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 26
# 480 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 13, 29
# 481 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone26_2:
# 475 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone26_1


Zone0C_EventScript_WarpZone27::
# 485 "data/maps/Zone0C/scripts.pory"
	lockall
# 486 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_lt Zone0C_EventScript_WarpZone27_2
Zone0C_EventScript_WarpZone27_1:
# 489 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 27
# 490 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 491 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 27
# 492 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 5, 34
# 493 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone27_2:
# 487 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone27_1


Zone0C_EventScript_WarpZone28::
# 497 "data/maps/Zone0C/scripts.pory"
	lockall
# 498 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_lt Zone0C_EventScript_WarpZone28_2
Zone0C_EventScript_WarpZone28_1:
# 501 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 28
# 502 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 503 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 28
# 504 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 33, 9
# 505 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone28_2:
# 499 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone28_1


Zone0C_EventScript_WarpZone29::
# 509 "data/maps/Zone0C/scripts.pory"
	lockall
# 510 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_lt Zone0C_EventScript_WarpZone29_2
Zone0C_EventScript_WarpZone29_1:
# 513 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 29
# 514 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 515 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 29
# 516 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 23, 13
# 517 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone29_2:
# 511 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone29_1


Zone0C_EventScript_WarpZone30::
# 521 "data/maps/Zone0C/scripts.pory"
	lockall
# 522 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 31
	goto_if_lt Zone0C_EventScript_WarpZone30_2
Zone0C_EventScript_WarpZone30_1:
# 525 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 30
# 526 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 527 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 30
# 528 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 529 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone30_2:
# 523 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone30_1


Zone0C_EventScript_WarpZone31::
# 533 "data/maps/Zone0C/scripts.pory"
	lockall
# 534 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 32
	goto_if_lt Zone0C_EventScript_WarpZone31_2
Zone0C_EventScript_WarpZone31_1:
# 537 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 31
# 538 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 539 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 31
# 540 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 541 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone31_2:
# 535 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone31_1


Zone0C_EventScript_WarpZone32::
# 545 "data/maps/Zone0C/scripts.pory"
	lockall
# 546 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 33
	goto_if_lt Zone0C_EventScript_WarpZone32_2
Zone0C_EventScript_WarpZone32_1:
# 549 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 32
# 550 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 551 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 32
# 552 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 553 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone32_2:
# 547 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone32_1


Zone0C_EventScript_WarpZone33::
# 557 "data/maps/Zone0C/scripts.pory"
	lockall
# 558 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 34
	goto_if_lt Zone0C_EventScript_WarpZone33_2
Zone0C_EventScript_WarpZone33_1:
# 561 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 33
# 562 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 563 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 33
# 564 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 565 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone33_2:
# 559 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone33_1


Zone0C_EventScript_WarpZone34::
# 569 "data/maps/Zone0C/scripts.pory"
	lockall
# 570 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 35
	goto_if_lt Zone0C_EventScript_WarpZone34_2
Zone0C_EventScript_WarpZone34_1:
# 573 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 34
# 574 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 575 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 34
# 576 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 577 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone34_2:
# 571 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone34_1


Zone0C_EventScript_WarpZone35::
# 581 "data/maps/Zone0C/scripts.pory"
	lockall
# 582 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 36
	goto_if_lt Zone0C_EventScript_WarpZone35_2
Zone0C_EventScript_WarpZone35_1:
# 585 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 35
# 586 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 587 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 35
# 588 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 589 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone35_2:
# 583 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone35_1


Zone0C_EventScript_WarpZone36::
# 593 "data/maps/Zone0C/scripts.pory"
	lockall
# 594 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 37
	goto_if_lt Zone0C_EventScript_WarpZone36_2
Zone0C_EventScript_WarpZone36_1:
# 597 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 36
# 598 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 599 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 36
# 600 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 601 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone36_2:
# 595 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone36_1


Zone0C_EventScript_WarpZone37::
# 605 "data/maps/Zone0C/scripts.pory"
	lockall
# 606 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 38
	goto_if_lt Zone0C_EventScript_WarpZone37_2
Zone0C_EventScript_WarpZone37_1:
# 609 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 37
# 610 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 611 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 37
# 612 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 613 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone37_2:
# 607 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone37_1


Zone0C_EventScript_WarpZone38::
# 617 "data/maps/Zone0C/scripts.pory"
	lockall
# 618 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 39
	goto_if_lt Zone0C_EventScript_WarpZone38_2
Zone0C_EventScript_WarpZone38_1:
# 621 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 38
# 622 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 623 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 38
# 624 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 625 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone38_2:
# 619 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone38_1


Zone0C_EventScript_WarpZone39::
# 629 "data/maps/Zone0C/scripts.pory"
	lockall
# 630 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 40
	goto_if_lt Zone0C_EventScript_WarpZone39_2
Zone0C_EventScript_WarpZone39_1:
# 633 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 39
# 634 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 635 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 39
# 636 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 637 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone39_2:
# 631 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone39_1


Zone0C_EventScript_WarpZone40::
# 641 "data/maps/Zone0C/scripts.pory"
	lockall
# 642 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 41
	goto_if_lt Zone0C_EventScript_WarpZone40_2
Zone0C_EventScript_WarpZone40_1:
# 645 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 40
# 646 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 647 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 40
# 648 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 649 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone40_2:
# 643 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone40_1


Zone0C_EventScript_WarpZone41::
# 653 "data/maps/Zone0C/scripts.pory"
	lockall
# 654 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 42
	goto_if_lt Zone0C_EventScript_WarpZone41_2
Zone0C_EventScript_WarpZone41_1:
# 657 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 41
# 658 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 659 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 41
# 660 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 661 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone41_2:
# 655 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone41_1


Zone0C_EventScript_WarpZone42::
# 665 "data/maps/Zone0C/scripts.pory"
	lockall
# 666 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 43
	goto_if_lt Zone0C_EventScript_WarpZone42_2
Zone0C_EventScript_WarpZone42_1:
# 669 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 42
# 670 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 671 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 42
# 672 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 673 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone42_2:
# 667 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone42_1


Zone0C_EventScript_WarpZone43::
# 677 "data/maps/Zone0C/scripts.pory"
	lockall
# 678 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 44
	goto_if_lt Zone0C_EventScript_WarpZone43_2
Zone0C_EventScript_WarpZone43_1:
# 681 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 43
# 682 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 683 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 43
# 684 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 685 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone43_2:
# 679 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone43_1


Zone0C_EventScript_WarpZone44::
# 689 "data/maps/Zone0C/scripts.pory"
	lockall
# 690 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 45
	goto_if_lt Zone0C_EventScript_WarpZone44_2
Zone0C_EventScript_WarpZone44_1:
# 693 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 44
# 694 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 695 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 44
# 696 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 697 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone44_2:
# 691 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone44_1


Zone0C_EventScript_WarpZone45::
# 701 "data/maps/Zone0C/scripts.pory"
	lockall
# 702 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 46
	goto_if_lt Zone0C_EventScript_WarpZone45_2
Zone0C_EventScript_WarpZone45_1:
# 705 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 45
# 706 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 707 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 45
# 708 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 709 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone45_2:
# 703 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone45_1


Zone0C_EventScript_WarpZone46::
# 713 "data/maps/Zone0C/scripts.pory"
	lockall
# 714 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 47
	goto_if_lt Zone0C_EventScript_WarpZone46_2
Zone0C_EventScript_WarpZone46_1:
# 717 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 46
# 718 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 719 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 46
# 720 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 721 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone46_2:
# 715 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone46_1


Zone0C_EventScript_WarpZone47::
# 725 "data/maps/Zone0C/scripts.pory"
	lockall
# 726 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 48
	goto_if_lt Zone0C_EventScript_WarpZone47_2
Zone0C_EventScript_WarpZone47_1:
# 729 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 47
# 730 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 731 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 47
# 732 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 733 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone47_2:
# 727 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone47_1


Zone0C_EventScript_WarpZone48::
# 737 "data/maps/Zone0C/scripts.pory"
	lockall
# 738 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 49
	goto_if_lt Zone0C_EventScript_WarpZone48_2
Zone0C_EventScript_WarpZone48_1:
# 741 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 48
# 742 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 743 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 48
# 744 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 745 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone48_2:
# 739 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone48_1


Zone0C_EventScript_WarpZone49::
# 749 "data/maps/Zone0C/scripts.pory"
	lockall
# 750 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 50
	goto_if_lt Zone0C_EventScript_WarpZone49_2
Zone0C_EventScript_WarpZone49_1:
# 753 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 49
# 754 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 755 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 49
# 756 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 757 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone49_2:
# 751 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone49_1


Zone0C_EventScript_WarpZone50::
# 761 "data/maps/Zone0C/scripts.pory"
	lockall
# 762 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 51
	goto_if_lt Zone0C_EventScript_WarpZone50_2
Zone0C_EventScript_WarpZone50_1:
# 765 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 50
# 766 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 767 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 50
# 768 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 769 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone50_2:
# 763 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone50_1


Zone0C_EventScript_WarpZoneB1::
# 773 "data/maps/Zone0C/scripts.pory"
	lockall
# 774 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_B1_STATE, 2
	goto_if_lt Zone0C_EventScript_WarpZoneB1_2
Zone0C_EventScript_WarpZoneB1_1:
# 777 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 51
# 778 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE_B1, 255, 11, 0
	end

Zone0C_EventScript_WarpZoneB1_2:
# 775 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZoneB1_1


# 782 "data/maps/Zone0C/scripts.pory"
Zone0C_Movement_PostIntro:
# 783 "data/maps/Zone0C/scripts.pory"
	walk_up
# 784 "data/maps/Zone0C/scripts.pory"
	walk_up
# 785 "data/maps/Zone0C/scripts.pory"
	walk_up
# 786 "data/maps/Zone0C/scripts.pory"
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
