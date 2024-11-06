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


EventScript_ItemsSign::
# 55 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 60 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 65 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 70 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


EventScript_RecoverySign::
# 75 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_BattleItemsSign::
# 80 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BattleItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 84 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


	.align 2
# 88 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 89 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

EventScript_Shop_Portentia::
# 93 "data/scripts/battle_labyrinth.pory"
	lock
# 94 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 95 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 99 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 103 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 104 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 105 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 106 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 107 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 108 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 110 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 111 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 112 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 113 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_12
# 114 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_12
# 115 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_12
# 116 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_12
# 117 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_12
# 118 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_12
# 119 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_12
# 120 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_12
# 121 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_12
# 122 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_12
# 123 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_12
# 124 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_12
# 125 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_12
# 126 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_12
# 127 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_12
# 128 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_12
# 129 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_12
EventScript_Shop_Portentia_9:
# 132 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 133 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 96 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 97 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 100 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 101 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 99 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 109 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 130 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Portentia_9


	.align 2
# 136 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 137 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 138 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 139 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 143 "data/scripts/battle_labyrinth.pory"
	lock
# 144 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 145 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 149 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 150 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 151 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 152 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 153 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 154 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 156 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 157 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 158 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_7
# 159 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_7
# 160 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_7
# 161 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_7
# 162 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_7
# 163 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_7
# 164 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_7
# 165 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_7
# 166 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_7
# 167 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_7
# 168 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_7
# 169 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_7
# 170 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_7
# 171 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_7
# 172 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_7
# 173 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_7
# 174 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_7
# 175 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_7
EventScript_Shop_Tim_4:
# 178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 179 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 147 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 155 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 176 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Tim_4


	.align 2
# 182 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 184 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 188 "data/scripts/battle_labyrinth.pory"
	lock
# 189 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 190 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 203 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 204 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 205 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 206 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 207 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 208 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 210 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 211 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 213 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_8
# 214 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 216 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_9
# 217 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_9
# 219 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_10
# 220 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_10
# 221 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 222 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 224 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 225 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 226 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 227 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 229 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 230 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 231 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 233 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 234 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 236 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 244 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 201 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 209 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Consumables_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 212 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_4to5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 215 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_6to8
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 218 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_9to10
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 223 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 228 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 232 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 235 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 237 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 237 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 240 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 238 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 247 "data/scripts/battle_labyrinth.pory"
Shop_Consumables_1:
# 248 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 251 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 252 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 253 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 254 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 256 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 257 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 258 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 259 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 262 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 263 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 264 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 265 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 266 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 267 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 268 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 277 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
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
	.2byte ITEM_DIVE_BALL
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 314 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 337 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 368 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
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
	.2byte ITEM_MUSCLE_BAND
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 406 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 440 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 501 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 556 "data/scripts/battle_labyrinth.pory"
	lock
# 557 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 558 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 564 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 565 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 566 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 567 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 568 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 569 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 571 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 572 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 573 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 574 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 575 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_7
# 576 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_7
# 577 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_7
# 578 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_7
# 579 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_7
# 580 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_7
# 581 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_7
# 582 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_7
# 583 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_7
# 584 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_7
# 585 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_7
# 586 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_7
# 587 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_7
# 588 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_7
# 589 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_7
# 590 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_7
EventScript_Shop_Julia_4:
# 593 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 594 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 559 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 562 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 570 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 591 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 597 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 602 "data/scripts/battle_labyrinth.pory"
	lock
# 603 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 604 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 612 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1, MSGBOX_DEFAULT
# 640 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_2
# 641 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 605 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 610 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Lelouch::
# 645 "data/scripts/battle_labyrinth.pory"
	lock
# 646 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 647 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 653 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 658 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 673 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 674 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Lelouch_Text_9
# 675 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 676 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 678 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 680 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 682 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 685 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_10
# 686 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 648 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 649 "data/scripts/battle_labyrinth.pory"
	delay 16
# 650 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 651 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 654 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 655 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 659 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 671 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 677 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 679 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 681 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 683 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 698 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 699 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 703 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 704 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 705 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 708 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 2
# 709 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 710 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 711 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 725 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 884 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 885 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 700 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 706 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 705 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 705 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 712 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 713 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 726 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 727 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 714 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 715 "data/scripts/battle_labyrinth.pory"
	waitstate
# 716 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 721 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 728 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 729 "data/scripts/battle_labyrinth.pory"
	waitstate
# 730 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 733 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 734 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 737 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 738 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 739 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 740 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 741 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 742 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 743 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 746 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 749 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 752 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 755 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 757 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 758 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 761 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 762 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 763 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 764 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 767 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 770 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 773 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 776 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 778 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 779 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 782 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 783 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 784 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 785 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 788 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 791 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 794 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 797 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 799 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 800 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 803 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 804 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 805 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 806 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 809 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 812 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 815 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 818 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 820 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 821 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 824 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 825 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 826 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 827 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 830 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 833 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 836 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 839 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 841 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 842 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 845 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 846 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 847 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 848 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 851 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 854 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 857 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 860 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 862 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 863 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 866 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 870 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 871 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 874 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 875 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 876 "data/scripts/battle_labyrinth.pory"
	waitse
