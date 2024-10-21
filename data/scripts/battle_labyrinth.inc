EventScript_EnterSanctuary::
# 2 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 3 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE_PC_USED
# 4 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MONEY, 0
# 5 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraUp
# 6 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 7 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 8 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 9 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 10 "data/scripts/battle_labyrinth.pory"
	waitse
# 11 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraDown
# 12 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkDown3
# 13 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 14 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_BADGE
	return


EventScript_MoveCameraUp::
# 19 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 20 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 21 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 22 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
# 27 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 28 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 29 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 30 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_HandleFlashlight::
# 35 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_FLASHLIGHT
# 36 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 39 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 37 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_MedicineSign::
# 45 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 50 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 55 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 60 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_BattleItemsSign::
# 65 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BattleItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_TMsSign::
# 70 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TMsSign_Text_0, MSGBOX_SIGN
	end


EventScript_RecoverySign::
# 75 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_Shop_Portentia::
# 80 "data/scripts/battle_labyrinth.pory"
	lock
# 81 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 82 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 86 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 90 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 91 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 92 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 93 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 94 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 95 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 97 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 98 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 99 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 100 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_12
# 101 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_12
# 102 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_12
# 103 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_12
# 104 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_12
# 105 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_12
# 106 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_12
# 107 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_12
# 108 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_12
# 109 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_12
# 110 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_12
# 111 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_12
# 112 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_12
# 113 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_12
# 114 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_12
# 115 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_12
# 116 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_12
EventScript_Shop_Portentia_9:
# 119 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 120 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 83 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 84 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 87 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 88 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 86 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 96 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 117 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Portentia_9


	.align 2
# 123 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 124 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 125 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 126 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 130 "data/scripts/battle_labyrinth.pory"
	lock
# 131 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 132 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 136 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 137 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 138 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 139 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 140 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 141 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 143 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 144 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 145 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_7
# 146 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_7
# 147 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_7
# 148 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_7
# 149 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_7
# 150 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_7
# 151 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_7
# 152 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_7
# 153 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_7
# 154 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_7
# 155 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_7
# 156 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_7
# 157 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_7
# 158 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_7
# 159 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_7
# 160 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_7
# 161 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_7
# 162 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_7
EventScript_Shop_Tim_4:
# 165 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 166 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 134 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 142 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 163 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_General_26to30
	goto EventScript_Shop_Tim_4


	.align 2
# 169 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 170 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 171 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 174 "data/scripts/battle_labyrinth.pory"
Shop_General_26to30:
# 175 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 176 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 177 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ULTRA_BALL
# 178 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 179 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 180 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 181 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 182 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 184 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 185 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 186 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 187 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FULL_HEAL
# 188 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
# 189 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELIXIR
# 190 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 191 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_REPEL
# 192 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ATTACK
# 193 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_DEFENSE
# 194 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_ATK
# 195 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SP_DEF
# 196 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_SPEED
# 197 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_X_ACCURACY
# 198 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIRE_HIT
# 199 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GUARD_SPEC
# 200 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HP_UP
# 201 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PROTEIN
# 202 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_IRON
# 203 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CALCIUM
# 204 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZINC
# 205 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 209 "data/scripts/battle_labyrinth.pory"
	lock
# 210 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 211 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 219 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 220 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 221 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 222 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 223 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 224 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 226 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 227 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 229 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_8
# 230 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 232 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_9
# 233 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_9
# 235 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_10
# 236 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_10
# 237 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 238 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 240 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 241 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 242 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 243 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 245 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 246 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 247 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 249 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 250 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 252 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 259 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 260 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 212 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 217 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 225 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Consumables_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 228 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 231 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 234 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 239 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 244 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 248 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 251 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 253 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 253 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 256 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 254 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 263 "data/scripts/battle_labyrinth.pory"
Shop_Consumables_1:
# 264 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 267 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 268 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 278 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 287 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 288 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 293 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 330 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 353 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 384 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 422 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 456 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 517 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Gordon::
# 572 "data/scripts/battle_labyrinth.pory"
	lock
# 573 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 574 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_GORDON_INTRO, EventScript_Shop_Gordon_2
EventScript_Shop_Gordon_1:
# 580 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Gordon_Text_1
# 581 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 582 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 583 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Gordon_6
# 584 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Gordon_6
# 585 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Gordon_6
# 587 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Gordon_7
# 588 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Gordon_7
# 589 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Gordon_7
# 590 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Gordon_7
# 591 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Gordon_7
# 592 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Gordon_7
# 593 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Gordon_7
# 594 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Gordon_7
# 595 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Gordon_7
# 596 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Gordon_7
# 597 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Gordon_7
# 598 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Gordon_7
# 599 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Gordon_7
# 600 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Gordon_7
# 601 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Gordon_7
# 602 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Gordon_7
# 603 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Gordon_7
# 604 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Gordon_7
# 605 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Gordon_7
# 606 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Gordon_7
EventScript_Shop_Gordon_4:
# 609 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Gordon_Text_2, MSGBOX_DEFAULT
# 610 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Gordon_2:
# 575 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Gordon_Text_0, MSGBOX_DEFAULT
# 578 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_GORDON_INTRO
	goto EventScript_Shop_Gordon_1

EventScript_Shop_Gordon_6:
# 586 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Gordon_4

EventScript_Shop_Gordon_7:
# 607 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Consumables_1
	goto EventScript_Shop_Gordon_4


	.align 2
# 613 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Alexander::
# 618 "data/scripts/battle_labyrinth.pory"
	lock
# 619 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 620 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_ALEXANDER_INTRO, EventScript_Shop_Alexander_2
EventScript_Shop_Alexander_1:
# 627 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Alexander_Text_1
# 628 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 629 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 630 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Alexander_6
# 631 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Alexander_6
# 632 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Alexander_6
# 634 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Alexander_7
# 635 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Alexander_7
# 636 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Alexander_7
# 637 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Alexander_7
# 638 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Alexander_7
# 639 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Alexander_7
# 640 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Alexander_7
# 641 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Alexander_7
# 642 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Alexander_7
# 643 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Alexander_7
# 644 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Alexander_7
# 645 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Alexander_7
# 646 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Alexander_7
# 647 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Alexander_7
# 648 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Alexander_7
# 649 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Alexander_7
# 650 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Alexander_7
# 651 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Alexander_7
# 652 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Alexander_7
# 653 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Alexander_7
EventScript_Shop_Alexander_4:
# 656 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Alexander_Text_2, MSGBOX_DEFAULT
# 657 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Alexander_2:
# 621 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Alexander_Text_0, MSGBOX_DEFAULT
# 625 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ALEXANDER_INTRO
	goto EventScript_Shop_Alexander_1

