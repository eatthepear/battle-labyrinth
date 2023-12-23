Zone8D_MapScripts::
# 2 "data/maps/Zone8D/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone8D_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone8D_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone8D/scripts.pory"
	map_script_2 VAR_ZONE_8_STATE, 0, Zone8D_EventScript_WallyIntro
	.2byte 0


Zone8D_EventScript_WallyIntro::
# 8 "data/maps/Zone8D/scripts.pory"
	lockall
# 9 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 10 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 11 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 12 "data/maps/Zone8D/scripts.pory"
	playse SE_PIN
# 13 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 14 "data/maps/Zone8D/scripts.pory"
	waitse
# 15 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 16 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_WallyIntro_Text_0
# 18 "data/maps/Zone8D/scripts.pory"
	delay 40
# 19 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_WallyIntro_Text_1
# 20 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 21 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone8D/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
# 24 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone8D/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_WallyIntro_Text_2
# 27 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_8_STATE, 1
# 28 "data/maps/Zone8D/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoDown
# 30 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone8D/scripts.pory"
	special RemoveCameraObject
# 32 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 33 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 34 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
# 35 "data/maps/Zone8D/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_WallyIntro_2
Zone8D_EventScript_WallyIntro_1:
# 38 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Wally_Preparations
# 39 "data/maps/Zone8D/scripts.pory"
	releaseall
	end

Zone8D_EventScript_WallyIntro_2:
# 36 "data/maps/Zone8D/scripts.pory"
	goto Zone8D_EventScript_InitiateLeviathan8
	goto Zone8D_EventScript_WallyIntro_1


Zone8D_EventScript_WallyYesNo::
# 44 "data/maps/Zone8D/scripts.pory"
	lock
# 45 "data/maps/Zone8D/scripts.pory"
	faceplayer
# 46 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Wally_YesNo, MSGBOX_YESNO
# 47 "data/maps/Zone8D/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone8D_EventScript_WallyYesNo_2
Zone8D_EventScript_WallyYesNo_1:
# 50 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_Text_Wally_Preparations
# 51 "data/maps/Zone8D/scripts.pory"
	release
	end

Zone8D_EventScript_WallyYesNo_2:
# 48 "data/maps/Zone8D/scripts.pory"
	goto Zone8D_EventScript_InitiateLeviathan8
	goto Zone8D_EventScript_WallyYesNo_1


Zone8D_EventScript_GoWithWally::
# 65 "data/maps/Zone8D/scripts.pory"
	lockall
# 66 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_GoWithWally_Text_0
# 67 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 68 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone8D/scripts.pory"
	releaseall
	end


Zone8D_EventScript_InitiateLeviathan8::
# 74 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_0
# 75 "data/maps/Zone8D/scripts.pory"
	delay 48
# 76 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_1
# 77 "data/maps/Zone8D/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 78 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_2
# 85 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_3
# 102 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 103 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 104 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 105 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 106 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 107 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
Zone8D_EventScript_InitiateLeviathan8_1:
# 109 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 110 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone8D_Movement_Player_WalkUp
# 111 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 112 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_2
# 113 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 114 "data/maps/Zone8D/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 115 "data/maps/Zone8D/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 117 "data/maps/Zone8D/scripts.pory"
	fadeoutbgm 1
# 118 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 119 "data/maps/Zone8D/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 120 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 121 "data/maps/Zone8D/scripts.pory"
	delay 96
# 122 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 123 "data/maps/Zone8D/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 124 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 125 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_3, MSGBOX_DEFAULT
# 126 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_4, MSGBOX_DEFAULT
# 127 "data/maps/Zone8D/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 128 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 129 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_5
# 130 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 131 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 132 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
Zone8D_EventScript_InitiateLeviathan8_8:
# 134 "data/maps/Zone8D/scripts.pory"
	msgbox gText_PleasePick3Mons
# 135 "data/maps/Zone8D/scripts.pory"
	choose_mons
# 136 "data/maps/Zone8D/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_19
	goto Zone8D_EventScript_InitiateLeviathan8_8

Zone8D_EventScript_InitiateLeviathan8_2:
# 79 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 80 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 81 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 82 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 83 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 84 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_3:
# 86 "data/maps/Zone8D/scripts.pory"
	compare VAR_TEMP_1, 11
	goto_if_eq Zone8D_EventScript_InitiateLeviathan8_10
# 94 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 95 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 96 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 97 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 98 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 99 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_7:
# 140 "data/maps/Zone8D/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIRAGE
# 141 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone8D_EventScript_InitiateLeviathan8_14
# 141 "data/maps/Zone8D/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone8D_EventScript_InitiateLeviathan8_14
# 144 "data/maps/Zone8D/scripts.pory"
	multi_2_vs_1 TRAINER_PBL_MIRAGE_LEVIATHAN_8, Zone8D_EventScript_InitiateLeviathan8_Text_6, TRAINER_PBL_WALLY_ZONE8D, TRAINER_BACK_PIC_WALLY
