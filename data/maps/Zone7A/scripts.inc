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
	goto_if_set FLAG_ITEM_ZONE7A_POTION_X2, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GEMS, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SERIOUS_MINT, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14
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
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25
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


Zone7A_EventScript_ItemPotion2::
# 100 "data/maps/Zone7A/scripts.pory"
	lock
# 101 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_POTION_X2, Zone7A_EventScript_ItemPotion2_2
# 106 "data/maps/Zone7A/scripts.pory"
	waitse
# 107 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 108 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 109 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_POTION_X2
# 110 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 111 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_POTION, 2
# 112 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemPotion2_2:
# 102 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 103 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemGems::
# 117 "data/maps/Zone7A/scripts.pory"
	lock
# 118 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GEMS, Zone7A_EventScript_ItemGems_2
# 123 "data/maps/Zone7A/scripts.pory"
	waitse
# 124 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 125 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 126 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_GEMS
# 127 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 128 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_ROCK_GEM
# 129 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_FIGHTING_GEM
# 130 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_PSYCHIC_GEM
# 131 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemGems_2:
# 119 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 120 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemSeriousMint::
# 136 "data/maps/Zone7A/scripts.pory"
	lock
# 137 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SERIOUS_MINT, Zone7A_EventScript_ItemSeriousMint_2
# 142 "data/maps/Zone7A/scripts.pory"
	waitse
# 143 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 144 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 145 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SERIOUS_MINT
# 146 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 147 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SERIOUS_MINT, 1
# 148 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSeriousMint_2:
# 138 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 139 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemBlackBelt::
# 153 "data/maps/Zone7A/scripts.pory"
	lock
# 154 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_EventScript_ItemBlackBelt_2
# 159 "data/maps/Zone7A/scripts.pory"
	waitse
# 160 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 161 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 162 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_BLACK_BELT
# 163 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 164 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_BLACK_BELT, 1
# 165 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemBlackBelt_2:
# 155 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 156 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemSuperPotion::
# 170 "data/maps/Zone7A/scripts.pory"
	lock
# 171 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SUPER_POTION, Zone7A_EventScript_ItemSuperPotion_2
# 176 "data/maps/Zone7A/scripts.pory"
	waitse
# 177 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 178 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 179 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SUPER_POTION
# 180 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 181 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 182 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSuperPotion_2:
# 172 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 173 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemGreatBall::
# 187 "data/maps/Zone7A/scripts.pory"
	lock
# 188 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GREAT_BALL, Zone7A_EventScript_ItemGreatBall_2
# 193 "data/maps/Zone7A/scripts.pory"
	waitse
# 194 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 195 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 196 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_GREAT_BALL
# 197 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 198 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_GREAT_BALL, 1
# 199 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemGreatBall_2:
# 189 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 190 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_Sign::
# 204 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


# 208 "data/maps/Zone7A/scripts.pory"

# 209 "data/maps/Zone7A/scripts.pory"

# 210 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Millie::
# 211 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
# 212 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Zone7A/scripts.pory"
	end
# 214 "data/maps/Zone7A/scripts.pory"

# 215 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieIntro:
# 216 "data/maps/Zone7A/scripts.pory"
	.string "At the base of this mountain,\n"
# 217 "data/maps/Zone7A/scripts.pory"
	.string "is a perfect spot for battle!$"
# 218 "data/maps/Zone7A/scripts.pory"

# 219 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieDefeat:
# 220 "data/maps/Zone7A/scripts.pory"
	.string "This spot is now tainted, by\n"
# 221 "data/maps/Zone7A/scripts.pory"
	.string "my defeat!$"
# 222 "data/maps/Zone7A/scripts.pory"

# 223 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MilliePostBattle:
# 224 "data/maps/Zone7A/scripts.pory"
	.string "It's a good spot for resting too!$"
# 225 "data/maps/Zone7A/scripts.pory"

# 226 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Jamal::
# 227 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JAMAL, Zone7A_Text_JamalIntro, Zone7A_Text_JamalDefeat
# 228 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Zone7A/scripts.pory"
	end
# 230 "data/maps/Zone7A/scripts.pory"

# 231 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalIntro:
# 232 "data/maps/Zone7A/scripts.pory"
	.string "Valleys like these are simply,\n"
# 233 "data/maps/Zone7A/scripts.pory"
	.string "succintly, superb!$"
# 234 "data/maps/Zone7A/scripts.pory"

# 235 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalDefeat:
# 236 "data/maps/Zone7A/scripts.pory"
	.string "I don't like this valley anymore!$"
# 237 "data/maps/Zone7A/scripts.pory"

# 238 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalPostBattle:
# 239 "data/maps/Zone7A/scripts.pory"
	.string "How can I like a place that I've\n"
# 240 "data/maps/Zone7A/scripts.pory"
	.string "lost at?$"
# 241 "data/maps/Zone7A/scripts.pory"

