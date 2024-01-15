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


EventScript_MedicineSign::
# 48 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 53 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 58 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 63 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BattleItemsSign::
# 68 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BattleItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_TMsSign::
# 73 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TMsSign_Text_0, MSGBOX_SIGN
	end


EventScript_Shop_Portentia::
# 78 "data/scripts/battle_labyrinth.pory"
	lock
# 79 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 80 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 84 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 88 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 89 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 90 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 91 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 92 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 93 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 95 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 96 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 97 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 98 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_12
# 100 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 101 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 102 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_13
# 103 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_13
# 105 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 106 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 108 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_15
# 109 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_15
# 110 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_15
# 111 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_15
# 112 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_15
# 113 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_15
# 114 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_15
# 115 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_15
# 116 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_15
# 118 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_16
EventScript_Shop_Portentia_9:
# 121 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 122 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 81 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0
# 82 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 85 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1
# 86 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 84 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 94 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_1to3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 99 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_4to8
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 104 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_9to12
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 107 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_13to15
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_15:
# 117 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_16to25
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_16:
# 119 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Portentia_9


EventScript_Shop_Tim::
# 126 "data/scripts/battle_labyrinth.pory"
	lock
# 127 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 128 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 132 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 133 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 134 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 135 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 136 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 137 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 139 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 140 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 141 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_7
# 142 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_7
# 144 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_8
# 145 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_8
# 146 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_8
# 147 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_8
# 149 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_9
# 150 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_9
# 152 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 153 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 154 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 155 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 156 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 157 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 158 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 159 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 160 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 162 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_11
EventScript_Shop_Tim_4:
# 165 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 166 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0
# 130 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 138 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_1to3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 143 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_4to8
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 148 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_9to12
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 151 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_13to15
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
# 161 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_16to25
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_11:
# 163 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Tim_4


	.align 2
# 169 "data/scripts/battle_labyrinth.pory"
Shop_General_1to3:
# 170 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 171 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 172 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 173 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 176 "data/scripts/battle_labyrinth.pory"
Shop_General_4to8:
# 177 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 178 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 179 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 180 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 181 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 182 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 184 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 185 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 186 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 189 "data/scripts/battle_labyrinth.pory"
Shop_General_9to12:
# 190 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 191 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 192 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 193 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 194 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 195 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 196 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 197 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 198 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 199 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 200 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 201 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 202 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 203 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 204 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 205 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 206 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 207 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 208 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 209 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 210 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 213 "data/scripts/battle_labyrinth.pory"
Shop_General_13to15:
# 214 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 215 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 216 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 217 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 218 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 219 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 220 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 221 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 222 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 223 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 224 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 225 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 226 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 227 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 228 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 229 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 230 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 231 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 232 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 233 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 234 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 235 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 236 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 239 "data/scripts/battle_labyrinth.pory"
Shop_General_16to25:
# 240 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 241 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 242 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 243 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 244 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 245 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 246 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 247 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 248 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 249 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 250 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 251 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 252 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 253 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 254 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 256 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 257 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 258 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 259 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 260 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 261 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 262 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 263 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

	.align 2
# 266 "data/scripts/battle_labyrinth.pory"
Shop_General_26to30:
# 267 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 268 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 276 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 277 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELIXIR
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 287 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 288 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HP_UP
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTEIN
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_IRON
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CALCIUM
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZINC
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 301 "data/scripts/battle_labyrinth.pory"
	lock
# 302 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 303 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 320 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 321 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 322 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 323 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 324 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 325 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 327 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 328 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 330 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_8
# 331 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 333 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_9
# 334 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_9
# 336 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_10
# 337 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_10
# 338 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 339 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 341 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 342 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 343 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 344 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 346 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 347 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 348 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 350 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 351 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 353 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 360 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 361 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0
# 318 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 326 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 329 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 332 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 335 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 340 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 345 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 349 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 352 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 354 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 354 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 357 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 355 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 365 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_1to3:
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 369 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 380 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 395 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 432 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 455 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 486 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 524 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 558 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 595 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 596 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 600 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 601 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 602 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 603 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 604 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 605 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 606 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 607 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 608 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 609 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 610 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 611 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 612 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 613 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 615 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 616 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 619 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 621 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 622 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 623 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 625 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 627 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 635 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 636 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 649 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 650 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 651 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 656 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 657 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 658 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 659 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 660 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 661 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 662 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 668 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 669 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 670 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Unique_ZhuLi::
# 674 "data/scripts/battle_labyrinth.pory"
	lock
# 675 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 676 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Unique_ZhuLi_Text_0
# 677 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 678 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 679 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Unique_ZhuLi_3
# 680 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Unique_ZhuLi_3
# 681 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Unique_ZhuLi_3
# 682 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Unique_ZhuLi_3
# 684 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Unique_ZhuLi_4
# 685 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Unique_ZhuLi_4
# 686 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Unique_ZhuLi_4
# 687 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Unique_ZhuLi_4
# 689 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Unique_ZhuLi_5
# 690 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Unique_ZhuLi_5
# 691 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Unique_ZhuLi_5
# 693 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Unique_ZhuLi_6
# 694 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Unique_ZhuLi_6
# 695 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Unique_ZhuLi_6
EventScript_Shop_Unique_ZhuLi_1:
# 698 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Unique_ZhuLi_Text_1, MSGBOX_DEFAULT
# 699 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Unique_ZhuLi_3:
# 683 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_11to15
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_4:
# 688 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_16to20
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_5:
# 692 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_6:
# 696 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_1


	.align 2
# 702 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_11to15:
# 703 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 704 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 705 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 706 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 707 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 708 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 709 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 710 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 711 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 712 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 713 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 714 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 715 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 716 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 717 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 718 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 719 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 720 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 721 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 722 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 723 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 724 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 725 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 726 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 727 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 728 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 729 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 730 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 731 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 732 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 733 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 736 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_16to20:
# 737 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 738 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 739 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 740 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 741 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 742 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 743 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 744 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 745 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 746 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 747 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 748 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 749 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 750 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 751 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 752 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 753 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 754 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 755 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 756 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 757 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 758 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 759 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 760 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 761 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 762 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 763 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 764 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 765 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LOVE_SWEET
# 766 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BERRY_SWEET
# 767 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CLOVER_SWEET
# 768 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLOWER_SWEET
# 769 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STAR_SWEET
# 770 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RIBBON_SWEET
# 771 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 772 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 773 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 774 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 775 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 776 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 777 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 778 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 779 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 780 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 781 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 782 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 783 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 784 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 785 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 786 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 787 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 788 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 791 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_21to23:
# 792 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 793 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 794 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 795 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 796 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 797 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 798 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 799 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 800 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 801 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 802 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 803 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 804 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 805 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 806 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 807 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 808 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 809 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 810 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 811 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 812 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 813 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 814 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 815 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 816 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 817 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 818 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 819 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 820 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 821 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 822 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

	.align 2
