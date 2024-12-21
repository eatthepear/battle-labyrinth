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


EventScript_MedicineSign::
# 35 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 40 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 45 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 50 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 55 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 60 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


EventScript_RecoverySign::
# 65 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 70 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


	.align 2
# 74 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 75 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

EventScript_Shop_Portentia::
# 79 "data/scripts/battle_labyrinth.pory"
	lock
# 80 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 81 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 85 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 89 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 90 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 91 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 92 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 93 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 94 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 96 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 97 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 98 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 100 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_13
# 101 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 102 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 104 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_14
# 105 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_14
# 106 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 107 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 108 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_14
# 109 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_14
# 110 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_14
# 111 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_14
# 112 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_14
# 113 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_14
# 114 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_14
# 115 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_14
# 116 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_14
# 117 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_14
EventScript_Shop_Portentia_9:
# 120 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 121 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 82 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 83 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 86 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 87 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 85 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 95 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 99 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_2
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 103 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 118 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Portentia_9


	.align 2
# 124 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 125 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 126 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 127 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 130 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 131 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 132 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 133 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 134 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 135 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 136 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 139 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 140 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 141 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 142 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 143 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 144 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 145 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 146 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 147 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 151 "data/scripts/battle_labyrinth.pory"
	lock
# 152 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 153 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 157 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 158 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 159 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 160 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 161 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 162 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 164 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 165 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 167 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 168 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 169 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_8
# 170 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_8
# 172 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_9
# 173 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_9
# 174 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_9
# 175 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_9
# 176 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_9
# 177 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_9
# 178 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_9
# 179 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_9
# 180 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_9
# 181 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_9
# 182 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_9
# 183 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_9
# 184 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_9
# 185 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_9
EventScript_Shop_Tim_4:
# 188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 189 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 154 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 155 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 163 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 166 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 171 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 186 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Tim_4


	.align 2
# 192 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 193 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 196 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_2:
# 197 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 198 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 201 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_3:
# 202 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 203 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 204 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 205 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 206 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 210 "data/scripts/battle_labyrinth.pory"
	lock
# 211 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 212 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 225 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 226 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 227 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 228 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 229 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 230 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 232 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 233 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 234 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 236 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 237 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 238 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 240 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 241 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 242 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_9
# 243 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_9
# 245 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_10
# 246 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_10
# 247 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_10
# 248 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_10
# 250 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_11
# 251 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_11
# 252 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_11
# 254 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_12
# 255 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_12
# 257 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_13
EventScript_Shop_Varrick_4:
# 264 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 265 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 223 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 231 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 235 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 239 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 244 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 249 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 253 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 256 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 258 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_14
# 258 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_14
# 261 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 259 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 268 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 272 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 278 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 289 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 300 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 315 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 352 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 375 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 406 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
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
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 444 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 478 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
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
	.2byte ITEM_NORMAL_GEM
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 539 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 594 "data/scripts/battle_labyrinth.pory"
	lock
# 595 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 596 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 602 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 603 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 604 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 605 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 606 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 607 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 609 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 610 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 611 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 612 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 614 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 615 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 616 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_8
# 617 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_8
# 618 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_8
# 619 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_8
# 620 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_8
# 621 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_8
# 622 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_8
# 623 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_8
# 624 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_8
# 625 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_8
# 626 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_8
# 627 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_8
# 628 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_8
# 629 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_8
EventScript_Shop_Julia_4:
# 632 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 633 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 597 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 600 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 608 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 613 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 630 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 636 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 640 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 651 "data/scripts/battle_labyrinth.pory"
	lock
# 652 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 653 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 661 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 662 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 663 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 654 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 659 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 667 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 668 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 669 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 670 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 671 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 700 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 672 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 677 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 681 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 682 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 683 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 686 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 9
# 687 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 688 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 689 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_19
# 696 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Marie_MainMenu_20
# 697 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_20
	return

EventScript_Shop_Marie_MainMenu_3:
# 701 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_10, MSGBOX_DEFAULT
# 702 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 705 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 674 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 672 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 703 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_11, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 678 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 684 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 690 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 691 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_9, MSGBOX_YESNO
# 692 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
	return

EventScript_Shop_Marie_MainMenu_20:
# 698 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_22:
# 693 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_Tier1Egg
	goto EventScript_Shop_Marie_MainMenu_21


