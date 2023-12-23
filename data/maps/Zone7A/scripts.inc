Zone7A_MapScripts::
# 2 "data/maps/Zone7A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_TWISTED_SPOON, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_POISON_BARB, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SILVER_POWDER, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SUPER_POTION, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22
# 31 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 33 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL_X2, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25
# 36 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22:
# 29 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25:
# 34 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone7A_EventScript_Beauty::
# 43 "data/maps/Zone7A/scripts.pory"
	lock
# 44 "data/maps/Zone7A/scripts.pory"
	faceplayer
# 45 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_3
Zone7A_EventScript_Beauty_1:
# 50 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_1, MSGBOX_YESNO
# 51 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone7A_EventScript_Beauty_7
Zone7A_EventScript_Beauty_6:
# 78 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_Beauty_2:
# 46 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_0
# 47 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_Beauty_3:
# 45 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_2
	goto Zone7A_EventScript_Beauty_1

Zone7A_EventScript_Beauty_7:
# 52 "data/maps/Zone7A/scripts.pory"
	special ChoosePartyMon
# 53 "data/maps/Zone7A/scripts.pory"
	waitstate
# 54 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, 255
	goto_if_ne Zone7A_EventScript_Beauty_9
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_9:
# 55 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 56 "data/maps/Zone7A/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/Zone7A/scripts.pory"
	case SPECIES_SWIRLIX, Zone7A_EventScript_Beauty_12
# 65 "data/maps/Zone7A/scripts.pory"
	case SPECIES_SPRITZEE, Zone7A_EventScript_Beauty_13
# 74 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_5
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_12:
# 58 "data/maps/Zone7A/scripts.pory"
	goto_if_unset FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_15
# 63 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_3
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_13:
# 66 "data/maps/Zone7A/scripts.pory"
	goto_if_unset FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_18
# 71 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_4
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_15:
# 59 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_2
# 60 "data/maps/Zone7A/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
# 61 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_18:
# 67 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_2
# 68 "data/maps/Zone7A/scripts.pory"
	giveitem ITEM_SACHET
# 69 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ZONE7A_RECEIVED_SACHET
	goto Zone7A_EventScript_Beauty_6


Zone7A_EventScript_ItemSharpBeak::
# 83 "data/maps/Zone7A/scripts.pory"
	lock
# 84 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_EventScript_ItemSharpBeak_2
# 89 "data/maps/Zone7A/scripts.pory"
	waitse
# 90 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 91 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 92 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SHARP_BEAK
# 93 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 94 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SHARP_BEAK, 1
# 95 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSharpBeak_2:
# 85 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 86 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemTwistedSpoon::
# 100 "data/maps/Zone7A/scripts.pory"
	lock
# 101 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_TWISTED_SPOON, Zone7A_EventScript_ItemTwistedSpoon_2
# 106 "data/maps/Zone7A/scripts.pory"
	waitse
# 107 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 108 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 109 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_TWISTED_SPOON
# 110 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 111 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_TWISTED_SPOON, 1
# 112 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemTwistedSpoon_2:
# 102 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 103 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemPoisonBarb::
# 117 "data/maps/Zone7A/scripts.pory"
	lock
# 118 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_POISON_BARB, Zone7A_EventScript_ItemPoisonBarb_2
# 123 "data/maps/Zone7A/scripts.pory"
	waitse
# 124 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 125 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 126 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_POISON_BARB
# 127 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 128 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_POISON_BARB, 1
# 129 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemPoisonBarb_2:
# 119 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 120 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemSilverPowder::
# 134 "data/maps/Zone7A/scripts.pory"
	lock
# 135 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SILVER_POWDER, Zone7A_EventScript_ItemSilverPowder_2
# 140 "data/maps/Zone7A/scripts.pory"
	waitse
# 141 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 142 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 143 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SILVER_POWDER
# 144 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 145 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SILVER_POWDER, 1
# 146 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSilverPowder_2:
# 136 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 137 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemBlackBelt::
# 151 "data/maps/Zone7A/scripts.pory"
	lock
