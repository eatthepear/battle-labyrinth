	.align 2
# 1 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 2 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

EventScript_Shop_Portentia::
# 6 "data/scripts/battle_labyrinth.pory"
	lock
# 7 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 8 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 12 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 16 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 17 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 18 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 19 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 20 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 21 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 23 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 24 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 25 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 27 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_13
# 28 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 29 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 31 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_14
# 32 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_14
# 34 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_15
# 35 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_15
# 36 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_15
# 37 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_15
# 38 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_15
# 39 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_15
# 41 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_16
# 42 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_16
# 43 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_16
# 44 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_16
# 45 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_16
# 46 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_16
EventScript_Shop_Portentia_9:
# 49 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 50 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 9 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 10 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 13 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 14 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 12 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 22 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 26 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_2
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 30 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 33 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_4
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_15:
# 40 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_5
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_16:
# 47 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_5
	goto EventScript_Shop_Portentia_9


	.align 2
# 53 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 54 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 55 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 56 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 59 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 60 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 61 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 62 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 63 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 64 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 65 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 68 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 69 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 70 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 71 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 72 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 73 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 74 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 75 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 76 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 79 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_4:
# 80 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 81 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 82 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 83 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 84 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 85 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 86 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 87 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 88 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

	.align 2
# 91 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_5:
# 92 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 93 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 94 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HYPER_POTION
# 95 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 96 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 97 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 98 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 99 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 100 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 101 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 105 "data/scripts/battle_labyrinth.pory"
	lock
# 106 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 107 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 111 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 112 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 113 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 114 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 115 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 116 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 118 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 119 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 121 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 122 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 124 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_9
# 125 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_9
# 126 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_9
# 127 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_9
# 128 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_9
# 129 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_9
# 131 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 132 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 133 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 134 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 135 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 136 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 137 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 138 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 139 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 140 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_10
EventScript_Shop_Tim_4:
# 143 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 144 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 108 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 109 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 117 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 120 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 123 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 130 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
# 141 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4


	.align 2
# 147 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 148 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 151 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_2:
# 152 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 153 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 156 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_3:
# 157 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 158 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 159 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 160 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 161 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

	.align 2
# 164 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_4:
# 165 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 166 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 167 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 168 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 169 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 170 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 171 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 175 "data/scripts/battle_labyrinth.pory"
	lock
# 176 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 177 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 190 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 191 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 192 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 193 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 194 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 195 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 197 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 198 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 199 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 201 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 202 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 203 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 205 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 206 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 208 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 209 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 211 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 212 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 213 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 214 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 216 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 217 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 218 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 220 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 221 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 223 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 231 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 188 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 196 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 200 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 204 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 207 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_4
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 210 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 215 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 219 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 222 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 224 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 224 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 227 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 225 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 234 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 235 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 238 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 239 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 240 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 241 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 242 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 243 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 244 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 247 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 248 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 249 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 250 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 251 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 252 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 253 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 254 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 256 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 257 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 258 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 259 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 260 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 261 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 264 "data/scripts/battle_labyrinth.pory"
Shop_Items_4:
# 265 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 266 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 267 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 268 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 276 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 277 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 287 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 288 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 292 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 293 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 294 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 308 "data/scripts/battle_labyrinth.pory"
Shop_Items_5:
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 345 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 347 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 361 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 376 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 377 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 392 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 430 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 464 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 525 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 580 "data/scripts/battle_labyrinth.pory"
	lock
# 581 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 582 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 588 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 589 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 590 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 591 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 592 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 593 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 595 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 596 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 597 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 598 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 600 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 601 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 603 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_9
# 604 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_9
# 605 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_9
# 606 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_9
# 607 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_9
# 608 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_9
# 609 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_9
# 610 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_9
# 611 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_9
# 612 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_9
# 613 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_9
# 614 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_9
# 615 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_9
# 616 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_9
EventScript_Shop_Julia_4:
# 619 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 620 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 583 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 586 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 594 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 599 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 602 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_3
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_9:
# 617 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 623 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 627 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 637 "data/scripts/battle_labyrinth.pory"
Shop_Berries_3:
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 649 "data/scripts/battle_labyrinth.pory"
	lock
# 650 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 651 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 660 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 661 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 662 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 652 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 658 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 666 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 667 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 668 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 669 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 670 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 744 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 671 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 676 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 680 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 681 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 682 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 685 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_19
EventScript_Shop_Marie_MainMenu_18:
# 688 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
# 691 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Marie_MainMenu_25
EventScript_Shop_Marie_MainMenu_24:
# 694 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Marie_MainMenu_28
EventScript_Shop_Marie_MainMenu_27:
# 705 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_20, 13
# 706 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 707 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 708 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_31
# 716 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_32
# 724 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_MainMenu_33
# 732 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_MainMenu_34
# 740 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_MainMenu_35
# 741 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_35
	return

EventScript_Shop_Marie_MainMenu_3:
# 745 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_25, MSGBOX_DEFAULT
# 746 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 749 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 673 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 671 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 747 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 677 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 683 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 686 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 1
	goto EventScript_Shop_Marie_MainMenu_18

EventScript_Shop_Marie_MainMenu_22:
# 689 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_9, 2
	goto EventScript_Shop_Marie_MainMenu_21

EventScript_Shop_Marie_MainMenu_25:
# 692 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_10, 3
	goto EventScript_Shop_Marie_MainMenu_24

EventScript_Shop_Marie_MainMenu_28:
# 695 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_11, 4
# 696 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_12, 5
# 697 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_13, 6
# 698 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_14, 7
# 699 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_15, 8
# 700 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_16, 9
# 701 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_17, 10
# 702 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_18, 11
# 703 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_19, 12
	goto EventScript_Shop_Marie_MainMenu_27

EventScript_Shop_Marie_MainMenu_31:
# 709 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 710 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_21, MSGBOX_YESNO
# 711 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_37
EventScript_Shop_Marie_MainMenu_36:
# 714 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_32:
# 717 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 718 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_22, MSGBOX_YESNO
# 719 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_40
EventScript_Shop_Marie_MainMenu_39:
# 722 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_33:
# 725 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 726 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_23, MSGBOX_YESNO
# 727 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_43
EventScript_Shop_Marie_MainMenu_42:
# 730 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_34:
# 733 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 734 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_24, MSGBOX_YESNO
# 735 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_46
EventScript_Shop_Marie_MainMenu_45:
# 738 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_35:
# 742 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_37:
# 712 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_ElementalMonkeyEgg
	goto EventScript_Shop_Marie_MainMenu_36

EventScript_Shop_Marie_MainMenu_40:
# 720 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_RegionalFormEgg
	goto EventScript_Shop_Marie_MainMenu_39

EventScript_Shop_Marie_MainMenu_43:
# 728 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon1Egg
	goto EventScript_Shop_Marie_MainMenu_42

EventScript_Shop_Marie_MainMenu_46:
# 736 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon2Egg
	goto EventScript_Shop_Marie_MainMenu_45


EventScript_Shop_Marie_ElementalMonkeyEgg::
# 754 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 755 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_2
# 760 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 761 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_5
EventScript_Shop_Marie_ElementalMonkeyEgg_4:
# 781 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_ElementalMonkeyEgg_8
EventScript_Shop_Marie_ElementalMonkeyEgg_7:
# 784 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_14
EventScript_Shop_Marie_ElementalMonkeyEgg_13:
# 788 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 789 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 790 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 791 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 792 "data/scripts/battle_labyrinth.pory"
	random 3
# 793 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 794 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_ElementalMonkeyEgg_20
# 796 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_ElementalMonkeyEgg_21
# 798 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_ElementalMonkeyEgg_22
EventScript_Shop_Marie_ElementalMonkeyEgg_18:
# 801 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 802 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 804 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 805 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 806 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 807 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_2:
# 756 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 757 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_5:
# 762 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 763 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 764 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 765 "data/scripts/battle_labyrinth.pory"
	waitstate
# 766 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 767 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 768 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_11
# 772 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 773 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 774 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 775 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 776 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_16
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_4

EventScript_Shop_Marie_ElementalMonkeyEgg_8:
# 782 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_7

EventScript_Shop_Marie_ElementalMonkeyEgg_11:
# 769 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_14:
# 785 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 786 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_13

EventScript_Shop_Marie_ElementalMonkeyEgg_16:
# 777 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_20:
# 795 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_21:
# 797 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_22:
# 799 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18


EventScript_Shop_Marie_RegionalFormEgg::
# 811 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 812 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_2
# 817 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 818 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_5
EventScript_Shop_Marie_RegionalFormEgg_4:
# 838 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_RegionalFormEgg_8
EventScript_Shop_Marie_RegionalFormEgg_7:
# 841 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_14
EventScript_Shop_Marie_RegionalFormEgg_13:
# 845 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 846 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 848 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 849 "data/scripts/battle_labyrinth.pory"
	random 4
# 850 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 851 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_RegionalFormEgg_20
# 853 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_RegionalFormEgg_21
# 855 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_RegionalFormEgg_22
# 857 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_RegionalFormEgg_23
EventScript_Shop_Marie_RegionalFormEgg_18:
# 860 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 861 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 862 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 863 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 864 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 865 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 866 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_RegionalFormEgg_2:
# 813 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 814 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_5:
# 819 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 820 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 821 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 822 "data/scripts/battle_labyrinth.pory"
	waitstate
# 823 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 824 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 825 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_11
# 829 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 830 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 831 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 832 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 833 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_16
	goto EventScript_Shop_Marie_RegionalFormEgg_4

EventScript_Shop_Marie_RegionalFormEgg_8:
# 839 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_RegionalFormEgg_7

EventScript_Shop_Marie_RegionalFormEgg_11:
# 826 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_14:
# 842 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 843 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_RegionalFormEgg_13

EventScript_Shop_Marie_RegionalFormEgg_16:
# 834 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_20:
# 852 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MEOWTH_ALOLA
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_21:
# 854 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ZIGZAGOON_GALAR
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_22:
# 856 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VOLTORB_HISUI
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_23:
# 858 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WOOPER_PALDEA
	goto EventScript_Shop_Marie_RegionalFormEgg_18


EventScript_Shop_Marie_BabyPokemon1Egg::
# 870 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 871 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_2
# 876 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 877 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_5
EventScript_Shop_Marie_BabyPokemon1Egg_4:
# 897 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon1Egg_8
EventScript_Shop_Marie_BabyPokemon1Egg_7:
# 900 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_14
EventScript_Shop_Marie_BabyPokemon1Egg_13:
# 904 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 905 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 906 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 907 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 908 "data/scripts/battle_labyrinth.pory"
	random 3
# 909 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 910 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon1Egg_20
# 912 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon1Egg_21
# 914 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon1Egg_22
EventScript_Shop_Marie_BabyPokemon1Egg_18:
# 917 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 918 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 919 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 920 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 921 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 922 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 923 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon1Egg_2:
# 872 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 873 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_5:
# 878 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 879 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 880 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 881 "data/scripts/battle_labyrinth.pory"
	waitstate
# 882 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 883 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 884 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_11
# 888 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 889 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 890 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 891 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 892 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_16
	goto EventScript_Shop_Marie_BabyPokemon1Egg_4

EventScript_Shop_Marie_BabyPokemon1Egg_8:
# 898 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon1Egg_7

EventScript_Shop_Marie_BabyPokemon1Egg_11:
# 885 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_14:
# 901 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 902 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon1Egg_13

EventScript_Shop_Marie_BabyPokemon1Egg_16:
# 893 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_20:
# 911 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOOCHUM
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_21:
# 913 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ELEKID
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_22:
# 915 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MAGBY
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18


EventScript_Shop_Marie_BabyPokemon2Egg::
# 927 "data/scripts/battle_labyrinth.pory"
	checkmoney 10000, 0
# 928 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_2
# 933 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 934 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_5
EventScript_Shop_Marie_BabyPokemon2Egg_4:
# 954 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon2Egg_8
EventScript_Shop_Marie_BabyPokemon2Egg_7:
# 957 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_14
EventScript_Shop_Marie_BabyPokemon2Egg_13:
# 961 "data/scripts/battle_labyrinth.pory"
	removemoney 10000
# 962 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 963 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 964 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 965 "data/scripts/battle_labyrinth.pory"
	random 4
# 966 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 967 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon2Egg_20
# 969 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon2Egg_21
# 971 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon2Egg_22
# 973 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_BabyPokemon2Egg_23
EventScript_Shop_Marie_BabyPokemon2Egg_18:
# 976 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 977 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 979 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 980 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 981 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 982 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon2Egg_2:
# 929 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 930 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_5:
# 935 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 936 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 937 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 938 "data/scripts/battle_labyrinth.pory"
	waitstate
# 939 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 940 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 941 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_11
# 945 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 946 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 947 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 949 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_16
	goto EventScript_Shop_Marie_BabyPokemon2Egg_4

EventScript_Shop_Marie_BabyPokemon2Egg_8:
# 955 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon2Egg_7

EventScript_Shop_Marie_BabyPokemon2Egg_11:
# 942 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_14:
# 958 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 959 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon2Egg_13

EventScript_Shop_Marie_BabyPokemon2Egg_16:
# 950 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_20:
# 968 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_21:
# 970 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_TOGEPI
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_22:
# 972 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_23:
# 974 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_RIOLU
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18


EventScript_Shop_Lelouch::
# 986 "data/scripts/battle_labyrinth.pory"
	lock
# 987 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 988 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 994 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 999 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 1013 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 1014 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 1015 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1016 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 1018 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 1020 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 1022 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 1025 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 1026 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 989 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 990 "data/scripts/battle_labyrinth.pory"
	delay 16
# 991 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 992 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 995 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 996 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 1000 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 1011 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 1017 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 1019 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 1021 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 1023 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 1038 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 1039 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 1043 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 1044 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 1045 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 1048 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 1049 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1050 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1051 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 1065 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1224 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1225 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 1040 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 1046 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 1045 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 1045 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 1052 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 1053 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 1066 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 1067 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 1054 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 1055 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1056 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 1061 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 1068 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1069 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1070 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 1073 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1074 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 1077 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 1078 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 1079 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 1080 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 1081 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1082 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1083 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 1086 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 1089 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 1092 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 1095 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 1097 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 1098 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 1101 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 1102 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1103 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1104 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 1107 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 1110 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 1113 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 1116 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 1118 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 1119 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 1122 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 1123 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1124 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1125 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 1128 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 1131 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 1134 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 1137 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 1139 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 1140 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 1143 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 1144 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1145 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1146 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 1149 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 1152 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1155 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1158 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1160 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1161 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1164 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1165 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1166 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1167 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1170 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1173 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1176 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1179 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1181 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1182 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1185 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1186 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1187 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1188 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1191 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1194 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1197 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1200 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1202 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1203 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1206 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1210 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1211 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1214 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1215 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1216 "data/scripts/battle_labyrinth.pory"
	waitse
# 1217 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1218 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1219 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 1057 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 1058 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1059 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 1071 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 1075 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 1084 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 1085 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 1087 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 1088 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 1090 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 1091 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 1093 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 1094 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 1096 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 1105 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 1106 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 1108 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 1109 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 1111 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 1112 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 1114 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 1115 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 1117 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 1126 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 1127 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 1129 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 1130 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 1132 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 1133 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 1135 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 1136 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 1138 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 1147 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 1148 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 1150 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 1151 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1153 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1154 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1156 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1157 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1159 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1168 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1169 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1171 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1172 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1174 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1175 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1178 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1180 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1189 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1190 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1192 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1193 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1195 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1196 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1198 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1199 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1201 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1207 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1272 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1273 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1277 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Moves_Text_0, MSGBOX_DEFAULT
# 1278 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Lelouch_Moves_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 1279 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1280 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1282 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1284 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1285 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1274 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1281 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1283 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1292 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1296 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1297 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1298 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1299 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1302 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1303 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1307 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1311 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1312 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1313 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1314 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1317 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1318 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1308 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1325 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1326 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1327 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1336 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1372 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1373 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1374 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1375 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_MoveTutor_8
# 1378 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_9
# 1381 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_10
# 1384 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_11
# 1387 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_12
# 1390 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_13
# 1393 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_14
# 1396 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_15
# 1399 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_16
# 1402 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_17
# 1480 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1481 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1484 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1485 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1486 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1489 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1490 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveTutor
# 1491 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1492 "data/scripts/battle_labyrinth.pory"
	lock
# 1493 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1494 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1497 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1498 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1337 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 0
# 1338 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 1
# 1339 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 2
# 1340 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 3
# 1341 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 4
# 1342 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 5
# 1343 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 6
# 1344 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 7
# 1345 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 8
# 1346 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 9
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1376 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_VENOSHOCK
# 1377 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_VENOSHOCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1379 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ELECTROWEB
# 1380 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1382 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1383 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1385 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1386 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1388 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1389 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1391 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1392 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1394 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
# 1395 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1397 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
# 1398 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1400 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_DEFOG
# 1401 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1403 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TRICK
# 1404 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1505 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1506 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1510 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1511 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1512 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1513 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1516 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1517 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1520 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1521 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1522 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1523 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1524 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1525 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1526 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1532 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1538 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1544 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1550 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1556 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1562 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1568 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1574 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1580 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1586 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1592 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1598 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1604 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1610 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1616 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1622 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1628 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1634 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1640 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1646 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1652 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1655 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1656 "data/scripts/battle_labyrinth.pory"
	waitse
# 1657 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_45
# 1658 "data/scripts/battle_labyrinth.pory"
	special SetMonNature
# 1659 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1660 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1507 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1518 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1527 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 1
# 1528 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1529 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 3
# 1534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1535 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1539 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 4
# 1540 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1541 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1545 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 2
# 1546 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1547 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1551 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
# 1552 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1553 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 8
# 1558 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1559 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1563 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 9
# 1564 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1565 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 7
# 1570 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1571 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1575 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 15
# 1576 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1577 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1581 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 16
# 1582 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1583 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1587 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 19
# 1588 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1589 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 17
# 1594 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1595 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1599 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 20
# 1600 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1601 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1605 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 21
# 1606 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1607 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1611 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 23
# 1612 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1613 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1617 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 22
# 1618 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1619 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1623 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 10
# 1624 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1625 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1629 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 11
# 1630 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1631 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1635 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 13
# 1636 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1637 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1641 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 14
# 1642 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1643 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1647 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 12
# 1648 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1649 "data/scripts/battle_labyrinth.pory"
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
# 1667 "data/scripts/battle_labyrinth.pory"
	lock
# 1668 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1669 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1673 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Joy_6
EventScript_Shop_Joy_4:
# 1677 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_10
# 1680 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3, MSGBOX_DEFAULT
EventScript_Shop_Joy_9:
# 1682 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1683 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4, MSGBOX_YESNO
# 1684 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_14
# 1688 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_17
# 1706 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1707 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_23
# 1711 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1712 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1713 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1714 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1715 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1716 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1717 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1718 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1719 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_8, MSGBOX_DEFAULT
# 1720 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_13:
# 1724 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_9
# 1725 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1670 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1671 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1674 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1
# 1675 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_UPGRADED
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_6:
# 1673 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_UPGRADED, EventScript_Shop_Joy_5
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_10:
# 1678 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_9

EventScript_Shop_Joy_14:
# 1685 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1686 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_17:
# 1689 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1690 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_20
# 1694 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1695 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1696 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1697 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1698 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1699 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1700 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1701 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1702 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_7, MSGBOX_DEFAULT
# 1703 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_20:
# 1691 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1692 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_23:
# 1708 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1709 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13


EventScript_Shop_BreederF::
# 1730 "data/scripts/battle_labyrinth.pory"
	lock
# 1731 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1732 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1733 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_0, MSGBOX_YESNO
# 1734 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_BreederF_2
# 1738 "data/scripts/battle_labyrinth.pory"
	checkmoney 50, 0
# 1739 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_BreederF_5
# 1743 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_2, MSGBOX_DEFAULT
# 1744 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1745 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1746 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1747 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1748 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne EventScript_Shop_BreederF_8
# 1771 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1772 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
EventScript_Shop_BreederF_1:
# 1776 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_BreederF_2:
# 1735 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1736 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_5:
# 1740 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_1
# 1741 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_8:
# 1749 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1750 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_BreederF_11
# 1754 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1755 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1756 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1757 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_4, MSGBOX_YESNO
# 1758 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederF_14
# 1766 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1767 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_11:
# 1751 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1752 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_3
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_14:
# 1759 "data/scripts/battle_labyrinth.pory"
	removemoney 50
# 1760 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1761 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 12
# 1762 "data/scripts/battle_labyrinth.pory"
	special SetMonNature
# 1763 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_5
# 1764 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederF_1


EventScript_Shop_BreederM::
# 1781 "data/scripts/battle_labyrinth.pory"
	lock
# 1782 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1783 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1784 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_0, MSGBOX_YESNO
# 1785 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_BreederM_2
# 1789 "data/scripts/battle_labyrinth.pory"
	checkmoney 50, 0
# 1790 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_BreederM_5
# 1794 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_1, MSGBOX_DEFAULT
# 1795 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1796 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1797 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1798 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1799 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne EventScript_Shop_BreederM_8
# 1857 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1858 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
EventScript_Shop_BreederM_1:
# 1862 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_BreederM_2:
# 1786 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1787 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_5:
# 1791 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_1
# 1792 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_8:
# 1800 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1801 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_BreederM_11
# 1805 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1806 "data/scripts/battle_labyrinth.pory"
	special BufferMonAbilities