EventScript_Shop_Marie_Tier1Egg::
# 710 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 711 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_2
# 716 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 717 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_5
EventScript_Shop_Marie_Tier1Egg_4:
# 737 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_Tier1Egg_8
EventScript_Shop_Marie_Tier1Egg_7:
# 740 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_14
EventScript_Shop_Marie_Tier1Egg_13:
# 744 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 745 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 746 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_3, MSGBOX_DEFAULT
# 747 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 748 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 0
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_19
# 748 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 20
	goto_if_gt EventScript_Shop_Marie_Tier1Egg_19
# 753 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 0
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_46
# 756 "data/scripts/battle_labyrinth.pory"
	subvar VAR_MARIE_TIER_1, 1
EventScript_Shop_Marie_Tier1Egg_18:
# 759 "data/scripts/battle_labyrinth.pory"
	switch VAR_MARIE_TIER_1
# 760 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_Tier1Egg_26
# 762 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_Tier1Egg_27
# 764 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_Tier1Egg_28
# 766 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Marie_Tier1Egg_29
# 768 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Marie_Tier1Egg_30
# 770 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Marie_Tier1Egg_31
# 772 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Marie_Tier1Egg_32
# 774 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Marie_Tier1Egg_33
# 776 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Marie_Tier1Egg_34
# 778 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Marie_Tier1Egg_35
# 780 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Marie_Tier1Egg_36
# 782 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Marie_Tier1Egg_37
# 784 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_Tier1Egg_38
# 786 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Marie_Tier1Egg_39
# 788 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Marie_Tier1Egg_40
# 790 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Marie_Tier1Egg_41
# 792 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Marie_Tier1Egg_42
# 794 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Marie_Tier1Egg_43
# 796 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Marie_Tier1Egg_44
# 798 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Marie_Tier1Egg_45
EventScript_Shop_Marie_Tier1Egg_24:
# 801 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 802 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_4, MSGBOX_DEFAULT
# 804 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 805 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_Tier1Egg_Text_5
# 806 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 807 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_Tier1Egg_2:
# 712 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_0
# 713 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_5:
# 718 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_1, MSGBOX_AUTOCLOSE
# 719 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 720 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 721 "data/scripts/battle_labyrinth.pory"
	waitstate
# 722 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 723 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 724 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_11
# 728 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 729 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 730 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 731 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_2, MSGBOX_YESNO
# 732 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_16
	goto EventScript_Shop_Marie_Tier1Egg_4

EventScript_Shop_Marie_Tier1Egg_8:
# 738 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_Tier1Egg_7

EventScript_Shop_Marie_Tier1Egg_11:
# 725 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_14:
# 741 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 742 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_Tier1Egg_13

EventScript_Shop_Marie_Tier1Egg_16:
# 733 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_19:
# 749 "data/scripts/battle_labyrinth.pory"
	random 20
# 750 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_MARIE_TIER_1, VAR_RESULT
# 751 "data/scripts/battle_labyrinth.pory"
	addvar VAR_MARIE_TIER_1, 1
	goto EventScript_Shop_Marie_Tier1Egg_18

EventScript_Shop_Marie_Tier1Egg_26:
# 761 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BURMY
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_27:
# 763 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BLIPBUG
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_28:
# 765 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SCATTERBUG
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_29:
# 767 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_COMBEE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_30:
# 769 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WURMPLE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_31:
# 771 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_32:
# 773 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_CACNEA
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_33:
# 775 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_34:
# 777 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_35:
# 779 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_36:
# 781 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_37:
# 783 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_38:
# 785 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_39:
# 787 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_40:
# 789 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_41:
# 791 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_42:
# 793 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_43:
# 795 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_44:
# 797 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_45:
# 799 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_46:
# 754 "data/scripts/battle_labyrinth.pory"
	setvar VAR_MARIE_TIER_1, 20
	goto EventScript_Shop_Marie_Tier1Egg_18


EventScript_Shop_Lelouch::
# 811 "data/scripts/battle_labyrinth.pory"
	lock
# 812 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 813 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 819 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 824 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 839 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 840 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 841 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 843 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 845 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 847 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 850 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 851 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 814 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 815 "data/scripts/battle_labyrinth.pory"
	delay 16
# 816 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 817 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 821 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 825 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 836 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 842 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 844 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 846 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 848 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 863 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 864 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 868 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 869 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 870 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 873 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 874 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 875 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 876 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 890 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1049 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1050 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 865 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 871 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 870 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 870 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 877 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 878 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 891 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 892 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 879 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 880 "data/scripts/battle_labyrinth.pory"
	waitstate
# 881 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 886 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 893 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 894 "data/scripts/battle_labyrinth.pory"
	waitstate
