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
	applymovement 1, Common_Movement_WalkDown3
# 12 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 13 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_BADGE
	return


EventScript_MoveCameraUp::
# 18 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 19 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 20 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 21 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
# 26 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 27 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 28 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 29 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_HandleFlashlight::
# 34 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_FLASHLIGHT
# 35 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 38 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 36 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_MedicineSign::
# 44 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 49 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 54 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 59 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BattleItemsSign::
# 64 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BattleItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_TMsSign::
# 69 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TMsSign_Text_0, MSGBOX_SIGN
	end


EventScript_Shop_Portentia::
# 74 "data/scripts/battle_labyrinth.pory"
	lock
# 75 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 76 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 80 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 84 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 85 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 86 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 87 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 88 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 89 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 90 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_11
# 91 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_11
# 92 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_11
# 93 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_11
# 94 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_11
# 95 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_11
# 96 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_11
# 97 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_11
# 98 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_11
# 99 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_11
# 100 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_11
# 101 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_11
# 102 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_11
# 103 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_11
# 104 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_11
# 105 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_11
# 106 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_11
# 107 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_11
# 108 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_11
# 109 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_11
EventScript_Shop_Portentia_9:
# 112 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 113 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 77 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0
# 78 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 81 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1
# 82 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 80 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 110 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Portentia_9


EventScript_Shop_Tim::
# 117 "data/scripts/battle_labyrinth.pory"
	lock
# 118 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 119 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 123 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 124 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 125 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 126 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 127 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 128 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 129 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_6
# 130 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_6
# 131 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_6
# 132 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_6
# 133 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_6
# 134 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_6
# 135 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_6
# 136 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_6
# 137 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_6
# 138 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_6
# 139 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_6
# 140 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_6
# 141 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_6
# 142 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_6
# 143 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_6
# 144 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_6
# 145 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_6
# 146 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_6
# 147 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_6
# 148 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_6
EventScript_Shop_Tim_4:
# 151 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 152 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 120 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0
# 121 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 149 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Tim_4


	.align 2
# 155 "data/scripts/battle_labyrinth.pory"
Shop_General_26to30:
# 156 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 157 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 158 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 159 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 160 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 161 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 162 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 163 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 164 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 165 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 166 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 167 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 168 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 169 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 170 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELIXIR
# 171 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 172 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 173 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 174 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 175 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 176 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 177 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 178 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 179 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 180 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
# 181 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HP_UP
# 182 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTEIN
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_IRON
# 184 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CALCIUM
# 185 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZINC
# 186 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 190 "data/scripts/battle_labyrinth.pory"
	lock
# 191 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 192 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 209 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 210 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 211 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 212 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 213 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 214 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 216 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 217 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 219 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_8
# 220 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 222 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_9
# 223 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_9
# 225 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_10
# 226 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_10
# 227 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 228 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 230 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 231 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 232 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 233 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 235 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 236 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 237 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 239 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 240 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 242 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 249 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 250 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 193 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0
# 207 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 215 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_1to3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 218 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 221 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 224 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 229 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 234 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 238 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 241 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 243 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 243 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 246 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 244 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 254 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_1to3:
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 258 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 259 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 260 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 261 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 262 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 263 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 264 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 265 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 266 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 269 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 276 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 277 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 284 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 287 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 288 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 321 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 344 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 375 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 413 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 447 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 508 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Unique_ZhuLi::
# 563 "data/scripts/battle_labyrinth.pory"
	lock
# 564 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 565 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Unique_ZhuLi_Text_0
# 566 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 567 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 568 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Unique_ZhuLi_3
# 569 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Unique_ZhuLi_3
# 570 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Unique_ZhuLi_3
# 571 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Unique_ZhuLi_3
# 573 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Unique_ZhuLi_4
# 574 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Unique_ZhuLi_4
# 575 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Unique_ZhuLi_4
# 576 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Unique_ZhuLi_4
# 578 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Unique_ZhuLi_5
# 579 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Unique_ZhuLi_5
# 580 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Unique_ZhuLi_5
# 582 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Unique_ZhuLi_6
# 583 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Unique_ZhuLi_6
# 584 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Unique_ZhuLi_6
EventScript_Shop_Unique_ZhuLi_1:
# 587 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Unique_ZhuLi_Text_1, MSGBOX_DEFAULT
# 588 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Unique_ZhuLi_3:
# 572 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_11to15
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_4:
# 577 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_16to20
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_5:
# 581 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_21to23
	goto EventScript_Shop_Unique_ZhuLi_1

EventScript_Shop_Unique_ZhuLi_6:
# 585 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_ZhuLi_24to30
	goto EventScript_Shop_Unique_ZhuLi_1


	.align 2
# 591 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_11to15:
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 595 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 596 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 600 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 601 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 602 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 603 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 604 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 605 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 606 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 607 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 608 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 609 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 610 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 611 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 612 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 613 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 615 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 616 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 617 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 618 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 621 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 622 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 625 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_16to20:
# 626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 627 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 635 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 636 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 649 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 650 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 651 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LOVE_SWEET
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BERRY_SWEET
# 656 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CLOVER_SWEET
# 657 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLOWER_SWEET
# 658 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STAR_SWEET
# 659 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RIBBON_SWEET
# 660 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 661 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 662 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 668 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 669 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 670 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 671 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 672 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 673 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 674 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 675 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 676 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 677 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 680 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_21to23:
# 681 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 682 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 683 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 684 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 685 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 686 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 687 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 688 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 689 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 690 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 691 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 692 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 693 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 694 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 695 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 696 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 697 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 698 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 699 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 700 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 701 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 702 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 703 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 704 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 705 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 706 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 707 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 708 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 709 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 710 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 711 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

	.align 2
# 714 "data/scripts/battle_labyrinth.pory"
Shop_Unique_ZhuLi_24to30:
# 715 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 716 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 717 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 718 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 719 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 720 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 721 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 722 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 723 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 724 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 725 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 726 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_STONE
# 727 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHINY_STONE
# 728 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUSK_STONE
# 729 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DAWN_STONE
# 730 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_OVAL_STONE
# 731 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTECTOR
# 732 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_SCALE
# 733 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTIRIZER
# 734 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGMARIZER
# 735 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REAPER_CLOTH
# 736 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_FANG
# 737 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAZOR_CLAW
# 738 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DUBIOUS_DISC
# 739 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PRISM_SCALE
# 740 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 741 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 742 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_KINGS_ROCK
# 743 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_CUFF
# 744 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GALARICA_WREATH
# 745 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CRACKED_POT
# 746 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UPGRADE
# 747 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 748 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TART_APPLE
# 749 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SWEET_APPLE
# 750 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RED_NECTAR
# 751 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_YELLOW_NECTAR
# 752 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_NECTAR
# 753 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

