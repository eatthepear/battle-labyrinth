EventScript_EnterSanctuary::
# 2 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 3 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MONEY, 0
# 4 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraUp
# 5 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 6 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 7 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 8 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 9 "data/scripts/battle_labyrinth.pory"
	waitse
# 10 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraDown
# 11 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_Colress_WalkDown
# 12 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 13 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_BADGE
	return


EventScript_MoveCameraUp::
# 18 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 19 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 20 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 21 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 22 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 23 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
# 28 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 29 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 30 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 31 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 32 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 33 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_HandleFlashlight::
# 38 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_FLASHLIGHT
# 39 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 42 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 40 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_Shop_General::
# 48 "data/scripts/battle_labyrinth.pory"
	lock
# 49 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 50 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_General_2
EventScript_Shop_General_1:
# 54 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_General_6
EventScript_Shop_General_4:
# 58 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_General_Text_2
# 59 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 60 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 61 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_General_11
# 62 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_General_11
# 63 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_General_11
# 65 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_General_12
# 66 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_General_12
# 67 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_General_12
# 68 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_General_12
# 70 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_General_13
# 71 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_General_13
# 72 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_General_13
# 73 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_General_13
# 75 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_General_14
# 76 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_General_14
# 78 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_General_15
# 79 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_General_15
# 80 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_General_15
# 81 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_General_15
# 82 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_General_15
# 83 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_General_15
# 84 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_General_15
# 85 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_General_15
# 86 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_General_15
# 88 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_General_16
EventScript_Shop_General_9:
# 91 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_General_Text_3, MSGBOX_DEFAULT
# 92 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_General_2:
# 51 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_General_Text_0
# 52 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_General_1

EventScript_Shop_General_5:
# 55 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_General_Text_1
# 56 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_SUPER_POTION_INTRO
	goto EventScript_Shop_General_4

EventScript_Shop_General_6:
# 54 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_SUPER_POTION_INTRO, EventScript_Shop_General_5
	goto EventScript_Shop_General_4

EventScript_Shop_General_11:
# 64 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_1to3
	goto EventScript_Shop_General_9

EventScript_Shop_General_12:
# 69 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_4to8
	goto EventScript_Shop_General_9

EventScript_Shop_General_13:
# 74 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_9to12
	goto EventScript_Shop_General_9

EventScript_Shop_General_14:
# 77 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_13to15
	goto EventScript_Shop_General_9

EventScript_Shop_General_15:
# 87 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_16to25
	goto EventScript_Shop_General_9

EventScript_Shop_General_16:
# 89 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_General_9


	.align 2
# 95 "data/scripts/battle_labyrinth.pory"
Shop_General_1to3:
# 96 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 97 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 98 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 99 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 102 "data/scripts/battle_labyrinth.pory"
Shop_General_4to8:
# 103 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 104 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 105 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 106 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 107 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 108 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 109 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 110 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 111 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 112 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 115 "data/scripts/battle_labyrinth.pory"
Shop_General_9to12:
# 116 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 117 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 118 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 119 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 120 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 121 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 122 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 123 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 124 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 125 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 126 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 127 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 128 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 129 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 130 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 131 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 132 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 133 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 134 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 135 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 136 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 139 "data/scripts/battle_labyrinth.pory"
Shop_General_13to15:
# 140 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 141 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 142 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 143 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 144 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 145 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 146 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 147 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 148 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 149 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 150 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 151 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 152 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 153 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 154 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 155 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 156 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 157 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 158 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 159 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 160 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 161 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 162 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 165 "data/scripts/battle_labyrinth.pory"
Shop_General_16to25:
# 166 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 167 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 168 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 169 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 170 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 171 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 172 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 173 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 174 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 175 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 176 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 177 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 178 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 179 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 180 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 181 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 182 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 184 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 185 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 186 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 187 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 188 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 189 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 192 "data/scripts/battle_labyrinth.pory"
Shop_General_26to30:
# 193 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 194 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 195 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 196 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 197 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 198 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 199 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 200 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 201 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 202 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 203 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 204 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 205 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 206 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 207 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELIXIR
# 208 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 209 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 210 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 211 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 212 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 213 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 214 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 215 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 216 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 217 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
# 218 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HP_UP
# 219 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTEIN
# 220 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_IRON
# 221 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CALCIUM
# 222 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZINC
# 223 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

EventScript_Shop_Unique_Varrick::
# 227 "data/scripts/battle_labyrinth.pory"
	lock
# 228 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 229 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Unique_Varrick_2
EventScript_Shop_Unique_Varrick_1:
# 246 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Unique_Varrick_Text_1
# 247 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 248 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 249 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Unique_Varrick_6
# 250 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Unique_Varrick_6
# 251 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Unique_Varrick_6
# 253 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Unique_Varrick_7
# 254 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Unique_Varrick_7
# 256 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Unique_Varrick_8
# 257 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Unique_Varrick_8
# 259 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Unique_Varrick_9
# 260 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Unique_Varrick_9
# 262 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Unique_Varrick_10
# 263 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Unique_Varrick_10
# 264 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Unique_Varrick_10
# 265 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Unique_Varrick_10
# 267 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Unique_Varrick_11
# 268 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Unique_Varrick_11
# 269 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Unique_Varrick_11
# 270 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Unique_Varrick_11
# 272 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Unique_Varrick_12
# 273 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Unique_Varrick_12
# 274 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Unique_Varrick_12
# 276 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Unique_Varrick_13
# 277 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Unique_Varrick_13
# 279 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Unique_Varrick_14
EventScript_Shop_Unique_Varrick_4:
# 286 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Unique_Varrick_Text_2, MSGBOX_DEFAULT
# 287 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Unique_Varrick_2:
# 230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Unique_Varrick_Text_0
# 244 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Unique_Varrick_1

EventScript_Shop_Unique_Varrick_6:
# 252 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_7:
# 255 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_8:
# 258 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_9:
# 261 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_10:
# 266 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_11:
# 271 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_12:
# 275 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_13:
# 278 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_14:
# 280 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Unique_Varrick_15
# 280 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Unique_Varrick_15
# 283 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Unique_Varrick_4

EventScript_Shop_Unique_Varrick_15:
# 281 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Unique_Varrick_4


	.align 2
# 291 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_1to3:
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 295 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 306 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 321 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 358 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 381 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 412 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 450 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 484 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 545 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 595 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 596 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Unique_ZhuLi::
# 600 "data/scripts/battle_labyrinth.pory"
	lock
# 601 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 602 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Unique_ZhuLi_Text_0
# 603 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 604 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 605 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Unique_ZhuLi_3
# 606 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Unique_ZhuLi_3
# 607 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Unique_ZhuLi_3
# 608 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Unique_ZhuLi_3
# 610 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Unique_ZhuLi_4
# 611 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Unique_ZhuLi_4
# 612 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Unique_ZhuLi_4
# 613 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Unique_ZhuLi_4
# 615 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Unique_ZhuLi_5
# 616 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Unique_ZhuLi_5
# 617 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Unique_ZhuLi_5
# 619 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Unique_ZhuLi_6
# 620 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Unique_ZhuLi_6
# 621 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Unique_ZhuLi_6
EventScript_Shop_Unique_ZhuLi_1:
# 624 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Unique_ZhuLi_Text_1, MSGBOX_DEFAULT
# 625 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Unique_ZhuLi_3:
# 609 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_11to15
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_4:
# 614 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_16to20
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_5:
# 618 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_6:
# 622 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_1


	.align 2
