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
	applymovement 1, Common_Movement_WalkDown3
# 16 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_Text_Intro
# 18 "data/maps/Zone0C/scripts.pory"
	applymovement 1, Zone0C_Movement_PostIntro
# 19 "data/maps/Zone0C/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_0_STATE, 3
# 21 "data/maps/Zone0C/scripts.pory"
	releaseall
	return


Zone0C_EventScript_Scientist::
# 32 "data/maps/Zone0C/scripts.pory"
	lock
# 33 "data/maps/Zone0C/scripts.pory"
	faceplayer
# 34 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_Text_Explain
# 35 "data/maps/Zone0C/scripts.pory"
	release
	return


Zone0C_EventScript_WarpBack::
# 76 "data/maps/Zone0C/scripts.pory"
	lockall
# 77 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_0_STATE, 3
	goto_if_eq Zone0C_EventScript_WarpBack_2
Zone0C_EventScript_WarpBack_1:
# 80 "data/maps/Zone0C/scripts.pory"
	switch VAR_ZONE
# 81 "data/maps/Zone0C/scripts.pory"
	case 1, Zone0C_EventScript_WarpBack_5
# 84 "data/maps/Zone0C/scripts.pory"
	case 2, Zone0C_EventScript_WarpBack_6
# 87 "data/maps/Zone0C/scripts.pory"
	case 3, Zone0C_EventScript_WarpBack_7
# 90 "data/maps/Zone0C/scripts.pory"
	case 4, Zone0C_EventScript_WarpBack_8
# 93 "data/maps/Zone0C/scripts.pory"
	case 5, Zone0C_EventScript_WarpBack_9
# 96 "data/maps/Zone0C/scripts.pory"
	case 6, Zone0C_EventScript_WarpBack_10
# 99 "data/maps/Zone0C/scripts.pory"
	case 7, Zone0C_EventScript_WarpBack_11
# 102 "data/maps/Zone0C/scripts.pory"
	case 9, Zone0C_EventScript_WarpBack_12
# 105 "data/maps/Zone0C/scripts.pory"
	case 10, Zone0C_EventScript_WarpBack_13
# 108 "data/maps/Zone0C/scripts.pory"
	case 11, Zone0C_EventScript_WarpBack_14
# 111 "data/maps/Zone0C/scripts.pory"
	case 12, Zone0C_EventScript_WarpBack_15
# 114 "data/maps/Zone0C/scripts.pory"
	case 13, Zone0C_EventScript_WarpBack_16
# 117 "data/maps/Zone0C/scripts.pory"
	case 15, Zone0C_EventScript_WarpBack_17
# 120 "data/maps/Zone0C/scripts.pory"
	case 16, Zone0C_EventScript_WarpBack_18
# 123 "data/maps/Zone0C/scripts.pory"
	case 17, Zone0C_EventScript_WarpBack_19
# 126 "data/maps/Zone0C/scripts.pory"
	case 18, Zone0C_EventScript_WarpBack_20
# 129 "data/maps/Zone0C/scripts.pory"
	case 20, Zone0C_EventScript_WarpBack_21
# 132 "data/maps/Zone0C/scripts.pory"
	case 21, Zone0C_EventScript_WarpBack_22
# 135 "data/maps/Zone0C/scripts.pory"
	case 22, Zone0C_EventScript_WarpBack_23
# 138 "data/maps/Zone0C/scripts.pory"
	case 23, Zone0C_EventScript_WarpBack_24
# 141 "data/maps/Zone0C/scripts.pory"
	case 24, Zone0C_EventScript_WarpBack_25
# 144 "data/maps/Zone0C/scripts.pory"
	case 26, Zone0C_EventScript_WarpBack_26
	return

Zone0C_EventScript_WarpBack_2:
# 78 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_0_STATE, 4
	goto Zone0C_EventScript_WarpBack_1

