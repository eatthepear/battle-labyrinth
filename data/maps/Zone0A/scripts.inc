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
	msgbox Zone0A_EventScript_Intro_Text_3
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
	dynmultipush Zone0A_EventScript_Exit_Text_3, 51
# 79 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 80 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/Zone0A/scripts.pory"
	case 0, Zone0A_EventScript_Exit_6
# 152 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Exit_7
# 153 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_7
Zone0A_EventScript_Exit_4:
# 158 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Exit_2:
# 76 "data/maps/Zone0A/scripts.pory"
	dynmultipush Zone0A_EventScript_Exit_Text_2, 1
	goto Zone0A_EventScript_Exit_1

Zone0A_EventScript_Exit_6:
# 82 "data/maps/Zone0A/scripts.pory"
	closemessage
# 83 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 84 "data/maps/Zone0A/scripts.pory"
	switch VAR_ZONE
# 85 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_9
# 88 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_10
# 91 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_11
# 94 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_12
# 97 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_13
# 100 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_14
# 103 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_15
# 106 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_16
# 109 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_17
# 112 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_18
# 115 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_19
# 118 "data/maps/Zone0A/scripts.pory"
	case 13, Zone0A_EventScript_Exit_20
# 121 "data/maps/Zone0A/scripts.pory"
	case 15, Zone0A_EventScript_Exit_21
# 124 "data/maps/Zone0A/scripts.pory"
	case 16, Zone0A_EventScript_Exit_22
# 127 "data/maps/Zone0A/scripts.pory"
	case 17, Zone0A_EventScript_Exit_23
# 130 "data/maps/Zone0A/scripts.pory"
	case 18, Zone0A_EventScript_Exit_24
# 133 "data/maps/Zone0A/scripts.pory"
	case 20, Zone0A_EventScript_Exit_25
# 136 "data/maps/Zone0A/scripts.pory"
	case 21, Zone0A_EventScript_Exit_26
# 139 "data/maps/Zone0A/scripts.pory"
	case 22, Zone0A_EventScript_Exit_27
# 142 "data/maps/Zone0A/scripts.pory"
	case 23, Zone0A_EventScript_Exit_28
# 145 "data/maps/Zone0A/scripts.pory"
	case 24, Zone0A_EventScript_Exit_29
# 148 "data/maps/Zone0A/scripts.pory"
	case 26, Zone0A_EventScript_Exit_30
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_7:
# 154 "data/maps/Zone0A/scripts.pory"
	closemessage
# 155 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 156 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_9:
# 86 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE0SHOPS, 255, 46, 1
# 87 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_10:
# 89 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1SHOPS, 255, 46, 1
# 90 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_11:
# 92 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE2SHOPS, 255, 46, 1
# 93 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_12:
# 95 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE3SHOPS, 255, 46, 1
# 96 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_13:
# 98 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE4SHOPS, 255, 46, 1
# 99 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_14:
# 101 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE5SHOPS, 255, 46, 1
# 102 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_15:
# 104 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE6SHOPS, 255, 46, 1
# 105 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_16:
# 107 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE8SHOPS, 255, 46, 1
# 108 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_17:
# 110 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE9SHOPS, 255, 46, 1
# 111 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_18:
# 113 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE10SHOPS, 255, 46, 1
# 114 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_19:
# 116 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE11SHOPS, 255, 46, 1
# 117 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_20:
# 119 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE12SHOPS, 255, 46, 1
# 120 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_21:
# 122 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE14SHOPS, 255, 46, 1
# 123 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_22:
# 125 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE15SHOPS, 255, 46, 1
# 126 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_23:
# 128 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE16SHOPS, 255, 46, 1
# 129 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_24:
# 131 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE17SHOPS, 255, 46, 1
# 132 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_25:
# 134 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE20SHOPS, 255, 46, 1
# 135 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_26:
# 137 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE20SHOPS, 255, 46, 1
# 138 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_27:
# 140 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE21SHOPS, 255, 46, 1
# 141 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_28:
# 143 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE22SHOPS, 255, 46, 1
# 144 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_29:
# 146 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE23SHOPS, 255, 46, 1
# 147 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4

