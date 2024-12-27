EventScript_EnterSanctuary::
# 2 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 3 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE_PC_USED
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


EventScript_MedicineSign::
# 34 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 39 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 44 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 49 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 54 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 59 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


EventScript_RecoverySign::
# 64 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 69 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


	.align 2
# 73 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 74 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

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
# 99 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_13
# 100 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 101 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 103 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_14
# 104 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_14
# 105 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 106 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 107 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_14
# 108 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_14
# 109 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_14
# 110 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_14
# 111 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_14
# 112 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_14
# 113 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_14
# 114 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_14
# 115 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_14
# 116 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_14
EventScript_Shop_Portentia_9:
# 119 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 120 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 81 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 82 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 85 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 86 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 84 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 94 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 98 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_2
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 102 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 117 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
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

	.align 2
# 129 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 130 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 131 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 132 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 133 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 134 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 135 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 138 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 139 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 140 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 141 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 142 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 143 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 144 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 145 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 146 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 150 "data/scripts/battle_labyrinth.pory"
	lock
# 151 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 152 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 156 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 157 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 158 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 159 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 160 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 161 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 163 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 164 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 166 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 167 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 169 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_9
# 170 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_9
# 172 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_10
# 173 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_10
# 174 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_10
# 175 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_10
# 176 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 177 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 178 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 179 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 180 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 181 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 182 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 183 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 184 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 185 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_10
EventScript_Shop_Tim_4:
# 188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 189 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 153 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 154 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 162 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 165 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 168 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 171 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
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

	.align 2
# 209 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_4:
# 210 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 211 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 212 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 213 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 214 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 215 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 216 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 220 "data/scripts/battle_labyrinth.pory"
	lock
# 221 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 222 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 235 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 236 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 237 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 238 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 239 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 240 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 242 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 243 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 244 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 246 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 247 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 248 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 250 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 251 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 252 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_9
# 253 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_9
# 255 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_10
# 256 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_10
# 257 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_10
# 258 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_10
# 260 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_11
# 261 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_11
# 262 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_11
# 264 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_12
# 265 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_12
# 267 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_13
EventScript_Shop_Varrick_4:
# 274 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 275 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 223 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 233 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 241 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 245 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 249 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 254 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 259 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 263 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 266 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 268 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_14
# 268 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_14
# 271 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 269 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 278 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 282 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 288 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 299 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 310 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 325 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 362 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 385 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 416 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 454 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 488 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 549 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 595 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 596 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 600 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 604 "data/scripts/battle_labyrinth.pory"
	lock
# 605 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 606 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 612 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 613 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 614 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 615 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 616 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 617 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 619 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 620 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 621 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 622 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 624 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 625 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 627 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_9
# 628 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_9
# 629 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_9
# 630 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_9
# 631 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_9
# 632 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_9
# 633 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_9
# 634 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_9
# 635 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_9
# 636 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_9
# 637 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_9
# 638 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_9
# 639 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_9
# 640 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_9
EventScript_Shop_Julia_4:
# 643 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 644 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 607 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 610 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 618 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 623 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 626 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_3
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_9:
# 641 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 647 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 651 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 656 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 657 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 658 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 661 "data/scripts/battle_labyrinth.pory"
Shop_Berries_3:
# 662 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 668 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 669 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 673 "data/scripts/battle_labyrinth.pory"
	lock
# 674 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 675 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 683 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 684 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 685 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 676 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 681 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 689 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 690 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 691 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 692 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 693 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 722 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 694 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 699 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 703 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 704 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 705 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 708 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 9
# 709 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 710 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 711 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_19
# 718 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Marie_MainMenu_20
# 719 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_20
	return

EventScript_Shop_Marie_MainMenu_3:
# 723 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_10, MSGBOX_DEFAULT
# 724 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 727 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 696 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 694 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 725 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_11, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 700 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 706 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 712 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 713 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_9, MSGBOX_YESNO
# 714 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
	return

EventScript_Shop_Marie_MainMenu_20:
# 720 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_22:
# 715 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_Tier1Egg
	goto EventScript_Shop_Marie_MainMenu_21


EventScript_Shop_Marie_Tier1Egg::
# 732 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 733 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_2
# 738 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 739 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_5
EventScript_Shop_Marie_Tier1Egg_4:
# 759 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_Tier1Egg_8
EventScript_Shop_Marie_Tier1Egg_7:
# 762 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_14
EventScript_Shop_Marie_Tier1Egg_13:
# 766 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 767 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 768 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_3, MSGBOX_DEFAULT
# 769 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 770 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 0
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_19
# 770 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 20
	goto_if_gt EventScript_Shop_Marie_Tier1Egg_19
# 775 "data/scripts/battle_labyrinth.pory"
	compare VAR_MARIE_TIER_1, 0
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_46
# 778 "data/scripts/battle_labyrinth.pory"
	subvar VAR_MARIE_TIER_1, 1
EventScript_Shop_Marie_Tier1Egg_18:
# 781 "data/scripts/battle_labyrinth.pory"
	switch VAR_MARIE_TIER_1
# 782 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_Tier1Egg_26
# 784 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_Tier1Egg_27
# 786 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_Tier1Egg_28
# 788 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Marie_Tier1Egg_29
# 790 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Marie_Tier1Egg_30
# 792 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Marie_Tier1Egg_31
# 794 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Marie_Tier1Egg_32
# 796 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Marie_Tier1Egg_33
# 798 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Marie_Tier1Egg_34
# 800 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Marie_Tier1Egg_35
# 802 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Marie_Tier1Egg_36
# 804 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Marie_Tier1Egg_37
# 806 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_Tier1Egg_38
# 808 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Marie_Tier1Egg_39
# 810 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Marie_Tier1Egg_40
# 812 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Marie_Tier1Egg_41
# 814 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Marie_Tier1Egg_42
# 816 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Marie_Tier1Egg_43
# 818 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Marie_Tier1Egg_44
# 820 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Marie_Tier1Egg_45
EventScript_Shop_Marie_Tier1Egg_24:
# 823 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 824 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 825 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_4, MSGBOX_DEFAULT
# 826 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 827 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_Tier1Egg_Text_5
# 828 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 829 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_Tier1Egg_2:
# 734 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_0
# 735 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_5:
# 740 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_1, MSGBOX_AUTOCLOSE
# 741 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 742 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 743 "data/scripts/battle_labyrinth.pory"
	waitstate