Zone0C_EventScript_WarpBack_5:
# 82 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE0SHOPS, 255, 38, 1
# 83 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_6:
# 85 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE1SHOPS, 255, 38, 1
# 86 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_7:
# 88 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE2SHOPS, 255, 38, 1
# 89 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_8:
# 91 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE3SHOPS, 255, 38, 1
# 92 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_9:
# 94 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE4SHOPS, 255, 38, 1
# 95 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_10:
# 97 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE5SHOPS, 255, 38, 1
# 98 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_11:
# 100 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE6SHOPS, 255, 38, 1
# 101 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_12:
# 103 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE8SHOPS, 255, 38, 1
# 104 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_13:
# 106 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE9SHOPS, 255, 38, 1
# 107 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_14:
# 109 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE10SHOPS, 255, 38, 1
# 110 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_15:
# 112 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE11SHOPS, 255, 38, 1
# 113 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_16:
# 115 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE12SHOPS, 255, 38, 1
# 116 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_17:
# 118 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE14SHOPS, 255, 38, 1
# 119 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_18:
# 121 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE15SHOPS, 255, 38, 1
# 122 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_19:
# 124 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE16SHOPS, 255, 38, 1
# 125 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_20:
# 127 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE17SHOPS, 255, 38, 1
# 128 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_21:
# 130 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE20SHOPS, 255, 38, 1
# 131 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_22:
# 133 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE20SHOPS, 255, 38, 1
# 134 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_23:
# 136 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE21SHOPS, 255, 38, 1
# 137 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_24:
# 139 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE22SHOPS, 255, 38, 1
# 140 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_25:
# 142 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE23SHOPS, 255, 38, 1
# 143 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_26:
# 145 "data/maps/Zone0C/scripts.pory"
	warp MAP_ZONE25SHOPS, 255, 38, 1
# 146 "data/maps/Zone0C/scripts.pory"
	waitstate
	return


Zone0C_EventScript_VerifyDestination::
# 151 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_0, MSGBOX_YESNO
# 152 "data/maps/Zone0C/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0C_EventScript_VerifyDestination_2
# 157 "data/maps/Zone0C/scripts.pory"
	setflag FLAG_IS_REVISITING_ZONE
	return

Zone0C_EventScript_VerifyDestination_2:
# 153 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_1
# 154 "data/maps/Zone0C/scripts.pory"
	releaseall
	end


Zone0C_EventScript_DenyWarp::
# 162 "data/maps/Zone0C/scripts.pory"
	lockall
# 163 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_DenyWarp_Text_0
# 164 "data/maps/Zone0C/scripts.pory"
	releaseall
	return


Zone0C_EventScript_WarpZone1::
# 168 "data/maps/Zone0C/scripts.pory"
	lockall
# 169 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_lt Zone0C_EventScript_WarpZone1_2
Zone0C_EventScript_WarpZone1_1:
# 172 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 1
# 173 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 174 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 175 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE1A, 255, 16, 28
# 176 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone1_2:
# 170 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone1_1


Zone0C_EventScript_WarpZone2::
# 180 "data/maps/Zone0C/scripts.pory"
	lockall
# 181 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_lt Zone0C_EventScript_WarpZone2_2
Zone0C_EventScript_WarpZone2_1:
# 184 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 2
# 185 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 186 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 187 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE2A, 255, 4, 3
# 188 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone2_2:
# 182 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone2_1


Zone0C_EventScript_WarpZone3::
# 192 "data/maps/Zone0C/scripts.pory"
	lockall
# 193 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_lt Zone0C_EventScript_WarpZone3_2
Zone0C_EventScript_WarpZone3_1:
# 196 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 3
# 197 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 198 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 199 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE3A, 255, 38, 25
# 200 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone3_2:
# 194 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone3_1


Zone0C_EventScript_WarpZone4::
# 204 "data/maps/Zone0C/scripts.pory"
	lockall