# 628 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_11to15:
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 635 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 636 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 649 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 650 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 651 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 656 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 657 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 658 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 659 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 662 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_16to20:
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 668 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 669 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 670 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 671 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 672 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 673 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 674 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 675 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 676 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 677 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 678 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 679 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 680 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 681 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 682 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 683 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 684 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 685 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 686 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 687 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 688 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 689 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 690 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 691 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LOVE_SWEET
# 692 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BERRY_SWEET
# 693 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CLOVER_SWEET
# 694 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLOWER_SWEET
# 695 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STAR_SWEET
# 696 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RIBBON_SWEET
# 697 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 698 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 699 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 700 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 701 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 702 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 703 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 704 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 705 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 706 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 707 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 708 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 709 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 710 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 711 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 712 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 713 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 714 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 717 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_21to23:
# 718 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 719 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 720 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 721 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 722 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 723 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 724 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 725 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 726 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 727 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 728 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 729 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 730 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 731 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 732 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 733 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 734 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 735 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 736 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 737 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 738 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 739 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 740 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 741 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 742 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 743 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 744 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 745 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 746 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 747 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 748 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

	.align 2
# 751 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_24to30:
# 752 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 753 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 754 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 755 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 756 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 757 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 758 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 759 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 760 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 761 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 762 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 763 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 764 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 765 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 766 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 767 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 768 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTECTOR
# 769 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_SCALE
# 770 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTIRIZER
# 771 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGMARIZER
# 772 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REAPER_CLOTH
# 773 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_FANG
# 774 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_CLAW
# 775 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUBIOUS_DISC
# 776 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 777 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 778 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 779 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 780 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 781 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 782 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 783 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 784 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 785 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 786 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 787 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 788 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 789 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 790 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

EventScript_Shop_ZhuLiIntro::
# 794 "data/scripts/battle_labyrinth.pory"
	lockall
# 795 "data/scripts/battle_labyrinth.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 796 "data/scripts/battle_labyrinth.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 797 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 798 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 799 "data/scripts/battle_labyrinth.pory"
	waitse
# 800 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 801 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq EventScript_Shop_ZhuLiIntro_2
EventScript_Shop_ZhuLiIntro_1:
# 807 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 808 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 809 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 810 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 811 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_0
# 812 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_1
# 813 "data/scripts/battle_labyrinth.pory"
	playse SE_APPLAUSE
# 814 "data/scripts/battle_labyrinth.pory"
	waitse
# 815 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_2
# 816 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_3
# 817 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_4
# 818 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZHULI_INTRO, 1
# 819 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 820 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_Shop_ZhuLiIntro_2:
# 802 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 803 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 804 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 805 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_Shop_ZhuLiIntro_1


EventScript_Shop_Lelouch::
# 824 "data/scripts/battle_labyrinth.pory"
	lock
# 825 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 826 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 832 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 837 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 852 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 853 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Lelouch_Text_9
# 854 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 855 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 857 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 859 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 861 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 864 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_10
# 865 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 827 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 828 "data/scripts/battle_labyrinth.pory"
	delay 96
# 829 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 830 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 834 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 850 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 856 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 858 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 860 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 862 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 877 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 878 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 882 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 883 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 884 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 887 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 2
# 888 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 889 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 890 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 904 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1063 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1064 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 879 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 885 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 884 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 884 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 891 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 892 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 905 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 906 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 893 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 894 "data/scripts/battle_labyrinth.pory"
	waitstate
# 895 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 900 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 907 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 908 "data/scripts/battle_labyrinth.pory"
	waitstate
# 909 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 912 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 913 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 916 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 917 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 918 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 919 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 920 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 921 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 922 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 925 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 928 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 931 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 934 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 936 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 937 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 940 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 941 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 942 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 943 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 946 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 949 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 952 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 955 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 957 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 958 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 961 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 962 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 963 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 964 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 967 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 970 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 973 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 976 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 978 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 979 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 982 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 983 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 984 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 985 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 988 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 991 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 994 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 997 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 999 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1000 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1003 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1004 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1005 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1006 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1009 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1012 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1015 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1018 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1020 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1021 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1024 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1025 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1026 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1027 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1030 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1033 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1036 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1039 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1041 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1042 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1045 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1049 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1050 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1053 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1054 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1055 "data/scripts/battle_labyrinth.pory"
	waitse
# 1056 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1057 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1058 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 896 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 897 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 898 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 910 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 914 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 923 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 924 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 926 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 927 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 929 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 930 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 932 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 933 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 935 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 944 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 945 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 947 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 948 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 950 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 951 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 953 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 954 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 956 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 965 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 966 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 968 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 969 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 971 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 972 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 974 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 975 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 977 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 986 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 987 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 989 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 990 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 992 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 993 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 995 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 996 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 998 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1007 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1008 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1010 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1011 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1013 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1014 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1016 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1017 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1019 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1028 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1029 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1031 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1032 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1034 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1035 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1037 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1038 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1040 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1046 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1111 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1112 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
# 1116 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
# 1117 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
# 1121 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
# 1122 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1123 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1124 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1127 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1128 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1132 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1136 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
# 1137 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1138 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1139 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
# 1142 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1143 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
# 1113 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
# 1129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
# 1133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
# 1150 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1151 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
# 1156 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
# 1157 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
EventScript_Shop_Lelouch_MoveTutor_6:
# 1193 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 50
# 1194 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1195 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1196 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_11
# 1199 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_12
# 1202 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_13
# 1205 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_14
# 1208 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_15
# 1211 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_16
# 1214 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_17
# 1217 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_18
# 1220 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_19
# 1223 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_20
# 1301 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_21
# 1302 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_21
EventScript_Shop_Lelouch_MoveTutor_9:
# 1305 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1306 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_10, MSGBOX_YESNO
# 1307 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1310 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_DEFAULT
# 1311 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1312 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_26
# 1315 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
# 1316 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
# 1152 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
# 1158 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_0, 1
# 1159 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 2
# 1160 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 3
# 1161 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 4
# 1162 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 5
# 1163 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 6
# 1164 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 7
# 1165 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 8
# 1166 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 9
# 1167 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 10
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1197 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1198 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_12:
# 1200 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1201 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_13:
# 1203 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_14:
# 1206 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1207 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_15:
# 1209 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1210 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_16:
# 1212 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1213 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_17:
# 1215 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1216 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_18:
# 1218 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1219 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_19:
# 1221 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1222 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_20:
# 1224 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1225 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_21:
	return

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_26:
	goto EventScript_Shop_Lelouch_MoveTutor_4