# 877 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 878 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 879 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 717 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 718 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 719 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 731 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 735 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 744 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 745 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 747 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 748 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 750 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 751 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 753 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 754 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 756 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 765 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 766 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 768 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 769 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 771 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 772 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 774 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 775 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 777 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 786 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 787 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 789 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 790 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 792 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 793 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 795 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 796 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 798 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 807 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 808 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 810 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 811 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 813 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 814 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 816 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 817 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 819 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 828 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 829 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 831 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 832 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 834 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 835 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 837 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 838 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 849 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 850 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 852 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 853 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 855 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 856 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 858 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 859 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 861 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 867 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 932 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 933 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
# 937 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsBlueShards, MSGBOX_YESNO
# 938 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_5
EventScript_Shop_Lelouch_MoveReminder_8:
# 942 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_DEFAULT
# 943 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 944 "data/scripts/battle_labyrinth.pory"
	waitstate
# 945 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 948 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 949 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 953 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 957 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
# 958 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 959 "data/scripts/battle_labyrinth.pory"
	waitstate
# 960 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_20
# 963 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 964 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
# 934 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveReminder_5:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
	return

EventScript_Shop_Lelouch_MoveReminder_14:
# 950 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_17:
# 954 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_8

EventScript_Shop_Lelouch_MoveReminder_20:
	goto EventScript_Shop_Lelouch_MoveReminder_8


EventScript_Shop_Lelouch_MoveTutor::
# 971 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 972 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_2
EventScript_Shop_Lelouch_MoveTutor_4:
# 977 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CostsYellowShards, MSGBOX_DEFAULT
# 978 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_7
EventScript_Shop_Lelouch_MoveTutor_6:
# 1014 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 50
# 1015 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1016 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1017 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_11
# 1020 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_12
# 1023 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_13
# 1026 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_14
# 1029 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_15
# 1032 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_16
# 1035 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_17
# 1038 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_18
# 1041 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_19
# 1044 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_20
# 1122 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_21
# 1123 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_21
EventScript_Shop_Lelouch_MoveTutor_9:
# 1126 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1127 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_10, MSGBOX_YESNO
# 1128 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1131 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_DEFAULT
# 1132 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1133 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_26
# 1136 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayYellow1, MSGBOX_DEFAULT
# 1137 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_YELLOW_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_2:
# 973 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_MoveTutor_7:
# 979 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_0, 1
# 980 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 2
# 981 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 3
# 982 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 4
# 983 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 5
# 984 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 6
# 985 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 7
# 986 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 8
# 987 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 9
# 988 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 10
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1018 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1019 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_12:
# 1021 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1022 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_13:
# 1024 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1025 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_14:
# 1027 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1028 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_15:
# 1030 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1031 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_16:
# 1033 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1034 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_17:
# 1036 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1037 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_18:
# 1039 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1040 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_19:
# 1042 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1043 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_20:
# 1045 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1046 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_9

EventScript_Shop_Lelouch_MoveTutor_21:
	return

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_4

EventScript_Shop_Lelouch_MoveTutor_26:
	goto EventScript_Shop_Lelouch_MoveTutor_4


EventScript_Shop_Lelouch_Other::
# 1144 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1145 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1149 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1150 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1151 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1152 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1155 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1156 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1159 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1160 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1161 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1162 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1163 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1164 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1165 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1171 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1177 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1183 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1189 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1195 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1201 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1207 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1213 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1219 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1225 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1231 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1237 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1243 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1249 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1255 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1261 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1267 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1273 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1279 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1285 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1291 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1294 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1295 "data/scripts/battle_labyrinth.pory"
	waitse
# 1296 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1297 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1298 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1299 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1146 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1157 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1166 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1167 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1168 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1172 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1173 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1174 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1179 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1180 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1184 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1185 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1186 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1190 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1192 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1196 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1197 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1198 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1203 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1204 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1208 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1209 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1210 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1214 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1215 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1216 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1220 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1222 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1226 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1227 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1228 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1233 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1234 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1238 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1239 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1240 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1244 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1245 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1246 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1250 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1251 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1252 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1256 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1257 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1258 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1262 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1263 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1264 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1268 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1269 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1270 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1274 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1275 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1276 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1280 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1281 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1282 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1286 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1287 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1288 "data/scripts/battle_labyrinth.pory"
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
# 1310 "data/scripts/battle_labyrinth.pory"
	lock
# 1311 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1312 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1316 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1317 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1318 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1319 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1323 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1324 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1328 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1329 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1331 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1332 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1333 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1334 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1335 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1336 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1337 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1340 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1341 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1313 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1314 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1320 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1321 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1325 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1326 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_Shop_Alexander::
# 1346 "data/scripts/battle_labyrinth.pory"
	lock
# 1347 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1348 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1352 "data/scripts/battle_labyrinth.pory"
	lock
# 1353 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1354 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1358 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1358 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1359 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1360 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1361 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1362 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1363 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1364 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1367 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1369 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1365 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1377 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1378 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1379 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1380 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1383 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1385 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1381 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1389 "data/scripts/battle_labyrinth.pory"
	lock
# 1390 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1391 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1396 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1397 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1398 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1399 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1401 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1403 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1405 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1407 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1410 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1411 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1392 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1393 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1394 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1400 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1402 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1404 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1406 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1408 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1414 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1418 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1423 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
	.2byte ITEM_NONE

	.align 2
# 1429 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1435 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1442 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1443 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1444 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1445 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1452 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1459 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1466 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1467 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	return

EventScript_LeavingSetup_2:
# 1446 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1447 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1448 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1449 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1450 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1453 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1454 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1455 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1456 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1457 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1460 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1461 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1462 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1463 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1464 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7


EventScript_WhenUReady::
# 1472 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1475 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1478 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1481 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1485 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1486 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1487 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1473 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1474 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1476 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1477 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1479 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1480 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1482 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1483 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1492 "data/scripts/battle_labyrinth.pory"
	lockall