# 744 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 745 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 746 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_11
# 750 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 751 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 752 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 753 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Tier1Egg_Text_2, MSGBOX_YESNO
# 754 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_Tier1Egg_16
	goto EventScript_Shop_Marie_Tier1Egg_4

EventScript_Shop_Marie_Tier1Egg_8:
# 760 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_Tier1Egg_7

EventScript_Shop_Marie_Tier1Egg_11:
# 747 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_14:
# 763 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 764 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_Tier1Egg_13

EventScript_Shop_Marie_Tier1Egg_16:
# 755 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_Tier1Egg_19:
# 771 "data/scripts/battle_labyrinth.pory"
	random 20
# 772 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_MARIE_TIER_1, VAR_RESULT
# 773 "data/scripts/battle_labyrinth.pory"
	addvar VAR_MARIE_TIER_1, 1
	goto EventScript_Shop_Marie_Tier1Egg_18

EventScript_Shop_Marie_Tier1Egg_26:
# 783 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BURMY
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_27:
# 785 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BLIPBUG
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_28:
# 787 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SCATTERBUG
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_29:
# 789 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_COMBEE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_30:
# 791 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WURMPLE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_31:
# 793 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_32:
# 795 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_CACNEA
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_33:
# 797 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SUNKERN
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_34:
# 799 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOLIV
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_35:
# 801 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BOUNSWEET
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_36:
# 803 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_37:
# 805 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SLUGMA
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_38:
# 807 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SALANDIT
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_39:
# 809 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VULPIX
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_40:
# 811 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SIZZLIPEDE
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_41:
# 813 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_42:
# 815 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_BARBOACH
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_43:
# 817 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_FINNEON
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_44:
# 819 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SEEL
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_45:
# 821 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_GOLDEEN
	goto EventScript_Shop_Marie_Tier1Egg_24

EventScript_Shop_Marie_Tier1Egg_46:
# 776 "data/scripts/battle_labyrinth.pory"
	setvar VAR_MARIE_TIER_1, 20
	goto EventScript_Shop_Marie_Tier1Egg_18


EventScript_Shop_Lelouch::
# 833 "data/scripts/battle_labyrinth.pory"
	lock
# 834 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 835 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 841 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 846 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 860 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 861 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 862 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 863 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 865 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 867 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 869 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 872 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 873 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 836 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 837 "data/scripts/battle_labyrinth.pory"
	delay 16
# 838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 839 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 842 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 843 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 858 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 864 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 866 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 868 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 870 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 885 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 886 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 890 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 891 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 892 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 895 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 896 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 897 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 898 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 912 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1071 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1072 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 887 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 893 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 892 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 892 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 899 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 900 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 913 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 914 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 901 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 902 "data/scripts/battle_labyrinth.pory"
	waitstate
# 903 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 908 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 915 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 916 "data/scripts/battle_labyrinth.pory"
	waitstate
# 917 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 920 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 921 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 924 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 925 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 926 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 927 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 928 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 929 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 930 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 933 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 936 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 939 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 942 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 944 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 945 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 948 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 949 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 950 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 951 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 954 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 957 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 960 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 963 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 965 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 966 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 969 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 970 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 971 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 972 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 975 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 978 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 981 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 984 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 986 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 987 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 990 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 991 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 992 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 993 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 996 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 999 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1002 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1005 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1007 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1008 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1011 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1012 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1013 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1014 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1017 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1020 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1023 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1026 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1028 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1029 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1032 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1033 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1034 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1035 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1038 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1041 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1044 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1047 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1049 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1050 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1053 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1057 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1058 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1061 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1062 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1063 "data/scripts/battle_labyrinth.pory"
	waitse
# 1064 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1065 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1066 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 904 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 905 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 906 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 918 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 922 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 931 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 932 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 934 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 935 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 937 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 938 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 940 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 941 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 943 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 952 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 953 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 955 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 956 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 958 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 959 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 961 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 962 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 964 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 973 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 974 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 976 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 977 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 979 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 980 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 982 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 983 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 985 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 994 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 995 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 997 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 998 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1000 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1001 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1003 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1004 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1006 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1015 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1016 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1018 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1019 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1021 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1022 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1024 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1025 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1027 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1036 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1037 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1039 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1040 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1042 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1043 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1045 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1046 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1048 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1054 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1119 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1120 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1124 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_0, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Marie_MainMenu_Text_3
# 1125 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1126 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1128 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1130 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1131 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1121 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1127 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1129 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1137 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1138 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1142 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1143 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1144 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1145 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1148 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1149 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1153 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1157 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1158 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1159 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1160 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1163 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1164 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1154 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1171 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1172 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1176 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1173 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1181 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1182 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1218 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1219 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1220 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1221 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_8
# 1224 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_9
# 1227 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_10
# 1230 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_11
# 1233 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_12
# 1236 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_13
# 1239 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_14
# 1242 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_15
# 1245 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_16
# 1248 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_17
# 1326 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1327 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1330 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1331 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1332 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1336 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1337 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1340 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1341 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1183 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 1
# 1184 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 2
# 1185 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 3
# 1186 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 4
# 1187 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 5
# 1188 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 6
# 1189 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 7
# 1190 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 8
# 1191 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 9
# 1192 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 10
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1222 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1223 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1225 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1226 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1228 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1229 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1231 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1234 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1235 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1237 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1238 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1240 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1241 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1243 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1244 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1246 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1247 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1249 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1250 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1348 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1349 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1353 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1354 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1355 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1356 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1359 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1360 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1363 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1364 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1365 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1366 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1367 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1368 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1369 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1375 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1381 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1387 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1393 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1399 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1405 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1411 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1417 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1423 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1429 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1435 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1441 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1447 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1453 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1459 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1465 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1471 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1477 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1483 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1489 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1495 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1498 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1499 "data/scripts/battle_labyrinth.pory"
	waitse
