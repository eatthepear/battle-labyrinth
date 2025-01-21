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
	warp MAP_ZONE_SHOPS, 255, 38, 1
# 81 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpBack_2:
# 78 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_0_STATE, 4
	goto Zone0C_EventScript_WarpBack_1


Zone0C_EventScript_VerifyDestination::
# 85 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_0, MSGBOX_YESNO
# 86 "data/maps/Zone0C/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0C_EventScript_VerifyDestination_2
# 91 "data/maps/Zone0C/scripts.pory"
	setflag FLAG_IS_REVISITING_ZONE
	return

Zone0C_EventScript_VerifyDestination_2:
# 87 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_VerifyDestination_Text_1
# 88 "data/maps/Zone0C/scripts.pory"
	releaseall
	end


Zone0C_EventScript_DenyWarp::
# 96 "data/maps/Zone0C/scripts.pory"
	lockall
# 97 "data/maps/Zone0C/scripts.pory"
	msgbox Zone0C_EventScript_DenyWarp_Text_0
# 98 "data/maps/Zone0C/scripts.pory"
	releaseall
	return


Zone0C_EventScript_WarpZone1::
# 102 "data/maps/Zone0C/scripts.pory"
	lockall
# 103 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 2
	goto_if_lt Zone0C_EventScript_WarpZone1_2
Zone0C_EventScript_WarpZone1_1:
# 106 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 1
# 107 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 108 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 109 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE1A, 255, 16, 28
# 110 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone1_2:
# 104 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone1_1


Zone0C_EventScript_WarpZone2::
# 114 "data/maps/Zone0C/scripts.pory"
	lockall
# 115 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 3
	goto_if_lt Zone0C_EventScript_WarpZone2_2
Zone0C_EventScript_WarpZone2_1:
# 118 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 2
# 119 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 120 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 121 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE2A, 255, 4, 3
# 122 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone2_2:
# 116 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone2_1


Zone0C_EventScript_WarpZone3::
# 126 "data/maps/Zone0C/scripts.pory"
	lockall
# 127 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 4
	goto_if_lt Zone0C_EventScript_WarpZone3_2
Zone0C_EventScript_WarpZone3_1:
# 130 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 3
# 131 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 132 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 133 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE3A, 255, 38, 25
# 134 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone3_2:
# 128 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone3_1


Zone0C_EventScript_WarpZone4::
# 138 "data/maps/Zone0C/scripts.pory"
	lockall
# 139 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 5
	goto_if_lt Zone0C_EventScript_WarpZone4_2
Zone0C_EventScript_WarpZone4_1:
# 142 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 4
# 143 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 144 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 145 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE4A, 255, 4, 3
# 146 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone4_2:
# 140 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone4_1


Zone0C_EventScript_WarpZone5::
# 150 "data/maps/Zone0C/scripts.pory"
	lockall
# 151 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 6
	goto_if_lt Zone0C_EventScript_WarpZone5_2
Zone0C_EventScript_WarpZone5_1:
# 154 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 5
# 155 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 156 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 157 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE5A, 255, 43, 31
# 158 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone5_2:
# 152 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone5_1


Zone0C_EventScript_WarpZone6::
# 162 "data/maps/Zone0C/scripts.pory"
	lockall
# 163 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 7
	goto_if_lt Zone0C_EventScript_WarpZone6_2
Zone0C_EventScript_WarpZone6_1:
# 166 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 6
# 167 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 168 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 169 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 51, 22
# 170 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone6_2:
# 164 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone6_1


Zone0C_EventScript_WarpZone7::
# 174 "data/maps/Zone0C/scripts.pory"
	lockall
# 175 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone7_2
Zone0C_EventScript_WarpZone7_1:
# 178 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 7
# 179 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 180 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 7
# 181 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 10, 33
# 182 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone7_2:
# 176 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone7_1


Zone0C_EventScript_WarpZone8::
# 186 "data/maps/Zone0C/scripts.pory"
	lockall
# 187 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 9
	goto_if_lt Zone0C_EventScript_WarpZone8_2
Zone0C_EventScript_WarpZone8_1:
# 190 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 8
# 191 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 192 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 8
# 193 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 19, 5
# 194 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone8_2:
# 188 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone8_1


Zone0C_EventScript_WarpZone9::
# 198 "data/maps/Zone0C/scripts.pory"
	lockall
# 199 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 10
	goto_if_lt Zone0C_EventScript_WarpZone9_2
Zone0C_EventScript_WarpZone9_1:
# 202 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 9
# 203 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 204 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 9
# 205 "data/maps/Zone0C/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
# 206 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 18, 11
# 207 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone9_2:
# 200 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone9_1


