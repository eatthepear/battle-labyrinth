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
# 33 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 34 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 36 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_15
# 37 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_15
# 38 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_15
# 39 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_15
# 40 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_15
# 41 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_15
# 42 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_15
# 43 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_15
# 44 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_15
# 45 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_15
EventScript_Shop_Portentia_9:
# 48 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 49 "data/scripts/battle_labyrinth.pory"
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
# 35 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_4
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_15:
# 46 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Portentia_9


	.align 2
# 52 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 53 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 54 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 55 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 58 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 59 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 60 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 63 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 64 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 67 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 68 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 69 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 70 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 71 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 72 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 73 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 74 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 75 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 78 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_4:
# 79 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 80 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 81 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 82 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 83 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 84 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 85 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 86 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
# 87 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ETHER
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 91 "data/scripts/battle_labyrinth.pory"
	lock
# 92 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 93 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 97 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 98 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 99 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 100 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 101 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 102 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 104 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 105 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 107 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 108 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 110 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_9
# 111 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_9
# 112 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_9
# 113 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_9
# 114 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_9
# 115 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_9
# 117 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 118 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 119 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 120 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 121 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 122 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 123 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 124 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 125 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 126 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_10
EventScript_Shop_Tim_4:
# 129 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 130 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 94 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 95 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 103 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 106 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 109 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 116 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
# 127 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Tim_4


	.align 2
# 133 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 134 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 137 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_2:
# 138 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 139 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 142 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_3:
# 143 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 144 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 145 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 146 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 147 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

	.align 2
# 150 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_4:
# 151 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 152 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 153 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 154 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 155 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 156 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 157 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 161 "data/scripts/battle_labyrinth.pory"
	lock
# 162 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 163 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 176 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 177 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 178 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 179 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 180 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 181 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 183 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 184 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 185 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 187 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 188 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 189 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 191 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 192 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 194 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_10
# 195 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_10
# 197 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_11
# 198 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_11
# 199 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_11
# 200 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_11
# 202 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_12
# 203 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_12
# 204 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_12
# 206 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_13
# 207 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_13
# 209 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_14
EventScript_Shop_Varrick_4:
# 216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 217 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 174 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 182 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 186 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 190 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 193 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_4
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 196 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_5
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 201 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 205 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 208 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 210 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_15
# 210 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_15
# 213 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_15:
# 211 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 220 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 221 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 224 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 225 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 226 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 227 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 228 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 229 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 230 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 233 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 234 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 235 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 236 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 237 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 238 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 239 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 240 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 241 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 242 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 243 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 244 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 245 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 246 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 247 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 250 "data/scripts/battle_labyrinth.pory"
Shop_Items_4:
# 251 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 252 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 253 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 254 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 256 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 257 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 258 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 259 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 260 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 261 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 262 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 263 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 264 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 265 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 266 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 267 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 268 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 274 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 275 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 276 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 277 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 284 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 285 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 286 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 287 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 288 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 289 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 290 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 291 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_NONE

	.align 2
# 294 "data/scripts/battle_labyrinth.pory"
Shop_Items_5:
# 295 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
# 296 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_STONE
# 297 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_STONE
# 298 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THUNDER_STONE
# 299 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEAF_STONE
# 300 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MOON_STONE
# 301 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUN_STONE
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 303 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 304 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 305 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 308 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 309 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 310 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 316 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 317 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 318 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WHIPPED_DREAM
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SACHET
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PINK_SCARF
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SURPRISE_MULCH
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 326 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 327 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 328 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 329 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 330 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 331 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 332 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 333 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 334 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 335 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 336 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 337 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 338 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 339 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 340 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 341 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 342 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 343 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 344 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 347 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 348 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 349 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 353 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 354 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 355 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 364 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 365 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 366 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 375 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 378 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 390 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 391 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 416 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
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
	.2byte ITEM_NONE

	.align 2
# 450 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 511 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 566 "data/scripts/battle_labyrinth.pory"
	lock
# 567 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 568 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 574 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 575 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 576 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 577 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 578 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 579 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 581 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 582 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 583 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 584 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 586 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 587 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 589 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_9
# 590 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_9
# 591 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_9
# 592 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_9
# 593 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_9
# 594 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_9
# 595 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_9
# 596 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_9
# 597 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_9
# 598 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_9
# 599 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_9
# 600 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_9
# 601 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_9
# 602 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_9
EventScript_Shop_Julia_4:
# 605 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 606 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 569 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 572 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 580 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 585 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 588 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_3
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_9:
# 603 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 609 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 610 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 613 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 615 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 616 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 617 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 618 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 623 "data/scripts/battle_labyrinth.pory"
Shop_Berries_3:
# 624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 625 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 627 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 635 "data/scripts/battle_labyrinth.pory"
	lock
# 636 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 637 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 646 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 647 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 648 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 638 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 644 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 652 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 653 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 654 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 655 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 656 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 730 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 657 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 662 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 666 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 667 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 668 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 671 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_19
EventScript_Shop_Marie_MainMenu_18:
# 674 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
# 677 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Marie_MainMenu_25
EventScript_Shop_Marie_MainMenu_24:
# 680 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Marie_MainMenu_28
EventScript_Shop_Marie_MainMenu_27:
# 691 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_20, 13
# 692 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 693 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 694 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_31
# 702 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_32
# 710 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_MainMenu_33
# 718 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_MainMenu_34
# 726 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_MainMenu_35
# 727 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_35
	return

EventScript_Shop_Marie_MainMenu_3:
# 731 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_25, MSGBOX_DEFAULT
# 732 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 735 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 659 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 657 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 733 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 663 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 669 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 672 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 1
	goto EventScript_Shop_Marie_MainMenu_18

EventScript_Shop_Marie_MainMenu_22:
# 675 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_9, 2
	goto EventScript_Shop_Marie_MainMenu_21

EventScript_Shop_Marie_MainMenu_25:
# 678 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_10, 3
	goto EventScript_Shop_Marie_MainMenu_24

EventScript_Shop_Marie_MainMenu_28:
# 681 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_11, 4
# 682 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_12, 5
# 683 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_13, 6
# 684 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_14, 7
# 685 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_15, 8
# 686 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_16, 9
# 687 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_17, 10
# 688 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_18, 11
# 689 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_19, 12
	goto EventScript_Shop_Marie_MainMenu_27

EventScript_Shop_Marie_MainMenu_31:
# 695 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 696 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_21, MSGBOX_YESNO
# 697 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_37
EventScript_Shop_Marie_MainMenu_36:
# 700 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_32:
# 703 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 704 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_22, MSGBOX_YESNO
# 705 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_40
EventScript_Shop_Marie_MainMenu_39:
# 708 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_33:
# 711 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 712 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_23, MSGBOX_YESNO
# 713 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_43
EventScript_Shop_Marie_MainMenu_42:
# 716 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_34:
# 719 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 720 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_24, MSGBOX_YESNO
# 721 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_46
EventScript_Shop_Marie_MainMenu_45:
# 724 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_35:
# 728 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_37:
# 698 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_ElementalMonkeyEgg
	goto EventScript_Shop_Marie_MainMenu_36

EventScript_Shop_Marie_MainMenu_40:
# 706 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_RegionalFormEgg
	goto EventScript_Shop_Marie_MainMenu_39

EventScript_Shop_Marie_MainMenu_43:
# 714 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon1Egg
	goto EventScript_Shop_Marie_MainMenu_42

EventScript_Shop_Marie_MainMenu_46:
# 722 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon2Egg
	goto EventScript_Shop_Marie_MainMenu_45


EventScript_Shop_Marie_ElementalMonkeyEgg::
# 740 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 741 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_2
# 746 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 747 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_5
EventScript_Shop_Marie_ElementalMonkeyEgg_4:
# 767 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_ElementalMonkeyEgg_8
EventScript_Shop_Marie_ElementalMonkeyEgg_7:
# 770 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_14
EventScript_Shop_Marie_ElementalMonkeyEgg_13:
# 774 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 775 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 776 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 777 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 778 "data/scripts/battle_labyrinth.pory"
	random 3
# 779 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 780 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_ElementalMonkeyEgg_20
# 782 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_ElementalMonkeyEgg_21
# 784 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_ElementalMonkeyEgg_22
EventScript_Shop_Marie_ElementalMonkeyEgg_18:
# 787 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 788 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 789 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 790 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 791 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 792 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 793 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_2:
# 742 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 743 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_5:
# 748 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 749 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 750 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 751 "data/scripts/battle_labyrinth.pory"
	waitstate
# 752 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 753 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 754 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_11
# 758 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 759 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 760 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 761 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 762 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_16
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_4

EventScript_Shop_Marie_ElementalMonkeyEgg_8:
# 768 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_7

EventScript_Shop_Marie_ElementalMonkeyEgg_11:
# 755 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_14:
# 771 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 772 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_13

EventScript_Shop_Marie_ElementalMonkeyEgg_16:
# 763 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_20:
# 781 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_21:
# 783 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_22:
# 785 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18


EventScript_Shop_Marie_RegionalFormEgg::
# 797 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 798 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_2
# 803 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 804 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_5
EventScript_Shop_Marie_RegionalFormEgg_4:
# 824 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_RegionalFormEgg_8
EventScript_Shop_Marie_RegionalFormEgg_7:
# 827 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_14
EventScript_Shop_Marie_RegionalFormEgg_13:
# 831 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 832 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 834 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 835 "data/scripts/battle_labyrinth.pory"
	random 4
# 836 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 837 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_RegionalFormEgg_20
# 839 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_RegionalFormEgg_21
# 841 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_RegionalFormEgg_22
# 843 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_RegionalFormEgg_23
EventScript_Shop_Marie_RegionalFormEgg_18:
# 846 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 847 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 848 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 849 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 850 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 851 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 852 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_RegionalFormEgg_2:
# 799 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 800 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_5:
# 805 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 806 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 807 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 808 "data/scripts/battle_labyrinth.pory"
	waitstate
# 809 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 810 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 811 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_11
# 815 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 816 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 817 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 818 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 819 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_16
	goto EventScript_Shop_Marie_RegionalFormEgg_4

EventScript_Shop_Marie_RegionalFormEgg_8:
# 825 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_RegionalFormEgg_7