# 1500 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1501 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1502 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1503 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1350 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1361 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1370 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1371 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1372 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1376 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1377 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1378 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1382 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1383 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1384 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1388 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1389 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1390 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1394 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1395 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1396 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1400 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1401 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1402 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1406 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1407 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1408 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1412 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1413 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1414 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1418 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1419 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1420 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1424 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1425 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1426 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1430 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1431 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1432 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1436 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1437 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1438 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1442 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1443 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1444 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1448 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1449 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1450 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1454 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1455 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1456 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1460 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1461 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1462 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1467 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1468 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1472 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1473 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1474 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1478 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1479 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1480 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1484 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1485 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1486 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1491 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1492 "data/scripts/battle_labyrinth.pory"
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
# 1514 "data/scripts/battle_labyrinth.pory"
	lock
# 1515 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1516 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1520 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
# 1521 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1522 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_YESNO
# 1523 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_5
# 1527 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1528 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_8
# 1532 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1533 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1535 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1536 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1537 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1538 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1539 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1540 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5, MSGBOX_DEFAULT
# 1541 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_4:
# 1544 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1545 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1517 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1518 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1524 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1525 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_8:
# 1529 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3
# 1530 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_4


EventScript_Shop_Alexander::
# 1550 "data/scripts/battle_labyrinth.pory"
	lock
# 1551 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1552 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1556 "data/scripts/battle_labyrinth.pory"
	lock
# 1557 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1558 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1562 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1562 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1563 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1564 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1565 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1566 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1567 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1568 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1571 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1573 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1569 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1581 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1582 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1583 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1584 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1587 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1589 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1585 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1593 "data/scripts/battle_labyrinth.pory"
	lock
# 1594 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1595 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1600 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1601 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1602 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1603 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Max_6
# 1605 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1607 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1609 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1611 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1614 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3, MSGBOX_AUTOCLOSE
# 1615 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1596 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1597 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1598 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1604 "data/scripts/battle_labyrinth.pory"
	pokemart Zone2A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1606 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1608 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1610 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1612 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1618 "data/scripts/battle_labyrinth.pory"
Zone2A_Shop_TMShop:
# 1619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

	.align 2
# 1622 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1623 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_TRAILBLAZE
# 1624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_FLAME_CHARGE
# 1625 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 1626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

	.align 2
# 1629 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
# 1633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM12
	.2byte ITEM_NONE

	.align 2
# 1636 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1642 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1649 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1650 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0, MSGBOX_AUTOCLOSE
# 1651 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1652 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1659 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1666 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1673 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1674 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1675 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1676 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_LeavingSetup_12
# 1678 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_LeavingSetup_13
# 1680 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_LeavingSetup_14
# 1682 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_LeavingSetup_15
# 1684 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_LeavingSetup_16
# 1686 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_LeavingSetup_17
# 1688 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_LeavingSetup_18
# 1690 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_LeavingSetup_19
# 1692 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_LeavingSetup_20
# 1694 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_LeavingSetup_21
# 1696 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_LeavingSetup_22
# 1698 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_LeavingSetup_23
# 1700 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_LeavingSetup_24
# 1702 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_LeavingSetup_25
# 1704 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_LeavingSetup_26
# 1706 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_LeavingSetup_27
# 1708 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_LeavingSetup_28
# 1710 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_LeavingSetup_29
# 1712 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_LeavingSetup_30
# 1714 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_LeavingSetup_31
# 1716 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_LeavingSetup_32
# 1718 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_LeavingSetup_33
EventScript_LeavingSetup_10:
	return

EventScript_LeavingSetup_2:
# 1653 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1654 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1655 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1656 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1657 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1660 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1661 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1662 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1663 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1664 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1667 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1668 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1669 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1670 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1671 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7

EventScript_LeavingSetup_12:
# 1677 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_13:
# 1679 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_14:
# 1681 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_15:
# 1683 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_16:
# 1685 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_17:
# 1687 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_18:
# 1689 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_19:
# 1691 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_20:
# 1693 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_21:
# 1695 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 24
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_22:
# 1697 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 26
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_23:
# 1699 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 30
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_24:
# 1701 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 32
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_25:
# 1703 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 33
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_26:
# 1705 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 34
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_27:
# 1707 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 37
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_28:
# 1709 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 39
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_29:
# 1711 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 41
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_30:
# 1713 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 43
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_31:
# 1715 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 45
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_32:
# 1717 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 48
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_33:
# 1719 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 49
	goto EventScript_LeavingSetup_10


EventScript_WhenUReady::
# 1725 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1728 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1731 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1734 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1738 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1739 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1740 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1726 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1727 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1729 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1730 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1732 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1733 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1735 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1736 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 1745 "data/scripts/battle_labyrinth.pory"
	lockall
