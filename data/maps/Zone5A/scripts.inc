Zone5A_MapScripts::
# 2 "data/maps/Zone5A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone5A_EventScript_LeviathanBattle::
# 17 "data/maps/Zone5A/scripts.pory"
	lockall
# 18 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 19 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone5A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_0, 31
	goto_if_eq Zone5A_EventScript_LeviathanBattle_2
# 28 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq Zone5A_EventScript_LeviathanBattle_3
# 33 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_0, 29
	goto_if_eq Zone5A_EventScript_LeviathanBattle_4
# 36 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_0, 28
	goto_if_eq Zone5A_EventScript_LeviathanBattle_5
# 41 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq Zone5A_EventScript_LeviathanBattle_6
Zone5A_EventScript_LeviathanBattle_1:
# 49 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_0, 0
# 50 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, 0
# 51 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone5A_EventScript_LeviathanBattle_13
# 51 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone5A_EventScript_LeviathanBattle_13
# 54 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_1, MSGBOX_YESNO
Zone5A_EventScript_LeviathanBattle_12:
# 56 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_LeviathanBattle_19
# 67 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_3
# 68 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 69 "data/maps/Zone5A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_KEVIN, Zone5A_EventScript_LeviathanBattle_Text_4
# 70 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 71 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 72 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_5
# 73 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 74 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 75 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 76 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 77 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 78 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 79 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 80 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_6
# 87 "data/maps/Zone5A/scripts.pory"
	fadeoutbgm 1
# 88 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 89 "data/maps/Zone5A/scripts.pory"
	playse SE_PIN
# 90 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 91 "data/maps/Zone5A/scripts.pory"
	waitse
# 92 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_7
# 93 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 94 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 95 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 96 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 97 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 98 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 99 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 100 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 101 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_8
# 106 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone5A_EventScript_LeviathanBattle_23
Zone5A_EventScript_LeviathanBattle_21:
# 109 "data/maps/Zone5A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_DECLAN
# 110 "data/maps/Zone5A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DECLAN_LEVIATHAN_5, Zone5A_Text_Leviathan5Defeat
# 111 "data/maps/Zone5A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 112 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 113 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 114 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 115 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_9, MSGBOX_DEFAULT
# 117 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 118 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 119 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_10
# 120 "data/maps/Zone5A/scripts.pory"
	delay 64
# 121 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 122 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 123 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_11
# 133 "data/maps/Zone5A/scripts.pory"
	giveitem ITEM_TM04, 1
# 134 "data/maps/Zone5A/scripts.pory"
	closemessage
# 135 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_12, MSGBOX_DEFAULT
# 136 "data/maps/Zone5A/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 137 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 138 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_13
# 139 "data/maps/Zone5A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/Zone5A/scripts.pory"
	removeobject 1
# 141 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_5
# 142 "data/maps/Zone5A/scripts.pory"
	removeobject 2
# 143 "data/maps/Zone5A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 144 "data/maps/Zone5A/scripts.pory"
	setvar VAR_ZONE_5_STATE, 1
# 145 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_LeviathanBattle_2:
# 22 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 23 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 25 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 27 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_3:
# 29 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 30 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 32 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_4:
# 34 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 35 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_5:
# 37 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 38 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 40 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_6:
# 42 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 43 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 45 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 46 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 47 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
	goto Zone5A_EventScript_LeviathanBattle_1

Zone5A_EventScript_LeviathanBattle_13:
# 52 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_0, MSGBOX_YESNO
	goto Zone5A_EventScript_LeviathanBattle_12

Zone5A_EventScript_LeviathanBattle_19:
# 57 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_LeviathanBattle_Text_2
# 58 "data/maps/Zone5A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 59 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 60 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 61 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 62 "data/maps/Zone5A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 63 "data/maps/Zone5A/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone5A/scripts.pory"
	releaseall
	end

Zone5A_EventScript_LeviathanBattle_22:
# 107 "data/maps/Zone5A/scripts.pory"
	special HealPlayerParty
	goto Zone5A_EventScript_LeviathanBattle_21

Zone5A_EventScript_LeviathanBattle_23:
# 106 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone5A_EventScript_LeviathanBattle_22
	goto Zone5A_EventScript_LeviathanBattle_21