Zone8D_EventScript_InitiateLeviathan8_13:
# 146 "data/maps/Zone8D/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 147 "data/maps/Zone8D/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne Zone8D_EventScript_InitiateLeviathan8_22
Zone8D_EventScript_InitiateLeviathan8_21:
# 152 "data/maps/Zone8D/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 153 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 154 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_7, MSGBOX_DEFAULT
# 155 "data/maps/Zone8D/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 156 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 157 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_8
# 158 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 159 "data/maps/Zone8D/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 160 "data/maps/Zone8D/scripts.pory"
	delay 40
# 161 "data/maps/Zone8D/scripts.pory"
	waitmoncry
# 162 "data/maps/Zone8D/scripts.pory"
	removeobject 1
# 163 "data/maps/Zone8D/scripts.pory"
	removeobject 2
# 164 "data/maps/Zone8D/scripts.pory"
	removeobject 3
# 165 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_8
# 166 "data/maps/Zone8D/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 167 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 168 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_9
# 169 "data/maps/Zone8D/scripts.pory"
	delay 32
# 170 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 171 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 172 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 173 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_10, MSGBOX_DEFAULT
# 174 "data/maps/Zone8D/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
# 175 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_11, MSGBOX_DEFAULT
# 176 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 177 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 178 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 179 "data/maps/Zone8D/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoUp
# 181 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 182 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Zone8D_Movement_Wally_WalkUp
# 183 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 184 "data/maps/Zone8D/scripts.pory"
	special RemoveCameraObject
# 185 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 186 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 187 "data/maps/Zone8D/scripts.pory"
	msgbox Zone8D_EventScript_InitiateLeviathan8_Text_12
# 188 "data/maps/Zone8D/scripts.pory"
	delay 40
# 189 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 190 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 191 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 192 "data/maps/Zone8D/scripts.pory"
	playmoncry SPECIES_PORYGON, 0
# 193 "data/maps/Zone8D/scripts.pory"
	waitmoncry
# 194 "data/maps/Zone8D/scripts.pory"
	setflag FLAG_HIDE_ZONE8D_WALLY
# 195 "data/maps/Zone8D/scripts.pory"
	removeobject 4
# 196 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 197 "data/maps/Zone8D/scripts.pory"
	special SpawnCameraObject
# 198 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone8D_Movement_Camera_GoDown
# 199 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 200 "data/maps/Zone8D/scripts.pory"
	special RemoveCameraObject
# 201 "data/maps/Zone8D/scripts.pory"
	setvar VAR_ZONE_8_STATE, 2
# 202 "data/maps/Zone8D/scripts.pory"
	releaseall
	end

Zone8D_EventScript_InitiateLeviathan8_10:
# 87 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 88 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 89 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
# 90 "data/maps/Zone8D/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 91 "data/maps/Zone8D/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 92 "data/maps/Zone8D/scripts.pory"
	waitmovement 0
	goto Zone8D_EventScript_InitiateLeviathan8_1

Zone8D_EventScript_InitiateLeviathan8_14:
# 142 "data/maps/Zone8D/scripts.pory"
	multi_2_vs_1 TRAINER_PBL_MIRAGE_LEVIATHAN_8_BRUTAL, Zone8D_EventScript_InitiateLeviathan8_Text_6, TRAINER_PBL_WALLY_ZONE8D, TRAINER_BACK_PIC_WALLY
	goto Zone8D_EventScript_InitiateLeviathan8_13

Zone8D_EventScript_InitiateLeviathan8_19:
	goto Zone8D_EventScript_InitiateLeviathan8_7

Zone8D_EventScript_InitiateLeviathan8_22:
# 148 "data/maps/Zone8D/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 149 "data/maps/Zone8D/scripts.pory"
	special SetCB2WhiteOut
# 150 "data/maps/Zone8D/scripts.pory"
	waitstate
	goto Zone8D_EventScript_InitiateLeviathan8_21


# 206 "data/maps/Zone8D/scripts.pory"
Zone8D_Movement_Camera_GoUp:
# 207 "data/maps/Zone8D/scripts.pory"
	walk_up
# 207 "data/maps/Zone8D/scripts.pory"
	walk_up
# 207 "data/maps/Zone8D/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/Zone8D/scripts.pory"
Zone8D_Movement_Camera_GoDown:
# 211 "data/maps/Zone8D/scripts.pory"
	walk_down