EventScript_Shop_Alexander_6:
# 633 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Battle_1
	goto EventScript_Shop_Alexander_4

EventScript_Shop_Alexander_7:
# 654 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Consumables_1
	goto EventScript_Shop_Alexander_4


	.align 2
# 660 "data/scripts/battle_labyrinth.pory"
Shop_Battle_1:
# 661 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 665 "data/scripts/battle_labyrinth.pory"
	lock
# 666 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 667 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 674 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 675 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 676 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 677 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 678 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 679 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 681 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 682 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 683 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 684 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 685 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_7
# 686 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_7
# 687 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_7
# 688 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_7
# 689 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_7
# 690 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_7
# 691 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_7
# 692 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_7
# 693 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_7
# 694 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_7
# 695 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_7
# 696 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_7
# 697 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_7
# 698 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_7
# 699 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_7
# 700 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_7
EventScript_Shop_Julia_4:
# 703 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 704 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 668 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 672 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 680 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_TMs_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 701 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Consumables_1
	goto EventScript_Shop_Julia_4


	.align 2
# 707 "data/scripts/battle_labyrinth.pory"
Shop_TMs_1:
# 708 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

EventScript_Shop_Joy::
# 712 "data/scripts/battle_labyrinth.pory"
	lock
# 713 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 714 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 718 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 719 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 720 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 721 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 725 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 726 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 730 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 731 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 732 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 733 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 734 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 735 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 736 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 737 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 738 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 739 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 742 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 743 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 715 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 716 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 722 "data/scripts/battle_labyrinth.pory"
	closemessage
# 723 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 727 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 728 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_Shop_Lelouch::
# 748 "data/scripts/battle_labyrinth.pory"
	lock
# 749 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 750 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 756 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 761 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 776 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 777 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Lelouch_Text_9
# 778 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 779 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 781 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 783 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 785 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 788 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_10
# 789 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 751 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 752 "data/scripts/battle_labyrinth.pory"
	delay 16
# 753 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 754 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 757 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 758 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 762 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 774 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 780 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 782 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 784 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 786 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 801 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 802 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 806 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 807 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 808 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 811 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 2
# 812 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 813 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 814 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 828 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 987 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 988 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 803 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 809 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 808 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 808 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 815 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 816 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 829 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 830 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 817 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 818 "data/scripts/battle_labyrinth.pory"
	waitstate
# 819 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 824 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 831 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 832 "data/scripts/battle_labyrinth.pory"
	waitstate
# 833 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 836 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 837 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 841 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 842 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 843 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 844 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 845 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 846 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 849 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 852 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 855 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 858 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 860 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 861 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 864 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 865 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 866 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 867 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 870 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 873 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 876 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 879 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 881 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 882 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 885 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 886 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 887 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 888 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 891 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 894 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 897 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 900 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 902 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 903 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 906 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 907 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 908 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 909 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 912 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 915 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 918 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 921 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 923 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 924 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 927 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 928 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 929 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 930 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 933 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 936 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 939 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 942 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 944 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 945 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 948 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 949 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 950 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 951 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 954 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 957 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 960 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 963 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 965 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 966 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 969 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 973 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 974 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 977 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 978 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 979 "data/scripts/battle_labyrinth.pory"
	waitse
# 980 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 981 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 982 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 820 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 821 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 822 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 834 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 847 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 848 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 850 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 851 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 853 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 854 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 856 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 857 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 859 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 868 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 869 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 871 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 872 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 874 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 875 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 877 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 878 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 880 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 889 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 890 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 892 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 893 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 895 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 896 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 898 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 899 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 901 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 910 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 911 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 913 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 914 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 916 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 917 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 919 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 920 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 922 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 931 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 932 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 934 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 935 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 937 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 938 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 940 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 941 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 943 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 952 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 953 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 955 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 956 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 958 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 959 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 961 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 962 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 964 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 970 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1035 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1036 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
# 1040 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
# 1041 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
# 1045 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
# 1046 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1047 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1048 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1051 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1052 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1056 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1060 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
# 1061 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1062 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1063 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
# 1066 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1067 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
# 1037 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
# 1053 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
# 1057 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
# 1074 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1075 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
# 1080 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
# 1081 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
EventScript_Shop_Lelouch_MoveTutor_6:
# 1117 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 50
# 1118 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1119 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1120 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_11
# 1123 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_12
# 1126 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_13
# 1129 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_14
# 1132 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_15
# 1135 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_16
# 1138 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_17
# 1141 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_18
# 1144 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_19
# 1147 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_20
# 1225 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_21
# 1226 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_21
EventScript_Shop_Lelouch_MoveTutor_9:
# 1229 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_10, MSGBOX_YESNO
# 1231 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1234 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_DEFAULT
# 1235 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1236 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_26
# 1239 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
# 1240 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
# 1076 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
# 1082 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_0, 1
# 1083 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 2
# 1084 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 3
# 1085 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 4
# 1086 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 5
# 1087 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 6
# 1088 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 7
# 1089 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 8
# 1090 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 9
# 1091 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 10
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1121 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1122 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_12:
# 1124 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1125 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_13:
# 1127 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1128 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_14:
# 1130 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1131 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_15:
# 1133 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1134 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_16:
# 1136 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1137 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_17:
# 1139 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1140 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_18:
# 1142 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1143 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_19:
# 1145 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1146 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_20:
# 1148 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1149 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_21:
	return

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_26:
	goto EventScript_Shop_Lelouch_MoveTutor_4