Zone5A_EventScript_BuyPikaClone::
# 154 "data/maps/Zone5A/scripts.pory"
	lock
# 155 "data/maps/Zone5A/scripts.pory"
	faceplayer
# 156 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5A_EventScript_BuyPikaClone_4
Zone5A_EventScript_BuyPikaClone_3:
# 161 "data/maps/Zone5A/scripts.pory"
	showmoneybox 0, 0, 0
# 162 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_1, MSGBOX_YESNO
# 163 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_BuyPikaClone_7
# 168 "data/maps/Zone5A/scripts.pory"
	checkmoney 3000, 0
# 169 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_10
# 173 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 174 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_14
# 180 "data/maps/Zone5A/scripts.pory"
	call EventScript_NuzlockeVerifyGift
# 181 "data/maps/Zone5A/scripts.pory"
	removemoney 3000
# 182 "data/maps/Zone5A/scripts.pory"
	updatemoneybox
# 183 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_5
# 184 "data/maps/Zone5A/scripts.pory"
	closemessage
# 185 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 186 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone5A_EventScript_BuyPikaClone_17
# 245 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_7, MSGBOX_DEFAULT
# 246 "data/maps/Zone5A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone5A_EventScript_BuyPikaClone_Text_8, Zone5A_EventScript_BuyPikaClone_Text_9, Zone5A_EventScript_BuyPikaClone_Text_10, Zone5A_EventScript_BuyPikaClone_Text_11
# 247 "data/maps/Zone5A/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/Zone5A/scripts.pory"
	case 0, Zone5A_EventScript_BuyPikaClone_28
# 250 "data/maps/Zone5A/scripts.pory"
	case 1, Zone5A_EventScript_BuyPikaClone_29
# 252 "data/maps/Zone5A/scripts.pory"
	case 2, Zone5A_EventScript_BuyPikaClone_30
# 254 "data/maps/Zone5A/scripts.pory"
	case 3, Zone5A_EventScript_BuyPikaClone_31
Zone5A_EventScript_BuyPikaClone_16:
# 258 "data/maps/Zone5A/scripts.pory"
	givemon VAR_TEMP_1, 10, ITEM_NONE
# 259 "data/maps/Zone5A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 250
# 260 "data/maps/Zone5A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 261 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_12, MSGBOX_DEFAULT
# 262 "data/maps/Zone5A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 263 "data/maps/Zone5A/scripts.pory"
	message Zone5A_EventScript_BuyPikaClone_Text_13
# 264 "data/maps/Zone5A/scripts.pory"
	waitmessage
# 265 "data/maps/Zone5A/scripts.pory"
	waitfanfare
# 266 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_14, MSGBOX_YESNO
# 267 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_BuyPikaClone_21
Zone5A_EventScript_BuyPikaClone_20:
# 271 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_15, MSGBOX_DEFAULT
Zone5A_EventScript_BuyPikaClone_1:
# 275 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_BuyPikaClone_2:
# 157 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_0
# 158 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_BuyPikaClone_4:
# 156 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE, Zone5A_EventScript_BuyPikaClone_2
	goto Zone5A_EventScript_BuyPikaClone_3

Zone5A_EventScript_BuyPikaClone_7:
# 164 "data/maps/Zone5A/scripts.pory"
	closemessage
# 165 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 166 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_2
	goto Zone5A_EventScript_BuyPikaClone_1

Zone5A_EventScript_BuyPikaClone_10:
# 170 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_3
# 171 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
	goto Zone5A_EventScript_BuyPikaClone_1

Zone5A_EventScript_BuyPikaClone_14:
# 175 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_4
# 176 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 177 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_BuyPikaClone_17:
# 187 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone5A_EventScript_BuyPikaClone_24
# 190 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 191 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 192 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_33
Zone5A_EventScript_BuyPikaClone_32:
# 195 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_EMOLGA
# 196 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_36
Zone5A_EventScript_BuyPikaClone_35:
# 199 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 200 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_39
Zone5A_EventScript_BuyPikaClone_38:
# 203 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 204 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_42
Zone5A_EventScript_BuyPikaClone_41:
# 207 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone5A_EventScript_BuyPikaClone_45
Zone5A_EventScript_BuyPikaClone_47:
# 213 "data/maps/Zone5A/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone5A_EventScript_BuyPikaClone_48
Zone5A_EventScript_BuyPikaClone_23:
# 243 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_21:
# 268 "data/maps/Zone5A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 269 "data/maps/Zone5A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone5A_EventScript_BuyPikaClone_20