# 1746 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1747 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1748 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1749 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1754 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1755 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1756 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1758 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1750 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1751 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1752 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 1762 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 1763 "data/scripts/battle_labyrinth.pory"
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
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 1808 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 1810 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 1813 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 1815 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 1818 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 1820 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 1823 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_24
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
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
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
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 1885 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1886 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1887 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 1916 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 1952 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 1981 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2045 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2074 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2093 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2095 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2120 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2145 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2170 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2195 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2220 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2249 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2274 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2299 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2324 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2350 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2351 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
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
# 1888 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 1889 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 1901 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 1904 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 1905 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 1917 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 1918 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 1928 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 1941 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 1942 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 1953 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 1954 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 1970 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 1971 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 1982 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 1983 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2030 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2033 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2034 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2046 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2047 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_122
# 2061 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2063 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2075 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2076 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2085 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_YESNO
# 2086 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2094 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2097 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2097 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2111 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2112 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_YESNO
# 2113 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2121 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2122 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2122 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2136 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2137 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_YESNO
# 2138 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2147 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2147 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2161 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2162 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_YESNO
# 2163 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2171 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2172 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2172 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2186 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2187 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_YESNO
# 2188 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2196 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2197 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2197 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2211 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2212 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_YESNO
# 2213 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2222 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2222 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2236 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2237 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2246 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2250 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2251 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2251 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2265 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2266 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_YESNO
# 2267 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2275 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2276 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2276 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_YESNO
# 2292 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2300 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2301 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2301 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2315 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2316 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_YESNO
# 2317 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2325 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2326 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2326 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2340 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2341 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_YESNO
# 2342 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2352 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2355 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 1890 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 1891 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 1919 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 1921 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 1924 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 1925 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 1955 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 1958 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 1959 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 1984 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 2018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2019 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2048 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2049 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2050 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2077 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2078 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2098 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2099 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2108 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2123 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2124 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2133 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2148 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2149 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2158 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2173 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2174 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2198 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2199 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2208 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2223 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2224 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2233 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2252 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2253 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2262 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2277 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2278 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2287 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2302 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2303 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2312 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2327 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2328 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2337 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 1892 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 1893 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 1902 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 1929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 1930 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 1920 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 1922 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 1956 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 1972 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 1973 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 1985 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 1986 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 1987 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2031 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2051 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2052 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2053 "data/scripts/battle_labyrinth.pory"
	waitse
# 2054 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_INFO
# 2055 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2064 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2065 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2066 "data/scripts/battle_labyrinth.pory"
	waitse
# 2067 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_INFO
# 2068 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2079 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2080 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2081 "data/scripts/battle_labyrinth.pory"
	waitse
# 2082 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2087 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2088 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2089 "data/scripts/battle_labyrinth.pory"
	waitse
# 2090 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2100 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2101 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2114 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2115 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2116 "data/scripts/battle_labyrinth.pory"
	waitse
# 2117 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2125 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2126 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2139 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2140 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2141 "data/scripts/battle_labyrinth.pory"
	waitse
# 2142 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2151 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2164 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2165 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2166 "data/scripts/battle_labyrinth.pory"
	waitse
# 2167 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2175 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2176 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2189 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2190 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2191 "data/scripts/battle_labyrinth.pory"
	waitse
# 2192 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2200 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2201 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2214 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2215 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2216 "data/scripts/battle_labyrinth.pory"
	waitse
# 2217 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2226 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2238 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_YESNO
# 2239 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2254 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2255 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2268 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2269 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2270 "data/scripts/battle_labyrinth.pory"
	waitse
# 2271 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2280 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2293 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2294 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2295 "data/scripts/battle_labyrinth.pory"
	waitse
# 2296 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2305 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2318 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2319 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2320 "data/scripts/battle_labyrinth.pory"
	waitse
# 2321 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2329 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2330 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2343 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
# 2345 "data/scripts/battle_labyrinth.pory"
	waitse
# 2346 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 1894 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1895 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 1896 "data/scripts/battle_labyrinth.pory"
	waitse
# 1897 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 1906 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 1907 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_268:
# 1931 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 1932 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_270:
# 1943 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 1944 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_272:
# 1960 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 1961 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_274:
# 1974 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1975 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 1976 "data/scripts/battle_labyrinth.pory"
	waitse
# 1977 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 1988 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1989 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 1990 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
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
	additem ITEM_MAX_ELIXIR, 100
# 1998 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 1999 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
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
	additem ITEM_MAX_REPEL, 100
# 2007 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2008 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
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
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 2020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 2021 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2035 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2036 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_282:
# 2056 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DEXNAV_GET
# 2057 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 2069 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 2070 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_286:
# 2102 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2103 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2104 "data/scripts/battle_labyrinth.pory"
	waitse
# 2105 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_288:
# 2127 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2128 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2129 "data/scripts/battle_labyrinth.pory"
	waitse
# 2130 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2152 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2153 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2154 "data/scripts/battle_labyrinth.pory"
	waitse
# 2155 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2177 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2179 "data/scripts/battle_labyrinth.pory"
	waitse
# 2180 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2202 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2203 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2204 "data/scripts/battle_labyrinth.pory"
	waitse
# 2205 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2227 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2228 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2229 "data/scripts/battle_labyrinth.pory"
	waitse
# 2230 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2240 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2242 "data/scripts/battle_labyrinth.pory"
	waitse
# 2243 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2256 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2257 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2258 "data/scripts/battle_labyrinth.pory"
	waitse
# 2259 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2281 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2282 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2283 "data/scripts/battle_labyrinth.pory"
	waitse
# 2284 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2306 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2308 "data/scripts/battle_labyrinth.pory"
	waitse
# 2309 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2331 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2332 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2333 "data/scripts/battle_labyrinth.pory"
	waitse
# 2334 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_308:
# 1908 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1909 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 1910 "data/scripts/battle_labyrinth.pory"
	waitse
# 1911 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_310:
# 1933 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 1935 "data/scripts/battle_labyrinth.pory"
	waitse
# 1936 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 1937 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_312:
# 1945 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 1946 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 1947 "data/scripts/battle_labyrinth.pory"
	waitse
# 1948 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 1962 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 1963 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 1964 "data/scripts/battle_labyrinth.pory"
	waitse
# 1965 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2022 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2023 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2024 "data/scripts/battle_labyrinth.pory"
	waitse