EventScript_Shop_Lelouch_Other::
# 1323 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1324 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1328 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1329 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1330 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1331 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1334 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1335 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1338 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1339 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1340 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1341 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1342 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1343 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1344 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1350 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1356 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1362 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1368 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1374 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1380 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1386 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1392 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1398 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1404 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1410 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1416 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1422 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1428 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1434 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1440 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1446 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1452 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1458 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1464 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1470 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1473 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1474 "data/scripts/battle_labyrinth.pory"
	waitse
# 1475 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1476 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1477 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1478 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1325 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1336 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1345 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1346 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1347 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1351 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1352 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1353 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1357 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1358 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1359 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1363 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1364 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1365 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1369 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1370 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1371 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1375 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1376 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1377 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1381 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1382 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1383 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1387 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1388 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1389 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1393 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1395 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1399 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1400 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1401 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1405 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1406 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1407 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1411 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1412 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1413 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1417 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1418 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1419 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1423 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1424 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1425 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1429 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1430 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1431 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1435 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1436 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1437 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1441 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1442 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1443 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1447 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1448 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1449 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1453 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1454 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1455 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1459 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1460 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1461 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1465 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1466 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1467 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_75
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_34:
	return

EventScript_Shop_Lelouch_Other_35:
	return

EventScript_Shop_Lelouch_Other_37:
	return

EventScript_Shop_Lelouch_Other_39:
	return

EventScript_Shop_Lelouch_Other_41:
	return

EventScript_Shop_Lelouch_Other_43:
	return

EventScript_Shop_Lelouch_Other_45:
	return

EventScript_Shop_Lelouch_Other_47:
	return

EventScript_Shop_Lelouch_Other_49:
	return

EventScript_Shop_Lelouch_Other_51:
	return

EventScript_Shop_Lelouch_Other_53:
	return

EventScript_Shop_Lelouch_Other_55:
	return

EventScript_Shop_Lelouch_Other_57:
	return

EventScript_Shop_Lelouch_Other_59:
	return

EventScript_Shop_Lelouch_Other_61:
	return

EventScript_Shop_Lelouch_Other_63:
	return

EventScript_Shop_Lelouch_Other_65:
	return

EventScript_Shop_Lelouch_Other_67:
	return

EventScript_Shop_Lelouch_Other_69:
	return

EventScript_Shop_Lelouch_Other_71:
	return

EventScript_Shop_Lelouch_Other_73:
	return

EventScript_Shop_Lelouch_Other_75:
	return


EventScript_Shop_Joy::
# 1489 "data/scripts/battle_labyrinth.pory"
	lock
# 1490 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1491 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1495 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1496 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1497 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1498 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1502 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1503 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1507 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1508 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1510 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1511 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1512 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1513 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1514 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1515 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1516 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1519 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1520 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1492 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1493 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1499 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1500 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1504 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1505 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_MandatoryCheck::
# 1525 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1525 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1526 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1527 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1528 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1529 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1530 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1531 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1534 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1536 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1532 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1544 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1545 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1546 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1547 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1550 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1552 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1548 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1556 "data/scripts/battle_labyrinth.pory"
	lock
# 1557 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1558 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1563 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1564 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1565 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1566 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1568 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1570 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1572 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1574 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1577 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1578 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1559 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1560 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1561 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1567 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1569 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1571 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1573 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1575 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1581 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1585 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1590 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
# 1596 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1602 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1603 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1604 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1605 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1609 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1610 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1611 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1612 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1619 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1626 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1633 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1634 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	return

EventScript_LeavingSetup_2:
# 1613 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1614 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1615 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1616 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1617 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1620 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1621 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1622 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1623 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1624 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1627 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1628 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1629 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1630 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1631 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
# 1639 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1642 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1645 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1648 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1652 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1653 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1654 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1640 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1641 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1643 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1644 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1646 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1647 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1649 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1650 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1659 "data/scripts/battle_labyrinth.pory"
	lockall
# 1660 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0A, 255, 17, 10
# 1661 "data/scripts/battle_labyrinth.pory"
	waitstate
	return


EventScript_Documentation::
# 1665 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Version
# 1666 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1709 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1710 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1711 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1713 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1716 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1718 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1721 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1723 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1726 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1728 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1731 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1734 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1736 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1739 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1741 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1742 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1742 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1745 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1747 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1747 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1750 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1752 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1752 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1755 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1757 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1757 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1760 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1765 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1767 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1767 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1770 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1772 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1772 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
# 1775 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1777 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1777 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1780 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1782 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1782 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1785 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1787 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1787 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1790 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1792 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_92
# 1792 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_92
# 1795 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_35, 17
EventScript_Settings_91:
# 1797 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 18
# 1798 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1799 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1800 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_98
# 1831 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_99
# 1863 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_100
# 1892 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_101
# 1956 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_102
# 1975 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_103
# 1994 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_104
# 1996 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_105
# 2021 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_106
# 2046 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_107
# 2071 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_108
# 2096 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_109
# 2121 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_110
# 2150 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_111
# 2175 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_112
# 2200 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_113
# 2225 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_114
# 2251 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_115
# 2276 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Settings_116
# 2277 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_116
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1712 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1714 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1717 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1719 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1722 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1724 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1727 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1729 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1732 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1737 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1743 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1748 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1753 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1758 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1763 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1768 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1773 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1778 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1783 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1788 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1793 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_34, 17
	goto EventScript_Settings_91

EventScript_Settings_98:
# 1801 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1802 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_117
# 1815 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_195
# 1818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_YESNO
# 1819 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_99:
# 1832 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1833 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_121
EventScript_Settings_120:
# 1837 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_198
# 1851 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_YESNO
# 1852 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_100:
# 1864 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1865 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_123
# 1881 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_YESNO
# 1882 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_204
	goto EventScript_Settings_1

EventScript_Settings_101:
# 1893 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1894 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_126
# 1941 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_209
# 1944 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_YESNO
# 1945 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_102:
# 1957 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 1958 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_129
# 1967 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 1968 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_214
	goto EventScript_Settings_1

EventScript_Settings_103:
# 1976 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 1977 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_132
# 1986 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_YESNO
# 1987 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_218
	goto EventScript_Settings_1

EventScript_Settings_104:
# 1995 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_105:
# 1997 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 1998 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_135
# 1998 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_135
# 2012 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2013 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2014 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_223
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2022 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2023 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_140
# 2023 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_140
# 2037 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2038 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2039 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_228
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2047 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2048 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_145
# 2048 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_145
# 2062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2063 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2064 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_233
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2072 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2073 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_150
# 2073 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_150
# 2087 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2088 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2089 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_238
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2097 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2098 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_155
# 2098 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_155
# 2112 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2113 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2114 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_243
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2122 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2123 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_160
# 2123 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_160
# 2137 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2138 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_248
# 2147 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_111:
# 2151 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2152 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_165
# 2152 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_165
# 2166 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2167 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2168 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_254
	goto EventScript_Settings_1

EventScript_Settings_112:
# 2176 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2177 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_170
# 2177 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_170
# 2191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2192 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2193 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_259
	goto EventScript_Settings_1