Zone5A_EventScript_BuyPikaClone_24:
# 188 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_23

Zone5A_EventScript_BuyPikaClone_28:
# 249 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_29:
# 251 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_30:
# 253 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_31:
# 255 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5A_EventScript_BuyPikaClone_16

Zone5A_EventScript_BuyPikaClone_33:
# 193 "data/maps/Zone5A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_32

Zone5A_EventScript_BuyPikaClone_36:
# 197 "data/maps/Zone5A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_35

Zone5A_EventScript_BuyPikaClone_39:
# 201 "data/maps/Zone5A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_38

Zone5A_EventScript_BuyPikaClone_42:
# 205 "data/maps/Zone5A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone5A_EventScript_BuyPikaClone_41

Zone5A_EventScript_BuyPikaClone_45:
# 208 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BuyPikaClone_Text_6
# 209 "data/maps/Zone5A/scripts.pory"
	addmoney 3000
# 210 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_BuyPikaClone_48:
# 214 "data/maps/Zone5A/scripts.pory"
	random 4
# 215 "data/maps/Zone5A/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/Zone5A/scripts.pory"
	case 0, Zone5A_EventScript_BuyPikaClone_51
# 222 "data/maps/Zone5A/scripts.pory"
	case 1, Zone5A_EventScript_BuyPikaClone_52
# 228 "data/maps/Zone5A/scripts.pory"
	case 2, Zone5A_EventScript_BuyPikaClone_53
# 234 "data/maps/Zone5A/scripts.pory"
	case 3, Zone5A_EventScript_BuyPikaClone_54
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_51:
# 217 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_DEDENNE
# 218 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_56
# 221 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DEDENNE
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_52:
# 223 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_EMOLGA
# 224 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_59
# 227 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EMOLGA
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_53:
# 229 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_MORPEKO
# 230 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_62
# 233 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MORPEKO
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_54:
# 235 "data/maps/Zone5A/scripts.pory"
	checkspeciesclause SPECIES_PACHIRISU
# 236 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone5A_EventScript_BuyPikaClone_65
# 239 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PACHIRISU
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_56:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_59:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_62:
	goto Zone5A_EventScript_BuyPikaClone_47

Zone5A_EventScript_BuyPikaClone_65:
	goto Zone5A_EventScript_BuyPikaClone_47


Zone5A_EventScript_ItemQuickBall::
# 280 "data/maps/Zone5A/scripts.pory"
	lock
# 281 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
# 286 "data/maps/Zone5A/scripts.pory"
	waitse
# 287 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 288 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 289 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 290 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 291 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 292 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
# 282 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 283 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_ItemTM03::
# 297 "data/maps/Zone5A/scripts.pory"
	lock
# 298 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_TM03, Zone5A_EventScript_ItemTM03_2
# 303 "data/maps/Zone5A/scripts.pory"
	waitse
# 304 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 305 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 306 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_TM03
# 307 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 308 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_TM03
# 309 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemTM03_2:
# 299 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 300 "data/maps/Zone5A/scripts.pory"
	release
	end


# 313 "data/maps/Zone5A/scripts.pory"

# 314 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 315 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 316 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 317 "data/maps/Zone5A/scripts.pory"
	release
# 318 "data/maps/Zone5A/scripts.pory"
	end
# 319 "data/maps/Zone5A/scripts.pory"

# 320 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 321 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 322 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 323 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 324 "data/maps/Zone5A/scripts.pory"

# 325 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 326 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 327 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 328 "data/maps/Zone5A/scripts.pory"

# 329 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 330 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 331 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 332 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 333 "data/maps/Zone5A/scripts.pory"