# 205 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_lt Zone0C_EventScript_WarpZone4_2
Zone0C_EventScript_WarpZone4_1:
# 208 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 4
# 209 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 210 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 211 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE4A, 255, 4, 3
# 212 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone4_2:
# 206 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone4_1


Zone0C_EventScript_WarpZone5::
# 216 "data/maps/Zone0C/scripts.pory"
	lockall
# 217 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_lt Zone0C_EventScript_WarpZone5_2
Zone0C_EventScript_WarpZone5_1:
# 220 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 5
# 221 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 222 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 223 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE5A, 255, 43, 31
# 224 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone5_2:
# 218 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone5_1


Zone0C_EventScript_WarpZone6::
# 228 "data/maps/Zone0C/scripts.pory"
	lockall
# 229 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_lt Zone0C_EventScript_WarpZone6_2
Zone0C_EventScript_WarpZone6_1:
# 232 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 6
# 233 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 234 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 235 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 51, 22
# 236 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone6_2:
# 230 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone6_1


Zone0C_EventScript_WarpZone7::
# 240 "data/maps/Zone0C/scripts.pory"
	lockall
# 241 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone7_2
Zone0C_EventScript_WarpZone7_1:
# 244 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 7
# 245 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 246 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 247 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 10, 33
# 248 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone7_2:
# 242 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone7_1


Zone0C_EventScript_WarpZone8::
# 252 "data/maps/Zone0C/scripts.pory"
	lockall
# 253 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone8_2
Zone0C_EventScript_WarpZone8_1:
# 256 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 8
# 257 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 258 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 259 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 19, 5
# 260 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone8_2:
# 254 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone8_1


Zone0C_EventScript_WarpZone9::
# 264 "data/maps/Zone0C/scripts.pory"
	lockall
# 265 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_lt Zone0C_EventScript_WarpZone9_2
Zone0C_EventScript_WarpZone9_1:
# 268 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 9
# 269 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 270 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 271 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
# 272 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 18, 11
# 273 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone9_2:
# 266 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone9_1


Zone0C_EventScript_WarpZone10::
# 277 "data/maps/Zone0C/scripts.pory"
	lockall
# 278 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_lt Zone0C_EventScript_WarpZone10_2
Zone0C_EventScript_WarpZone10_1:
# 281 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 10
# 282 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 283 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 284 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 285 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone10_2:
# 279 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone10_1


Zone0C_EventScript_WarpZone11::
# 289 "data/maps/Zone0C/scripts.pory"
	lockall
# 290 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_lt Zone0C_EventScript_WarpZone11_2
Zone0C_EventScript_WarpZone11_1:
# 293 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 11
# 294 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 295 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 296 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 297 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone11_2:
# 291 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone11_1


Zone0C_EventScript_WarpZone12::
# 301 "data/maps/Zone0C/scripts.pory"
	lockall
# 302 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_lt Zone0C_EventScript_WarpZone12_2
Zone0C_EventScript_WarpZone12_1:
# 305 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 12
# 306 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 307 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 308 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 309 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone12_2:
# 303 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone12_1


Zone0C_EventScript_WarpZone13::
# 313 "data/maps/Zone0C/scripts.pory"
	lockall
# 314 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone13_2
Zone0C_EventScript_WarpZone13_1:
# 317 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 13
# 318 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 319 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 13
# 320 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 321 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone13_2:
# 315 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone13_1


Zone0C_EventScript_WarpZone14::
# 325 "data/maps/Zone0C/scripts.pory"
	lockall
# 326 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone14_2
Zone0C_EventScript_WarpZone14_1:
# 329 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 14
# 330 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 331 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 14
# 332 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 333 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone14_2:
# 327 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone14_1


Zone0C_EventScript_WarpZone15::
# 337 "data/maps/Zone0C/scripts.pory"
	lockall