EventScript_Shop_ZhuLiIntro::
# 757 "data/scripts/battle_labyrinth.pory"
	lockall
# 758 "data/scripts/battle_labyrinth.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 759 "data/scripts/battle_labyrinth.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 760 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 761 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 762 "data/scripts/battle_labyrinth.pory"
	waitse
# 763 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 764 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq EventScript_Shop_ZhuLiIntro_2
EventScript_Shop_ZhuLiIntro_1:
# 770 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 771 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 772 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 773 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 774 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_0
# 775 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_1
# 776 "data/scripts/battle_labyrinth.pory"
	playse SE_APPLAUSE
# 777 "data/scripts/battle_labyrinth.pory"
	waitse
# 778 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_2
# 779 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_3
# 780 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_ZhuLiIntro_Text_4
# 781 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 782 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_Shop_ZhuLiIntro_2:
# 765 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 766 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 767 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 768 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_Shop_ZhuLiIntro_1


EventScript_Shop_Julia::
# 786 "data/scripts/battle_labyrinth.pory"
	lockall
# 787 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 788 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Alexander::
# 792 "data/scripts/battle_labyrinth.pory"
	lockall
# 793 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 794 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Gordon::
# 798 "data/scripts/battle_labyrinth.pory"
	lockall
# 799 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 800 "data/scripts/battle_labyrinth.pory"
	releaseall
	return


EventScript_Shop_Lelouch::
# 804 "data/scripts/battle_labyrinth.pory"
	lock
# 805 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 806 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 812 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 817 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 832 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 833 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Lelouch_Text_9
# 834 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 835 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 837 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 839 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 841 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 844 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_10
# 845 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 807 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 808 "data/scripts/battle_labyrinth.pory"
	delay 96
# 809 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 810 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 813 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 814 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 830 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 836 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 838 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 840 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 842 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 857 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 858 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 862 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 863 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 864 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 867 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 2
# 868 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 869 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 870 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 884 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1043 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1044 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 859 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 865 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 864 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 864 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 871 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 872 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 885 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 886 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 873 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 874 "data/scripts/battle_labyrinth.pory"
	waitstate
# 875 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 880 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 887 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 888 "data/scripts/battle_labyrinth.pory"
	waitstate
# 889 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 892 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 893 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 896 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 897 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 898 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 899 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 900 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 901 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 902 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 905 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 908 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 911 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 914 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 916 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 917 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 920 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 921 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 922 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 923 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 926 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 929 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 932 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 935 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 937 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 938 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 941 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 942 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 943 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 944 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 947 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 950 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 953 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 956 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 958 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 959 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 962 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 963 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 964 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 965 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 968 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 971 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 974 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 977 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 979 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 980 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 983 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 984 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 985 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 986 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 989 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 992 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 995 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 998 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1000 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1001 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1004 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1005 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1006 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1007 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1010 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1013 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1016 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1019 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1021 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1022 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1025 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1029 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1030 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1033 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1034 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1035 "data/scripts/battle_labyrinth.pory"
	waitse
# 1036 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1037 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1038 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 876 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 877 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 878 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 890 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 894 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 903 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 904 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 906 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 907 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 909 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 910 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 912 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 913 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 915 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 924 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 925 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 927 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 928 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 930 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 931 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 933 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 934 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 936 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 945 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 946 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 948 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 949 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 951 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 952 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 954 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 955 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 957 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 966 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 967 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 969 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 970 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 972 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 973 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 975 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 976 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 978 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 987 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 988 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 990 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 991 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 993 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 994 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 996 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 997 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 999 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1008 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1009 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1011 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1012 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1014 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1015 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1017 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1018 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1020 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1026 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1091 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1092 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
# 1096 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
# 1097 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
# 1101 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
# 1102 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1103 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1104 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1107 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1108 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1112 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
# 1117 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1118 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1119 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
# 1122 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1123 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
# 1093 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
# 1109 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
# 1113 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
# 1130 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1131 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
# 1136 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
# 1137 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
EventScript_Shop_Lelouch_MoveTutor_6:
# 1173 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 50
# 1174 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1175 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1176 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_11
# 1179 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_12
# 1182 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_13
# 1185 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_14
# 1188 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_15
# 1191 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_16
# 1194 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_17
# 1197 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_18
# 1200 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_19
# 1203 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_20
# 1281 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_21
# 1282 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_21
EventScript_Shop_Lelouch_MoveTutor_9:
# 1285 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1286 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_10, MSGBOX_YESNO
# 1287 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_DEFAULT
# 1291 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1292 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_26
# 1295 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
# 1296 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
# 1132 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
# 1138 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_0, 1
# 1139 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 2
# 1140 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 3
# 1141 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 4
# 1142 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 5
# 1143 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 6
# 1144 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 7
# 1145 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 8
# 1146 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 9
# 1147 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 10
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_12:
# 1180 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1181 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_13:
# 1183 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1184 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_14:
# 1186 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1187 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_15:
# 1189 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1190 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_16:
# 1192 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1193 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_17:
# 1195 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1196 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_18:
# 1198 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1199 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_19:
# 1201 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_20:
# 1204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1205 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_21:
	return

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_26:
	goto EventScript_Shop_Lelouch_MoveTutor_4


EventScript_Shop_Lelouch_Other::
# 1303 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1304 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1308 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1309 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1310 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1311 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1314 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1315 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1318 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1319 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1320 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1321 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1322 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1323 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1324 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1330 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1336 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1342 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1348 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1354 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1360 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1366 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1372 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1378 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1384 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1390 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1396 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1402 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1408 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1414 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1420 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1426 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1432 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1438 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1444 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1450 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1453 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1454 "data/scripts/battle_labyrinth.pory"
	waitse