# 825 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_24to30:
# 826 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 827 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 828 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 829 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 830 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 831 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 832 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 833 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 834 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 835 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 836 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 837 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 838 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 839 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 840 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 841 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 842 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTECTOR
# 843 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_SCALE
# 844 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTIRIZER
# 845 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGMARIZER
# 846 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REAPER_CLOTH
# 847 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_FANG
# 848 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_CLAW
# 849 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUBIOUS_DISC
# 850 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 851 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 852 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 853 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 854 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 855 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 856 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 857 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 858 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 859 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 860 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 861 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 862 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 863 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 864 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

EventScript_Shop_ZhuLiIntro::
# 868 "data/scripts/battle_labyrinth.pory"
	lockall
# 869 "data/scripts/battle_labyrinth.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 870 "data/scripts/battle_labyrinth.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 871 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 872 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 873 "data/scripts/battle_labyrinth.pory"
	waitse
# 874 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 875 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq EventScript_Shop_ZhuLiIntro_2
EventScript_Shop_ZhuLiIntro_1:
# 881 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 882 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 883 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 884 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 885 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_0
# 886 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_1
# 887 "data/scripts/battle_labyrinth.pory"
	playse SE_APPLAUSE
# 888 "data/scripts/battle_labyrinth.pory"
	waitse
# 889 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_2
# 890 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_3
# 891 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_4
# 892 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZHULI_INTRO, 1
# 893 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 894 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_Shop_ZhuLiIntro_2:
# 876 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 877 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 878 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 879 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_Shop_ZhuLiIntro_1


EventScript_Shop_Julia::
# 898 "data/scripts/battle_labyrinth.pory"
	lockall
# 899 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 900 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Alexander::
# 904 "data/scripts/battle_labyrinth.pory"
	lockall
# 905 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 906 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Gordon::
# 910 "data/scripts/battle_labyrinth.pory"
	lockall
# 911 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 912 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Lelouch::
# 916 "data/scripts/battle_labyrinth.pory"
	lock
# 917 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 918 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 924 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 929 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 944 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 945 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Lelouch_Text_9
# 946 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 947 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 949 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 951 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 953 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 956 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_10
# 957 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 919 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 920 "data/scripts/battle_labyrinth.pory"
	delay 96
# 921 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 922 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 925 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 926 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 930 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 942 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 948 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 950 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 952 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 954 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 969 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 970 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 974 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 975 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 976 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 979 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 2
# 980 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 981 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 982 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 996 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1155 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1156 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 971 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 977 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 976 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 976 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 983 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 984 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 997 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 998 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 985 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 986 "data/scripts/battle_labyrinth.pory"
	waitstate
# 987 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 992 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 999 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1000 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1001 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 1004 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1005 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 1008 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 1009 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 1010 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 1011 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 1012 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1013 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1014 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 1017 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 1020 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 1023 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 1026 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 1028 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 1029 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 1032 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 1033 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1034 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1035 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 1038 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 1041 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 1044 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 1047 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 1049 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 1050 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 1053 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 1054 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1055 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1056 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 1059 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 1062 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 1065 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 1068 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 1070 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 1071 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 1074 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 1075 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1076 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1077 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 1080 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 1083 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1086 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1089 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1091 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1092 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1095 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1096 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1097 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1098 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1101 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1104 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1107 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1110 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1112 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1113 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1116 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1117 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1118 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1119 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1122 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1125 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1128 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1131 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1133 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1134 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1137 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1141 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1142 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1145 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1146 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1147 "data/scripts/battle_labyrinth.pory"
	waitse
# 1148 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1149 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1150 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 988 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 989 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 990 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 1002 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 1006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 1015 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 1016 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 1018 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 1019 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 1021 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 1022 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 1024 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 1025 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 1027 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 1036 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 1037 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 1039 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 1040 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 1042 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 1043 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 1045 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 1046 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 1048 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 1057 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 1058 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 1060 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 1061 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 1063 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 1064 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 1066 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 1067 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 1069 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 1078 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 1079 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 1081 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 1082 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1084 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1085 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1087 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1088 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1090 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1099 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1100 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1102 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1103 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1105 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1106 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1108 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1109 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1111 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1120 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1121 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1123 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1124 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1126 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1127 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1129 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1130 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1132 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1138 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1203 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1204 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
# 1208 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
# 1209 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
# 1213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
# 1214 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1215 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1216 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1219 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1220 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1224 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1228 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
# 1229 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1230 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1231 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
# 1234 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1235 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
# 1205 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
# 1221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
# 1225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
# 1242 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1243 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
# 1248 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
# 1249 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
EventScript_Shop_Lelouch_MoveTutor_6:
# 1285 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 50
# 1286 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1287 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1288 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_11
# 1291 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_12
# 1294 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_13
# 1297 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_14
# 1300 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_15
# 1303 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_16
# 1306 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_17
# 1309 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_18
# 1312 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_19
# 1315 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_20
# 1393 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_21
# 1394 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_21
EventScript_Shop_Lelouch_MoveTutor_9:
# 1397 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1398 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_10, MSGBOX_YESNO
# 1399 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1402 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_DEFAULT
# 1403 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1404 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_26
# 1407 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
# 1408 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
# 1244 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
# 1250 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_0, 1
# 1251 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 2
# 1252 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 3
# 1253 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 4
# 1254 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 5
# 1255 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 6
# 1256 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 7
# 1257 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 8
# 1258 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 9
# 1259 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 10
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1289 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1290 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_12:
# 1292 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1293 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_13:
# 1295 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1296 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_14:
# 1298 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1299 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_15:
# 1301 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1302 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_16:
# 1304 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_17:
# 1307 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1308 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_18:
# 1310 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1311 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_19:
# 1313 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1314 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_20:
# 1316 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1317 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_21:
	return

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_26:
	goto EventScript_Shop_Lelouch_MoveTutor_4