# 1493 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1494 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1495 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1496 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1501 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1502 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1503 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1505 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1497 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1498 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1499 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 1509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0
# 1510 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1549 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1550 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1551 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1553 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1556 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1558 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1561 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1563 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1566 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1568 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1571 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1574 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1576 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1579 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1581 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1582 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1582 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1585 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1587 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1587 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1590 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1592 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1592 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1595 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1597 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1597 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1600 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1602 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1602 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1605 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1607 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1607 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1610 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1612 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1612 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_68
# 1615 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1617 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1617 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1620 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1622 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1622 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1625 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1627 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1627 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1630 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1632 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Text_9, 17
# 1633 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1634 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1635 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 1666 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 1704 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 1733 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 1797 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 1816 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 1835 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 1837 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 1862 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 1887 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 1912 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 1937 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 1962 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 1991 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2016 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2041 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2066 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2092 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2093 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1552 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1554 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1557 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1559 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1562 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1564 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1567 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1569 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1572 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1577 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1583 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1588 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1593 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1598 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1603 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1608 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1613 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1618 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1623 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1628 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1636 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1637 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 1650 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 1653 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1654 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 1667 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1668 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 1678 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 1692 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1693 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 1705 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1706 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 1722 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1723 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 1734 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1735 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 1782 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 1785 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 1786 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 1798 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 1799 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_122
# 1808 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_YESNO
# 1809 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 1817 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_DEFAULT
# 1818 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 1827 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 1828 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 1836 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 1838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 1839 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 1839 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 1853 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_DEFAULT
# 1854 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_YESNO
# 1855 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 1863 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 1864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 1864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 1878 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_DEFAULT
# 1879 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_YESNO
# 1880 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 1888 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 1889 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 1889 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 1903 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_DEFAULT
# 1904 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_YESNO
# 1905 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 1913 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 1914 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 1914 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 1928 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_DEFAULT
# 1929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_YESNO
# 1930 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 1938 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 1939 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 1939 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 1953 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_DEFAULT
# 1954 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_YESNO
# 1955 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 1963 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 1964 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 1964 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 1978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_DEFAULT
# 1979 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 1988 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 1992 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 1993 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_LAZY, EventScript_Settings_158
# 1993 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2007 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_DEFAULT
# 2008 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_YESNO
# 2009 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2017 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2018 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2018 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2032 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_DEFAULT
# 2033 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_YESNO
# 2034 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2042 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2043 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2043 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2057 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_DEFAULT
# 2058 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_YESNO
# 2059 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2067 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2068 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2068 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2082 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_DEFAULT
# 2083 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_YESNO
# 2084 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2094 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2097 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 1638 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 1639 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 1669 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 1671 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 1674 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 1675 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 1707 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 1710 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1711 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 1736 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 1770 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 1771 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 1800 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_YESNO
# 1801 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 1819 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_YESNO
# 1820 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 1840 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 1841 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 1850 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 1865 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 1866 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 1875 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 1890 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 1891 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 1900 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 1915 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 1916 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 1925 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 1940 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 1941 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 1950 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 1965 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 1966 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 1975 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 1994 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 1995 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2004 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2019 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2020 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2029 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2044 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2045 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2054 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2069 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2070 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2079 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 1640 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 1641 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 1651 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 1679 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1680 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 1670 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 1672 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 1708 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 1724 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 1725 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 1737 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 1738 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 1739 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 1783 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 1802 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_DEFAULT
# 1804 "data/scripts/battle_labyrinth.pory"
	waitse
# 1805 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_207:
# 1810 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1811 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 1812 "data/scripts/battle_labyrinth.pory"
	waitse
# 1813 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_209:
# 1821 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1822 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 1823 "data/scripts/battle_labyrinth.pory"
	waitse
# 1824 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 1829 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1830 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 1831 "data/scripts/battle_labyrinth.pory"
	waitse
# 1832 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 1842 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_YESNO
# 1843 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_216:
# 1856 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1857 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 1858 "data/scripts/battle_labyrinth.pory"
	waitse
# 1859 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 1867 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_YESNO
# 1868 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_221:
# 1881 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1882 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 1883 "data/scripts/battle_labyrinth.pory"
	waitse
# 1884 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 1892 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_YESNO
# 1893 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_226:
# 1906 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1907 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 1908 "data/scripts/battle_labyrinth.pory"
	waitse
# 1909 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 1917 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_YESNO
# 1918 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_231:
# 1931 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1932 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 1933 "data/scripts/battle_labyrinth.pory"
	waitse
# 1934 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 1942 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_YESNO
# 1943 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_236:
# 1956 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1957 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 1958 "data/scripts/battle_labyrinth.pory"
	waitse
# 1959 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 1967 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_YESNO
# 1968 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_241:
# 1980 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_YESNO
# 1981 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_244:
# 1996 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_YESNO
# 1997 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2010 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2011 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2012 "data/scripts/battle_labyrinth.pory"
	waitse
# 2013 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2021 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_YESNO
# 2022 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2035 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2036 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2037 "data/scripts/battle_labyrinth.pory"
	waitse
# 2038 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2046 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_YESNO
# 2047 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2060 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2061 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2062 "data/scripts/battle_labyrinth.pory"
	waitse
# 2063 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2071 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_YESNO
# 2072 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2085 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2086 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2087 "data/scripts/battle_labyrinth.pory"
	waitse
# 2088 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 1642 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1643 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 1644 "data/scripts/battle_labyrinth.pory"
	waitse
# 1645 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
# 1646 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_266:
# 1655 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 1656 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_268:
# 1681 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 1682 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_270:
# 1694 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 1695 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_272:
# 1712 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 1713 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_274:
# 1726 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1727 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1728 "data/scripts/battle_labyrinth.pory"
	waitse