# 2025 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_318:
# 2037 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2038 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2039 "data/scripts/battle_labyrinth.pory"
	waitse
# 2040 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2363 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2364 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2365 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_8
# 2366 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2367 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2409 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2451 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2493 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2494 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2368 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2369 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2410 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2411 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2452 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2453 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2370 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2371 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2374 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2377 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2380 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2383 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2386 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2390 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2391 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2392 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2394 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2396 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2398 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2400 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2402 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2405 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2412 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2413 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2416 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2419 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2422 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2425 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2428 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2432 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2433 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2434 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2436 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2438 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2440 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2442 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2444 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2447 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2454 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2455 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2458 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2461 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2464 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2467 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2470 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2474 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2475 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2476 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2478 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2480 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2482 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2484 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2486 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2489 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2372 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2373 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2375 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2376 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2378 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2379 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2381 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2382 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2384 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2385 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2388 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2414 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2415 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2417 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2418 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2420 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2421 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2423 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2424 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2426 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2427 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2430 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2456 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2457 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2459 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2460 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2462 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2463 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2465 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2466 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2468 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2469 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2472 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2393 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2395 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2397 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2399 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2401 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2404 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2406 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2435 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2439 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2441 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2443 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2446 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2448 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2477 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2479 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2481 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2483 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2485 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2488 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_WarpZone0::
# 2501 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2502 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2503 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2504 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2505 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2506 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2507 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 2760 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 2761 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2762 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 2763 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 2764 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 2772 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 2773 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 2774 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 2775 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 2783 "data/scripts/battle_labyrinth.pory"
	lock
# 2784 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2785 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 2788 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 2789 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 2790 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 2860 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 2786 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 2791 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2792 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2793 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2794 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 2795 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 2798 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 2801 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 2805 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 2808 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 2811 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 2815 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 2819 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 2822 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 2826 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 2829 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 2834 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 2837 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 2840 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 2843 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 2846 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 2850 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 2851 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 2852 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 2853 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 2854 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 2855 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 2796 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2797 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 2799 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 2800 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 2802 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 2803 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 2804 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 2806 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 2807 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 2809 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 2810 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 2812 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 2813 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 2814 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 2816 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 2817 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 2818 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 2820 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 2821 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 2823 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 2824 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 2825 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 2827 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 2828 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 2830 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 2831 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 2832 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 2833 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 2835 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 2836 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 2838 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 2839 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 2841 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 2842 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 2844 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 2845 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 2847 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 2848 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 2849 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 2856 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 2857 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 2864 "data/scripts/battle_labyrinth.pory"

# 2865 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 2866 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 2867 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 2871 "data/scripts/battle_labyrinth.pory"
	lockall
# 2872 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 2873 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 2878 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 2879 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2880 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 2881 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 2882 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 2883 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 2884 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 2885 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 2886 "data/scripts/battle_labyrinth.pory"
	waitstate
# 2887 "data/scripts/battle_labyrinth.pory"
	waitse
# 2888 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 2889 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 2891 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 2967 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 2874 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2875 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 2890 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 2892 "data/scripts/battle_labyrinth.pory"
	random 70
# 2893 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2894 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 2895 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 2896 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 2897 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 2898 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 2899 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 2900 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 2901 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 2902 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 2903 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 2904 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 2905 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 2906 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 2907 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 2908 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 2909 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 2910 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 2911 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 2912 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 2913 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 2916 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 2917 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 2918 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 2923 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 2924 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 2925 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 2930 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 2931 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 2932 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 2937 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 2938 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 2939 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 2944 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 2945 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 2946 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 2951 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 2952 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 2953 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 2954 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 2955 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 2960 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 2891 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 2914 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2915 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 2919 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 2926 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 2933 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 2940 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 2947 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 2956 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 2961 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 2920 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2921 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 2927 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2928 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 2934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2935 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 2941 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2942 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 2948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2949 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 2957 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2958 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 2962 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 2963 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_HandleFlashlight::
	checkitem ITEM_FLASHLIGHT
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 2975 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 2973 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


Debug_CheatStart_PBL::
# 2982 "data/scripts/battle_labyrinth.pory"
	random 5
# 2983 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2984 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_3
# 2986 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_4
# 2988 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_5
# 2990 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_6
# 2992 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_7
Debug_CheatStart_PBL_1:
# 2995 "data/scripts/battle_labyrinth.pory"
	random 5
# 2996 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2997 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_10
# 2999 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_11
# 3001 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_12
# 3003 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_13
# 3005 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_14
Debug_CheatStart_PBL_8:
# 3008 "data/scripts/battle_labyrinth.pory"
	random 5
# 3009 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3010 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_17
# 3012 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_18
# 3014 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_19
# 3016 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_20
# 3018 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_21
Debug_CheatStart_PBL_15:
# 3021 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RARE_CANDY, 900
# 3022 "data/scripts/battle_labyrinth.pory"
	removemoney 2000
# 3023 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 6
# 3024 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3025 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3026 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
# 3027 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 3028 "data/scripts/battle_labyrinth.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 3030 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WAILMER_PAIL
# 3031 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 2
# 3033 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
# 3034 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_0, MSGBOX_YESNO
# 3035 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_23
Debug_CheatStart_PBL_22:
# 3038 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 3039 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3041 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_1
# 3042 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3043 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3044 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_27
# 3046 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_28
# 3049 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_29
Debug_CheatStart_PBL_25:
# 3057 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3059 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_4
# 3060 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_5, Debug_CheatStart_PBL_Text_6
# 3061 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3062 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_32
# 3076 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_33
# 3090 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_34
Debug_CheatStart_PBL_30:
# 3105 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3106 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3107 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 3109 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_CLAW
# 3110 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EXP_SHARE
# 3111 "data/scripts/battle_labyrinth.pory"
	additem ITEM_INFINITE_REPEL