# 1807 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EventScript_Shop_BreederM_14
# 1813 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq EventScript_Shop_BreederM_15
# 1837 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EventScript_Shop_BreederM_16
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_11:
# 1802 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1803 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_2
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_14:
# 1808 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1809 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1810 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_4
# 1811 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_3
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_15:
# 1814 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_Shop_BreederM_20
# 1820 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1821 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1822 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_5, MSGBOX_YESNO
# 1823 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederM_26
# 1832 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1833 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_16:
# 1838 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1839 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1840 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_7, MSGBOX_YESNO
# 1841 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederM_23
# 1850 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1851 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_20:
# 1815 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1816 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1817 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_4
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_23:
# 1842 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1843 "data/scripts/battle_labyrinth.pory"
	removemoney 50
# 1844 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1845 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 0
# 1846 "data/scripts/battle_labyrinth.pory"
	special ChangePokemonAbility
# 1847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_6
# 1848 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_26:
# 1824 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1825 "data/scripts/battle_labyrinth.pory"
	removemoney 50
# 1826 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1827 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 1
# 1828 "data/scripts/battle_labyrinth.pory"
	special ChangePokemonAbility
# 1829 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_6
# 1830 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1


EventScript_Shop_Alexander::
# 1871 "data/scripts/battle_labyrinth.pory"
	lock
# 1872 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1873 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1877 "data/scripts/battle_labyrinth.pory"
	lock
# 1878 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1879 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1883 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1883 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1884 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1885 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1886 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1887 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1888 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1889 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1892 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1894 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1890 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1902 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1903 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1904 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1905 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1908 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1910 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1906 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1914 "data/scripts/battle_labyrinth.pory"
	lock
# 1915 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1916 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1921 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1922 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1923 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1924 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Max_6
# 1926 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1928 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_8
# 1930 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_9
EventScript_Max_4:
# 1933 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3, MSGBOX_AUTOCLOSE
# 1934 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1917 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1918 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1919 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1925 "data/scripts/battle_labyrinth.pory"
	pokemart Zone2A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1927 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1929 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1931 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1937 "data/scripts/battle_labyrinth.pory"
Zone2A_Shop_TMShop:
# 1938 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

	.align 2
# 1941 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1942 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_TRAILBLAZE
# 1943 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_FLAME_CHARGE
# 1944 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 1945 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

	.align 2
# 1948 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1949 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_IRON_DEFENSE
# 1950 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AGILITY
# 1951 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AMNESIA
	.2byte ITEM_NONE

	.align 2
# 1954 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1955 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1956 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1957 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_SanctuaryToZone0::
# 1961 "data/scripts/battle_labyrinth.pory"
	lockall
# 1962 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1963 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1964 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1965 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1970 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1971 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1972 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1974 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1966 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1967 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1968 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_WhenUReadyDialogue::
# 1978 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1979 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WhenUReadyDialogue_2
# 1981 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WhenUReadyDialogue_3
# 1983 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WhenUReadyDialogue_4
# 1985 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WhenUReadyDialogue_5
# 1987 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WhenUReadyDialogue_6
# 1989 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WhenUReadyDialogue_7
# 1991 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WhenUReadyDialogue_8
# 1993 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WhenUReadyDialogue_9
# 1995 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WhenUReadyDialogue_10
# 1997 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WhenUReadyDialogue_11
# 1999 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WhenUReadyDialogue_12
# 2001 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WhenUReadyDialogue_13
# 2003 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WhenUReadyDialogue_14
# 2005 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WhenUReadyDialogue_15
# 2007 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WhenUReadyDialogue_16
# 2009 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WhenUReadyDialogue_17
# 2011 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WhenUReadyDialogue_18
# 2013 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WhenUReadyDialogue_19
# 2015 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WhenUReadyDialogue_20
# 2017 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WhenUReadyDialogue_21
# 2019 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WhenUReadyDialogue_22
	return

EventScript_WhenUReadyDialogue_2:
# 1980 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_0, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_3:
# 1982 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_1, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_4:
# 1984 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_2, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_5:
# 1986 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_3, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_6:
# 1988 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_4, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_7:
# 1990 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_5, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_8:
# 1992 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_6, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_9:
# 1994 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_7, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_10:
# 1996 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_8, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_11:
# 1998 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_9, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_12:
# 2000 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_10, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_13:
# 2002 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_11, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_14:
# 2004 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_12, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_15:
# 2006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_13, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_16:
# 2008 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_14, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_17:
# 2010 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_15, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_18:
# 2012 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_16, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_19:
# 2014 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_17, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_20:
# 2016 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_18, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_21:
# 2018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_19, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_22:
# 2020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_15, MSGBOX_AUTOCLOSE
	return


EventScript_WhenUReady::
# 2025 "data/scripts/battle_labyrinth.pory"
	call EventScript_WhenUReadyDialogue
# 2026 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_Documentation::
# 2031 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 2032 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 2070 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 2071 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 2072 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 2074 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 2077 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 2079 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 2082 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 2084 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 2087 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 2089 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 2092 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_24
# 2095 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 2097 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 2100 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 2102 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 2103 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 2103 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 2106 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 2108 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 2108 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 2111 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 2113 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 2113 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 2116 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 2118 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 2118 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 2121 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 2123 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 2123 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 2126 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 2128 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 2128 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 2131 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 2133 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 2133 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
# 2136 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 2138 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 2138 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 2141 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 2143 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 2143 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 2146 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 2148 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 2148 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 2151 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 2153 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 2154 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2155 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2156 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 2185 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 2221 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 2250 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2314 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2350 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2369 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2371 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2396 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2421 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2446 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2471 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2496 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2525 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2550 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2575 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2600 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2626 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2627 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 2073 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 2075 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 2078 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 2080 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 2083 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 2085 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 2088 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 2090 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 2093 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 2098 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 2104 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 2109 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 2114 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 2119 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 2124 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 2129 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 2134 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 2139 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 2144 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 2149 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 2157 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 2158 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 2170 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 2173 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 2174 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 2186 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 2187 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 2197 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 2210 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 2211 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 2222 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 2223 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 2239 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 2240 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 2251 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 2252 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2299 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2302 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2303 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2315 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2316 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_122
# 2334 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2336 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2351 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2352 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2361 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_YESNO
# 2362 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2370 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2372 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2373 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2373 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2387 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2388 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_YESNO
# 2389 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2397 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2398 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2398 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2412 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2413 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_YESNO
# 2414 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2422 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2423 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2423 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2437 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2438 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_YESNO
# 2439 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2447 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2448 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2448 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2462 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2463 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_YESNO
# 2464 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2472 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2473 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2473 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2487 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2488 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_YESNO
# 2489 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2497 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2498 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2498 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2512 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2513 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2522 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2526 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2527 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2527 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2541 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2542 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_YESNO
# 2543 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2551 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2552 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2552 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2566 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2567 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_YESNO
# 2568 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2576 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2577 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2577 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2591 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2592 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_YESNO
# 2593 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2601 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2602 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2602 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2616 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2617 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_YESNO
# 2618 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2628 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2631 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2159 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 2160 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2188 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 2190 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 2193 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 2194 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 2224 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 2227 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 2228 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 2253 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 2287 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2288 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2317 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2318 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2319 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2353 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2354 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2374 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2375 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2384 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2399 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2400 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2409 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2424 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2425 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2434 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2449 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2450 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2459 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2474 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2475 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2484 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2499 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2500 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2509 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2528 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2529 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2538 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2553 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2554 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2563 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2578 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2579 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2588 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2603 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2604 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2613 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 2161 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 2162 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 2171 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 2198 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 2199 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 2189 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 2191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 2225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 2242 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 2254 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 2255 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 2256 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2300 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2320 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2321 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2322 "data/scripts/battle_labyrinth.pory"
	waitse
# 2323 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_INFO
# 2324 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_283
EventScript_Settings_282:
# 2328 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SAVES
# 2329 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Settings_322
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2337 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2338 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2339 "data/scripts/battle_labyrinth.pory"
	waitse
# 2340 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_INFO
# 2341 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_286
EventScript_Settings_285:
	checkitem ITEM_TRAINER_NOTEBOOK
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Settings_324
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2355 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2356 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2357 "data/scripts/battle_labyrinth.pory"
	waitse
# 2358 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2363 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2364 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2365 "data/scripts/battle_labyrinth.pory"
	waitse
# 2366 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2376 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2377 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2390 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2391 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2392 "data/scripts/battle_labyrinth.pory"
	waitse
# 2393 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2401 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2402 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2415 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2416 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2417 "data/scripts/battle_labyrinth.pory"
	waitse
# 2418 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2426 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2427 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2440 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2441 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2442 "data/scripts/battle_labyrinth.pory"
	waitse
# 2443 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2451 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2452 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2465 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2466 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2467 "data/scripts/battle_labyrinth.pory"
	waitse
# 2468 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2476 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2477 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2490 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2491 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2492 "data/scripts/battle_labyrinth.pory"
	waitse
# 2493 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2501 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2502 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2514 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_YESNO
# 2515 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2530 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2531 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2544 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2545 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2546 "data/scripts/battle_labyrinth.pory"
	waitse
# 2547 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2555 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2556 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2569 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2570 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2571 "data/scripts/battle_labyrinth.pory"
	waitse
# 2572 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2580 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2581 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2594 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2595 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2596 "data/scripts/battle_labyrinth.pory"
	waitse
# 2597 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2605 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2606 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2619 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2620 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
# 2621 "data/scripts/battle_labyrinth.pory"
	waitse
# 2622 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2163 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 2165 "data/scripts/battle_labyrinth.pory"
	waitse
# 2166 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2175 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 2176 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_268:
# 2200 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 2201 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_270:
# 2212 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 2213 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_272:
# 2229 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 2230 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2243 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2244 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 2245 "data/scripts/battle_labyrinth.pory"
	waitse
# 2246 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 2257 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2258 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2259 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2260 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2261 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2262 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2263 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2264 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2265 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2266 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2267 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2268 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2269 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2270 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2271 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2272 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2273 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2274 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2275 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2276 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2277 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2278 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2279 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2280 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2281 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2282 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2283 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2284 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 2289 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 2290 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2305 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_320
	goto EventScript_Settings_1

EventScript_Settings_283:
# 2325 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DEXNAV_GET
# 2326 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_282

EventScript_Settings_286:
# 2342 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 2343 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_285

EventScript_Settings_288:
# 2378 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2379 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2380 "data/scripts/battle_labyrinth.pory"
	waitse
# 2381 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2403 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2404 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2405 "data/scripts/battle_labyrinth.pory"
	waitse
# 2406 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2428 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2429 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2430 "data/scripts/battle_labyrinth.pory"
	waitse
# 2431 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2453 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2454 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2455 "data/scripts/battle_labyrinth.pory"
	waitse
# 2456 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2478 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2479 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2480 "data/scripts/battle_labyrinth.pory"
	waitse
# 2481 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2503 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2504 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2505 "data/scripts/battle_labyrinth.pory"
	waitse
# 2506 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2516 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2517 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2518 "data/scripts/battle_labyrinth.pory"
	waitse
# 2519 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2532 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2533 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2534 "data/scripts/battle_labyrinth.pory"
	waitse
# 2535 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2557 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2558 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2559 "data/scripts/battle_labyrinth.pory"
	waitse
# 2560 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2582 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2583 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2584 "data/scripts/battle_labyrinth.pory"
	waitse
# 2585 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2607 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2608 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2609 "data/scripts/battle_labyrinth.pory"
	waitse
# 2610 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2177 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 2179 "data/scripts/battle_labyrinth.pory"
	waitse
# 2180 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2202 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2203 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 2204 "data/scripts/battle_labyrinth.pory"
	waitse
# 2205 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 2206 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2214 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2215 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 2216 "data/scripts/battle_labyrinth.pory"
	waitse
# 2217 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2231 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2232 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 2233 "data/scripts/battle_labyrinth.pory"
	waitse
# 2234 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_318:
# 2291 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2292 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2293 "data/scripts/battle_labyrinth.pory"
	waitse
# 2294 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_320:
# 2306 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2308 "data/scripts/battle_labyrinth.pory"
	waitse
# 2309 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_322:
# 2330 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_TRAINER_NOTEBOOK
	goto EventScript_Settings_1

EventScript_Settings_324:
# 2346 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TRAINER_NOTEBOOK
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2639 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2640 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2641 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_20
# 2642 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2643 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2685 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2727 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2769 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2770 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2644 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2645 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2686 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2687 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2728 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2729 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2646 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2647 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2650 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2653 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2656 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2659 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2662 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2666 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2667 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2668 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2670 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2672 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2674 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2676 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2678 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2681 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2688 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2689 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2692 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2695 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2698 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2701 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2704 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2708 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2709 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2710 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2712 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2714 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2716 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2718 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2720 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2723 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2730 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2731 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2734 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2737 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2740 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2743 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2746 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2750 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2751 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2752 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2754 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2756 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2758 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2760 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2762 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2765 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2648 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2649 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2651 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2652 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2654 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2655 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2657 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2658 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2660 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2661 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2664 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2690 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2691 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2693 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2694 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2696 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2697 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2699 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2700 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2702 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2703 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2706 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2732 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2733 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2735 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2736 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2738 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2739 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2741 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2742 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2744 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2745 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2748 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2669 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2671 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2675 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2677 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2680 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2682 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2711 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2713 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2715 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2717 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2719 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2722 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2724 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2753 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2755 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2757 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2759 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2761 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2764 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2766 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_SignsQuestGirl::
# 2777 "data/scripts/battle_labyrinth.pory"
	lock
# 2778 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2779 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SIGNS
# 2780 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SignsQuestGirl_2
EventScript_SignsQuestGirl_1:
# 2784 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_1
# 2785 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SignsQuestGirl_2:
# 2781 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_0
# 2782 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SIGNS
	goto EventScript_SignsQuestGirl_1


EventScript_SavesQuestBoy::
# 2790 "data/scripts/battle_labyrinth.pory"
	lock
# 2791 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2792 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SAVES
# 2793 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_2
EventScript_SavesQuestBoy_1:
# 2797 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SAVES
# 2798 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_5
EventScript_SavesQuestBoy_4:
# 2811 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_4
# 2812 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SavesQuestBoy_2:
# 2794 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_0
# 2795 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SAVES
	goto EventScript_SavesQuestBoy_1

EventScript_SavesQuestBoy_5:
# 2799 "data/scripts/battle_labyrinth.pory"
	callnative SavesQuestCheckIfDone
# 2800 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_TEMP_6, EventScript_SavesQuestBoy_7
	goto EventScript_SavesQuestBoy_4

EventScript_SavesQuestBoy_7:
# 2801 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_1
	checkitem ITEM_TRAINER_NOTEBOOK
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_10
# 2806 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_3
EventScript_SavesQuestBoy_9:
# 2808 "data/scripts/battle_labyrinth.pory"
	completequest QUEST_SAVES
	goto EventScript_SavesQuestBoy_4

EventScript_SavesQuestBoy_10:
# 2803 "data/scripts/battle_labyrinth.pory"
	giveitem ITEM_TRAINER_NOTEBOOK
# 2804 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_2
	goto EventScript_SavesQuestBoy_9


EventScript_PokedexQuestScientist::
# 2817 "data/scripts/battle_labyrinth.pory"
	lock
# 2818 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2819 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_POKEDEX
# 2820 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_PokedexQuestScientist_2
EventScript_PokedexQuestScientist_1:
# 2824 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_1
# 2825 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PokedexQuestScientist_2:
# 2821 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_0
# 2822 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_POKEDEX
	goto EventScript_PokedexQuestScientist_1


EventScript_WarpZone0::
# 2830 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2831 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2832 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2833 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2834 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2835 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2836 "data/scripts/battle_labyrinth.pory"
	waitstate
# 2837 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 3090 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 3091 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3092 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 3093 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 3094 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 3102 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 3103 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3104 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 3105 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 3113 "data/scripts/battle_labyrinth.pory"
	lock
# 3114 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 3115 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 3118 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 3119 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 3120 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 3128 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 3116 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 3121 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3122 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 3123 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 3124 "data/scripts/battle_labyrinth.pory"
	setvar VAR_GENERIC, 1
# 3125 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_SANCTUARY, 255, 38, 11
# 3126 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 3132 "data/scripts/battle_labyrinth.pory"

# 3133 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 3134 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 3135 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 3139 "data/scripts/battle_labyrinth.pory"
	lockall
# 3140 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 3141 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 3146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 3147 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3148 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 3149 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 3150 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 3151 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 3152 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 3153 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 3154 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3155 "data/scripts/battle_labyrinth.pory"
	waitse
# 3156 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 3157 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 3159 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 3235 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 3142 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3143 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 3158 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 3160 "data/scripts/battle_labyrinth.pory"
	random 70
# 3161 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3162 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 3163 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 3164 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 3165 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 3166 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 3167 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 3168 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 3169 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 3170 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 3171 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 3172 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 3173 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 3174 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 3175 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 3176 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 3177 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 3178 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 3179 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 3180 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 3181 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 3184 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 3185 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 3186 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 3191 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 3192 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 3193 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 3198 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 3199 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 3200 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 3205 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 3206 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 3207 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 3212 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 3213 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 3214 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 3219 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 3220 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 3221 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 3222 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 3223 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 3228 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 3159 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 3182 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3183 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 3187 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 3194 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 3201 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 3208 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 3215 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 3224 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 3229 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 3188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3189 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 3195 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3196 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 3202 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3203 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 3209 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3210 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 3216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3217 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 3225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3226 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 3230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3231 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_HandleFlashlight::
	checkitem ITEM_FLASHLIGHT
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 3243 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 3241 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_RecoverySign::
# 3249 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3250 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_MedicineSign::
# 3255 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3256 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 3261 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3262 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 3267 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3268 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 3273 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3274 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 3279 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3280 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 3285 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3286 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_TPISign::
# 3291 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3292 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_TPISign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_DayCareSign::
# 3297 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3298 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_DayCareSign_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_Sign_GoldenTree::
# 3303 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3304 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_GoldenTree_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_PorygonSign::
# 3309 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3310 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 3311 "data/scripts/battle_labyrinth.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 3312 "data/scripts/battle_labyrinth.pory"
	setseenmon SPECIES_PORYGON
# 3313 "data/scripts/battle_labyrinth.pory"
	waitbuttonpress
# 3314 "data/scripts/battle_labyrinth.pory"
	hidemonpic
# 3315 "data/scripts/battle_labyrinth.pory"
	release
	end


Zone1A_EventScript_Sign_RunningShoes::
# 3320 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3321 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_RunningShoes_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_Sign::
# 3326 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3327 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_ExpShareSign::
# 3332 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3333 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_ExpShareSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_CautionSign::
# 3338 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3339 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_CautionSign::
# 3344 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3345 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 3350 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3351 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 3356 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3357 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


Zone3A_EventScript_Surveil::
# 3362 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3363 "data/scripts/battle_labyrinth.pory"
	msgbox Zone3A_EventScript_Surveil_Text_0, MSGBOX_SIGN
	end


Zone4A_EventScript_Sign::
# 3368 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3369 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4B_EventScript_Sign::
# 3374 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3375 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4B_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4C_EventScript_Sign::
# 3380 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3381 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4C_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4D_EventScript_Sign::
# 3386 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3387 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4D_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4E_EventScript_Sign::
# 3392 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3393 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4E_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone6A_EventScript_Sign::
# 3398 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3399 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_Sign::
# 3404 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3405 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_HealSign::
# 3410 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3411 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_HealSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Sign::
# 3416 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3417 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_HerbalSign::
# 3422 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3423 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


EventScript_Collector::
# 3428 "data/scripts/battle_labyrinth.pory"
	lock
# 3429 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 3430 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_ZONE0A_SAFARI_INTRO, EventScript_Collector_2
EventScript_Collector_1:
# 3434 "data/scripts/battle_labyrinth.pory"
	message EventScript_Collector_Text_1
# 3435 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 3436 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 1
	goto_if_ne EventScript_Collector_5
EventScript_Collector_4:
# 3439 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 2
	goto_if_ne EventScript_Collector_8
EventScript_Collector_7:
# 3446 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_eq EventScript_Collector_11
# 3449 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Collector_Text_5, 11
EventScript_Collector_10:
# 3451 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 3452 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3453 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Collector_20
# 3455 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Collector_21
# 3460 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Collector_22
# 3465 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Collector_23
# 3469 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Collector_24
EventScript_Collector_18:
# 3488 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Collector_2:
# 3431 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_0
# 3432 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0A_SAFARI_INTRO
	goto EventScript_Collector_1

EventScript_Collector_5:
# 3437 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Collector_Text_2, 1
	goto EventScript_Collector_4

EventScript_Collector_8:
# 3440 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE_0_STATE, 1
	goto_if_gt EventScript_Collector_14
# 3442 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE_0_STATE, 1
	goto_if_eq EventScript_Collector_15
	goto EventScript_Collector_7

EventScript_Collector_11:
# 3447 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 0
	goto EventScript_Collector_10

EventScript_Collector_14:
# 3441 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Collector_Text_3, 2
	goto EventScript_Collector_7

EventScript_Collector_15:
# 3443 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Collector_Text_4, 12
	goto EventScript_Collector_7

EventScript_Collector_20:
# 3454 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_6
	goto EventScript_Collector_18

EventScript_Collector_21:
# 3456 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_7, MSGBOX_AUTOCLOSE
# 3457 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 1
# 3458 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_S1A, 255, 11, 18
# 3459 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_Collector_18