# 1455 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1456 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1457 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1458 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1305 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1316 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1325 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1326 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1327 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1331 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1332 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1333 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1337 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1338 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1339 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1343 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1345 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1349 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1350 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1351 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1355 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1356 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1357 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1361 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1362 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1363 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1367 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1368 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1369 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1373 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1374 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1375 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1379 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1380 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1381 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1385 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1386 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1387 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1391 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1392 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1393 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1397 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1398 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1399 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1403 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1404 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1405 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1409 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1410 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1411 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1415 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1416 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1417 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1421 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1422 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1423 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1427 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1428 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1429 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1433 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1434 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1435 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1439 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1440 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1441 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1445 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1446 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1447 "data/scripts/battle_labyrinth.pory"
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
# 1469 "data/scripts/battle_labyrinth.pory"
	lock
# 1470 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1471 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1475 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1476 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1477 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1478 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1482 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1483 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1487 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1488 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1489 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1490 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1491 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1492 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1493 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1494 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1495 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1496 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1499 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1500 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1472 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1473 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1479 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1480 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1484 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1485 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_MandatoryCheck::
# 1505 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1505 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1506 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1507 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1508 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1510 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1511 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1514 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1516 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1512 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1524 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1525 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1526 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1527 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1530 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1532 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1528 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1536 "data/scripts/battle_labyrinth.pory"
	lock
# 1537 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1538 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1543 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1544 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1545 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1546 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1548 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1550 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1552 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1554 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1557 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1558 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1539 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1540 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1541 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1547 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1549 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1551 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1553 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1555 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1561 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1565 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1570 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
# 1576 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1582 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1589 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1590 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1591 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1592 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1599 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1606 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1613 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1614 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	return

EventScript_LeavingSetup_2:
# 1593 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1594 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1595 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1596 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1597 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1600 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1601 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1602 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1603 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1604 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1607 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1608 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1609 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1610 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1611 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
# 1619 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1622 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1625 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1628 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1632 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1633 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1634 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1620 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1621 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1623 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1624 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1626 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1627 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1629 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1630 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1639 "data/scripts/battle_labyrinth.pory"
	lockall
# 1640 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 32
# 1641 "data/scripts/battle_labyrinth.pory"
	waitstate
	return


EventScript_Documentation::
# 1645 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Version
# 1646 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1689 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1690 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1691 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1693 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1696 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1698 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1701 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1703 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1706 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1708 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1711 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1714 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1716 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1719 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1721 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1722 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1722 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1725 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1727 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1727 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1730 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1732 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1732 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1735 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1737 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1737 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1740 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1742 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1742 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1745 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1747 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1747 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1750 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1752 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1752 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
# 1755 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1757 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1757 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1760 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1765 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1767 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1767 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1770 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1772 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_92
# 1772 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_92
# 1775 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_35, 17
EventScript_Settings_91:
# 1777 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 18
# 1778 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1779 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1780 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_98
# 1811 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_99
# 1843 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_100
# 1872 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_101
# 1936 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_102
# 1955 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_103
# 1974 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_104
# 1976 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_105
# 2001 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_106
# 2026 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_107
# 2051 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_108
# 2076 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_109
# 2101 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_110
# 2130 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_111
# 2155 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_112
# 2180 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_113
# 2205 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_114
# 2231 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_115
# 2256 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Settings_116
# 2257 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_116
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1692 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1694 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1697 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1699 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1702 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1704 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1707 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1709 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1712 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1717 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1723 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1728 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1733 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1738 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1743 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1748 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1753 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1758 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1763 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1768 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1773 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_34, 17
	goto EventScript_Settings_91

EventScript_Settings_98:
# 1781 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1782 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_117
# 1795 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_195
# 1798 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_YESNO
# 1799 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_99:
# 1812 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1813 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_121
EventScript_Settings_120:
# 1817 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_198
# 1831 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_YESNO
# 1832 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_100:
# 1844 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1845 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_123
# 1861 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_YESNO
# 1862 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_204
	goto EventScript_Settings_1

EventScript_Settings_101:
# 1873 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1874 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_126
# 1921 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_209
# 1924 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_YESNO
# 1925 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_102:
# 1937 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 1938 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_129
# 1947 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 1948 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_214
	goto EventScript_Settings_1

EventScript_Settings_103:
# 1956 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 1957 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_132
# 1966 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_YESNO
# 1967 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_218
	goto EventScript_Settings_1

EventScript_Settings_104:
# 1975 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_105:
# 1977 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 1978 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_135
# 1978 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_135
# 1992 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 1993 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 1994 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_223
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2002 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2003 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_140
# 2003 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_140
# 2017 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2019 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_228
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2027 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2028 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_145
# 2028 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_145
# 2042 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2043 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2044 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_233
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2052 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2053 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_150
# 2053 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_150
# 2067 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2068 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2069 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_238
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2077 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2078 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_155
# 2078 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_155
# 2092 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2093 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2094 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_243
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2102 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2103 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_160
# 2103 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_160
# 2117 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2118 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_248
# 2127 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_111:
# 2131 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2132 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_165
# 2132 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_165
# 2146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2147 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2148 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_254
	goto EventScript_Settings_1

EventScript_Settings_112:
# 2156 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2157 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_170
# 2157 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_170
# 2171 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2172 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2173 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_259
	goto EventScript_Settings_1

EventScript_Settings_113:
# 2181 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2182 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_175
# 2182 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_175
# 2196 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2197 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2198 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2206 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2207 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_180
# 2207 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_180
# 2221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2222 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2223 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_269
	goto EventScript_Settings_1

EventScript_Settings_115:
# 2232 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2233 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_WORKAHOLIC, EventScript_Settings_185
# 2233 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_185
# 2247 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_148, MSGBOX_DEFAULT
# 2248 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_149, MSGBOX_YESNO
# 2249 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_116:
# 2258 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_190
# 2261 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_117:
# 1783 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_YESNO
# 1784 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_193
	goto EventScript_Settings_1

EventScript_Settings_121:
# 1814 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUZLOCKE_DEATHS
# 1815 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NumDeathsNuzlocke, MSGBOX_DEFAULT
	goto EventScript_Settings_120

EventScript_Settings_123:
# 1846 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_201
# 1849 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_YESNO
# 1850 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_126:
# 1875 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_206
# 1909 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_YESNO
# 1910 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_129:
# 1939 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_YESNO
# 1940 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_212
	goto EventScript_Settings_1