# 334 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Gilbert::
# 335 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GILBERT, Zone5A_Text_GilbertIntro, Zone5A_Text_GilbertDefeat
# 336 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Zone5A/scripts.pory"
	end
# 338 "data/maps/Zone5A/scripts.pory"

# 339 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_GilbertIntro:
# 340 "data/maps/Zone5A/scripts.pory"
	.string "I've fished up a wild Trainer!$"
# 341 "data/maps/Zone5A/scripts.pory"

# 342 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_GilbertDefeat:
# 343 "data/maps/Zone5A/scripts.pory"
	.string "You're too tough to take down!$"
# 344 "data/maps/Zone5A/scripts.pory"

# 345 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_GilbertPostBattle:
# 346 "data/maps/Zone5A/scripts.pory"
	.string "I can't seem to catch a break!\p"
# 347 "data/maps/Zone5A/scripts.pory"
	.string "Get it? Catch?$"
# 348 "data/maps/Zone5A/scripts.pory"

# 349 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Clinton::
# 350 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CLINTON, Zone5A_Text_ClintonIntro, Zone5A_Text_ClintonDefeat
# 351 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_ClintonPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Zone5A/scripts.pory"
	end
# 353 "data/maps/Zone5A/scripts.pory"

# 354 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_ClintonIntro:
# 355 "data/maps/Zone5A/scripts.pory"
	.string "Supposedly, item chests that are\n"
# 356 "data/maps/Zone5A/scripts.pory"
	.string "tinted yellow hold special items.$"
# 357 "data/maps/Zone5A/scripts.pory"

# 358 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_ClintonDefeat:
# 359 "data/maps/Zone5A/scripts.pory"
	.string "I don't bother checking them\n"
# 360 "data/maps/Zone5A/scripts.pory"
	.string "though!$"
# 361 "data/maps/Zone5A/scripts.pory"

# 362 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_ClintonPostBattle:
# 363 "data/maps/Zone5A/scripts.pory"
	.string "I can buy all the TMs I want!\n"
# 364 "data/maps/Zone5A/scripts.pory"
	.string "I don't need any item chests!$"
# 365 "data/maps/Zone5A/scripts.pory"

# 366 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 367 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 368 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Zone5A/scripts.pory"
	end
# 370 "data/maps/Zone5A/scripts.pory"

# 371 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 372 "data/maps/Zone5A/scripts.pory"
	.string "In order to pass, you have to beat\n"
# 373 "data/maps/Zone5A/scripts.pory"
	.string "the Fearsome Foursome!$"
# 374 "data/maps/Zone5A/scripts.pory"

# 375 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 376 "data/maps/Zone5A/scripts.pory"
	.string "First of the Fearsome Foursome down!$"
# 377 "data/maps/Zone5A/scripts.pory"

# 378 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 379 "data/maps/Zone5A/scripts.pory"
	.string "Defeat leaves me in disgrace…$"
# 380 "data/maps/Zone5A/scripts.pory"

# 381 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Ryan::
# 382 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RYAN, Zone5A_Text_RyanIntro, Zone5A_Text_RyanDefeat
# 383 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/Zone5A/scripts.pory"
	end
# 385 "data/maps/Zone5A/scripts.pory"

# 386 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RyanIntro:
# 387 "data/maps/Zone5A/scripts.pory"
	.string "The second of the Fearsome Foursome!\n"
# 388 "data/maps/Zone5A/scripts.pory"
	.string "That's me!$"
# 389 "data/maps/Zone5A/scripts.pory"

# 390 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RyanDefeat:
# 391 "data/maps/Zone5A/scripts.pory"
	.string "Second of the Fearsome Foursome down!$"
# 392 "data/maps/Zone5A/scripts.pory"

# 393 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RyanPostBattle:
# 394 "data/maps/Zone5A/scripts.pory"
	.string "They say second is the best…$"
# 395 "data/maps/Zone5A/scripts.pory"

# 396 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Sign::
# 397 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_Sign, MSGBOX_SIGN
# 398 "data/maps/Zone5A/scripts.pory"
	end
# 399 "data/maps/Zone5A/scripts.pory"

# 400 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 401 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 402 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Zone5A/scripts.pory"
	end