EventScript_Shop_Lelouch_Other::
# 1415 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1416 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1420 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1421 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1422 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1423 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1426 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1427 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1430 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1431 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1432 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1434 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1435 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1436 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1442 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1448 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1454 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1460 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1466 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1472 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1478 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1484 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1490 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1496 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1502 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1508 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1514 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1520 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1526 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1532 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1538 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1544 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1550 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1556 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1562 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1565 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1566 "data/scripts/battle_labyrinth.pory"
	waitse
# 1567 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1568 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1569 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1570 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1417 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1428 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1438 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1439 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1443 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1444 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1445 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1449 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1450 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1451 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1455 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1456 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1457 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1462 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1463 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1467 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1468 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1469 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1473 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1474 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1475 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1479 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1480 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1481 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1485 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1486 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1487 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1491 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1492 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1493 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1497 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1498 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1499 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1503 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1504 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1505 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1509 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1510 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1511 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1515 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1516 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1517 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1521 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1522 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1523 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1527 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1528 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1529 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1535 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1539 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1540 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1541 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1545 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1546 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1547 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1551 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1552 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1553 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1558 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1559 "data/scripts/battle_labyrinth.pory"
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
# 1581 "data/scripts/battle_labyrinth.pory"
	lock
# 1582 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1583 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1587 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1588 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1589 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1590 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1594 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1595 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1599 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1600 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1601 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1602 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1603 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1604 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1605 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1606 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1607 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1608 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1611 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1612 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1584 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1585 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1591 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1592 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1596 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1597 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_MandatoryCheck::
# 1617 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1617 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1618 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1619 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1620 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1621 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1622 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1623 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1626 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1628 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1624 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1636 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1637 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1638 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1639 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1642 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1644 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1640 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1648 "data/scripts/battle_labyrinth.pory"
	lock
# 1649 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1650 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1655 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1656 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1657 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1658 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1660 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1662 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1664 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1666 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1669 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1670 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1651 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1652 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1653 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1659 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1661 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1663 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1665 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1667 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1673 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1674 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1677 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1678 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1679 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1682 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1683 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1684 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1685 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
# 1688 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1689 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1690 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1691 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1694 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1695 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1696 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1697 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1701 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1702 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1703 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1704 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1711 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1718 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1725 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1726 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	return

EventScript_LeavingSetup_2:
# 1705 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1706 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1707 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1708 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1709 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1712 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1713 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1714 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1715 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1716 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1719 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1720 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1721 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1722 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1723 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
# 1731 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1734 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1737 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1740 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1744 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1745 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1746 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1732 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1733 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1735 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1736 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1738 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1739 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1741 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1742 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1751 "data/scripts/battle_labyrinth.pory"
	lockall
# 1752 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 32
# 1753 "data/scripts/battle_labyrinth.pory"
	waitstate
	return


EventScript_Documentation::
# 1757 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Version
# 1758 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1801 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1802 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1803 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1805 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1808 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1810 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1813 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1815 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1818 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1820 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1823 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1826 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1828 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1831 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1833 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1834 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1834 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1837 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1839 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1839 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1842 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1844 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1844 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1847 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1849 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1849 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1852 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1854 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1854 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1857 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1859 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1859 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1862 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
# 1867 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1869 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1869 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1872 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1874 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1874 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1877 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1879 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1879 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1882 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1884 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_92
# 1884 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_92
# 1887 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_35, 17
EventScript_Settings_91:
# 1889 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 18
# 1890 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1891 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1892 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_98
# 1923 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_99
# 1955 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_100
# 1984 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_101
# 2048 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_102
# 2067 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_103
# 2086 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_104
# 2088 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_105
# 2113 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_106
# 2138 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_107
# 2163 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_108
# 2188 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_109
# 2213 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_110
# 2242 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_111
# 2267 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_112
# 2292 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_113
# 2317 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_114
# 2343 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_115
# 2368 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Settings_116
# 2369 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_116
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1804 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1806 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1809 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1811 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1814 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1816 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1819 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1821 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1824 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1829 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1835 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1840 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1845 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1850 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1855 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1860 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1865 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1870 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1875 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1880 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1885 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_34, 17
	goto EventScript_Settings_91

EventScript_Settings_98:
# 1893 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1894 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_117
# 1907 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_195
# 1910 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_YESNO
# 1911 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_99:
# 1924 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1925 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_121
EventScript_Settings_120:
# 1929 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_198
# 1943 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_YESNO
# 1944 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_100:
# 1956 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1957 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_123
# 1973 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_YESNO
# 1974 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_204
	goto EventScript_Settings_1

EventScript_Settings_101:
# 1985 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1986 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_126
# 2033 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_209
# 2036 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_YESNO
# 2037 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2049 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2050 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_129
# 2059 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2060 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_214
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2068 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2069 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_132
# 2078 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_YESNO
# 2079 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_218
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2087 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2089 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2090 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_135
# 2090 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_135
# 2104 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2105 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2106 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_223
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2114 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2115 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_140
# 2115 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_140
# 2129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2130 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2131 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_228
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2139 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2140 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_145
# 2140 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_145
# 2154 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2155 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2156 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_233
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2165 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_150
# 2165 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_150
# 2179 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2180 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2181 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_238
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2189 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2190 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_155
# 2190 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_155
# 2204 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2205 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2206 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_243
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2214 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2215 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_160
# 2215 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_160
# 2229 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2230 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_248
# 2239 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_111:
# 2243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2244 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_165
# 2244 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_165
# 2258 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2259 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2260 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_254
	goto EventScript_Settings_1

EventScript_Settings_112:
# 2268 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2269 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_170
# 2269 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_170
# 2283 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2284 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2285 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_259
	goto EventScript_Settings_1

EventScript_Settings_113:
# 2293 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2294 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_175
# 2294 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_175
# 2308 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2309 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2310 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2318 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2319 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_180
# 2319 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_180
# 2333 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2334 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2335 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_269
	goto EventScript_Settings_1

EventScript_Settings_115:
# 2344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2345 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_185
# 2345 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_185
# 2359 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_148, MSGBOX_DEFAULT
# 2360 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_149, MSGBOX_YESNO
# 2361 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_116:
# 2370 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq EventScript_Settings_190
# 2373 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_117:
# 1895 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_YESNO
# 1896 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_193
	goto EventScript_Settings_1

