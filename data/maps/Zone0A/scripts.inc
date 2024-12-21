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
	dynmultipush Zone0A_EventScript_Exit_Text_8, 51
# 94 "data/maps/Zone0A/scripts.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 95 "data/maps/Zone0A/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/Zone0A/scripts.pory"
	case 0, Zone0A_EventScript_Exit_21
# 167 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_22
# 171 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_23
# 175 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_24
# 179 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_25
# 183 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_26
# 187 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_27
# 191 "data/maps/Zone0A/scripts.pory"
	case 51, Zone0A_EventScript_Exit_28
# 192 "data/maps/Zone0A/scripts.pory"
	case MULTI_B_PRESSED, Zone0A_EventScript_Exit_28
Zone0A_EventScript_Exit_19:
# 198 "data/maps/Zone0A/scripts.pory"
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

Zone0A_EventScript_Exit_21:
# 97 "data/maps/Zone0A/scripts.pory"
	closemessage
# 98 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 99 "data/maps/Zone0A/scripts.pory"
	switch VAR_ZONE
# 100 "data/maps/Zone0A/scripts.pory"
	case 1, Zone0A_EventScript_Exit_30
# 103 "data/maps/Zone0A/scripts.pory"
	case 2, Zone0A_EventScript_Exit_31
# 106 "data/maps/Zone0A/scripts.pory"
	case 3, Zone0A_EventScript_Exit_32
# 109 "data/maps/Zone0A/scripts.pory"
	case 4, Zone0A_EventScript_Exit_33
# 112 "data/maps/Zone0A/scripts.pory"
	case 5, Zone0A_EventScript_Exit_34
# 115 "data/maps/Zone0A/scripts.pory"
	case 6, Zone0A_EventScript_Exit_35
# 118 "data/maps/Zone0A/scripts.pory"
	case 7, Zone0A_EventScript_Exit_36
# 121 "data/maps/Zone0A/scripts.pory"
	case 9, Zone0A_EventScript_Exit_37
# 124 "data/maps/Zone0A/scripts.pory"
	case 10, Zone0A_EventScript_Exit_38
# 127 "data/maps/Zone0A/scripts.pory"
	case 11, Zone0A_EventScript_Exit_39
# 130 "data/maps/Zone0A/scripts.pory"
	case 12, Zone0A_EventScript_Exit_40
# 133 "data/maps/Zone0A/scripts.pory"
	case 13, Zone0A_EventScript_Exit_41
# 136 "data/maps/Zone0A/scripts.pory"
	case 15, Zone0A_EventScript_Exit_42
# 139 "data/maps/Zone0A/scripts.pory"
	case 16, Zone0A_EventScript_Exit_43
# 142 "data/maps/Zone0A/scripts.pory"
	case 17, Zone0A_EventScript_Exit_44
# 145 "data/maps/Zone0A/scripts.pory"
	case 18, Zone0A_EventScript_Exit_45
# 148 "data/maps/Zone0A/scripts.pory"
	case 20, Zone0A_EventScript_Exit_46
# 151 "data/maps/Zone0A/scripts.pory"
	case 21, Zone0A_EventScript_Exit_47
# 154 "data/maps/Zone0A/scripts.pory"
	case 22, Zone0A_EventScript_Exit_48
# 157 "data/maps/Zone0A/scripts.pory"
	case 23, Zone0A_EventScript_Exit_49
# 160 "data/maps/Zone0A/scripts.pory"
	case 24, Zone0A_EventScript_Exit_50
# 163 "data/maps/Zone0A/scripts.pory"
	case 26, Zone0A_EventScript_Exit_51
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_22:
# 168 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 1
# 169 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE1A, 255, 16, 28
# 170 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_23:
# 172 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 2
# 173 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE2A, 255, 4, 3
# 174 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_24:
# 176 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 3
# 177 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE3A, 255, 38, 25
# 178 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_25:
# 180 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 4
# 181 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE4A, 255, 6, 4
# 182 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_26:
# 184 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 5
# 185 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE5A, 255, 3, 1
# 186 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_27:
# 188 "data/maps/Zone0A/scripts.pory"
	setvar VAR_REVISITING_ZONE, 6
# 189 "data/maps/Zone0A/scripts.pory"
	warp MAP_ZONE6A, 255, 51, 22
# 190 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_28:
# 193 "data/maps/Zone0A/scripts.pory"
	closemessage