EventScript_Settings_132:
# 1958 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 1959 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_135:
# 1979 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 1980 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_220
# 1989 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_140:
# 2004 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 2005 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_225
# 2014 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_145:
# 2029 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 2030 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_230
# 2039 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_150:
# 2054 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 2055 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_235
# 2064 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_155:
# 2079 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 2080 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_240
# 2089 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_160:
# 2104 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 2105 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_245
# 2114 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_165:
# 2133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 2134 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_251
# 2143 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_170:
# 2158 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2159 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_256
# 2168 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_175:
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2184 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_261
# 2193 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_180:
# 2208 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2209 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_266
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_185:
# 2234 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_DEFAULT
# 2235 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_271
# 2244 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_190:
	return

EventScript_Settings_193:
# 1785 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1786 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_195:
# 1796 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_198:
# 1818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_YESNO
# 1819 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_201:
# 1847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_204:
# 1863 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1864 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_206:
# 1876 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1877 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_YESNO
# 1878 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_209:
# 1922 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_212:
# 1941 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1942 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 1943 "data/scripts/battle_labyrinth.pory"
	waitse
# 1944 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_214:
# 1949 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1950 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 1951 "data/scripts/battle_labyrinth.pory"
	waitse
# 1952 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_216:
# 1960 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1961 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 1962 "data/scripts/battle_labyrinth.pory"
	waitse
# 1963 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_218:
# 1968 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1969 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_DEFAULT
# 1970 "data/scripts/battle_labyrinth.pory"
	waitse
# 1971 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_220:
# 1981 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_YESNO
# 1982 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_223:
# 1995 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1996 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 1997 "data/scripts/battle_labyrinth.pory"
	waitse
# 1998 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_225:
# 2006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_YESNO
# 2007 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2020 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2021 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2022 "data/scripts/battle_labyrinth.pory"
	waitse
# 2023 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_230:
# 2031 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_YESNO
# 2032 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2045 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2046 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2047 "data/scripts/battle_labyrinth.pory"
	waitse
# 2048 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_235:
# 2056 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_YESNO
# 2057 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2070 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2071 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2072 "data/scripts/battle_labyrinth.pory"
	waitse
# 2073 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_240:
# 2081 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_YESNO
# 2082 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_243:
# 2095 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2097 "data/scripts/battle_labyrinth.pory"
	waitse
# 2098 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_245:
# 2106 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_YESNO
# 2107 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_248:
# 2119 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2120 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_251:
# 2135 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_YESNO
# 2136 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2149 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2151 "data/scripts/battle_labyrinth.pory"
	waitse
# 2152 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_256:
# 2160 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_YESNO
# 2161 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2174 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2175 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2176 "data/scripts/battle_labyrinth.pory"
	waitse
# 2177 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_261:
# 2185 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_YESNO
# 2186 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2199 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2200 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2201 "data/scripts/battle_labyrinth.pory"
	waitse
# 2202 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2210 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_YESNO
# 2211 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_269:
# 2224 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2226 "data/scripts/battle_labyrinth.pory"
	waitse
# 2227 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_271:
# 2236 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_YESNO
# 2237 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2250 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2251 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_150, MSGBOX_DEFAULT
# 2252 "data/scripts/battle_labyrinth.pory"
	waitse
# 2253 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1787 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1788 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_DEFAULT
# 1789 "data/scripts/battle_labyrinth.pory"
	waitse
# 1790 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
# 1791 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_278:
# 1800 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_YESNO
# 1801 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_280:
# 1820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1821 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_320
	goto EventScript_Settings_1

EventScript_Settings_282:
# 1833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1834 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_322
	goto EventScript_Settings_1

EventScript_Settings_284:
# 1851 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1852 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_324
	goto EventScript_Settings_1

EventScript_Settings_286:
# 1865 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1866 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_DEFAULT
# 1867 "data/scripts/battle_labyrinth.pory"
	waitse
# 1868 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_288:
# 1879 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1880 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1881 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1882 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1883 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1884 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1885 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1886 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1887 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1888 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1889 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1890 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1891 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1892 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1893 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1894 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1895 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1896 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1897 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1898 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1899 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1900 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1901 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1902 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1903 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1904 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1905 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1906 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_290:
# 1911 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 1912 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_326
	goto EventScript_Settings_1

EventScript_Settings_292:
# 1926 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 1927 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_328
	goto EventScript_Settings_1

EventScript_Settings_294:
# 1983 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1984 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 1985 "data/scripts/battle_labyrinth.pory"
	waitse
# 1986 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2008 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2009 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2010 "data/scripts/battle_labyrinth.pory"
	waitse
# 2011 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2033 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2034 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2035 "data/scripts/battle_labyrinth.pory"
	waitse
# 2036 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2058 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2059 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2060 "data/scripts/battle_labyrinth.pory"
	waitse
# 2061 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2083 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2084 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2085 "data/scripts/battle_labyrinth.pory"
	waitse
# 2086 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2108 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2109 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2110 "data/scripts/battle_labyrinth.pory"
	waitse
# 2111 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2121 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2122 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2123 "data/scripts/battle_labyrinth.pory"
	waitse
# 2124 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2137 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2138 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2139 "data/scripts/battle_labyrinth.pory"
	waitse
# 2140 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2162 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2163 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2164 "data/scripts/battle_labyrinth.pory"
	waitse
# 2165 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2187 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2189 "data/scripts/battle_labyrinth.pory"
	waitse
# 2190 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2212 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2214 "data/scripts/battle_labyrinth.pory"
	waitse
# 2215 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2238 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2239 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_147, MSGBOX_DEFAULT
# 2240 "data/scripts/battle_labyrinth.pory"
	waitse
# 2241 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_WORKAHOLIC
	goto EventScript_Settings_1

EventScript_Settings_318:
# 1802 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
# 1804 "data/scripts/battle_labyrinth.pory"
	waitse
# 1805 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
# 1806 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_320:
# 1822 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1823 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_DEFAULT
# 1824 "data/scripts/battle_labyrinth.pory"
	waitse
# 1825 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1826 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
# 1827 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_322:
# 1835 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1836 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_DEFAULT
# 1837 "data/scripts/battle_labyrinth.pory"
	waitse