EventScript_Collector_22:
# 3461 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_7, MSGBOX_AUTOCLOSE
# 3462 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 2
# 3463 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_S2A, 255, 10, 17
# 3464 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_Collector_18

EventScript_Collector_23:
# 3466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 3467 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 255, 71, 9
# 3468 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_Collector_18

EventScript_Collector_24:
# 3470 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 3471 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_8, MSGBOX_YESNO
# 3472 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Collector_26
EventScript_Collector_25:
# 3485 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 3486 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_6
	goto EventScript_Collector_18

EventScript_Collector_26:
# 3473 "data/scripts/battle_labyrinth.pory"
	checkmoney 500, 0
# 3474 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Collector_28
# 3477 "data/scripts/battle_labyrinth.pory"
	removemoney 500
# 3478 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 3479 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 3480 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Collector_Text_9
# 3481 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 3482 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
	goto EventScript_Collector_25

EventScript_Collector_28:
# 3475 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_1
	goto EventScript_Collector_25


EventScript_TrainerNotebook::
# 3493 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_3
EventScript_TrainerNotebook_1:
# 3498 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_1
# 3499 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 3500 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 50
	goto_if_gt EventScript_TrainerNotebook_7
# 3500 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_10
EventScript_TrainerNotebook_6:
# 3503 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 49
	goto_if_gt EventScript_TrainerNotebook_14
# 3503 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_17
EventScript_TrainerNotebook_13:
# 3506 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 48
	goto_if_gt EventScript_TrainerNotebook_21
# 3506 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_24
EventScript_TrainerNotebook_20:
# 3509 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 47
	goto_if_gt EventScript_TrainerNotebook_28
# 3509 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_31
EventScript_TrainerNotebook_27:
# 3512 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 46
	goto_if_gt EventScript_TrainerNotebook_35
# 3512 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_38
EventScript_TrainerNotebook_34:
# 3515 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 45
	goto_if_gt EventScript_TrainerNotebook_42
# 3515 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_45
EventScript_TrainerNotebook_41:
# 3518 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 44
	goto_if_gt EventScript_TrainerNotebook_49
# 3518 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_52
EventScript_TrainerNotebook_48:
# 3521 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 43
	goto_if_gt EventScript_TrainerNotebook_56
# 3521 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_59
EventScript_TrainerNotebook_55:
# 3524 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 42
	goto_if_gt EventScript_TrainerNotebook_63
# 3524 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_66
EventScript_TrainerNotebook_62:
# 3527 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 41
	goto_if_gt EventScript_TrainerNotebook_70
# 3527 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_73
EventScript_TrainerNotebook_69:
# 3530 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 40
	goto_if_gt EventScript_TrainerNotebook_77
# 3530 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_80
EventScript_TrainerNotebook_76:
# 3533 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 39
	goto_if_gt EventScript_TrainerNotebook_84
# 3533 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_87
EventScript_TrainerNotebook_83:
# 3536 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 38
	goto_if_gt EventScript_TrainerNotebook_91
# 3536 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_94
EventScript_TrainerNotebook_90:
# 3539 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 37
	goto_if_gt EventScript_TrainerNotebook_98
# 3539 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_101
EventScript_TrainerNotebook_97:
# 3542 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 36
	goto_if_gt EventScript_TrainerNotebook_105
# 3542 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_108
EventScript_TrainerNotebook_104:
# 3545 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 35
	goto_if_gt EventScript_TrainerNotebook_112
# 3545 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_115
EventScript_TrainerNotebook_111:
# 3548 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 34
	goto_if_gt EventScript_TrainerNotebook_119
# 3548 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_122
EventScript_TrainerNotebook_118:
# 3551 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 33
	goto_if_gt EventScript_TrainerNotebook_126
# 3551 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_129
EventScript_TrainerNotebook_125:
# 3554 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 32
	goto_if_gt EventScript_TrainerNotebook_133
# 3554 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_136
EventScript_TrainerNotebook_132:
# 3557 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 31
	goto_if_gt EventScript_TrainerNotebook_140
# 3557 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_143
EventScript_TrainerNotebook_139:
# 3560 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_TrainerNotebook_147
# 3560 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_150
EventScript_TrainerNotebook_146:
# 3563 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 29
	goto_if_gt EventScript_TrainerNotebook_154
# 3563 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_157
EventScript_TrainerNotebook_153:
# 3566 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 28
	goto_if_gt EventScript_TrainerNotebook_161
# 3566 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_164
EventScript_TrainerNotebook_160:
# 3569 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 27
	goto_if_gt EventScript_TrainerNotebook_168
# 3569 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_171
EventScript_TrainerNotebook_167:
# 3572 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 26
	goto_if_gt EventScript_TrainerNotebook_175
# 3572 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_178
EventScript_TrainerNotebook_174:
# 3575 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_gt EventScript_TrainerNotebook_182
# 3575 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_185
EventScript_TrainerNotebook_181:
# 3578 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 23
	goto_if_gt EventScript_TrainerNotebook_189
# 3578 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_192
EventScript_TrainerNotebook_188:
# 3581 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 22
	goto_if_gt EventScript_TrainerNotebook_196
# 3581 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_199
EventScript_TrainerNotebook_195:
# 3584 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 21
	goto_if_gt EventScript_TrainerNotebook_203
# 3584 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_206
EventScript_TrainerNotebook_202:
# 3587 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_TrainerNotebook_210
# 3587 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_213
EventScript_TrainerNotebook_209:
# 3590 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_gt EventScript_TrainerNotebook_217
# 3590 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_220
EventScript_TrainerNotebook_216:
# 3593 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 17
	goto_if_gt EventScript_TrainerNotebook_224
# 3593 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_227
EventScript_TrainerNotebook_223:
# 3596 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 16
	goto_if_gt EventScript_TrainerNotebook_231
# 3596 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_234
EventScript_TrainerNotebook_230:
# 3599 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 15
	goto_if_gt EventScript_TrainerNotebook_238
# 3599 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_241
EventScript_TrainerNotebook_237:
# 3602 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_gt EventScript_TrainerNotebook_245
# 3602 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_248
EventScript_TrainerNotebook_244:
# 3605 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 12
	goto_if_gt EventScript_TrainerNotebook_252
# 3605 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_255
EventScript_TrainerNotebook_251:
# 3608 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 11
	goto_if_gt EventScript_TrainerNotebook_259
# 3608 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_262
EventScript_TrainerNotebook_258:
# 3611 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_TrainerNotebook_266
# 3611 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_269
EventScript_TrainerNotebook_265:
# 3614 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 9
	goto_if_gt EventScript_TrainerNotebook_273
# 3614 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_276
EventScript_TrainerNotebook_272:
# 3617 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_gt EventScript_TrainerNotebook_280
# 3617 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_283
EventScript_TrainerNotebook_279:
# 3620 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_gt EventScript_TrainerNotebook_287
# 3620 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_290
EventScript_TrainerNotebook_286:
# 3623 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_TrainerNotebook_294
# 3623 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_297
EventScript_TrainerNotebook_293:
# 3626 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 4
	goto_if_gt EventScript_TrainerNotebook_301
# 3626 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_304
EventScript_TrainerNotebook_300:
# 3629 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_gt EventScript_TrainerNotebook_308
# 3629 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_311
EventScript_TrainerNotebook_307:
# 3632 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_TrainerNotebook_315
# 3632 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_318
EventScript_TrainerNotebook_314:
# 3635 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 1
	goto_if_gt EventScript_TrainerNotebook_322
# 3635 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_IN_NEW_ZONE, EventScript_TrainerNotebook_325
EventScript_TrainerNotebook_321:
# 3638 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_48, 51
# 3639 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 3640 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3641 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_TrainerNotebook_330
# 3747 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_TrainerNotebook_331
# 3881 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_TrainerNotebook_332
# 4015 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_TrainerNotebook_333
# 4191 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_TrainerNotebook_334
# 4388 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_TrainerNotebook_335
# 4585 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_TrainerNotebook_336
# 4927 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_TrainerNotebook_337
EventScript_TrainerNotebook_328:
# 5155 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 0
# 5156 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_TrainerNotebook_2:
# 3494 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_0
# 3495 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_TrainerNotebook_3:
# 3493 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 1
	goto_if_eq EventScript_TrainerNotebook_2
	goto EventScript_TrainerNotebook_1

EventScript_TrainerNotebook_7:
# 3501 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_2, 50
	goto EventScript_TrainerNotebook_6

EventScript_TrainerNotebook_10:
# 3500 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 50
	goto_if_eq EventScript_TrainerNotebook_7
	goto EventScript_TrainerNotebook_6

EventScript_TrainerNotebook_14:
# 3504 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_3, 49
	goto EventScript_TrainerNotebook_13

EventScript_TrainerNotebook_17:
# 3503 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 49
	goto_if_eq EventScript_TrainerNotebook_14
	goto EventScript_TrainerNotebook_13

EventScript_TrainerNotebook_21:
# 3507 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_4, 48
	goto EventScript_TrainerNotebook_20

EventScript_TrainerNotebook_24:
# 3506 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 48
	goto_if_eq EventScript_TrainerNotebook_21
	goto EventScript_TrainerNotebook_20

EventScript_TrainerNotebook_28:
# 3510 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_5, 47
	goto EventScript_TrainerNotebook_27

EventScript_TrainerNotebook_31:
# 3509 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 47
	goto_if_eq EventScript_TrainerNotebook_28
	goto EventScript_TrainerNotebook_27

EventScript_TrainerNotebook_35:
# 3513 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_6, 46
	goto EventScript_TrainerNotebook_34

EventScript_TrainerNotebook_38:
# 3512 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 46
	goto_if_eq EventScript_TrainerNotebook_35
	goto EventScript_TrainerNotebook_34

EventScript_TrainerNotebook_42:
# 3516 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_7, 45
	goto EventScript_TrainerNotebook_41

EventScript_TrainerNotebook_45:
# 3515 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 45
	goto_if_eq EventScript_TrainerNotebook_42
	goto EventScript_TrainerNotebook_41

EventScript_TrainerNotebook_49:
# 3519 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_8, 44
	goto EventScript_TrainerNotebook_48

EventScript_TrainerNotebook_52:
# 3518 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 44
	goto_if_eq EventScript_TrainerNotebook_49
	goto EventScript_TrainerNotebook_48

EventScript_TrainerNotebook_56:
# 3522 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_9, 43
	goto EventScript_TrainerNotebook_55

EventScript_TrainerNotebook_59:
# 3521 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 43
	goto_if_eq EventScript_TrainerNotebook_56
	goto EventScript_TrainerNotebook_55

EventScript_TrainerNotebook_63:
# 3525 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_10, 42
	goto EventScript_TrainerNotebook_62

EventScript_TrainerNotebook_66:
# 3524 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 42
	goto_if_eq EventScript_TrainerNotebook_63
	goto EventScript_TrainerNotebook_62

EventScript_TrainerNotebook_70:
# 3528 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_11, 41
	goto EventScript_TrainerNotebook_69

EventScript_TrainerNotebook_73:
# 3527 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 41
	goto_if_eq EventScript_TrainerNotebook_70
	goto EventScript_TrainerNotebook_69

EventScript_TrainerNotebook_77:
# 3531 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_12, 40
	goto EventScript_TrainerNotebook_76

EventScript_TrainerNotebook_80:
# 3530 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 40
	goto_if_eq EventScript_TrainerNotebook_77
	goto EventScript_TrainerNotebook_76

EventScript_TrainerNotebook_84:
# 3534 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_13, 39
	goto EventScript_TrainerNotebook_83

EventScript_TrainerNotebook_87:
# 3533 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 39
	goto_if_eq EventScript_TrainerNotebook_84
	goto EventScript_TrainerNotebook_83

EventScript_TrainerNotebook_91:
# 3537 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_14, 38
	goto EventScript_TrainerNotebook_90

EventScript_TrainerNotebook_94:
# 3536 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 38
	goto_if_eq EventScript_TrainerNotebook_91
	goto EventScript_TrainerNotebook_90

EventScript_TrainerNotebook_98:
# 3540 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_15, 37
	goto EventScript_TrainerNotebook_97

EventScript_TrainerNotebook_101:
# 3539 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 37
	goto_if_eq EventScript_TrainerNotebook_98
	goto EventScript_TrainerNotebook_97

EventScript_TrainerNotebook_105:
# 3543 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_16, 36
	goto EventScript_TrainerNotebook_104

EventScript_TrainerNotebook_108:
# 3542 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 36
	goto_if_eq EventScript_TrainerNotebook_105
	goto EventScript_TrainerNotebook_104

EventScript_TrainerNotebook_112:
# 3546 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_17, 35
	goto EventScript_TrainerNotebook_111

EventScript_TrainerNotebook_115:
# 3545 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 35
	goto_if_eq EventScript_TrainerNotebook_112
	goto EventScript_TrainerNotebook_111

EventScript_TrainerNotebook_119:
# 3549 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_18, 34
	goto EventScript_TrainerNotebook_118

EventScript_TrainerNotebook_122:
# 3548 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 34
	goto_if_eq EventScript_TrainerNotebook_119
	goto EventScript_TrainerNotebook_118

EventScript_TrainerNotebook_126:
# 3552 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_19, 33
	goto EventScript_TrainerNotebook_125

EventScript_TrainerNotebook_129:
# 3551 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 33
	goto_if_eq EventScript_TrainerNotebook_126
	goto EventScript_TrainerNotebook_125

EventScript_TrainerNotebook_133:
# 3555 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_20, 32
	goto EventScript_TrainerNotebook_132

EventScript_TrainerNotebook_136:
# 3554 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 32
	goto_if_eq EventScript_TrainerNotebook_133
	goto EventScript_TrainerNotebook_132

EventScript_TrainerNotebook_140:
# 3558 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_21, 31
	goto EventScript_TrainerNotebook_139

EventScript_TrainerNotebook_143:
# 3557 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 31
	goto_if_eq EventScript_TrainerNotebook_140
	goto EventScript_TrainerNotebook_139

EventScript_TrainerNotebook_147:
# 3561 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_22, 30
	goto EventScript_TrainerNotebook_146

EventScript_TrainerNotebook_150:
# 3560 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_eq EventScript_TrainerNotebook_147
	goto EventScript_TrainerNotebook_146

EventScript_TrainerNotebook_154:
# 3564 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_23, 29
	goto EventScript_TrainerNotebook_153

EventScript_TrainerNotebook_157:
# 3563 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 29
	goto_if_eq EventScript_TrainerNotebook_154
	goto EventScript_TrainerNotebook_153

EventScript_TrainerNotebook_161:
# 3567 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_24, 28
	goto EventScript_TrainerNotebook_160

EventScript_TrainerNotebook_164:
# 3566 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 28
	goto_if_eq EventScript_TrainerNotebook_161
	goto EventScript_TrainerNotebook_160

EventScript_TrainerNotebook_168:
# 3570 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_25, 27
	goto EventScript_TrainerNotebook_167

EventScript_TrainerNotebook_171:
# 3569 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 27
	goto_if_eq EventScript_TrainerNotebook_168
	goto EventScript_TrainerNotebook_167

EventScript_TrainerNotebook_175:
# 3573 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_26, 26
	goto EventScript_TrainerNotebook_174

EventScript_TrainerNotebook_178:
# 3572 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 26
	goto_if_eq EventScript_TrainerNotebook_175
	goto EventScript_TrainerNotebook_174

EventScript_TrainerNotebook_182:
# 3576 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_27, 24
	goto EventScript_TrainerNotebook_181

EventScript_TrainerNotebook_185:
# 3575 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_TrainerNotebook_182
	goto EventScript_TrainerNotebook_181

EventScript_TrainerNotebook_189:
# 3579 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_28, 23
	goto EventScript_TrainerNotebook_188

EventScript_TrainerNotebook_192:
# 3578 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 23
	goto_if_eq EventScript_TrainerNotebook_189
	goto EventScript_TrainerNotebook_188

EventScript_TrainerNotebook_196:
# 3582 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_29, 22
	goto EventScript_TrainerNotebook_195

EventScript_TrainerNotebook_199:
# 3581 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 22
	goto_if_eq EventScript_TrainerNotebook_196
	goto EventScript_TrainerNotebook_195

EventScript_TrainerNotebook_203:
# 3585 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_30, 21
	goto EventScript_TrainerNotebook_202

EventScript_TrainerNotebook_206:
# 3584 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 21
	goto_if_eq EventScript_TrainerNotebook_203
	goto EventScript_TrainerNotebook_202

EventScript_TrainerNotebook_210:
# 3588 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_31, 20
	goto EventScript_TrainerNotebook_209

EventScript_TrainerNotebook_213:
# 3587 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_eq EventScript_TrainerNotebook_210
	goto EventScript_TrainerNotebook_209

EventScript_TrainerNotebook_217:
# 3591 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_32, 18
	goto EventScript_TrainerNotebook_216

EventScript_TrainerNotebook_220:
# 3590 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_TrainerNotebook_217
	goto EventScript_TrainerNotebook_216

EventScript_TrainerNotebook_224:
# 3594 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_33, 17
	goto EventScript_TrainerNotebook_223

EventScript_TrainerNotebook_227:
# 3593 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 17
	goto_if_eq EventScript_TrainerNotebook_224
	goto EventScript_TrainerNotebook_223

EventScript_TrainerNotebook_231:
# 3597 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_34, 16
	goto EventScript_TrainerNotebook_230

EventScript_TrainerNotebook_234:
# 3596 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 16
	goto_if_eq EventScript_TrainerNotebook_231
	goto EventScript_TrainerNotebook_230

EventScript_TrainerNotebook_238:
# 3600 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_35, 15
	goto EventScript_TrainerNotebook_237

EventScript_TrainerNotebook_241:
# 3599 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 15
	goto_if_eq EventScript_TrainerNotebook_238
	goto EventScript_TrainerNotebook_237

EventScript_TrainerNotebook_245:
# 3603 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_36, 13
	goto EventScript_TrainerNotebook_244

EventScript_TrainerNotebook_248:
# 3602 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_TrainerNotebook_245
	goto EventScript_TrainerNotebook_244

EventScript_TrainerNotebook_252:
# 3606 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_37, 12
	goto EventScript_TrainerNotebook_251

EventScript_TrainerNotebook_255:
# 3605 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 12
	goto_if_eq EventScript_TrainerNotebook_252
	goto EventScript_TrainerNotebook_251

EventScript_TrainerNotebook_259:
# 3609 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_38, 11
	goto EventScript_TrainerNotebook_258

EventScript_TrainerNotebook_262:
# 3608 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 11
	goto_if_eq EventScript_TrainerNotebook_259
	goto EventScript_TrainerNotebook_258

EventScript_TrainerNotebook_266:
# 3612 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_39, 10
	goto EventScript_TrainerNotebook_265

EventScript_TrainerNotebook_269:
# 3611 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_eq EventScript_TrainerNotebook_266
	goto EventScript_TrainerNotebook_265

EventScript_TrainerNotebook_273:
# 3615 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_40, 9
	goto EventScript_TrainerNotebook_272

EventScript_TrainerNotebook_276:
# 3614 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 9
	goto_if_eq EventScript_TrainerNotebook_273
	goto EventScript_TrainerNotebook_272

EventScript_TrainerNotebook_280:
# 3618 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_41, 7
	goto EventScript_TrainerNotebook_279

EventScript_TrainerNotebook_283:
# 3617 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_TrainerNotebook_280
	goto EventScript_TrainerNotebook_279

EventScript_TrainerNotebook_287:
# 3621 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_42, 6
	goto EventScript_TrainerNotebook_286

EventScript_TrainerNotebook_290:
# 3620 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_eq EventScript_TrainerNotebook_287
	goto EventScript_TrainerNotebook_286

EventScript_TrainerNotebook_294:
# 3624 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_43, 5
	goto EventScript_TrainerNotebook_293

EventScript_TrainerNotebook_297:
# 3623 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_eq EventScript_TrainerNotebook_294
	goto EventScript_TrainerNotebook_293

EventScript_TrainerNotebook_301:
# 3627 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_44, 4
	goto EventScript_TrainerNotebook_300

EventScript_TrainerNotebook_304:
# 3626 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 4
	goto_if_eq EventScript_TrainerNotebook_301
	goto EventScript_TrainerNotebook_300

EventScript_TrainerNotebook_308:
# 3630 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_45, 3
	goto EventScript_TrainerNotebook_307

EventScript_TrainerNotebook_311:
# 3629 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_eq EventScript_TrainerNotebook_308
	goto EventScript_TrainerNotebook_307

EventScript_TrainerNotebook_315:
# 3633 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_46, 2
	goto EventScript_TrainerNotebook_314

EventScript_TrainerNotebook_318:
# 3632 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_eq EventScript_TrainerNotebook_315
	goto EventScript_TrainerNotebook_314

EventScript_TrainerNotebook_322:
# 3636 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_47, 1
	goto EventScript_TrainerNotebook_321

EventScript_TrainerNotebook_325:
# 3635 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 1
	goto_if_eq EventScript_TrainerNotebook_322
	goto EventScript_TrainerNotebook_321

EventScript_TrainerNotebook_330:
# 3642 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_49
# 3643 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 3644 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NINA
# 3645 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NINA
# 3646 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NINA
	goto_if 0, EventScript_TrainerNotebook_339
# 3649 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_SCHOOL_KID_F
EventScript_TrainerNotebook_338:
# 3651 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MARIAM
# 3652 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MARIAM
# 3653 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MARIAM
	goto_if 0, EventScript_TrainerNotebook_371