# 338 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_lt Zone0C_EventScript_WarpZone15_2
Zone0C_EventScript_WarpZone15_1:
# 341 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 15
# 342 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 343 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 15
# 344 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 345 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone15_2:
# 339 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone15_1


Zone0C_EventScript_WarpZone16::
# 349 "data/maps/Zone0C/scripts.pory"
	lockall
# 350 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_lt Zone0C_EventScript_WarpZone16_2
Zone0C_EventScript_WarpZone16_1:
# 353 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 16
# 354 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 355 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 16
# 356 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 357 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone16_2:
# 351 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone16_1


Zone0C_EventScript_WarpZone17::
# 361 "data/maps/Zone0C/scripts.pory"
	lockall
# 362 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_lt Zone0C_EventScript_WarpZone17_2
Zone0C_EventScript_WarpZone17_1:
# 365 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 17
# 366 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 367 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 17
# 368 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 40
# 369 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone17_2:
# 363 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone17_1


Zone0C_EventScript_WarpZone18::
# 373 "data/maps/Zone0C/scripts.pory"
	lockall
# 374 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone18_2
Zone0C_EventScript_WarpZone18_1:
# 377 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 18
# 378 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 379 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 18
# 380 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 381 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone18_2:
# 375 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone18_1


Zone0C_EventScript_WarpZone19::
# 385 "data/maps/Zone0C/scripts.pory"
	lockall
# 386 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone19_2
Zone0C_EventScript_WarpZone19_1:
# 389 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 19
# 390 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 391 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 19
# 392 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 393 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone19_2:
# 387 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone19_1


Zone0C_EventScript_WarpZone20::
# 397 "data/maps/Zone0C/scripts.pory"
	lockall
# 398 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_lt Zone0C_EventScript_WarpZone20_2
Zone0C_EventScript_WarpZone20_1:
# 401 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 20
# 402 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 403 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 20
# 404 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 32, 76
# 405 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone20_2:
# 399 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone20_1


Zone0C_EventScript_WarpZone21::
# 409 "data/maps/Zone0C/scripts.pory"
	lockall
# 410 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_lt Zone0C_EventScript_WarpZone21_2
Zone0C_EventScript_WarpZone21_1:
# 413 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 21
# 414 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 415 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 21
# 416 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE21A, 255, 38, 100
# 417 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone21_2:
# 411 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone21_1


Zone0C_EventScript_WarpZone22::
# 421 "data/maps/Zone0C/scripts.pory"
	lockall
# 422 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_lt Zone0C_EventScript_WarpZone22_2
Zone0C_EventScript_WarpZone22_1:
# 425 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 22
# 426 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 427 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 22
# 428 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE22A, 255, 9, 50
# 429 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone22_2:
# 423 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone22_1


Zone0C_EventScript_WarpZone23::
# 433 "data/maps/Zone0C/scripts.pory"
	lockall
# 434 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_lt Zone0C_EventScript_WarpZone23_2
Zone0C_EventScript_WarpZone23_1:
# 437 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 23
# 438 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 439 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 23
# 440 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE23A, 255, 9, 1
# 441 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone23_2:
# 435 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone23_1


Zone0C_EventScript_WarpZone24::
# 445 "data/maps/Zone0C/scripts.pory"
	lockall
# 446 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_lt Zone0C_EventScript_WarpZone24_2
Zone0C_EventScript_WarpZone24_1:
# 449 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 24
# 450 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 451 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 24
# 452 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE24A, 255, 31, 23
# 453 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone24_2:
# 447 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone24_1


Zone0C_EventScript_WarpZone25::
# 457 "data/maps/Zone0C/scripts.pory"
	lockall
# 458 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_lt Zone0C_EventScript_WarpZone25_2
Zone0C_EventScript_WarpZone25_1:
# 461 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 25
# 462 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 463 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 25
# 464 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE25A, 255, 10, 13
# 465 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone25_2:
# 459 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone25_1


Zone0C_EventScript_WarpZone26::
# 469 "data/maps/Zone0C/scripts.pory"
	lockall