# 1838 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
# 1839 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_324:
# 1853 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1854 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_DEFAULT
# 1855 "data/scripts/battle_labyrinth.pory"
	waitse
# 1856 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_326:
# 1913 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1914 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_DEFAULT
# 1915 "data/scripts/battle_labyrinth.pory"
	waitse
# 1916 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_328:
# 1928 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_DEFAULT
# 1930 "data/scripts/battle_labyrinth.pory"
	waitse
# 1931 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2269 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_0, MSGBOX_DEFAULT
# 2271 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_MusicMenu_Text_4
# 2272 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2273 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2315 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2357 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2399 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2400 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2274 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2275 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2316 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2317 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2358 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2359 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2276 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2277 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2280 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2283 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2286 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2289 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2292 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2296 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2297 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2298 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2300 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2302 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2304 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2306 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2308 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2311 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2318 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2319 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2322 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2325 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2328 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2331 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2334 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2338 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2339 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2340 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2342 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2344 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2346 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2348 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2350 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2353 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2360 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2361 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2364 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2367 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2370 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2373 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2376 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2380 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2381 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2382 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2384 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2386 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2388 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2390 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2392 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2395 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2278 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_5, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2281 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2282 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_6, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2284 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2285 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_7, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2287 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2288 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_8, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2290 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_9, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2294 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_10, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2320 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2321 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_18, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2323 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2324 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_19, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2326 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2327 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_20, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2329 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_21, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2332 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2333 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_22, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2336 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2362 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2363 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_25, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2365 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2366 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2368 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2369 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_27, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2371 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2372 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_28, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2374 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2375 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_29, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2378 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2299 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2301 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2303 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2307 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2310 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2312 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2341 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2343 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2345 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2347 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2349 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2352 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2354 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2383 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2385 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2387 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2389 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2391 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_31
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2396 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2407 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2408 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2409 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2410 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2411 "data/scripts/battle_labyrinth.pory"
	switch VAR_REVISITING_ZONE
# 2412 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WarpZone0_3
# 2416 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WarpZone0_4
# 2420 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WarpZone0_5
# 2424 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WarpZone0_6
# 2428 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WarpZone0_7
# 2432 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WarpZone0_8
# 2436 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WarpZone0_9
# 2440 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_WarpZone0_10
# 2444 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WarpZone0_11
# 2448 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WarpZone0_12
# 2452 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WarpZone0_13
# 2456 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WarpZone0_14
# 2460 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WarpZone0_15
# 2464 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_WarpZone0_16
# 2468 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WarpZone0_17
# 2472 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WarpZone0_18
# 2476 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WarpZone0_19
# 2480 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WarpZone0_20
# 2484 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_WarpZone0_21
# 2488 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WarpZone0_22
# 2492 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WarpZone0_23
# 2496 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WarpZone0_24
# 2500 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WarpZone0_25
# 2504 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WarpZone0_26
# 2508 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_WarpZone0_27
# 2512 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_WarpZone0_28
# 2516 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_WarpZone0_29
# 2520 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_WarpZone0_30
# 2524 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_WarpZone0_31
# 2528 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_WarpZone0_32
# 2532 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_WarpZone0_33
# 2536 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_WarpZone0_34
# 2540 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_WarpZone0_35
# 2544 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_WarpZone0_36
# 2548 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_WarpZone0_37
# 2552 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_WarpZone0_38
# 2556 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_WarpZone0_39
# 2560 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_WarpZone0_40
# 2564 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_WarpZone0_41
# 2568 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_WarpZone0_42
# 2572 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_WarpZone0_43
# 2576 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_WarpZone0_44
# 2580 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_WarpZone0_45
# 2584 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_WarpZone0_46
# 2588 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_WarpZone0_47
# 2592 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_WarpZone0_48
# 2596 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_WarpZone0_49
# 2600 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_WarpZone0_50
# 2604 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_WarpZone0_51
# 2608 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_WarpZone0_52
# 2612 "data/scripts/battle_labyrinth.pory"
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
# 2617 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_WarpZone0_3:
# 2413 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2414 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 32
# 2415 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
# 2417 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2418 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 32
# 2419 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
# 2421 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2422 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 32
# 2423 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
# 2425 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2426 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 32
# 2427 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
# 2429 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2430 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 32
# 2431 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
# 2433 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2434 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 32
# 2435 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
# 2437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2438 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 32
# 2439 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
# 2441 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2442 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 32
# 2443 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
# 2445 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2446 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 32
# 2447 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
# 2449 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2450 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 32
# 2451 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
# 2453 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2454 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 25
# 2455 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
# 2457 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2458 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 25
# 2459 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
# 2461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2462 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 25
# 2463 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
# 2465 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2466 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 25
# 2467 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
# 2469 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2470 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 25
# 2471 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
# 2473 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2474 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 25
# 2475 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
# 2477 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2478 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 25
# 2479 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
# 2481 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2482 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 25
# 2483 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
# 2485 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2486 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 25
# 2487 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
# 2489 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2490 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 25
# 2491 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
# 2493 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2494 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 18
# 2495 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
# 2497 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2498 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 18
# 2499 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
# 2501 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2502 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 18
# 2503 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
# 2505 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2506 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 18
# 2507 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
# 2509 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2510 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 18
# 2511 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
# 2513 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2514 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 18
# 2515 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
# 2517 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2518 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 18
# 2519 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
# 2521 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2522 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 18
# 2523 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
# 2525 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2526 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 18
# 2527 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
# 2529 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2530 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 18
# 2531 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
# 2533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2534 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 11
# 2535 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
# 2537 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2538 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 11
# 2539 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
# 2541 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2542 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 11
# 2543 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
# 2545 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2546 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 11
# 2547 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
# 2549 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2550 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 11
# 2551 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
# 2553 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2554 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 11
# 2555 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
# 2557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2558 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 11
# 2559 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
# 2561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2562 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 11
# 2563 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
# 2565 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2566 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 11
# 2567 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
# 2569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2570 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 11
# 2571 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
# 2573 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2574 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 4
# 2575 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
# 2577 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2578 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 4
# 2579 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
# 2581 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2582 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 4
# 2583 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
# 2585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2586 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 4
# 2587 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
# 2589 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2590 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 4
# 2591 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
# 2593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2594 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 4
# 2595 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
# 2597 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2598 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 4
# 2599 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
# 2601 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2602 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 4
# 2603 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
# 2605 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2606 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 4
# 2607 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
# 2609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2610 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 4
# 2611 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
# 2613 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2614 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 25
# 2615 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
# 2626 "data/scripts/battle_labyrinth.pory"
	lockall