EventScript_Shop_Marie_RegionalFormEgg_11:
# 812 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_14:
# 828 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 829 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_RegionalFormEgg_13

EventScript_Shop_Marie_RegionalFormEgg_16:
# 820 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_20:
# 838 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MEOWTH_ALOLA
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_21:
# 840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ZIGZAGOON_GALAR
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_22:
# 842 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VOLTORB_HISUI
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_23:
# 844 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WOOPER_PALDEA
	goto EventScript_Shop_Marie_RegionalFormEgg_18


EventScript_Shop_Marie_BabyPokemon1Egg::
# 856 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 857 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_2
# 862 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 863 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_5
EventScript_Shop_Marie_BabyPokemon1Egg_4:
# 883 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon1Egg_8
EventScript_Shop_Marie_BabyPokemon1Egg_7:
# 886 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_14
EventScript_Shop_Marie_BabyPokemon1Egg_13:
# 890 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 891 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 892 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 893 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 894 "data/scripts/battle_labyrinth.pory"
	random 3
# 895 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 896 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon1Egg_20
# 898 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon1Egg_21
# 900 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon1Egg_22
EventScript_Shop_Marie_BabyPokemon1Egg_18:
# 903 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 904 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 905 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 906 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 907 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 908 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 909 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon1Egg_2:
# 858 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 859 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_5:
# 864 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 865 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 866 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 867 "data/scripts/battle_labyrinth.pory"
	waitstate
# 868 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 869 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 870 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_11
# 874 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 875 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 876 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 877 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 878 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_16
	goto EventScript_Shop_Marie_BabyPokemon1Egg_4

EventScript_Shop_Marie_BabyPokemon1Egg_8:
# 884 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon1Egg_7

EventScript_Shop_Marie_BabyPokemon1Egg_11:
# 871 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_14:
# 887 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 888 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon1Egg_13

EventScript_Shop_Marie_BabyPokemon1Egg_16:
# 879 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_20:
# 897 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOOCHUM
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_21:
# 899 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ELEKID
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_22:
# 901 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MAGBY
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18


EventScript_Shop_Marie_BabyPokemon2Egg::
# 913 "data/scripts/battle_labyrinth.pory"
	checkmoney 10000, 0
# 914 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_2
# 919 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 920 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_5
EventScript_Shop_Marie_BabyPokemon2Egg_4:
# 940 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon2Egg_8
EventScript_Shop_Marie_BabyPokemon2Egg_7:
# 943 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_14
EventScript_Shop_Marie_BabyPokemon2Egg_13:
# 947 "data/scripts/battle_labyrinth.pory"
	removemoney 10000
# 948 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 949 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 950 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 951 "data/scripts/battle_labyrinth.pory"
	random 4
# 952 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 953 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon2Egg_20
# 955 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon2Egg_21
# 957 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon2Egg_22
# 959 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_BabyPokemon2Egg_23
EventScript_Shop_Marie_BabyPokemon2Egg_18:
# 962 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 963 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 964 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 965 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 966 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 967 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 968 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon2Egg_2:
# 915 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 916 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_5:
# 921 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 922 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 923 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 924 "data/scripts/battle_labyrinth.pory"
	waitstate
# 925 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 926 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 927 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_11
# 931 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 932 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 933 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 934 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 935 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_16
	goto EventScript_Shop_Marie_BabyPokemon2Egg_4

EventScript_Shop_Marie_BabyPokemon2Egg_8:
# 941 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon2Egg_7

EventScript_Shop_Marie_BabyPokemon2Egg_11:
# 928 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_14:
# 944 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 945 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon2Egg_13

EventScript_Shop_Marie_BabyPokemon2Egg_16:
# 936 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_20:
# 954 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_21:
# 956 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_TOGEPI
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_22:
# 958 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_23:
# 960 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_RIOLU
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18


EventScript_Shop_Lelouch::
# 972 "data/scripts/battle_labyrinth.pory"
	lock
# 973 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 974 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 980 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 985 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 999 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 1000 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 1001 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1002 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 1004 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 1006 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 1008 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 1011 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 1012 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 975 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 976 "data/scripts/battle_labyrinth.pory"
	delay 16
# 977 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 978 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 981 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 982 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 986 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 997 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 1003 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 1005 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 1007 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 1009 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 1024 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 1025 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 1029 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 1030 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 1031 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 1034 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 1035 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1036 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1037 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 1051 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1210 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1211 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 1026 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 1032 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 1031 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 1031 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 1038 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 1039 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 1052 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 1053 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 1040 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 1041 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1042 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 1047 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 1054 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1055 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1056 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 1059 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1060 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 1063 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 1064 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 1065 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 1066 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 1067 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1068 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1069 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 1072 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 1075 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 1078 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 1081 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 1083 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 1084 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 1087 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 1088 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1089 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1090 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 1093 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 1096 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 1099 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 1102 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 1104 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 1105 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 1108 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 1109 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1110 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1111 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 1114 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 1117 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 1120 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 1123 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 1125 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 1126 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 1129 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 1130 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1131 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1132 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 1135 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 1138 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1141 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1144 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1146 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1147 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1150 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1151 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1152 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1153 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1156 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1159 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1162 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1165 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1167 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1168 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1171 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1172 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1173 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1174 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1177 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1180 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1183 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1186 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1188 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1189 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1192 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1196 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1197 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1200 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1201 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1202 "data/scripts/battle_labyrinth.pory"
	waitse
# 1203 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1204 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1205 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 1043 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 1044 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1045 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 1057 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 1061 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 1070 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 1071 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 1073 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 1074 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 1076 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 1077 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 1079 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 1080 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 1082 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 1091 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 1092 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 1094 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 1095 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 1097 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 1098 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 1100 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 1101 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 1103 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 1112 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 1113 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 1115 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 1116 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 1118 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 1119 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 1121 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 1122 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 1124 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 1133 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 1134 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 1136 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 1137 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1139 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1140 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1142 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1143 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1145 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1154 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1155 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1157 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1158 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1160 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1161 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1163 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1164 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1166 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1175 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1176 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1179 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1181 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1182 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1184 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1185 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1187 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1193 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1258 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1259 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1263 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Moves_Text_0, MSGBOX_DEFAULT
# 1264 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Lelouch_Moves_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 1265 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1266 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1268 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1270 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1271 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1260 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1267 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1269 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1277 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1278 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1282 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1283 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1284 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1285 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1288 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1289 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1293 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1297 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1298 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1299 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1300 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1303 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1304 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1294 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1311 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1312 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1316 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1313 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1321 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1322 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1358 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1359 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1360 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1361 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_MoveTutor_8
# 1364 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_9
# 1367 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_10
# 1370 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_11
# 1373 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_12
# 1376 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_13
# 1379 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_14
# 1382 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_15
# 1385 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_16
# 1388 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_17
# 1466 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1467 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1470 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1471 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1472 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1475 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1476 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveTutor
# 1477 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1478 "data/scripts/battle_labyrinth.pory"
	lock
# 1479 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1480 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1483 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1484 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1323 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 0
# 1324 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 1
# 1325 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 2
# 1326 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 3
# 1327 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 4
# 1328 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 5
# 1329 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 6
# 1330 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 7
# 1331 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 8
# 1332 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 9
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1362 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_VENOSHOCK
# 1363 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_VENOSHOCK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ELECTROWEB
# 1366 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1368 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1369 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1371 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1372 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1374 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1375 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1377 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1378 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1380 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SYNTHESIS
# 1381 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1383 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_PAIN_SPLIT
# 1384 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1386 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_DEFOG
# 1387 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_DEFOG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1389 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TRICK
# 1390 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1491 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1492 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1496 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1497 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1498 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1499 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1502 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1503 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1506 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1507 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1508 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1510 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1511 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1512 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1518 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1524 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1530 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1536 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1542 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1548 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1554 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1560 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1566 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1572 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1578 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1584 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1590 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1596 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1602 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1608 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1614 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1620 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1626 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1632 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1638 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1641 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1642 "data/scripts/battle_labyrinth.pory"
	waitse
# 1643 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_45
# 1644 "data/scripts/battle_labyrinth.pory"
	special SetMonNature
# 1645 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1646 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1493 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1504 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1513 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 1
# 1514 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1515 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1519 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 3
# 1520 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1521 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1525 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 4
# 1526 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1527 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1531 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 2
# 1532 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1533 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1537 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
# 1538 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1539 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1543 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 8
# 1544 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1545 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1549 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 9
# 1550 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1551 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1555 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 7
# 1556 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1557 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 15
# 1562 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1563 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1567 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 16
# 1568 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1569 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1573 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 19
# 1574 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1575 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1579 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 17
# 1580 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1581 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 20
# 1586 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1587 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1591 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 21
# 1592 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1593 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1597 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 23
# 1598 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1599 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1603 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 22
# 1604 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1605 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 10
# 1610 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1611 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1615 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 11
# 1616 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1617 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1621 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 13
# 1622 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1623 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1627 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 14
# 1628 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1629 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1633 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 12
# 1634 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1635 "data/scripts/battle_labyrinth.pory"
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
# 1653 "data/scripts/battle_labyrinth.pory"
	lock
# 1654 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1655 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1659 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Joy_6
EventScript_Shop_Joy_4:
# 1663 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_10
# 1666 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3, MSGBOX_DEFAULT
EventScript_Shop_Joy_9:
# 1668 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1669 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4, MSGBOX_YESNO
# 1670 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_14
# 1674 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_17
# 1692 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1693 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_23
# 1697 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1698 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1699 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1700 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1701 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1702 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1703 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1704 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1705 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_8, MSGBOX_DEFAULT
# 1706 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_13:
# 1710 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_9
# 1711 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1656 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1657 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1660 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1
# 1661 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_UPGRADED
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_6:
# 1659 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_UPGRADED, EventScript_Shop_Joy_5
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_10:
# 1664 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_9

EventScript_Shop_Joy_14:
# 1671 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1672 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_17:
# 1675 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1676 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_20
# 1680 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1681 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1682 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6
# 1683 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1684 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1685 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1686 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1687 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1688 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_7, MSGBOX_DEFAULT
# 1689 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_20:
# 1677 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1678 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13