# 3113 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_7
# 3114 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_8, Debug_CheatStart_PBL_Text_9, Debug_CheatStart_PBL_Text_10
# 3115 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3116 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_37
# 3118 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_38
# 3120 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_39
# 3122 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_40
Debug_CheatStart_PBL_35:
# 3130 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3131 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3133 "data/scripts/battle_labyrinth.pory"
	random 10
# 3134 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3135 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_61
# 3137 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_62
# 3139 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_63
# 3141 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_64
# 3143 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_65
# 3145 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_66
# 3147 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_67
# 3149 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_68
# 3151 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_69
# 3153 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_70
Debug_CheatStart_PBL_59:
# 3156 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 6
# 3157 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3158 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
# 3160 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILK_SCARF
# 3161 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BUG_BITE
# 3162 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 5
# 3163 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHERI_BERRY, 2
# 3164 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHESTO_BERRY, 2
# 3165 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RAWST_BERRY, 2
# 3166 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ASPEAR_BERRY, 2
# 3167 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PECHA_BERRY, 2
# 3168 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 3169 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_SEARCH
# 3171 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_11
# 3172 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3173 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3174 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_73
# 3176 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_74
# 3179 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_75
Debug_CheatStart_PBL_71:
# 3187 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 7
# 3188 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3190 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GOOD_ROD
# 3192 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_12
# 3193 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17
# 3194 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3195 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_78
# 3197 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_79
# 3199 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_80
# 3201 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_81
# 3203 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_82
# 3205 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_83
Debug_CheatStart_PBL_76:
# 3213 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 9
# 3214 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3216 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILVER_POWDER
# 3217 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MUSCLE_BAND
# 3218 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WISE_GLASSES
# 3219 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TWISTED_SPOON
# 3220 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_BARB
# 3221 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SNARL
# 3222 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 3223 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BURN_HEAL, 2
# 3224 "data/scripts/battle_labyrinth.pory"
	additem ITEM_AWAKENING, 2
# 3226 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_18
# 3227 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_19, Debug_CheatStart_PBL_Text_20
# 3228 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3229 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_86
# 3231 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_87
# 3233 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_88
Debug_CheatStart_PBL_84:
# 3241 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 11
# 3242 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3244 "data/scripts/battle_labyrinth.pory"
	random 5
# 3245 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3246 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_91
# 3248 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_92
# 3250 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_93
# 3252 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_94
# 3254 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_95
Debug_CheatStart_PBL_89:
# 3257 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 3258 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3259 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
# 3261 "data/scripts/battle_labyrinth.pory"
	additem ITEM_LAX_MINT
# 3262 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_BALL
# 3263 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MIRACLE_SEED
# 3264 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NORMAL_GEM
# 3265 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BUG_GEM
# 3266 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
# 3267 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GENTLE_MINT
# 3268 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVIOLITE
# 3269 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RED_SHARD, 5
# 3271 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_21
# 3272 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3273 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3274 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_98
# 3276 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_99
# 3279 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_100
Debug_CheatStart_PBL_96:
# 3287 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 13
# 3288 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3290 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEST_BALL
# 3291 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NET_BALL
# 3292 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_DRAINING_KISS
# 3293 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
# 3294 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FLYING_GEM
# 3295 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
# 3296 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SLEDGEHAMMER
# 3297 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 1
# 3299 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_22
# 3300 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3301 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3302 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_103
# 3304 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_104
# 3307 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_105
Debug_CheatStart_PBL_101:
# 3315 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 15
# 3316 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3318 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_23
# 3319 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15
# 3320 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3321 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_108
# 3323 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_109
# 3325 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_110
Debug_CheatStart_PBL_106:
# 3328 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 16
# 3329 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3331 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SHARP_BEAK
# 3332 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ROCK_GEM
# 3333 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIGHTING_GEM
# 3334 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
# 3335 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SERIOUS_MINT
# 3336 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_BELT
# 3337 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SITRUS_BERRY, 5
# 3338 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAGNET
# 3339 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HARD_STONE
# 3340 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DUSK_BALL
# 3341 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEVER_MELT_ICE
# 3342 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_HEAL
# 3343 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_THIEF
# 3344 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_ROCK_TOMB
# 3345 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3346 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3347 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GREAT_BALL
# 3348 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 5
# 3349 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 3350 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MACHETE
# 3351 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_HIDDEN_POWER
# 3353 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 9
# 3354 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
# 3355 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3356 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3357 "data/scripts/battle_labyrinth.pory"
	closemessage
	return

Debug_CheatStart_PBL_3:
# 2985 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_4:
# 2987 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_5:
# 2989 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_6:
# 2991 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_7:
# 2993 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_10:
# 2998 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_11:
# 3000 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_12:
# 3002 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_13:
# 3004 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_14:
# 3006 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_17:
# 3011 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_18:
# 3013 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_19:
# 3015 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_20:
# 3017 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_21:
# 3019 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_23:
# 3036 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_22

Debug_CheatStart_PBL_27:
# 3045 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_28:
# 3047 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 3048 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_29:
# 3050 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3051 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 1
# 3052 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
# 3053 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0SANCTUARY, 255, 38, 11
# 3054 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_32:
# 3063 "data/scripts/battle_labyrinth.pory"
	random 5
# 3064 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3065 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_42
# 3067 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_43
# 3069 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_44
# 3071 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_45
# 3073 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_46
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_33:
# 3077 "data/scripts/battle_labyrinth.pory"
	random 5
# 3078 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3079 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_48
# 3081 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_49
# 3083 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_50
# 3085 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_51
# 3087 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_52
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_34:
# 3091 "data/scripts/battle_labyrinth.pory"
	random 5