# 2627 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 2628 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
# 2629 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
# 2635 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 2636 "data/scripts/battle_labyrinth.pory"
	removemoney 0
# 2637 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 2638 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_1
# 2639 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2640 "data/scripts/battle_labyrinth.pory"
	case 1, Zone_EventScript_RetirePrompt_6
# 2648 "data/scripts/battle_labyrinth.pory"
	case 2, Zone_EventScript_RetirePrompt_7
# 2657 "data/scripts/battle_labyrinth.pory"
	case 3, Zone_EventScript_RetirePrompt_8
# 2667 "data/scripts/battle_labyrinth.pory"
	case 4, Zone_EventScript_RetirePrompt_9
# 2678 "data/scripts/battle_labyrinth.pory"
	case 5, Zone_EventScript_RetirePrompt_10
# 2690 "data/scripts/battle_labyrinth.pory"
	case 6, Zone_EventScript_RetirePrompt_11
# 2701 "data/scripts/battle_labyrinth.pory"
	case 7, Zone_EventScript_RetirePrompt_12
# 2719 "data/scripts/battle_labyrinth.pory"
	case 9, Zone_EventScript_RetirePrompt_13
# 2725 "data/scripts/battle_labyrinth.pory"
	case 10, Zone_EventScript_RetirePrompt_14
# 2737 "data/scripts/battle_labyrinth.pory"
	case 11, Zone_EventScript_RetirePrompt_15
# 2746 "data/scripts/battle_labyrinth.pory"
	case 12, Zone_EventScript_RetirePrompt_16
# 2759 "data/scripts/battle_labyrinth.pory"
	case 13, Zone_EventScript_RetirePrompt_17
# 2779 "data/scripts/battle_labyrinth.pory"
	case 15, Zone_EventScript_RetirePrompt_18
# 2784 "data/scripts/battle_labyrinth.pory"
	case 16, Zone_EventScript_RetirePrompt_19
# 2795 "data/scripts/battle_labyrinth.pory"
	case 17, Zone_EventScript_RetirePrompt_20
# 2803 "data/scripts/battle_labyrinth.pory"
	case 18, Zone_EventScript_RetirePrompt_21
# 2829 "data/scripts/battle_labyrinth.pory"
	case 20, Zone_EventScript_RetirePrompt_22
# 2841 "data/scripts/battle_labyrinth.pory"
	case 21, Zone_EventScript_RetirePrompt_23
# 2844 "data/scripts/battle_labyrinth.pory"
	case 22, Zone_EventScript_RetirePrompt_24
# 2847 "data/scripts/battle_labyrinth.pory"
	case 23, Zone_EventScript_RetirePrompt_25
# 2850 "data/scripts/battle_labyrinth.pory"
	case 24, Zone_EventScript_RetirePrompt_26
# 2853 "data/scripts/battle_labyrinth.pory"
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
# 2857 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
# 2630 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2631 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2632 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
# 2641 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NINA
# 2642 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARIAM
# 2643 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OSCAR
# 2644 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_1
# 2645 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_1_STATE, 0
# 2646 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 38, 11
# 2647 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
# 2649 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_POLLY
# 2650 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEREMIAH
# 2651 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HARPER
# 2652 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ARTHUR
# 2653 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_2
# 2654 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_2_STATE, 0
# 2655 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 38, 11
# 2656 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
# 2658 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEMMA
# 2659 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PATRICK
# 2660 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BORIS
# 2661 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNABELLE
# 2662 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RICHARD
# 2663 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_3
# 2664 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_3_STATE, 0
# 2665 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 38, 11
# 2666 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
# 2668 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HERMAN
# 2669 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RALPH
# 2670 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SANTIAGO
# 2671 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 2672 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRED
# 2673 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LUCIA
# 2674 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_4
# 2675 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_4_STATE, 0
# 2676 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 38, 11
# 2677 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
# 2679 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 2680 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GILBERT
# 2681 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REBECCA
# 2682 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RYAN
# 2683 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CAITLYN
# 2684 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KENNETH
# 2685 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CLINTON
# 2686 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_5
# 2687 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_5_STATE, 0
# 2688 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 38, 11
# 2689 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
# 2691 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ZACK
# 2692 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELANIE
# 2693 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONSTANCE
# 2694 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRANK
# 2695 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DUDLEY
# 2696 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DAISY
# 2697 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_6
# 2698 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_6_STATE, 0
# 2699 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 38, 11
# 2700 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
# 2702 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MILLIE
# 2703 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PAIGE
# 2704 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SETH
# 2705 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAMAL
# 2706 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONNIE
# 2707 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_7
# 2708 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JIMMY
# 2709 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIANO
# 2710 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KAREN
# 2711 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAYDEN
# 2712 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NEIL
# 2713 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TAMARA
# 2714 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_8
# 2715 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE8D_WALLY
# 2716 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_8_STATE, 0
# 2717 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 38, 11
# 2718 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
# 2720 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_COOPER
# 2721 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CARMINE
# 2722 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 2723 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 38, 11
# 2724 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
# 2726 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KYLE
# 2727 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BELLE
# 2728 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DEWEY
# 2729 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PEARLIE
# 2730 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ERNEST
# 2731 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ALANA
# 2732 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SUSAN
# 2733 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONRAD
# 2734 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_9
# 2735 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 38, 11
# 2736 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
# 2738 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEANETTE
# 2739 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMMA_AND_LEO
# 2740 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REGINA
# 2741 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOEL
# 2742 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_10
# 2743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_11_STATE, 0
# 2744 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 38, 11
# 2745 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
# 2747 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ESSENCE
# 2748 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DOLORES
# 2749 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TREVOR
# 2750 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RANDOLPH
# 2751 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FEDERICO
# 2752 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GENIE
# 2753 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HILDA
# 2754 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KINLEY
# 2755 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 2756 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_12_STATE, 0
# 2757 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 38, 11
# 2758 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
# 2760 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_VIOLET
# 2761 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WANDA
# 2762 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AMBER_AND_KIM
# 2763 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAN_AND_ERIN
# 2764 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_STEVE
# 2765 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GOULD
# 2766 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MENDEL
# 2767 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DARWIN
# 2768 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BART
# 2769 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NIGEL
# 2770 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOLA
# 2771 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHARLIE
# 2772 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TODD
# 2773 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RUSSELL
# 2774 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OTIS
# 2775 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_11
# 2776 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_12
# 2777 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 38, 11
# 2778 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
# 2780 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_13
# 2781 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_15_STATE, 0
# 2782 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 38, 11
# 2783 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
# 2785 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_IONA
# 2786 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BERKE
# 2787 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TANISHA
# 2788 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ROBERT
# 2789 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHRIS
# 2790 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANGUS
# 2791 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_14
# 2792 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_16_STATE, 0
# 2793 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 38, 11
# 2794 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
# 2796 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AXLE
# 2797 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RAFAEL
# 2798 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GEORGINA
# 2799 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 2800 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_17_STATE, 0
# 2801 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 38, 11
# 2802 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
# 2804 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DORIS
# 2805 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HOMER
# 2806 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOHN
# 2807 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GLENN
# 2808 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAY
# 2809 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TYLER
# 2810 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TERRENCE
# 2811 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARTY
# 2812 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KARI
# 2813 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ABRAHAM
# 2814 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELINDA
# 2815 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIO
# 2816 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REX
# 2817 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOUIS
# 2818 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEROY
# 2819 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ELTON
# 2820 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WILLIE
# 2821 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_16
# 2822 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_18_STATE, 0
# 2823 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_19_STATE, 0
# 2824 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 2825 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 2826 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_DOLL
# 2827 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 38, 11
# 2828 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
# 2830 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SHAWN
# 2831 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FERNANDO
# 2832 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KANE
# 2833 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KIRK
# 2834 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DALTON
# 2835 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEE
# 2836 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BLANCHE
# 2837 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_17
# 2838 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_20_STATE, 0
# 2839 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2840 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
# 2842 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2843 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
# 2845 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 38, 11
# 2846 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
# 2848 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 38, 11
# 2849 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
# 2851 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 38, 11
# 2852 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
# 2854 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 38, 11
# 2855 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyGift::
# 2870 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2871 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyGift_Text_0, MSGBOX_YESNO
# 2872 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2873 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2874 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2882 "data/scripts/battle_labyrinth.pory"
	lock