EventScript_Settings_121:
# 1926 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUZLOCKE_DEATHS
# 1927 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NumDeathsNuzlocke, MSGBOX_DEFAULT
	goto EventScript_Settings_120

EventScript_Settings_123:
# 1958 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_201
# 1961 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_YESNO
# 1962 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_126:
# 1987 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq EventScript_Settings_206
# 2021 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_YESNO
# 2022 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_129:
# 2051 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_YESNO
# 2052 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_212
	goto EventScript_Settings_1

EventScript_Settings_132:
# 2070 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2071 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_135:
# 2091 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 2092 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_220
# 2101 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_140:
# 2116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 2117 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_225
# 2126 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_145:
# 2141 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 2142 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_230
# 2151 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_150:
# 2166 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 2167 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_235
# 2176 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_155:
# 2191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 2192 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_240
# 2201 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_160:
# 2216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 2217 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_245
# 2226 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_165:
# 2245 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 2246 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_251
# 2255 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_170:
# 2270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2271 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_256
# 2280 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_175:
# 2295 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2296 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_261
# 2305 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_180:
# 2320 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2321 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_266
# 2330 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_185:
# 2346 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_DEFAULT
# 2347 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_271
# 2356 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_190:
	return

EventScript_Settings_193:
# 1897 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1898 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_195:
# 1908 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_198:
# 1930 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_YESNO
# 1931 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_201:
# 1959 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_204:
# 1975 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1976 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_206:
# 1988 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1989 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_YESNO
# 1990 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2034 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_212:
# 2053 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2054 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2055 "data/scripts/battle_labyrinth.pory"
	waitse
# 2056 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_214:
# 2061 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2063 "data/scripts/battle_labyrinth.pory"
	waitse
# 2064 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2072 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2073 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2074 "data/scripts/battle_labyrinth.pory"
	waitse
# 2075 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2080 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2081 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_DEFAULT
# 2082 "data/scripts/battle_labyrinth.pory"
	waitse
# 2083 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_220:
# 2093 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_YESNO
# 2094 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2107 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2108 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2109 "data/scripts/battle_labyrinth.pory"
	waitse
# 2110 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_225:
# 2118 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_YESNO
# 2119 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2132 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2134 "data/scripts/battle_labyrinth.pory"
	waitse
# 2135 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_230:
# 2143 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_YESNO
# 2144 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2157 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2158 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2159 "data/scripts/battle_labyrinth.pory"
	waitse
# 2160 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_235:
# 2168 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_YESNO
# 2169 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2182 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2184 "data/scripts/battle_labyrinth.pory"
	waitse
# 2185 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_240:
# 2193 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_YESNO
# 2194 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_243:
# 2207 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2208 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2209 "data/scripts/battle_labyrinth.pory"
	waitse
# 2210 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_245:
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_YESNO
# 2219 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_248:
# 2231 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2232 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_251:
# 2247 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_YESNO
# 2248 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2261 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2262 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2263 "data/scripts/battle_labyrinth.pory"
	waitse
# 2264 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_256:
# 2272 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_YESNO
# 2273 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2286 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2287 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2288 "data/scripts/battle_labyrinth.pory"
	waitse
# 2289 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_261:
# 2297 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_YESNO
# 2298 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2311 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2312 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2313 "data/scripts/battle_labyrinth.pory"
	waitse
# 2314 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2322 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_YESNO
# 2323 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_269:
# 2336 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2337 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2338 "data/scripts/battle_labyrinth.pory"
	waitse
# 2339 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_271:
# 2348 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_YESNO
# 2349 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2362 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2363 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_150, MSGBOX_DEFAULT
# 2364 "data/scripts/battle_labyrinth.pory"
	waitse
# 2365 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1899 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1900 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_DEFAULT
# 1901 "data/scripts/battle_labyrinth.pory"
	waitse
# 1902 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
# 1903 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_278:
# 1912 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_YESNO
# 1913 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_280:
# 1932 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1933 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_320
	goto EventScript_Settings_1

EventScript_Settings_282:
# 1945 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1946 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_322
	goto EventScript_Settings_1

EventScript_Settings_284:
# 1963 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1964 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_324
	goto EventScript_Settings_1

EventScript_Settings_286:
# 1977 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_DEFAULT
# 1979 "data/scripts/battle_labyrinth.pory"
	waitse
# 1980 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_288:
# 1991 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1992 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1993 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1994 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1995 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1996 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1997 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1998 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1999 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2000 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2001 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2002 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2003 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2004 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2005 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2006 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2007 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2008 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2009 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2010 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2011 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2012 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2013 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2014 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2015 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2016 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2017 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2023 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2024 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_326
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2038 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2039 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_328
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2095 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2097 "data/scripts/battle_labyrinth.pory"
	waitse
# 2098 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2120 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2121 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2122 "data/scripts/battle_labyrinth.pory"
	waitse
# 2123 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2145 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2147 "data/scripts/battle_labyrinth.pory"
	waitse
# 2148 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2170 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2171 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2172 "data/scripts/battle_labyrinth.pory"
	waitse
# 2173 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2195 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2196 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2197 "data/scripts/battle_labyrinth.pory"
	waitse
# 2198 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2220 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2222 "data/scripts/battle_labyrinth.pory"
	waitse
# 2223 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2233 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2234 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2235 "data/scripts/battle_labyrinth.pory"
	waitse
# 2236 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2249 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2250 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2251 "data/scripts/battle_labyrinth.pory"
	waitse
# 2252 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2274 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2275 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2276 "data/scripts/battle_labyrinth.pory"
	waitse
# 2277 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2299 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2300 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2301 "data/scripts/battle_labyrinth.pory"
	waitse
# 2302 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2324 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2325 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2326 "data/scripts/battle_labyrinth.pory"
	waitse
# 2327 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2350 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2351 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_147, MSGBOX_DEFAULT
# 2352 "data/scripts/battle_labyrinth.pory"
	waitse
# 2353 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_318:
# 1914 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1915 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
# 1916 "data/scripts/battle_labyrinth.pory"
	waitse
# 1917 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
# 1918 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_320:
# 1934 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1935 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_DEFAULT
# 1936 "data/scripts/battle_labyrinth.pory"
	waitse