EventScript_Settings_113:
# 2201 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2202 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_175
# 2202 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_175
# 2216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2217 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2218 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2226 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2227 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_180
# 2227 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_180
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2242 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2243 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_269
	goto EventScript_Settings_1

EventScript_Settings_115:
# 2252 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2253 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_185
# 2253 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_185
# 2267 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_148, MSGBOX_DEFAULT
# 2268 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_149, MSGBOX_YESNO
# 2269 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_116:
# 2278 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_190
# 2281 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_117:
# 1803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_YESNO
# 1804 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_193
	goto EventScript_Settings_1

EventScript_Settings_121:
# 1834 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUZLOCKE_DEATHS
# 1835 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NumDeathsNuzlocke, MSGBOX_DEFAULT
	goto EventScript_Settings_120

EventScript_Settings_123:
# 1866 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_201
# 1869 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_YESNO
# 1870 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_126:
# 1895 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_206
# 1929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_YESNO
# 1930 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_129:
# 1959 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_YESNO
# 1960 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_212
	goto EventScript_Settings_1

EventScript_Settings_132:
# 1978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 1979 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_135:
# 1999 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 2000 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_220
# 2009 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_140:
# 2024 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 2025 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_225
# 2034 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_145:
# 2049 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 2050 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_230
# 2059 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_150:
# 2074 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 2075 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_235
# 2084 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_155:
# 2099 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 2100 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_240
# 2109 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_160:
# 2124 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 2125 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_245
# 2134 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_165:
# 2153 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 2154 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_251
# 2163 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_170:
# 2178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2179 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_256
# 2188 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_175:
# 2203 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2204 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_261
# 2213 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_180:
# 2228 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2229 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_266
# 2238 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_185:
# 2254 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_DEFAULT
# 2255 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_271
# 2264 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_190:
	return

EventScript_Settings_193:
# 1805 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1806 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_195:
# 1816 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_198:
# 1838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_YESNO
# 1839 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_201:
# 1867 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_204:
# 1883 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1884 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_206:
# 1896 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1897 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_YESNO
# 1898 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_209:
# 1942 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_212:
# 1961 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1962 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 1963 "data/scripts/battle_labyrinth.pory"
	waitse
# 1964 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_214:
# 1969 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1970 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 1971 "data/scripts/battle_labyrinth.pory"
	waitse
# 1972 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_216:
# 1980 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1981 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 1982 "data/scripts/battle_labyrinth.pory"
	waitse
# 1983 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_218:
# 1988 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1989 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_DEFAULT
# 1990 "data/scripts/battle_labyrinth.pory"
	waitse
# 1991 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_220:
# 2001 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_YESNO
# 2002 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2015 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2016 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2017 "data/scripts/battle_labyrinth.pory"
	waitse
# 2018 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_225:
# 2026 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_YESNO
# 2027 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2040 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2041 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2042 "data/scripts/battle_labyrinth.pory"
	waitse
# 2043 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_230:
# 2051 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_YESNO
# 2052 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2065 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2066 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2067 "data/scripts/battle_labyrinth.pory"
	waitse
# 2068 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_235:
# 2076 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_YESNO
# 2077 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2090 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2091 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2092 "data/scripts/battle_labyrinth.pory"
	waitse
# 2093 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_240:
# 2101 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_YESNO
# 2102 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_243:
# 2115 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2117 "data/scripts/battle_labyrinth.pory"
	waitse
# 2118 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_245:
# 2126 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_YESNO
# 2127 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_248:
# 2139 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2140 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_251:
# 2155 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_YESNO
# 2156 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2169 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2170 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2171 "data/scripts/battle_labyrinth.pory"
	waitse
# 2172 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_256:
# 2180 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_YESNO
# 2181 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2194 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2195 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2196 "data/scripts/battle_labyrinth.pory"
	waitse
# 2197 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_261:
# 2205 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_YESNO
# 2206 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2219 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2220 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2221 "data/scripts/battle_labyrinth.pory"
	waitse
# 2222 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_YESNO
# 2231 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_269:
# 2244 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2245 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2246 "data/scripts/battle_labyrinth.pory"
	waitse
# 2247 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_271:
# 2256 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_YESNO
# 2257 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2270 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2271 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_150, MSGBOX_DEFAULT
# 2272 "data/scripts/battle_labyrinth.pory"
	waitse
# 2273 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1807 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1808 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_DEFAULT
# 1809 "data/scripts/battle_labyrinth.pory"
	waitse
# 1810 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
# 1811 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_278:
# 1820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_YESNO
# 1821 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_280:
# 1840 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1841 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_320
	goto EventScript_Settings_1

EventScript_Settings_282:
# 1853 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1854 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_322
	goto EventScript_Settings_1

EventScript_Settings_284:
# 1871 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1872 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_324
	goto EventScript_Settings_1

EventScript_Settings_286:
# 1885 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1886 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_DEFAULT
# 1887 "data/scripts/battle_labyrinth.pory"
	waitse
# 1888 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_288:
# 1899 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1900 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1901 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1902 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1903 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1904 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1905 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1906 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1907 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1908 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1909 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1910 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1911 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1912 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1913 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1914 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1915 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1916 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1917 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1918 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1919 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1920 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1921 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1922 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1923 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1924 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1925 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1926 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_290:
# 1931 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 1932 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_326
	goto EventScript_Settings_1

EventScript_Settings_292:
# 1946 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 1947 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_328
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2003 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2004 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2005 "data/scripts/battle_labyrinth.pory"
	waitse
# 2006 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2028 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2029 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2030 "data/scripts/battle_labyrinth.pory"
	waitse
# 2031 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2053 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2054 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2055 "data/scripts/battle_labyrinth.pory"
	waitse
# 2056 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2078 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2079 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2080 "data/scripts/battle_labyrinth.pory"
	waitse
# 2081 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2103 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2104 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2105 "data/scripts/battle_labyrinth.pory"
	waitse
# 2106 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2128 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2130 "data/scripts/battle_labyrinth.pory"
	waitse
# 2131 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2141 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2142 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2143 "data/scripts/battle_labyrinth.pory"
	waitse
# 2144 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2157 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2158 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2159 "data/scripts/battle_labyrinth.pory"
	waitse
# 2160 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2182 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2184 "data/scripts/battle_labyrinth.pory"
	waitse
# 2185 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2207 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2208 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2209 "data/scripts/battle_labyrinth.pory"
	waitse
# 2210 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2232 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2233 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2234 "data/scripts/battle_labyrinth.pory"
	waitse
# 2235 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2258 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2259 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_147, MSGBOX_DEFAULT
# 2260 "data/scripts/battle_labyrinth.pory"
	waitse
# 2261 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_318:
# 1822 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1823 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
# 1824 "data/scripts/battle_labyrinth.pory"
	waitse
# 1825 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
# 1826 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_320:
# 1842 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1843 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_DEFAULT
# 1844 "data/scripts/battle_labyrinth.pory"
	waitse