# 3092 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3093 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_54
# 3095 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_55
# 3097 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_56
# 3099 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_57
# 3101 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_58
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_37:
# 3117 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_38:
# 3119 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_39:
# 3121 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_40:
# 3123 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3124 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 2
# 3125 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
# 3126 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3127 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_42:
# 3066 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_43:
# 3068 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CACNEA
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_44:
# 3070 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_45:
# 3072 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SMOLIV
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_46:
# 3074 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BOUNSWEET
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_48:
# 3080 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSEAR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_49:
# 3082 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SLUGMA
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_50:
# 3084 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SALANDIT
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_51:
# 3086 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_52:
# 3088 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SIZZLIPEDE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_54:
# 3094 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANPOUR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_55:
# 3096 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BARBOACH
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_56:
# 3098 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_FINNEON
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_57:
# 3100 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEEL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_58:
# 3102 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOLDEEN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_61:
# 3136 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_62:
# 3138 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_63:
# 3140 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_64:
# 3142 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VENIPEDE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_65:
# 3144 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_NINCADA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_66:
# 3146 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_67:
# 3148 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_68:
# 3150 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_TAROUNTULA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_69:
# 3152 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_KRICKETOT
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_70:
# 3154 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PARAS
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_73:
# 3175 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_74:
# 3177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 3178 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_75:
# 3180 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3181 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 3
# 3182 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
# 3183 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3184 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_78:
# 3196 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 6
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_79:
# 3198 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_80:
# 3200 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_81:
# 3202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_82:
# 3204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_83:
# 3206 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3207 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 4
# 3208 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3209 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3210 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_86:
# 3230 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_87:
# 3232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_88:
# 3234 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3235 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 5
# 3236 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3237 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3238 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_91:
# 3247 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PACHIRISU
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_92:
# 3249 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_DEDENNE
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_93:
# 3251 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MORPEKO
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_94:
# 3253 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PLUSLE
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_95:
# 3255 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MINUN
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_98:
# 3275 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_99:
# 3277 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 3278 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_100:
# 3280 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3281 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 6
# 3282 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
# 3283 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3284 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_103:
# 3303 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_104:
# 3305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 3306 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_105:
# 3308 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3309 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 7
# 3310 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
# 3311 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3312 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_108:
# 3322 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_109:
# 3324 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_110:
# 3326 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
	goto Debug_CheatStart_PBL_106


Debug_CheatStart_PBL_GenerateMon::
# 3361 "data/scripts/battle_labyrinth.pory"
	callnative DebugCheatStartGenerateMon
# 3362 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
	return


Debug_CheatStart_PBL_GiveMon::
# 3366 "data/scripts/battle_labyrinth.pory"
	givemon VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE
# 3367 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 3368 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_GiveMon_Text_0
	return


EventScript_MedicineSign_Text_0:
# 34 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 39 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 44 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 49 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 54 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 59 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

EventScript_RecoverySign_Text_0:
# 64 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_ConsumablesSign_Text_0:
# 69 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Items\nA Fine Collection!$"

EventScript_Shop_Portentia_Text_0:
# 81 "data/scripts/battle_labyrinth.pory"
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
# 85 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 88 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 119 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 153 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 156 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 188 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 223 "data/scripts/battle_labyrinth.pory"
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
# 235 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 274 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 607 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 612 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 643 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 676 "data/scripts/battle_labyrinth.pory"
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
# 684 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 689 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 691 "data/scripts/battle_labyrinth.pory"
	.string "Available Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 691 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 691 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 696 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 700 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 703 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which tier would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 706 "data/scripts/battle_labyrinth.pory"
	.string "Tier 1 - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 708 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 713 "data/scripts/battle_labyrinth.pory"
	.string "For an egg in Tier 1, that will be ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 723 "data/scripts/battle_labyrinth.pory"
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
# 725 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_Tier1Egg_Text_0:
# 734 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_Tier1Egg_Text_1:
# 740 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_Tier1Egg_Text_2:
# 753 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_Tier1Egg_Text_3:
# 768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_Tier1Egg_Text_4:
# 825 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_Tier1Egg_Text_5:
# 827 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 836 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 838 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 842 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 847 "data/scripts/battle_labyrinth.pory"
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
# 860 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 861 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 861 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 861 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 861 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 872 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 890 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 891 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 893 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 922 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 928 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1124 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1124 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1137 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1142 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1150 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1154 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1157 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1176 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1181 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1183 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1184 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1185 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1186 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1187 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1188 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1189 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1190 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1191 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1192 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1331 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1335 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1353 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1361 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1366 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1367 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1371 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1377 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1383 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1389 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1395 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1401 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1407 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1413 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1419 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1425 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1431 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1437 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1443 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1449 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1455 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1461 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1467 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1473 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1479 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1485 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1491 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1518 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Recovery Shop,\n"
	.string "is my own!$"

EventScript_Shop_Joy_Text_1:
# 1520 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Recovery Shop.\pWe heal your entire party for a\nflat ¥1000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1522 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_3:
# 1529 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_4:
# 1534 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_5:
# 1540 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_6:
# 1544 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1566 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1596 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1597 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1600 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1614 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1650 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 1748 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 1762 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

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
	.string "{COLOR RED}Full Info$"

EventScript_Settings_Text_10:
# 1826 "data/scripts/battle_labyrinth.pory"
	.string "Full Info$"

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
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 1867 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

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
# 1890 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 1892 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 1895 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 1904 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 1906 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 1909 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 1920 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 1922 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 1925 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 1929 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 1931 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 1934 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 1941 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 1943 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 1946 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 1956 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 1958 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 1960 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 1963 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 1970 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 1972 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 1975 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 1985 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 1986 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 2015 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 2018 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 2020 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 2023 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2033 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2035 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2038 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2046 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting enables you to\n"
	.string "see more information that is not visible\l"
	.string "otherwise, such as full info about\l"
	.string "enemy Pokémon through the {COLOR RED}Surveil{COLOR DARK_GRAY}\l"
	.string "option in battle, or the {COLOR RED}DexNav{COLOR DARK_GRAY} to see\l"
	.string "potential encounterable Pokémon.$"