EventScript_Shop_Joy_23:
# 1694 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1695 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_13


EventScript_Shop_BreederF::
# 1716 "data/scripts/battle_labyrinth.pory"
	lock
# 1717 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1718 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1719 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_0, MSGBOX_YESNO
# 1720 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_BreederF_2
# 1724 "data/scripts/battle_labyrinth.pory"
	checkmoney 100, 0
# 1725 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_BreederF_5
# 1729 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_2, MSGBOX_DEFAULT
# 1730 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1731 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1732 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1733 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1734 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne EventScript_Shop_BreederF_8
# 1757 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1758 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
EventScript_Shop_BreederF_1:
# 1762 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_BreederF_2:
# 1721 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1722 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_5:
# 1726 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_1
# 1727 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_8:
# 1735 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1736 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_BreederF_11
# 1740 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1741 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1742 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1743 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_4, MSGBOX_YESNO
# 1744 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederF_14
# 1752 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1753 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_11:
# 1737 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1738 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_3
	goto EventScript_Shop_BreederF_1

EventScript_Shop_BreederF_14:
# 1745 "data/scripts/battle_labyrinth.pory"
	removemoney 100
# 1746 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1747 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 12
# 1748 "data/scripts/battle_labyrinth.pory"
	special SetMonNature
# 1749 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_5
# 1750 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederF_1


EventScript_Shop_BreederM::
# 1767 "data/scripts/battle_labyrinth.pory"
	lock
# 1768 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1769 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1770 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_0, MSGBOX_YESNO
# 1771 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_BreederM_2
# 1775 "data/scripts/battle_labyrinth.pory"
	checkmoney 100, 0
# 1776 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_BreederM_5
# 1780 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_1, MSGBOX_DEFAULT
# 1781 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1782 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1783 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1784 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1785 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne EventScript_Shop_BreederM_8
# 1843 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1844 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
EventScript_Shop_BreederM_1:
# 1848 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_BreederM_2:
# 1772 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1773 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_5:
# 1777 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederF_Text_1
# 1778 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_8:
# 1786 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1787 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_BreederM_11
# 1791 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1792 "data/scripts/battle_labyrinth.pory"
	special BufferMonAbilities
# 1793 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EventScript_Shop_BreederM_14
# 1799 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq EventScript_Shop_BreederM_15
# 1823 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EventScript_Shop_BreederM_16
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_11:
# 1788 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1789 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_2
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_14:
# 1794 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1795 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1796 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_4
# 1797 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_3
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_15:
# 1800 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_Shop_BreederM_20
# 1806 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1807 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1808 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_5, MSGBOX_YESNO
# 1809 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederM_26
# 1818 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1819 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_16:
# 1824 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1825 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1826 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_7, MSGBOX_YESNO
# 1827 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_BreederM_23
# 1836 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1837 "data/scripts/battle_labyrinth.pory"
	msgbox Shop_Breeders_Exit
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_20:
# 1801 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1802 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_4, ScriptGetPartyMonSpecies
# 1803 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_4
# 1804 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_4
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_23:
# 1828 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1829 "data/scripts/battle_labyrinth.pory"
	removemoney 100
# 1830 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1831 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 0
# 1832 "data/scripts/battle_labyrinth.pory"
	special ChangePokemonAbility
# 1833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_6
# 1834 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1

EventScript_Shop_BreederM_26:
# 1810 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1811 "data/scripts/battle_labyrinth.pory"
	removemoney 100
# 1812 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1813 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 1
# 1814 "data/scripts/battle_labyrinth.pory"
	special ChangePokemonAbility
# 1815 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_BreederM_Text_6
# 1816 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_BreederM_1


EventScript_Shop_Alexander::
# 1857 "data/scripts/battle_labyrinth.pory"
	lock
# 1858 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1859 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1863 "data/scripts/battle_labyrinth.pory"
	lock
# 1864 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1865 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1869 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1869 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1870 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1871 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1872 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1873 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1874 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1875 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1878 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1880 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1876 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1888 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1889 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1890 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1891 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1894 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1896 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1892 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1900 "data/scripts/battle_labyrinth.pory"
	lock
# 1901 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1902 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1907 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1908 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1909 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1910 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Max_6
# 1912 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1914 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_8
# 1916 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_9
EventScript_Max_4:
# 1919 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3, MSGBOX_AUTOCLOSE
# 1920 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1903 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1904 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1905 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1911 "data/scripts/battle_labyrinth.pory"
	pokemart Zone2A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1913 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1915 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1917 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1923 "data/scripts/battle_labyrinth.pory"
Zone2A_Shop_TMShop:
# 1924 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

	.align 2
# 1927 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1928 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_TRAILBLAZE
# 1929 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_FLAME_CHARGE
# 1930 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 1931 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

	.align 2
# 1934 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1935 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_IRON_DEFENSE
# 1936 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AGILITY
# 1937 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AMNESIA
	.2byte ITEM_NONE

	.align 2
# 1940 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1941 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1942 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1943 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_SanctuaryToZone0::
# 1947 "data/scripts/battle_labyrinth.pory"
	lockall
# 1948 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1949 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1950 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 1951 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 1956 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1957 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1958 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 1960 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 1952 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1953 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 1954 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_WhenUReadyDialogue::
# 1964 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1965 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_WhenUReadyDialogue_2
# 1967 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_WhenUReadyDialogue_3
# 1969 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_WhenUReadyDialogue_4
# 1971 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_WhenUReadyDialogue_5
# 1973 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_WhenUReadyDialogue_6
# 1975 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_WhenUReadyDialogue_7
# 1977 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_WhenUReadyDialogue_8
# 1979 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_WhenUReadyDialogue_9
# 1981 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_WhenUReadyDialogue_10
# 1983 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_WhenUReadyDialogue_11
# 1985 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_WhenUReadyDialogue_12
# 1987 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_WhenUReadyDialogue_13
# 1989 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_WhenUReadyDialogue_14
# 1991 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_WhenUReadyDialogue_15
# 1993 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_WhenUReadyDialogue_16
# 1995 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_WhenUReadyDialogue_17
# 1997 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_WhenUReadyDialogue_18
# 1999 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_WhenUReadyDialogue_19
# 2001 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_WhenUReadyDialogue_20
# 2003 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_WhenUReadyDialogue_21
# 2005 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_WhenUReadyDialogue_22
	return

EventScript_WhenUReadyDialogue_2:
# 1966 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_0, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_3:
# 1968 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_1, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_4:
# 1970 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_2, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_5:
# 1972 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_3, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_6:
# 1974 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_4, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_7:
# 1976 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_5, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_8:
# 1978 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_6, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_9:
# 1980 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_7, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_10:
# 1982 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_8, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_11:
# 1984 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_9, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_12:
# 1986 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_10, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_13:
# 1988 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_11, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_14:
# 1990 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_12, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_15:
# 1992 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_13, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_16:
# 1994 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_14, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_17:
# 1996 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_11, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_18:
# 1998 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_15, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_19:
# 2000 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_16, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_20:
# 2002 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_17, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_21:
# 2004 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_18, MSGBOX_AUTOCLOSE
	return

EventScript_WhenUReadyDialogue_22:
# 2006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_WhenUReadyDialogue_Text_11, MSGBOX_AUTOCLOSE
	return


EventScript_WhenUReady::
# 2011 "data/scripts/battle_labyrinth.pory"
	call EventScript_WhenUReadyDialogue
# 2012 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_Documentation::
# 2017 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 2018 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 2056 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 2057 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 2058 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 2060 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 2063 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 2065 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 2068 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 2070 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 2073 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 2075 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 2078 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_24
# 2081 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 2083 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 2086 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 2088 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 2089 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 2089 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 2092 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 2094 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 2094 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 2097 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 2099 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 2099 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 2102 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 2104 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 2104 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 2107 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 2109 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 2109 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 2112 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 2114 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 2114 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 2117 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 2119 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 2119 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
# 2122 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 2124 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 2124 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 2127 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 2129 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 2129 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 2132 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 2134 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 2134 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 2137 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 2139 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 2140 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2141 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2142 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 2171 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 2207 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 2236 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2300 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2329 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2348 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2350 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2375 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2400 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2425 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2450 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2475 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2504 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2529 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2554 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2579 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2605 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2606 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 2059 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 2061 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 2064 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 2066 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 2069 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 2071 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 2074 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 2076 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 2079 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 2084 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 2090 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 2095 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 2100 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 2105 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 2110 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 2115 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 2120 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 2125 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 2130 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 2135 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 2143 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 2144 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 2156 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 2159 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 2160 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 2172 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 2173 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 2183 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 2196 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 2197 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 2208 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 2209 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 2225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 2226 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 2237 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 2238 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2285 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2288 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2289 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2301 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2302 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_122
# 2316 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2317 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2318 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2330 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2331 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2340 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_YESNO
# 2341 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2349 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2351 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2352 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2352 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2366 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2367 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_YESNO
# 2368 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2376 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2377 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2377 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2391 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2392 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_YESNO
# 2393 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2401 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2402 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2402 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2416 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2417 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_YESNO
# 2418 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2426 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2427 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2427 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2441 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2442 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_YESNO
# 2443 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2451 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2452 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2452 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2466 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2467 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_YESNO
# 2468 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2476 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2477 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2477 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2491 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2492 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2501 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2505 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2506 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2506 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2520 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2521 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_YESNO
# 2522 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2530 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2531 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2531 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2545 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2546 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_YESNO
# 2547 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2555 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2556 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2556 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2570 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2571 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_YESNO
# 2572 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2580 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2581 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2581 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2595 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2596 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_YESNO
# 2597 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2607 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2610 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2145 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 2146 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2174 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 2176 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 2179 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 2180 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 2210 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 2213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 2214 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 2239 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 2273 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2274 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2303 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2305 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2332 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2333 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2353 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2354 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2363 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2378 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2379 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2388 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2403 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2404 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2413 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2428 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2429 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2438 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2453 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2454 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2463 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2478 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2479 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2488 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2507 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2508 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2517 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2532 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2533 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2542 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2557 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2558 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2567 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2582 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2583 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2592 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 2147 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 2148 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 2157 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 2184 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 2185 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 2175 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 2177 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 2211 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 2227 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 2228 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 2240 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 2241 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 2242 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2286 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2306 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2308 "data/scripts/battle_labyrinth.pory"
	waitse