# 1845 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1846 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
# 1847 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_322:
# 1855 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1856 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_DEFAULT
# 1857 "data/scripts/battle_labyrinth.pory"
	waitse
# 1858 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
# 1859 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_324:
# 1873 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1874 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_DEFAULT
# 1875 "data/scripts/battle_labyrinth.pory"
	waitse
# 1876 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_326:
# 1933 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_DEFAULT
# 1935 "data/scripts/battle_labyrinth.pory"
	waitse
# 1936 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_328:
# 1948 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1949 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_DEFAULT
# 1950 "data/scripts/battle_labyrinth.pory"
	waitse
# 1951 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2289 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_0, MSGBOX_DEFAULT
# 2291 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_MusicMenu_Text_4
# 2292 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2293 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2335 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2377 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2419 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2420 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2294 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2295 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2336 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2337 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2378 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2379 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2296 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2297 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2300 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2303 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2306 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2309 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2312 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2316 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2317 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2318 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2320 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2322 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2324 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2326 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2328 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2331 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2338 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2339 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2342 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2345 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2348 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2351 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2354 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2358 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2359 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2360 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2362 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2364 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2366 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2368 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2370 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2373 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2380 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2381 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2384 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2387 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2390 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2393 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2396 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2400 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2401 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2402 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2404 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2406 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2408 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2410 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2412 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2415 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2298 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2299 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_5, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2301 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2302 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_6, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2304 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2305 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_7, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2307 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2308 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_8, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2310 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2311 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_9, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2314 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_10, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2340 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2341 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_18, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2343 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_19, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2346 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2347 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_20, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2349 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2350 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_21, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2352 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2353 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_22, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2356 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2382 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2383 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_25, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2385 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2386 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2388 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2389 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_27, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2391 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2392 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_28, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2394 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2395 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_29, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2398 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2319 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2321 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2323 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2325 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2327 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2332 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2361 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2363 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2367 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2369 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2372 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2374 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2403 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2405 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2407 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2409 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2411 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2414 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_31
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2416 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2427 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2428 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2429 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2430 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2431 "data/scripts/battle_labyrinth.pory"
	switch VAR_REVISITING_ZONE
# 2432 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WarpZone0_3
# 2436 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WarpZone0_4
# 2440 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WarpZone0_5
# 2444 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WarpZone0_6
# 2448 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WarpZone0_7
# 2452 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WarpZone0_8
# 2456 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WarpZone0_9
# 2460 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_WarpZone0_10
# 2464 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WarpZone0_11
# 2468 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WarpZone0_12
# 2472 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WarpZone0_13
# 2476 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WarpZone0_14
# 2480 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WarpZone0_15
# 2484 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_WarpZone0_16
# 2488 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WarpZone0_17
# 2492 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WarpZone0_18
# 2496 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WarpZone0_19
# 2500 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WarpZone0_20
# 2504 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_WarpZone0_21
# 2508 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WarpZone0_22
# 2512 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WarpZone0_23
# 2516 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WarpZone0_24
# 2520 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WarpZone0_25
# 2524 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WarpZone0_26
# 2528 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_WarpZone0_27
# 2532 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_WarpZone0_28
# 2536 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_WarpZone0_29
# 2540 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_WarpZone0_30
# 2544 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_WarpZone0_31
# 2548 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_WarpZone0_32
# 2552 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_WarpZone0_33
# 2556 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_WarpZone0_34
# 2560 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_WarpZone0_35
# 2564 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_WarpZone0_36
# 2568 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_WarpZone0_37
# 2572 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_WarpZone0_38
# 2576 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_WarpZone0_39
# 2580 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_WarpZone0_40
# 2584 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_WarpZone0_41
# 2588 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_WarpZone0_42
# 2592 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_WarpZone0_43
# 2596 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_WarpZone0_44
# 2600 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_WarpZone0_45
# 2604 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_WarpZone0_46
# 2608 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_WarpZone0_47
# 2612 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_WarpZone0_48
# 2616 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_WarpZone0_49
# 2620 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_WarpZone0_50
# 2624 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_WarpZone0_51
# 2628 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_WarpZone0_52
# 2632 "data/scripts/battle_labyrinth.pory"
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
# 2637 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_WarpZone0_3:
# 2433 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2434 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 32
# 2435 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
# 2437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2438 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 32
# 2439 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
# 2441 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2442 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 32
# 2443 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
# 2445 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2446 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 32
# 2447 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
# 2449 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2450 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 32
# 2451 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
# 2453 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2454 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 32
# 2455 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
# 2457 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2458 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 32
# 2459 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
# 2461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2462 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 32
# 2463 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
# 2465 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2466 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 32
# 2467 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
# 2469 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2470 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 32
# 2471 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
# 2473 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2474 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 25
# 2475 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
# 2477 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2478 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 25
# 2479 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
# 2481 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2482 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 25
# 2483 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
# 2485 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2486 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 25
# 2487 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
# 2489 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2490 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 25
# 2491 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
# 2493 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2494 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 25
# 2495 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
# 2497 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2498 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 25
# 2499 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
# 2501 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2502 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 25
# 2503 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
# 2505 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2506 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 25
# 2507 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
# 2509 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2510 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 25
# 2511 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
# 2513 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2514 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 18
# 2515 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
# 2517 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2518 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 18
# 2519 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
# 2521 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2522 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 18
# 2523 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
# 2525 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2526 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 18
# 2527 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
# 2529 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2530 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 18
# 2531 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
# 2533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2534 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 18
# 2535 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
# 2537 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2538 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 18
# 2539 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
# 2541 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2542 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 18
# 2543 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
# 2545 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2546 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 18
# 2547 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
# 2549 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2550 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 18
# 2551 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
# 2553 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2554 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 11
# 2555 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
# 2557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2558 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 11
# 2559 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
# 2561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2562 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 11
# 2563 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
# 2565 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2566 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 11
# 2567 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
# 2569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2570 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 11
# 2571 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
# 2573 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2574 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 11
# 2575 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
# 2577 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2578 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 11
# 2579 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
# 2581 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2582 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 11
# 2583 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
# 2585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2586 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 11
# 2587 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
# 2589 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2590 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 11
# 2591 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
# 2593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2594 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 4
# 2595 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
# 2597 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2598 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 4
# 2599 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
# 2601 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2602 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 4
# 2603 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
# 2605 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2606 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 4
# 2607 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
# 2609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2610 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 4
# 2611 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
# 2613 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2614 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 4
# 2615 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
# 2617 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2618 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 4
# 2619 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
# 2621 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2622 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 4
# 2623 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
# 2625 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2626 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 4
# 2627 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
# 2629 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2630 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 4
# 2631 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
# 2633 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2634 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 25
# 2635 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
# 2646 "data/scripts/battle_labyrinth.pory"
	lockall
# 2647 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 2648 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
# 2649 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
# 2655 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 2656 "data/scripts/battle_labyrinth.pory"
	removemoney 0
# 2657 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 2658 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_1
# 2659 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2660 "data/scripts/battle_labyrinth.pory"
	case 1, Zone_EventScript_RetirePrompt_6
