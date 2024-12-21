Zone19D_MapScripts::
	.byte 0


Zone19D_EventScript_Sign::
# 4 "data/maps/Zone19D/scripts.pory"
	lock
# 5 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_Sign_Text_0, MSGBOX_SIGN
# 6 "data/maps/Zone19D/scripts.pory"
	compare VAR_ZONE_19_STATE, 0
	goto_if_eq Zone19D_EventScript_Sign_2
Zone19D_EventScript_Sign_1:
# 9 "data/maps/Zone19D/scripts.pory"
	release
	end

Zone19D_EventScript_Sign_2:
# 7 "data/maps/Zone19D/scripts.pory"
	goto Zone19D_EventScript_InitiatePirateBattles
	goto Zone19D_EventScript_Sign_1


Zone19D_EventScript_InitiatePirateBattles::
# 14 "data/maps/Zone19D/scripts.pory"
	fadeoutbgm 1
# 15 "data/maps/Zone19D/scripts.pory"
	delay 40
# 16 "data/maps/Zone19D/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/Zone19D/scripts.pory"
	compare VAR_TEMP_0, 10
	goto_if_eq Zone19D_EventScript_InitiatePirateBattles_2
# 21 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 22 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
Zone19D_EventScript_InitiatePirateBattles_1:
# 24 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 25 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/Zone19D/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone19D/scripts.pory"
	waitse
# 30 "data/maps/Zone19D/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 31 "data/maps/Zone19D/scripts.pory"
	addobject 1
# 32 "data/maps/Zone19D/scripts.pory"
	addobject 2
# 33 "data/maps/Zone19D/scripts.pory"
	addobject 3
# 34 "data/maps/Zone19D/scripts.pory"
	addobject 4
# 35 "data/maps/Zone19D/scripts.pory"
	clearflag FLAG_HIDE_ZONE19D_PIRATES
# 36 "data/maps/Zone19D/scripts.pory"
	applymovement 1, Zone19D_Movement_TopPirateWalkUp
# 37 "data/maps/Zone19D/scripts.pory"
	applymovement 2, Zone19D_Movement_LeftPirateWalkUp
# 38 "data/maps/Zone19D/scripts.pory"
	applymovement 3, Zone19D_Movement_BottomPirateWalkUp
# 39 "data/maps/Zone19D/scripts.pory"
	applymovement 4, Zone19D_Movement_RightPirateWalkUp
# 40 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 41 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 42 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 43 "data/maps/Zone19D/scripts.pory"
	delay 16
# 44 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 45 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 46 "data/maps/Zone19D/scripts.pory"
	delay 16
# 47 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 48 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 49 "data/maps/Zone19D/scripts.pory"
	delay 40
# 50 "data/maps/Zone19D/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_0
# 52 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 53 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 54 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone19D/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 56 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_1
# 57 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 58 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 59 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 60 "data/maps/Zone19D/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_2
# 62 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 63 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 64 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone19D/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_3
# 67 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone19D/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 69 "data/maps/Zone19D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PIRATE_1, Zone19D_Text_PirateDefeat
# 70 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_7
Zone19D_EventScript_InitiatePirateBattles_5:
# 73 "data/maps/Zone19D/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 74 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 75 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 76 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_4
# 77 "data/maps/Zone19D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PIRATE_2, Zone19D_Text_PirateDefeat
# 78 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_12
Zone19D_EventScript_InitiatePirateBattles_10:
# 81 "data/maps/Zone19D/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 83 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 84 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_5
# 85 "data/maps/Zone19D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PIRATE_3, Zone19D_Text_PirateDefeat
# 86 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_17
Zone19D_EventScript_InitiatePirateBattles_15:
# 89 "data/maps/Zone19D/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 91 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 92 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_6
# 93 "data/maps/Zone19D/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PIRATE_4, Zone19D_Text_PirateDefeat
# 94 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone19D_EventScript_InitiatePirateBattles_22
Zone19D_EventScript_InitiatePirateBattles_20:
# 97 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_7, MSGBOX_DEFAULT
# 98 "data/maps/Zone19D/scripts.pory"
	giveitem ITEM_TM36
# 99 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_8, MSGBOX_DEFAULT
# 100 "data/maps/Zone19D/scripts.pory"
	applymovement 1, Zone19D_Movement_Pirate1Run
# 101 "data/maps/Zone19D/scripts.pory"
	applymovement 2, Zone19D_Movement_Pirate2Run