# 470 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_lt Zone0C_EventScript_WarpZone26_2
Zone0C_EventScript_WarpZone26_1:
# 473 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 26
# 474 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 475 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 26
# 476 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 13, 29
# 477 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone26_2:
# 471 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone26_1


Zone0C_EventScript_WarpZone27::
# 481 "data/maps/Zone0C/scripts.pory"
	lockall
# 482 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_lt Zone0C_EventScript_WarpZone27_2
Zone0C_EventScript_WarpZone27_1:
# 485 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 27
# 486 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 487 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 27
# 488 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 5, 34
# 489 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone27_2:
# 483 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone27_1


Zone0C_EventScript_WarpZone28::
# 493 "data/maps/Zone0C/scripts.pory"
	lockall
# 494 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_lt Zone0C_EventScript_WarpZone28_2
Zone0C_EventScript_WarpZone28_1:
# 497 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 28
# 498 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 499 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 28
# 500 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 33, 9
# 501 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone28_2:
# 495 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone28_1


Zone0C_EventScript_WarpZone29::
# 505 "data/maps/Zone0C/scripts.pory"
	lockall
# 506 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_lt Zone0C_EventScript_WarpZone29_2
Zone0C_EventScript_WarpZone29_1:
# 509 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 29
# 510 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 511 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 29
# 512 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 23, 13
# 513 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone29_2:
# 507 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone29_1


Zone0C_EventScript_WarpZone30::
# 517 "data/maps/Zone0C/scripts.pory"
	lockall
# 518 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 31
	goto_if_lt Zone0C_EventScript_WarpZone30_2
Zone0C_EventScript_WarpZone30_1:
# 521 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 30
# 522 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 523 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 30
# 524 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 525 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone30_2:
# 519 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone30_1


Zone0C_EventScript_WarpZone31::
# 529 "data/maps/Zone0C/scripts.pory"
	lockall
# 530 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 32
	goto_if_lt Zone0C_EventScript_WarpZone31_2
Zone0C_EventScript_WarpZone31_1:
# 533 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 31
# 534 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 535 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 31
# 536 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 537 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone31_2:
# 531 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone31_1


Zone0C_EventScript_WarpZone32::
# 541 "data/maps/Zone0C/scripts.pory"
	lockall
# 542 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 33
	goto_if_lt Zone0C_EventScript_WarpZone32_2
Zone0C_EventScript_WarpZone32_1:
# 545 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 32
# 546 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 547 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 32
# 548 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 549 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone32_2:
# 543 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone32_1


Zone0C_EventScript_WarpZone33::
# 553 "data/maps/Zone0C/scripts.pory"
	lockall
# 554 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 34
	goto_if_lt Zone0C_EventScript_WarpZone33_2
Zone0C_EventScript_WarpZone33_1:
# 557 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 33
# 558 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 559 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 33
# 560 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 561 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone33_2:
# 555 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone33_1


Zone0C_EventScript_WarpZone34::
# 565 "data/maps/Zone0C/scripts.pory"
	lockall
# 566 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 35
	goto_if_lt Zone0C_EventScript_WarpZone34_2
Zone0C_EventScript_WarpZone34_1:
# 569 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 34
# 570 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 571 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 34
# 572 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 573 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone34_2:
# 567 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone34_1


Zone0C_EventScript_WarpZone35::
# 577 "data/maps/Zone0C/scripts.pory"
	lockall
# 578 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 36
	goto_if_lt Zone0C_EventScript_WarpZone35_2
Zone0C_EventScript_WarpZone35_1:
# 581 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 35
# 582 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 583 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 35
# 584 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 585 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone35_2:
# 579 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone35_1


Zone0C_EventScript_WarpZone36::
# 589 "data/maps/Zone0C/scripts.pory"
	lockall
# 590 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 37
	goto_if_lt Zone0C_EventScript_WarpZone36_2