# 895 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 898 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 899 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 902 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 903 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 904 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 905 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 906 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 907 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 908 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 911 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 914 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 917 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 920 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 922 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 923 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 926 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 927 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 928 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 929 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 932 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 935 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 938 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 941 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 943 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 944 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 947 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 948 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 949 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 950 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 953 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 956 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 959 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 962 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 964 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 965 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 968 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 969 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 970 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 971 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 974 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 977 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 980 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 983 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 985 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 986 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 989 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 990 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 991 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 992 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 995 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 998 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1001 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1004 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1006 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1007 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1010 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1011 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1012 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1013 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1016 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1019 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1022 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1025 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1027 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1028 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1031 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1035 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1036 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1039 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1040 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1041 "data/scripts/battle_labyrinth.pory"
	waitse
# 1042 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1043 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1044 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 882 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 883 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 884 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 896 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 900 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 909 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 910 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 912 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 913 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 915 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 916 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 918 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 919 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 921 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 930 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 931 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 933 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 934 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 936 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 937 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 939 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 940 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 942 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 951 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 952 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 954 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 955 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 957 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 958 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 960 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 961 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 963 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 972 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 973 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 975 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 976 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 978 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 979 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 981 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 982 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 984 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 993 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 994 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 996 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 997 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 999 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1000 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1002 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1003 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1005 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1014 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1015 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1017 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1018 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1020 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1021 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1023 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1024 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1026 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1032 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1097 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1098 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1102 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_0, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Marie_MainMenu_Text_3
# 1103 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1104 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1106 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1108 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1109 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1099 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1105 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1107 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1115 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1116 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1120 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1121 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1122 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1123 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1126 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1127 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1131 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1135 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1136 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1137 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1138 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1141 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1142 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1128 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1132 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1149 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1150 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1154 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1151 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1159 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1160 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1196 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1197 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1198 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1199 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_8
# 1202 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_9
# 1205 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_10
# 1208 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_11
# 1211 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_12
# 1214 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_13
# 1217 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_14
# 1220 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_15
# 1223 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_16
# 1226 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_17
# 1304 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1305 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1308 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1309 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1310 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1313 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1314 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1315 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1318 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1319 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1161 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 1
# 1162 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 2
# 1163 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 3
# 1164 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 4
# 1165 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 5
# 1166 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 6
# 1167 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 7
# 1168 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 8
# 1169 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 9
# 1170 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 10
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1200 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1201 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1203 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1206 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1207 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1209 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1210 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1212 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1213 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1215 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1216 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1218 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1219 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1221 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1222 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1224 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1225 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1227 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1228 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1326 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1327 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1331 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1332 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1333 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1334 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1337 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1338 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1341 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1342 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1343 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1345 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1346 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1347 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1353 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1359 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1365 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1371 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1377 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1383 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1389 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1395 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1401 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1407 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1413 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1419 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1425 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1431 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1437 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1443 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1449 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1455 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1461 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1467 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1473 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1476 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1477 "data/scripts/battle_labyrinth.pory"
	waitse
# 1478 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1479 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1480 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1481 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1328 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1339 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1348 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1349 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1350 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1354 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1355 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1356 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1360 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1361 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1362 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1366 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1367 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1368 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1372 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1373 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1374 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1378 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1379 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1380 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1384 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1385 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1386 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1390 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1391 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1392 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1396 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1397 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1398 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1402 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1403 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1404 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1408 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1409 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1410 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1414 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1415 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1416 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1420 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1421 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1422 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1426 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1427 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1428 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1432 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1434 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1438 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1439 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1440 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1444 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1445 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1446 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1450 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1451 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1452 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1456 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1457 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1458 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1462 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1463 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1464 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1468 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1469 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1470 "data/scripts/battle_labyrinth.pory"
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
# 1492 "data/scripts/battle_labyrinth.pory"
	lock
# 1493 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1494 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1498 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1499 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1500 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1501 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1505 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1506 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1510 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1511 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1512 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1513 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1514 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1515 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1516 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1517 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1518 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1519 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1522 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1523 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1495 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1496 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1502 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1503 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1507 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1508 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_Shop_Alexander::
# 1528 "data/scripts/battle_labyrinth.pory"
	lock
# 1529 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1530 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1534 "data/scripts/battle_labyrinth.pory"
	lock
# 1535 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1536 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1540 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1540 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1541 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1542 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1543 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1544 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1545 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1546 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1549 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1551 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1547 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1559 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1560 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1561 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1562 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1565 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1567 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1563 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1571 "data/scripts/battle_labyrinth.pory"
	lock