# 102 "data/maps/Zone19D/scripts.pory"
	applymovement 3, Zone19D_Movement_Pirate3Run
# 103 "data/maps/Zone19D/scripts.pory"
	applymovement 4, Zone19D_Movement_Pirate4Run
# 104 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_9
# 105 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
# 106 "data/maps/Zone19D/scripts.pory"
	removeobject 1
# 107 "data/maps/Zone19D/scripts.pory"
	removeobject 2
# 108 "data/maps/Zone19D/scripts.pory"
	removeobject 3
# 109 "data/maps/Zone19D/scripts.pory"
	removeobject 4
# 110 "data/maps/Zone19D/scripts.pory"
	setflag FLAG_HIDE_ZONE19D_PIRATES
# 111 "data/maps/Zone19D/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 112 "data/maps/Zone19D/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/Zone19D/scripts.pory"
	setvar VAR_ZONE_18_STATE, 5
# 114 "data/maps/Zone19D/scripts.pory"
	setvar VAR_ZONE_19_STATE, 1
# 115 "data/maps/Zone19D/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_ZOE
# 116 "data/maps/Zone19D/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_ELI
# 117 "data/maps/Zone19D/scripts.pory"
	clearflag FLAG_HIDE_ZONE18B_ZOE
# 118 "data/maps/Zone19D/scripts.pory"
	clearflag FLAG_HIDE_ZONE18B_ELI
# 119 "data/maps/Zone19D/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_PORYGON
# 120 "data/maps/Zone19D/scripts.pory"
	delay 100
# 121 "data/maps/Zone19D/scripts.pory"
	msgbox Zone19D_EventScript_InitiatePirateBattles_Text_10
# 122 "data/maps/Zone19D/scripts.pory"
	delay 40
# 123 "data/maps/Zone19D/scripts.pory"
	warp MAP_ZONE18B, 255, 4, 4
# 124 "data/maps/Zone19D/scripts.pory"
	waitstate
# 125 "data/maps/Zone19D/scripts.pory"
	releaseall
	end

Zone19D_EventScript_InitiatePirateBattles_2:
# 18 "data/maps/Zone19D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 19 "data/maps/Zone19D/scripts.pory"
	waitmovement 0
	goto Zone19D_EventScript_InitiatePirateBattles_1

Zone19D_EventScript_InitiatePirateBattles_6:
# 71 "data/maps/Zone19D/scripts.pory"
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_5

Zone19D_EventScript_InitiatePirateBattles_7:
# 70 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_6
	goto Zone19D_EventScript_InitiatePirateBattles_5

Zone19D_EventScript_InitiatePirateBattles_11:
# 79 "data/maps/Zone19D/scripts.pory"
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_10

Zone19D_EventScript_InitiatePirateBattles_12:
# 78 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_11
	goto Zone19D_EventScript_InitiatePirateBattles_10

Zone19D_EventScript_InitiatePirateBattles_16:
# 87 "data/maps/Zone19D/scripts.pory"
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_15

Zone19D_EventScript_InitiatePirateBattles_17:
# 86 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_16
	goto Zone19D_EventScript_InitiatePirateBattles_15

Zone19D_EventScript_InitiatePirateBattles_21:
# 95 "data/maps/Zone19D/scripts.pory"
	special HealPlayerParty
	goto Zone19D_EventScript_InitiatePirateBattles_20

Zone19D_EventScript_InitiatePirateBattles_22:
# 94 "data/maps/Zone19D/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone19D_EventScript_InitiatePirateBattles_21
	goto Zone19D_EventScript_InitiatePirateBattles_20


# 133 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_TopPirateWalkUp:
# 134 "data/maps/Zone19D/scripts.pory"
	walk_up
# 134 "data/maps/Zone19D/scripts.pory"
	walk_up
# 134 "data/maps/Zone19D/scripts.pory"
	walk_up
# 134 "data/maps/Zone19D/scripts.pory"
	walk_up
# 134 "data/maps/Zone19D/scripts.pory"
	walk_up
# 135 "data/maps/Zone19D/scripts.pory"
	walk_right
# 136 "data/maps/Zone19D/scripts.pory"
	walk_up
# 137 "data/maps/Zone19D/scripts.pory"
	walk_right
# 138 "data/maps/Zone19D/scripts.pory"
	face_down
	step_end

# 141 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_LeftPirateWalkUp:
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 142 "data/maps/Zone19D/scripts.pory"
	walk_up