# 194 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 195 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_30:
# 101 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE0SHOPS, 255, 46, 1
# 102 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_31:
# 104 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE1SHOPS, 255, 46, 1
# 105 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_32:
# 107 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE2SHOPS, 255, 46, 1
# 108 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_33:
# 110 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE3SHOPS, 255, 46, 1
# 111 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_34:
# 113 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE4SHOPS, 255, 46, 1
# 114 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_35:
# 116 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE5SHOPS, 255, 46, 1
# 117 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_36:
# 119 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE6SHOPS, 255, 46, 1
# 120 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_37:
# 122 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE8SHOPS, 255, 46, 1
# 123 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_38:
# 125 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE9SHOPS, 255, 46, 1
# 126 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_39:
# 128 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE10SHOPS, 255, 46, 1
# 129 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_40:
# 131 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE11SHOPS, 255, 46, 1
# 132 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_41:
# 134 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE12SHOPS, 255, 46, 1
# 135 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_42:
# 137 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE14SHOPS, 255, 46, 1
# 138 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_43:
# 140 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE15SHOPS, 255, 46, 1
# 141 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_44:
# 143 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE16SHOPS, 255, 46, 1
# 144 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_45:
# 146 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE17SHOPS, 255, 46, 1
# 147 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_46:
# 149 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE20SHOPS, 255, 46, 1
# 150 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_47:
# 152 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE20SHOPS, 255, 46, 1
# 153 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_48:
# 155 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE21SHOPS, 255, 46, 1
# 156 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_49:
# 158 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE22SHOPS, 255, 46, 1
# 159 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_50:
# 161 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE23SHOPS, 255, 46, 1
# 162 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19

Zone0A_EventScript_Exit_51:
# 164 "data/maps/Zone0A/scripts.pory"
	warpdoor MAP_ZONE25SHOPS, 255, 46, 1
# 165 "data/maps/Zone0A/scripts.pory"
	waitstate
	goto Zone0A_EventScript_Exit_19


# 230 "data/maps/Zone0A/scripts.pory"

# 231 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 232 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 233 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 234 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 235 "data/maps/Zone0A/scripts.pory"
	return
# 236 "data/maps/Zone0A/scripts.pory"

# 237 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 238 "data/maps/Zone0A/scripts.pory"
	lock
# 239 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 240 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 241 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 242 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 243 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 244 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 245 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 246 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 247 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 248 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 249 "data/maps/Zone0A/scripts.pory"
	release
# 250 "data/maps/Zone0A/scripts.pory"
	end
# 251 "data/maps/Zone0A/scripts.pory"

# 252 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 253 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 254 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 255 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 256 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 257 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 258 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 259 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 260 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 261 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 262 "data/maps/Zone0A/scripts.pory"
	release
# 263 "data/maps/Zone0A/scripts.pory"
	end
# 264 "data/maps/Zone0A/scripts.pory"

# 265 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 266 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 267 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 268 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 269 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 270 "data/maps/Zone0A/scripts.pory"
	release
# 271 "data/maps/Zone0A/scripts.pory"
	end
# 272 "data/maps/Zone0A/scripts.pory"

# 273 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 274 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 275 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 276 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 277 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 278 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 279 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 280 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 281 "data/maps/Zone0A/scripts.pory"
	release
# 282 "data/maps/Zone0A/scripts.pory"
	end
# 283 "data/maps/Zone0A/scripts.pory"

# 284 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 285 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 286 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 287 "data/maps/Zone0A/scripts.pory"
	release
# 288 "data/maps/Zone0A/scripts.pory"
	end
# 289 "data/maps/Zone0A/scripts.pory"

# 290 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 291 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 292 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 293 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 294 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 295 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 296 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 297 "data/maps/Zone0A/scripts.pory"
	release
# 298 "data/maps/Zone0A/scripts.pory"
	end
# 299 "data/maps/Zone0A/scripts.pory"

# 300 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 301 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 302 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 303 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 304 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 305 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 306 "data/maps/Zone0A/scripts.pory"

# 307 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 308 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 309 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 310 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 311 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 312 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 313 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 314 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 315 "data/maps/Zone0A/scripts.pory"

# 316 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 317 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 318 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 319 "data/maps/Zone0A/scripts.pory"

# 320 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 321 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 322 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 323 "data/maps/Zone0A/scripts.pory"

# 324 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 325 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 326 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 327 "data/maps/Zone0A/scripts.pory"

# 328 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 329 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 330 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 331 "data/maps/Zone0A/scripts.pory"

# 332 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 333 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 334 "data/maps/Zone0A/scripts.pory"

# 335 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 336 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 337 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 338 "data/maps/Zone0A/scripts.pory"

# 339 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 340 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 341 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"
# 342 "data/maps/Zone0A/scripts.pory"

# 343 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DayCareSign::
# 344 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DayCareSign, MSGBOX_SIGN
# 345 "data/maps/Zone0A/scripts.pory"
	end
# 346 "data/maps/Zone0A/scripts.pory"

# 347 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TPISign::
# 348 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TPISign, MSGBOX_SIGN
# 349 "data/maps/Zone0A/scripts.pory"
	end
# 350 "data/maps/Zone0A/scripts.pory"

# 351 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DayCareSign:
# 352 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon Day Care\n"
# 353 "data/maps/Zone0A/scripts.pory"
	.string "9 Generations and counting!$"
# 354 "data/maps/Zone0A/scripts.pory"

# 355 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TPISign:
# 356 "data/maps/Zone0A/scripts.pory"
	.string "Teleport Institute\n"
# 357 "data/maps/Zone0A/scripts.pory"
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
# 93 "data/maps/Zone0A/scripts.pory"
	.string "Exit$"