# 2309 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_INFO
# 2310 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2319 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2320 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2321 "data/scripts/battle_labyrinth.pory"
	waitse
# 2322 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_INFO
# 2323 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2334 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2336 "data/scripts/battle_labyrinth.pory"
	waitse
# 2337 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2342 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2343 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2344 "data/scripts/battle_labyrinth.pory"
	waitse
# 2345 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2355 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2356 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2369 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2370 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2371 "data/scripts/battle_labyrinth.pory"
	waitse
# 2372 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2380 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2381 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2394 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2395 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2396 "data/scripts/battle_labyrinth.pory"
	waitse
# 2397 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2405 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2406 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2419 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2420 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2421 "data/scripts/battle_labyrinth.pory"
	waitse
# 2422 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2430 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2431 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2444 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2445 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2446 "data/scripts/battle_labyrinth.pory"
	waitse
# 2447 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2455 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2456 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2469 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2470 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2471 "data/scripts/battle_labyrinth.pory"
	waitse
# 2472 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2480 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2481 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2493 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_YESNO
# 2494 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2510 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2523 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2524 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2525 "data/scripts/battle_labyrinth.pory"
	waitse
# 2526 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2535 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2548 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2549 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2550 "data/scripts/battle_labyrinth.pory"
	waitse
# 2551 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2559 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2560 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2573 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2574 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2575 "data/scripts/battle_labyrinth.pory"
	waitse
# 2576 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2584 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2585 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2598 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2599 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
# 2600 "data/scripts/battle_labyrinth.pory"
	waitse
# 2601 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2149 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 2151 "data/scripts/battle_labyrinth.pory"
	waitse
# 2152 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2161 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 2162 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_268:
# 2186 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 2187 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_270:
# 2198 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 2199 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_272:
# 2215 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 2216 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2229 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 2231 "data/scripts/battle_labyrinth.pory"
	waitse
# 2232 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 2243 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2244 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2245 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2246 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2247 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2248 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2249 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2250 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2251 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2252 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2253 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2254 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2255 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2256 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2257 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2258 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2259 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2260 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2261 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2262 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2263 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2264 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2265 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2266 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2267 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2268 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2269 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 2275 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 2276 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2291 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_282:
# 2311 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DEXNAV_GET
# 2312 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 2324 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 2325 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_286:
# 2357 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2358 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2359 "data/scripts/battle_labyrinth.pory"
	waitse
# 2360 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_288:
# 2382 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2383 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2384 "data/scripts/battle_labyrinth.pory"
	waitse
# 2385 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2407 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2408 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2409 "data/scripts/battle_labyrinth.pory"
	waitse
# 2410 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2432 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2434 "data/scripts/battle_labyrinth.pory"
	waitse
# 2435 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2457 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2458 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2459 "data/scripts/battle_labyrinth.pory"
	waitse
# 2460 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2482 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2483 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2484 "data/scripts/battle_labyrinth.pory"
	waitse
# 2485 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2495 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2496 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2497 "data/scripts/battle_labyrinth.pory"
	waitse
# 2498 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2511 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2512 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2513 "data/scripts/battle_labyrinth.pory"
	waitse
# 2514 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2536 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2537 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2538 "data/scripts/battle_labyrinth.pory"
	waitse
# 2539 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2561 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2562 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2563 "data/scripts/battle_labyrinth.pory"
	waitse
# 2564 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2586 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2587 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2588 "data/scripts/battle_labyrinth.pory"
	waitse
# 2589 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2163 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 2165 "data/scripts/battle_labyrinth.pory"
	waitse
# 2166 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2188 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2189 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 2190 "data/scripts/battle_labyrinth.pory"
	waitse
# 2191 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 2192 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2200 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2201 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 2202 "data/scripts/battle_labyrinth.pory"
	waitse
# 2203 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2217 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 2219 "data/scripts/battle_labyrinth.pory"
	waitse
# 2220 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2277 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2278 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2279 "data/scripts/battle_labyrinth.pory"
	waitse
# 2280 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_318:
# 2292 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2293 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2294 "data/scripts/battle_labyrinth.pory"
	waitse
# 2295 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2618 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2619 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2620 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_20
# 2621 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2622 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2664 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2706 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2748 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2749 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2623 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2624 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2665 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2666 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2707 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2708 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2625 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2626 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2629 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2632 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2635 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2638 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2641 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2645 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2646 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2647 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2649 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2651 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2653 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2655 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2657 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2660 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2667 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2668 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2671 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2674 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2677 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2680 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2683 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2687 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2688 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2689 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2691 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2693 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2695 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2697 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2699 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2702 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2709 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2710 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2713 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2716 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2719 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2722 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2725 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2729 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2730 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2731 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2733 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2735 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2737 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2739 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2741 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2744 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2627 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2628 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2630 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2631 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2633 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2634 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2636 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2637 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2639 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2640 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2643 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2669 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2670 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2672 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2673 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2675 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2676 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2678 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2679 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2681 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2682 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2685 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2711 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2712 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2714 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2715 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2717 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2718 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2720 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2721 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2723 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2724 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2727 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2648 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2650 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2652 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2654 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2656 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2659 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2661 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2690 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2692 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2694 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2696 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2698 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2701 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2703 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2732 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2734 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2736 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2738 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2740 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2743 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2745 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_SignsQuestGirl::
# 2756 "data/scripts/battle_labyrinth.pory"
	lock
# 2757 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2758 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SIGNS
# 2759 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SignsQuestGirl_2
EventScript_SignsQuestGirl_1:
# 2763 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_1
# 2764 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SignsQuestGirl_2:
# 2760 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_0
# 2761 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SIGNS
	goto EventScript_SignsQuestGirl_1


EventScript_SavesQuestBoy::
# 2769 "data/scripts/battle_labyrinth.pory"
	lock
# 2770 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2771 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SAVES
# 2772 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_2
EventScript_SavesQuestBoy_1:
# 2776 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SAVES
# 2777 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_5
EventScript_SavesQuestBoy_4:
# 2786 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_3
# 2787 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SavesQuestBoy_2:
# 2773 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_0
# 2774 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SAVES
	goto EventScript_SavesQuestBoy_1

EventScript_SavesQuestBoy_5:
# 2778 "data/scripts/battle_labyrinth.pory"
	callnative SavesQuestCheckIfDone
# 2779 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_TEMP_6, EventScript_SavesQuestBoy_7
	goto EventScript_SavesQuestBoy_4

EventScript_SavesQuestBoy_7:
# 2780 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_1
# 2781 "data/scripts/battle_labyrinth.pory"
	giveitem ITEM_ROTOM_CATALOG
# 2782 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_2
# 2783 "data/scripts/battle_labyrinth.pory"
	completequest QUEST_SAVES
	goto EventScript_SavesQuestBoy_4


EventScript_PokedexQuestScientist::
# 2792 "data/scripts/battle_labyrinth.pory"
	lock
# 2793 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2794 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_POKEDEX
# 2795 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_PokedexQuestScientist_2
EventScript_PokedexQuestScientist_1:
# 2799 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_1
# 2800 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PokedexQuestScientist_2:
# 2796 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_0
# 2797 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_POKEDEX
	goto EventScript_PokedexQuestScientist_1


EventScript_WarpZone0::
# 2805 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2806 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2807 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2808 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2809 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2810 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2811 "data/scripts/battle_labyrinth.pory"
	waitstate
# 2812 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 3065 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 3066 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3067 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 3068 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 3069 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 3077 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 3078 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3079 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 3080 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 3088 "data/scripts/battle_labyrinth.pory"
	lock
# 3089 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 3090 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 3093 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 3094 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 3095 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 3103 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 3091 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 3096 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3097 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 3098 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 3099 "data/scripts/battle_labyrinth.pory"
	setvar VAR_GENERIC, 1
# 3100 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_SANCTUARY, 255, 38, 11
# 3101 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 3107 "data/scripts/battle_labyrinth.pory"

# 3108 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 3109 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 3110 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 3114 "data/scripts/battle_labyrinth.pory"
	lockall
# 3115 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 3116 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 3121 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 3122 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3123 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 3124 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 3125 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 3126 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 3127 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 3128 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 3129 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3130 "data/scripts/battle_labyrinth.pory"
	waitse
# 3131 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 3132 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 3134 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 3210 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 3117 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3118 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 3133 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 3135 "data/scripts/battle_labyrinth.pory"
	random 70
# 3136 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3137 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 3138 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 3139 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 3140 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 3141 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 3142 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 3143 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 3144 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 3145 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 3146 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 3147 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 3148 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 3149 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 3150 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 3151 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 3152 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 3153 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 3154 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 3155 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 3156 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 3159 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 3160 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 3161 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 3166 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 3167 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 3168 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 3173 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 3174 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 3175 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 3180 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 3181 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 3182 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 3187 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 3188 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 3189 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 3194 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 3195 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 3196 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 3197 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 3198 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 3203 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 3134 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 3157 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3158 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 3162 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 3169 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 3176 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 3183 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 3190 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 3199 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 3204 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 3163 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3164 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 3170 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3171 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 3177 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3178 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 3184 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3185 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 3191 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3192 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 3200 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3201 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 3205 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3206 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_HandleFlashlight::
	checkitem ITEM_FLASHLIGHT
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 3218 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 3216 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_RecoverySign::
# 3224 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3225 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_MedicineSign::
# 3230 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3231 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 3236 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3237 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 3242 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 3248 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3249 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 3254 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3255 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 3260 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3261 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_TPISign::
# 3266 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3267 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_TPISign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_DayCareSign::
# 3272 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3273 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_DayCareSign_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_Sign_GoldenTree::
# 3278 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3279 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_GoldenTree_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_PorygonSign::
# 3284 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3285 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 3286 "data/scripts/battle_labyrinth.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 3287 "data/scripts/battle_labyrinth.pory"
	setseenmon SPECIES_PORYGON
# 3288 "data/scripts/battle_labyrinth.pory"
	waitbuttonpress