# 143 "data/maps/Zone19D/scripts.pory"
	walk_right
# 143 "data/maps/Zone19D/scripts.pory"
	walk_right
	step_end

# 146 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_BottomPirateWalkUp:
# 147 "data/maps/Zone19D/scripts.pory"
	walk_up
# 147 "data/maps/Zone19D/scripts.pory"
	walk_up
# 147 "data/maps/Zone19D/scripts.pory"
	walk_up
# 147 "data/maps/Zone19D/scripts.pory"
	walk_up
# 147 "data/maps/Zone19D/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_RightPirateWalkUp:
# 151 "data/maps/Zone19D/scripts.pory"
	delay_16
# 152 "data/maps/Zone19D/scripts.pory"
	walk_up
# 152 "data/maps/Zone19D/scripts.pory"
	walk_up
# 152 "data/maps/Zone19D/scripts.pory"
	walk_up
# 152 "data/maps/Zone19D/scripts.pory"
	walk_up
# 152 "data/maps/Zone19D/scripts.pory"
	walk_up
# 153 "data/maps/Zone19D/scripts.pory"
	walk_left
	step_end

# 156 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_Pirate1Run:
# 157 "data/maps/Zone19D/scripts.pory"
	walk_faster_left
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 158 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
	step_end

# 161 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_Pirate2Run:
# 162 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 163 "data/maps/Zone19D/scripts.pory"
	walk_faster_left
# 164 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 164 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 164 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 164 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 164 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
	step_end

# 167 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_Pirate3Run:
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 168 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
	step_end

# 171 "data/maps/Zone19D/scripts.pory"
Zone19D_Movement_Pirate4Run:
# 172 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 172 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 173 "data/maps/Zone19D/scripts.pory"
	walk_faster_right
# 174 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 174 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 174 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
# 174 "data/maps/Zone19D/scripts.pory"
	walk_faster_down
	step_end

Zone19D_EventScript_Sign_Text_0:
# 5 "data/maps/Zone19D/scripts.pory"
	.string "This is just a normal wall!\p"
	.string "Nothing suspicious at all behind it!$"

Zone19D_EventScript_InitiatePirateBattles_Text_0:
# 51 "data/maps/Zone19D/scripts.pory"
	.string "Shiver me timbers!\nAhoy, maties! This here trainer\lfound us!$"

Zone19D_EventScript_InitiatePirateBattles_Text_1:
# 56 "data/maps/Zone19D/scripts.pory"
	.string "We'll be feedin' the fish if the\nCap'n ever finds out someone found\lour hideout.$"

Zone19D_EventScript_InitiatePirateBattles_Text_2:
# 61 "data/maps/Zone19D/scripts.pory"
	.string "Well, dead men tell no tales.\pThe Cap'n will ne'er ‘ave to know,\nsavvy?$"

Zone19D_EventScript_InitiatePirateBattles_Text_3:
# 66 "data/maps/Zone19D/scripts.pory"
	.string "Ye lily-livered scallywags,\nlet's just get to the battles!$"

Zone19D_EventScript_InitiatePirateBattles_Text_4:
# 76 "data/maps/Zone19D/scripts.pory"
	.string "I be next. Fire in the hole!$"

Zone19D_EventScript_InitiatePirateBattles_Text_5:
# 84 "data/maps/Zone19D/scripts.pory"
	.string "We give no quarter!$"

Zone19D_EventScript_InitiatePirateBattles_Text_6:
# 92 "data/maps/Zone19D/scripts.pory"
	.string "Son o' a biscuit eater!\nFace the might o' us seadogs!$"

Zone19D_EventScript_InitiatePirateBattles_Text_7:
# 97 "data/maps/Zone19D/scripts.pory"
	.string "Sink me!\nThis trainer beat all four o' us!\l‘ere be your booty, take it!$"

Zone19D_EventScript_InitiatePirateBattles_Text_8:
# 99 "data/maps/Zone19D/scripts.pory"
	.string "Me hearties, run!$"

Zone19D_EventScript_InitiatePirateBattles_Text_9:
# 104 "data/maps/Zone19D/scripts.pory"
	.string "Arrr!$"

Zone19D_EventScript_InitiatePirateBattles_Text_10:
# 121 "data/maps/Zone19D/scripts.pory"
	.string "It's time to go back to the Trainer's\n"
	.string "Dojo.$"

Zone19D_Text_PirateDefeat::
# 129 "data/maps/Zone19D/scripts.pory"
	.string "Arrr!$"