# 1572 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1573 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1578 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1579 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1580 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1581 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Max_6
# 1583 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1585 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1587 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1589 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1592 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3
# 1593 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1574 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1575 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1576 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1582 "data/scripts/battle_labyrinth.pory"
	pokemart Zone3A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1584 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1586 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1588 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1590 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1596 "data/scripts/battle_labyrinth.pory"
Zone3A_Shop_TMShop:
# 1597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM01
	.2byte ITEM_NONE

	.align 2
# 1600 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1601 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM05
# 1602 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

	.align 2
# 1605 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1606 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1607 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1608 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
# 1609 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM12
	.2byte ITEM_NONE

	.align 2
# 1612 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1613 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1615 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1618 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1621 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1625 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1626 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0
# 1627 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1628 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1635 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1642 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1649 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1650 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1651 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1652 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_LeavingSetup_12
# 1654 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_LeavingSetup_13
# 1656 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_LeavingSetup_14
# 1658 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_LeavingSetup_15
# 1660 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_LeavingSetup_16
# 1662 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_LeavingSetup_17
# 1664 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_LeavingSetup_18
# 1666 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_LeavingSetup_19
# 1668 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_LeavingSetup_20
# 1670 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_LeavingSetup_21
# 1672 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_LeavingSetup_22
# 1674 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_LeavingSetup_23
# 1676 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_LeavingSetup_24
# 1678 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_LeavingSetup_25
# 1680 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_LeavingSetup_26
# 1682 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_LeavingSetup_27
# 1684 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_LeavingSetup_28
# 1686 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_LeavingSetup_29
# 1688 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_LeavingSetup_30
# 1690 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_LeavingSetup_31
# 1692 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_LeavingSetup_32
# 1694 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_LeavingSetup_33
EventScript_LeavingSetup_10:
	return

EventScript_LeavingSetup_2:
# 1629 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1630 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1631 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1632 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1633 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1636 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1637 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1638 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1639 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1640 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1643 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1644 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1645 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1646 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1647 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7

EventScript_LeavingSetup_12:
# 1653 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_13:
# 1655 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_14:
# 1657 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_15:
# 1659 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_16:
# 1661 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_17:
# 1663 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_18:
# 1665 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_19:
# 1667 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_20:
# 1669 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_21:
# 1671 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 24
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_22:
# 1673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 26
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_23:
# 1675 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 30
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_24:
# 1677 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 32
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_25:
# 1679 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 33
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_26:
# 1681 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 34
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_27:
# 1683 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 37
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_28:
# 1685 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 39
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_29:
# 1687 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 41
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_30:
# 1689 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 43
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_31:
# 1691 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 45
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_32:
# 1693 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 48
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_33:
# 1695 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 49
	goto EventScript_LeavingSetup_10


EventScript_WhenUReady::
# 1701 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1704 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1707 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1710 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1714 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1715 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1716 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1702 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1703 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1705 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1706 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1708 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1709 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1711 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1712 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1721 "data/scripts/battle_labyrinth.pory"
	lockall