# 1729 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1740 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1741 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1742 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1743 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1744 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1745 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1746 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1747 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1748 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1749 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1750 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1751 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1752 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1753 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1754 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1755 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1756 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1757 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1758 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1759 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1760 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1761 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1762 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1763 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1764 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1765 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1766 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1767 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 1772 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 1773 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_280:
# 1787 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 1788 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_282:
# 1844 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1845 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 1846 "data/scripts/battle_labyrinth.pory"
	waitse
# 1847 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 1869 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1870 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 1871 "data/scripts/battle_labyrinth.pory"
	waitse
# 1872 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_286:
# 1894 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1895 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 1896 "data/scripts/battle_labyrinth.pory"
	waitse
# 1897 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_288:
# 1919 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1920 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 1921 "data/scripts/battle_labyrinth.pory"
	waitse
# 1922 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_290:
# 1944 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1945 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 1946 "data/scripts/battle_labyrinth.pory"
	waitse
# 1947 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_292:
# 1969 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1970 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 1971 "data/scripts/battle_labyrinth.pory"
	waitse
# 1972 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_294:
# 1982 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1983 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 1984 "data/scripts/battle_labyrinth.pory"
	waitse
# 1985 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_296:
# 1998 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1999 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2000 "data/scripts/battle_labyrinth.pory"
	waitse
# 2001 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_LAZY
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2023 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2024 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2025 "data/scripts/battle_labyrinth.pory"
	waitse
# 2026 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2048 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2049 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2050 "data/scripts/battle_labyrinth.pory"
	waitse
# 2051 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2073 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2074 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2075 "data/scripts/battle_labyrinth.pory"
	waitse
# 2076 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_304:
# 1657 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1658 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 1659 "data/scripts/battle_labyrinth.pory"
	waitse
# 1660 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
# 1661 "data/scripts/battle_labyrinth.pory"
	special ReverseHiddenItemFlags
	goto EventScript_Settings_1

EventScript_Settings_306:
# 1683 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1684 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 1685 "data/scripts/battle_labyrinth.pory"
	waitse
# 1686 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1687 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
# 1688 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeClear
	goto EventScript_Settings_1

EventScript_Settings_308:
# 1696 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1697 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 1698 "data/scripts/battle_labyrinth.pory"
	waitse
# 1699 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
# 1700 "data/scripts/battle_labyrinth.pory"
	callnative GlobalNuzlockeSet
	goto EventScript_Settings_1

EventScript_Settings_310:
# 1714 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1715 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 1716 "data/scripts/battle_labyrinth.pory"
	waitse
# 1717 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_312:
# 1774 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1775 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 1776 "data/scripts/battle_labyrinth.pory"
	waitse
# 1777 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 1789 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1790 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 1791 "data/scripts/battle_labyrinth.pory"
	waitse
# 1792 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2105 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2106 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2107 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_MusicMenu_Text_4
# 2108 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2109 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2151 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2193 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2235 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2236 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2110 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2111 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2152 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2153 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2194 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2195 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2112 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2113 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2116 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2119 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2122 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2125 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2128 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2132 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2133 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2134 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2136 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2138 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2140 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2142 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2144 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2147 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2154 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2155 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2158 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2161 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2164 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2167 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2170 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2174 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2175 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2176 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2178 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2180 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2182 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2184 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2186 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2189 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2196 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2197 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2200 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2203 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2206 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2209 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2212 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2216 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15, EventScript_MusicMenu_Text_16
# 2217 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2218 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2220 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2222 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2224 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2226 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2228 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2231 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2114 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2115 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2117 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2118 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2120 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2121 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2123 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2124 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2126 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2127 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2130 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_10
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2156 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2157 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2159 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2160 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2162 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2163 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2165 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2166 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2168 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2169 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2172 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_23
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2198 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2199 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2201 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2202 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2204 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2205 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2207 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2208 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2210 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2211 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2214 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_30
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2135 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2137 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2139 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2141 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2143 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_17, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2148 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2179 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2181 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2183 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2185 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_24, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2190 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2219 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2221 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2223 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2225 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2227 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_31, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2243 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2244 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2245 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2246 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2247 "data/scripts/battle_labyrinth.pory"
	switch VAR_REVISITING_ZONE
# 2248 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WarpZone0_3
# 2252 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WarpZone0_4
# 2256 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WarpZone0_5
# 2260 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WarpZone0_6
# 2264 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WarpZone0_7
# 2268 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WarpZone0_8
# 2272 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WarpZone0_9
# 2276 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_WarpZone0_10
# 2280 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WarpZone0_11
# 2284 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WarpZone0_12
# 2288 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WarpZone0_13
# 2292 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WarpZone0_14
# 2296 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WarpZone0_15
# 2300 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_WarpZone0_16
# 2304 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WarpZone0_17
# 2308 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WarpZone0_18
# 2312 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WarpZone0_19
# 2316 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WarpZone0_20
# 2320 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_WarpZone0_21
# 2324 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WarpZone0_22
# 2328 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WarpZone0_23
# 2332 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WarpZone0_24
# 2336 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WarpZone0_25
# 2340 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WarpZone0_26
# 2344 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_WarpZone0_27
# 2348 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_WarpZone0_28
# 2352 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_WarpZone0_29
# 2356 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_WarpZone0_30
# 2360 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_WarpZone0_31
# 2364 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_WarpZone0_32
# 2368 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_WarpZone0_33
# 2372 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_WarpZone0_34
# 2376 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_WarpZone0_35
# 2380 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_WarpZone0_36
# 2384 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_WarpZone0_37
# 2388 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_WarpZone0_38
# 2392 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_WarpZone0_39
# 2396 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_WarpZone0_40
# 2400 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_WarpZone0_41
# 2404 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_WarpZone0_42
# 2408 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_WarpZone0_43
# 2412 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_WarpZone0_44
# 2416 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_WarpZone0_45
# 2420 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_WarpZone0_46
# 2424 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_WarpZone0_47
# 2428 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_WarpZone0_48
# 2432 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_WarpZone0_49
# 2436 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_WarpZone0_50
# 2440 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_WarpZone0_51
# 2444 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_WarpZone0_52
# 2448 "data/scripts/battle_labyrinth.pory"
	case 51, EventScript_WarpZone0_53