# 3289 "data/scripts/battle_labyrinth.pory"
	hidemonpic
# 3290 "data/scripts/battle_labyrinth.pory"
	release
	end


Zone1A_EventScript_Sign_RunningShoes::
# 3295 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3296 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_RunningShoes_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_Sign::
# 3301 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3302 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_ExpShareSign::
# 3307 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3308 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_ExpShareSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_CautionSign::
# 3313 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3314 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_CautionSign::
# 3319 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3320 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 3325 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3326 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 3331 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3332 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


Zone3A_EventScript_Surveil::
# 3337 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3338 "data/scripts/battle_labyrinth.pory"
	msgbox Zone3A_EventScript_Surveil_Text_0, MSGBOX_SIGN
	end


Zone4A_EventScript_Sign::
# 3343 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3344 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4B_EventScript_Sign::
# 3349 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3350 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4B_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4C_EventScript_Sign::
# 3355 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3356 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4C_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4D_EventScript_Sign::
# 3361 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3362 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4D_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4E_EventScript_Sign::
# 3367 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3368 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4E_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone6A_EventScript_Sign::
# 3373 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3374 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_Sign::
# 3379 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3380 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_HealSign::
# 3385 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3386 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_HealSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Sign::
# 3391 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3392 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_HerbalSign::
# 3397 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3398 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


Debug_CheatStart_PBL::
# 3403 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
# 3404 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
# 3405 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
# 3406 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
# 3407 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
# 3408 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
# 3409 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 3411 "data/scripts/battle_labyrinth.pory"
	random 5
# 3412 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3413 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_3
# 3415 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_4
# 3417 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_5
# 3419 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_6
# 3421 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_7
Debug_CheatStart_PBL_1:
# 3424 "data/scripts/battle_labyrinth.pory"
	random 5
# 3425 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3426 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_10
# 3428 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_11
# 3430 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_12
# 3432 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_13
# 3434 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_14
Debug_CheatStart_PBL_8:
# 3437 "data/scripts/battle_labyrinth.pory"
	random 5
# 3438 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3439 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_17
# 3441 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_18
# 3443 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_19
# 3445 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_20
# 3447 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_21
Debug_CheatStart_PBL_15:
# 3450 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RARE_CANDY, 900
# 3451 "data/scripts/battle_labyrinth.pory"
	removemoney 2000
# 3452 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 6
# 3453 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3454 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3455 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
# 3456 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 3457 "data/scripts/battle_labyrinth.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 3459 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WAILMER_PAIL
# 3460 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 2
# 3461 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SIGNS
# 3462 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SAVES
# 3463 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEDEX
# 3464 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3465 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3466 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3467 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3468 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3469 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3470 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3471 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3472 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3473 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
# 3475 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
# 3476 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_0, MSGBOX_YESNO
# 3477 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_23
Debug_CheatStart_PBL_22:
# 3480 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 3481 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3483 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_1
# 3484 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3485 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3486 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_27
# 3488 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_28
# 3491 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_29
Debug_CheatStart_PBL_25:
# 3499 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3501 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_4
# 3502 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_5, Debug_CheatStart_PBL_Text_6
# 3503 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3504 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_32
# 3518 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_33
# 3532 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_34
Debug_CheatStart_PBL_30:
# 3547 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3548 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3549 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 3550 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 3552 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_CLAW
# 3553 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EXP_SHARE
# 3554 "data/scripts/battle_labyrinth.pory"
	additem ITEM_INFINITE_REPEL
# 3555 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3556 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3557 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3558 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NINA
# 3559 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MARIAM
# 3560 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_OSCAR
# 3561 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 3563 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_7
# 3564 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_8, Debug_CheatStart_PBL_Text_9, Debug_CheatStart_PBL_Text_10
# 3565 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3566 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_37
# 3568 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_38
# 3570 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_39
# 3572 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_40
Debug_CheatStart_PBL_35:
# 3578 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3579 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3581 "data/scripts/battle_labyrinth.pory"
	random 10
# 3582 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3583 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_61
# 3584 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_61
# 3586 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_62
# 3588 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_63
# 3590 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_64
# 3592 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_65
# 3594 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_66
# 3596 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_67
# 3598 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_68
# 3600 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_69
Debug_CheatStart_PBL_59:
# 3603 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 6
# 3604 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3605 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
# 3606 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 3608 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILK_SCARF
# 3609 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BUG_BITE
# 3610 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 5
# 3611 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHERI_BERRY, 2
# 3612 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHESTO_BERRY, 2
# 3613 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RAWST_BERRY, 2
# 3614 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ASPEAR_BERRY, 2
# 3615 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PECHA_BERRY, 2
# 3616 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 3617 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_SEARCH
# 3618 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3619 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3620 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3621 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3622 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3623 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_POLLY
# 3624 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JEREMIAH
# 3625 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JOSH
# 3626 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_HARPER
# 3627 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARTHUR
# 3628 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 3630 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_11
# 3631 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3632 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3633 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_72
# 3635 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_73
# 3638 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_74
Debug_CheatStart_PBL_70:
# 3644 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 7
# 3645 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3646 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 3648 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GOOD_ROD
# 3649 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3650 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JEMMA
# 3651 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PATRICK
# 3652 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ANNABELLE
# 3653 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BORIS
# 3654 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RICHARD
# 3655 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_3
# 3657 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_12
# 3658 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17
# 3659 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3660 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_77
# 3662 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_78
# 3664 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_79
# 3666 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_80
# 3668 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_81
# 3670 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_82
Debug_CheatStart_PBL_75:
# 3676 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 9
# 3677 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3678 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 3680 "data/scripts/battle_labyrinth.pory"
	random 8
# 3681 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3682 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_85
# 3684 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_86
# 3686 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_87
# 3688 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_88
# 3690 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_89
# 3692 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_90
# 3694 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_91
# 3696 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_92
Debug_CheatStart_PBL_83:
# 3699 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 3701 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILVER_POWDER
# 3702 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MUSCLE_BAND
# 3703 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WISE_GLASSES
# 3704 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TWISTED_SPOON
# 3705 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_BARB
# 3706 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SNARL
# 3707 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 3708 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BURN_HEAL, 2
# 3709 "data/scripts/battle_labyrinth.pory"
	additem ITEM_AWAKENING, 2
# 3710 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3711 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3712 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3713 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3714 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3715 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_HERMAN
# 3716 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RALPH
# 3717 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CALLIE
# 3718 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SANTIAGO
# 3719 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CHLOE_AND_KAYA
# 3720 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_FRED
# 3721 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_LUCIA
# 3722 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_4
# 3724 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_18
# 3725 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_19, Debug_CheatStart_PBL_Text_20
# 3726 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3727 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_95
# 3729 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_96
# 3731 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_97
Debug_CheatStart_PBL_93:
# 3737 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 11
# 3738 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3740 "data/scripts/battle_labyrinth.pory"
	random 6
# 3741 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3742 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_100
# 3744 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_101
# 3746 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_102
# 3748 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_103
# 3750 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_104
# 3752 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_105
Debug_CheatStart_PBL_98:
# 3755 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 3756 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3757 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
# 3758 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 3760 "data/scripts/battle_labyrinth.pory"
	additem ITEM_METRONOME
# 3761 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_BALL
# 3762 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MIRACLE_SEED
# 3763 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NORMAL_GEM
# 3764 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BUG_GEM
# 3765 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
# 3766 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVIOLITE
# 3767 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RED_SHARD, 5
# 3768 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ANNE_AND_JUNE
# 3769 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NOVA_AND_CORA
# 3770 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CLINTON
# 3771 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_REBECCA
# 3772 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_RYAN
# 3773 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CAITLYN
# 3774 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KENNETH
# 3775 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KEVIN
# 3776 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_5
# 3778 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_21
# 3779 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3780 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3781 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_108
# 3783 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_109
# 3786 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_110
Debug_CheatStart_PBL_106:
# 3792 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 13
# 3793 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3794 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 3796 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEST_BALL
# 3797 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NET_BALL
# 3798 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_DRAINING_KISS
# 3799 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
# 3800 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FLYING_GEM
# 3801 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
# 3802 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SLEDGEHAMMER
# 3803 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 3804 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3805 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_GILBERT
# 3806 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MELANIE
# 3807 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONSTANCE
# 3808 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_FRANK
# 3809 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DUDLEY
# 3810 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DAISY
# 3811 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_VIC_AND_DELL
# 3812 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MINA
# 3813 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_6
# 3815 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_22
# 3816 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3817 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3818 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_113
# 3820 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_114
# 3823 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_115
Debug_CheatStart_PBL_111:
# 3829 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 15
# 3830 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3832 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_23
# 3833 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15
# 3834 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3835 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_118
# 3837 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_119
# 3839 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_120
Debug_CheatStart_PBL_116:
# 3842 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 16
# 3843 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3844 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 3845 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 3847 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SHARP_BEAK
# 3848 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ROCK_GEM
# 3849 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIGHTING_GEM
# 3850 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
# 3851 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_BELT
# 3852 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SITRUS_BERRY, 5
# 3853 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAGNET
# 3854 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HARD_STONE
# 3855 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DUSK_BALL
# 3856 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_HEAL
# 3857 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_THIEF
# 3858 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_ROCK_TOMB
# 3859 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3860 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3861 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GREAT_BALL
# 3862 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 5
# 3863 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 3864 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MACHETE
# 3865 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_HIDDEN_POWER
# 3866 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3867 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3868 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_MILLIE
# 3869 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JAMAL
# 3870 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PAIGE
# 3871 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SETH
# 3872 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONNIE
# 3873 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PETER
# 3874 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_WHITAKER
# 3875 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JIMMY
# 3876 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_EMILIANO
# 3877 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BECKHAM
# 3878 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KAREN
# 3879 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JAYDEN
# 3880 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_NEIL
# 3881 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_TAMARA
# 3882 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_7
# 3883 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_8
# 3885 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_24
# 3886 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3887 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3888 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_123
# 3890 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_124
# 3893 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_125
Debug_CheatStart_PBL_121:
# 3899 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 18
# 3900 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3901 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 3903 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BIG_ROOT
# 3904 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_PLUCK
# 3905 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_GEM
# 3906 "data/scripts/battle_labyrinth.pory"
	additem ITEM_STEEL_GEM