# 1722 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1723 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1724 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1725 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1730 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1731 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1732 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1734 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1726 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1727 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1728 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 1738 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 1739 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 1777 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 1778 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1779 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 1781 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1784 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1786 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1789 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1791 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1794 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1796 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1799 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_24
# 1802 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 1804 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 1807 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 1809 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 1810 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 1810 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 1813 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 1815 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 1815 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 1818 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 1820 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 1820 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 1823 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 1825 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 1825 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 1828 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 1830 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 1830 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 1833 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 1835 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 1835 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 1838 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 1840 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 1840 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
# 1843 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 1845 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 1845 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 1848 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 1850 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 1850 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 1853 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 1855 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 1855 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 1858 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 1860 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 1861 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1862 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1863 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 1892 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 1928 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 1957 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2021 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2040 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2059 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2061 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2086 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2111 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2136 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2161 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2186 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2215 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2240 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2265 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2290 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2316 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2317 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 1780 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 1782 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 1785 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 1787 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 1790 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 1792 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 1795 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 1797 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 1800 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 1805 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 1811 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 1816 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 1821 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 1826 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 1831 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 1836 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 1841 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 1846 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 1851 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 1856 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 1864 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1865 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 1877 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 1880 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1881 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 1893 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1894 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 1904 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 1917 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1918 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 1929 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1930 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 1946 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1947 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 1958 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1959 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2006 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2009 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2010 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2022 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2023 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_SURVEIL, EventScript_Settings_122
# 2032 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_YESNO
# 2033 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2041 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_DEFAULT
# 2042 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2051 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2052 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2060 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_DEFAULT
# 2063 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2063 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2077 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_DEFAULT
# 2078 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_YESNO
# 2079 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2087 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_DEFAULT
# 2088 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2088 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2102 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_DEFAULT
# 2103 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_YESNO
# 2104 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2112 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_DEFAULT
# 2113 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2113 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2127 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_DEFAULT
# 2128 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_YESNO
# 2129 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2137 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_DEFAULT
# 2138 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2138 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2152 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_DEFAULT
# 2153 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_YESNO
# 2154 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2162 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_DEFAULT
# 2163 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2163 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2177 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_DEFAULT
# 2178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_YESNO
# 2179 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2187 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_DEFAULT
# 2188 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2188 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2202 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_DEFAULT
# 2203 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2212 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_DEFAULT
# 2217 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2217 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2231 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_DEFAULT
# 2232 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_YESNO
# 2233 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_DEFAULT
# 2242 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2242 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2256 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_DEFAULT
# 2257 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_YESNO
# 2258 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2266 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_DEFAULT
# 2267 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2267 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2281 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_DEFAULT
# 2282 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_YESNO
# 2283 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_DEFAULT
# 2292 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2292 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2306 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_DEFAULT
# 2307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_YESNO
# 2308 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2318 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2321 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 1866 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 1867 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 1895 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 1897 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 1900 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 1901 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 1931 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 1934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1935 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 1960 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 1994 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 1995 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2024 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_YESNO
# 2025 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2043 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_YESNO
# 2044 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2064 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2065 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2074 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2089 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2090 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2099 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2114 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2115 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2124 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2139 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2140 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2149 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2165 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2174 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2189 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2190 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2199 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2219 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2228 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2244 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2253 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2268 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2269 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2278 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2293 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2294 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2303 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 1868 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 1869 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 1878 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 1905 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1906 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 1896 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 1898 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 1932 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 1948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 1949 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 1961 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 1962 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 1963 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2007 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2026 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2027 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_DEFAULT
# 2028 "data/scripts/battle_labyrinth.pory"
	waitse
# 2029 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2034 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2035 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2036 "data/scripts/battle_labyrinth.pory"
	waitse
# 2037 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2045 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2046 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2047 "data/scripts/battle_labyrinth.pory"
	waitse
# 2048 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2053 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2054 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2055 "data/scripts/battle_labyrinth.pory"
	waitse
# 2056 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2066 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_YESNO
# 2067 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2080 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2081 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2082 "data/scripts/battle_labyrinth.pory"
	waitse
# 2083 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2091 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_YESNO
# 2092 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2105 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2106 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2107 "data/scripts/battle_labyrinth.pory"
	waitse
# 2108 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_YESNO
# 2117 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2130 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2131 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2132 "data/scripts/battle_labyrinth.pory"
	waitse
# 2133 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2141 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_YESNO
# 2142 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2155 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2156 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2157 "data/scripts/battle_labyrinth.pory"
	waitse
# 2158 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2166 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_YESNO
# 2167 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2180 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2181 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2182 "data/scripts/battle_labyrinth.pory"
	waitse
# 2183 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_YESNO
# 2192 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2204 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_YESNO
# 2205 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2220 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_YESNO
# 2221 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2234 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2235 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2236 "data/scripts/battle_labyrinth.pory"
	waitse
# 2237 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2245 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_YESNO
# 2246 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2259 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2260 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2261 "data/scripts/battle_labyrinth.pory"
	waitse
# 2262 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_YESNO
# 2271 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2284 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2285 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2286 "data/scripts/battle_labyrinth.pory"
	waitse
# 2287 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2295 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_YESNO
# 2296 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2309 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2310 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2311 "data/scripts/battle_labyrinth.pory"
	waitse
# 2312 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 1870 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1871 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 1872 "data/scripts/battle_labyrinth.pory"
	waitse
# 1873 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 1882 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 1883 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_268:
# 1907 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 1908 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_270:
# 1919 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 1920 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_272:
# 1936 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 1937 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_274:
# 1950 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1951 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1952 "data/scripts/battle_labyrinth.pory"
	waitse
# 1953 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1964 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1965 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1966 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1967 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1968 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1969 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1970 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1971 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1972 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1973 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1974 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1975 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1976 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1977 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1978 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1979 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1980 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1981 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1982 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1983 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1984 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1985 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1986 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1987 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1988 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1989 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1990 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 1991 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 1996 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 1997 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2011 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2012 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_282:
# 2068 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2069 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2070 "data/scripts/battle_labyrinth.pory"
	waitse
# 2071 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 2093 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2094 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2095 "data/scripts/battle_labyrinth.pory"
	waitse