# 2883 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2884 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2887 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2888 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2889 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2960 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2885 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2890 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2891 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2892 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2893 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2894 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2897 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2900 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2904 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2907 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2910 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2914 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2919 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2922 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2926 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2929 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2934 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2937 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2940 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2943 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2946 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2950 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2951 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2952 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2953 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2954 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2955 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2895 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2896 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2898 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 2899 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2901 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 2902 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 2903 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2905 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 2906 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2908 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 2909 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2911 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2912 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 2913 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2915 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 2916 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2917 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 2918 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2920 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 2921 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2923 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2924 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 2925 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2927 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 2928 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2930 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2931 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2932 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 2933 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2935 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 2936 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2938 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 2939 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2941 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 2942 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2944 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 2945 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2947 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2948 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 2949 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2956 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2957 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2964 "data/scripts/battle_labyrinth.pory"

# 2965 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2966 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2967 "data/scripts/battle_labyrinth.pory"
	end

EventScript_MedicineSign_Text_0:
# 44 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 49 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ConsumablesSign_Text_0:
# 54 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's One Time Wonders\nBest for Single Use!$"

EventScript_BerriesSign_Text_0:
# 59 "data/scripts/battle_labyrinth.pory"
	.string "Gordon's Berries\nOnly the Berry best!$"

EventScript_BattleItemsSign_Text_0:
# 64 "data/scripts/battle_labyrinth.pory"
	.string "Alexander's Battle Shop\nA Curated Collection!$"

EventScript_TMsSign_Text_0:
# 69 "data/scripts/battle_labyrinth.pory"
	.string "Julia's TM Shop\nTechnically the Best!$"

EventScript_Shop_Portentia_Text_0:
# 77 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hello, lovely. Care for a brew?\p"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: I am Portentia. I craft the\n"
	.string "finest medicines for your Pokémon.$"

EventScript_Shop_Portentia_Text_1:
# 81 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 84 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome to my shop.\nCan I get you anything?$"

EventScript_Shop_Portentia_Text_3:
# 112 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 120 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there!\nThe name's Tim Johnson.\p{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\nPokémart Incorporated.\lYou can find all variants of Pokéballs\lfor your travels.$"

EventScript_Shop_Tim_Text_1:
# 123 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's.\nCan I get you anything?$"

EventScript_Shop_Tim_Text_2:
# 151 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day.$"

EventScript_Shop_Varrick_Text_0:
# 193 "data/scripts/battle_labyrinth.pory"
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
# 209 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Greetings and salutations!\nWelcome to Silph Unique Item Store!$"

EventScript_Shop_Varrick_Text_2:
# 249 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from Silph!$"

EventScript_Shop_Unique_ZhuLi_Text_0:
# 565 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Welcome to Silph Unique\nItem Store. Care to buy anything?$"

EventScript_Shop_Unique_ZhuLi_Text_1:
# 587 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: We thank you for your\nbusiness, loyal customer.$"

EventScript_Shop_ZhuLiIntro_Text_0:
# 774 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Fantastic! You've arrived!\nZhu Li, do the thing!$"

EventScript_Shop_ZhuLiIntro_Text_1:
# 775 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.$"

EventScript_Shop_ZhuLiIntro_Text_2:
# 778 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Zhu Li is my assistant!\pSilph gave me so many items to sell\nthat I practically begged them for\lsome extra help!\pZhu Li, introduce yourself!$"

EventScript_Shop_ZhuLiIntro_Text_3:
# 779 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Zhu Li{COLOR DARK_GRAY}: Yes, sir.\pPleased to meet you, {PLAYER}. I'm-$"

EventScript_Shop_ZhuLiIntro_Text_4:
# 780 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Alright, we don't have all\nday, Zhu Li! Talk to her if you\lwant to buy consumable items, while\lI'll handle all of the held items!$"