# 2668 "data/scripts/battle_labyrinth.pory"
	case 2, Zone_EventScript_RetirePrompt_7
# 2677 "data/scripts/battle_labyrinth.pory"
	case 3, Zone_EventScript_RetirePrompt_8
# 2687 "data/scripts/battle_labyrinth.pory"
	case 4, Zone_EventScript_RetirePrompt_9
# 2698 "data/scripts/battle_labyrinth.pory"
	case 5, Zone_EventScript_RetirePrompt_10
# 2710 "data/scripts/battle_labyrinth.pory"
	case 6, Zone_EventScript_RetirePrompt_11
# 2721 "data/scripts/battle_labyrinth.pory"
	case 7, Zone_EventScript_RetirePrompt_12
# 2739 "data/scripts/battle_labyrinth.pory"
	case 9, Zone_EventScript_RetirePrompt_13
# 2746 "data/scripts/battle_labyrinth.pory"
	case 10, Zone_EventScript_RetirePrompt_14
# 2758 "data/scripts/battle_labyrinth.pory"
	case 11, Zone_EventScript_RetirePrompt_15
# 2767 "data/scripts/battle_labyrinth.pory"
	case 12, Zone_EventScript_RetirePrompt_16
# 2780 "data/scripts/battle_labyrinth.pory"
	case 13, Zone_EventScript_RetirePrompt_17
# 2800 "data/scripts/battle_labyrinth.pory"
	case 15, Zone_EventScript_RetirePrompt_18
# 2805 "data/scripts/battle_labyrinth.pory"
	case 16, Zone_EventScript_RetirePrompt_19
# 2816 "data/scripts/battle_labyrinth.pory"
	case 17, Zone_EventScript_RetirePrompt_20
# 2824 "data/scripts/battle_labyrinth.pory"
	case 18, Zone_EventScript_RetirePrompt_21
# 2850 "data/scripts/battle_labyrinth.pory"
	case 20, Zone_EventScript_RetirePrompt_22
# 2862 "data/scripts/battle_labyrinth.pory"
	case 21, Zone_EventScript_RetirePrompt_23
# 2865 "data/scripts/battle_labyrinth.pory"
	case 22, Zone_EventScript_RetirePrompt_24
# 2868 "data/scripts/battle_labyrinth.pory"
	case 23, Zone_EventScript_RetirePrompt_25
# 2871 "data/scripts/battle_labyrinth.pory"
	case 24, Zone_EventScript_RetirePrompt_26
# 2874 "data/scripts/battle_labyrinth.pory"
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
# 2878 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
# 2650 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2651 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2652 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
# 2661 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NINA
# 2662 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARIAM
# 2663 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OSCAR
# 2664 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_1
# 2665 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_1_STATE, 0
# 2666 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 22, 7
# 2667 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
# 2669 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_POLLY
# 2670 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEREMIAH
# 2671 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HARPER
# 2672 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ARTHUR
# 2673 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_2
# 2674 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_2_STATE, 0
# 2675 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 22, 7
# 2676 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
# 2678 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEMMA
# 2679 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PATRICK
# 2680 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BORIS
# 2681 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNABELLE
# 2682 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RICHARD
# 2683 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_3
# 2684 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_3_STATE, 0
# 2685 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 22, 7
# 2686 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
# 2688 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HERMAN
# 2689 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RALPH
# 2690 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SANTIAGO
# 2691 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 2692 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRED
# 2693 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LUCIA
# 2694 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_4
# 2695 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_4_STATE, 0
# 2696 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 22, 7
# 2697 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
# 2699 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 2700 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GILBERT
# 2701 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REBECCA
# 2702 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RYAN
# 2703 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CAITLYN
# 2704 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KENNETH
# 2705 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CLINTON
# 2706 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_5
# 2707 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_5_STATE, 0
# 2708 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 22, 7
# 2709 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
# 2711 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ZACK
# 2712 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELANIE
# 2713 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONSTANCE
# 2714 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRANK
# 2715 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DUDLEY
# 2716 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DAISY
# 2717 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_6
# 2718 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_6_STATE, 0
# 2719 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 22, 7
# 2720 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
# 2722 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MILLIE
# 2723 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PAIGE
# 2724 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SETH
# 2725 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAMAL
# 2726 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONNIE
# 2727 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_7
# 2728 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JIMMY
# 2729 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIANO
# 2730 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KAREN
# 2731 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAYDEN
# 2732 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NEIL
# 2733 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TAMARA
# 2734 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_8
# 2735 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE8D_WALLY
# 2736 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_8_STATE, 0
# 2737 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 22, 7
# 2738 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
# 2740 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_COOPER
# 2741 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CARMINE
# 2742 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 2743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_9_STATE, 0
# 2744 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 22, 7
# 2745 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
# 2747 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KYLE
# 2748 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BELLE
# 2749 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DEWEY
# 2750 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PEARLIE
# 2751 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ERNEST
# 2752 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ALANA
# 2753 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SUSAN
# 2754 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONRAD
# 2755 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_9
# 2756 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 22, 7
# 2757 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
# 2759 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEANETTE
# 2760 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMMA_AND_LEO
# 2761 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REGINA
# 2762 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOEL
# 2763 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_10
# 2764 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_11_STATE, 0
# 2765 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 22, 7
# 2766 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
# 2768 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ESSENCE
# 2769 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DOLORES
# 2770 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TREVOR
# 2771 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RANDOLPH
# 2772 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FEDERICO
# 2773 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GENIE
# 2774 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HILDA
# 2775 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KINLEY
# 2776 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 2777 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_12_STATE, 0
# 2778 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 22, 7
# 2779 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
# 2781 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_VIOLET
# 2782 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WANDA
# 2783 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AMBER_AND_KIM
# 2784 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAN_AND_ERIN
# 2785 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_STEVE
# 2786 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GOULD
# 2787 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MENDEL
# 2788 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DARWIN
# 2789 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BART
# 2790 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NIGEL
# 2791 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOLA
# 2792 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHARLIE
# 2793 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TODD
# 2794 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RUSSELL
# 2795 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OTIS
# 2796 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_11
# 2797 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_12
# 2798 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 22, 7
# 2799 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
# 2801 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_13
# 2802 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_15_STATE, 0
# 2803 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 22, 7
# 2804 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
# 2806 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_IONA
# 2807 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BERKE
# 2808 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TANISHA
# 2809 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ROBERT
# 2810 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHRIS
# 2811 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANGUS
# 2812 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_14
# 2813 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_16_STATE, 0
# 2814 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 22, 7
# 2815 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
# 2817 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AXLE
# 2818 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RAFAEL
# 2819 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GEORGINA
# 2820 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 2821 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_17_STATE, 0
# 2822 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 22, 7
# 2823 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
# 2825 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DORIS
# 2826 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HOMER
# 2827 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOHN
# 2828 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GLENN
# 2829 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAY
# 2830 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TYLER
# 2831 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TERRENCE
# 2832 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARTY
# 2833 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KARI
# 2834 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ABRAHAM
# 2835 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELINDA
# 2836 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIO
# 2837 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REX
# 2838 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOUIS
# 2839 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEROY
# 2840 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ELTON
# 2841 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WILLIE
# 2842 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_16
# 2843 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_18_STATE, 0
# 2844 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_19_STATE, 0
# 2845 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 2846 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 2847 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_DOLL
# 2848 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 22, 7
# 2849 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
# 2851 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SHAWN
# 2852 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FERNANDO
# 2853 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KANE
# 2854 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KIRK
# 2855 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DALTON
# 2856 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEE
# 2857 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BLANCHE
# 2858 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_17
# 2859 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_20_STATE, 0
# 2860 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 7
# 2861 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
# 2863 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 22, 7
# 2864 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
# 2866 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 22, 7
# 2867 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
# 2869 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 22, 7
# 2870 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
# 2872 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 22, 7
# 2873 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
# 2875 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 22, 7
# 2876 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyGift::
# 2891 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2892 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyGift_Text_0, MSGBOX_YESNO
# 2893 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2894 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2895 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2903 "data/scripts/battle_labyrinth.pory"
	lock