Zone0C_EventScript_WarpZone10::
# 211 "data/maps/Zone0C/scripts.pory"
	lockall
# 212 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 11
	goto_if_lt Zone0C_EventScript_WarpZone10_2
Zone0C_EventScript_WarpZone10_1:
# 215 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 10
# 216 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 217 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 10
# 218 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 219 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone10_2:
# 213 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone10_1


Zone0C_EventScript_WarpZone11::
# 223 "data/maps/Zone0C/scripts.pory"
	lockall
# 224 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 12
	goto_if_lt Zone0C_EventScript_WarpZone11_2
Zone0C_EventScript_WarpZone11_1:
# 227 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 11
# 228 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 229 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 11
# 230 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 231 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone11_2:
# 225 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone11_1


Zone0C_EventScript_WarpZone12::
# 235 "data/maps/Zone0C/scripts.pory"
	lockall
# 236 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 13
	goto_if_lt Zone0C_EventScript_WarpZone12_2
Zone0C_EventScript_WarpZone12_1:
# 239 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 12
# 240 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 241 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 12
# 242 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 243 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone12_2:
# 237 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone12_1


Zone0C_EventScript_WarpZone13::
# 247 "data/maps/Zone0C/scripts.pory"
	lockall
# 248 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone13_2
Zone0C_EventScript_WarpZone13_1:
# 251 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 13
# 252 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 253 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 13
# 254 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 255 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone13_2:
# 249 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone13_1


Zone0C_EventScript_WarpZone14::
# 259 "data/maps/Zone0C/scripts.pory"
	lockall
# 260 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 15
	goto_if_lt Zone0C_EventScript_WarpZone14_2
Zone0C_EventScript_WarpZone14_1:
# 263 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 14
# 264 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 265 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 14
# 266 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 267 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone14_2:
# 261 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone14_1


Zone0C_EventScript_WarpZone15::
# 271 "data/maps/Zone0C/scripts.pory"
	lockall
# 272 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 16
	goto_if_lt Zone0C_EventScript_WarpZone15_2
Zone0C_EventScript_WarpZone15_1:
# 275 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 15
# 276 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 277 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 15
# 278 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 279 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone15_2:
# 273 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone15_1


Zone0C_EventScript_WarpZone16::
# 283 "data/maps/Zone0C/scripts.pory"
	lockall
# 284 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 17
	goto_if_lt Zone0C_EventScript_WarpZone16_2
Zone0C_EventScript_WarpZone16_1:
# 287 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 16
# 288 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 289 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 16
# 290 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 291 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone16_2:
# 285 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone16_1


Zone0C_EventScript_WarpZone17::
# 295 "data/maps/Zone0C/scripts.pory"
	lockall
# 296 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 18
	goto_if_lt Zone0C_EventScript_WarpZone17_2
Zone0C_EventScript_WarpZone17_1:
# 299 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 17
# 300 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 301 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 17
# 302 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 40
# 303 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone17_2:
# 297 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone17_1


Zone0C_EventScript_WarpZone18::
# 307 "data/maps/Zone0C/scripts.pory"
	lockall
# 308 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone18_2
Zone0C_EventScript_WarpZone18_1:
# 311 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 18
# 312 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 313 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 18
# 314 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 315 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone18_2:
# 309 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone18_1


Zone0C_EventScript_WarpZone19::
# 319 "data/maps/Zone0C/scripts.pory"
	lockall
# 320 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 20
	goto_if_lt Zone0C_EventScript_WarpZone19_2
Zone0C_EventScript_WarpZone19_1:
# 323 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 19
# 324 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 325 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 19
# 326 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 327 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone19_2:
# 321 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone19_1


Zone0C_EventScript_WarpZone20::
# 331 "data/maps/Zone0C/scripts.pory"
	lockall
# 332 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 21
	goto_if_lt Zone0C_EventScript_WarpZone20_2
Zone0C_EventScript_WarpZone20_1:
# 335 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 20
# 336 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 337 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 20
# 338 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 32, 76
# 339 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone20_2:
# 333 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone20_1


Zone0C_EventScript_WarpZone21::
# 343 "data/maps/Zone0C/scripts.pory"
	lockall
# 344 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 22
	goto_if_lt Zone0C_EventScript_WarpZone21_2
Zone0C_EventScript_WarpZone21_1:
# 347 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 21
# 348 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 349 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 21
# 350 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE21A, 255, 38, 100
# 351 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone21_2:
# 345 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone21_1


Zone0C_EventScript_WarpZone22::
# 355 "data/maps/Zone0C/scripts.pory"
	lockall