Zone0C_EventScript_WarpZone36_1:
# 593 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 36
# 594 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 595 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 36
# 596 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 597 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone36_2:
# 591 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone36_1


Zone0C_EventScript_WarpZone37::
# 601 "data/maps/Zone0C/scripts.pory"
	lockall
# 602 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 38
	goto_if_lt Zone0C_EventScript_WarpZone37_2
Zone0C_EventScript_WarpZone37_1:
# 605 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 37
# 606 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 607 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 37
# 608 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 609 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone37_2:
# 603 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone37_1


Zone0C_EventScript_WarpZone38::
# 613 "data/maps/Zone0C/scripts.pory"
	lockall
# 614 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 39
	goto_if_lt Zone0C_EventScript_WarpZone38_2
Zone0C_EventScript_WarpZone38_1:
# 617 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 38
# 618 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 619 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 38
# 620 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 621 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone38_2:
# 615 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone38_1


Zone0C_EventScript_WarpZone39::
# 625 "data/maps/Zone0C/scripts.pory"
	lockall
# 626 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 40
	goto_if_lt Zone0C_EventScript_WarpZone39_2
Zone0C_EventScript_WarpZone39_1:
# 629 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 39
# 630 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 631 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 39
# 632 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 633 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone39_2:
# 627 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone39_1


Zone0C_EventScript_WarpZone40::
# 637 "data/maps/Zone0C/scripts.pory"
	lockall
# 638 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 41
	goto_if_lt Zone0C_EventScript_WarpZone40_2
Zone0C_EventScript_WarpZone40_1:
# 641 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 40
# 642 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 643 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 40
# 644 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 645 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone40_2:
# 639 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone40_1


Zone0C_EventScript_WarpZone41::
# 649 "data/maps/Zone0C/scripts.pory"
	lockall
# 650 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 42
	goto_if_lt Zone0C_EventScript_WarpZone41_2
Zone0C_EventScript_WarpZone41_1:
# 653 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 41
# 654 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 655 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 41
# 656 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 657 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone41_2:
# 651 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone41_1


Zone0C_EventScript_WarpZone42::
# 661 "data/maps/Zone0C/scripts.pory"
	lockall
# 662 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 43
	goto_if_lt Zone0C_EventScript_WarpZone42_2
Zone0C_EventScript_WarpZone42_1:
# 665 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 42
# 666 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 667 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 42
# 668 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 669 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone42_2:
# 663 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone42_1


Zone0C_EventScript_WarpZone43::
# 673 "data/maps/Zone0C/scripts.pory"
	lockall
# 674 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 44
	goto_if_lt Zone0C_EventScript_WarpZone43_2
Zone0C_EventScript_WarpZone43_1:
# 677 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 43
# 678 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 679 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 43
# 680 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 681 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone43_2:
# 675 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone43_1


Zone0C_EventScript_WarpZone44::
# 685 "data/maps/Zone0C/scripts.pory"
	lockall
# 686 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 45
	goto_if_lt Zone0C_EventScript_WarpZone44_2
Zone0C_EventScript_WarpZone44_1:
# 689 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 44
# 690 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 691 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 44
# 692 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 693 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone44_2:
# 687 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone44_1


Zone0C_EventScript_WarpZone45::
# 697 "data/maps/Zone0C/scripts.pory"
	lockall
# 698 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 46
	goto_if_lt Zone0C_EventScript_WarpZone45_2
Zone0C_EventScript_WarpZone45_1:
# 701 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 45
# 702 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 703 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 45
# 704 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 705 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone45_2:
# 699 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone45_1


Zone0C_EventScript_WarpZone46::
# 709 "data/maps/Zone0C/scripts.pory"
	lockall
# 710 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 47
	goto_if_lt Zone0C_EventScript_WarpZone46_2
Zone0C_EventScript_WarpZone46_1:
# 713 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 46
# 714 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 715 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 46
# 716 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 717 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone46_2:
# 711 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone46_1