# 3656 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_370:
# 3658 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_OSCAR
# 3659 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_OSCAR
# 3660 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_OSCAR
	goto_if 0, EventScript_TrainerNotebook_403
# 3663 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_402:
# 3665 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 3666 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
	goto_if 0, EventScript_TrainerNotebook_435
# 3669 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_SCHOOL_KID_M
EventScript_TrainerNotebook_434:
# 3671 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 3672 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3673 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_F, EventScript_TrainerNotebook_467
# 3687 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_468
# 3701 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_469
# 3715 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_M, EventScript_TrainerNotebook_470
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_331:
# 3748 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_60
# 3749 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 3750 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_POLLY
# 3751 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_POLLY
# 3752 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_POLLY
	goto_if 0, EventScript_TrainerNotebook_343
# 3755 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_SCHOOL_KID_F
EventScript_TrainerNotebook_342:
# 3757 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JEREMIAH
# 3758 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JEREMIAH
# 3759 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JEREMIAH
	goto_if 0, EventScript_TrainerNotebook_375
# 3762 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER
EventScript_TrainerNotebook_374:
# 3764 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JOSH
# 3765 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JOSH
# 3766 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, EventScript_TrainerNotebook_407
# 3769 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER + 400
EventScript_TrainerNotebook_406:
# 3771 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_HARPER
# 3772 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_HARPER
# 3773 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_HARPER
	goto_if 0, EventScript_TrainerNotebook_439
# 3776 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_438:
# 3778 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ARTHUR
# 3779 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ARTHUR
# 3780 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ARTHUR
	goto_if 0, EventScript_TrainerNotebook_472
# 3783 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_SCHOOL_KID_M
EventScript_TrainerNotebook_471:
# 3785 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SHAUN_LEVIATHAN_2
# 3786 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, EventScript_TrainerNotebook_515
# 3789 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_514:
# 3791 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 3792 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3793 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_F, EventScript_TrainerNotebook_563
# 3807 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER, EventScript_TrainerNotebook_564
# 3821 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER + 400, EventScript_TrainerNotebook_565
# 3835 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_566
# 3849 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_M, EventScript_TrainerNotebook_567
# 3863 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_568
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_332:
# 3882 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_61
# 3883 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 3884 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JEMMA
# 3885 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JEMMA
# 3886 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JEMMA
	goto_if 0, EventScript_TrainerNotebook_347
# 3889 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_346:
# 3891 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PATRICK
# 3892 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PATRICK
# 3893 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PATRICK
	goto_if 0, EventScript_TrainerNotebook_379
# 3896 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER
EventScript_TrainerNotebook_378:
# 3898 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ANNABELLE
# 3899 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ANNABELLE
# 3900 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ANNABELLE
	goto_if 0, EventScript_TrainerNotebook_411
# 3903 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LADY
EventScript_TrainerNotebook_410:
# 3905 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_BORIS
# 3906 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BORIS
# 3907 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_BORIS
	goto_if 0, EventScript_TrainerNotebook_443
# 3910 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_442:
# 3912 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RICHARD
# 3913 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RICHARD
# 3914 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RICHARD
	goto_if 0, EventScript_TrainerNotebook_476
# 3917 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_RICH_BOY
EventScript_TrainerNotebook_475:
# 3919 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PHILLIPA_LEVIATHAN_3
# 3920 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_3, EventScript_TrainerNotebook_519
# 3923 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_SCHOOL_KID_F
EventScript_TrainerNotebook_518:
# 3925 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 3926 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3927 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_570
# 3941 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER, EventScript_TrainerNotebook_571
# 3955 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LADY, EventScript_TrainerNotebook_572
# 3969 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_573
# 3983 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_RICH_BOY, EventScript_TrainerNotebook_574
# 3997 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_F, EventScript_TrainerNotebook_575
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_333:
# 4016 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_63
# 4017 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 4018 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_HERMAN
# 4019 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_HERMAN
# 4020 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_HERMAN
	goto_if 0, EventScript_TrainerNotebook_351
# 4023 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_SCHOOL_KID_M
EventScript_TrainerNotebook_350:
# 4025 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RALPH
# 4026 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RALPH
# 4027 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RALPH
	goto_if 0, EventScript_TrainerNotebook_383
# 4030 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_382:
# 4032 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CALLIE
# 4033 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CALLIE
# 4034 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CALLIE
	goto_if 0, EventScript_TrainerNotebook_415
# 4037 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_414:
# 4039 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_SANTIAGO
# 4040 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SANTIAGO
# 4041 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_SANTIAGO
	goto_if 0, EventScript_TrainerNotebook_447
# 4044 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER
EventScript_TrainerNotebook_446:
# 4046 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CHLOE_AND_KAYA
# 4047 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CHLOE_AND_KAYA
# 4048 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CHLOE_AND_KAYA
	goto_if 0, EventScript_TrainerNotebook_480
# 4051 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_TWIN
EventScript_TrainerNotebook_479:
# 4053 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_FRED
# 4054 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_FRED
# 4055 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_FRED
	goto_if 0, EventScript_TrainerNotebook_523
# 4058 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_CAMPER
EventScript_TrainerNotebook_522:
# 4060 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_LUCIA
# 4061 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_LUCIA
# 4062 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_LUCIA
	goto_if 0, EventScript_TrainerNotebook_577
# 4065 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_FAIRY_TALE_GIRL
EventScript_TrainerNotebook_576:
# 4067 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4
# 4068 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_3, EventScript_TrainerNotebook_642
# 4071 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_LASS + 400
EventScript_TrainerNotebook_641:
# 4073 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 4074 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 4075 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SCHOOL_KID_M, EventScript_TrainerNotebook_698
# 4089 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_699
# 4103 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_700
# 4117 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER, EventScript_TrainerNotebook_701
# 4131 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_TWIN, EventScript_TrainerNotebook_702
# 4145 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_CAMPER, EventScript_TrainerNotebook_703
# 4159 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_FAIRY_TALE_GIRL, EventScript_TrainerNotebook_704
# 4173 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS + 400, EventScript_TrainerNotebook_705
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_334:
# 4192 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_68
# 4193 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 4194 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ANNE_AND_JUNE
# 4195 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ANNE_AND_JUNE
# 4196 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ANNE_AND_JUNE
	goto_if 0, EventScript_TrainerNotebook_355
# 4199 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_354:
# 4201 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NOVA_AND_CORA
# 4202 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NOVA_AND_CORA
# 4203 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NOVA_AND_CORA
	goto_if 0, EventScript_TrainerNotebook_387
# 4206 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_TWIN
EventScript_TrainerNotebook_386:
# 4208 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CLINTON
# 4209 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CLINTON
# 4210 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CLINTON
	goto_if 0, EventScript_TrainerNotebook_419
# 4213 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_RICH_BOY
EventScript_TrainerNotebook_418:
# 4215 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_REBECCA
# 4216 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_REBECCA
# 4217 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_REBECCA
	goto_if 0, EventScript_TrainerNotebook_451
# 4220 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_POKEFAN_F
EventScript_TrainerNotebook_450:
# 4222 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RYAN
# 4223 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RYAN
# 4224 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RYAN
	goto_if 0, EventScript_TrainerNotebook_484
# 4227 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_POKEFAN_M
EventScript_TrainerNotebook_483:
# 4229 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CAITLYN
# 4230 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CAITLYN
# 4231 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CAITLYN
	goto_if 0, EventScript_TrainerNotebook_527
# 4234 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_PICNICKER
EventScript_TrainerNotebook_526:
# 4236 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KENNETH
# 4237 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KENNETH
# 4238 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KENNETH
	goto_if 0, EventScript_TrainerNotebook_581
# 4241 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_CAMPER
EventScript_TrainerNotebook_580:
# 4243 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KEVIN
# 4244 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KEVIN
# 4245 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KEVIN
	goto_if 0, EventScript_TrainerNotebook_646
# 4248 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER
EventScript_TrainerNotebook_645:
# 4250 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MARIA_LEVIATHAN_5
# 4251 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_5, EventScript_TrainerNotebook_707
# 4254 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_BACKPACKER_F
EventScript_TrainerNotebook_706:
# 4256 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 4257 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 4258 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_756
# 4272 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_TWIN, EventScript_TrainerNotebook_757
# 4286 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_RICH_BOY, EventScript_TrainerNotebook_758
# 4300 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_POKEFAN_F, EventScript_TrainerNotebook_759
# 4314 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_POKEFAN_M, EventScript_TrainerNotebook_760
# 4328 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_PICNICKER, EventScript_TrainerNotebook_761
# 4342 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_CAMPER, EventScript_TrainerNotebook_762
# 4356 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER, EventScript_TrainerNotebook_763
# 4370 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BACKPACKER_F, EventScript_TrainerNotebook_764
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_335:
# 4389 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_69
# 4390 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 4391 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_GILBERT
# 4392 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_GILBERT
# 4393 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_GILBERT
	goto_if 0, EventScript_TrainerNotebook_359
# 4396 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_FISHERMAN
EventScript_TrainerNotebook_358:
# 4398 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MELANIE
# 4399 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MELANIE
# 4400 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MELANIE
	goto_if 0, EventScript_TrainerNotebook_391
# 4403 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_390:
# 4405 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CONSTANCE
# 4406 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CONSTANCE
# 4407 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CONSTANCE
	goto_if 0, EventScript_TrainerNotebook_423
# 4410 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LADY
EventScript_TrainerNotebook_422:
# 4412 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_FRANK
# 4413 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_FRANK
# 4414 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_FRANK
	goto_if 0, EventScript_TrainerNotebook_455
# 4417 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_454:
# 4419 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_DUDLEY
# 4420 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DUDLEY
# 4421 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_DUDLEY
	goto_if 0, EventScript_TrainerNotebook_488
# 4424 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BIRD_KEEPER
EventScript_TrainerNotebook_487:
# 4426 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_DAISY
# 4427 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DAISY
# 4428 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_DAISY
	goto_if 0, EventScript_TrainerNotebook_531
# 4431 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BREEDER_F
EventScript_TrainerNotebook_530:
# 4433 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_VIC_AND_DELL
# 4434 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_VIC_AND_DELL
# 4435 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_VIC_AND_DELL
	goto_if 0, EventScript_TrainerNotebook_585
# 4438 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_TWIN
EventScript_TrainerNotebook_584:
# 4440 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MINA
# 4441 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MINA
# 4442 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MINA
	goto_if 0, EventScript_TrainerNotebook_650
# 4445 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_TUBER_F
EventScript_TrainerNotebook_649:
# 4447 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6
# 4448 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, EventScript_TrainerNotebook_711
# 4451 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_SWIMMER_F_WALKING
EventScript_TrainerNotebook_710:
# 4453 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 4454 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 4455 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_FISHERMAN, EventScript_TrainerNotebook_766
# 4469 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_767
# 4483 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LADY, EventScript_TrainerNotebook_768
# 4497 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_769
# 4511 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BIRD_KEEPER, EventScript_TrainerNotebook_770
# 4525 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BREEDER_F, EventScript_TrainerNotebook_771
# 4539 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_TWIN, EventScript_TrainerNotebook_772
# 4553 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_TUBER_F, EventScript_TrainerNotebook_773
# 4567 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_SWIMMER_F_WALKING, EventScript_TrainerNotebook_774
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_336:
# 4586 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_72
# 4587 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 4588 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MILLIE
# 4589 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MILLIE
# 4590 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MILLIE
	goto_if 0, EventScript_TrainerNotebook_363
# 4593 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_GIRL_3
EventScript_TrainerNotebook_362:
# 4595 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JAMAL
# 4596 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JAMAL
# 4597 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JAMAL
	goto_if 0, EventScript_TrainerNotebook_395
# 4600 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_CAMPER
EventScript_TrainerNotebook_394:
# 4602 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PAIGE
# 4603 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PAIGE
# 4604 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PAIGE
	goto_if 0, EventScript_TrainerNotebook_427
# 4607 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_AROMA_LADY
EventScript_TrainerNotebook_426:
# 4609 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_SETH
# 4610 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SETH
# 4611 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_SETH
	goto_if 0, EventScript_TrainerNotebook_459
# 4614 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_RICH_BOY
EventScript_TrainerNotebook_458:
# 4616 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CONNIE
# 4617 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CONNIE
# 4618 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CONNIE
	goto_if 0, EventScript_TrainerNotebook_492
# 4621 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_LASS
EventScript_TrainerNotebook_491:
# 4623 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PETER
# 4624 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PETER
# 4625 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PETER
	goto_if 0, EventScript_TrainerNotebook_535
# 4628 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_YOUNGSTER
EventScript_TrainerNotebook_534:
# 4630 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_WHITAKER
# 4631 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_WHITAKER
# 4632 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_WHITAKER
	goto_if 0, EventScript_TrainerNotebook_589
# 4635 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BIRD_KEEPER
EventScript_TrainerNotebook_588:
# 4637 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BETTY_LEVIATHAN_7
# 4638 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, EventScript_TrainerNotebook_654
# 4641 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_LADY
EventScript_TrainerNotebook_653:
# 4643 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JIMMY
# 4644 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JIMMY
# 4645 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JIMMY
	goto_if 0, EventScript_TrainerNotebook_715
# 4648 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_COLLECTOR
EventScript_TrainerNotebook_714:
# 4650 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_EMILIANO
# 4651 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_EMILIANO
# 4652 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_EMILIANO
	goto_if 0, EventScript_TrainerNotebook_776
# 4655 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_HIKER
EventScript_TrainerNotebook_775:
# 4657 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_BECKHAM
# 4658 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BECKHAM
# 4659 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_BECKHAM
	goto_if 0, EventScript_TrainerNotebook_868
# 4662 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_POKEMANIAC
EventScript_TrainerNotebook_867:
# 4664 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KAREN
# 4665 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KAREN
# 4666 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KAREN
	goto_if 0, EventScript_TrainerNotebook_940
# 4669 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BACKPACKER_F
EventScript_TrainerNotebook_939:
# 4671 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JAYDEN
# 4672 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JAYDEN
# 4673 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JAYDEN
	goto_if 0, EventScript_TrainerNotebook_995
# 4676 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_HIKER + 400
EventScript_TrainerNotebook_994:
# 4678 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NEIL
# 4679 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NEIL
# 4680 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NEIL
	goto_if 0, EventScript_TrainerNotebook_1029
# 4683 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_RUIN_MANIAC
EventScript_TrainerNotebook_1028:
# 4685 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_TAMARA
# 4686 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_TAMARA
# 4687 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_TAMARA
	goto_if 0, EventScript_TrainerNotebook_1048
# 4690 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_PICNICKER
EventScript_TrainerNotebook_1047:
# 4692 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ALISTAIR_LEVIATHAN_8
# 4693 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_8, EventScript_TrainerNotebook_1052
# 4696 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_53, OBJ_EVENT_GFX_ROUGHNECK
EventScript_TrainerNotebook_1051:
# 4698 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 4699 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 4700 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_GIRL_3, EventScript_TrainerNotebook_1056
# 4714 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_CAMPER, EventScript_TrainerNotebook_1057
# 4728 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_AROMA_LADY, EventScript_TrainerNotebook_1058
# 4742 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_RICH_BOY, EventScript_TrainerNotebook_1059
# 4756 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LASS, EventScript_TrainerNotebook_1060
# 4770 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_YOUNGSTER, EventScript_TrainerNotebook_1061
# 4784 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BIRD_KEEPER, EventScript_TrainerNotebook_1062
# 4798 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_LADY, EventScript_TrainerNotebook_1063
# 4811 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_COLLECTOR, EventScript_TrainerNotebook_1064
# 4825 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_HIKER, EventScript_TrainerNotebook_1065
# 4839 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_POKEMANIAC, EventScript_TrainerNotebook_1066
# 4853 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BACKPACKER_F, EventScript_TrainerNotebook_1067
# 4867 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_HIKER + 400, EventScript_TrainerNotebook_1068
# 4881 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_RUIN_MANIAC, EventScript_TrainerNotebook_1069
# 4895 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_PICNICKER, EventScript_TrainerNotebook_1070
# 4909 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_ROUGHNECK, EventScript_TrainerNotebook_1071
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_337:
# 4928 "data/scripts/battle_labyrinth.pory"
	message EventScript_TrainerNotebook_Text_73
# 4929 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 4930 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_COOPER
# 4931 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_COOPER
# 4932 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_COOPER
	goto_if 0, EventScript_TrainerNotebook_367
# 4935 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_NINJA_BOY
EventScript_TrainerNotebook_366:
# 4937 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CARMINE
# 4938 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CARMINE
# 4939 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CARMINE
	goto_if 0, EventScript_TrainerNotebook_399
# 4942 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BACKPACKER_F
EventScript_TrainerNotebook_398:
# 4944 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JONATHAN
# 4945 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JONATHAN
# 4946 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JONATHAN
	goto_if 0, EventScript_TrainerNotebook_431
# 4949 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BUG_CATCHER
EventScript_TrainerNotebook_430:
# 4951 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CALVIN
# 4952 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CALVIN
# 4953 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CALVIN
	goto_if 0, EventScript_TrainerNotebook_463
# 4956 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_FISHERMAN
EventScript_TrainerNotebook_462:
# 4958 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_LUIS
# 4959 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_LUIS
# 4960 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_LUIS
	goto_if 0, EventScript_TrainerNotebook_496
# 4963 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_51, OBJ_EVENT_GFX_BREEDER_M
EventScript_TrainerNotebook_495:
# 4965 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ARI
# 4966 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ARI
	goto_if 0, EventScript_TrainerNotebook_539
# 4969 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_75, OBJ_EVENT_GFX_CAMPER
EventScript_TrainerNotebook_538:
# 4971 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BERTHA
# 4972 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_BERTHA
	goto_if 0, EventScript_TrainerNotebook_593
# 4975 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_75, OBJ_EVENT_GFX_PICNICKER
EventScript_TrainerNotebook_592:
# 4977 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CASSANDRA
# 4978 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CASSANDRA
	goto_if 0, EventScript_TrainerNotebook_658
# 4981 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_75, OBJ_EVENT_GFX_POKEFAN_F
EventScript_TrainerNotebook_657:
# 4983 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DOMINIC
# 4984 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_DOMINIC
	goto_if 0, EventScript_TrainerNotebook_719
# 4987 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_75, OBJ_EVENT_GFX_POKEFAN_M
EventScript_TrainerNotebook_718:
# 4989 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ERICA
# 4990 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ERICA
	goto_if 0, EventScript_TrainerNotebook_780
# 4993 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_75, OBJ_EVENT_GFX_EXPERT_F
EventScript_TrainerNotebook_779:
# 4995 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_OBJECT
# 4996 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 4997 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_NINJA_BOY, EventScript_TrainerNotebook_872
# 5011 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BACKPACKER_F, EventScript_TrainerNotebook_873
# 5025 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BUG_CATCHER, EventScript_TrainerNotebook_874
# 5039 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_FISHERMAN, EventScript_TrainerNotebook_875
# 5053 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_BREEDER_M, EventScript_TrainerNotebook_876
# 5067 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_CAMPER, EventScript_TrainerNotebook_877
# 5084 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_PICNICKER, EventScript_TrainerNotebook_878
# 5101 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_POKEFAN_F, EventScript_TrainerNotebook_879
# 5118 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_POKEFAN_M, EventScript_TrainerNotebook_880
# 5135 "data/scripts/battle_labyrinth.pory"
	case OBJ_EVENT_GFX_EXPERT_F, EventScript_TrainerNotebook_881
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_339:
# 3647 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_SCHOOL_KID_F
	goto EventScript_TrainerNotebook_338

EventScript_TrainerNotebook_343:
# 3753 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_SCHOOL_KID_F
	goto EventScript_TrainerNotebook_342

EventScript_TrainerNotebook_347:
# 3887 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_346

EventScript_TrainerNotebook_351:
# 4021 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_SCHOOL_KID_M
	goto EventScript_TrainerNotebook_350

EventScript_TrainerNotebook_355:
# 4197 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_354

EventScript_TrainerNotebook_359:
# 4394 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_FISHERMAN
	goto EventScript_TrainerNotebook_358

EventScript_TrainerNotebook_363:
# 4591 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_GIRL_3
	goto EventScript_TrainerNotebook_362

EventScript_TrainerNotebook_367:
# 4933 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_NINJA_BOY
	goto EventScript_TrainerNotebook_366

EventScript_TrainerNotebook_371:
# 3654 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_370

EventScript_TrainerNotebook_375:
# 3760 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER
	goto EventScript_TrainerNotebook_374

EventScript_TrainerNotebook_379:
# 3894 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER
	goto EventScript_TrainerNotebook_378

EventScript_TrainerNotebook_383:
# 4028 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_382

EventScript_TrainerNotebook_387:
# 4204 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_TWIN
	goto EventScript_TrainerNotebook_386

EventScript_TrainerNotebook_391:
# 4401 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_390

EventScript_TrainerNotebook_395:
# 4598 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_CAMPER
	goto EventScript_TrainerNotebook_394

EventScript_TrainerNotebook_399:
# 4940 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BACKPACKER_F
	goto EventScript_TrainerNotebook_398

EventScript_TrainerNotebook_403:
# 3661 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_402

EventScript_TrainerNotebook_407:
# 3767 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER + 400
	goto EventScript_TrainerNotebook_406