EventScript_WarpZone0_1:
# 2453 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_WarpZone0_3:
# 2249 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2250 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 32
# 2251 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_4:
# 2253 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2254 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 32
# 2255 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_5:
# 2257 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2258 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 32
# 2259 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_6:
# 2261 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2262 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 32
# 2263 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_7:
# 2265 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2266 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 32
# 2267 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_8:
# 2269 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2270 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 32
# 2271 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_9:
# 2273 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2274 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 32
# 2275 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_10:
# 2277 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2278 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 32
# 2279 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_11:
# 2281 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2282 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 32
# 2283 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_12:
# 2285 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2286 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 32
# 2287 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_13:
# 2289 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2290 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 25
# 2291 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_14:
# 2293 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2294 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 25
# 2295 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_15:
# 2297 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2298 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 25
# 2299 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_16:
# 2301 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2302 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 25
# 2303 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_17:
# 2305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2306 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 25
# 2307 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_18:
# 2309 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2310 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 25
# 2311 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_19:
# 2313 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2314 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 25
# 2315 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_20:
# 2317 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2318 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 25
# 2319 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_21:
# 2321 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2322 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 25
# 2323 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_22:
# 2325 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2326 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 25
# 2327 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_23:
# 2329 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2330 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 18
# 2331 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_24:
# 2333 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2334 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 18
# 2335 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_25:
# 2337 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2338 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 18
# 2339 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_26:
# 2341 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2342 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 18
# 2343 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_27:
# 2345 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2346 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 18
# 2347 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_28:
# 2349 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2350 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 18
# 2351 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_29:
# 2353 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2354 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 18
# 2355 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_30:
# 2357 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2358 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 18
# 2359 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_31:
# 2361 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2362 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 18
# 2363 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_32:
# 2365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2366 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 18
# 2367 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_33:
# 2369 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2370 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 11
# 2371 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_34:
# 2373 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2374 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 11
# 2375 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_35:
# 2377 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2378 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 11
# 2379 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_36:
# 2381 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2382 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 11
# 2383 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_37:
# 2385 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2386 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 11
# 2387 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_38:
# 2389 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2390 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 11
# 2391 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_39:
# 2393 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2394 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 11
# 2395 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_40:
# 2397 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2398 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 11
# 2399 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_41:
# 2401 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2402 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 11
# 2403 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_42:
# 2405 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2406 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 11
# 2407 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_43:
# 2409 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2410 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 15, 4
# 2411 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_44:
# 2413 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2414 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 19, 4
# 2415 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_45:
# 2417 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2418 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 23, 4
# 2419 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_46:
# 2421 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2422 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 27, 4
# 2423 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_47:
# 2425 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2426 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 31, 4
# 2427 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_48:
# 2429 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2430 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 35, 4
# 2431 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_49:
# 2433 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2434 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 39, 4
# 2435 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_50:
# 2437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2438 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 43, 4
# 2439 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_51:
# 2441 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2442 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 47, 4
# 2443 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_52:
# 2445 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2446 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 51, 4
# 2447 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1

EventScript_WarpZone0_53:
# 2449 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2450 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0C, 255, 2, 25
# 2451 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_WarpZone0_1


Zone_EventScript_RetirePrompt::
# 2462 "data/scripts/battle_labyrinth.pory"
	lockall
# 2463 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 2464 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_0, MSGBOX_YESNO
# 2465 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone_EventScript_RetirePrompt_2
# 2471 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 2472 "data/scripts/battle_labyrinth.pory"
	removemoney 0
# 2473 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 2474 "data/scripts/battle_labyrinth.pory"
	msgbox Zone_EventScript_RetirePrompt_Text_1
# 2475 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2476 "data/scripts/battle_labyrinth.pory"
	case 1, Zone_EventScript_RetirePrompt_6
# 2484 "data/scripts/battle_labyrinth.pory"
	case 2, Zone_EventScript_RetirePrompt_7
# 2493 "data/scripts/battle_labyrinth.pory"
	case 3, Zone_EventScript_RetirePrompt_8
# 2503 "data/scripts/battle_labyrinth.pory"
	case 4, Zone_EventScript_RetirePrompt_9
# 2514 "data/scripts/battle_labyrinth.pory"
	case 5, Zone_EventScript_RetirePrompt_10
# 2526 "data/scripts/battle_labyrinth.pory"
	case 6, Zone_EventScript_RetirePrompt_11
# 2537 "data/scripts/battle_labyrinth.pory"
	case 7, Zone_EventScript_RetirePrompt_12
# 2555 "data/scripts/battle_labyrinth.pory"
	case 9, Zone_EventScript_RetirePrompt_13
# 2561 "data/scripts/battle_labyrinth.pory"
	case 10, Zone_EventScript_RetirePrompt_14
# 2573 "data/scripts/battle_labyrinth.pory"
	case 11, Zone_EventScript_RetirePrompt_15
# 2582 "data/scripts/battle_labyrinth.pory"
	case 12, Zone_EventScript_RetirePrompt_16