# 2096 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_286:
# 2118 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2119 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2120 "data/scripts/battle_labyrinth.pory"
	waitse
# 2121 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_288:
# 2143 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2144 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2145 "data/scripts/battle_labyrinth.pory"
	waitse
# 2146 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2168 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2169 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2170 "data/scripts/battle_labyrinth.pory"
	waitse
# 2171 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2193 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2194 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2195 "data/scripts/battle_labyrinth.pory"
	waitse
# 2196 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2206 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2207 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2208 "data/scripts/battle_labyrinth.pory"
	waitse
# 2209 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2222 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2223 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2224 "data/scripts/battle_labyrinth.pory"
	waitse
# 2225 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2247 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2248 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2249 "data/scripts/battle_labyrinth.pory"
	waitse
# 2250 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2272 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2273 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2274 "data/scripts/battle_labyrinth.pory"
	waitse
# 2275 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2297 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2298 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2299 "data/scripts/battle_labyrinth.pory"
	waitse
# 2300 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_304:
# 1884 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1885 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 1886 "data/scripts/battle_labyrinth.pory"
	waitse
# 1887 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_306:
# 1909 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1910 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 1911 "data/scripts/battle_labyrinth.pory"
	waitse
# 1912 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1913 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_308:
# 1921 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1922 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 1923 "data/scripts/battle_labyrinth.pory"
	waitse
# 1924 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_310:
# 1938 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1939 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 1940 "data/scripts/battle_labyrinth.pory"
	waitse
# 1941 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_312:
# 1998 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1999 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2000 "data/scripts/battle_labyrinth.pory"
	waitse
# 2001 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2013 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2014 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2015 "data/scripts/battle_labyrinth.pory"
	waitse
# 2016 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2329 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2330 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2331 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_8
# 2332 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2333 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2375 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2417 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2459 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2460 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2334 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2335 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2376 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2377 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2418 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2419 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2336 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2337 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2340 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2343 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2346 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2349 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2352 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2356 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2357 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2358 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2360 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2362 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2364 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2366 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2368 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2371 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2378 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2379 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2382 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2385 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2388 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2391 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2394 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2398 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2399 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2400 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2402 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2404 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2406 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2408 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2410 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2413 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2420 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2421 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2424 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2427 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2430 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2433 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2436 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2440 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2441 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2442 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2444 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2446 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2448 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2450 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2452 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2455 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2338 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2339 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2341 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2342 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2344 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2345 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2347 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2348 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2350 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2351 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2354 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2380 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2381 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2383 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2384 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2386 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2387 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2389 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2390 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2392 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2393 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2396 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2422 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2423 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2425 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2426 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2428 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2429 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2431 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2432 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2434 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2435 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2438 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2359 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2361 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2363 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2367 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2370 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2372 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2401 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2403 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2405 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2407 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2409 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2412 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2414 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2443 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2445 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2447 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2449 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2451 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2454 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2456 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2467 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2468 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2469 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2470 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2471 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2472 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2473 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 2726 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 2727 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2728 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 2729 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2730 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 2738 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2739 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2740 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2741 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2749 "data/scripts/battle_labyrinth.pory"
	lock
# 2750 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2751 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2754 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2755 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2756 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2827 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2752 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2757 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2758 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2759 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2760 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2761 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2764 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2767 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2771 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2774 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2777 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2781 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2786 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2789 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2793 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2796 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2801 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2804 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2807 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2810 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2813 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2817 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2818 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2819 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2820 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2821 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2822 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2762 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2763 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2765 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 2766 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2768 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE3A_MAX
# 2769 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 2770 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2772 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 2773 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2775 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 2776 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2778 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2779 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 2780 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2782 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE7A_MAX
# 2783 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2784 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 2785 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2787 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 2788 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2790 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2791 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 2792 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2794 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 2795 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2797 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2798 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2799 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 2800 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2802 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 2803 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2805 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 2806 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2808 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 2809 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2811 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 2812 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2814 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2815 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 2816 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2823 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2824 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2831 "data/scripts/battle_labyrinth.pory"

# 2832 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2833 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2834 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 2838 "data/scripts/battle_labyrinth.pory"
	lockall
# 2839 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 2840 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 2845 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 2846 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2847 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 2848 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 2849 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 2850 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 2851 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 2852 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 2853 "data/scripts/battle_labyrinth.pory"
	waitstate
# 2854 "data/scripts/battle_labyrinth.pory"
	waitse
# 2855 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 2856 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 2858 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 2934 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 2841 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2842 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 2857 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 2859 "data/scripts/battle_labyrinth.pory"
	random 70