EventScript_Shop_Lelouch_Other::
# 1247 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1248 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1252 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1253 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1254 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1255 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1258 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1259 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1262 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1263 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1264 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1265 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1266 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1267 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1268 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1274 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1280 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1286 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1292 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1298 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1304 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1310 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1316 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1322 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1328 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1334 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1340 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1346 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1352 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1358 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1364 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1370 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1376 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1382 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1388 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1394 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1397 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1398 "data/scripts/battle_labyrinth.pory"
	waitse
# 1399 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1400 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1401 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1402 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1249 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1260 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1269 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1271 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1275 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1276 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1277 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1281 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1282 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1283 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1287 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1288 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1289 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1293 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1294 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1295 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1299 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1300 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1301 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1306 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1307 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1311 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1312 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1313 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1317 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1318 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1319 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1323 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1324 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1325 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1329 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1331 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1335 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1336 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1337 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1341 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1342 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1343 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1347 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1348 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1349 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1353 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1354 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1355 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1359 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1360 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1361 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1366 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1367 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1371 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1372 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1373 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1377 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1378 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1379 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1383 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1384 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1385 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1389 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1390 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1391 "data/scripts/battle_labyrinth.pory"
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


EventScript_MandatoryCheck::
# 1413 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1413 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1414 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1415 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1416 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1417 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1418 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1419 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1422 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1424 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1420 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1432 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1434 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1435 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1438 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1440 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1436 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1444 "data/scripts/battle_labyrinth.pory"
	lock
# 1445 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1446 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1451 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1452 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1453 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1454 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1456 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1458 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1460 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1462 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1465 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1466 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1447 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1448 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1449 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1455 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1457 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1459 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1461 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1463 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1469 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1473 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1478 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
# 1484 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1490 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1497 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1498 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1499 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1500 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1507 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1514 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1521 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1522 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	return

EventScript_LeavingSetup_2:
# 1501 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1502 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1503 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1504 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1505 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1508 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1509 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1510 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1511 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1512 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1515 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1516 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1517 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1518 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1519 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
# 1527 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1530 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1533 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1536 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1540 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1541 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1542 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1528 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1529 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1531 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1532 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1534 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1535 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1537 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1538 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1547 "data/scripts/battle_labyrinth.pory"
	lockall
# 1548 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1549 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1550 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1551 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1556 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1557 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1558 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1560 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1552 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1553 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1554 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 1564 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0
# 1565 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1608 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1609 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1610 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1612 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1615 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1617 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1620 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1622 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1625 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1627 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1630 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1633 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1635 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1638 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1640 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1641 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1641 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1644 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1646 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1646 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1649 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1651 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1651 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1654 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1656 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1656 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1659 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1661 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1661 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1664 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1666 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1666 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1669 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1671 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1671 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
# 1674 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1676 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1676 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1679 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1681 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1681 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1684 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1686 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1686 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1689 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1691 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 17
# 1692 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1693 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1694 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 1725 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 1757 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 1786 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 1850 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 1869 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 1888 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 1890 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 1915 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 1940 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 1965 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 1990 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2015 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2044 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2069 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2094 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2119 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2145 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2146 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1611 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1613 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1616 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1618 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1621 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1623 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1626 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1628 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1631 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1636 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1642 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1647 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1652 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1657 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1662 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1667 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1672 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1677 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1682 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1687 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1695 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1696 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 1709 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 1712 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1713 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_261
	goto EventScript_Settings_1

EventScript_Settings_93:
# 1726 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1727 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 1731 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 1745 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1746 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_265
	goto EventScript_Settings_1

EventScript_Settings_94:
# 1758 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1759 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 1775 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1776 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_192
	goto EventScript_Settings_1

EventScript_Settings_95:
# 1787 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1788 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 1835 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_197
# 1838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 1839 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_275
	goto EventScript_Settings_1

EventScript_Settings_96:
# 1851 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_DEFAULT
# 1852 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_122
# 1861 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_YESNO
# 1862 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_202
	goto EventScript_Settings_1

EventScript_Settings_97:
# 1870 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_DEFAULT
# 1871 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 1880 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 1881 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_206
	goto EventScript_Settings_1

EventScript_Settings_98:
# 1889 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 1891 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 1892 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 1892 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 1906 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 1907 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_YESNO
# 1908 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_100:
# 1916 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_DEFAULT
# 1917 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 1917 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 1931 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 1932 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_YESNO
# 1933 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_101:
# 1941 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_DEFAULT
# 1942 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 1942 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 1956 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 1957 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_YESNO
# 1958 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_102:
# 1966 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_DEFAULT
# 1967 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 1967 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 1981 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 1982 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_YESNO
# 1983 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_103:
# 1991 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_DEFAULT
# 1992 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 1992 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2007 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_YESNO
# 2008 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2016 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_DEFAULT
# 2017 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2017 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2031 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2032 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_236
# 2041 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2045 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_DEFAULT
# 2046 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_158
# 2046 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2060 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2061 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_YESNO
# 2062 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_242
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2070 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_DEFAULT
# 2071 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2071 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2085 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2086 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_YESNO
# 2087 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2095 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_DEFAULT
# 2096 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2096 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2110 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2111 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_YESNO
# 2112 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2120 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_DEFAULT
# 2121 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2121 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2135 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2136 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_YESNO
# 2137 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2147 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2150 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 1697 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 1698 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 1728 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUZLOCKE_DEATHS
# 1729 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NumDeathsNuzlocke, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 1760 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_189
# 1763 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 1764 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_267
	goto EventScript_Settings_1

EventScript_Settings_119:
# 1789 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 1823 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_YESNO
# 1824 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_273
	goto EventScript_Settings_1

EventScript_Settings_122:
# 1853 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 1854 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_200
	goto EventScript_Settings_1

EventScript_Settings_125:
# 1872 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_YESNO
# 1873 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_204
	goto EventScript_Settings_1

EventScript_Settings_128:
# 1893 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_DEFAULT
# 1894 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_208
# 1903 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 1918 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 1919 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 1928 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 1943 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 1944 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 1953 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 1968 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 1969 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 1978 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 1993 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 1994 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2003 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2019 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2028 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2047 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2048 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_239
# 2057 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2072 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2073 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2082 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2097 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2098 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2107 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2122 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2123 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2132 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 1699 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 1700 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_259
	goto EventScript_Settings_1