EventScript_TrainerNotebook_411:
# 3901 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LADY
	goto EventScript_TrainerNotebook_410

EventScript_TrainerNotebook_415:
# 4035 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_414

EventScript_TrainerNotebook_419:
# 4211 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_RICH_BOY
	goto EventScript_TrainerNotebook_418

EventScript_TrainerNotebook_423:
# 4408 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LADY
	goto EventScript_TrainerNotebook_422

EventScript_TrainerNotebook_427:
# 4605 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_AROMA_LADY
	goto EventScript_TrainerNotebook_426

EventScript_TrainerNotebook_431:
# 4947 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER
	goto EventScript_TrainerNotebook_430

EventScript_TrainerNotebook_435:
# 3667 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_SCHOOL_KID_M
	goto EventScript_TrainerNotebook_434

EventScript_TrainerNotebook_439:
# 3774 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_438

EventScript_TrainerNotebook_443:
# 3908 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_442

EventScript_TrainerNotebook_447:
# 4042 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER
	goto EventScript_TrainerNotebook_446

EventScript_TrainerNotebook_451:
# 4218 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_POKEFAN_F
	goto EventScript_TrainerNotebook_450

EventScript_TrainerNotebook_455:
# 4415 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_454

EventScript_TrainerNotebook_459:
# 4612 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_RICH_BOY
	goto EventScript_TrainerNotebook_458

EventScript_TrainerNotebook_463:
# 4954 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_FISHERMAN
	goto EventScript_TrainerNotebook_462

EventScript_TrainerNotebook_467:
# 3674 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_NINA
# 3675 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3676 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NINA
# 3677 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NINA
# 3678 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NINA
	goto_if 0, EventScript_TrainerNotebook_499
# 3685 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_468:
# 3688 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MARIAM
# 3689 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3690 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MARIAM
# 3691 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MARIAM
# 3692 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MARIAM
	goto_if 0, EventScript_TrainerNotebook_502
# 3699 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_469:
# 3702 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_OSCAR
# 3703 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3704 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_OSCAR
# 3705 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_OSCAR
# 3706 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_OSCAR
	goto_if 0, EventScript_TrainerNotebook_505
# 3713 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_470:
# 3716 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_509
# 3716 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_509
# 3726 "data/scripts/battle_labyrinth.pory"
	switch VAR_STARTER_MON
# 3727 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_TrainerNotebook_559
# 3729 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_TrainerNotebook_560
# 3731 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_TrainerNotebook_561
EventScript_TrainerNotebook_508:
# 3735 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3736 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
# 3737 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_1, EventScript_TrainerNotebook_551
# 3744 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_59
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_472:
# 3781 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_SCHOOL_KID_M
	goto EventScript_TrainerNotebook_471

EventScript_TrainerNotebook_476:
# 3915 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_RICH_BOY
	goto EventScript_TrainerNotebook_475

EventScript_TrainerNotebook_480:
# 4049 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_TWIN
	goto EventScript_TrainerNotebook_479

EventScript_TrainerNotebook_484:
# 4225 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_POKEFAN_M
	goto EventScript_TrainerNotebook_483

EventScript_TrainerNotebook_488:
# 4422 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BIRD_KEEPER
	goto EventScript_TrainerNotebook_487

EventScript_TrainerNotebook_492:
# 4619 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_LASS
	goto EventScript_TrainerNotebook_491

EventScript_TrainerNotebook_496:
# 4961 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BREEDER_M
	goto EventScript_TrainerNotebook_495

EventScript_TrainerNotebook_499:
# 3679 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_542
# 3682 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_502:
# 3693 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_545
# 3696 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_505:
# 3707 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_548
# 3710 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_509:
# 3717 "data/scripts/battle_labyrinth.pory"
	switch VAR_STARTER_MON
# 3718 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_TrainerNotebook_555
# 3720 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_TrainerNotebook_556
# 3722 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_TrainerNotebook_557
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_515:
# 3787 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_514

EventScript_TrainerNotebook_519:
# 3921 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_SCHOOL_KID_F
	goto EventScript_TrainerNotebook_518

EventScript_TrainerNotebook_523:
# 4056 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_CAMPER
	goto EventScript_TrainerNotebook_522

EventScript_TrainerNotebook_527:
# 4232 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_PICNICKER
	goto EventScript_TrainerNotebook_526

EventScript_TrainerNotebook_531:
# 4429 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BREEDER_F
	goto EventScript_TrainerNotebook_530

EventScript_TrainerNotebook_535:
# 4626 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_YOUNGSTER
	goto EventScript_TrainerNotebook_534

EventScript_TrainerNotebook_539:
# 4967 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_74, OBJ_EVENT_GFX_CAMPER
	goto EventScript_TrainerNotebook_538

EventScript_TrainerNotebook_542:
# 3680 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_545:
# 3694 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_548:
# 3708 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_551:
# 3738 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_596
# 3741 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_58
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_555:
# 3719 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER_CHALLENGE
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_556:
# 3721 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER_CHALLENGE
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_557:
# 3723 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER_CHALLENGE
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_559:
# 3728 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_GRASS_STARTER
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_560:
# 3730 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_FIRE_STARTER
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_561:
# 3732 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COREY_LEVIATHAN_1_WATER_STARTER
	goto EventScript_TrainerNotebook_508

EventScript_TrainerNotebook_563:
# 3794 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_POLLY
# 3795 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3796 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_POLLY
# 3797 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_POLLY
# 3798 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_POLLY
	goto_if 0, EventScript_TrainerNotebook_599
# 3805 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_564:
# 3808 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JEREMIAH
# 3809 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3810 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JEREMIAH
# 3811 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JEREMIAH
# 3812 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JEREMIAH
	goto_if 0, EventScript_TrainerNotebook_602
# 3819 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_565:
# 3822 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JOSH
# 3823 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3824 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JOSH
# 3825 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JOSH
# 3826 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, EventScript_TrainerNotebook_605
# 3833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_566:
# 3836 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_HARPER
# 3837 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3838 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_HARPER
# 3839 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_HARPER
# 3840 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_HARPER
	goto_if 0, EventScript_TrainerNotebook_608
# 3847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_567:
# 3850 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ARTHUR
# 3851 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3852 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ARTHUR
# 3853 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ARTHUR
# 3854 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ARTHUR
	goto_if 0, EventScript_TrainerNotebook_611
# 3861 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_568:
# 3864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_615
# 3864 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_615
# 3867 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_SHAUN_LEVIATHAN_2
EventScript_TrainerNotebook_614:
# 3869 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3870 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SHAUN_LEVIATHAN_2
# 3871 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, EventScript_TrainerNotebook_676
# 3878 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_59
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_570:
# 3928 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JEMMA
# 3929 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3930 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JEMMA
# 3931 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JEMMA
# 3932 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JEMMA
	goto_if 0, EventScript_TrainerNotebook_620
# 3939 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_571:
# 3942 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_PATRICK
# 3943 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3944 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PATRICK
# 3945 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PATRICK
# 3946 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PATRICK
	goto_if 0, EventScript_TrainerNotebook_623
# 3953 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_572:
# 3956 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ANNABELLE
# 3957 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3958 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ANNABELLE
# 3959 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ANNABELLE
# 3960 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ANNABELLE
	goto_if 0, EventScript_TrainerNotebook_626
# 3967 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_573:
# 3970 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BORIS
# 3971 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3972 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_BORIS
# 3973 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BORIS
# 3974 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_BORIS
	goto_if 0, EventScript_TrainerNotebook_629
# 3981 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_574:
# 3984 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_RICHARD
# 3985 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 3986 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RICHARD
# 3987 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RICHARD
# 3988 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RICHARD
	goto_if 0, EventScript_TrainerNotebook_632
# 3995 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_575:
# 3998 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_636
# 3998 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_636
# 4001 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_PHILLIPA_LEVIATHAN_3
EventScript_TrainerNotebook_635:
# 4003 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4004 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PHILLIPA_LEVIATHAN_3
# 4005 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_3, EventScript_TrainerNotebook_694
# 4012 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_59
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_577:
# 4063 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_FAIRY_TALE_GIRL
	goto EventScript_TrainerNotebook_576

EventScript_TrainerNotebook_581:
# 4239 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_CAMPER
	goto EventScript_TrainerNotebook_580

EventScript_TrainerNotebook_585:
# 4436 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_TWIN
	goto EventScript_TrainerNotebook_584

EventScript_TrainerNotebook_589:
# 4633 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BIRD_KEEPER
	goto EventScript_TrainerNotebook_588

EventScript_TrainerNotebook_593:
# 4973 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_74, OBJ_EVENT_GFX_PICNICKER
	goto EventScript_TrainerNotebook_592

EventScript_TrainerNotebook_596:
# 3739 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_599:
# 3799 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_661
# 3802 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_602:
# 3813 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_664
# 3816 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_605:
# 3827 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_667
# 3830 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_608:
# 3841 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_670
# 3844 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_611:
# 3855 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_673
# 3858 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_615:
# 3865 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_SHAUN_LEVIATHAN_2_CHALLENGE
	goto EventScript_TrainerNotebook_614

EventScript_TrainerNotebook_620:
# 3933 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_679
# 3936 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_55
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_623:
# 3947 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_682
# 3950 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_626:
# 3961 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_685
# 3964 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_629:
# 3975 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_688
# 3978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_632:
# 3989 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_691
# 3992 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_636:
# 3999 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_PHILLIPA_LEVIATHAN_3_CHALLENGE
	goto EventScript_TrainerNotebook_635

EventScript_TrainerNotebook_642:
# 4069 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_LASS + 400
	goto EventScript_TrainerNotebook_641

EventScript_TrainerNotebook_646:
# 4246 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BUG_CATCHER
	goto EventScript_TrainerNotebook_645

EventScript_TrainerNotebook_650:
# 4443 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_TUBER_F
	goto EventScript_TrainerNotebook_649

EventScript_TrainerNotebook_654:
# 4639 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_LADY
	goto EventScript_TrainerNotebook_653

EventScript_TrainerNotebook_658:
# 4979 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_74, OBJ_EVENT_GFX_POKEFAN_F
	goto EventScript_TrainerNotebook_657

EventScript_TrainerNotebook_661:
# 3800 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_664:
# 3814 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_667:
# 3828 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_670:
# 3842 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_673:
# 3856 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_676:
# 3872 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_722
# 3875 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_58
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_679:
# 3934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_682:
# 3948 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_685:
# 3962 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_688:
# 3976 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_691:
# 3990 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_694:
# 4006 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_725
# 4009 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_58
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_698:
# 4076 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_HERMAN
# 4077 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4078 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_HERMAN
# 4079 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_HERMAN
# 4080 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_HERMAN
	goto_if 0, EventScript_TrainerNotebook_728
# 4087 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_699:
# 4090 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_RALPH
# 4091 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4092 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RALPH
# 4093 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RALPH
# 4094 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RALPH
	goto_if 0, EventScript_TrainerNotebook_731
# 4101 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_700:
# 4104 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CALLIE
# 4105 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4106 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CALLIE
# 4107 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CALLIE
# 4108 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CALLIE
	goto_if 0, EventScript_TrainerNotebook_734
# 4115 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_701:
# 4118 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_SANTIAGO
# 4119 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4120 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_SANTIAGO
# 4121 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SANTIAGO
# 4122 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_SANTIAGO
	goto_if 0, EventScript_TrainerNotebook_737
# 4129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_702:
# 4132 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CHLOE_AND_KAYA
# 4133 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4134 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CHLOE_AND_KAYA
# 4135 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CHLOE_AND_KAYA
# 4136 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CHLOE_AND_KAYA
	goto_if 0, EventScript_TrainerNotebook_740
# 4143 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_66
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_703:
# 4146 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_FRED
# 4147 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4148 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_FRED
# 4149 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_FRED
# 4150 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_FRED
	goto_if 0, EventScript_TrainerNotebook_743
# 4157 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_704:
# 4160 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_LUCIA
# 4161 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4162 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_LUCIA
# 4163 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_LUCIA
# 4164 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_LUCIA
	goto_if 0, EventScript_TrainerNotebook_746
# 4171 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_705:
# 4174 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_750
# 4174 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_750
# 4177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4
EventScript_TrainerNotebook_749:
# 4179 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4180 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4
# 4181 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_4, EventScript_TrainerNotebook_804
# 4188 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_59
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_707:
# 4252 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_BACKPACKER_F
	goto EventScript_TrainerNotebook_706

EventScript_TrainerNotebook_711:
# 4449 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_SWIMMER_F_WALKING
	goto EventScript_TrainerNotebook_710

EventScript_TrainerNotebook_715:
# 4646 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_COLLECTOR
	goto EventScript_TrainerNotebook_714

EventScript_TrainerNotebook_719:
# 4985 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_74, OBJ_EVENT_GFX_POKEFAN_M
	goto EventScript_TrainerNotebook_718

EventScript_TrainerNotebook_722:
# 3873 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_725:
# 4007 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_728:
# 4081 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_783
# 4084 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_731:
# 4095 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_786
# 4098 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_734:
# 4109 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_789
# 4112 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_737:
# 4123 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_792
# 4126 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_740:
# 4137 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_795
# 4140 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_65
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_743:
# 4151 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_798
# 4154 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_746:
# 4165 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_801
# 4168 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_750:
# 4175 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE
	goto EventScript_TrainerNotebook_749

EventScript_TrainerNotebook_756:
# 4259 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ANNE_AND_JUNE
# 4260 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4261 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_ANNE_AND_JUNE
# 4262 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ANNE_AND_JUNE
# 4263 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_ANNE_AND_JUNE
	goto_if 0, EventScript_TrainerNotebook_807
# 4270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_66
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_757:
# 4273 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_NOVA_AND_CORA
# 4274 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4275 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NOVA_AND_CORA
# 4276 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NOVA_AND_CORA
# 4277 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NOVA_AND_CORA
	goto_if 0, EventScript_TrainerNotebook_810
# 4284 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_66
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_758:
# 4287 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CLINTON
# 4288 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4289 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CLINTON
# 4290 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CLINTON
# 4291 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CLINTON
	goto_if 0, EventScript_TrainerNotebook_813
# 4298 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_759:
# 4301 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_REBECCA
# 4302 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4303 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_REBECCA
# 4304 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_REBECCA
# 4305 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_REBECCA
	goto_if 0, EventScript_TrainerNotebook_816
# 4312 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_760:
# 4315 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_RYAN
# 4316 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4317 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_RYAN
# 4318 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_RYAN
# 4319 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_RYAN
	goto_if 0, EventScript_TrainerNotebook_819
# 4326 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_761:
# 4329 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CAITLYN
# 4330 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4331 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CAITLYN
# 4332 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CAITLYN
# 4333 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CAITLYN
	goto_if 0, EventScript_TrainerNotebook_822
# 4340 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_762:
# 4343 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_KENNETH
# 4344 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4345 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KENNETH
# 4346 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KENNETH
# 4347 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KENNETH
	goto_if 0, EventScript_TrainerNotebook_825
# 4354 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_763:
# 4357 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_KEVIN
# 4358 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4359 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KEVIN
# 4360 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KEVIN
# 4361 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KEVIN
	goto_if 0, EventScript_TrainerNotebook_828
# 4368 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_56
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_764:
# 4371 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_832
# 4371 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_832
# 4374 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MARIA_LEVIATHAN_5
EventScript_TrainerNotebook_831:
# 4376 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4377 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MARIA_LEVIATHAN_5
# 4378 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_5, EventScript_TrainerNotebook_909
# 4385 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_59
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_766:
# 4456 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_GILBERT
# 4457 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4458 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_GILBERT
# 4459 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_GILBERT
# 4460 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_GILBERT
	goto_if 0, EventScript_TrainerNotebook_837
# 4467 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_767:
# 4470 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MELANIE
# 4471 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4472 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MELANIE
# 4473 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MELANIE
# 4474 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MELANIE
	goto_if 0, EventScript_TrainerNotebook_840
# 4481 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_768:
# 4484 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CONSTANCE
# 4485 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4486 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CONSTANCE
# 4487 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CONSTANCE
# 4488 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CONSTANCE
	goto_if 0, EventScript_TrainerNotebook_843
# 4495 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_769:
# 4498 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_FRANK
# 4499 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4500 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_FRANK
# 4501 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_FRANK
# 4502 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_FRANK
	goto_if 0, EventScript_TrainerNotebook_846
# 4509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_770:
# 4512 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_DUDLEY
# 4513 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4514 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_DUDLEY
# 4515 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DUDLEY
# 4516 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_DUDLEY
	goto_if 0, EventScript_TrainerNotebook_849
# 4523 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_771:
# 4526 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_DAISY
# 4527 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4528 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_DAISY
# 4529 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DAISY
# 4530 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_DAISY
	goto_if 0, EventScript_TrainerNotebook_852
# 4537 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_772:
# 4540 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_VIC_AND_DELL
# 4541 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4542 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_VIC_AND_DELL
# 4543 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_VIC_AND_DELL
# 4544 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_VIC_AND_DELL
	goto_if 0, EventScript_TrainerNotebook_855
# 4551 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_773:
# 4554 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MINA
# 4555 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4556 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MINA
# 4557 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MINA
# 4558 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MINA
	goto_if 0, EventScript_TrainerNotebook_858
# 4565 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_774:
# 4568 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_862
# 4568 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_862
# 4571 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6
EventScript_TrainerNotebook_861:
# 4573 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4574 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6
# 4575 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, EventScript_TrainerNotebook_936
# 4582 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_71
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_776:
# 4653 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_HIKER
	goto EventScript_TrainerNotebook_775

EventScript_TrainerNotebook_780:
# 4991 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_74, OBJ_EVENT_GFX_EXPERT_F
	goto EventScript_TrainerNotebook_779

EventScript_TrainerNotebook_783:
# 4082 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_786:
# 4096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_789:
# 4110 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_792:
# 4124 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_795:
# 4138 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_64
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_798:
# 4152 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_801:
# 4166 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_804:
# 4182 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_882
# 4185 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_67
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_807:
# 4264 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_885
# 4267 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_65
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_810:
# 4278 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_888
# 4281 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_65
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_813:
# 4292 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_891
# 4295 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_816:
# 4306 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_894
# 4309 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_819:
# 4320 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_897
# 4323 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_822:
# 4334 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_900
# 4337 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_825:
# 4348 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_903
# 4351 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_828:
# 4362 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_906
# 4365 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_832:
# 4372 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MARIA_LEVIATHAN_5_CHALLENGE
	goto EventScript_TrainerNotebook_831

EventScript_TrainerNotebook_837:
# 4461 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_912
# 4464 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_840:
# 4475 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_915
# 4478 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_843:
# 4489 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_918
# 4492 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_846:
# 4503 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_921
# 4506 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_849:
# 4517 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_924
# 4520 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_852:
# 4531 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_927
# 4534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_855:
# 4545 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_930
# 4548 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_858:
# 4559 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_933
# 4562 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_862:
# 4569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ZACK_AND_COBY_LEVIATHAN_6_CHALLENGE
	goto EventScript_TrainerNotebook_861

EventScript_TrainerNotebook_868:
# 4660 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_POKEMANIAC
	goto EventScript_TrainerNotebook_867

EventScript_TrainerNotebook_872:
# 4998 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_COOPER
# 4999 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5000 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_COOPER
# 5001 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_COOPER
# 5002 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_COOPER
	goto_if 0, EventScript_TrainerNotebook_943
# 5009 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_873:
# 5012 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CARMINE
# 5013 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5014 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CARMINE
# 5015 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CARMINE
# 5016 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CARMINE
	goto_if 0, EventScript_TrainerNotebook_946
# 5023 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_874:
# 5026 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JONATHAN
# 5027 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5028 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JONATHAN
# 5029 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JONATHAN
# 5030 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JONATHAN
	goto_if 0, EventScript_TrainerNotebook_949
# 5037 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_875:
# 5040 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CALVIN
# 5041 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5042 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CALVIN
# 5043 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CALVIN
# 5044 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CALVIN
	goto_if 0, EventScript_TrainerNotebook_952
# 5051 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_876:
# 5054 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_LUIS
# 5055 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5056 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_LUIS
# 5057 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_LUIS
# 5058 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_LUIS
	goto_if 0, EventScript_TrainerNotebook_955
# 5065 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_877:
# 5068 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_959
# 5068 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_959
# 5071 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ARI
EventScript_TrainerNotebook_958:
# 5073 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5074 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ARI
# 5075 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_HIDE_ZONE9A_ARI_WINSTRATE, EventScript_TrainerNotebook_1013
# 5082 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_78
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_878:
# 5085 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_965
# 5085 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_965
# 5088 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BERTHA
EventScript_TrainerNotebook_964:
# 5090 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5091 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BERTHA
# 5092 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_HIDE_ZONE9A_ARI_WINSTRATE, EventScript_TrainerNotebook_1016
# 5099 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_78
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_879:
# 5102 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_971
# 5102 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_971
# 5105 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CASSANDRA
EventScript_TrainerNotebook_970:
# 5107 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5108 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CASSANDRA
# 5109 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_HIDE_ZONE9A_ARI_WINSTRATE, EventScript_TrainerNotebook_1019
# 5116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_78
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_880:
# 5119 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_977
# 5119 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_977
# 5122 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_DOMINIC
EventScript_TrainerNotebook_976:
# 5124 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5125 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_DOMINIC
# 5126 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_HIDE_ZONE9A_ARI_WINSTRATE, EventScript_TrainerNotebook_1022
# 5133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_78
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_881:
# 5136 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_983
# 5136 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_983
# 5139 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ERICA
EventScript_TrainerNotebook_982:
# 5141 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 5142 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ERICA
# 5143 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_HIDE_ZONE9A_ARI_WINSTRATE, EventScript_TrainerNotebook_1025
# 5150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_78
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_882:
# 4183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_885:
# 4265 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_64
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_888:
# 4279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_64
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_891:
# 4293 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_894:
# 4307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_897:
# 4321 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_900:
# 4335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_903:
# 4349 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_906:
# 4363 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_909:
# 4379 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_988
# 4382 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_67
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_912:
# 4462 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_915:
# 4476 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_918:
# 4490 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_921:
# 4504 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_924:
# 4518 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_927:
# 4532 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_930:
# 4546 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_933:
# 4560 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_936:
# 4576 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_991
# 4579 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_67
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_940:
# 4667 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_BACKPACKER_F
	goto EventScript_TrainerNotebook_939