# 356 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 23
	goto_if_lt Zone0C_EventScript_WarpZone22_2
Zone0C_EventScript_WarpZone22_1:
# 359 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 22
# 360 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 361 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 22
# 362 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE22A, 255, 9, 50
# 363 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone22_2:
# 357 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone22_1


Zone0C_EventScript_WarpZone23::
# 367 "data/maps/Zone0C/scripts.pory"
	lockall
# 368 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 24
	goto_if_lt Zone0C_EventScript_WarpZone23_2
Zone0C_EventScript_WarpZone23_1:
# 371 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 23
# 372 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 373 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 23
# 374 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE23A, 255, 9, 1
# 375 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone23_2:
# 369 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone23_1


Zone0C_EventScript_WarpZone24::
# 379 "data/maps/Zone0C/scripts.pory"
	lockall
# 380 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 25
	goto_if_lt Zone0C_EventScript_WarpZone24_2
Zone0C_EventScript_WarpZone24_1:
# 383 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 24
# 384 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 385 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 24
# 386 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE24A, 255, 31, 23
# 387 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone24_2:
# 381 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone24_1


Zone0C_EventScript_WarpZone25::
# 391 "data/maps/Zone0C/scripts.pory"
	lockall
# 392 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 26
	goto_if_lt Zone0C_EventScript_WarpZone25_2
Zone0C_EventScript_WarpZone25_1:
# 395 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 25
# 396 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 397 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 25
# 398 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE25A, 255, 10, 13
# 399 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone25_2:
# 393 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone25_1


Zone0C_EventScript_WarpZone26::
# 403 "data/maps/Zone0C/scripts.pory"
	lockall
# 404 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 27
	goto_if_lt Zone0C_EventScript_WarpZone26_2
Zone0C_EventScript_WarpZone26_1:
# 407 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 26
# 408 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 409 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 26
# 410 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE6A, 255, 13, 29
# 411 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone26_2:
# 405 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone26_1


Zone0C_EventScript_WarpZone27::
# 415 "data/maps/Zone0C/scripts.pory"
	lockall
# 416 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 28
	goto_if_lt Zone0C_EventScript_WarpZone27_2
Zone0C_EventScript_WarpZone27_1:
# 419 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 27
# 420 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 421 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 27
# 422 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE7A, 255, 5, 34
# 423 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone27_2:
# 417 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone27_1


Zone0C_EventScript_WarpZone28::
# 427 "data/maps/Zone0C/scripts.pory"
	lockall
# 428 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 29
	goto_if_lt Zone0C_EventScript_WarpZone28_2
Zone0C_EventScript_WarpZone28_1:
# 431 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 28
# 432 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 433 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 28
# 434 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE8A, 255, 33, 9
# 435 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone28_2:
# 429 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone28_1


Zone0C_EventScript_WarpZone29::
# 439 "data/maps/Zone0C/scripts.pory"
	lockall
# 440 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 30
	goto_if_lt Zone0C_EventScript_WarpZone29_2
Zone0C_EventScript_WarpZone29_1:
# 443 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 29
# 444 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 445 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 29
# 446 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE9A, 255, 23, 13
# 447 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone29_2:
# 441 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone29_1


Zone0C_EventScript_WarpZone30::
# 451 "data/maps/Zone0C/scripts.pory"
	lockall
# 452 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 31
	goto_if_lt Zone0C_EventScript_WarpZone30_2
Zone0C_EventScript_WarpZone30_1:
# 455 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 30
# 456 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 457 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 30
# 458 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE10A, 255, 42, 51
# 459 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone30_2:
# 453 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone30_1


Zone0C_EventScript_WarpZone31::
# 463 "data/maps/Zone0C/scripts.pory"
	lockall
# 464 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 32
	goto_if_lt Zone0C_EventScript_WarpZone31_2
Zone0C_EventScript_WarpZone31_1:
# 467 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 31
# 468 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 469 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 31
# 470 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 471 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone31_2:
# 465 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone31_1


Zone0C_EventScript_WarpZone32::
# 475 "data/maps/Zone0C/scripts.pory"
	lockall
# 476 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 33
	goto_if_lt Zone0C_EventScript_WarpZone32_2
Zone0C_EventScript_WarpZone32_1:
# 479 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 32
# 480 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 481 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 32
# 482 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 483 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone32_2:
# 477 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone32_1


Zone0C_EventScript_WarpZone33::
# 487 "data/maps/Zone0C/scripts.pory"
	lockall
# 488 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 34
	goto_if_lt Zone0C_EventScript_WarpZone33_2