# 2860 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2861 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 2862 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 2863 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 2864 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 2865 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 2866 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 2867 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 2868 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 2869 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 2870 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 2871 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 2872 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 2873 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 2874 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 2875 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 2876 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 2877 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 2878 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 2879 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 2880 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 2883 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 2884 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 2885 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 2890 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 2891 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 2892 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 2897 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 2898 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 2899 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 2904 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 2905 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 2906 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 2911 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 2912 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 2913 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 2918 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 2919 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 2920 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 2921 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 2922 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 2927 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 2858 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 2881 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2882 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 2886 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 2893 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 2900 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 2907 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 2914 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 2923 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 2928 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 2887 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2888 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 2894 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2895 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 2901 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2902 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 2908 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2909 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 2915 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2916 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 2924 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2925 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 2929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2930 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_MedicineSign_Text_0:
# 35 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 40 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 45 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 50 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 55 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 60 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

EventScript_RecoverySign_Text_0:
# 65 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_ConsumablesSign_Text_0:
# 70 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Items\nA Fine Collection!$"

EventScript_Shop_Portentia_Text_0:
# 82 "data/scripts/battle_labyrinth.pory"
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
# 86 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 89 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 120 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 154 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 157 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 188 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 213 "data/scripts/battle_labyrinth.pory"
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
# 225 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 264 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 597 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 602 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 632 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 654 "data/scripts/battle_labyrinth.pory"
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
# 662 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 667 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 669 "data/scripts/battle_labyrinth.pory"
	.string "Available Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 669 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 669 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 678 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 681 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which tier would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 684 "data/scripts/battle_labyrinth.pory"
	.string "Tier 1 - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 686 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 691 "data/scripts/battle_labyrinth.pory"
	.string "For an egg in Tier 1, that will be ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 701 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here at Marie's Egg Delivery\n"
	.string "Service, we pair trainers with Pokémon\l"
	.string "Eggs.\p"
	.string "You can choose from a series of tiers,\n"
	.string "each one being more expensive but\l"
	.string "having more rare Pokémon available.\p"
	.string "You won't know what Pokémon you have\n"
	.string "until it hatches, but we do our best to\l"
	.string "make sure repeat customers don't end\l"
	.string "up with the same Pokémon twice.$"

EventScript_Shop_Marie_MainMenu_Text_11:
# 703 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_Tier1Egg_Text_0:
# 712 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_Tier1Egg_Text_1:
# 718 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_Tier1Egg_Text_2:
# 731 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_Tier1Egg_Text_3:
# 746 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_Tier1Egg_Text_4:
# 803 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_Tier1Egg_Text_5:
# 805 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 814 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 816 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 820 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 825 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I sense…\n"
	.string "The aura of Shards.\p"
	.string "There are four types of Shards:\n"
	.string "Red, Blue, Yellow, and Green,\l"
	.string "ranked by least to most rare.\p"
	.string "Each can be exchanged for a certain\n"
	.string "type of service I provide.\p"
	.string "Pokémon training costs Red Shards.\p"
	.string "Move Relearning and Move Tutoring cost\n"
	.string "Blue Shards.\p"
	.string "Pokémon improvements such as Nature,\n"
	.string "Ability, and IV changing cost Yellow\l"
	.string "Shards.\p"
	.string "Other services cost Green Shards.\p"
	.string "I hope they serve you well…$"

EventScript_Shop_Lelouch_Text_4:
# 838 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 839 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 839 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 839 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 839 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 850 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 868 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 869 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 871 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 900 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 906 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1102 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1102 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1115 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1120 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1128 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1132 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1135 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1154 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1159 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1161 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1162 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1163 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1164 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1165 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1166 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1167 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1168 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1169 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1170 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1309 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1313 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokemon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1331 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1339 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1344 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1349 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1355 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1361 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1373 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1379 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1385 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1391 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1397 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1403 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1409 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1415 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1421 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1427 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1433 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1439 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1445 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1451 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1457 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1463 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1469 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1496 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Recovery Shop,\n"
	.string "is my own!$"

EventScript_Shop_Joy_Text_1:
# 1498 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Recovery Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1500 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1507 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1512 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1518 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1522 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1544 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1574 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1575 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1578 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1592 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1626 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\nand your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 1724 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 1738 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 1777 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 1780 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 1782 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 1785 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 1787 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 1790 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 1792 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 1795 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 1797 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 1800 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Surveil$"

EventScript_Settings_Text_10:
# 1802 "data/scripts/battle_labyrinth.pory"
	.string "Full Surveil$"