Zone0A_EventScript_Exit_30:
# 149 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE25SHOPS, 255, 46, 1
# 150 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_4


# 190 "data/maps/Zone0A/scripts.pory"

# 191 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 192 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 193 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 194 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 195 "data/maps/Zone0A/scripts.pory"
	return
# 196 "data/maps/Zone0A/scripts.pory"

# 197 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 198 "data/maps/Zone0A/scripts.pory"
	lock
# 199 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 200 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 201 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 202 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 203 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 204 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 205 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 206 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 207 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 208 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 209 "data/maps/Zone0A/scripts.pory"
	release
# 210 "data/maps/Zone0A/scripts.pory"
	end
# 211 "data/maps/Zone0A/scripts.pory"

# 212 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 213 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 214 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 215 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 216 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 217 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 218 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 219 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 220 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 221 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 222 "data/maps/Zone0A/scripts.pory"
	release
# 223 "data/maps/Zone0A/scripts.pory"
	end
# 224 "data/maps/Zone0A/scripts.pory"

# 225 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 226 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 227 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 228 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 229 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 230 "data/maps/Zone0A/scripts.pory"
	release
# 231 "data/maps/Zone0A/scripts.pory"
	end
# 232 "data/maps/Zone0A/scripts.pory"

# 233 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 234 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 235 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 236 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 237 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 238 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 239 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 240 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 241 "data/maps/Zone0A/scripts.pory"
	release
# 242 "data/maps/Zone0A/scripts.pory"
	end
# 243 "data/maps/Zone0A/scripts.pory"

# 244 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 245 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 246 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 247 "data/maps/Zone0A/scripts.pory"
	release
# 248 "data/maps/Zone0A/scripts.pory"
	end
# 249 "data/maps/Zone0A/scripts.pory"

# 250 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 251 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 252 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 253 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 254 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 255 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 256 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 257 "data/maps/Zone0A/scripts.pory"
	release
# 258 "data/maps/Zone0A/scripts.pory"
	end
# 259 "data/maps/Zone0A/scripts.pory"

# 260 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 261 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 262 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 263 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 264 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 265 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 266 "data/maps/Zone0A/scripts.pory"

# 267 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 268 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 269 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 270 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 271 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 272 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 273 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 274 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 275 "data/maps/Zone0A/scripts.pory"

# 276 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 277 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 278 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 279 "data/maps/Zone0A/scripts.pory"

# 280 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 281 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 282 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 283 "data/maps/Zone0A/scripts.pory"

# 284 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 285 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 286 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 287 "data/maps/Zone0A/scripts.pory"

# 288 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 289 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 290 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 291 "data/maps/Zone0A/scripts.pory"

# 292 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 293 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 294 "data/maps/Zone0A/scripts.pory"

# 295 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 296 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 297 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 298 "data/maps/Zone0A/scripts.pory"

# 299 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 300 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 301 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"
# 302 "data/maps/Zone0A/scripts.pory"

# 303 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DayCareSign::
# 304 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DayCareSign, MSGBOX_SIGN
# 305 "data/maps/Zone0A/scripts.pory"
	end
# 306 "data/maps/Zone0A/scripts.pory"

# 307 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TPISign::
# 308 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TPISign, MSGBOX_SIGN
# 309 "data/maps/Zone0A/scripts.pory"
	end
# 310 "data/maps/Zone0A/scripts.pory"

# 311 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DayCareSign:
# 312 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon Day Care\n"
# 313 "data/maps/Zone0A/scripts.pory"
	.string "9 Generations and counting!$"
# 314 "data/maps/Zone0A/scripts.pory"

# 315 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TPISign:
# 316 "data/maps/Zone0A/scripts.pory"
	.string "Teleport Institute\n"
# 317 "data/maps/Zone0A/scripts.pory"
	.string "Getting around, easy peasy.$"

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
# 78 "data/maps/Zone0A/scripts.pory"
	.string "Exit$"