EventScript_Settings_183:
# 1710 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 1732 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_YESNO
# 1733 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_263
	goto EventScript_Settings_1

EventScript_Settings_189:
# 1761 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_192:
# 1777 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 1778 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_269
	goto EventScript_Settings_1

EventScript_Settings_194:
# 1790 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_DEFAULT
# 1791 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 1792 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_271
	goto EventScript_Settings_1

EventScript_Settings_197:
# 1836 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_200:
# 1855 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1856 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 1857 "data/scripts/battle_labyrinth.pory"
	waitse
# 1858 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_202:
# 1863 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1864 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 1865 "data/scripts/battle_labyrinth.pory"
	waitse
# 1866 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_204:
# 1874 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1875 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 1876 "data/scripts/battle_labyrinth.pory"
	waitse
# 1877 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_206:
# 1882 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1883 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 1884 "data/scripts/battle_labyrinth.pory"
	waitse
# 1885 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_208:
# 1895 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_YESNO
# 1896 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_277
	goto EventScript_Settings_1

EventScript_Settings_211:
# 1909 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1910 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 1911 "data/scripts/battle_labyrinth.pory"
	waitse
# 1912 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_213:
# 1920 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_YESNO
# 1921 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_279
	goto EventScript_Settings_1

EventScript_Settings_216:
# 1934 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1935 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 1936 "data/scripts/battle_labyrinth.pory"
	waitse
# 1937 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_218:
# 1945 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_YESNO
# 1946 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_281
	goto EventScript_Settings_1

EventScript_Settings_221:
# 1959 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1960 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 1961 "data/scripts/battle_labyrinth.pory"
	waitse
# 1962 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_223:
# 1970 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_YESNO
# 1971 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_283
	goto EventScript_Settings_1

EventScript_Settings_226:
# 1984 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1985 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 1986 "data/scripts/battle_labyrinth.pory"
	waitse
# 1987 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_228:
# 1995 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_YESNO
# 1996 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_285
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2009 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2010 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2011 "data/scripts/battle_labyrinth.pory"
	waitse
# 2012 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_YESNO
# 2021 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_287
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2033 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_YESNO
# 2034 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_289
	goto EventScript_Settings_1

EventScript_Settings_239:
# 2049 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_YESNO
# 2050 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_291
	goto EventScript_Settings_1

EventScript_Settings_242:
# 2063 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2064 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2065 "data/scripts/battle_labyrinth.pory"
	waitse
# 2066 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2074 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_YESNO
# 2075 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_293
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2088 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2089 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2090 "data/scripts/battle_labyrinth.pory"
	waitse
# 2091 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2099 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_YESNO
# 2100 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_295
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2113 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2114 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2115 "data/scripts/battle_labyrinth.pory"
	waitse
# 2116 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2124 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_YESNO
# 2125 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_297
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2138 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2139 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2140 "data/scripts/battle_labyrinth.pory"
	waitse
# 2141 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_259:
# 1701 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1702 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 1703 "data/scripts/battle_labyrinth.pory"
	waitse
# 1704 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
# 1705 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_261:
# 1714 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 1715 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_299
	goto EventScript_Settings_1

EventScript_Settings_263:
# 1734 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_YESNO
# 1735 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_301
	goto EventScript_Settings_1

EventScript_Settings_265:
# 1747 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 1748 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_303
	goto EventScript_Settings_1

EventScript_Settings_267:
# 1765 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_YESNO
# 1766 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_305
	goto EventScript_Settings_1

EventScript_Settings_269:
# 1779 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1780 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 1781 "data/scripts/battle_labyrinth.pory"
	waitse
# 1782 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_271:
# 1793 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1794 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1795 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1796 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1797 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1798 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1799 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1800 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1801 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1802 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1803 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1804 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1805 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1806 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1807 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1808 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1809 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1810 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1811 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1812 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1813 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1814 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1815 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1816 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1817 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1818 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1819 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_273:
# 1825 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 1826 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_307
	goto EventScript_Settings_1

EventScript_Settings_275:
# 1840 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 1841 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_309
	goto EventScript_Settings_1

EventScript_Settings_277:
# 1897 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1898 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 1899 "data/scripts/battle_labyrinth.pory"
	waitse
# 1900 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_279:
# 1922 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1923 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 1924 "data/scripts/battle_labyrinth.pory"
	waitse
# 1925 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_281:
# 1947 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 1949 "data/scripts/battle_labyrinth.pory"
	waitse
# 1950 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_283:
# 1972 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1973 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 1974 "data/scripts/battle_labyrinth.pory"
	waitse
# 1975 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_285:
# 1997 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1998 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 1999 "data/scripts/battle_labyrinth.pory"
	waitse
# 2000 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_287:
# 2022 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2023 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 2024 "data/scripts/battle_labyrinth.pory"
	waitse
# 2025 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_289:
# 2035 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2036 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2037 "data/scripts/battle_labyrinth.pory"
	waitse
# 2038 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_291:
# 2051 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2052 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 2053 "data/scripts/battle_labyrinth.pory"
	waitse
# 2054 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_293:
# 2076 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2077 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2078 "data/scripts/battle_labyrinth.pory"
	waitse
# 2079 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_295:
# 2101 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2102 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2103 "data/scripts/battle_labyrinth.pory"
	waitse
# 2104 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_297:
# 2126 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2127 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2128 "data/scripts/battle_labyrinth.pory"
	waitse
# 2129 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_299:
# 1716 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1717 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 1718 "data/scripts/battle_labyrinth.pory"
	waitse
# 1719 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
# 1720 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_301:
# 1736 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1737 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
# 1738 "data/scripts/battle_labyrinth.pory"
	waitse
# 1739 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1740 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
# 1741 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_303:
# 1749 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1750 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 1751 "data/scripts/battle_labyrinth.pory"
	waitse
# 1752 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
# 1753 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_305:
# 1767 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1768 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
# 1769 "data/scripts/battle_labyrinth.pory"
	waitse
# 1770 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_307:
# 1827 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1828 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
# 1829 "data/scripts/battle_labyrinth.pory"
	waitse