# 242 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Paige::
# 243 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PAIGE, Zone7A_Text_PaigeIntro, Zone7A_Text_PaigeDefeat
# 244 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Zone7A/scripts.pory"
	end
# 246 "data/maps/Zone7A/scripts.pory"

# 247 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeIntro:
# 248 "data/maps/Zone7A/scripts.pory"
	.string "My son ran up the steps so fast!$"
# 249 "data/maps/Zone7A/scripts.pory"

# 250 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeDefeat:
# 251 "data/maps/Zone7A/scripts.pory"
	.string "I just can't keep up!$"
# 252 "data/maps/Zone7A/scripts.pory"

# 253 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigePostBattle:
# 254 "data/maps/Zone7A/scripts.pory"
	.string "Maybe I'll rest in the rest house…$"
# 255 "data/maps/Zone7A/scripts.pory"

# 256 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Seth::
# 257 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SETH, Zone7A_Text_SethIntro, Zone7A_Text_SethDefeat
# 258 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_SethPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Zone7A/scripts.pory"
	end
# 260 "data/maps/Zone7A/scripts.pory"

# 261 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethIntro:
# 262 "data/maps/Zone7A/scripts.pory"
	.string "Momma! You're too slow!$"
# 263 "data/maps/Zone7A/scripts.pory"

# 264 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethDefeat:
# 265 "data/maps/Zone7A/scripts.pory"
	.string "I wasn't fast enough!$"
# 266 "data/maps/Zone7A/scripts.pory"

# 267 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethPostBattle:
# 268 "data/maps/Zone7A/scripts.pory"
	.string "I'm all out of energy…\n"
# 269 "data/maps/Zone7A/scripts.pory"
	.string "Snack time!$"
# 270 "data/maps/Zone7A/scripts.pory"

# 271 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Connie::
# 272 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONNIE, Zone7A_Text_ConnieIntro, Zone7A_Text_ConnieDefeat
# 273 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/Zone7A/scripts.pory"
	end
# 275 "data/maps/Zone7A/scripts.pory"

# 276 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieIntro:
# 277 "data/maps/Zone7A/scripts.pory"
	.string "You've been double teamed!$"
# 278 "data/maps/Zone7A/scripts.pory"

# 279 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieDefeat:
# 280 "data/maps/Zone7A/scripts.pory"
	.string "Shoot! My bad!$"
# 281 "data/maps/Zone7A/scripts.pory"

# 282 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConniePostBattle:
# 283 "data/maps/Zone7A/scripts.pory"
	.string "We're working on our strategy!$"
# 284 "data/maps/Zone7A/scripts.pory"

# 285 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Peter::
# 286 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PETER, Zone7A_Text_PeterIntro, Zone7A_Text_PeterDefeat
# 287 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Zone7A/scripts.pory"
	end
# 289 "data/maps/Zone7A/scripts.pory"

# 290 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterIntro:
# 291 "data/maps/Zone7A/scripts.pory"
	.string "Together we're unstoppable!$"
# 292 "data/maps/Zone7A/scripts.pory"

# 293 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterDefeat:
# 294 "data/maps/Zone7A/scripts.pory"
	.string "Darn! My mistake!$"
# 295 "data/maps/Zone7A/scripts.pory"

# 296 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterPostBattle:
# 297 "data/maps/Zone7A/scripts.pory"
	.string "We're trying our best!$"
# 298 "data/maps/Zone7A/scripts.pory"

# 299 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Whitaker::
# 300 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_WHITAKER, Zone7A_Text_WhitakerIntro, Zone7A_Text_WhitakerDefeat
# 301 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_WhitakerPostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Zone7A/scripts.pory"
	end
# 303 "data/maps/Zone7A/scripts.pory"

# 304 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerIntro:
# 305 "data/maps/Zone7A/scripts.pory"
	.string "Can you feel the breeze?\n"
# 306 "data/maps/Zone7A/scripts.pory"
	.string "My birds have never been stronger!$"
# 307 "data/maps/Zone7A/scripts.pory"

# 308 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerDefeat:
# 309 "data/maps/Zone7A/scripts.pory"
	.string "Um… Rematch?$"
# 310 "data/maps/Zone7A/scripts.pory"

# 311 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerPostBattle:
# 312 "data/maps/Zone7A/scripts.pory"
	.string "My birds need some time to sleep\n"
# 313 "data/maps/Zone7A/scripts.pory"
	.string "in their nests!$"
# 314 "data/maps/Zone7A/scripts.pory"

# 315 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_HealSign::
# 316 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_HealSign, MSGBOX_SIGN
# 317 "data/maps/Zone7A/scripts.pory"
	end
# 318 "data/maps/Zone7A/scripts.pory"

# 319 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_HealSign:
# 320 "data/maps/Zone7A/scripts.pory"
	.string "A stop for weary travelers.$"

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

Zone7A_EventScript_Sign_Text_0:
# 204 "data/maps/Zone7A/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can change the music you hear in\n"
	.string "battle by speaking to Colress!$"