# 2595 "data/scripts/battle_labyrinth.pory"
	case 13, Zone_EventScript_RetirePrompt_17
# 2615 "data/scripts/battle_labyrinth.pory"
	case 15, Zone_EventScript_RetirePrompt_18
# 2620 "data/scripts/battle_labyrinth.pory"
	case 16, Zone_EventScript_RetirePrompt_19
# 2631 "data/scripts/battle_labyrinth.pory"
	case 17, Zone_EventScript_RetirePrompt_20
# 2639 "data/scripts/battle_labyrinth.pory"
	case 18, Zone_EventScript_RetirePrompt_21
# 2665 "data/scripts/battle_labyrinth.pory"
	case 20, Zone_EventScript_RetirePrompt_22
# 2677 "data/scripts/battle_labyrinth.pory"
	case 21, Zone_EventScript_RetirePrompt_23
# 2680 "data/scripts/battle_labyrinth.pory"
	case 22, Zone_EventScript_RetirePrompt_24
# 2683 "data/scripts/battle_labyrinth.pory"
	case 23, Zone_EventScript_RetirePrompt_25
# 2686 "data/scripts/battle_labyrinth.pory"
	case 24, Zone_EventScript_RetirePrompt_26
# 2689 "data/scripts/battle_labyrinth.pory"
	case 26, Zone_EventScript_RetirePrompt_27
Zone_EventScript_RetirePrompt_4:
# 2693 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_2:
# 2466 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2467 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2468 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

Zone_EventScript_RetirePrompt_6:
# 2477 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NINA
# 2478 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARIAM
# 2479 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OSCAR
# 2480 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_1
# 2481 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_1_STATE, 0
# 2482 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE0SANCTUARY, 255, 38, 11
# 2483 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_7:
# 2485 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_POLLY
# 2486 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEREMIAH
# 2487 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HARPER
# 2488 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ARTHUR
# 2489 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_2
# 2490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_2_STATE, 0
# 2491 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE1SANCTUARY, 255, 38, 11
# 2492 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_8:
# 2494 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEMMA
# 2495 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PATRICK
# 2496 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BORIS
# 2497 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNABELLE
# 2498 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RICHARD
# 2499 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_3
# 2500 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_3_STATE, 0
# 2501 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE2SANCTUARY, 255, 38, 11
# 2502 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_9:
# 2504 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HERMAN
# 2505 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RALPH
# 2506 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SANTIAGO
# 2507 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 2508 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRED
# 2509 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LUCIA
# 2510 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_4
# 2511 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_4_STATE, 0
# 2512 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE3SANCTUARY, 255, 38, 11
# 2513 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_10:
# 2515 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 2516 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GILBERT
# 2517 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REBECCA
# 2518 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RYAN
# 2519 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CAITLYN
# 2520 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KENNETH
# 2521 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CLINTON
# 2522 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_5
# 2523 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_5_STATE, 0
# 2524 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE4SANCTUARY, 255, 38, 11
# 2525 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_11:
# 2527 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ZACK
# 2528 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELANIE
# 2529 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONSTANCE
# 2530 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FRANK
# 2531 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DUDLEY
# 2532 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DAISY
# 2533 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_6
# 2534 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_6_STATE, 0
# 2535 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE5SANCTUARY, 255, 38, 11
# 2536 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_12:
# 2538 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MILLIE
# 2539 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PAIGE
# 2540 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SETH
# 2541 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAMAL
# 2542 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONNIE
# 2543 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_7
# 2544 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JIMMY
# 2545 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIANO
# 2546 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KAREN
# 2547 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAYDEN
# 2548 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NEIL
# 2549 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TAMARA
# 2550 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_8
# 2551 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE8D_WALLY
# 2552 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_8_STATE, 0
# 2553 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE6SANCTUARY, 255, 38, 11
# 2554 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_13:
# 2556 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_COOPER
# 2557 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CARMINE
# 2558 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 2559 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE8SANCTUARY, 255, 38, 11
# 2560 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_14:
# 2562 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KYLE
# 2563 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BELLE
# 2564 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DEWEY
# 2565 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_PEARLIE
# 2566 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ERNEST
# 2567 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ALANA
# 2568 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SUSAN
# 2569 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CONRAD
# 2570 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_9
# 2571 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE9SANCTUARY, 255, 38, 11
# 2572 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_15:
# 2574 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JEANETTE
# 2575 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMMA_AND_LEO
# 2576 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REGINA
# 2577 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOEL
# 2578 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_10
# 2579 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_11_STATE, 0
# 2580 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE10SANCTUARY, 255, 38, 11
# 2581 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_16:
# 2583 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ESSENCE
# 2584 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DOLORES
# 2585 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TREVOR
# 2586 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RANDOLPH
# 2587 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FEDERICO
# 2588 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GENIE
# 2589 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HILDA
# 2590 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KINLEY
# 2591 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 2592 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_12_STATE, 0
# 2593 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE11SANCTUARY, 255, 38, 11
# 2594 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_17:
# 2596 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_VIOLET
# 2597 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WANDA
# 2598 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AMBER_AND_KIM
# 2599 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAN_AND_ERIN
# 2600 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_STEVE
# 2601 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GOULD
# 2602 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MENDEL
# 2603 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DARWIN
# 2604 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BART
# 2605 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_NIGEL
# 2606 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOLA
# 2607 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHARLIE
# 2608 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TODD
# 2609 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RUSSELL
# 2610 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_OTIS
# 2611 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_11
# 2612 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_12
# 2613 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE12SANCTUARY, 255, 38, 11
# 2614 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_18:
# 2616 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_13
# 2617 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_15_STATE, 0
# 2618 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE14SANCTUARY, 255, 38, 11
# 2619 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_19:
# 2621 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_IONA
# 2622 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BERKE
# 2623 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TANISHA
# 2624 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ROBERT
# 2625 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_CHRIS
# 2626 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ANGUS
# 2627 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_14
# 2628 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_16_STATE, 0
# 2629 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE15SANCTUARY, 255, 38, 11
# 2630 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_20:
# 2632 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_AXLE
# 2633 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_RAFAEL
# 2634 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GEORGINA
# 2635 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 2636 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_17_STATE, 0
# 2637 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE16SANCTUARY, 255, 38, 11
# 2638 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_21:
# 2640 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DORIS
# 2641 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_HOMER
# 2642 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JOHN
# 2643 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_GLENN
# 2644 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_JAY
# 2645 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TYLER
# 2646 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_TERRENCE
# 2647 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MARTY
# 2648 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KARI
# 2649 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ABRAHAM
# 2650 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_MELINDA
# 2651 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_EMILIO
# 2652 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_REX
# 2653 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LOUIS
# 2654 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEROY
# 2655 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_ELTON
# 2656 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_WILLIE
# 2657 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_16
# 2658 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_18_STATE, 0
# 2659 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_19_STATE, 0
# 2660 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 2661 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 2662 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_HIDE_ZONE18A_DOLL
# 2663 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE17SANCTUARY, 255, 38, 11
# 2664 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_22:
# 2666 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_SHAWN
# 2667 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_FERNANDO
# 2668 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KANE
# 2669 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_KIRK
# 2670 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_DALTON
# 2671 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_LEE
# 2672 "data/scripts/battle_labyrinth.pory"
	cleartrainerflag TRAINER_PBL_BLANCHE