# 1830 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_309:
# 1842 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1843 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 1844 "data/scripts/battle_labyrinth.pory"
	waitse
# 1845 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2158 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2159 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_0, MSGBOX_DEFAULT
# 2160 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_MusicMenu_Text_4
# 2161 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2162 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2204 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2246 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2288 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2289 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2163 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2164 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2205 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2206 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2247 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2248 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2165 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2166 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2169 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2172 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2175 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2178 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2181 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2185 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2186 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2187 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2189 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2191 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2193 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2195 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2197 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2200 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2207 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2208 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2211 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2214 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2217 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2220 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2223 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2227 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2228 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2229 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2231 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2233 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2235 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2237 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2239 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2242 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2249 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2250 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2253 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2256 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2259 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2262 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2265 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2269 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2270 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2271 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2273 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2275 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2277 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2279 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2281 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2284 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2167 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2168 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_5, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2170 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2171 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_6, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2173 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2174 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_7, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2176 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2177 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_8, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2179 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2180 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_9, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_10, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2209 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2210 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_18, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2212 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_19, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2215 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_20, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2218 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2219 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_21, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2221 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2222 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_22, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2251 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2252 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_25, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2254 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2255 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2257 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2258 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_27, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2260 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2261 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_28, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2263 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2264 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_29, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2267 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2188 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2190 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2192 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2194 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2196 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2199 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2201 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2230 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2234 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2236 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2238 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2243 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2272 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2274 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2276 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2278 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2280 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2283 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_31
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2285 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2296 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2297 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2298 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2299 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2300 "data/scripts/battle_labyrinth.pory"
	switch VAR_REVISITING_ZONE
# 2301 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WarpZone0_3
# 2305 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WarpZone0_4
# 2309 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WarpZone0_5
# 2313 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WarpZone0_6
# 2317 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WarpZone0_7
# 2321 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WarpZone0_8
# 2325 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WarpZone0_9
# 2329 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_WarpZone0_10
# 2333 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WarpZone0_11
# 2337 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WarpZone0_12
# 2341 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WarpZone0_13
# 2345 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WarpZone0_14
# 2349 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WarpZone0_15
# 2353 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_WarpZone0_16
# 2357 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WarpZone0_17
# 2361 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WarpZone0_18
# 2365 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WarpZone0_19
# 2369 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WarpZone0_20
# 2373 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_WarpZone0_21
# 2377 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WarpZone0_22
# 2381 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WarpZone0_23
# 2385 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WarpZone0_24
# 2389 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WarpZone0_25
# 2393 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WarpZone0_26
# 2397 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_WarpZone0_27
# 2401 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_WarpZone0_28
# 2405 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_WarpZone0_29
# 2409 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_WarpZone0_30
# 2413 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_WarpZone0_31
# 2417 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_WarpZone0_32
# 2421 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_WarpZone0_33
# 2425 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_WarpZone0_34
# 2429 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_WarpZone0_35
# 2433 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_WarpZone0_36
# 2437 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_WarpZone0_37
# 2441 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_WarpZone0_38
# 2445 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_WarpZone0_39
# 2449 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_WarpZone0_40
# 2453 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_WarpZone0_41
# 2457 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_WarpZone0_42
# 2461 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_WarpZone0_43
# 2465 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_WarpZone0_44
# 2469 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_WarpZone0_45
# 2473 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_WarpZone0_46
# 2477 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_WarpZone0_47
# 2481 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_WarpZone0_48
# 2485 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_WarpZone0_49
# 2489 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_WarpZone0_50
# 2493 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_WarpZone0_51
# 2497 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_WarpZone0_52
# 2501 "data/scripts/battle_labyrinth.pory"
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
# 2506 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_WarpZone0_3:
# 2302 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2303 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 32
# 2304 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
# 2306 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2307 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 32
# 2308 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
# 2310 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2311 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 32
# 2312 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
# 2314 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2315 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 32
# 2316 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
# 2318 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2319 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 32
# 2320 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
# 2322 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2323 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 32
# 2324 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
# 2326 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2327 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 32
# 2328 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
# 2330 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2331 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 32
# 2332 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
# 2334 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2335 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 32
# 2336 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
# 2338 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2339 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 32
# 2340 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
# 2342 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2343 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 25
# 2344 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
# 2346 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2347 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 25
# 2348 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
# 2350 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2351 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 25
# 2352 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
# 2354 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2355 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 25
# 2356 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
# 2358 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2359 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 25
# 2360 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
# 2362 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2363 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 25
# 2364 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
# 2366 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2367 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 25
# 2368 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
# 2370 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2371 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 25
# 2372 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
# 2374 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2375 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 25
# 2376 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
# 2378 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2379 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 25
# 2380 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
# 2382 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2383 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 18
# 2384 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
# 2386 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2387 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 18
# 2388 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
# 2390 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2391 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 18
# 2392 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
# 2394 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2395 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 18
# 2396 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
# 2398 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2399 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 18
# 2400 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
# 2402 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2403 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 18
# 2404 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
# 2406 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2407 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 18
# 2408 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
# 2410 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2411 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 18
# 2412 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
# 2414 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2415 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 18
# 2416 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
# 2418 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2419 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 18
# 2420 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
# 2422 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2423 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 11
# 2424 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
# 2426 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2427 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 11
# 2428 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
# 2430 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2431 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 11
# 2432 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
# 2434 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2435 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 11
# 2436 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
# 2438 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2439 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 11
# 2440 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
# 2442 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2443 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 11
# 2444 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
# 2446 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2447 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 11
# 2448 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
# 2450 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2451 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 11
# 2452 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
# 2454 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2455 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 11
# 2456 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
# 2458 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2459 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 11
# 2460 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
# 2462 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2463 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 4
# 2464 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
# 2466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2467 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 4
# 2468 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
# 2470 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2471 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 4
# 2472 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
# 2474 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2475 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 4
# 2476 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
# 2478 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2479 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 4
# 2480 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
# 2482 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2483 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 4
# 2484 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
# 2486 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2487 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 4
# 2488 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
# 2490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2491 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 4
# 2492 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
# 2494 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2495 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 4
# 2496 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
# 2498 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2499 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 4
# 2500 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
# 2502 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2503 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 25
# 2504 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
# 2515 "data/scripts/battle_labyrinth.pory"
	lockall