# 3907 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DARK_GEM
# 3908 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MYSTIC_WATER
# 3909 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHARCOAL
# 3910 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_RETALIATE
# 3911 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3912 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3913 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_COOPER
# 3914 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CARMINE
# 3915 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JONATHAN
# 3916 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CALVIN
# 3917 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_LUIS
# 3918 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARI
# 3919 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ARI_CHALLENGE
# 3920 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BERTHA
# 3921 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BERTHA_CHALLENGE
# 3922 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CASSANDRA
# 3923 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CASSANDRA_CHALLENGE
# 3924 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DOMINIC
# 3925 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DOMINIC_CHALLENGE
# 3926 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERICA
# 3927 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERICA_CHALLENGE
# 3929 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_25
# 3930 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_26, Debug_CheatStart_PBL_Text_27
# 3931 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3932 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_128
# 3934 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_129
# 3936 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_130
Debug_CheatStart_PBL_126:
# 3942 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 19
# 3943 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3944 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
# 3946 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SCORCHING_SANDS
# 3947 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_GEM
# 3948 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ELECTRIC_GEM
# 3949 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GROUND_GEM
# 3950 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SOFT_SAND
# 3951 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_GLASSES
# 3952 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HEAVY_DUTY_BOOTS
# 3953 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SAFETY_GOGGLES
# 3954 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BULLDOZE
# 3955 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TERA_ORB
# 3956 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLUE_SHARD, 5
# 3957 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_STEEL_WING
# 3958 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ALANA
# 3959 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_JACOB
# 3960 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_DEWEY
# 3961 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ERNEST
# 3962 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_KYLE
# 3963 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_ELIAS
# 3964 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_PEARLIE
# 3965 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_SUSAN
# 3966 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_CONRAD
# 3967 "data/scripts/battle_labyrinth.pory"
	settrainerflag TRAINER_PBL_BRETT
# 3968 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 3969 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE10B_RECEIVED_TM_STEEL_WING
# 3971 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 11
# 3972 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
# 3973 "data/scripts/battle_labyrinth.pory"
	release
	end

Debug_CheatStart_PBL_3:
# 3414 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_4:
# 3416 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_5:
# 3418 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_6:
# 3420 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_7:
# 3422 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_10:
# 3427 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_11:
# 3429 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_12:
# 3431 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_13:
# 3433 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_14:
# 3435 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_17:
# 3440 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_18:
# 3442 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_19:
# 3444 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_20:
# 3446 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_21:
# 3448 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_23:
# 3478 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_22

Debug_CheatStart_PBL_27:
# 3487 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_28:
# 3489 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 3490 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_29:
# 3492 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3493 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 1
# 3494 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
# 3495 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE_SANCTUARY, 255, 38, 11
# 3496 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_32:
# 3505 "data/scripts/battle_labyrinth.pory"
	random 5
# 3506 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3507 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_42
# 3509 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_43
# 3511 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_44
# 3513 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_45
# 3515 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_46
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_33:
# 3519 "data/scripts/battle_labyrinth.pory"
	random 5
# 3520 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3521 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_48
# 3523 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_49
# 3525 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_50
# 3527 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_51
# 3529 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_52
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_34:
# 3533 "data/scripts/battle_labyrinth.pory"
	random 5
# 3534 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3535 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_54
# 3537 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_55
# 3539 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_56
# 3541 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_57
# 3543 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_58
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_37:
# 3567 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_38:
# 3569 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_39:
# 3571 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_40:
# 3573 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3574 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 2
# 3575 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	end

Debug_CheatStart_PBL_42:
# 3508 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_43:
# 3510 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_HOPPIP
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_44:
# 3512 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BELLSPROUT
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_45:
# 3514 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SMOLIV
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_46:
# 3516 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BOUNSWEET
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_48:
# 3522 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSEAR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_49:
# 3524 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_NUMEL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_50:
# 3526 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SALANDIT
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_51:
# 3528 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_52:
# 3530 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SIZZLIPEDE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_54:
# 3536 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANPOUR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_55:
# 3538 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BARBOACH
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_56:
# 3540 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CLAMPERL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_57:
# 3542 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEEL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_58:
# 3544 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOLDEEN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_61:
# 3585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WURMPLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_62:
# 3587 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_63:
# 3589 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_64:
# 3591 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SCATTERBUG
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_65:
# 3593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_66:
# 3595 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_67:
# 3597 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_KRICKETOT
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_68:
# 3599 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_TAROUNTULA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_69:
# 3601 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_72:
# 3634 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
	goto Debug_CheatStart_PBL_70

Debug_CheatStart_PBL_73:
# 3636 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 3637 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_70

Debug_CheatStart_PBL_74:
# 3639 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3640 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 3
# 3641 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	end

Debug_CheatStart_PBL_77:
# 3661 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 6
	goto Debug_CheatStart_PBL_75

Debug_CheatStart_PBL_78:
# 3663 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
	goto Debug_CheatStart_PBL_75

Debug_CheatStart_PBL_79:
# 3665 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
	goto Debug_CheatStart_PBL_75

Debug_CheatStart_PBL_80:
# 3667 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
	goto Debug_CheatStart_PBL_75

Debug_CheatStart_PBL_81:
# 3669 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
	goto Debug_CheatStart_PBL_75

Debug_CheatStart_PBL_82:
# 3671 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3672 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 4
# 3673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	end

Debug_CheatStart_PBL_85:
# 3683 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_86:
# 3685 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ELECTRIC_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_87:
# 3687 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_88:
# 3689 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_89:
# 3691 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DARK_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_90:
# 3693 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_91:
# 3695 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_92:
# 3697 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FAIRY_GEM
	goto Debug_CheatStart_PBL_83

Debug_CheatStart_PBL_95:
# 3728 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
	goto Debug_CheatStart_PBL_93

Debug_CheatStart_PBL_96:
# 3730 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
	goto Debug_CheatStart_PBL_93

Debug_CheatStart_PBL_97:
# 3732 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3733 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 5
# 3734 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	end

Debug_CheatStart_PBL_100:
# 3743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PACHIRISU
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_101:
# 3745 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_DEDENNE
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_102:
# 3747 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MORPEKO
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_103:
# 3749 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_EMOLGA
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_104:
# 3751 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PLUSLE
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_105:
# 3753 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MINUN
	goto Debug_CheatStart_PBL_98

Debug_CheatStart_PBL_108:
# 3782 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_109:
# 3784 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 3785 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_110:
# 3787 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3788 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 6
# 3789 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	end

Debug_CheatStart_PBL_113:
# 3819 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_114:
# 3821 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 3822 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_115:
# 3824 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3825 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 7
# 3826 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	end

Debug_CheatStart_PBL_118:
# 3836 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_119:
# 3838 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_120:
# 3840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_123:
# 3889 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
	goto Debug_CheatStart_PBL_121

Debug_CheatStart_PBL_124:
# 3891 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
# 3892 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_121

Debug_CheatStart_PBL_125:
# 3894 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3895 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 9
# 3896 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	end

Debug_CheatStart_PBL_128:
# 3933 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
	goto Debug_CheatStart_PBL_126

Debug_CheatStart_PBL_129:
# 3935 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
	goto Debug_CheatStart_PBL_126

Debug_CheatStart_PBL_130:
# 3937 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3938 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 11
# 3939 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	end


Debug_CheatStart_PBL_GenerateMon::
# 3978 "data/scripts/battle_labyrinth.pory"
	callnative DebugCheatStartGenerateMon
# 3979 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
	return


Debug_CheatStart_PBL_GiveMon::
# 3983 "data/scripts/battle_labyrinth.pory"
	givemon VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE
# 3984 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 3985 "data/scripts/battle_labyrinth.pory"
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
# 48 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 94 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 97 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 129 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 164 "data/scripts/battle_labyrinth.pory"
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
# 176 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 216 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 569 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 574 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 605 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 638 "data/scripts/battle_labyrinth.pory"
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
# 647 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 652 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 654 "data/scripts/battle_labyrinth.pory"
	.string "Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 654 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 654 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 659 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 663 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any Eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 666 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which type of Egg would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 669 "data/scripts/battle_labyrinth.pory"
	.string "Elemental Monkey - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 672 "data/scripts/battle_labyrinth.pory"
	.string "Regional Form - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 675 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 1 - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 678 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 2 - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_11:
# 681 "data/scripts/battle_labyrinth.pory"
	.string "Kanto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_12:
# 682 "data/scripts/battle_labyrinth.pory"
	.string "Johto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_13:
# 683 "data/scripts/battle_labyrinth.pory"
	.string "Hoenn Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_14:
# 684 "data/scripts/battle_labyrinth.pory"
	.string "Sinnoh Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_15:
# 685 "data/scripts/battle_labyrinth.pory"
	.string "Unova Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_16:
# 686 "data/scripts/battle_labyrinth.pory"
	.string "Kalos Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_17:
# 687 "data/scripts/battle_labyrinth.pory"
	.string "Alola Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_18:
# 688 "data/scripts/battle_labyrinth.pory"
	.string "Galar Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_19:
# 689 "data/scripts/battle_labyrinth.pory"
	.string "Paldea Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_20:
# 691 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_21:
# 696 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Pansage, Pansear,\n"
	.string "or Panpour will cost ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_22:
# 704 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Alolan Meowth,\n"
	.string "Galarian Zigzagoon, Hisuian Voltorb, or\l"
	.string "Paldean Wooper will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_23:
# 712 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Smoochum, Elekid,\n"
	.string "or Magby will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_24:
# 720 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Happiny, Togepi,\n"
	.string "Munchlax, or Riolu will cost ¥10000.$"

EventScript_Shop_Marie_MainMenu_Text_25:
# 731 "data/scripts/battle_labyrinth.pory"
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
# 733 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0:
# 742 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1:
# 748 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2:
# 761 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3:
# 776 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4:
# 789 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5:
# 791 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 975 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 977 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 981 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 986 "data/scripts/battle_labyrinth.pory"
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
# 999 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 1000 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 1000 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 1000 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 1000 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 1011 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 1029 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 1030 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 1032 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 1061 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 1067 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1263 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which kind of moves\n"
	.string "you want to teach.$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1264 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_Moves_Text_2:
# 1264 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1277 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1282 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1290 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1294 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1297 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1316 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1321 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1323 "data/scripts/battle_labyrinth.pory"
	.string "Venoshock$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1324 "data/scripts/battle_labyrinth.pory"
	.string "Electroweb$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1325 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1326 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1327 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1328 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1329 "data/scripts/battle_labyrinth.pory"
	.string "Synthesis$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1330 "data/scripts/battle_labyrinth.pory"
	.string "Pain Split$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1331 "data/scripts/battle_labyrinth.pory"
	.string "Defog$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1332 "data/scripts/battle_labyrinth.pory"
	.string "Trick$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1471 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1475 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1496 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1504 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1509 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1510 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1514 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1520 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1526 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1532 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1538 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1544 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1550 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1556 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1562 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1568 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1574 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1580 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1586 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1592 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1598 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1604 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1610 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1616 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1622 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1628 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1634 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_45:
# 1643 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

EventScript_Shop_Joy_Text_0:
# 1657 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Center of\n"
	.string "Restoration, is my own!$"

EventScript_Shop_Joy_Text_1:
# 1660 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome back to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We've developed new technology that\n"
	.string "allows us to heal your entire party and\l"
	.string "all your PC Pokémon as well.$"

EventScript_Shop_Joy_Text_2:
# 1664 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party and PC for a\n"
	.string "flat ¥1000 fee$"

EventScript_Shop_Joy_Text_3:
# 1666 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party for a flat\n"
	.string "¥1000 fee.$"

EventScript_Shop_Joy_Text_4:
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_5:
# 1677 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_6:
# 1682 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_7:
# 1688 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: All of your Pokémon have been\n"
	.string "restored.$"

EventScript_Shop_Joy_Text_8:
# 1705 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_9:
# 1710 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_Shop_BreederF_Text_0:
# 1719 "data/scripts/battle_labyrinth.pory"
	.string "My brother and I are twins. We\n"
	.string "specialize in light training for your\l"
	.string "Pokémon.\p"
	.string "Would you be interested in changing a\n"
	.string "Pokémon's nature to Serious for the\l"
	.string "price of ¥100?$"

EventScript_Shop_BreederF_Text_1:
# 1726 "data/scripts/battle_labyrinth.pory"
	.string "You don't have enough money.$"

EventScript_Shop_BreederF_Text_2:
# 1729 "data/scripts/battle_labyrinth.pory"
	.string "Which Pokémon's nature would you like\n"
	.string "to have changed?$"

EventScript_Shop_BreederF_Text_3:
# 1738 "data/scripts/battle_labyrinth.pory"
	.string "I can't change the nature of an egg.$"

EventScript_Shop_BreederF_Text_4:
# 1743 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

EventScript_Shop_BreederF_Text_5:
# 1749 "data/scripts/battle_labyrinth.pory"
	.string "It's done.$"

EventScript_Shop_BreederM_Text_0:
# 1770 "data/scripts/battle_labyrinth.pory"
	.string "My sister and I are twins. We specialize\n"
	.string "in light training for your Pokémon.\p"
	.string "Would you be interested in swapping\n"
	.string "your Pokemon's normal ability to its\l"
	.string "other normal ability for the price of\l"
	.string "¥100?$"

EventScript_Shop_BreederM_Text_1:
# 1780 "data/scripts/battle_labyrinth.pory"
	.string "Which Pokémon's ability would you like\n"
	.string "to have changed?$"

EventScript_Shop_BreederM_Text_2:
# 1789 "data/scripts/battle_labyrinth.pory"
	.string "I can't change the ability of an egg.$"

EventScript_Shop_BreederM_Text_3:
# 1797 "data/scripts/battle_labyrinth.pory"
	.string "I can't change your {STR_VAR_1}'s\n"
	.string "ability {STR_VAR_3} because that's\l"
	.string "its hidden ability!$"

EventScript_Shop_BreederM_Text_4:
# 1804 "data/scripts/battle_labyrinth.pory"
	.string "I can't change your {STR_VAR_3}'s\n"
	.string "ability {STR_VAR_1} because it\l"
	.string "doesn't have another normal ability!$"

EventScript_Shop_BreederM_Text_5:
# 1808 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to change your\n"
	.string "{STR_VAR_3}'s ability from\l"
	.string "{STR_VAR_1} to {STR_VAR_2}?$"

EventScript_Shop_BreederM_Text_6:
# 1815 "data/scripts/battle_labyrinth.pory"
	.string "It's done! Enjoy your new ability!$"

EventScript_Shop_BreederM_Text_7:
# 1826 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to change your\n"
	.string "{STR_VAR_3}'s ability from\l"
	.string "{STR_VAR_2} to {STR_VAR_1}?$"

EventScript_MandatoryCheck_Text_0:
# 1873 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1903 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1904 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1907 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1919 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_SanctuaryToZone0_Text_0:
# 1950 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_WhenUReadyDialogue_Text_0:
# 1966 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 1 - Leafway Trail{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_1:
# 1968 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 2 - Duskwarren Woods{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_2:
# 1970 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 3 - Sunlit Pond{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_3:
# 1972 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 4 - Mystic Glade{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_4:
# 1974 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 5 - Timberstep Plateau{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_5:
# 1976 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 6 - Seabreeze Island{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_6:
# 1978 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 7 - Gemini Heights{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8 -\l"
	.string "Duskmire Hollow{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_7:
# 1980 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 9 - Lushbranch Village{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_8:
# 1982 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 10 - Scornwind Desert{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_9:
# 1984 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 11 - Duskwither Maze{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_10:
# 1986 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 12 - Twinstream Plains{COLOR DARK_GRAY}, speak to\l"
	.string "me.$"

EventScript_WhenUReadyDialogue_Text_11:
# 1988 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 7{COLOR DARK_GRAY} and {COLOR GREEN}Zone 8{COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_12:
# 1990 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 15 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_13:
# 1992 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 16 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_14:
# 1994 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 17 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_15:
# 1998 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 20 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_16:
# 2000 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 21 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_17:
# 2002 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 22 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_WhenUReadyDialogue_Text_18:
# 2004 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: When you are prepared to enter\n"
	.string "{COLOR GREEN}Zone 23 - {COLOR DARK_GRAY}, speak to me.$"

EventScript_Documentation_Text_0:
# 2017 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 2056 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 2059 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 2061 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 2064 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 2066 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 2069 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 2071 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 2074 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 2076 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 2079 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info$"

EventScript_Settings_Text_10:
# 2081 "data/scripts/battle_labyrinth.pory"
	.string "Full Info$"

EventScript_Settings_Text_11:
# 2084 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 2086 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 2088 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 2090 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 2092 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 2095 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 2097 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 2100 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 2102 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 2105 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 2107 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 2110 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 2112 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 2115 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 2117 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 2120 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 2122 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

EventScript_Settings_Text_28:
# 2125 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 2127 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 2130 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 2132 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 2135 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 2137 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 2145 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 2147 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 2150 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 2159 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 2161 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 2175 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 2177 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 2180 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 2184 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 2186 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 2196 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 2198 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 2201 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 2211 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 2213 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 2215 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 2218 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 2225 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 2227 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 2230 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 2240 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 2241 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 2270 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 2273 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 2275 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 2278 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2288 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2290 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2293 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2301 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting enables you to\n"
	.string "see more information that is not visible\l"
	.string "otherwise, such as full info about\l"
	.string "enemy Pokémon through the {COLOR RED}Surveil{COLOR DARK_GRAY}\l"
	.string "option in battle, or the {COLOR RED}DexNav{COLOR DARK_GRAY} to see\l"
	.string "potential encounterable Pokémon.$"

EventScript_Settings_Text_66:
# 2303 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_67:
# 2304 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_68:
# 2307 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_69:
# 2316 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_70:
# 2317 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_71:
# 2320 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_72:
# 2330 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_73:
# 2332 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_74:
# 2335 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_75:
# 2340 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_76:
# 2343 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_77:
# 2351 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_78:
# 2353 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_79:
# 2355 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_80:
# 2358 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_81:
# 2366 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_82:
# 2367 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_83:
# 2370 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_84:
# 2376 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_85:
# 2378 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_86:
# 2380 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_87:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_88:
# 2391 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_89:
# 2392 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_90:
# 2395 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_91:
# 2401 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_92:
# 2403 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_93:
# 2405 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_94:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_95:
# 2416 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_96:
# 2417 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_97:
# 2420 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_98:
# 2426 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_99:
# 2428 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_100:
# 2430 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_101:
# 2433 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_102:
# 2441 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_103:
# 2442 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_104:
# 2445 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_105:
# 2451 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_106:
# 2453 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_107:
# 2455 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_108:
# 2458 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_109:
# 2466 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_110:
# 2467 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_111:
# 2470 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_112:
# 2476 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_113:
# 2478 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_114:
# 2480 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_115:
# 2483 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_116:
# 2491 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_117:
# 2493 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_118:
# 2496 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_119:
# 2505 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_120:
# 2507 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_121:
# 2509 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_122:
# 2512 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_123:
# 2520 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_124:
# 2521 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_125:
# 2524 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_126:
# 2530 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_127:
# 2532 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_128:
# 2534 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_129:
# 2537 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_130:
# 2545 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_131:
# 2546 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_132:
# 2549 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_133:
# 2555 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_134:
# 2557 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_135:
# 2559 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_136:
# 2562 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_137:
# 2570 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_138:
# 2571 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_139:
# 2574 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_140:
# 2580 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_141:
# 2582 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_142:
# 2584 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_143:
# 2587 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_144:
# 2595 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_145:
# 2596 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_146:
# 2599 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2619 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2620 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2620 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2620 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2628 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2631 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2634 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2637 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2640 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2643 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2645 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2659 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2670 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2673 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2676 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2679 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2682 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2685 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2701 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2712 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2715 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2718 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2721 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2724 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2727 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2743 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_SignsQuestGirl_Text_0:
# 2760 "data/scripts/battle_labyrinth.pory"
	.string "Hiya! I'm improving on my reading skills!\p"
	.string "You should work on your reading skills\n"
	.string "too!\p"
	.string "If you read all the signs in the Pokémon\n"
	.string "Battle Labyrinth, I'll give you a nice\l"
	.string "reward!$"