# 2673 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_BEAT_LEVIATHAN_17
# 2674 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_20_STATE, 0
# 2675 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2676 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_23:
# 2678 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE20SANCTUARY, 255, 38, 11
# 2679 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_24:
# 2681 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE21SANCTUARY, 255, 38, 11
# 2682 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_25:
# 2684 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE22SANCTUARY, 255, 38, 11
# 2685 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_26:
# 2687 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE23SANCTUARY, 255, 38, 11
# 2688 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4

Zone_EventScript_RetirePrompt_27:
# 2690 "data/scripts/battle_labyrinth.pory"
	warpteleport MAP_ZONE25SANCTUARY, 255, 38, 11
# 2691 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto Zone_EventScript_RetirePrompt_4


EventScript_NuzlockeVerifyBuy::
# 2706 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 2707 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2708 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 2709 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2710 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 2718 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2719 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2720 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2721 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2729 "data/scripts/battle_labyrinth.pory"
	lock
# 2730 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2731 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2734 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2735 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2736 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2807 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2732 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2737 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2738 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2739 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2740 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2741 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2744 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2747 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2751 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2754 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2757 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2761 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2766 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2769 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2773 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2776 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2781 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2784 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2787 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2790 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2793 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2797 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2798 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2799 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2800 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2801 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2802 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2742 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2743 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2745 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 2746 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2748 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 2749 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 2750 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2752 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 2753 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2755 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 2756 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2758 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2759 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 2760 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2762 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 2763 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2764 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 2765 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2767 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 2768 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2770 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2771 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 2772 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2774 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 2775 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2777 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2778 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2779 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 2780 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2782 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 2783 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2785 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 2786 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2788 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 2789 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2791 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 2792 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2794 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2795 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 2796 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2803 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2804 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2811 "data/scripts/battle_labyrinth.pory"

# 2812 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2813 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2814 "data/scripts/battle_labyrinth.pory"
	end

EventScript_MedicineSign_Text_0:
# 45 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 50 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 55 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 60 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 65 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 70 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

EventScript_RecoverySign_Text_0:
# 75 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_BattleItemsSign_Text_0:
# 80 "data/scripts/battle_labyrinth.pory"
	.string "Alexander's Battle Shop\nA Curated Collection!$"

EventScript_ConsumablesSign_Text_0:
# 84 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Items\nA Fine Collection!$"

EventScript_Shop_Portentia_Text_0:
# 96 "data/scripts/battle_labyrinth.pory"
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
# 100 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 103 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 132 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 146 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 149 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 178 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 191 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick,\n"
	.string "entrepreneur extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: I pitched this idea a couple\n"
	.string "year's back, and now it's become a\l"
	.string "reality!\p"
	.string "All the items you can or can't find in\n"
	.string "the world, you'll find here!\p"
	.string "Fantastic evolution stones!\p"
	.string "Powerful held items!\p"
	.string "Trinkets and bobs!\p"
	.string "Witness the finest item collection\n"
	.string "you've ever seen!\p"
	.string "Please, enjoy my shop!$"

EventScript_Shop_Varrick_Text_1:
# 203 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 243 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 559 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 564 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 593 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 605 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi. My name is Marie, and welcome to\n"
	.string "my shop.\p"
	.string "You're probably wondering what this\n"
	.string "shop is even for.\p"
	.string "Let me explain: lots of trainers leave\n"
	.string "extra eggs at the Daycare.\p"
	.string "It's my job to help match these eggs\n"
	.string "with the right trainer.\p"
	.string "Maybe you'll be able to make your next\n"
	.string "friend here!$"