# 211 "data/maps/Zone8D/scripts.pory"
	walk_down
# 211 "data/maps/Zone8D/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/Zone8D/scripts.pory"
Zone8D_Movement_Wally_WalkUp:
# 215 "data/maps/Zone8D/scripts.pory"
	walk_up
# 215 "data/maps/Zone8D/scripts.pory"
	walk_up
# 215 "data/maps/Zone8D/scripts.pory"
	walk_up
	step_end

# 218 "data/maps/Zone8D/scripts.pory"
Zone8D_Movement_Player_WalkUp:
# 219 "data/maps/Zone8D/scripts.pory"
	walk_up
# 220 "data/maps/Zone8D/scripts.pory"
	walk_right
# 221 "data/maps/Zone8D/scripts.pory"
	walk_up
	step_end

Zone8D_EventScript_WallyIntro_Text_0:
# 17 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Um… E-excuse me…\p"
	.string "I'm {COLOR BLUE}Wally{COLOR DARK_GRAY}…{PAUSE_UNTIL_PRESS} N-nice to meet you…{PAUSE_UNTIL_PRESS} Um…$"

Zone8D_EventScript_WallyIntro_Text_1:
# 19 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Are you taking on the {COLOR RED}Pokémon\n"
	.string "Battle Labyrinth{COLOR DARK_GRAY} too?\l"
	.string "These two Zones have b-been quite a\l"
	.string "challenge for me so far.\p"
	.string "I'm s-sure the exit is just a little\n"
	.string "ahead.$"

Zone8D_EventScript_WallyIntro_Text_2:
# 26 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I need to pass through, b-but\n"
	.string "they've been blocking the way.\p"
	.string "They look really strong though…\n"
	.string "I'm worried I w-won't be able to defeat\l"
	.string "them alone.$"

Zone8D_EventScript_GoWithWally_Text_0:
# 66 "data/maps/Zone8D/scripts.pory"
	.string "You don't want to battle without {COLOR BLUE}Wally{COLOR DARK_GRAY}.\n"
	.string "His aid will be invaluable.$"

Zone8D_EventScript_InitiateLeviathan8_Text_0:
# 74 "data/maps/Zone8D/scripts.pory"
	.string "Thank you. What's your name?$"

Zone8D_EventScript_InitiateLeviathan8_Text_1:
# 76 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}{PLAYER}{COLOR DARK_GRAY}. I'll remember that.$"

Zone8D_EventScript_InitiateLeviathan8_Text_2:
# 112 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: E-excuse me! We would like to\n"
	.string "pass through!$"

Zone8D_EventScript_InitiateLeviathan8_Text_3:
# 125 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It is back again.\n"
	.string "With a friend this time.$"

Zone8D_EventScript_InitiateLeviathan8_Text_4:
# 126 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: This should be… entertaining.\p"
	.string "Deal with them.$"

Zone8D_EventScript_InitiateLeviathan8_Text_5:
# 129 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: At once.$"

Zone8D_EventScript_InitiateLeviathan8_Text_6:
# 142 "data/maps/Zone8D/scripts.pory"
	.string "…$"

Zone8D_EventScript_InitiateLeviathan8_Text_7:
# 154 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: I was defeated…$"

Zone8D_EventScript_InitiateLeviathan8_Text_8:
# 157 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: No matter. It's done.$"

Zone8D_EventScript_InitiateLeviathan8_Text_9:
# 168 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Who were those p-people?\n"
	.string "And what was with that Pokémon they\l"
	.string "had with them?\p"
	.string "That was a Shiny {COLOR BLUE}Porygon{COLOR DARK_GRAY}, w-wasn't it?$"

Zone8D_EventScript_InitiateLeviathan8_Text_10:
# 173 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Um… anyways, thanks for your\n"
	.string "help, {PLAYER}.\p"
	.string "I um… I want you to have this.$"

Zone8D_EventScript_InitiateLeviathan8_Text_11:
# 175 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: It's not… the flashiest item, but\n"
	.string "I'm sure it'll be useful.$"

Zone8D_EventScript_InitiateLeviathan8_Text_12:
# 187 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: I hope we meet again.\p"
	.string "Goodbye, {PLAYER}.$"

Zone8D_Text_Wally_YesNo::
# 56 "data/maps/Zone8D/scripts.pory"
	.string "{COLOR BLUE}Wally{COLOR DARK_GRAY}: Will you join forces with me to\n"
	.string "defeat them?$"

Zone8D_Text_Wally_Preparations::
# 60 "data/maps/Zone8D/scripts.pory"
	.string "You… must have preparations to do.\p"
	.string "I-I'll just be waiting here, for you. Let\n"
	.string "me know when you're ready.$"