# 1937 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1938 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
# 1939 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_322:
# 1947 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_DEFAULT
# 1949 "data/scripts/battle_labyrinth.pory"
	waitse
# 1950 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
# 1951 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_324:
# 1965 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1966 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_DEFAULT
# 1967 "data/scripts/battle_labyrinth.pory"
	waitse
# 1968 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_326:
# 2025 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2026 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_DEFAULT
# 2027 "data/scripts/battle_labyrinth.pory"
	waitse
# 2028 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_328:
# 2040 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2041 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_DEFAULT
# 2042 "data/scripts/battle_labyrinth.pory"
	waitse
# 2043 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2381 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2382 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_0, MSGBOX_DEFAULT
# 2383 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_MusicMenu_Text_4
# 2384 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2385 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2427 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2469 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2511 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2512 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2386 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2387 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2428 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2429 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2470 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2471 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2388 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2389 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2392 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2395 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2398 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2401 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2404 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2408 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2409 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2410 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2412 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2414 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2416 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2418 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2420 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2423 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2430 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2431 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2434 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2437 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2440 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2443 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2446 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2450 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2451 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2452 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2454 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2456 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2458 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2460 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2462 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2465 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2472 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2473 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2476 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2479 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2482 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2485 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2488 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2492 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2493 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2494 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2496 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2498 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2500 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2502 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2504 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2507 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2390 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2391 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_5, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2393 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_6, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2396 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2397 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_7, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2399 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2400 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_8, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2402 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2403 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_9, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2406 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_10, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2432 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_18, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2435 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2436 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_19, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2438 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2439 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_20, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2441 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2442 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_21, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2444 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2445 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_22, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2448 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2474 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2475 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_25, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2477 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2478 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2480 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2481 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_27, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2483 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2484 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_28, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2486 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2487 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_29, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2490 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2411 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2413 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2415 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2417 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2419 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2422 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2424 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2453 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2455 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2457 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2459 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2464 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2495 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2497 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2499 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2501 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2503 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2506 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_31
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2508 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2519 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2520 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2521 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2522 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2523 "data/scripts/battle_labyrinth.pory"
	switch VAR_REVISITING_ZONE
# 2524 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WarpZone0_3
# 2528 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WarpZone0_4
# 2532 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WarpZone0_5
# 2536 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WarpZone0_6
# 2540 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WarpZone0_7
# 2544 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WarpZone0_8
# 2548 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WarpZone0_9
# 2552 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_WarpZone0_10
# 2556 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WarpZone0_11
# 2560 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WarpZone0_12
# 2564 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WarpZone0_13
# 2568 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WarpZone0_14
# 2572 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WarpZone0_15
# 2576 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_WarpZone0_16
# 2580 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WarpZone0_17
# 2584 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WarpZone0_18
# 2588 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WarpZone0_19
# 2592 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WarpZone0_20
# 2596 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_WarpZone0_21
# 2600 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WarpZone0_22
# 2604 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WarpZone0_23
# 2608 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WarpZone0_24
# 2612 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WarpZone0_25
# 2616 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WarpZone0_26
# 2620 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_WarpZone0_27
# 2624 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_WarpZone0_28
# 2628 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_WarpZone0_29
# 2632 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_WarpZone0_30
# 2636 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_WarpZone0_31
# 2640 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_WarpZone0_32
# 2644 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_WarpZone0_33
# 2648 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_WarpZone0_34
# 2652 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_WarpZone0_35
# 2656 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_WarpZone0_36
# 2660 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_WarpZone0_37
# 2664 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_WarpZone0_38
# 2668 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_WarpZone0_39
# 2672 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_WarpZone0_40
# 2676 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_WarpZone0_41
# 2680 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_WarpZone0_42
# 2684 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_WarpZone0_43
# 2688 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_WarpZone0_44
# 2692 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_WarpZone0_45
# 2696 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_WarpZone0_46
# 2700 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_WarpZone0_47
# 2704 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_WarpZone0_48
# 2708 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_WarpZone0_49
# 2712 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_WarpZone0_50
# 2716 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_WarpZone0_51
# 2720 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_WarpZone0_52
# 2724 "data/scripts/battle_labyrinth.pory"
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
# 2729 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_WarpZone0_3:
# 2525 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2526 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 32
# 2527 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
# 2529 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2530 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 32
# 2531 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
# 2533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2534 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 32
# 2535 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
# 2537 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2538 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 32
# 2539 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
# 2541 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2542 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 32
# 2543 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
# 2545 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2546 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 32
# 2547 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
# 2549 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2550 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 32
# 2551 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
# 2553 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2554 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 32
# 2555 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
# 2557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2558 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 32
# 2559 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
# 2561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2562 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 32
# 2563 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
# 2565 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2566 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 25
# 2567 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
# 2569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2570 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 25
# 2571 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
# 2573 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2574 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 25
# 2575 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
# 2577 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2578 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 25
# 2579 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
# 2581 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2582 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 25
# 2583 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
# 2585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2586 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 25
# 2587 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
# 2589 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2590 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 25
# 2591 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
# 2593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2594 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 25
# 2595 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
# 2597 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2598 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 25
# 2599 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
# 2601 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2602 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 25
# 2603 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
# 2605 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2606 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 18
# 2607 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
# 2609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2610 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 18
# 2611 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
# 2613 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2614 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 18
# 2615 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
# 2617 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2618 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 18
# 2619 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
# 2621 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2622 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 18
# 2623 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
# 2625 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2626 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 18
# 2627 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
# 2629 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2630 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 18
# 2631 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
# 2633 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2634 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 18
# 2635 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
# 2637 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2638 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 18
# 2639 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
# 2641 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2642 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 18
# 2643 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
# 2645 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2646 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 11
# 2647 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
# 2649 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2650 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 11
# 2651 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
# 2653 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2654 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 11
# 2655 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
# 2657 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2658 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 11
# 2659 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
# 2661 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2662 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 11
# 2663 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
# 2665 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2666 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 11
# 2667 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
# 2669 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2670 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 11
# 2671 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
# 2673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2674 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 11
# 2675 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
# 2677 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2678 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 11
# 2679 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
# 2681 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2682 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 11
# 2683 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
# 2685 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2686 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 4
# 2687 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
# 2689 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2690 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 4
# 2691 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
# 2693 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2694 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 4
# 2695 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
# 2697 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2698 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 4
# 2699 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
# 2701 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2702 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 4
# 2703 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
# 2705 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2706 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 4
# 2707 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
# 2709 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2710 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 4
# 2711 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
# 2713 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2714 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 4
# 2715 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
# 2717 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2718 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 4
# 2719 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
# 2721 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2722 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 4
# 2723 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
# 2725 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2726 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 25
# 2727 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
# 2738 "data/scripts/battle_labyrinth.pory"
	lockall