# 2516 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 2517 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
# 2518 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
# 2524 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 2525 "data/scripts/battle_labyrinth.pory"
	removemoney 0
# 2526 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 2527 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_1
# 2528 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2529 "data/scripts/battle_labyrinth.pory"
	case 1, Zone_EventScript_RetirePrompt_6
# 2537 "data/scripts/battle_labyrinth.pory"
	case 2, Zone_EventScript_RetirePrompt_7
# 2546 "data/scripts/battle_labyrinth.pory"
	case 3, Zone_EventScript_RetirePrompt_8
# 2556 "data/scripts/battle_labyrinth.pory"
	case 4, Zone_EventScript_RetirePrompt_9
# 2567 "data/scripts/battle_labyrinth.pory"
	case 5, Zone_EventScript_RetirePrompt_10
# 2579 "data/scripts/battle_labyrinth.pory"
	case 6, Zone_EventScript_RetirePrompt_11
# 2590 "data/scripts/battle_labyrinth.pory"
	case 7, Zone_EventScript_RetirePrompt_12
# 2608 "data/scripts/battle_labyrinth.pory"
	case 9, Zone_EventScript_RetirePrompt_13
# 2614 "data/scripts/battle_labyrinth.pory"
	case 10, Zone_EventScript_RetirePrompt_14
# 2626 "data/scripts/battle_labyrinth.pory"
	case 11, Zone_EventScript_RetirePrompt_15
# 2635 "data/scripts/battle_labyrinth.pory"
	case 12, Zone_EventScript_RetirePrompt_16
# 2648 "data/scripts/battle_labyrinth.pory"
	case 13, Zone_EventScript_RetirePrompt_17
# 2668 "data/scripts/battle_labyrinth.pory"
	case 15, Zone_EventScript_RetirePrompt_18
# 2673 "data/scripts/battle_labyrinth.pory"
	case 16, Zone_EventScript_RetirePrompt_19
# 2684 "data/scripts/battle_labyrinth.pory"
	case 17, Zone_EventScript_RetirePrompt_20
# 2692 "data/scripts/battle_labyrinth.pory"
	case 18, Zone_EventScript_RetirePrompt_21
# 2718 "data/scripts/battle_labyrinth.pory"
	case 20, Zone_EventScript_RetirePrompt_22
# 2730 "data/scripts/battle_labyrinth.pory"
	case 21, Zone_EventScript_RetirePrompt_23
# 2733 "data/scripts/battle_labyrinth.pory"
	case 22, Zone_EventScript_RetirePrompt_24
# 2736 "data/scripts/battle_labyrinth.pory"
	case 23, Zone_EventScript_RetirePrompt_25
# 2739 "data/scripts/battle_labyrinth.pory"
	case 24, Zone_EventScript_RetirePrompt_26
# 2742 "data/scripts/battle_labyrinth.pory"
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
# 2746 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
# 2519 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2520 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2521 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
# 2530 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NINA
# 2531 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARIAM
# 2532 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OSCAR
# 2533 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_1
# 2534 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_1_STATE, 0
# 2535 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 38, 11
# 2536 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
# 2538 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_POLLY
# 2539 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEREMIAH
# 2540 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HARPER
# 2541 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ARTHUR
# 2542 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_2
# 2543 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_2_STATE, 0
# 2544 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 38, 11
# 2545 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
# 2547 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEMMA
# 2548 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PATRICK
# 2549 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BORIS
# 2550 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNABELLE
# 2551 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RICHARD
# 2552 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_3
# 2553 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_3_STATE, 0
# 2554 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 38, 11
# 2555 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
# 2557 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HERMAN
# 2558 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RALPH
# 2559 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SANTIAGO
# 2560 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 2561 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRED
# 2562 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LUCIA
# 2563 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_4
# 2564 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_4_STATE, 0
# 2565 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 38, 11
# 2566 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
# 2568 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 2569 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GILBERT
# 2570 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REBECCA
# 2571 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RYAN
# 2572 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CAITLYN
# 2573 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KENNETH
# 2574 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CLINTON
# 2575 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_5
# 2576 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_5_STATE, 0
# 2577 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 38, 11
# 2578 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
# 2580 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ZACK
# 2581 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELANIE
# 2582 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONSTANCE
# 2583 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRANK
# 2584 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DUDLEY
# 2585 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DAISY
# 2586 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_6
# 2587 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_6_STATE, 0
# 2588 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 38, 11
# 2589 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
# 2591 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MILLIE
# 2592 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PAIGE
# 2593 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SETH
# 2594 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAMAL
# 2595 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONNIE
# 2596 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_7
# 2597 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JIMMY
# 2598 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIANO
# 2599 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KAREN
# 2600 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAYDEN
# 2601 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NEIL
# 2602 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TAMARA
# 2603 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_8
# 2604 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE8D_WALLY
# 2605 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_8_STATE, 0
# 2606 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 38, 11
# 2607 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
# 2609 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_COOPER
# 2610 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CARMINE
# 2611 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 2612 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 38, 11
# 2613 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
# 2615 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KYLE
# 2616 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BELLE
# 2617 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DEWEY
# 2618 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PEARLIE
# 2619 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ERNEST
# 2620 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ALANA
# 2621 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SUSAN
# 2622 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONRAD
# 2623 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_9
# 2624 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 38, 11
# 2625 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
# 2627 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEANETTE
# 2628 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMMA_AND_LEO
# 2629 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REGINA
# 2630 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOEL
# 2631 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_10
# 2632 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_11_STATE, 0
# 2633 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 38, 11
# 2634 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
# 2636 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ESSENCE
# 2637 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DOLORES
# 2638 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TREVOR
# 2639 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RANDOLPH
# 2640 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FEDERICO
# 2641 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GENIE
# 2642 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HILDA
# 2643 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KINLEY
# 2644 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 2645 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_12_STATE, 0
# 2646 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 38, 11
# 2647 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
# 2649 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_VIOLET
# 2650 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WANDA
# 2651 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AMBER_AND_KIM
# 2652 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAN_AND_ERIN
# 2653 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_STEVE
# 2654 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GOULD
# 2655 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MENDEL
# 2656 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DARWIN
# 2657 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BART
# 2658 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NIGEL
# 2659 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOLA
# 2660 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHARLIE
# 2661 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TODD
# 2662 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RUSSELL
# 2663 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OTIS
# 2664 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_11
# 2665 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_12
# 2666 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 38, 11
# 2667 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
# 2669 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_13
# 2670 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_15_STATE, 0
# 2671 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 38, 11
# 2672 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
# 2674 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_IONA
# 2675 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BERKE
# 2676 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TANISHA
# 2677 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ROBERT
# 2678 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHRIS
# 2679 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANGUS
# 2680 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_14
# 2681 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_16_STATE, 0
# 2682 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 38, 11
# 2683 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
# 2685 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AXLE
# 2686 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RAFAEL
# 2687 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GEORGINA
# 2688 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 2689 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_17_STATE, 0
# 2690 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 38, 11
# 2691 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
# 2693 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DORIS
# 2694 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HOMER
# 2695 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOHN
# 2696 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GLENN
# 2697 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAY
# 2698 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TYLER
# 2699 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TERRENCE
# 2700 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARTY
# 2701 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KARI
# 2702 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ABRAHAM
# 2703 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELINDA
# 2704 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIO
# 2705 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REX
# 2706 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOUIS
# 2707 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEROY
# 2708 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ELTON
# 2709 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WILLIE
# 2710 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_16
# 2711 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_18_STATE, 0
# 2712 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_19_STATE, 0
# 2713 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 2714 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 2715 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_DOLL
# 2716 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 38, 11
# 2717 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
# 2719 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SHAWN
# 2720 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FERNANDO
# 2721 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KANE
# 2722 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KIRK
# 2723 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DALTON
# 2724 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEE
# 2725 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BLANCHE
# 2726 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_17
# 2727 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_20_STATE, 0
# 2728 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2729 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
# 2731 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2732 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
# 2734 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 38, 11
# 2735 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
# 2737 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 38, 11
# 2738 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
# 2740 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 38, 11
# 2741 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
# 2743 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 38, 11
# 2744 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyGift::
# 2759 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2760 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyGift_Text_0, MSGBOX_YESNO
# 2761 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2762 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2763 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2771 "data/scripts/battle_labyrinth.pory"
	lock