Zone0C_EventScript_WarpZone47::
# 721 "data/maps/Zone0C/scripts.pory"
	lockall
# 722 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 48
	goto_if_lt Zone0C_EventScript_WarpZone47_2
Zone0C_EventScript_WarpZone47_1:
# 725 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 47
# 726 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 727 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 47
# 728 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 729 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone47_2:
# 723 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone47_1


Zone0C_EventScript_WarpZone48::
# 733 "data/maps/Zone0C/scripts.pory"
	lockall
# 734 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 49
	goto_if_lt Zone0C_EventScript_WarpZone48_2
Zone0C_EventScript_WarpZone48_1:
# 737 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 48
# 738 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 739 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 48
# 740 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 741 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone48_2:
# 735 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone48_1


Zone0C_EventScript_WarpZone49::
# 745 "data/maps/Zone0C/scripts.pory"
	lockall
# 746 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 50
	goto_if_lt Zone0C_EventScript_WarpZone49_2
Zone0C_EventScript_WarpZone49_1:
# 749 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 49
# 750 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 751 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 49
# 752 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 753 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone49_2:
# 747 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone49_1


Zone0C_EventScript_WarpZone50::
# 757 "data/maps/Zone0C/scripts.pory"
	lockall
# 758 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 51
	goto_if_lt Zone0C_EventScript_WarpZone50_2
Zone0C_EventScript_WarpZone50_1:
# 761 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 50
# 762 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 763 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 50
# 764 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 765 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone50_2:
# 759 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone50_1


Zone0C_EventScript_WarpZoneB1::
# 769 "data/maps/Zone0C/scripts.pory"
	lockall
# 770 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_B1_STATE, 2
	goto_if_lt Zone0C_EventScript_WarpZoneB1_2
Zone0C_EventScript_WarpZoneB1_1:
# 773 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 51
# 774 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE_B1, 255, 11, 0
	end

Zone0C_EventScript_WarpZoneB1_2:
# 771 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZoneB1_1


# 778 "data/maps/Zone0C/scripts.pory"
Zone0C_Movement_PostIntro:
# 779 "data/maps/Zone0C/scripts.pory"
	walk_up
# 780 "data/maps/Zone0C/scripts.pory"
	walk_up
# 781 "data/maps/Zone0C/scripts.pory"
	walk_up
# 782 "data/maps/Zone0C/scripts.pory"
	face_down
	step_end

Zone0C_EventScript_Intro_Text_0:
# 14 "data/maps/Zone0C/scripts.pory"
	.string "A test subject! Perfect!$"

Zone0C_EventScript_VerifyDestination_Text_0:
# 151 "data/maps/Zone0C/scripts.pory"
	.string "Are you sure you want to go to {COLOR RED}Zone\n"
	.string "{STR_VAR_1}{COLOR DARK_GRAY}?$"

Zone0C_EventScript_VerifyDestination_Text_1:
# 153 "data/maps/Zone0C/scripts.pory"
	.string "Decided not to warp.$"

Zone0C_EventScript_DenyWarp_Text_0:
# 163 "data/maps/Zone0C/scripts.pory"
	.string "The warp doesn't seem to work…$"

Zone0C_Text_Intro::
# 24 "data/maps/Zone0C/scripts.pory"
	.string "Welcome to the Teleport Institute, or\n"
	.string "TPI for short.\p"
	.string "There are warps that will bring you to\n"
	.string "any area you've already visited.\p"
	.string "I'm sure you'll get the hang of it.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"

Zone0C_Text_Explain::
# 38 "data/maps/Zone0C/scripts.pory"
	.string "The warps are hardwired to only\n"
	.string "teleport people to places they have\l"
	.string "been before.\p"
	.string "If you need to get back to where you\n"
	.string "came from, you can use the warp\l"
	.string "immediately to our left.$"