EventScript_Settings_Text_66:
# 2048 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_67:
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_68:
# 2052 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_69:
# 2061 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_70:
# 2062 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_71:
# 2065 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_72:
# 2075 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_73:
# 2077 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_74:
# 2080 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_75:
# 2085 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_76:
# 2088 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_77:
# 2096 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_78:
# 2098 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_79:
# 2100 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_80:
# 2103 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_81:
# 2111 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_82:
# 2112 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_83:
# 2115 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_84:
# 2121 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_85:
# 2123 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_86:
# 2125 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_87:
# 2128 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_88:
# 2136 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_89:
# 2137 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_90:
# 2140 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_91:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_92:
# 2148 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_93:
# 2150 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_94:
# 2153 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_95:
# 2161 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_96:
# 2162 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_97:
# 2165 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_98:
# 2171 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_99:
# 2173 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_100:
# 2175 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_101:
# 2178 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_102:
# 2186 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_103:
# 2187 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_104:
# 2190 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_105:
# 2196 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_106:
# 2198 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_107:
# 2200 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_108:
# 2203 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_109:
# 2211 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_110:
# 2212 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_111:
# 2215 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_112:
# 2221 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_113:
# 2223 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_114:
# 2225 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_115:
# 2228 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_116:
# 2236 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_117:
# 2238 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_118:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_119:
# 2250 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_120:
# 2252 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_121:
# 2254 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_122:
# 2257 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_123:
# 2265 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_124:
# 2266 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_125:
# 2269 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_126:
# 2275 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_127:
# 2277 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_128:
# 2279 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_129:
# 2282 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_130:
# 2290 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_131:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_132:
# 2294 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_133:
# 2300 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_134:
# 2302 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_135:
# 2304 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_136:
# 2307 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_137:
# 2315 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_138:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_139:
# 2319 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_140:
# 2325 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_141:
# 2327 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_142:
# 2329 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_143:
# 2332 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_144:
# 2340 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_145:
# 2341 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_146:
# 2344 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2364 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2365 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2365 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2365 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2373 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2376 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2379 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2382 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2385 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2388 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2390 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2404 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2415 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2418 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2421 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2424 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2427 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2430 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2446 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2457 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2460 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2463 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2466 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2469 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2472 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2488 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 2761 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 2789 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

EventScript_ShakeTree_Text_0:
# 2872 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 2878 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 2914 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

Debug_CheatStart_PBL_Text_0:
# 3034 "data/scripts/battle_labyrinth.pory"
	.string "Zone 0 grass?$"

Debug_CheatStart_PBL_Text_1:
# 3041 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 options$"

Debug_CheatStart_PBL_Text_2:
# 3042 "data/scripts/battle_labyrinth.pory"
	.string "Grass$"

Debug_CheatStart_PBL_Text_3:
# 3042 "data/scripts/battle_labyrinth.pory"
	.string "Tree$"

Debug_CheatStart_PBL_Text_4:
# 3059 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 gwf$"

Debug_CheatStart_PBL_Text_5:
# 3060 "data/scripts/battle_labyrinth.pory"
	.string "Fire$"

Debug_CheatStart_PBL_Text_6:
# 3060 "data/scripts/battle_labyrinth.pory"
	.string "Water$"

Debug_CheatStart_PBL_Text_7:
# 3113 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2 options$"

Debug_CheatStart_PBL_Text_8:
# 3114 "data/scripts/battle_labyrinth.pory"
	.string "Grass A$"

Debug_CheatStart_PBL_Text_9:
# 3114 "data/scripts/battle_labyrinth.pory"
	.string "Tunnel$"

Debug_CheatStart_PBL_Text_10:
# 3114 "data/scripts/battle_labyrinth.pory"
	.string "Grass B$"

Debug_CheatStart_PBL_Text_11:
# 3171 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3 options$"

Debug_CheatStart_PBL_Text_12:
# 3192 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4 options$"

Debug_CheatStart_PBL_Text_13:
# 3193 "data/scripts/battle_labyrinth.pory"
	.string "A$"

Debug_CheatStart_PBL_Text_14:
# 3193 "data/scripts/battle_labyrinth.pory"
	.string "B$"

Debug_CheatStart_PBL_Text_15:
# 3193 "data/scripts/battle_labyrinth.pory"
	.string "C$"

Debug_CheatStart_PBL_Text_16:
# 3193 "data/scripts/battle_labyrinth.pory"
	.string "D$"

Debug_CheatStart_PBL_Text_17:
# 3193 "data/scripts/battle_labyrinth.pory"
	.string "E$"

Debug_CheatStart_PBL_Text_18:
# 3226 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5 options$"

Debug_CheatStart_PBL_Text_19:
# 3227 "data/scripts/battle_labyrinth.pory"
	.string "Forest$"

Debug_CheatStart_PBL_Text_20:
# 3227 "data/scripts/battle_labyrinth.pory"
	.string "Grassland$"

Debug_CheatStart_PBL_Text_21:
# 3271 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6 options$"

Debug_CheatStart_PBL_Text_22:
# 3299 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 options$"

Debug_CheatStart_PBL_Text_23:
# 3318 "data/scripts/battle_labyrinth.pory"
	.string "Zone 8 options$"

Debug_CheatStart_PBL_GiveMon_Text_0:
# 3368 "data/scripts/battle_labyrinth.pory"
	.string "Obtained {STR_VAR_1}!$"

gText_Lelouch_NotEnoughColor::
# 876 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 880 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1078 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1082 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1090 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1094 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1098 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1102 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1106 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1110 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1114 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1509 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 1766 "data/scripts/battle_labyrinth.pory"
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
# 1772 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 1778 "data/scripts/battle_labyrinth.pory"
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
# 1785 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

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
# 2511 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 2751 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 2755 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