# 152 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_EventScript_ItemBlackBelt_2
# 157 "data/maps/Zone7A/scripts.pory"
	waitse
# 158 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 159 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 160 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_BLACK_BELT
# 161 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 162 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_BLACK_BELT, 1
# 163 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemBlackBelt_2:
# 153 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 154 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemSuperPotion::
# 168 "data/maps/Zone7A/scripts.pory"
	lock
# 169 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SUPER_POTION, Zone7A_EventScript_ItemSuperPotion_2
# 174 "data/maps/Zone7A/scripts.pory"
	waitse
# 175 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 176 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 177 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SUPER_POTION
# 178 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 179 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 180 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSuperPotion_2:
# 170 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 171 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemGreatBall::
# 185 "data/maps/Zone7A/scripts.pory"
	lock
# 186 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL_X2, Zone7A_EventScript_ItemGreatBall_2
# 191 "data/maps/Zone7A/scripts.pory"
	waitse
# 192 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 193 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 194 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_GREAT_BALL_X2
# 195 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 196 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_GREAT_BALL, 2
# 197 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemGreatBall_2:
# 187 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 188 "data/maps/Zone7A/scripts.pory"
	release
	end


# 201 "data/maps/Zone7A/scripts.pory"

# 202 "data/maps/Zone7A/scripts.pory"

# 203 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Millie::
# 204 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
# 205 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Zone7A/scripts.pory"
	end
# 207 "data/maps/Zone7A/scripts.pory"

# 208 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieIntro:
# 209 "data/maps/Zone7A/scripts.pory"
	.string "At the base of this mountain,\n"
# 210 "data/maps/Zone7A/scripts.pory"
	.string "is a perfect spot for battle!$"
# 211 "data/maps/Zone7A/scripts.pory"

# 212 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieDefeat:
# 213 "data/maps/Zone7A/scripts.pory"
	.string "This spot is now tainted, by\n"
# 214 "data/maps/Zone7A/scripts.pory"
	.string "my defeat!$"
# 215 "data/maps/Zone7A/scripts.pory"

# 216 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MilliePostBattle:
# 217 "data/maps/Zone7A/scripts.pory"
	.string "It's a good spot for camping, too!$"
# 218 "data/maps/Zone7A/scripts.pory"

# 219 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Jamal::
# 220 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JAMAL, Zone7A_Text_JamalIntro, Zone7A_Text_JamalDefeat
# 221 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Zone7A/scripts.pory"
	end
# 223 "data/maps/Zone7A/scripts.pory"

# 224 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalIntro:
# 225 "data/maps/Zone7A/scripts.pory"
	.string "Valleys like these are simply,\n"
# 226 "data/maps/Zone7A/scripts.pory"
	.string "succintly, superb!$"
# 227 "data/maps/Zone7A/scripts.pory"

# 228 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalDefeat:
# 229 "data/maps/Zone7A/scripts.pory"
	.string "I don't like this valley anymore!$"
# 230 "data/maps/Zone7A/scripts.pory"

# 231 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalPostBattle:
# 232 "data/maps/Zone7A/scripts.pory"
	.string "How can I like a place that I've\n"
# 233 "data/maps/Zone7A/scripts.pory"
	.string "lost at?$"
# 234 "data/maps/Zone7A/scripts.pory"

# 235 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Paige::
# 236 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PAIGE, Zone7A_Text_PaigeIntro, Zone7A_Text_PaigeDefeat
# 237 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Zone7A/scripts.pory"
	end
# 239 "data/maps/Zone7A/scripts.pory"

# 240 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeIntro:
# 241 "data/maps/Zone7A/scripts.pory"
	.string "My son ran up the steps so fast!$"
# 242 "data/maps/Zone7A/scripts.pory"

# 243 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeDefeat:
# 244 "data/maps/Zone7A/scripts.pory"
	.string "I just can't keep up!$"
# 245 "data/maps/Zone7A/scripts.pory"

# 246 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigePostBattle:
# 247 "data/maps/Zone7A/scripts.pory"
	.string "Maybe I'll rest in the rest house…$"