# 2904 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2905 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2908 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2909 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2910 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2981 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2906 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2911 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2912 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2913 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2914 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2915 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2918 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2921 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2925 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2928 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2931 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2935 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2940 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2943 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2947 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2950 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2955 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2958 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2961 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2964 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2967 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2971 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2972 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2973 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2974 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2975 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2976 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2916 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 22, 7
# 2917 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2919 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 22, 7
# 2920 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2922 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 2923 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 22, 7
# 2924 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2926 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 22, 7
# 2927 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2929 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
# 2930 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2932 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2933 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 22, 7
# 2934 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2936 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 2937 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2938 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 22, 7
# 2939 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2941 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 22, 7
# 2942 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2944 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2945 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 22, 7
# 2946 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2948 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 22, 7
# 2949 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2951 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2952 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2953 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 22, 7
# 2954 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2956 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 22, 7
# 2957 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2959 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 22, 7
# 2960 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2962 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 22, 7
# 2963 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2965 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 22, 7
# 2966 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2968 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2969 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 22, 7
# 2970 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2977 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 22, 7
# 2978 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2985 "data/scripts/battle_labyrinth.pory"

# 2986 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2987 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2988 "data/scripts/battle_labyrinth.pory"
	end
# 2989 "data/scripts/battle_labyrinth.pory"

# 2990 "data/scripts/battle_labyrinth.pory"
EventScript_GeneralSign::
# 2991 "data/scripts/battle_labyrinth.pory"
	msgbox gText_GeneralSign, MSGBOX_SIGN
# 2992 "data/scripts/battle_labyrinth.pory"
	end
# 2993 "data/scripts/battle_labyrinth.pory"

# 2994 "data/scripts/battle_labyrinth.pory"
EventScript_UniqueSign::
# 2995 "data/scripts/battle_labyrinth.pory"
	msgbox gText_UniqueSign, MSGBOX_SIGN
# 2996 "data/scripts/battle_labyrinth.pory"
	end
# 2997 "data/scripts/battle_labyrinth.pory"

# 2998 "data/scripts/battle_labyrinth.pory"
EventScript_ServicesSign::
# 2999 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ServicesSign, MSGBOX_SIGN
# 3000 "data/scripts/battle_labyrinth.pory"
	end
# 3001 "data/scripts/battle_labyrinth.pory"

# 3002 "data/scripts/battle_labyrinth.pory"
EventScript_HealingSign::
# 3003 "data/scripts/battle_labyrinth.pory"
	msgbox gText_HealingSign, MSGBOX_SIGN
# 3004 "data/scripts/battle_labyrinth.pory"
	end

EventScript_Shop_General_Text_0:
# 51 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: New challenger, huh?\nThe name's Tim Johnson.\p{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\nPokémart Incorporated.\lYou can find all sorts of general\lsupplies for your travels.$"

EventScript_Shop_General_Text_1:
# 55 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Hey! I just wanted to let you know\n"
	.string "about a new offer we have!\p"
	.string "I'm sure you've heard that if you buy 10\n"
	.string "Poké Balls, you'll get a Premier Ball for\l"
	.string "free?\p"
	.string "Well, I've got a very similar offer for\n"
	.string "you.\p"
	.string "If you buy 10 Potions, you'll get a free\n"
	.string "Super Potion!\p"
	.string "How's that for a deal?\p"
	.string "Anyways…$"

EventScript_Shop_General_Text_2:
# 58 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's.\nCan I get you anything?$"

EventScript_Shop_General_Text_3:
# 91 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day.$"

EventScript_Shop_Unique_Varrick_Text_0:
# 230 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick,\n"
	.string "entrepreneur extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: I pitched this idea to\n"
	.string "Silph a couple years back,\l"
	.string "and now it's become a reality!\p"
	.string "All the random items you can't find\n"
	.string "in the world, you'll find here!\p"
	.string "Fantastic evolution stones!\p"
	.string "Countless Pokéball variations!\p"
	.string "Delicious Berries!\p"
	.string "The greatest held item collection\n"
	.string "you've never seen!\p"
	.string "Please, enjoy my shop!$"

EventScript_Shop_Unique_Varrick_Text_1:
# 246 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Greetings and salutations!\nWelcome to Silph Unique Item Store!$"

EventScript_Shop_Unique_Varrick_Text_2:
# 286 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from Silph!$"

EventScript_Shop_Unique_ZhuLi_Text_0:
# 602 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Welcome to Silph Unique\nItem Store. Care to buy anything?$"

EventScript_Shop_Unique_ZhuLi_Text_1:
# 624 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: We thank you for your\nbusiness, loyal customer.$"

EventScript_Shop_ZhuLiIntro_Text_0:
# 811 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Fantastic! You've arrived!\nZhu Li, do the thing!$"

EventScript_Shop_ZhuLiIntro_Text_1:
# 812 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.$"

EventScript_Shop_ZhuLiIntro_Text_2:
# 815 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Zhu Li is my assistant!\pSilph gave me so many items to sell\nthat I practically begged them for\lsome extra help!\pZhu Li, introduce yourself!$"

EventScript_Shop_ZhuLiIntro_Text_3:
# 816 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.\pPleased to meet you, {PLAYER}. I'm-$"

EventScript_Shop_ZhuLiIntro_Text_4:
# 817 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Alright, we don't have all\nday, Zhu Li! Talk to her if you\lwant to buy consumable items, while\lI'll handle all of the held items!$"

EventScript_Shop_Lelouch_Text_0:
# 827 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Now that's a name…\nI haven't heard in…$"

EventScript_Shop_Lelouch_Text_1:
# 829 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 838 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I sense…\n"
	.string "The aura of Shards.\p"
	.string "There are four types of Shards:\n"
	.string "Red, Blue, Yellow, and Green,\l"
	.string "ranked by least to most rare.\p"
	.string "Each can be exchanged for a certain\n"
	.string "type of service I provide.\p"
	.string "Pokémon training costs Red Shards.\p"
	.string "Move Relearning costs Blue Shards.\p"
	.string "Move Tutoring costs Yellow Shards.\p"
	.string "Other services cost Green Shards.\p"
	.string "I hope they serve you well…$"