# 2739 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 2740 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
# 2741 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
# 2747 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 2748 "data/scripts/battle_labyrinth.pory"
	removemoney 0
# 2749 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 2750 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_1
# 2751 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2752 "data/scripts/battle_labyrinth.pory"
	case 1, Zone_EventScript_RetirePrompt_6
# 2760 "data/scripts/battle_labyrinth.pory"
	case 2, Zone_EventScript_RetirePrompt_7
# 2769 "data/scripts/battle_labyrinth.pory"
	case 3, Zone_EventScript_RetirePrompt_8
# 2779 "data/scripts/battle_labyrinth.pory"
	case 4, Zone_EventScript_RetirePrompt_9
# 2790 "data/scripts/battle_labyrinth.pory"
	case 5, Zone_EventScript_RetirePrompt_10
# 2802 "data/scripts/battle_labyrinth.pory"
	case 6, Zone_EventScript_RetirePrompt_11
# 2813 "data/scripts/battle_labyrinth.pory"
	case 7, Zone_EventScript_RetirePrompt_12
# 2831 "data/scripts/battle_labyrinth.pory"
	case 9, Zone_EventScript_RetirePrompt_13
# 2837 "data/scripts/battle_labyrinth.pory"
	case 10, Zone_EventScript_RetirePrompt_14
# 2849 "data/scripts/battle_labyrinth.pory"
	case 11, Zone_EventScript_RetirePrompt_15
# 2858 "data/scripts/battle_labyrinth.pory"
	case 12, Zone_EventScript_RetirePrompt_16
# 2871 "data/scripts/battle_labyrinth.pory"
	case 13, Zone_EventScript_RetirePrompt_17
# 2891 "data/scripts/battle_labyrinth.pory"
	case 15, Zone_EventScript_RetirePrompt_18
# 2896 "data/scripts/battle_labyrinth.pory"
	case 16, Zone_EventScript_RetirePrompt_19
# 2907 "data/scripts/battle_labyrinth.pory"
	case 17, Zone_EventScript_RetirePrompt_20
# 2915 "data/scripts/battle_labyrinth.pory"
	case 18, Zone_EventScript_RetirePrompt_21
# 2941 "data/scripts/battle_labyrinth.pory"
	case 20, Zone_EventScript_RetirePrompt_22
# 2953 "data/scripts/battle_labyrinth.pory"
	case 21, Zone_EventScript_RetirePrompt_23
# 2956 "data/scripts/battle_labyrinth.pory"
	case 22, Zone_EventScript_RetirePrompt_24
# 2959 "data/scripts/battle_labyrinth.pory"
	case 23, Zone_EventScript_RetirePrompt_25
# 2962 "data/scripts/battle_labyrinth.pory"
	case 24, Zone_EventScript_RetirePrompt_26
# 2965 "data/scripts/battle_labyrinth.pory"
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
# 2969 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
# 2742 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2743 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2744 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
# 2753 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NINA
# 2754 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARIAM
# 2755 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OSCAR
# 2756 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_1
# 2757 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_1_STATE, 0
# 2758 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 38, 11
# 2759 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
# 2761 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_POLLY
# 2762 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEREMIAH
# 2763 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HARPER
# 2764 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ARTHUR
# 2765 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_2
# 2766 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_2_STATE, 0
# 2767 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 38, 11
# 2768 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
# 2770 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEMMA
# 2771 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PATRICK
# 2772 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BORIS
# 2773 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNABELLE
# 2774 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RICHARD
# 2775 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_3
# 2776 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_3_STATE, 0
# 2777 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 38, 11
# 2778 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
# 2780 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HERMAN
# 2781 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RALPH
# 2782 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SANTIAGO
# 2783 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 2784 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRED
# 2785 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LUCIA
# 2786 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_4
# 2787 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_4_STATE, 0
# 2788 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 38, 11
# 2789 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
# 2791 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 2792 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GILBERT
# 2793 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REBECCA
# 2794 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RYAN
# 2795 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CAITLYN
# 2796 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KENNETH
# 2797 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CLINTON
# 2798 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_5
# 2799 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_5_STATE, 0
# 2800 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 38, 11
# 2801 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
# 2803 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ZACK
# 2804 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELANIE
# 2805 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONSTANCE
# 2806 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRANK
# 2807 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DUDLEY
# 2808 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DAISY
# 2809 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_6
# 2810 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_6_STATE, 0
# 2811 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 38, 11
# 2812 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
# 2814 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MILLIE
# 2815 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PAIGE
# 2816 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SETH
# 2817 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAMAL
# 2818 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONNIE
# 2819 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_7
# 2820 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JIMMY
# 2821 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIANO
# 2822 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KAREN
# 2823 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAYDEN
# 2824 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NEIL
# 2825 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TAMARA
# 2826 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_8
# 2827 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE8D_WALLY
# 2828 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_8_STATE, 0
# 2829 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 38, 11
# 2830 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
# 2832 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_COOPER
# 2833 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CARMINE
# 2834 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 2835 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 38, 11
# 2836 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
# 2838 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KYLE
# 2839 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BELLE
# 2840 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DEWEY
# 2841 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PEARLIE
# 2842 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ERNEST
# 2843 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ALANA
# 2844 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SUSAN
# 2845 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONRAD
# 2846 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_9
# 2847 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 38, 11
# 2848 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
# 2850 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEANETTE
# 2851 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMMA_AND_LEO
# 2852 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REGINA
# 2853 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOEL
# 2854 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_10
# 2855 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_11_STATE, 0
# 2856 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 38, 11
# 2857 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
# 2859 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ESSENCE
# 2860 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DOLORES
# 2861 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TREVOR
# 2862 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RANDOLPH
# 2863 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FEDERICO
# 2864 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GENIE
# 2865 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HILDA
# 2866 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KINLEY
# 2867 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 2868 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_12_STATE, 0
# 2869 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 38, 11
# 2870 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
# 2872 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_VIOLET
# 2873 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WANDA
# 2874 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AMBER_AND_KIM
# 2875 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAN_AND_ERIN
# 2876 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_STEVE
# 2877 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GOULD
# 2878 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MENDEL
# 2879 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DARWIN
# 2880 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BART
# 2881 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NIGEL
# 2882 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOLA
# 2883 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHARLIE
# 2884 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TODD
# 2885 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RUSSELL
# 2886 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OTIS
# 2887 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_11
# 2888 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_12
# 2889 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 38, 11
# 2890 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
# 2892 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_13
# 2893 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_15_STATE, 0
# 2894 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 38, 11
# 2895 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
# 2897 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_IONA
# 2898 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BERKE
# 2899 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TANISHA
# 2900 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ROBERT
# 2901 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHRIS
# 2902 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANGUS
# 2903 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_14
# 2904 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_16_STATE, 0
# 2905 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 38, 11
# 2906 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
# 2908 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AXLE
# 2909 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RAFAEL
# 2910 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GEORGINA
# 2911 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 2912 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_17_STATE, 0
# 2913 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 38, 11
# 2914 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
# 2916 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DORIS
# 2917 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HOMER
# 2918 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOHN
# 2919 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GLENN
# 2920 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAY
# 2921 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TYLER
# 2922 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TERRENCE
# 2923 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARTY
# 2924 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KARI
# 2925 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ABRAHAM
# 2926 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELINDA
# 2927 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIO
# 2928 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REX
# 2929 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOUIS
# 2930 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEROY
# 2931 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ELTON
# 2932 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WILLIE
# 2933 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_16
# 2934 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_18_STATE, 0
# 2935 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_19_STATE, 0
# 2936 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 2937 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 2938 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_DOLL
# 2939 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 38, 11
# 2940 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
# 2942 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SHAWN
# 2943 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FERNANDO
# 2944 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KANE
# 2945 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KIRK
# 2946 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DALTON
# 2947 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEE
# 2948 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BLANCHE
# 2949 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_17
# 2950 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_20_STATE, 0
# 2951 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2952 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
# 2954 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2955 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
# 2957 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 38, 11
# 2958 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
# 2960 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 38, 11
# 2961 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
# 2963 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 38, 11
# 2964 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
# 2966 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 38, 11
# 2967 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyGift::
# 2982 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2983 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyGift_Text_0, MSGBOX_YESNO
# 2984 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2985 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2986 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2994 "data/scripts/battle_labyrinth.pory"
	lock