# 2772 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2773 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2776 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2777 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2778 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2849 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2774 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2779 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2780 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2781 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2782 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2783 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2786 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2789 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2793 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2796 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2799 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2803 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2808 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2811 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2815 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2818 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2823 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2826 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2829 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2832 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2835 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2839 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2840 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2841 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2842 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2843 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2844 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2784 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2785 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2787 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 2788 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2790 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 2791 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 2792 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2794 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 2795 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2797 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 2798 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2800 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2801 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 2802 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2804 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 2805 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2806 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 2807 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2809 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 2810 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2812 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2813 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 2814 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2816 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 2817 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2819 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2820 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2821 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 2822 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2824 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 2825 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2827 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 2828 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2830 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 2831 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2833 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 2834 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2836 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2837 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 2838 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2845 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2846 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2853 "data/scripts/battle_labyrinth.pory"

# 2854 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2855 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2856 "data/scripts/battle_labyrinth.pory"
	end

EventScript_MedicineSign_Text_0:
# 45 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 50 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ConsumablesSign_Text_0:
# 55 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's One Time Wonders\nBest for Single Use!$"

EventScript_BerriesSign_Text_0:
# 60 "data/scripts/battle_labyrinth.pory"
	.string "Gordon's Berries\nOnly the Berry best!$"

EventScript_BattleItemsSign_Text_0:
# 65 "data/scripts/battle_labyrinth.pory"
	.string "Alexander's Battle Shop\nA Curated Collection!$"

EventScript_TMsSign_Text_0:
# 70 "data/scripts/battle_labyrinth.pory"
	.string "Julia's TM Shop\nTechnically the greatest!$"

EventScript_RecoverySign_Text_0:
# 75 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Recovery Shop\nWe pay our workers a living wage!$"

EventScript_Shop_Portentia_Text_0:
# 83 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hello, lovely. Your name is…\n"
	.string "{PLAYER}?\p"
	.string "I see! Well then, {PLAYER}, would you\n"
	.string "care to try some of my special brews?\p"
	.string "Ahem! I realize I should introduce\n"
	.string "myself.\p"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: I am Portentia, and I craft\n"
	.string "the finest medicines for your Pokémon.\p"
	.string "My skills are unparalleled and my prices\n"
	.string "can't be beat.$"

EventScript_Shop_Portentia_Text_1:
# 87 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 90 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 119 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 136 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 165 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 212 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick, entrepreneur\n"
	.string "extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: I pitched this idea a couple\n"
	.string "years back, and now it's become a\l"
	.string "reality!\p"
	.string "All the single-use, consumable items in\n"
	.string "the world, now purchasable at a great\l"
	.string "bargain!\p"
	.string "Please, enjoy my shop!$"

EventScript_Shop_Varrick_Text_1:
# 219 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's One Time Wonders!$"

EventScript_Shop_Varrick_Text_2:
# 259 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Gordon_Text_0:
# 575 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Gordon.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Gordon_Text_1:
# 580 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Gordon{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Gordon_Text_2:
# 609 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Gordon{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Alexander_Text_0:
# 621 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: I am Alexander.\p"
	.string "My passion is battle.\p"
	.string "In particular, the items that Pokémon\n"
	.string "hold can be instrumental for victory.\p"
	.string "I hope that you, too, share in my\n"
	.string "passion.$"

EventScript_Shop_Alexander_Text_1:
# 627 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Alexander{COLOR DARK_GRAY}: The right item can turn the\n"
	.string "tide of battle. What do you need?$"

EventScript_Shop_Alexander_Text_2:
# 656 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Alexander{COLOR DARK_GRAY}: May you always play around\n"
	.string "the crit.$"