# 404 "data/maps/Zone5A/scripts.pory"

# 405 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 406 "data/maps/Zone5A/scripts.pory"
	.string "Fearsome Foursome, number three!\n"
# 407 "data/maps/Zone5A/scripts.pory"
	.string "Be careful, I'm strong!$"
# 408 "data/maps/Zone5A/scripts.pory"

# 409 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 410 "data/maps/Zone5A/scripts.pory"
	.string "Third of the Fearsome Foursome down!$"
# 411 "data/maps/Zone5A/scripts.pory"

# 412 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 413 "data/maps/Zone5A/scripts.pory"
	.string "There's only one left. Don't be afraid!$"
# 414 "data/maps/Zone5A/scripts.pory"

# 415 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kenneth::
# 416 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KENNETH, Zone5A_Text_KennethIntro, Zone5A_Text_KennethDefeat
# 417 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KennethPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Zone5A/scripts.pory"
	end
# 419 "data/maps/Zone5A/scripts.pory"

# 420 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KennethIntro:
# 421 "data/maps/Zone5A/scripts.pory"
	.string "Heyo, it's me!\n"
# 422 "data/maps/Zone5A/scripts.pory"
	.string "The last Fearsome Foursome!\p"
# 423 "data/maps/Zone5A/scripts.pory"
	.string "Face me in battle!$"
# 424 "data/maps/Zone5A/scripts.pory"

# 425 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KennethDefeat:
# 426 "data/maps/Zone5A/scripts.pory"
	.string "You've bested the best of us!$"
# 427 "data/maps/Zone5A/scripts.pory"

# 428 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KennethPostBattle:
# 429 "data/maps/Zone5A/scripts.pory"
	.string "You're the bestest!$"

Zone5A_EventScript_LeviathanBattle_Text_0:
# 52 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: So… you beat all the Fearsome\n"
	.string "Foursome.\p"
	.string "Well then. Would you like to face our\n"
	.string "club in battle? You'll have to beat both\l"
	.string "of us in a row, and you won't be healed\l"
	.string "in between battles!$"

Zone5A_EventScript_LeviathanBattle_Text_1:
# 54 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: So… you beat all the Fearsome\n"
	.string "Foursome.\p"
	.string "Well then. Would you like to face our\n"
	.string "club in battle? You'll have to beat both\l"
	.string "of us in a row, and you'll be healed in\l"
	.string "between battles!$"

Zone5A_EventScript_LeviathanBattle_Text_2:
# 57 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Oh, I see how it is. Scared, huh?$"

Zone5A_EventScript_LeviathanBattle_Text_3:
# 67 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Finally! My Bugs are writhing\n"
	.string "with excitement!$"

Zone5A_EventScript_LeviathanBattle_Text_4:
# 69 "data/maps/Zone5A/scripts.pory"
	.string "It can't be!$"

Zone5A_EventScript_LeviathanBattle_Text_5:
# 72 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Declan, bro, he beat me!\p"
	.string "It's your turn to show off the power of\n"
	.string "the Bug Enjoyers Club!$"

Zone5A_EventScript_LeviathanBattle_Text_6:
# 81 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: …\n"
	.string "…\l"
	.string "I told you already, Kevin.\p"
	.string "The club name has to be\n"
	.string "The Bug Maniacs, not\l"
	.string "The Bug Enjoyers.$"

Zone5A_EventScript_LeviathanBattle_Text_7:
# 92 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Huh? Oh!$"

Zone5A_EventScript_LeviathanBattle_Text_8:
# 101 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Want to join our club? The\n"
	.string "name: The Bug Maniacs!\p"
	.string "…\n"
	.string "…\l"
	.string "You don't?!\p"
	.string "You'll change your mind after I beat you\n"
	.string "with my fabulous Bug Pokémon!$"

Zone5A_EventScript_LeviathanBattle_Text_9:
# 116 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Look, Declan, it's just a name.\p"
	.string "Maybe it doesn't have the right ring or\n"
	.string "something.\p"
	.string "But at least let's train more together.\n"
	.string "Maybe we can beat this trainer next\l"
	.string "time.$"

Zone5A_EventScript_LeviathanBattle_Text_10:
# 119 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Fine. You're right, you're right.$"