Zone0C_EventScript_WarpZone33_1:
# 491 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 33
# 492 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 493 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 33
# 494 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 495 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone33_2:
# 489 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone33_1


Zone0C_EventScript_WarpZone34::
# 499 "data/maps/Zone0C/scripts.pory"
	lockall
# 500 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 35
	goto_if_lt Zone0C_EventScript_WarpZone34_2
Zone0C_EventScript_WarpZone34_1:
# 503 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 34
# 504 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 505 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 34
# 506 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 507 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone34_2:
# 501 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone34_1


Zone0C_EventScript_WarpZone35::
# 511 "data/maps/Zone0C/scripts.pory"
	lockall
# 512 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 36
	goto_if_lt Zone0C_EventScript_WarpZone35_2
Zone0C_EventScript_WarpZone35_1:
# 515 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 35
# 516 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 517 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 35
# 518 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 519 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone35_2:
# 513 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone35_1


Zone0C_EventScript_WarpZone36::
# 523 "data/maps/Zone0C/scripts.pory"
	lockall
# 524 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 37
	goto_if_lt Zone0C_EventScript_WarpZone36_2
Zone0C_EventScript_WarpZone36_1:
# 527 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 36
# 528 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 529 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 36
# 530 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 531 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone36_2:
# 525 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone36_1


Zone0C_EventScript_WarpZone37::
# 535 "data/maps/Zone0C/scripts.pory"
	lockall
# 536 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 38
	goto_if_lt Zone0C_EventScript_WarpZone37_2
Zone0C_EventScript_WarpZone37_1:
# 539 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 37
# 540 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 541 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 37
# 542 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 543 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone37_2:
# 537 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone37_1


Zone0C_EventScript_WarpZone38::
# 547 "data/maps/Zone0C/scripts.pory"
	lockall
# 548 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 39
	goto_if_lt Zone0C_EventScript_WarpZone38_2
Zone0C_EventScript_WarpZone38_1:
# 551 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 38
# 552 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 553 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 38
# 554 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 555 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone38_2:
# 549 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone38_1


Zone0C_EventScript_WarpZone39::
# 559 "data/maps/Zone0C/scripts.pory"
	lockall
# 560 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 40
	goto_if_lt Zone0C_EventScript_WarpZone39_2
Zone0C_EventScript_WarpZone39_1:
# 563 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 39
# 564 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 565 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 39
# 566 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 567 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone39_2:
# 561 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone39_1


Zone0C_EventScript_WarpZone40::
# 571 "data/maps/Zone0C/scripts.pory"
	lockall
# 572 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 41
	goto_if_lt Zone0C_EventScript_WarpZone40_2
Zone0C_EventScript_WarpZone40_1:
# 575 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 40
# 576 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 577 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 40
# 578 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 579 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone40_2:
# 573 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone40_1


Zone0C_EventScript_WarpZone41::
# 583 "data/maps/Zone0C/scripts.pory"
	lockall
# 584 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 42
	goto_if_lt Zone0C_EventScript_WarpZone41_2
Zone0C_EventScript_WarpZone41_1:
# 587 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 41
# 588 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 589 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 41
# 590 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE11A, 255, 48, 2
# 591 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone41_2:
# 585 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone41_1


Zone0C_EventScript_WarpZone42::
# 595 "data/maps/Zone0C/scripts.pory"
	lockall
# 596 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 43
	goto_if_lt Zone0C_EventScript_WarpZone42_2
Zone0C_EventScript_WarpZone42_1:
# 599 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 42
# 600 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 601 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 42
# 602 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE12A, 255, 10, 18
# 603 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone42_2:
# 597 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone42_1


Zone0C_EventScript_WarpZone43::
# 607 "data/maps/Zone0C/scripts.pory"
	lockall
# 608 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 44
	goto_if_lt Zone0C_EventScript_WarpZone43_2
Zone0C_EventScript_WarpZone43_1:
# 611 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 43
# 612 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 613 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 43
# 614 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE13A, 255, 18, 10
# 615 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone43_2:
# 609 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone43_1


Zone0C_EventScript_WarpZone44::
# 619 "data/maps/Zone0C/scripts.pory"
	lockall
# 620 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 45
	goto_if_lt Zone0C_EventScript_WarpZone44_2
Zone0C_EventScript_WarpZone44_1:
# 623 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 44
# 624 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 625 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 44
# 626 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE14A, 255, 19, 3
# 627 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone44_2:
# 621 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone44_1


Zone0C_EventScript_WarpZone45::
# 631 "data/maps/Zone0C/scripts.pory"
	lockall