EventScript_TrainerNotebook_943:
# 5003 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_998
# 5006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_946:
# 5017 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1001
# 5020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_949:
# 5031 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1004
# 5034 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_952:
# 5045 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1007
# 5048 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_955:
# 5059 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1010
# 5062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_959:
# 5069 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ARI_CHALLENGE
	goto EventScript_TrainerNotebook_958

EventScript_TrainerNotebook_965:
# 5086 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BERTHA_CHALLENGE
	goto EventScript_TrainerNotebook_964

EventScript_TrainerNotebook_971:
# 5103 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CASSANDRA_CHALLENGE
	goto EventScript_TrainerNotebook_970

EventScript_TrainerNotebook_977:
# 5120 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_DOMINIC_CHALLENGE
	goto EventScript_TrainerNotebook_976

EventScript_TrainerNotebook_983:
# 5137 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ERICA_CHALLENGE
	goto EventScript_TrainerNotebook_982

EventScript_TrainerNotebook_988:
# 4380 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_991:
# 4577 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_995:
# 4674 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_HIKER + 400
	goto EventScript_TrainerNotebook_994

EventScript_TrainerNotebook_998:
# 5004 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1001:
# 5018 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1004:
# 5032 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1007:
# 5046 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1010:
# 5060 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1013:
# 5076 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1032
# 5079 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_77
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1016:
# 5093 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1035
# 5096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_77
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1019:
# 5110 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1038
# 5113 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_77
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1022:
# 5127 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1041
# 5130 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_77
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1025:
# 5144 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1044
# 5147 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_77
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1029:
# 4681 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_RUIN_MANIAC
	goto EventScript_TrainerNotebook_1028

EventScript_TrainerNotebook_1032:
# 5077 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_76
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1035:
# 5094 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_76
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1038:
# 5111 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_76
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1041:
# 5128 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_76
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1044:
# 5145 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_76
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1048:
# 4688 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_50, OBJ_EVENT_GFX_PICNICKER
	goto EventScript_TrainerNotebook_1047

EventScript_TrainerNotebook_1052:
# 4694 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_TrainerNotebook_Text_52, OBJ_EVENT_GFX_ROUGHNECK
	goto EventScript_TrainerNotebook_1051

EventScript_TrainerNotebook_1056:
# 4701 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_MILLIE
# 4702 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4703 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_MILLIE
# 4704 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_MILLIE
# 4705 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_MILLIE
	goto_if 0, EventScript_TrainerNotebook_1072
# 4712 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1057:
# 4715 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JAMAL
# 4716 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4717 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JAMAL
# 4718 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JAMAL
# 4719 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JAMAL
	goto_if 0, EventScript_TrainerNotebook_1075
# 4726 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1058:
# 4729 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_PAIGE
# 4730 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4731 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PAIGE
# 4732 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PAIGE
# 4733 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PAIGE
	goto_if 0, EventScript_TrainerNotebook_1078
# 4740 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1059:
# 4743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_SETH
# 4744 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4745 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_SETH
# 4746 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_SETH
# 4747 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_SETH
	goto_if 0, EventScript_TrainerNotebook_1081
# 4754 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1060:
# 4757 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_CONNIE
# 4758 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4759 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_CONNIE
# 4760 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_CONNIE
# 4761 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_CONNIE
	goto_if 0, EventScript_TrainerNotebook_1084
# 4768 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1061:
# 4771 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_PETER
# 4772 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4773 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_PETER
# 4774 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_PETER
# 4775 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_PETER
	goto_if 0, EventScript_TrainerNotebook_1087
# 4782 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1062:
# 4785 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_WHITAKER
# 4786 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4787 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_WHITAKER
# 4788 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_WHITAKER
# 4789 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_WHITAKER
	goto_if 0, EventScript_TrainerNotebook_1090
# 4796 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1063:
# 4799 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_1094
# 4799 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_1094
# 4802 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BETTY_LEVIATHAN_7
EventScript_TrainerNotebook_1093:
# 4804 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4805 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BETTY_LEVIATHAN_7
# 4806 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, EventScript_TrainerNotebook_1147
# 4809 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_71
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1064:
# 4812 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JIMMY
# 4813 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4814 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JIMMY
# 4815 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JIMMY
# 4816 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JIMMY
	goto_if 0, EventScript_TrainerNotebook_1099
# 4823 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1065:
# 4826 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_EMILIANO
# 4827 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4828 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_EMILIANO
# 4829 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_EMILIANO
# 4830 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_EMILIANO
	goto_if 0, EventScript_TrainerNotebook_1102
# 4837 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1066:
# 4840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BECKHAM
# 4841 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4842 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_BECKHAM
# 4843 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_BECKHAM
# 4844 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_BECKHAM
	goto_if 0, EventScript_TrainerNotebook_1105
# 4851 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1067:
# 4854 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_KAREN
# 4855 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4856 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_KAREN
# 4857 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_KAREN
# 4858 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_KAREN
	goto_if 0, EventScript_TrainerNotebook_1108
# 4865 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1068:
# 4868 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_JAYDEN
# 4869 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4870 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_JAYDEN
# 4871 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_JAYDEN
# 4872 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_JAYDEN
	goto_if 0, EventScript_TrainerNotebook_1111
# 4879 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1069:
# 4882 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_NEIL
# 4883 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4884 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_NEIL
# 4885 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_NEIL
# 4886 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_NEIL
	goto_if 0, EventScript_TrainerNotebook_1114
# 4893 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1070:
# 4896 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_TAMARA
# 4897 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4898 "data/scripts/battle_labyrinth.pory"
	buffertrainerclassname 1, TRAINER_PBL_TAMARA
# 4899 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_TAMARA
# 4900 "data/scripts/battle_labyrinth.pory"
	checktrainerflag TRAINER_PBL_TAMARA
	goto_if 0, EventScript_TrainerNotebook_1117
# 4907 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_70
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1071:
# 4910 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_TrainerNotebook_1121
# 4910 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_TrainerNotebook_1121
# 4913 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ALISTAIR_LEVIATHAN_8
EventScript_TrainerNotebook_1120:
# 4915 "data/scripts/battle_labyrinth.pory"
	special BufferTrainerPartyPokemon
# 4916 "data/scripts/battle_labyrinth.pory"
	buffertrainername 2, TRAINER_PBL_ALISTAIR_LEVIATHAN_8
# 4917 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_8, EventScript_TrainerNotebook_1171
# 4924 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_71
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1072:
# 4706 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1126
# 4709 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1075:
# 4720 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1129
# 4723 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1078:
# 4734 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1132
# 4737 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1081:
# 4748 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1135
# 4751 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1084:
# 4762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1138
# 4765 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1087:
# 4776 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1141
# 4779 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1090:
# 4790 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1144
# 4793 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1094:
# 4800 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_BETTY_LEVIATHAN_7_CHALLENGE
	goto EventScript_TrainerNotebook_1093

EventScript_TrainerNotebook_1099:
# 4817 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1150
# 4820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1102:
# 4831 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1153
# 4834 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1105:
# 4845 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1156
# 4848 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1108:
# 4859 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1159
# 4862 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1111:
# 4873 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1162
# 4876 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1114:
# 4887 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1165
# 4890 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1117:
# 4901 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1168
# 4904 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_62
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1121:
# 4911 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, TRAINER_PBL_ALISTAIR_LEVIATHAN_8_CHALLENGE
	goto EventScript_TrainerNotebook_1120

EventScript_TrainerNotebook_1126:
# 4707 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1129:
# 4721 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1132:
# 4735 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1135:
# 4749 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1138:
# 4763 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1141:
# 4777 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1144:
# 4791 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1147:
# 4807 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_67
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1150:
# 4818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1153:
# 4832 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1156:
# 4846 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1159:
# 4860 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1162:
# 4874 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1165:
# 4888 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1168:
# 4902 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_54
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1171:
# 4918 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_TrainerNotebook_1174
# 4921 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_67
	goto EventScript_TrainerNotebook_328

EventScript_TrainerNotebook_1174:
# 4919 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_TrainerNotebook_Text_57
	goto EventScript_TrainerNotebook_328


Debug_CheatStart_PBL::
# 5161 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
# 5162 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
# 5163 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 5164 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
# 5165 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
# 5166 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
# 5167 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 5169 "data/scripts/battle_labyrinth.pory"
	random 5
# 5170 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5171 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_3
# 5173 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_4
# 5175 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_5
# 5177 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_6
# 5179 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_7
Debug_CheatStart_PBL_1:
# 5182 "data/scripts/battle_labyrinth.pory"
	random 5
# 5183 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5184 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_10
# 5186 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_11
# 5188 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_12
# 5190 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_13
# 5192 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_14
Debug_CheatStart_PBL_8:
# 5195 "data/scripts/battle_labyrinth.pory"
	random 5
# 5196 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5197 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_17
# 5199 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_18
# 5201 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_19
# 5203 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_20
# 5205 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_21
Debug_CheatStart_PBL_15:
# 5208 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RARE_CANDY, 900
# 5209 "data/scripts/battle_labyrinth.pory"
	removemoney 2500
# 5210 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 6
# 5211 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 5212 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 5214 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WAILMER_PAIL
# 5215 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVERSTONE
# 5216 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 2
# 5217 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SIGNS
# 5218 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SAVES
# 5219 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEDEX
# 5220 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 5221 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 5222 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 5223 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 5224 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 5225 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 5226 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 5227 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 5228 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 5229 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
# 5230 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
# 5232 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 51
# 5233 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_0, MSGBOX_YESNO
# 5234 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_23
Debug_CheatStart_PBL_22:
# 5237 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 5238 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5240 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 53
# 5241 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_1, MSGBOX_YESNO
# 5242 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_26
Debug_CheatStart_PBL_25:
# 5245 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 5246 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5248 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
# 5249 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_2, MSGBOX_YESNO
# 5250 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_29
Debug_CheatStart_PBL_28:
# 5253 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 5254 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5256 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_3
# 5257 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_5
# 5258 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5259 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_33
# 5261 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_34
# 5264 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_35
Debug_CheatStart_PBL_31:
# 5272 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5274 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_6
# 5275 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_7, Debug_CheatStart_PBL_Text_8
# 5276 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5277 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_38
# 5289 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_39
# 5301 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_40
Debug_CheatStart_PBL_36:
# 5314 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 5315 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 5316 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 5317 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 5319 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_CLAW
# 5320 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EXP_SHARE
# 5321 "data/scripts/battle_labyrinth.pory"
	additem ITEM_INFINITE_REPEL
# 5322 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 5323 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 5324 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 5325 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NINA
# 5326 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MARIAM
# 5327 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_OSCAR
# 5328 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 5330 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_9
# 5331 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_10, Debug_CheatStart_PBL_Text_11, Debug_CheatStart_PBL_Text_12
# 5332 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5333 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_43
# 5335 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_44
# 5337 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_45
# 5339 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_46
Debug_CheatStart_PBL_41:
# 5345 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 5346 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5348 "data/scripts/battle_labyrinth.pory"
	random 10
# 5349 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5350 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_64
# 5351 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_64
# 5353 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_65
# 5355 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_66
# 5357 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_67
# 5359 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_68
# 5361 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_69
# 5363 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_70
# 5365 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_71
# 5367 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_72
Debug_CheatStart_PBL_62:
# 5370 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 6
# 5371 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 5372 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
# 5373 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 5375 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILK_SCARF
# 5376 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BUG_BITE
# 5377 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 5
# 5378 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHERI_BERRY, 2
# 5379 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHESTO_BERRY, 2
# 5380 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RAWST_BERRY, 2
# 5381 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ASPEAR_BERRY, 2
# 5382 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PECHA_BERRY, 2
# 5383 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 5384 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_SEARCH
# 5385 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 5386 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 5387 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 5388 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 5389 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 5390 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_POLLY
# 5391 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JEREMIAH
# 5392 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JOSH
# 5393 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_HARPER
# 5394 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARTHUR
# 5395 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 5397 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_13
# 5398 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_8
# 5399 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5400 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_75
# 5402 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_76
# 5405 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_77
Debug_CheatStart_PBL_73:
# 5411 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 7
# 5412 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5413 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 5415 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GOOD_ROD
# 5416 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 5417 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JEMMA
# 5418 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PATRICK
# 5419 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ANNABELLE
# 5420 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BORIS
# 5421 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RICHARD
# 5422 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_3
# 5424 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_14
# 5425 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17, Debug_CheatStart_PBL_Text_18, Debug_CheatStart_PBL_Text_19
# 5426 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5427 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_80
# 5429 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_81
# 5431 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_82
# 5433 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_83
# 5435 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_84
# 5437 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_85
Debug_CheatStart_PBL_78:
# 5443 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 9
# 5444 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5445 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 5447 "data/scripts/battle_labyrinth.pory"
	random 8
# 5448 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5449 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_88
# 5451 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_89
# 5453 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_90
# 5455 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_91
# 5457 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_92
# 5459 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_93
# 5461 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_94
# 5463 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_95
Debug_CheatStart_PBL_86:
# 5466 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 5468 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILVER_POWDER
# 5469 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MUSCLE_BAND
# 5470 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WISE_GLASSES
# 5471 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TWISTED_SPOON
# 5472 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_BARB
# 5473 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SNARL
# 5474 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 5475 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BURN_HEAL, 2
# 5476 "data/scripts/battle_labyrinth.pory"
	additem ITEM_AWAKENING, 2
# 5477 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 5478 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 5479 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 5480 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 5481 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 5482 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_HERMAN
# 5483 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RALPH
# 5484 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CALLIE
# 5485 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SANTIAGO
# 5486 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 5487 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_FRED
# 5488 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_LUCIA
# 5489 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_4
# 5491 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_20
# 5492 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_21, Debug_CheatStart_PBL_Text_22
# 5493 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5494 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_98
# 5496 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_99
# 5498 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_100
Debug_CheatStart_PBL_96:
# 5504 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 11
# 5505 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5507 "data/scripts/battle_labyrinth.pory"
	random 10
# 5508 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5509 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_103
# 5510 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_103
# 5512 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_104
# 5513 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_104
# 5515 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_105
# 5516 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_105
# 5518 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_106
# 5519 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_106
# 5521 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_107
# 5523 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_108
Debug_CheatStart_PBL_101:
# 5526 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 5527 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 5528 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
# 5529 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 5531 "data/scripts/battle_labyrinth.pory"
	additem ITEM_METRONOME
# 5532 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_BALL
# 5533 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MIRACLE_SEED
# 5534 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NORMAL_GEM
# 5535 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BUG_GEM
# 5536 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
# 5537 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVIOLITE
# 5538 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RED_SHARD, 5
# 5539 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 5540 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NOVA_AND_CORA
# 5541 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CLINTON
# 5542 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_REBECCA
# 5543 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RYAN
# 5544 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CAITLYN
# 5545 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KENNETH
# 5546 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KEVIN
# 5547 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_5
# 5548 "data/scripts/battle_labyrinth.pory"
	addmoney 1000
# 5550 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_23
# 5551 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_8
# 5552 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5553 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_111
# 5555 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_112
# 5558 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_113
Debug_CheatStart_PBL_109:
# 5564 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 13
# 5565 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5566 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 5568 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEST_BALL
# 5569 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NET_BALL
# 5570 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_DRAINING_KISS
# 5571 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
# 5572 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FLYING_GEM
# 5573 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
# 5574 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SLEDGEHAMMER
# 5575 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 5576 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 5577 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_GILBERT
# 5578 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MELANIE
# 5579 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONSTANCE
# 5580 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_FRANK
# 5581 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DUDLEY
# 5582 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DAISY
# 5583 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_VIC_AND_DELL
# 5584 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MINA
# 5585 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_6
# 5586 "data/scripts/battle_labyrinth.pory"
	addmoney 1000
# 5588 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_24
# 5589 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_5
# 5590 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5591 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_116
# 5593 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_117
# 5596 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_118
Debug_CheatStart_PBL_114:
# 5602 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 15
# 5603 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5605 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_25
# 5606 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17
# 5607 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5608 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_121
# 5610 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_122
# 5612 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_123
Debug_CheatStart_PBL_119:
# 5615 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 16
# 5616 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5617 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 5618 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 5620 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SHARP_BEAK
# 5621 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ROCK_GEM
# 5622 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIGHTING_GEM
# 5623 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
# 5624 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_BELT
# 5625 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SITRUS_BERRY, 5
# 5626 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAGNET
# 5627 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HARD_STONE
# 5628 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DUSK_BALL
# 5629 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_HEAL
# 5630 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_THIEF
# 5631 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_ROCK_TOMB
# 5632 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 5633 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 5634 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GREAT_BALL
# 5635 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 5
# 5636 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 5637 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MACHETE
# 5638 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_HIDDEN_POWER
# 5639 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 5640 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 5641 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MILLIE
# 5642 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JAMAL
# 5643 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PAIGE
# 5644 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SETH
# 5645 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONNIE
# 5646 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PETER
# 5647 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_WHITAKER
# 5648 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JIMMY
# 5649 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_EMILIANO
# 5650 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BECKHAM
# 5651 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KAREN
# 5652 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JAYDEN
# 5653 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NEIL
# 5654 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_TAMARA
# 5655 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_7
# 5656 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_8
# 5658 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_26
# 5659 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_8
# 5660 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5661 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_126
# 5663 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_127
# 5666 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_128
Debug_CheatStart_PBL_124:
# 5672 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 18
# 5673 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5674 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 5676 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BIG_ROOT
# 5677 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_PLUCK
# 5678 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_GEM
# 5679 "data/scripts/battle_labyrinth.pory"
	additem ITEM_STEEL_GEM
# 5680 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DARK_GEM
# 5681 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MYSTIC_WATER
# 5682 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHARCOAL
# 5683 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_RETALIATE
# 5684 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 5685 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 5686 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_COOPER
# 5687 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CARMINE
# 5688 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JONATHAN
# 5689 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CALVIN
# 5690 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_LUIS
# 5691 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARI
# 5692 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARI_CHALLENGE
# 5693 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BERTHA
# 5694 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BERTHA_CHALLENGE
# 5695 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CASSANDRA
# 5696 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CASSANDRA_CHALLENGE
# 5697 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DOMINIC
# 5698 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DOMINIC_CHALLENGE
# 5699 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERICA
# 5700 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERICA_CHALLENGE
# 5702 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_27
# 5703 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_28, Debug_CheatStart_PBL_Text_29
# 5704 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5705 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_131
# 5707 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_132
# 5709 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_133
Debug_CheatStart_PBL_129:
# 5715 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 19
# 5716 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5717 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
# 5719 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SCORCHING_SANDS
# 5720 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_GEM
# 5721 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ELECTRIC_GEM
# 5722 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GROUND_GEM
# 5723 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SOFT_SAND
# 5724 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_GLASSES
# 5725 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HEAVY_DUTY_BOOTS
# 5726 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SAFETY_GOGGLES
# 5727 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BULLDOZE
# 5728 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TERA_ORB
# 5729 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLUE_SHARD, 5
# 5730 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_STEEL_WING
# 5731 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ALANA
# 5732 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JACOB
# 5733 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DEWEY
# 5734 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERNEST
# 5735 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KYLE
# 5736 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ELIAS
# 5737 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PEARLIE
# 5738 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SUSAN
# 5739 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONRAD
# 5740 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BRETT
# 5741 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_9
# 5742 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE10B_RECEIVED_TM_STEEL_WING
# 5744 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_30
# 5745 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4
# 5746 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5747 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_136
# 5749 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_137
Debug_CheatStart_PBL_134:
# 5755 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 21
# 5756 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5757 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_11
# 5759 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_GRASS_KNOT
# 5760 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_TAUNT
# 5761 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MOON_STONE
# 5762 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SPELL_TAG
# 5763 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FAIRY_GEM
# 5764 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GHOST_GEM
# 5765 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DRAGON_GEM
# 5766 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FAIRY_FEATHER
# 5767 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_STEEL_WING
# 5768 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JEANETTE
# 5769 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_EMMA_AND_LEO
# 5770 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JOEL
# 5771 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MARION
# 5772 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_REGINA
# 5773 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 5775 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_31
# 5776 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_4, Debug_CheatStart_PBL_Text_8
# 5777 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5778 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_140
# 5780 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_141
# 5783 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_142
Debug_CheatStart_PBL_138:
# 5789 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 21
# 5790 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 5791 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_12
# 5793 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BRICK_BREAK
# 5794 "data/scripts/battle_labyrinth.pory"
	additem ITEM_THUNDER_STONE