Zone5A_EventScript_LeviathanBattle_Text_11:
# 123 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh! Right. I forgot you're here.\p"
	.string "…\n"
	.string "…\l"
	.string "…\l"
	.string "A reward?\l"
	.string "…\l"
	.string "Look, I don't go around giving out sweet\l"
	.string "rewards to non-club members.\l"
	.string "…\l"
	.string "…\p"
	.string "All right, fine. Take this TM and leave\n"
	.string "me alone!$"

Zone5A_EventScript_LeviathanBattle_Text_12:
# 135 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Kevin{COLOR DARK_GRAY}: Sheesh. Harsh, much?$"

Zone5A_EventScript_LeviathanBattle_Text_13:
# 138 "data/maps/Zone5A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Oh, shut it. Let's just get out\n"
	.string "of here.$"

Zone5A_EventScript_BuyPikaClone_Text_0:
# 157 "data/maps/Zone5A/scripts.pory"
	.string "Sorry! I'm all out of Pikachu clones for\n"
	.string "sale right now.$"

Zone5A_EventScript_BuyPikaClone_Text_1:
# 162 "data/maps/Zone5A/scripts.pory"
	.string "You seem like the type that would like\n"
	.string "Pikachu!\p"
	.string "Now, I don't have Pikachu for sale, but I\n"
	.string "do have Pachirisu, Emolga, Dedenne, or\l"
	.string "Morpeko, each for only ¥3000!$"

Zone5A_EventScript_BuyPikaClone_Text_2:
# 166 "data/maps/Zone5A/scripts.pory"
	.string "Alrighty, well, you just come on back if\n"
	.string "you change your mind.$"

Zone5A_EventScript_BuyPikaClone_Text_3:
# 170 "data/maps/Zone5A/scripts.pory"
	.string "You don't have enough money.$"

Zone5A_EventScript_BuyPikaClone_Text_4:
# 175 "data/maps/Zone5A/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone5A_EventScript_BuyPikaClone_Text_5:
# 183 "data/maps/Zone5A/scripts.pory"
	.string "I appreciate it!$"

Zone5A_EventScript_BuyPikaClone_Text_6:
# 208 "data/maps/Zone5A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone5A_EventScript_BuyPikaClone_Text_7:
# 245 "data/maps/Zone5A/scripts.pory"
	.string "Choose which Pikachu clone you would\n"
	.string "like.$"

Zone5A_EventScript_BuyPikaClone_Text_8:
# 246 "data/maps/Zone5A/scripts.pory"
	.string "Dedenne$"

Zone5A_EventScript_BuyPikaClone_Text_9:
# 246 "data/maps/Zone5A/scripts.pory"
	.string "Emolga$"

Zone5A_EventScript_BuyPikaClone_Text_10:
# 246 "data/maps/Zone5A/scripts.pory"
	.string "Morpeko$"

Zone5A_EventScript_BuyPikaClone_Text_11:
# 246 "data/maps/Zone5A/scripts.pory"
	.string "Pachirisu$"

Zone5A_EventScript_BuyPikaClone_Text_12:
# 261 "data/maps/Zone5A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone5A_EventScript_BuyPikaClone_Text_13:
# 263 "data/maps/Zone5A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone5A_EventScript_BuyPikaClone_Text_14:
# 266 "data/maps/Zone5A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone5A_EventScript_BuyPikaClone_Text_15:
# 271 "data/maps/Zone5A/scripts.pory"
	.string "Take good care of your new\n"
	.string "Electric-type, small mammal-like\l"
	.string "Pokémon!$"

Zone5A_Text_Leviathan5Defeat::
# 149 "data/maps/Zone5A/scripts.pory"
	.string "But how?! My Bugs!$"

Zone5A_Text_Sign::
# 432 "data/maps/Zone5A/scripts.pory"
	.string "Trainer Tips!\p"
	.string "You can view the current level cap as\n"
	.string "well as the number of remaining foes\l"
	.string "and items in an area by looking at your\l"
	.string "Trainer Card.\p"
	.string "This information changes accordingly\n"
	.string "based on which Zone you are in.$"