# 248 "data/maps/Zone7A/scripts.pory"

# 249 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Seth::
# 250 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SETH, Zone7A_Text_SethIntro, Zone7A_Text_SethDefeat
# 251 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_SethPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Zone7A/scripts.pory"
	end
# 253 "data/maps/Zone7A/scripts.pory"

# 254 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethIntro:
# 255 "data/maps/Zone7A/scripts.pory"
	.string "Momma! You're too slow!$"
# 256 "data/maps/Zone7A/scripts.pory"

# 257 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethDefeat:
# 258 "data/maps/Zone7A/scripts.pory"
	.string "I wasn't fast enough!$"
# 259 "data/maps/Zone7A/scripts.pory"

# 260 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethPostBattle:
# 261 "data/maps/Zone7A/scripts.pory"
	.string "I'm all out of energy…\n"
# 262 "data/maps/Zone7A/scripts.pory"
	.string "Snack time!$"
# 263 "data/maps/Zone7A/scripts.pory"

# 264 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Connie::
# 265 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONNIE, Zone7A_Text_ConnieIntro, Zone7A_Text_ConnieDefeat
# 266 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/Zone7A/scripts.pory"
	end
# 268 "data/maps/Zone7A/scripts.pory"

# 269 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieIntro:
# 270 "data/maps/Zone7A/scripts.pory"
	.string "Another traveler!\n"
# 271 "data/maps/Zone7A/scripts.pory"
	.string "Tropius, it's time for battle!$"
# 272 "data/maps/Zone7A/scripts.pory"

# 273 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieDefeat:
# 274 "data/maps/Zone7A/scripts.pory"
	.string "It's hard winning with only one\n"
# 275 "data/maps/Zone7A/scripts.pory"
	.string "Pokémon!$"
# 276 "data/maps/Zone7A/scripts.pory"

# 277 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConniePostBattle:
# 278 "data/maps/Zone7A/scripts.pory"
	.string "Backpacking is all about packing\n"
# 279 "data/maps/Zone7A/scripts.pory"
	.string "light!$"
# 280 "data/maps/Zone7A/scripts.pory"

# 281 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_HealSign::
# 282 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_HealSign, MSGBOX_SIGN
# 283 "data/maps/Zone7A/scripts.pory"
	end
# 284 "data/maps/Zone7A/scripts.pory"

# 285 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_HealSign:
# 286 "data/maps/Zone7A/scripts.pory"
	.string "A stop for weary travelers.$"
# 287 "data/maps/Zone7A/scripts.pory"

# 288 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Sign::
# 289 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_Sign, MSGBOX_SIGN
# 290 "data/maps/Zone7A/scripts.pory"
	end
# 291 "data/maps/Zone7A/scripts.pory"

# 292 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_Sign:
# 293 "data/maps/Zone7A/scripts.pory"
	.string "Trainer Tips!\p"
# 294 "data/maps/Zone7A/scripts.pory"
	.string "Due to rising costs, the Pokémon\n"
# 295 "data/maps/Zone7A/scripts.pory"
	.string "Storage System does not heal your\l"
# 296 "data/maps/Zone7A/scripts.pory"
	.string "Pokémon.$"

Zone7A_EventScript_Beauty_Text_0:
# 46 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone7A_EventScript_Beauty_Text_1:
# 50 "data/maps/Zone7A/scripts.pory"
	.string "Beautiful, Fairy-type Pokémon…\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Swirlix\l"
	.string "or a Spritzee.$"

Zone7A_EventScript_Beauty_Text_2:
# 59 "data/maps/Zone7A/scripts.pory"
	.string "That Pokémon is absolutely stunning…\n"
	.string "Take this, as promised.$"

Zone7A_EventScript_Beauty_Text_3:
# 63 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the Swirlix\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_4:
# 71 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the Spritzee\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_5:
# 74 "data/maps/Zone7A/scripts.pory"
	.string "That's not a Swirlix nor a Spritzee!$"