# 5795 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_STONE
# 5796 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_STONE
# 5797 "data/scripts/battle_labyrinth.pory"
	additem ITEM_LEAF_STONE
# 5798 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ESSENCE
# 5799 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DOLORES
# 5800 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_GENIE
# 5801 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ABIGAIL
# 5802 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_FEDERICO
# 5803 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ROMULUS
# 5804 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JULIE
# 5805 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_HILDA
# 5806 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_TREVOR
# 5807 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RUFUS
# 5808 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KINLEY
# 5809 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_REID
# 5810 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_11
# 5812 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 13
# 5813 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 26
# 5814 "data/scripts/battle_labyrinth.pory"
	release
	end

Debug_CheatStart_PBL_3:
# 5172 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_4:
# 5174 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_5:
# 5176 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_6:
# 5178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_7:
# 5180 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_10:
# 5185 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_11:
# 5187 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_12:
# 5189 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_13:
# 5191 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_14:
# 5193 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_17:
# 5198 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_18:
# 5200 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_19:
# 5202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_20:
# 5204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_21:
# 5206 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_23:
# 5235 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 52
	goto Debug_CheatStart_PBL_22

Debug_CheatStart_PBL_26:
# 5243 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_29:
# 5251 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_28

Debug_CheatStart_PBL_33:
# 5260 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
	goto Debug_CheatStart_PBL_31

Debug_CheatStart_PBL_34:
# 5262 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 5263 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_31

Debug_CheatStart_PBL_35:
# 5265 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5266 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 1
# 5267 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
# 5268 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_SANCTUARY, 255, 38, 11
# 5269 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_38:
# 5278 "data/scripts/battle_labyrinth.pory"
	random 4
# 5279 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5280 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_48
# 5282 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_49
# 5284 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_50
# 5286 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_51
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_39:
# 5290 "data/scripts/battle_labyrinth.pory"
	random 4
# 5291 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5292 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_53
# 5294 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_54
# 5296 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_55
# 5298 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_56
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_40:
# 5302 "data/scripts/battle_labyrinth.pory"
	random 4
# 5303 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 5304 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_58
# 5306 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_59
# 5308 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_60
# 5310 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_61
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_43:
# 5334 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
	goto Debug_CheatStart_PBL_41

Debug_CheatStart_PBL_44:
# 5336 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
	goto Debug_CheatStart_PBL_41

Debug_CheatStart_PBL_45:
# 5338 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
	goto Debug_CheatStart_PBL_41

Debug_CheatStart_PBL_46:
# 5340 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5341 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 2
# 5342 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	end

Debug_CheatStart_PBL_48:
# 5281 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_49:
# 5283 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOSSIFLEUR
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_50:
# 5285 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_51:
# 5287 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CHERUBI
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_53:
# 5293 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSEAR
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_54:
# 5295 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_55:
# 5297 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SLUGMA
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_56:
# 5299 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_58:
# 5305 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANPOUR
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_59:
# 5307 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BARBOACH
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_60:
# 5309 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOLDEEN
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_61:
# 5311 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_FINNEON
	goto Debug_CheatStart_PBL_36

Debug_CheatStart_PBL_64:
# 5352 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WURMPLE
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_65:
# 5354 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_66:
# 5356 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_67:
# 5358 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SCATTERBUG
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_68:
# 5360 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_69:
# 5362 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_70:
# 5364 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_KRICKETOT
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_71:
# 5366 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_TAROUNTULA
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_72:
# 5368 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Debug_CheatStart_PBL_62

Debug_CheatStart_PBL_75:
# 5401 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
	goto Debug_CheatStart_PBL_73

Debug_CheatStart_PBL_76:
# 5403 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 5404 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_73

Debug_CheatStart_PBL_77:
# 5406 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5407 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 3
# 5408 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	end

Debug_CheatStart_PBL_80:
# 5428 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 6
	goto Debug_CheatStart_PBL_78

Debug_CheatStart_PBL_81:
# 5430 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
	goto Debug_CheatStart_PBL_78

Debug_CheatStart_PBL_82:
# 5432 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
	goto Debug_CheatStart_PBL_78

Debug_CheatStart_PBL_83:
# 5434 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
	goto Debug_CheatStart_PBL_78

Debug_CheatStart_PBL_84:
# 5436 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
	goto Debug_CheatStart_PBL_78

Debug_CheatStart_PBL_85:
# 5438 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5439 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 4
# 5440 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	end

Debug_CheatStart_PBL_88:
# 5450 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_89:
# 5452 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ELECTRIC_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_90:
# 5454 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_91:
# 5456 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_92:
# 5458 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DARK_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_93:
# 5460 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_94:
# 5462 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_95:
# 5464 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FAIRY_GEM
	goto Debug_CheatStart_PBL_86

Debug_CheatStart_PBL_98:
# 5495 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_99:
# 5497 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_100:
# 5499 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5500 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 5
# 5501 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	end

Debug_CheatStart_PBL_103:
# 5511 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PACHIRISU
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_104:
# 5514 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_DEDENNE
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_105:
# 5517 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MORPEKO
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_106:
# 5520 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_EMOLGA
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_107:
# 5522 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PLUSLE
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_108:
# 5524 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MINUN
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_111:
# 5554 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
	goto Debug_CheatStart_PBL_109

Debug_CheatStart_PBL_112:
# 5556 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 5557 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_109

Debug_CheatStart_PBL_113:
# 5559 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5560 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 6
# 5561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	end

Debug_CheatStart_PBL_116:
# 5592 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
	goto Debug_CheatStart_PBL_114

Debug_CheatStart_PBL_117:
# 5594 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 5595 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_114

Debug_CheatStart_PBL_118:
# 5597 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5598 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 7
# 5599 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	end

Debug_CheatStart_PBL_121:
# 5609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
	goto Debug_CheatStart_PBL_119

Debug_CheatStart_PBL_122:
# 5611 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
	goto Debug_CheatStart_PBL_119

Debug_CheatStart_PBL_123:
# 5613 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
	goto Debug_CheatStart_PBL_119

Debug_CheatStart_PBL_126:
# 5662 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
	goto Debug_CheatStart_PBL_124

Debug_CheatStart_PBL_127:
# 5664 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
# 5665 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_124

Debug_CheatStart_PBL_128:
# 5667 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5668 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 9
# 5669 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	end

Debug_CheatStart_PBL_131:
# 5706 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
	goto Debug_CheatStart_PBL_129

Debug_CheatStart_PBL_132:
# 5708 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
	goto Debug_CheatStart_PBL_129

Debug_CheatStart_PBL_133:
# 5710 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5711 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 11
# 5712 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	end

Debug_CheatStart_PBL_136:
# 5748 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
	goto Debug_CheatStart_PBL_134

Debug_CheatStart_PBL_137:
# 5750 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5751 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 11
# 5752 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	end

Debug_CheatStart_PBL_140:
# 5779 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
	goto Debug_CheatStart_PBL_138

Debug_CheatStart_PBL_141:
# 5781 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 5782 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_138

Debug_CheatStart_PBL_142:
# 5784 "data/scripts/battle_labyrinth.pory"
	closemessage
# 5785 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 12
# 5786 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 24
	end


Debug_CheatStart_PBL_GenerateMon::
# 5819 "data/scripts/battle_labyrinth.pory"
	callnative DebugCheatStartGenerateMon
# 5820 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
	return


Debug_CheatStart_PBL_GiveMon::
# 5824 "data/scripts/battle_labyrinth.pory"
	givemon VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE
# 5825 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 5826 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_GiveMon_Text_0
	return


EventScript_Shop_Portentia_Text_0:
# 9 "data/scripts/battle_labyrinth.pory"
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
# 13 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 16 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 49 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 108 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 111 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 143 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 178 "data/scripts/battle_labyrinth.pory"
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
# 190 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 230 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 583 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 588 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 619 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 652 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi. My name is Marie, and welcome to\n"
	.string "my shop.\p"
	.string "You're probably wondering what this\n"
	.string "shop is even for.\p"
	.string "Let me explain: lots of trainers leave\n"
	.string "extra eggs at the Daycare.\p"
	.string "Some trainers mix up which egg has\n"
	.string "which species of Pokémon.\p"
	.string "It's my job to help match these eggs\n"
	.string "with the right trainer.\p"
	.string "Maybe you'll be able to make your next\n"
	.string "friend here!$"

EventScript_Shop_Marie_Text_1:
# 661 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 666 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 668 "data/scripts/battle_labyrinth.pory"
	.string "Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 668 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 668 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 673 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 677 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any Eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 680 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which type of Egg would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 683 "data/scripts/battle_labyrinth.pory"
	.string "Elemental Monkey - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 686 "data/scripts/battle_labyrinth.pory"
	.string "Regional Form - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 689 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 1 - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 692 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 2 - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_11:
# 695 "data/scripts/battle_labyrinth.pory"
	.string "Kanto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_12:
# 696 "data/scripts/battle_labyrinth.pory"
	.string "Johto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_13:
# 697 "data/scripts/battle_labyrinth.pory"
	.string "Hoenn Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_14:
# 698 "data/scripts/battle_labyrinth.pory"
	.string "Sinnoh Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_15:
# 699 "data/scripts/battle_labyrinth.pory"
	.string "Unova Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_16:
# 700 "data/scripts/battle_labyrinth.pory"
	.string "Kalos Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_17:
# 701 "data/scripts/battle_labyrinth.pory"
	.string "Alola Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_18:
# 702 "data/scripts/battle_labyrinth.pory"
	.string "Galar Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_19:
# 703 "data/scripts/battle_labyrinth.pory"
	.string "Paldea Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_20:
# 705 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_21:
# 710 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Pansage, Pansear,\n"
	.string "or Panpour will cost ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_22:
# 718 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Alolan Meowth,\n"
	.string "Galarian Zigzagoon, Hisuian Voltorb, or\l"
	.string "Paldean Wooper will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_23:
# 726 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Smoochum, Elekid,\n"
	.string "or Magby will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_24:
# 734 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Happiny, Togepi,\n"
	.string "Munchlax, or Riolu will cost ¥10000.$"

EventScript_Shop_Marie_MainMenu_Text_25:
# 745 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here at Marie's Egg Delivery\n"
	.string "Service, we pair trainers with mixed up\l"
	.string "Pokémon Eggs.\p"
	.string "Each set of eggs contains a limited\n"
	.string "number of possible species of Pokémon.\p"
	.string "You'll know the possibilities of what\n"
	.string "the egg will hatch into, but you won't\l"
	.string "know what Pokémon you have until it\l"
	.string "hatches.$"

EventScript_Shop_Marie_MainMenu_Text_26:
# 747 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0:
# 756 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1:
# 762 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2:
# 775 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3:
# 790 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4:
# 803 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5:
# 805 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 989 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 991 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 995 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 1000 "data/scripts/battle_labyrinth.pory"
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
# 1013 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 1014 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 1014 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 1014 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 1014 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 1025 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 1043 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 1044 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 1046 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 1075 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 1081 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1277 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which kind of moves\n"
	.string "you want to teach.$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1278 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_Moves_Text_2:
# 1278 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1291 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1296 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1304 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1308 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1311 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1330 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1335 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1337 "data/scripts/battle_labyrinth.pory"
	.string "Venoshock$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1338 "data/scripts/battle_labyrinth.pory"
	.string "Electroweb$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1339 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1340 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1341 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1343 "data/scripts/battle_labyrinth.pory"
	.string "Synthesis$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1344 "data/scripts/battle_labyrinth.pory"
	.string "Pain Split$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1345 "data/scripts/battle_labyrinth.pory"
	.string "Defog$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1346 "data/scripts/battle_labyrinth.pory"
	.string "Trick$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1485 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1489 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1518 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1523 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1524 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1528 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1534 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1540 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1546 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1552 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1558 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1564 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1570 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1576 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1582 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1588 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1594 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1600 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1606 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1612 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1618 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1624 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1630 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1636 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1642 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1648 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_45:
# 1657 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

EventScript_Shop_Joy_Text_0:
# 1671 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Center of\n"
	.string "Restoration, is my own!$"

EventScript_Shop_Joy_Text_1:
# 1674 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome back to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We've developed new technology that\n"
	.string "allows us to heal your entire party and\l"
	.string "all your PC Pokémon as well.$"

EventScript_Shop_Joy_Text_2:
# 1678 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party and PC for a\n"
	.string "flat ¥1000 fee$"

EventScript_Shop_Joy_Text_3:
# 1680 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party for a flat\n"
	.string "¥1000 fee.$"

EventScript_Shop_Joy_Text_4:
# 1683 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_5:
# 1691 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_6:
# 1696 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_7:
# 1702 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: All of your Pokémon have been\n"
	.string "restored.$"

EventScript_Shop_Joy_Text_8:
# 1719 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_9:
# 1724 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_Shop_BreederF_Text_0:
# 1733 "data/scripts/battle_labyrinth.pory"
	.string "My brother and I are twins. We\n"
	.string "specialize in light training for your\l"
	.string "Pokémon.\p"
	.string "Would you be interested in changing a\n"
	.string "Pokémon's nature to Serious for the\l"
	.string "price of ¥50?$"

EventScript_Shop_BreederF_Text_1:
# 1740 "data/scripts/battle_labyrinth.pory"
	.string "You don't have enough money.$"

EventScript_Shop_BreederF_Text_2:
# 1743 "data/scripts/battle_labyrinth.pory"
	.string "Which Pokémon's nature would you like\n"
	.string "to have changed?$"

EventScript_Shop_BreederF_Text_3:
# 1752 "data/scripts/battle_labyrinth.pory"
	.string "I can't change the nature of an egg.$"

EventScript_Shop_BreederF_Text_4:
# 1757 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

EventScript_Shop_BreederF_Text_5:
# 1763 "data/scripts/battle_labyrinth.pory"
	.string "It's done.$"

EventScript_Shop_BreederM_Text_0:
# 1784 "data/scripts/battle_labyrinth.pory"
	.string "My sister and I are twins. We specialize\n"
	.string "in light training for your Pokémon.\p"
	.string "Would you be interested in swapping\n"
	.string "your Pokemon's normal ability to its\l"
	.string "other normal ability for the price of\l"
	.string "¥50?$"

EventScript_Shop_BreederM_Text_1:
# 1794 "data/scripts/battle_labyrinth.pory"
	.string "Which Pokémon's ability would you like\n"
	.string "to have changed?$"

EventScript_Shop_BreederM_Text_2:
# 1803 "data/scripts/battle_labyrinth.pory"
	.string "I can't change the ability of an egg.$"

EventScript_Shop_BreederM_Text_3:
# 1811 "data/scripts/battle_labyrinth.pory"
	.string "I can't change your {STR_VAR_1}'s\n"
	.string "ability {STR_VAR_3} because that's\l"
	.string "its hidden ability!$"

EventScript_Shop_BreederM_Text_4:
# 1818 "data/scripts/battle_labyrinth.pory"
	.string "I can't change your {STR_VAR_3}'s\n"
	.string "ability {STR_VAR_1} because it\l"
	.string "doesn't have another normal ability!$"

EventScript_Shop_BreederM_Text_5:
# 1822 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to change your\n"
	.string "{STR_VAR_3}'s ability from\l"
	.string "{STR_VAR_1} to {STR_VAR_2}?$"

EventScript_Shop_BreederM_Text_6:
# 1829 "data/scripts/battle_labyrinth.pory"
	.string "It's done! Enjoy your new ability!$"

EventScript_Shop_BreederM_Text_7:
# 1840 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to change your\n"
	.string "{STR_VAR_3}'s ability from\l"
	.string "{STR_VAR_2} to {STR_VAR_1}?$"

EventScript_MandatoryCheck_Text_0:
# 1887 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1917 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1918 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1921 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1933 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_SanctuaryToZone0_Text_0:
# 1964 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_WhenUReadyDialogue_Text_0:
# 1980 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_1:
# 1982 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 2 - Warren Woods{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_2:
# 1984 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_3:
# 1986 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_4:
# 1988 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 5 - Timberstep Plateau{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_5:
# 1990 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 6 - Seabreeze Island{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_6:
# 1992 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 7 - Gemini Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 -\l"
	.string "Gemini Caves{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_7:
# 1994 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 9 - Lushbranch Village{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_8:
# 1996 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 10 - Scornwind Desert{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_9:
# 1998 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 11 - Duskwither Maze{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_10:
# 2000 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 12 - Twinstream Plains{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_11:
# 2002 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 13{COLOR DARK_GRAY} and {COLOR GREEN}Zone 14{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_12:
# 2004 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 15 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_13:
# 2006 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 16 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_14:
# 2008 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 17 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_15:
# 2010 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_16:
# 2012 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 20 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_17:
# 2014 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 21 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_18:
# 2016 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 22 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_19:
# 2018 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 23 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_Documentation_Text_0:
# 2031 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 2070 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 2073 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 2075 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 2078 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 2080 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 2083 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 2085 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 2088 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 2090 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 2093 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info$"

EventScript_Settings_Text_10:
# 2095 "data/scripts/battle_labyrinth.pory"
	.string "Full Info$"

EventScript_Settings_Text_11:
# 2098 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 2100 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 2102 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 2104 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 2106 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 2109 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 2111 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 2114 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 2116 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 2119 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 2121 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 2124 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 2126 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 2129 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 2131 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 2134 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 2136 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

EventScript_Settings_Text_28:
# 2139 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 2141 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 2144 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 2149 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 2151 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 2159 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 2161 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 2173 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 2175 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 2178 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 2191 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 2194 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 2198 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 2200 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 2203 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 2210 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 2212 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 2215 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 2225 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 2227 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 2229 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 2232 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 2239 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 2244 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 2254 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 2255 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 2284 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 2287 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 2289 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 2292 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2302 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2304 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2307 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2315 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting enables you to\n"
	.string "see more information that is not visible\l"
	.string "otherwise.\p"
	.string "You can view enemy Pokémon information\n"
	.string "through the {COLOR RED}Surveil{COLOR DARK_GRAY} option in battle,\l"
	.string "use the {COLOR RED}DexNav{COLOR DARK_GRAY} to see potential\l"
	.string "encounterable Pokémon, or use the\l"
	.string "{COLOR RED}Trainer Notebook{COLOR DARK_GRAY} to see what Pokémon\l"
	.string "upcoming trainers have.$"

EventScript_Settings_Text_66:
# 2317 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_67:
# 2318 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_68:
# 2321 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_69:
# 2334 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_70:
# 2335 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_71:
# 2338 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_72:
# 2351 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_73:
# 2353 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_74:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_75:
# 2361 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_76:
# 2364 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_77:
# 2372 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_78:
# 2374 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_79:
# 2376 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_80:
# 2379 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_81:
# 2387 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_82:
# 2388 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_83:
# 2391 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_84:
# 2397 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_85:
# 2399 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_86:
# 2401 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_87:
# 2404 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_88:
# 2412 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_89:
# 2413 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_90:
# 2416 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_91:
# 2422 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_92:
# 2424 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_93:
# 2426 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_94:
# 2429 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_95:
# 2437 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_96:
# 2438 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_97:
# 2441 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_98:
# 2447 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_99:
# 2449 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_100:
# 2451 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_101:
# 2454 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_102:
# 2462 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_103:
# 2463 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_104:
# 2466 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_105:
# 2472 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_106:
# 2474 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_107:
# 2476 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_108:
# 2479 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_109:
# 2487 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_110:
# 2488 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_111:
# 2491 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_112:
# 2497 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_113:
# 2499 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_114:
# 2501 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_115:
# 2504 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_116:
# 2512 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_117:
# 2514 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_118:
# 2517 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_119:
# 2526 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_120:
# 2528 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_121:
# 2530 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_122:
# 2533 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_123:
# 2541 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_124:
# 2542 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_125:
# 2545 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_126:
# 2551 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_127:
# 2553 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_128:
# 2555 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_129:
# 2558 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_130:
# 2566 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_131:
# 2567 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_132:
# 2570 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_133:
# 2576 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_134:
# 2578 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_135:
# 2580 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_136:
# 2583 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_137:
# 2591 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_138:
# 2592 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_139:
# 2595 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_140:
# 2601 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_141:
# 2603 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_142:
# 2605 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_143:
# 2608 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_144:
# 2616 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_145:
# 2617 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_146:
# 2620 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2640 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2641 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2641 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2641 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2649 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2652 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2655 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2658 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2661 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2664 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2666 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2680 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2691 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2694 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2697 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2700 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2703 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2706 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2722 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2733 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2736 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2739 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2742 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2745 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2748 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2764 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_SignsQuestGirl_Text_0:
# 2781 "data/scripts/battle_labyrinth.pory"
	.string "Hiya! I'm improving on my reading skills!\p"
	.string "You should work on your reading skills\n"
	.string "too!\p"
	.string "If you read all the signs in the Pokémon\n"
	.string "Battle Labyrinth, I'll give you a nice\l"
	.string "reward!$"

EventScript_SignsQuestGirl_Text_1:
# 2784 "data/scripts/battle_labyrinth.pory"
	.string "Signs have lots of useful info about\n"
	.string "unique mechanics to the Pokémon Battle\l"
	.string "Labyrinth!\p"
	.string "You can improve your reading skills\n"
	.string "while learning more about the\l"
	.string "challenges at hand!$"

EventScript_SavesQuestBoy_Text_0:
# 2794 "data/scripts/battle_labyrinth.pory"
	.string "Saving your progress is important while\n"
	.string "playing games.\p"
	.string "I learned that the hard way!\p"
	.string "Don't be like me!\p"
	.string "I'll give you something if you can save\n"
	.string "the game 50 times!$"