EventScript_Shop_Julia_Text_0:
# 668 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Good morning, good afternoon, good\n"
	.string "evening, and goodnight!\p"
	.string "Wherever you are in the world, I am your\n"
	.string "humble shopkeeper, Julia.\p"
	.string "I sell TMs to teach to your treasured\n"
	.string "Pokémon!\p"
	.string "I know they run a pretty penny, but\n"
	.string "they're worth the cost!$"

EventScript_Shop_Julia_Text_1:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Nice to see you! How's it going?$"

EventScript_Shop_Julia_Text_2:
# 703 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Best of luck out there!$"

EventScript_Shop_Joy_Text_0:
# 716 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Recovery Shop,\n"
	.string "is my own!$"

EventScript_Shop_Joy_Text_1:
# 718 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Recovery Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 720 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 727 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 732 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 738 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 742 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_Shop_Lelouch_Text_0:
# 751 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 753 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 757 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 762 "data/scripts/battle_labyrinth.pory"
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
# 776 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Lelouch_Text_10:
# 788 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 806 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 807 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 809 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 838 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 844 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1045 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1053 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1057 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1060 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1082 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1083 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1084 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1085 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1086 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1087 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1088 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1089 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1090 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1091 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1230 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1234 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1252 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1260 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1265 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1266 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1270 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1276 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1282 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1288 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1294 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1300 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1306 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1312 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1318 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1324 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1330 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1336 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1348 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1354 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1360 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1366 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1372 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1378 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1384 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1390 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_MandatoryCheck_Text_0:
# 1417 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1447 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1448 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1451 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1465 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1498 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 1550 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 1564 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 1608 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1613 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1616 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1618 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1621 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1623 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1626 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1628 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1631 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1633 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1636 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1638 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1640 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1642 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1644 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1647 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1649 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1652 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1654 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1657 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1659 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1662 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1664 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1667 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1672 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
# 1674 "data/scripts/battle_labyrinth.pory"
	.string "Lazy$"

EventScript_Settings_Text_28:
# 1677 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1679 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1682 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1684 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1687 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1689 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1697 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 1699 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 1702 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 1712 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1714 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 1717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 1732 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_41:
# 1734 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_42:
# 1737 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_43:
# 1745 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 1747 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 1750 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_46:
# 1761 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_47:
# 1763 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_48:
# 1765 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_49:
# 1768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_50:
# 1775 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 1777 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 1780 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_53:
# 1790 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_54:
# 1791 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_55:
# 1820 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_56:
# 1823 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_57:
# 1825 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_58:
# 1828 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_59:
# 1838 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_60:
# 1840 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 1843 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_62:
# 1851 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_63:
# 1853 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_64:
# 1856 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_65:
# 1861 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_66:
# 1864 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_67:
# 1870 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_68:
# 1872 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_69:
# 1875 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_70:
# 1880 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_71:
# 1883 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_72:
# 1891 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_73:
# 1893 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_74:
# 1895 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_75:
# 1898 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_76:
# 1906 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_77:
# 1907 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_78:
# 1910 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_79:
# 1916 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_80:
# 1918 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_81:
# 1920 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_82:
# 1923 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_83:
# 1931 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_84:
# 1932 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_85:
# 1935 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_86:
# 1941 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_87:
# 1943 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_88:
# 1945 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_89:
# 1948 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_90:
# 1956 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_91:
# 1957 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_92:
# 1960 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_93:
# 1966 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_94:
# 1968 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_95:
# 1970 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_96:
# 1973 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_97:
# 1981 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_98:
# 1982 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_99:
# 1985 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_100:
# 1991 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_101:
# 1993 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_102:
# 1995 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_103:
# 1998 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_104:
# 2006 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_105:
# 2007 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_106:
# 2010 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_107:
# 2016 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_108:
# 2018 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_109:
# 2020 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_110:
# 2023 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_111:
# 2031 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_112:
# 2033 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_113:
# 2036 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_114:
# 2045 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_115:
# 2047 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_116:
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_117:
# 2052 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_118:
# 2060 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_119:
# 2061 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_120:
# 2064 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_121:
# 2070 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_122:
# 2072 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_123:
# 2074 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_124:
# 2077 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_125:
# 2085 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_126:
# 2086 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_127:
# 2089 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_128:
# 2095 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_129:
# 2097 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_130:
# 2099 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_131:
# 2102 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_132:
# 2110 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_133:
# 2111 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_134:
# 2114 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_135:
# 2120 "data/scripts/battle_labyrinth.pory"
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_136:
# 2122 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_137:
# 2124 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_138:
# 2127 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_139:
# 2135 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_140:
# 2136 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_141:
# 2139 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2159 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_MusicMenu_Text_5:
# 2168 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_6:
# 2171 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_7:
# 2174 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_8:
# 2177 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_9:
# 2180 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_10:
# 2183 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_11:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_12:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_13:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_14:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_15:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_16:
# 2185 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_17:
# 2199 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_18:
# 2210 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_19:
# 2213 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_20:
# 2216 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_21:
# 2219 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_22:
# 2222 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_23:
# 2225 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_24:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_25:
# 2252 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_26:
# 2255 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_27:
# 2258 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_28:
# 2261 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_29:
# 2264 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_30:
# 2267 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_31:
# 2283 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
# 2517 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
# 2527 "data/scripts/battle_labyrinth.pory"
	.string "Warping now…$"

EventScript_NuzlockeVerifyGift_Text_0:
# 2760 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2777 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
# 792 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 796 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 994 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 998 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1002 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1006 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1010 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1014 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1018 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1022 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1026 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1030 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1408 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1568 "data/scripts/battle_labyrinth.pory"
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
	.string "and {COLOR RED}Independent{COLOR DARK_GRAY}.\p"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode can only be enabled at the\n"
	.string "beginning of the game, but can be\l"
	.string "disabled at any point.\p"
	.string "It is not recommended to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

gText_Colress_RandomizerExplanation::
# 1575 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1581 "data/scripts/battle_labyrinth.pory"
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
# 1588 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NumDeathsNuzlocke::
# 1594 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} death(s).$"

gText_Colress_CannotChangeSettingBrutal::
# 1598 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1602 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2510 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2750 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2754 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