EventScript_SignsQuestGirl_Text_1:
# 2763 "data/scripts/battle_labyrinth.pory"
	.string "Signs have lots of useful info about\n"
	.string "unique mechanics to the Pokémon Battle\l"
	.string "Labyrinth!\p"
	.string "You can improve your reading skills\n"
	.string "while learning more about the\l"
	.string "challenges at hand!$"

EventScript_SavesQuestBoy_Text_0:
# 2773 "data/scripts/battle_labyrinth.pory"
	.string "Saving your progress is important while\n"
	.string "playing games.\p"
	.string "I learned that the hard way!\p"
	.string "Don't be like me!\p"
	.string "I'll give you something if you can save\n"
	.string "the game 50 times!$"

EventScript_SavesQuestBoy_Text_1:
# 2780 "data/scripts/battle_labyrinth.pory"
	.string "Wow!\p"
	.string "You really went and saved 50 times?\p"
	.string "That's crazy.\p"
	.string "Here's a little something for you as a\n"
	.string "reward!$"

EventScript_SavesQuestBoy_Text_2:
# 2782 "data/scripts/battle_labyrinth.pory"
	.string "I've heard this nifty little item is\n"
	.string "useful if you have a Rotom.\p"
	.string "Which I, unfortunately, do not.\p"
	.string "I hope you put it to better use!$"

EventScript_SavesQuestBoy_Text_3:
# 2786 "data/scripts/battle_labyrinth.pory"
	.string "Don't forget to save your game!$"

EventScript_PokedexQuestScientist_Text_0:
# 2796 "data/scripts/battle_labyrinth.pory"
	.string "Kids these days are always neglecting\n"
	.string "filling their Pokédex!\p"
	.string "If you can show me a Pokédex that's\n"
	.string "seen all the Pokémon in existence, I'll\l"
	.string "reward you!$"

EventScript_PokedexQuestScientist_Text_1:
# 2799 "data/scripts/battle_labyrinth.pory"
	.string "Seeing all the Pokémon is tough enough.\p"
	.string "Imagine capturing them all!$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 3066 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 3094 "data/scripts/battle_labyrinth.pory"
	.string "Proceed to the {COLOR GREEN}Sanctuary{COLOR DARK_GRAY}?$"

EventScript_ShakeTree_Text_0:
# 3115 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 3121 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 3157 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

EventScript_RecoverySign_Text_0:
# 3225 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_MedicineSign_Text_0:
# 3231 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 3237 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 3243 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 3249 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 3255 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 3261 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

Zone0A_EventScript_TPISign_Text_0:
# 3267 "data/scripts/battle_labyrinth.pory"
	.string "Teleport Institute\n"
	.string "Getting around, easy peasy.$"

Zone0A_EventScript_DayCareSign_Text_0:
# 3273 "data/scripts/battle_labyrinth.pory"
	.string "Pokémon Day Care\n"
	.string "9 Generations and counting!$"

Zone1A_EventScript_Sign_GoldenTree_Text_0:
# 3279 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Shaking a Golden Tree might drop\n"
	.string "berries, though occasionally you'll\l"
	.string "disturb the wild Pokémon living in the\l"
	.string "tree!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 3285 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_EventScript_Sign_RunningShoes_Text_0:
# 3296 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Press {L_BUTTON} to enable or disable Auto Run.$"

Zone2A_EventScript_Sign_Text_0:
# 3302 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You may find hidden items by checking\n"
	.string "certain tiles with {A_BUTTON}.\p"
	.string "However, you won't find any hidden\n"
	.string "items on Brutal or Independent.$"

Zone2A_EventScript_ExpShareSign_Text_0:
# 3308 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Exp. All only gives Pokémon who\n"
	.string "didn't participate in battle 25%\l"
	.string "experience.\p"
	.string "If you want to train up a particular\n"
	.string "Pokémon, you can give them the held\l"
	.string "item Exp. Share so they get full\l"
	.string "experience!$"

Zone2A_EventScript_CautionSign_Text_0:
# 3314 "data/scripts/battle_labyrinth.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 3326 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 3332 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone3A_EventScript_Surveil_Text_0:
# 3338 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In battle, you can use Surveil to see\n"
	.string "the opponent's team.\p"
	.string "If you want to see full team\n"
	.string "information, you can turn on the Full\l"
	.string "Info setting by speaking to Colress.$"

Zone4A_EventScript_Sign_Text_0:
# 3344 "data/scripts/battle_labyrinth.pory"
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4B_EventScript_Sign_Text_0:
# 3350 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can see detailed information about\n"
	.string "a Pokémon species in its Pokédex entry\l"
	.string "after capturing it, such as what moves\l"
	.string "it learns or how to evolve it.$"

Zone4C_EventScript_Sign_Text_0:
# 3356 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Starting from now, there is a 20%\n"
	.string "chance to encounter wild Pokémon in a\l"
	.string "Double Battle.$"

Zone4D_EventScript_Sign_Text_0:
# 3362 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Some areas require backtracking later\n"
	.string "on in order to access them.$"

Zone4E_EventScript_Sign_Text_0:
# 3368 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Pokémon you encounter in different\n"
	.string "areas of the same zone may have slight\l"
	.string "differences!$"

Zone6A_EventScript_Sign_Text_0:
# 3374 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can sort items in the Bag using {START_BUTTON}.$"

Zone7A_EventScript_Sign_Text_0:
# 3380 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can change the music you hear in\n"
	.string "battle by speaking to Colress!$"

Zone7A_EventScript_HealSign_Text_0:
# 3386 "data/scripts/battle_labyrinth.pory"
	.string "A stop for weary travelers.$"

Zone9A_EventScript_Sign_Text_0:
# 3392 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "While you are on the Pokémon stats\n"
	.string "screen, you can press {A_BUTTON} to switch\l"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_HerbalSign_Text_0:
# 3398 "data/scripts/battle_labyrinth.pory"
	.string "Herbal and Incense Shop$"

Debug_CheatStart_PBL_Text_0:
# 3476 "data/scripts/battle_labyrinth.pory"
	.string "Zone 0 grass?$"

Debug_CheatStart_PBL_Text_1:
# 3483 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 options$"

Debug_CheatStart_PBL_Text_2:
# 3484 "data/scripts/battle_labyrinth.pory"
	.string "Grass$"

Debug_CheatStart_PBL_Text_3:
# 3484 "data/scripts/battle_labyrinth.pory"
	.string "Tree$"

Debug_CheatStart_PBL_Text_4:
# 3501 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 gwf$"

Debug_CheatStart_PBL_Text_5:
# 3502 "data/scripts/battle_labyrinth.pory"
	.string "Fire$"

Debug_CheatStart_PBL_Text_6:
# 3502 "data/scripts/battle_labyrinth.pory"
	.string "Water$"

Debug_CheatStart_PBL_Text_7:
# 3563 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2 options$"

Debug_CheatStart_PBL_Text_8:
# 3564 "data/scripts/battle_labyrinth.pory"
	.string "Grass A$"

Debug_CheatStart_PBL_Text_9:
# 3564 "data/scripts/battle_labyrinth.pory"
	.string "Tunnel$"

Debug_CheatStart_PBL_Text_10:
# 3564 "data/scripts/battle_labyrinth.pory"
	.string "Grass B$"

Debug_CheatStart_PBL_Text_11:
# 3630 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3 options$"

Debug_CheatStart_PBL_Text_12:
# 3657 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4 options$"

Debug_CheatStart_PBL_Text_13:
# 3658 "data/scripts/battle_labyrinth.pory"
	.string "A$"

Debug_CheatStart_PBL_Text_14:
# 3658 "data/scripts/battle_labyrinth.pory"
	.string "B$"

Debug_CheatStart_PBL_Text_15:
# 3658 "data/scripts/battle_labyrinth.pory"
	.string "C$"

Debug_CheatStart_PBL_Text_16:
# 3658 "data/scripts/battle_labyrinth.pory"
	.string "D$"

Debug_CheatStart_PBL_Text_17:
# 3658 "data/scripts/battle_labyrinth.pory"
	.string "E$"

Debug_CheatStart_PBL_Text_18:
# 3724 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5 options$"

Debug_CheatStart_PBL_Text_19:
# 3725 "data/scripts/battle_labyrinth.pory"
	.string "Forest$"

Debug_CheatStart_PBL_Text_20:
# 3725 "data/scripts/battle_labyrinth.pory"
	.string "Grassland$"

Debug_CheatStart_PBL_Text_21:
# 3778 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6 options$"

Debug_CheatStart_PBL_Text_22:
# 3815 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 options$"

Debug_CheatStart_PBL_Text_23:
# 3832 "data/scripts/battle_labyrinth.pory"
	.string "Zone 8 options$"

Debug_CheatStart_PBL_Text_24:
# 3885 "data/scripts/battle_labyrinth.pory"
	.string "Zone 9 options$"

Debug_CheatStart_PBL_Text_25:
# 3929 "data/scripts/battle_labyrinth.pory"
	.string "Zone 10 options$"

Debug_CheatStart_PBL_Text_26:
# 3930 "data/scripts/battle_labyrinth.pory"
	.string "Sand$"

Debug_CheatStart_PBL_Text_27:
# 3930 "data/scripts/battle_labyrinth.pory"
	.string "Ruin$"

Debug_CheatStart_PBL_GiveMon_Text_0:
# 3985 "data/scripts/battle_labyrinth.pory"
	.string "Obtained {STR_VAR_1}!$"

gText_Lelouch_NotEnoughColor::
# 1015 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 1019 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1217 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1221 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1225 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1229 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1233 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1237 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1241 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1245 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1249 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1253 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

Shop_Breeders_Exit::
# 1852 "data/scripts/battle_labyrinth.pory"
	.string "We'll be here if you need us.$"

gText_Colress_BrutalExplained::
# 2021 "data/scripts/battle_labyrinth.pory"
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
# 2027 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 2033 "data/scripts/battle_labyrinth.pory"
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
# 2040 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 2046 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 2050 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2816 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 3056 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 3060 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