EventScript_Shop_Marie_Text_1:
# 612 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_Text_2:
# 640 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Lelouch_Text_0:
# 648 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 650 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 654 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 659 "data/scripts/battle_labyrinth.pory"
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
# 673 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Lelouch_Text_10:
# 685 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 703 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 704 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 706 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 735 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 741 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 942 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 950 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 954 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 957 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 979 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 980 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 981 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 982 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 983 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 984 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 985 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 986 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 987 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 988 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1127 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1131 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1149 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1157 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1162 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1167 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1173 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1179 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1185 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1191 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1197 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1203 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1209 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1215 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1221 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1227 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1233 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1239 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1245 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1251 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1257 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1263 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1269 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1275 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1281 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1287 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1314 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Recovery Shop,\n"
	.string "is my own!$"

EventScript_Shop_Joy_Text_1:
# 1316 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Recovery Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1318 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1325 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1330 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1336 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1340 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1362 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1392 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1393 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1396 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1410 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1443 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 1495 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 1509 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 1549 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1552 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1554 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1557 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1559 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1562 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1564 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1567 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1569 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1572 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1574 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1577 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1579 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1581 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1583 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1585 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1588 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1590 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1593 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1595 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1598 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1600 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1603 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1605 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1608 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1610 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1613 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy$"

EventScript_Settings_Text_27:
# 1615 "data/scripts/battle_labyrinth.pory"
	.string "Lazy$"

EventScript_Settings_Text_28:
# 1618 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1620 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1623 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1625 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1628 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1630 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1638 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 1640 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 1643 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1655 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 1658 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 1670 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 1672 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 1675 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 1679 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 1681 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 1684 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 1692 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 1694 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 1697 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 1708 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 1710 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 1712 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 1715 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 1722 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 1724 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 1727 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 1737 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 1738 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 1767 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 1770 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 1772 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 1775 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 1785 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 1787 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 1790 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 1798 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_66:
# 1800 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_67:
# 1803 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_68:
# 1808 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_69:
# 1811 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_70:
# 1817 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_71:
# 1819 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_72:
# 1822 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_73:
# 1827 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_74:
# 1830 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_75:
# 1838 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_76:
# 1840 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_77:
# 1842 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_78:
# 1845 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_79:
# 1853 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_80:
# 1854 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_81:
# 1857 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_82:
# 1863 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_83:
# 1865 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_84:
# 1867 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_85:
# 1870 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_86:
# 1878 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_87:
# 1879 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_88:
# 1882 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_89:
# 1888 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_90:
# 1890 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_91:
# 1892 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_92:
# 1895 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_93:
# 1903 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_94:
# 1904 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_95:
# 1907 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_96:
# 1913 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_97:
# 1915 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_98:
# 1917 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_99:
# 1920 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_100:
# 1928 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_101:
# 1929 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_102:
# 1932 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_103:
# 1938 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_104:
# 1940 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_105:
# 1942 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_106:
# 1945 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_107:
# 1953 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_108:
# 1954 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_109:
# 1957 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_110:
# 1963 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_111:
# 1965 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_112:
# 1967 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_113:
# 1970 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_114:
# 1978 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_115:
# 1980 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_116:
# 1983 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_117:
# 1992 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting prevents players from\n"
	.string "grinding by disabling experience gain\l"
	.string "from wild Pokémon.$"

EventScript_Settings_Text_118:
# 1994 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_119:
# 1996 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_120:
# 1999 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_121:
# 2007 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Lazy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_122:
# 2008 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Lazy{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_123:
# 2011 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Lazy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_124:
# 2017 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_125:
# 2019 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_126:
# 2021 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_127:
# 2024 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_128:
# 2032 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_129:
# 2033 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_130:
# 2036 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_131:
# 2042 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_132:
# 2044 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_133:
# 2046 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_134:
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_135:
# 2057 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_136:
# 2058 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_137:
# 2061 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_138:
# 2067 "data/scripts/battle_labyrinth.pory"
	.string "In some Zones, there are certain helper\n"
	.string "NPCs that can sell cheap items or heal\l"
	.string "the player's party.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these NPCs.$"

EventScript_Settings_Text_139:
# 2069 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_140:
# 2071 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_141:
# 2074 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_142:
# 2082 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_143:
# 2083 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_144:
# 2086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2106 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2107 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2107 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2107 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2107 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_MusicMenu_Text_5:
# 2115 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_6:
# 2118 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_7:
# 2121 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_8:
# 2124 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_9:
# 2127 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_10:
# 2130 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_11:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_12:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_13:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_14:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_15:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_16:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_17:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_18:
# 2157 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_19:
# 2160 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_20:
# 2163 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_21:
# 2166 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_22:
# 2169 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_23:
# 2172 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_24:
# 2188 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_25:
# 2199 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_26:
# 2202 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_27:
# 2205 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_28:
# 2208 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_29:
# 2211 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_30:
# 2214 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_31:
# 2230 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

Zone_EventScript_RetirePrompt_Text_0:
# 2464 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to retire your attempt at\n"
	.string "this Zone?\p"
	.string "You will lose all your progress so far\n"
	.string "and any money you received from\l"
	.string "trainers, as well as half of your\l"
	.string "remaining money.\p"
	.string "Are you sure you want to return to the\n"
	.string "Sanctuary?$"

Zone_EventScript_RetirePrompt_Text_1:
# 2474 "data/scripts/battle_labyrinth.pory"
	.string "Warping now…$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 2707 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2735 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

gText_Lelouch_NotEnoughColor::
# 689 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 693 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 891 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 895 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 899 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 903 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 907 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 911 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 915 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 919 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 923 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 927 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1305 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1513 "data/scripts/battle_labyrinth.pory"
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
# 1520 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1526 "data/scripts/battle_labyrinth.pory"
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
# 1533 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 1539 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1543 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2457 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2697 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2701 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