EventScript_Shop_Lelouch_Text_4:
# 852 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Lelouch_Text_10:
# 864 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 882 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 883 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 885 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 914 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 920 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1121 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1129 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1136 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1158 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1159 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1160 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1161 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1162 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1164 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1165 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1166 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1167 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1306 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1310 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1328 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1336 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1341 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1346 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1352 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1358 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1364 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1370 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1376 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1382 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1388 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1394 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1400 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1406 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1412 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1418 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1424 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1430 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1436 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1442 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1448 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1454 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1460 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1466 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1493 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon…\nUgh. Never mind.\p{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the\nPokémon Center, but they gave\lterrible pay.\pSo I've started my own shop,\nJoy's Healing Shop!$"

EventScript_Shop_Joy_Text_1:
# 1495 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Healing Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1497 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1504 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1509 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1515 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1519 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1529 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1559 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1560 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1563 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1577 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1610 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_Settings_Text_0:
# 1709 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1712 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1714 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1719 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1722 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1724 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1727 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1729 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1732 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1734 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1737 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1739 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1741 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1743 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1745 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1748 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1750 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1753 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1755 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1758 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1760 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1763 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1765 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1770 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1773 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
# 1775 "data/scripts/battle_labyrinth.pory"
	.string "Lazy$"

EventScript_Settings_Text_28:
# 1778 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1780 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1783 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1785 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1788 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1790 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1793 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic$"

EventScript_Settings_Text_35:
# 1795 "data/scripts/battle_labyrinth.pory"
	.string "Workaholic$"

EventScript_Settings_Text_36:
# 1803 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_37:
# 1805 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1808 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_39:
# 1818 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_40:
# 1820 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_41:
# 1823 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_42:
# 1838 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_43:
# 1840 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_44:
# 1843 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_45:
# 1851 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_46:
# 1853 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_47:
# 1856 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_48:
# 1867 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_49:
# 1869 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_50:
# 1871 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_51:
# 1874 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_52:
# 1881 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_53:
# 1883 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_54:
# 1886 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_55:
# 1896 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_56:
# 1897 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_57:
# 1926 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_58:
# 1929 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_59:
# 1931 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_60:
# 1934 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_61:
# 1944 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_62:
# 1946 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 1949 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_64:
# 1957 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_65:
# 1959 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_66:
# 1962 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_67:
# 1967 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_68:
# 1970 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_69:
# 1976 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_70:
# 1978 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_71:
# 1981 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_72:
# 1986 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_73:
# 1989 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_74:
# 1997 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_75:
# 1999 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_76:
# 2001 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_77:
# 2004 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_78:
# 2012 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_79:
# 2013 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_80:
# 2016 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_81:
# 2022 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_82:
# 2024 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_83:
# 2026 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_84:
# 2029 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_85:
# 2037 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_86:
# 2038 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_87:
# 2041 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_88:
# 2047 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_89:
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_90:
# 2051 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_91:
# 2054 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_92:
# 2062 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_93:
# 2063 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_94:
# 2066 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_95:
# 2072 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_96:
# 2074 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_97:
# 2076 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_98:
# 2079 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_99:
# 2087 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_100:
# 2088 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_101:
# 2091 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_102:
# 2097 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_103:
# 2099 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_104:
# 2101 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_105:
# 2104 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_106:
# 2112 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_107:
# 2113 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_108:
# 2116 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_109:
# 2122 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_110:
# 2124 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_111:
# 2126 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_112:
# 2129 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_113:
# 2137 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_114:
# 2139 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_115:
# 2142 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_116:
# 2151 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_117:
# 2153 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_118:
# 2155 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_119:
# 2158 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_120:
# 2166 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_121:
# 2167 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_122:
# 2170 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_123:
# 2176 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_124:
# 2178 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_125:
# 2180 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_126:
# 2183 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_127:
# 2191 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_128:
# 2192 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_129:
# 2195 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_130:
# 2201 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_131:
# 2203 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_132:
# 2205 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_133:
# 2208 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_134:
# 2216 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_135:
# 2217 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_136:
# 2220 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_137:
# 2226 "data/scripts/battle_labyrinth.pory"
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_138:
# 2228 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_139:
# 2230 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_140:
# 2233 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_141:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_142:
# 2242 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_143:
# 2245 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_144:
# 2252 "data/scripts/battle_labyrinth.pory"
	.string "Retiring from a Zone allows one to\n"
	.string "return to the Sanctuary, at the cost of\l"
	.string "half of their money as well as losing all\l"
	.string "progress made thus far in the Zone.\p"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting prevents\n"
	.string "players from using this option.$"

EventScript_Settings_Text_145:
# 2254 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_146:
# 2256 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_147:
# 2259 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_148:
# 2267 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_149:
# 2268 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_150:
# 2271 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2290 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_MusicMenu_Text_5:
# 2299 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_6:
# 2302 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_7:
# 2305 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_8:
# 2308 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_9:
# 2311 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_10:
# 2314 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_11:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_12:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_13:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_14:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_15:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_16:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_17:
# 2330 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_18:
# 2341 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_19:
# 2344 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_20:
# 2347 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_21:
# 2350 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_22:
# 2353 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_23:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_24:
# 2372 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_25:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_26:
# 2386 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_27:
# 2389 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_28:
# 2392 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_29:
# 2395 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_30:
# 2398 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_31:
# 2414 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
# 2658 "data/scripts/battle_labyrinth.pory"
	.string "Warping now…$"

EventScript_NuzlockeVerifyGift_Text_0:
# 2892 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2909 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
# 868 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 872 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1070 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1074 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1078 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1082 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1090 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1094 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1098 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1102 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1106 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1484 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode enables the following\n"
	.string "difficulty changes:\p"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY},\n"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY},\l"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY},\l"
	.string "and {COLOR RED}Workaholic{COLOR DARK_GRAY}.\p"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode can only be enabled at the\n"
	.string "beginning of the game, but can be\l"
	.string "disabled at any point.\p"
	.string "It is not recommended to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

gText_Colress_RandomizerExplanation::
# 1676 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1682 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode completely implements all\n"
	.string "standard Nuzlocke rules, such as\l"
	.string "permanent death and capture\l"
	.string "restrictions.\p"
	.string "It comes with Species Clause, Shiny\n"
	.string "Clause, and Gift Clause.\p"
	.string "It is not recommended to play {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "Nuzlockes already.\p"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode can only be enabled at\n"
	.string "the beginning of the game, but can be\l"
	.string "disabled at any point.$"

gText_Colress_InfiniteExplained::
# 1689 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NumDeathsNuzlocke::
# 1695 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} death(s).$"

gText_Colress_CannotChangeSettingBrutal::
# 1699 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1703 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2641 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2882 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2886 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