EventScript_SavesQuestBoy_Text_1:
# 2801 "data/scripts/battle_labyrinth.pory"
	.string "Wow!\p"
	.string "You really went and saved 50 times?\p"
	.string "That's crazy.\p"
	.string "Here, as a reward, I can give you this\n"
	.string "nifty Trainer Notebook!$"

EventScript_SavesQuestBoy_Text_2:
# 2804 "data/scripts/battle_labyrinth.pory"
	.string "This notebook contains all the trainers\n"
	.string "in the Pokémon Battle Labyrinth.\p"
	.string "It's a nice way to keep track of your\n"
	.string "progress!$"

EventScript_SavesQuestBoy_Text_3:
# 2806 "data/scripts/battle_labyrinth.pory"
	.string "Oh! You already have one.\p"
	.string "Uh… Have some brownie points, I guess?\n"
	.string "Sorry!$"

EventScript_SavesQuestBoy_Text_4:
# 2811 "data/scripts/battle_labyrinth.pory"
	.string "Don't forget to save your game!$"

EventScript_PokedexQuestScientist_Text_0:
# 2821 "data/scripts/battle_labyrinth.pory"
	.string "Kids these days are always neglecting\n"
	.string "filling their Pokédex!\p"
	.string "If you can show me a Pokédex that's\n"
	.string "seen all the Pokémon in existence, I'll\l"
	.string "reward you!$"

EventScript_PokedexQuestScientist_Text_1:
# 2824 "data/scripts/battle_labyrinth.pory"
	.string "Seeing all the Pokémon is tough enough.\p"
	.string "Imagine capturing them all!$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 3091 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 3119 "data/scripts/battle_labyrinth.pory"
	.string "Proceed to the {COLOR GREEN}Sanctuary{COLOR DARK_GRAY}?$"

EventScript_ShakeTree_Text_0:
# 3140 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 3146 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 3182 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

EventScript_RecoverySign_Text_0:
# 3250 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_MedicineSign_Text_0:
# 3256 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 3262 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 3268 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 3274 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 3280 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 3286 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

Zone0A_EventScript_TPISign_Text_0:
# 3292 "data/scripts/battle_labyrinth.pory"
	.string "Teleport Institute\n"
	.string "Getting around, easy peasy.$"

Zone0A_EventScript_DayCareSign_Text_0:
# 3298 "data/scripts/battle_labyrinth.pory"
	.string "Pokémon Day Care\n"
	.string "9 Generations and counting!$"

Zone1A_EventScript_Sign_GoldenTree_Text_0:
# 3304 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Shaking a Golden Tree might drop\n"
	.string "berries, though occasionally you'll\l"
	.string "disturb the wild Pokémon living in the\l"
	.string "tree!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 3310 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_EventScript_Sign_RunningShoes_Text_0:
# 3321 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Press {L_BUTTON} to enable or disable Auto Run.$"

Zone2A_EventScript_Sign_Text_0:
# 3327 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You may find hidden items by checking\n"
	.string "certain tiles with {A_BUTTON}.\p"
	.string "However, you won't find any hidden\n"
	.string "items on Brutal or Independent.$"

Zone2A_EventScript_ExpShareSign_Text_0:
# 3333 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Exp. All only gives Pokémon who\n"
	.string "didn't participate in battle 25%\l"
	.string "experience.\p"
	.string "If you want to train up a particular\n"
	.string "Pokémon, you can give them the held\l"
	.string "item Exp. Share so they get full\l"
	.string "experience!$"

Zone2A_EventScript_CautionSign_Text_0:
# 3339 "data/scripts/battle_labyrinth.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 3351 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 3357 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone3A_EventScript_Surveil_Text_0:
# 3363 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In battle, you can use Surveil to see\n"
	.string "the opponent's team.\p"
	.string "If you want to see full team\n"
	.string "information, you can turn on the Full\l"
	.string "Info setting by speaking to Colress.$"

Zone4A_EventScript_Sign_Text_0:
# 3369 "data/scripts/battle_labyrinth.pory"
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4B_EventScript_Sign_Text_0:
# 3375 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can see detailed information about\n"
	.string "a Pokémon species in its Pokédex entry\l"
	.string "after capturing it, such as what moves\l"
	.string "it learns or how to evolve it.$"

Zone4C_EventScript_Sign_Text_0:
# 3381 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Starting from now, there is a 20%\n"
	.string "chance to encounter wild Pokémon in a\l"
	.string "Double Battle.$"

Zone4D_EventScript_Sign_Text_0:
# 3387 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Some areas require backtracking later\n"
	.string "on in order to access them.$"

Zone4E_EventScript_Sign_Text_0:
# 3393 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Pokémon you encounter in different\n"
	.string "areas of the same zone may have slight\l"
	.string "differences!$"

Zone6A_EventScript_Sign_Text_0:
# 3399 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can sort items in the Bag using {START_BUTTON}.$"

Zone7A_EventScript_Sign_Text_0:
# 3405 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can change the music you hear in\n"
	.string "battle by speaking to Colress!$"

Zone7A_EventScript_HealSign_Text_0:
# 3411 "data/scripts/battle_labyrinth.pory"
	.string "A stop for weary travelers.$"

Zone9A_EventScript_Sign_Text_0:
# 3417 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "While you are on the Pokémon stats\n"
	.string "screen, you can press {A_BUTTON} to switch\l"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_HerbalSign_Text_0:
# 3423 "data/scripts/battle_labyrinth.pory"
	.string "Herbal and Incense Shop$"

EventScript_Collector_Text_0:
# 3431 "data/scripts/battle_labyrinth.pory"
	.string "Hello there!\p"
	.string "Are you interested in seeing Pokémon\n"
	.string "you might not be able to see elsewhere?\p"
	.string "Come and see my Safari Zones!\p"
	.string "For beginning Safari enjoyers, one area\n"
	.string "is unlocked and accessible.\p"
	.string "You can pay to unlock more areas,\n"
	.string "unlocking access to more rare Pokémon!$"

EventScript_Collector_Text_1:
# 3434 "data/scripts/battle_labyrinth.pory"
	.string "Where do you want to go?$"

EventScript_Collector_Text_2:
# 3437 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}S1 - Beginner Safari$"

EventScript_Collector_Text_3:
# 3441 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}S2 - Forest River Safari$"

EventScript_Collector_Text_4:
# 3443 "data/scripts/battle_labyrinth.pory"
	.string "S2 - Unlock for ¥500$"

EventScript_Collector_Text_5:
# 3449 "data/scripts/battle_labyrinth.pory"
	.string "Return to Zone 0$"

EventScript_Collector_Text_6:
# 3454 "data/scripts/battle_labyrinth.pory"
	.string "See you around sometime.$"

EventScript_Collector_Text_7:
# 3456 "data/scripts/battle_labyrinth.pory"
	.string "Alright, let's go!$"

EventScript_Collector_Text_8:
# 3471 "data/scripts/battle_labyrinth.pory"
	.string "So, you're interested in unlocking S2\n"
	.string "for ¥500?$"

EventScript_Collector_Text_9:
# 3480 "data/scripts/battle_labyrinth.pory"
	.string "Alright! You unlocked {COLOR GREEN}S2 - Forest River\n"
	.string "Safari{COLOR DARK_GRAY} for ¥500!$"

EventScript_TrainerNotebook_Text_0:
# 3494 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook is currently empty.$"

EventScript_TrainerNotebook_Text_1:
# 3498 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open.$"

EventScript_TrainerNotebook_Text_2:
# 3501 "data/scripts/battle_labyrinth.pory"
	.string "Zone 50$"

EventScript_TrainerNotebook_Text_3:
# 3504 "data/scripts/battle_labyrinth.pory"
	.string "Zone 49$"

EventScript_TrainerNotebook_Text_4:
# 3507 "data/scripts/battle_labyrinth.pory"
	.string "Zone 48$"

EventScript_TrainerNotebook_Text_5:
# 3510 "data/scripts/battle_labyrinth.pory"
	.string "Zone 47$"

EventScript_TrainerNotebook_Text_6:
# 3513 "data/scripts/battle_labyrinth.pory"
	.string "Zone 46$"

EventScript_TrainerNotebook_Text_7:
# 3516 "data/scripts/battle_labyrinth.pory"
	.string "Zone 45$"

EventScript_TrainerNotebook_Text_8:
# 3519 "data/scripts/battle_labyrinth.pory"
	.string "Zone 44$"

EventScript_TrainerNotebook_Text_9:
# 3522 "data/scripts/battle_labyrinth.pory"
	.string "Zone 43$"

EventScript_TrainerNotebook_Text_10:
# 3525 "data/scripts/battle_labyrinth.pory"
	.string "Zone 42$"

EventScript_TrainerNotebook_Text_11:
# 3528 "data/scripts/battle_labyrinth.pory"
	.string "Zone 41$"

EventScript_TrainerNotebook_Text_12:
# 3531 "data/scripts/battle_labyrinth.pory"
	.string "Zone 40$"

EventScript_TrainerNotebook_Text_13:
# 3534 "data/scripts/battle_labyrinth.pory"
	.string "Zone 39$"

EventScript_TrainerNotebook_Text_14:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "Zone 38$"

EventScript_TrainerNotebook_Text_15:
# 3540 "data/scripts/battle_labyrinth.pory"
	.string "Zone 37$"

EventScript_TrainerNotebook_Text_16:
# 3543 "data/scripts/battle_labyrinth.pory"
	.string "Zone 36$"

EventScript_TrainerNotebook_Text_17:
# 3546 "data/scripts/battle_labyrinth.pory"
	.string "Zone 35$"

EventScript_TrainerNotebook_Text_18:
# 3549 "data/scripts/battle_labyrinth.pory"
	.string "Zone 34$"

EventScript_TrainerNotebook_Text_19:
# 3552 "data/scripts/battle_labyrinth.pory"
	.string "Zone 33$"

EventScript_TrainerNotebook_Text_20:
# 3555 "data/scripts/battle_labyrinth.pory"
	.string "Zone 32$"

EventScript_TrainerNotebook_Text_21:
# 3558 "data/scripts/battle_labyrinth.pory"
	.string "Zone 31$"

EventScript_TrainerNotebook_Text_22:
# 3561 "data/scripts/battle_labyrinth.pory"
	.string "Zone 30$"

EventScript_TrainerNotebook_Text_23:
# 3564 "data/scripts/battle_labyrinth.pory"
	.string "Zone 29$"

EventScript_TrainerNotebook_Text_24:
# 3567 "data/scripts/battle_labyrinth.pory"
	.string "Zone 28$"

EventScript_TrainerNotebook_Text_25:
# 3570 "data/scripts/battle_labyrinth.pory"
	.string "Zone 27$"

EventScript_TrainerNotebook_Text_26:
# 3573 "data/scripts/battle_labyrinth.pory"
	.string "Zone 26$"

EventScript_TrainerNotebook_Text_27:
# 3576 "data/scripts/battle_labyrinth.pory"
	.string "Zone 24 & 25$"

EventScript_TrainerNotebook_Text_28:
# 3579 "data/scripts/battle_labyrinth.pory"
	.string "Zone 23$"

EventScript_TrainerNotebook_Text_29:
# 3582 "data/scripts/battle_labyrinth.pory"
	.string "Zone 22$"

EventScript_TrainerNotebook_Text_30:
# 3585 "data/scripts/battle_labyrinth.pory"
	.string "Zone 21$"

EventScript_TrainerNotebook_Text_31:
# 3588 "data/scripts/battle_labyrinth.pory"
	.string "Zone 20$"

EventScript_TrainerNotebook_Text_32:
# 3591 "data/scripts/battle_labyrinth.pory"
	.string "Zone 18 & 19$"

EventScript_TrainerNotebook_Text_33:
# 3594 "data/scripts/battle_labyrinth.pory"
	.string "Zone 17$"

EventScript_TrainerNotebook_Text_34:
# 3597 "data/scripts/battle_labyrinth.pory"
	.string "Zone 16$"

EventScript_TrainerNotebook_Text_35:
# 3600 "data/scripts/battle_labyrinth.pory"
	.string "Zone 15$"

EventScript_TrainerNotebook_Text_36:
# 3603 "data/scripts/battle_labyrinth.pory"
	.string "Zone 13 & 14$"

EventScript_TrainerNotebook_Text_37:
# 3606 "data/scripts/battle_labyrinth.pory"
	.string "Zone 12$"

EventScript_TrainerNotebook_Text_38:
# 3609 "data/scripts/battle_labyrinth.pory"
	.string "Zone 11$"

EventScript_TrainerNotebook_Text_39:
# 3612 "data/scripts/battle_labyrinth.pory"
	.string "Zone 10$"

EventScript_TrainerNotebook_Text_40:
# 3615 "data/scripts/battle_labyrinth.pory"
	.string "Zone 9$"

EventScript_TrainerNotebook_Text_41:
# 3618 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 & 8$"

EventScript_TrainerNotebook_Text_42:
# 3621 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6$"

EventScript_TrainerNotebook_Text_43:
# 3624 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5$"

EventScript_TrainerNotebook_Text_44:
# 3627 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4$"

EventScript_TrainerNotebook_Text_45:
# 3630 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3$"

EventScript_TrainerNotebook_Text_46:
# 3633 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2$"

EventScript_TrainerNotebook_Text_47:
# 3636 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1$"

EventScript_TrainerNotebook_Text_48:
# 3638 "data/scripts/battle_labyrinth.pory"
	.string "Close Notebook$"

EventScript_TrainerNotebook_Text_49:
# 3642 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_50:
# 3647 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}{STR_VAR_2} {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_51:
# 3649 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}{STR_VAR_2} {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_52:
# 3667 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Leviathan {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_53:
# 3669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Leviathan {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_54:
# 3680 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} is ready to\nbattle! They will use:\l{STR_VAR_1}!$"

EventScript_TrainerNotebook_Text_55:
# 3682 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3}is ready to\nbattle!$"

EventScript_TrainerNotebook_Text_56:
# 3685 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} is defeated!\nThey battled with:\l{STR_VAR_1}.$"

EventScript_TrainerNotebook_Text_57:
# 3739 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan {STR_VAR_3} is ready to\nbattle! They will use:\l{STR_VAR_1}!$"

EventScript_TrainerNotebook_Text_58:
# 3741 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan {STR_VAR_3}is ready to\nbattle!$"

EventScript_TrainerNotebook_Text_59:
# 3744 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan {STR_VAR_3} is defeated!\nThey battled with:\l{STR_VAR_1}.$"

EventScript_TrainerNotebook_Text_60:
# 3748 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 2 - Warren Woods{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_61:
# 3882 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_62:
# 3950 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} is ready to\nbattle!$"

EventScript_TrainerNotebook_Text_63:
# 4016 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_64:
# 4138 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} are ready to\nbattle! They will use:\l{STR_VAR_1}!$"

EventScript_TrainerNotebook_Text_65:
# 4140 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} are ready to\nbattle!$"

EventScript_TrainerNotebook_Text_66:
# 4143 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} are defeated!\nThey battled with:\l{STR_VAR_1}.$"

EventScript_TrainerNotebook_Text_67:
# 4185 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan {STR_VAR_3} is ready to\nbattle!$"

EventScript_TrainerNotebook_Text_68:
# 4192 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 5 - Timberstep Plateau{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_69:
# 4389 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 6 - Seabreeze Island{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_70:
# 4467 "data/scripts/battle_labyrinth.pory"
	.string "{STR_VAR_2} {STR_VAR_3} is defeated!$"

EventScript_TrainerNotebook_Text_71:
# 4582 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan {STR_VAR_3} is defeated!$"

EventScript_TrainerNotebook_Text_72:
# 4586 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 7 - Gemini Heights{COLOR DARK_GRAY} and\l"
	.string "{COLOR GREEN}Zone 8 - Gemini Caves{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_73:
# 4928 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Notebook open to\n"
	.string "{COLOR GREEN}Zone 9 - Lushbranch Village{COLOR DARK_GRAY}.$"

EventScript_TrainerNotebook_Text_74:
# 4967 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Winstrate {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_75:
# 4969 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Winstrate {STR_VAR_3}$"

EventScript_TrainerNotebook_Text_76:
# 5077 "data/scripts/battle_labyrinth.pory"
	.string "Winstrate {STR_VAR_3} is ready to\nbattle! They will use:\l{STR_VAR_1}!$"

EventScript_TrainerNotebook_Text_77:
# 5079 "data/scripts/battle_labyrinth.pory"
	.string "Winstrate {STR_VAR_3} is ready to\nbattle!$"

EventScript_TrainerNotebook_Text_78:
# 5082 "data/scripts/battle_labyrinth.pory"
	.string "Winstrate {STR_VAR_3} is defeated!$"

Debug_CheatStart_PBL_Text_0:
# 5233 "data/scripts/battle_labyrinth.pory"
	.string "Zone S1 grass?$"

Debug_CheatStart_PBL_Text_1:
# 5241 "data/scripts/battle_labyrinth.pory"
	.string "Zone S2 grass?$"

Debug_CheatStart_PBL_Text_2:
# 5249 "data/scripts/battle_labyrinth.pory"
	.string "Zone 0 grass?$"

Debug_CheatStart_PBL_Text_3:
# 5256 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 options$"

Debug_CheatStart_PBL_Text_4:
# 5257 "data/scripts/battle_labyrinth.pory"
	.string "Grass$"

Debug_CheatStart_PBL_Text_5:
# 5257 "data/scripts/battle_labyrinth.pory"
	.string "Tree$"

Debug_CheatStart_PBL_Text_6:
# 5274 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 gwf$"

Debug_CheatStart_PBL_Text_7:
# 5275 "data/scripts/battle_labyrinth.pory"
	.string "Fire$"

Debug_CheatStart_PBL_Text_8:
# 5275 "data/scripts/battle_labyrinth.pory"
	.string "Water$"

Debug_CheatStart_PBL_Text_9:
# 5330 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2 options$"

Debug_CheatStart_PBL_Text_10:
# 5331 "data/scripts/battle_labyrinth.pory"
	.string "Grass A$"

Debug_CheatStart_PBL_Text_11:
# 5331 "data/scripts/battle_labyrinth.pory"
	.string "Tunnel$"

Debug_CheatStart_PBL_Text_12:
# 5331 "data/scripts/battle_labyrinth.pory"
	.string "Grass B$"

Debug_CheatStart_PBL_Text_13:
# 5397 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3 options$"

Debug_CheatStart_PBL_Text_14:
# 5424 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4 options$"

Debug_CheatStart_PBL_Text_15:
# 5425 "data/scripts/battle_labyrinth.pory"
	.string "A$"

Debug_CheatStart_PBL_Text_16:
# 5425 "data/scripts/battle_labyrinth.pory"
	.string "B$"

Debug_CheatStart_PBL_Text_17:
# 5425 "data/scripts/battle_labyrinth.pory"
	.string "C$"

Debug_CheatStart_PBL_Text_18:
# 5425 "data/scripts/battle_labyrinth.pory"
	.string "D$"

Debug_CheatStart_PBL_Text_19:
# 5425 "data/scripts/battle_labyrinth.pory"
	.string "E$"

Debug_CheatStart_PBL_Text_20:
# 5491 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5 options$"

Debug_CheatStart_PBL_Text_21:
# 5492 "data/scripts/battle_labyrinth.pory"
	.string "Forest$"

Debug_CheatStart_PBL_Text_22:
# 5492 "data/scripts/battle_labyrinth.pory"
	.string "Grassland$"

Debug_CheatStart_PBL_Text_23:
# 5550 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6 options$"

Debug_CheatStart_PBL_Text_24:
# 5588 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 options$"

Debug_CheatStart_PBL_Text_25:
# 5605 "data/scripts/battle_labyrinth.pory"
	.string "Zone 8 options$"

Debug_CheatStart_PBL_Text_26:
# 5658 "data/scripts/battle_labyrinth.pory"
	.string "Zone 9 options$"

Debug_CheatStart_PBL_Text_27:
# 5702 "data/scripts/battle_labyrinth.pory"
	.string "Zone 10 options$"

Debug_CheatStart_PBL_Text_28:
# 5703 "data/scripts/battle_labyrinth.pory"
	.string "Sand$"

Debug_CheatStart_PBL_Text_29:
# 5703 "data/scripts/battle_labyrinth.pory"
	.string "Ruin$"

Debug_CheatStart_PBL_Text_30:
# 5744 "data/scripts/battle_labyrinth.pory"
	.string "Zone 11 options$"

Debug_CheatStart_PBL_Text_31:
# 5775 "data/scripts/battle_labyrinth.pory"
	.string "Zone 12 options$"

Debug_CheatStart_PBL_GiveMon_Text_0:
# 5826 "data/scripts/battle_labyrinth.pory"
	.string "Obtained {STR_VAR_1}!$"

gText_Lelouch_NotEnoughColor::
# 1029 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 1033 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1231 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1235 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1239 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1243 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1247 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1251 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1255 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1259 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1263 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1267 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

Shop_Breeders_Exit::
# 1866 "data/scripts/battle_labyrinth.pory"
	.string "We'll be here if you need us.$"

gText_Colress_BrutalExplained::
# 2035 "data/scripts/battle_labyrinth.pory"
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
# 2041 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 2047 "data/scripts/battle_labyrinth.pory"
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
# 2054 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 2060 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 2064 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2841 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 3081 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 3085 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