EventScript_Settings_Text_11:
# 1805 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 1807 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 1809 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 1811 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 1813 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 1816 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 1818 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 1821 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 1823 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 1826 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 1828 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 1831 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 1833 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 1836 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 1838 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 1841 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 1843 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

EventScript_Settings_Text_28:
# 1846 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 1848 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 1851 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 1853 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 1856 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 1858 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 1866 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 1868 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 1871 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 1880 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1882 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 1885 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 1896 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 1898 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 1901 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 1905 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 1907 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 1910 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 1917 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 1919 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 1922 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 1932 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 1934 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 1936 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 1939 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 1946 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 1948 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 1951 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 1961 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 1962 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 1991 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 1994 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 1996 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 1999 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2009 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2011 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2014 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2022 "data/scripts/battle_labyrinth.pory"
	.string "In trainer battles, you can {COLOR RED}Surveil{COLOR DARK_GRAY} the\n"
	.string "opposing party to gain more\l"
	.string "information.$"

EventScript_Settings_Text_66:
# 2024 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently fully reveals all\n"
	.string "information about the opposing party.\p"
	.string "Would you like to decrease the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_67:
# 2027 "data/scripts/battle_labyrinth.pory"
	.string "Lowered the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will only be able to view the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.$"

EventScript_Settings_Text_68:
# 2032 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Surveil{COLOR DARK_GRAY} currently reveals only the\n"
	.string "opposing team's Pokémon and their\l"
	.string "health.\p"
	.string "Would you like to increase the amount\n"
	.string "of information it reveals?$"

EventScript_Settings_Text_69:
# 2035 "data/scripts/battle_labyrinth.pory"
	.string "Increased the power of {COLOR RED}Surveil{COLOR DARK_GRAY}.\p"
	.string "You will be able to fully view all\n"
	.string "information about the opposing party.$"

EventScript_Settings_Text_70:
# 2041 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_71:
# 2043 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_72:
# 2046 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_73:
# 2051 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_74:
# 2054 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_75:
# 2062 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_76:
# 2064 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_77:
# 2066 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_78:
# 2069 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_79:
# 2077 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_80:
# 2078 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_81:
# 2081 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_82:
# 2087 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_83:
# 2089 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_84:
# 2091 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_85:
# 2094 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_86:
# 2102 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_87:
# 2103 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_88:
# 2106 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_89:
# 2112 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_90:
# 2114 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_91:
# 2116 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_92:
# 2119 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_93:
# 2127 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_94:
# 2128 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_95:
# 2131 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_96:
# 2137 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_97:
# 2139 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_98:
# 2141 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_99:
# 2144 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_100:
# 2152 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_101:
# 2153 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_102:
# 2156 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_103:
# 2162 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_104:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_105:
# 2166 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_106:
# 2169 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_107:
# 2177 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_108:
# 2178 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_109:
# 2181 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_110:
# 2187 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_111:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_112:
# 2191 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_113:
# 2194 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_114:
# 2202 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_115:
# 2204 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_116:
# 2207 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_117:
# 2216 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_118:
# 2218 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_119:
# 2220 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_120:
# 2223 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_121:
# 2231 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_122:
# 2232 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_123:
# 2235 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_124:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_125:
# 2243 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_126:
# 2245 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_127:
# 2248 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_128:
# 2256 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_129:
# 2257 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_130:
# 2260 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_131:
# 2266 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_132:
# 2268 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_133:
# 2270 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_134:
# 2273 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_135:
# 2281 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_136:
# 2282 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_137:
# 2285 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_138:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_139:
# 2293 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_140:
# 2295 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_141:
# 2298 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_142:
# 2306 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_143:
# 2307 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_144:
# 2310 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2330 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2331 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2331 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2331 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2339 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2342 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2345 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2348 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2351 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2354 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2370 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2381 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2384 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2387 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2393 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2396 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2412 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2423 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2426 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2429 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2432 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2435 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2438 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2454 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 2727 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2755 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

EventScript_ShakeTree_Text_0:
# 2839 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 2845 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 2881 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

gText_Lelouch_NotEnoughColor::
# 854 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 858 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1056 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1060 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1064 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1068 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1072 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1076 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1080 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1084 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1088 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1092 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1487 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1742 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode enables all of the\n"
	.string "increased difficulty modes at the same\l"
	.string "time.\p"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode can only be enabled at the\n"
	.string "beginning of the game, but can be\l"
	.string "disabled at any point.\p"
	.string "It is not recommended to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

gText_Colress_RandomizerExplanation::
# 1748 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1754 "data/scripts/battle_labyrinth.pory"
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
# 1761 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 1767 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 1771 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2477 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2721 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