# 2995 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2996 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2999 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 3000 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 3001 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 3072 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2997 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 3002 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3003 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 3004 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 3005 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 3006 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 3009 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 3012 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 3016 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 3019 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 3022 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 3026 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 3031 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 3034 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 3038 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 3041 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 3046 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 3049 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 3052 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 3055 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 3058 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 3062 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 3063 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 3064 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 3065 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 3066 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 3067 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 3007 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3008 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 3010 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3011 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 3013 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 3014 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3015 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 3017 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3018 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 3020 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3021 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 3023 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 3024 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3025 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 3027 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 3028 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 3029 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3030 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 3032 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 3033 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 3035 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 3036 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 3037 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 3039 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 3040 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 3042 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 3043 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 3044 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 3045 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 3047 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 3048 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 3050 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 3051 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 3053 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 3054 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 3056 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 3057 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 3059 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 3060 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 3061 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 3068 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3069 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 3076 "data/scripts/battle_labyrinth.pory"

# 3077 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 3078 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 3079 "data/scripts/battle_labyrinth.pory"
	end

EventScript_MedicineSign_Text_0:
# 48 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 53 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ConsumablesSign_Text_0:
# 58 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's One Time Wonders\nBest for Single Use!$"

EventScript_BerriesSign_Text_0:
# 63 "data/scripts/battle_labyrinth.pory"
	.string "Gordon's Berries\nOnly the Berry best!$"

EventScript_BattleItemsSign_Text_0:
# 68 "data/scripts/battle_labyrinth.pory"
	.string "Alexander's Battle Shop\nA Curated Collection$"

EventScript_TMsSign_Text_0:
# 73 "data/scripts/battle_labyrinth.pory"
	.string "Julia's TM Shop\nTechnically the Best$"

EventScript_Shop_Portentia_Text_0:
# 81 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hello, lovely. Care for a brew?\p"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: I am Portentia. I craft the\n"
	.string "finest medicines for your Pokémon.$"

EventScript_Shop_Portentia_Text_1:
# 85 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 88 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome to my shop.\nCan I get you anything?$"

EventScript_Shop_Portentia_Text_3:
# 121 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 129 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there!\nThe name's Tim Johnson.\p{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\nPokémart Incorporated.\lYou can find all variants of Pokéballs\lfor your travels.$"

EventScript_Shop_Tim_Text_1:
# 132 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's.\nCan I get you anything?$"

EventScript_Shop_Tim_Text_2:
# 165 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day.$"

EventScript_Shop_Varrick_Text_0:
# 304 "data/scripts/battle_labyrinth.pory"
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

EventScript_Shop_Varrick_Text_1:
# 320 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Greetings and salutations!\nWelcome to Silph Unique Item Store!$"

EventScript_Shop_Varrick_Text_2:
# 360 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from Silph!$"

EventScript_Shop_Unique_ZhuLi_Text_0:
# 676 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Welcome to Silph Unique\nItem Store. Care to buy anything?$"

EventScript_Shop_Unique_ZhuLi_Text_1:
# 698 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: We thank you for your\nbusiness, loyal customer.$"

EventScript_Shop_ZhuLiIntro_Text_0:
# 885 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Fantastic! You've arrived!\nZhu Li, do the thing!$"

EventScript_Shop_ZhuLiIntro_Text_1:
# 886 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.$"

EventScript_Shop_ZhuLiIntro_Text_2:
# 889 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Zhu Li is my assistant!\pSilph gave me so many items to sell\nthat I practically begged them for\lsome extra help!\pZhu Li, introduce yourself!$"

EventScript_Shop_ZhuLiIntro_Text_3:
# 890 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.\pPleased to meet you, {PLAYER}. I'm-$"

EventScript_Shop_ZhuLiIntro_Text_4:
# 891 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Alright, we don't have all\nday, Zhu Li! Talk to her if you\lwant to buy consumable items, while\lI'll handle all of the held items!$"