# 632 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 46
	goto_if_lt Zone0C_EventScript_WarpZone45_2
Zone0C_EventScript_WarpZone45_1:
# 635 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 45
# 636 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 637 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 45
# 638 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE15A, 255, 4, 4
# 639 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone45_2:
# 633 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone45_1


Zone0C_EventScript_WarpZone46::
# 643 "data/maps/Zone0C/scripts.pory"
	lockall
# 644 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 47
	goto_if_lt Zone0C_EventScript_WarpZone46_2
Zone0C_EventScript_WarpZone46_1:
# 647 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 46
# 648 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 649 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 46
# 650 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE16A, 255, 6, 4
# 651 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone46_2:
# 645 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone46_1


Zone0C_EventScript_WarpZone47::
# 655 "data/maps/Zone0C/scripts.pory"
	lockall
# 656 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 48
	goto_if_lt Zone0C_EventScript_WarpZone47_2
Zone0C_EventScript_WarpZone47_1:
# 659 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 47
# 660 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 661 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 47
# 662 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE17A, 255, 13, 42
# 663 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone47_2:
# 657 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone47_1


Zone0C_EventScript_WarpZone48::
# 667 "data/maps/Zone0C/scripts.pory"
	lockall
# 668 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 49
	goto_if_lt Zone0C_EventScript_WarpZone48_2
Zone0C_EventScript_WarpZone48_1:
# 671 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 48
# 672 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 673 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 48
# 674 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE18A, 255, 28, 19
# 675 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone48_2:
# 669 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone48_1


Zone0C_EventScript_WarpZone49::
# 679 "data/maps/Zone0C/scripts.pory"
	lockall
# 680 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 50
	goto_if_lt Zone0C_EventScript_WarpZone49_2
Zone0C_EventScript_WarpZone49_1:
# 683 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 49
# 684 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 685 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 49
# 686 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE19D, 255, 9, 3
# 687 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone49_2:
# 681 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone49_1


Zone0C_EventScript_WarpZone50::
# 691 "data/maps/Zone0C/scripts.pory"
	lockall
# 692 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE, 51
	goto_if_lt Zone0C_EventScript_WarpZone50_2
Zone0C_EventScript_WarpZone50_1:
# 695 "data/maps/Zone0C/scripts.pory"
	buffernumberstring 0, 50
# 696 "data/maps/Zone0C/scripts.pory"
	call Zone0C_EventScript_VerifyDestination
# 697 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 50
# 698 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE20A, 255, 7, 8
# 699 "data/maps/Zone0C/scripts.pory"
	waitstate
	return

Zone0C_EventScript_WarpZone50_2:
# 693 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZone50_1


Zone0C_EventScript_WarpZoneB1::
# 703 "data/maps/Zone0C/scripts.pory"
	lockall
# 704 "data/maps/Zone0C/scripts.pory"
	compare VAR_ZONE_B1_STATE, 2
	goto_if_lt Zone0C_EventScript_WarpZoneB1_2
Zone0C_EventScript_WarpZoneB1_1:
# 707 "data/maps/Zone0C/scripts.pory"
	setvar VAR_REVISITING_ZONE, 51
# 708 "data/maps/Zone0C/scripts.pory"
	warpteleport MAP_ZONE_B1, 255, 11, 0
	end

Zone0C_EventScript_WarpZoneB1_2:
# 705 "data/maps/Zone0C/scripts.pory"
	goto Zone0C_EventScript_DenyWarp
	goto Zone0C_EventScript_WarpZoneB1_1


# 712 "data/maps/Zone0C/scripts.pory"
Zone0C_Movement_PostIntro:
# 713 "data/maps/Zone0C/scripts.pory"
	walk_up
# 714 "data/maps/Zone0C/scripts.pory"
	walk_up
# 715 "data/maps/Zone0C/scripts.pory"
	walk_up
# 716 "data/maps/Zone0C/scripts.pory"
	face_down
	step_end

Zone0C_EventScript_Intro_Text_0:
# 14 "data/maps/Zone0C/scripts.pory"
	.string "A test subject! Perfect!$"

Zone0C_EventScript_VerifyDestination_Text_0:
# 85 "data/maps/Zone0C/scripts.pory"
	.string "Are you sure you want to go to {COLOR RED}Zone\n"
	.string "{STR_VAR_1}{COLOR DARK_GRAY}?$"

Zone0C_EventScript_VerifyDestination_Text_1:
# 87 "data/maps/Zone0C/scripts.pory"
	.string "Decided not to warp.$"

Zone0C_EventScript_DenyWarp_Text_0:
# 97 "data/maps/Zone0C/scripts.pory"
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