EventScript_Shop_Lelouch_Text_0:
# 807 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Now that's a name…\nI haven't heard in…$"

EventScript_Shop_Lelouch_Text_1:
# 809 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 813 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 818 "data/scripts/battle_labyrinth.pory"
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
# 832 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Lelouch_Text_10:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 862 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 863 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 865 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 894 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1101 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1109 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1113 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1116 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1138 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1139 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1140 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1141 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1142 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1143 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1144 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1145 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1146 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1147 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1286 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1290 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1308 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1316 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1321 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1326 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1332 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1338 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1344 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1350 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1356 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1362 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1368 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1374 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1380 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1386 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1392 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1398 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1404 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1410 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1416 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1422 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1428 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1440 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1446 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1473 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon…\nUgh. Never mind.\p{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the\nPokémon Center, but they gave\lterrible pay.\pSo I've started my own shop,\nJoy's Healing Shop!$"

EventScript_Shop_Joy_Text_1:
# 1475 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Healing Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1477 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1484 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1489 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1495 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1499 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1509 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1539 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1540 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1543 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1557 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1590 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_Settings_Text_0:
# 1689 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1692 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1694 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1697 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1699 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1702 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1704 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1707 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1709 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1712 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1714 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1719 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1721 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1723 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1725 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1728 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1730 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1733 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1735 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1738 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1740 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1743 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1745 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1748 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1750 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1753 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
# 1755 "data/scripts/battle_labyrinth.pory"
	.string "Lazy$"

EventScript_Settings_Text_28:
# 1758 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1760 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1763 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1765 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1770 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1773 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic$"

EventScript_Settings_Text_35:
# 1775 "data/scripts/battle_labyrinth.pory"
	.string "Workaholic$"

EventScript_Settings_Text_36:
# 1783 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_37:
# 1785 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1788 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_39:
# 1798 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_40:
# 1800 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_41:
# 1803 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_42:
# 1818 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_43:
# 1820 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_44:
# 1823 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_45:
# 1831 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_46:
# 1833 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_47:
# 1836 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_48:
# 1847 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_49:
# 1849 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_50:
# 1851 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_51:
# 1854 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_52:
# 1861 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_53:
# 1863 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_54:
# 1866 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_55:
# 1876 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_56:
# 1877 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_57:
# 1906 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_58:
# 1909 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_59:
# 1911 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_60:
# 1914 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_61:
# 1924 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_62:
# 1926 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 1929 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_64:
# 1937 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_65:
# 1939 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_66:
# 1942 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_67:
# 1947 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_68:
# 1950 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_69:
# 1956 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_70:
# 1958 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_71:
# 1961 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_72:
# 1966 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_73:
# 1969 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_74:
# 1977 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_75:
# 1979 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_76:
# 1981 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_77:
# 1984 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_78:
# 1992 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_79:
# 1993 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_80:
# 1996 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_81:
# 2002 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_82:
# 2004 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_83:
# 2006 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_84:
# 2009 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_85:
# 2017 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_86:
# 2018 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_87:
# 2021 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_88:
# 2027 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_89:
# 2029 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_90:
# 2031 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_91:
# 2034 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_92:
# 2042 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_93:
# 2043 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_94:
# 2046 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_95:
# 2052 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_96:
# 2054 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_97:
# 2056 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_98:
# 2059 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_99:
# 2067 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_100:
# 2068 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_101:
# 2071 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_102:
# 2077 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_103:
# 2079 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_104:
# 2081 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_105:
# 2084 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_106:
# 2092 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_107:
# 2093 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_108:
# 2096 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_109:
# 2102 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_110:
# 2104 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_111:
# 2106 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_112:
# 2109 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_113:
# 2117 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_114:
# 2119 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_115:
# 2122 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_116:
# 2131 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_117:
# 2133 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_118:
# 2135 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_119:
# 2138 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_120:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_121:
# 2147 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_122:
# 2150 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_123:
# 2156 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_124:
# 2158 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_125:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_126:
# 2163 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_127:
# 2171 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_128:
# 2172 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_129:
# 2175 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_130:
# 2181 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_131:
# 2183 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_132:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_133:
# 2188 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_134:
# 2196 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_135:
# 2197 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_136:
# 2200 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_137:
# 2206 "data/scripts/battle_labyrinth.pory"
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_138:
# 2208 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_139:
# 2210 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_140:
# 2213 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_141:
# 2221 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_142:
# 2222 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_143:
# 2225 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_144:
# 2232 "data/scripts/battle_labyrinth.pory"
	.string "Retiring from a Zone allows one to\n"
	.string "return to the Sanctuary, at the cost of\l"
	.string "half of their money as well as losing all\l"
	.string "progress made thus far in the Zone.\p"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting prevents\n"
	.string "players from using this option.$"

EventScript_Settings_Text_145:
# 2234 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_146:
# 2236 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_147:
# 2239 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_148:
# 2247 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Workaholic{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_149:
# 2248 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Workaholic{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_150:
# 2251 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Workaholic{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2270 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2271 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2271 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2271 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2271 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_MusicMenu_Text_5:
# 2279 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_6:
# 2282 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_7:
# 2285 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_8:
# 2288 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_9:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_10:
# 2294 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_11:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_12:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_13:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_14:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_15:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_16:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_17:
# 2310 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_18:
# 2321 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_19:
# 2324 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_20:
# 2327 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_21:
# 2330 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_22:
# 2333 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_23:
# 2336 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_24:
# 2352 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_25:
# 2363 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_26:
# 2366 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_27:
# 2369 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_28:
# 2372 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_29:
# 2375 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_30:
# 2378 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_31:
# 2394 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
# 2628 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
# 2638 "data/scripts/battle_labyrinth.pory"
	.string "Warping now…$"

EventScript_NuzlockeVerifyGift_Text_0:
# 2871 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2888 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
# 848 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 852 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1050 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1054 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1058 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1062 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1066 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1070 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1074 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1078 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1082 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1464 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1649 "data/scripts/battle_labyrinth.pory"
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
# 1656 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1662 "data/scripts/battle_labyrinth.pory"
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
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NumDeathsNuzlocke::
# 1675 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} death(s).$"

gText_Colress_CannotChangeSettingBrutal::
# 1679 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1683 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2621 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2861 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2865 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