EventScript_Shop_Lelouch_Text_0:
# 919 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Now that's a name…\nI haven't heard in…$"

EventScript_Shop_Lelouch_Text_1:
# 921 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 925 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 930 "data/scripts/battle_labyrinth.pory"
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
# 944 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 945 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 945 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 945 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 945 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 945 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Lelouch_Text_10:
# 956 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 974 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 975 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 977 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 1006 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 1012 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1213 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1221 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1225 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1228 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1250 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1251 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1252 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1253 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1254 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1255 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1256 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1257 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1258 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1259 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1398 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1402 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1420 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1428 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1433 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1438 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1444 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1450 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1456 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1462 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1468 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1474 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1480 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1486 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1492 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1498 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1504 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1516 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1522 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1528 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1534 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1540 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1546 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1552 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1558 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1585 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon…\nUgh. Never mind.\p{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the\nPokémon Center, but they gave\lterrible pay.\pSo I've started my own shop,\nJoy's Healing Shop!$"

EventScript_Shop_Joy_Text_1:
# 1587 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Healing Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1589 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1596 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1601 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1607 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1621 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1651 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1652 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1655 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1702 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_Settings_Text_0:
# 1801 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1804 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1806 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1809 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1811 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1814 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1816 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1819 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1821 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1824 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1826 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1829 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1831 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1833 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1835 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1837 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1840 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1842 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1845 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1847 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1850 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1852 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1855 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1857 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1860 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1862 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1865 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
# 1867 "data/scripts/battle_labyrinth.pory"
	.string "Lazy$"

EventScript_Settings_Text_28:
# 1870 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1872 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1875 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1877 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1880 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1882 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1885 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic$"

EventScript_Settings_Text_35:
# 1887 "data/scripts/battle_labyrinth.pory"
	.string "Workaholic$"

EventScript_Settings_Text_36:
# 1895 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_37:
# 1897 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1900 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_39:
# 1910 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_40:
# 1912 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_41:
# 1915 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_42:
# 1930 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_43:
# 1932 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_44:
# 1935 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_45:
# 1943 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_46:
# 1945 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_47:
# 1948 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_48:
# 1959 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_49:
# 1961 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_50:
# 1963 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_51:
# 1966 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_52:
# 1973 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_53:
# 1975 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_54:
# 1978 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_55:
# 1988 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_56:
# 1989 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_57:
# 2018 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_58:
# 2021 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_59:
# 2023 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_60:
# 2026 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_61:
# 2036 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_62:
# 2038 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2041 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_64:
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_65:
# 2051 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_66:
# 2054 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_67:
# 2059 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_68:
# 2062 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_69:
# 2068 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_70:
# 2070 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_71:
# 2073 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_72:
# 2078 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_73:
# 2081 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_74:
# 2089 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_75:
# 2091 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_76:
# 2093 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_77:
# 2096 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_78:
# 2104 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_79:
# 2105 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_80:
# 2108 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_81:
# 2114 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_82:
# 2116 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_83:
# 2118 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_84:
# 2121 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_85:
# 2129 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_86:
# 2130 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_87:
# 2133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_88:
# 2139 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_89:
# 2141 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_90:
# 2143 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_91:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_92:
# 2154 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_93:
# 2155 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_94:
# 2158 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_95:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_96:
# 2166 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_97:
# 2168 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_98:
# 2171 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_99:
# 2179 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_100:
# 2180 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_101:
# 2183 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_102:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_103:
# 2191 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_104:
# 2193 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_105:
# 2196 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_106:
# 2204 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_107:
# 2205 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_108:
# 2208 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_109:
# 2214 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_110:
# 2216 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_111:
# 2218 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_112:
# 2221 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_113:
# 2229 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_114:
# 2231 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_115:
# 2234 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_116:
# 2243 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_117:
# 2245 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_118:
# 2247 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_119:
# 2250 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_120:
# 2258 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_121:
# 2259 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_122:
# 2262 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_123:
# 2268 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_124:
# 2270 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_125:
# 2272 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_126:
# 2275 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_127:
# 2283 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_128:
# 2284 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_129:
# 2287 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_130:
# 2293 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_131:
# 2295 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_132:
# 2297 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_133:
# 2300 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_134:
# 2308 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_135:
# 2309 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_136:
# 2312 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_137:
# 2318 "data/scripts/battle_labyrinth.pory"
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_138:
# 2320 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_139:
# 2322 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_140:
# 2325 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_141:
# 2333 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_142:
# 2334 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_143:
# 2337 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_144:
# 2344 "data/scripts/battle_labyrinth.pory"
	.string "Retiring from a Zone allows one to\n"
	.string "return to the Sanctuary, at the cost of\l"
	.string "half of their money as well as losing all\l"
	.string "progress made thus far in the Zone.\p"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting prevents\n"
	.string "players from using this option.$"

EventScript_Settings_Text_145:
# 2346 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_146:
# 2348 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_147:
# 2351 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_148:
# 2359 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_149:
# 2360 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_150:
# 2363 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2382 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_MusicMenu_Text_5:
# 2391 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_6:
# 2394 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_7:
# 2397 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_8:
# 2400 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_9:
# 2403 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_10:
# 2406 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_11:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_12:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_13:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_14:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_15:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_16:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_17:
# 2422 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_18:
# 2433 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_19:
# 2436 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_20:
# 2439 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_21:
# 2442 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_22:
# 2445 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_23:
# 2448 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_24:
# 2464 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_25:
# 2475 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_26:
# 2478 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_27:
# 2481 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_28:
# 2484 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_29:
# 2487 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_30:
# 2490 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_31:
# 2506 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
# 2740 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
# 2750 "data/scripts/battle_labyrinth.pory"
	.string "Warping now…$"

EventScript_NuzlockeVerifyGift_Text_0:
# 2983 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 3000 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
# 960 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 964 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1162 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1166 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1170 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1174 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1178 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1182 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1186 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1190 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1194 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1198 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1576 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1761 "data/scripts/battle_labyrinth.pory"
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
# 1768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1774 "data/scripts/battle_labyrinth.pory"
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
# 1781 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NumDeathsNuzlocke::
# 1787 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} death(s).$"

gText_Colress_CannotChangeSettingBrutal::
# 1791 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1795 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2733 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2973 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2977 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
