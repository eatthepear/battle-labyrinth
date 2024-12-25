Zone5A_MapScripts::
# 2 "data/maps/Zone5A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_2, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_17
# 26 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 24 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5A_EventScript_ItemQuickBall::
# 32 "data/maps/Zone5A/scripts.pory"
	lock
# 33 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
# 38 "data/maps/Zone5A/scripts.pory"
	waitse
# 39 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 40 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 41 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 42 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 43 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 44 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
# 34 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 35 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Breeder::
# 49 "data/maps/Zone5A/scripts.pory"
	lock
# 50 "data/maps/Zone5A/scripts.pory"
	faceplayer
# 51 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ZONE5A_RECEIVED_PINK_SCARF, Zone5A_EventScript_Breeder_3
Zone5A_EventScript_Breeder_1:
# 56 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_1, MSGBOX_YESNO
# 57 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_7
Zone5A_EventScript_Breeder_6:
# 84 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Breeder_2:
# 52 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_0
# 53 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Breeder_3:
# 51 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH, Zone5A_EventScript_Breeder_2
	goto Zone5A_EventScript_Breeder_1

Zone5A_EventScript_Breeder_7:
# 58 "data/maps/Zone5A/scripts.pory"
	special ChoosePartyMon
# 59 "data/maps/Zone5A/scripts.pory"
	waitstate
# 60 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone5A_EventScript_Breeder_9
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_9:
# 61 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 62 "data/maps/Zone5A/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/Zone5A/scripts.pory"
	case SPECIES_SKITTY, Zone5A_EventScript_Breeder_12
# 71 "data/maps/Zone5A/scripts.pory"
	case SPECIES_SUNKERN, Zone5A_EventScript_Breeder_13
# 80 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_5
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_12:
# 64 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_ZONE5A_RECEIVED_PINK_SCARF, Zone5A_EventScript_Breeder_15
# 69 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_3
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_13:
# 72 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH, Zone5A_EventScript_Breeder_18
# 77 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_4
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_15:
# 65 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_2
# 66 "data/maps/Zone5A/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 67 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ZONE5A_RECEIVED_PINK_SCARF
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_18:
# 73 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_2
# 74 "data/maps/Zone5A/scripts.pory"
	giveitem ITEM_SURPRISE_MULCH
# 75 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH
	goto Zone5A_EventScript_Breeder_6


Zone5A_EventScript_ItemRandom1::
# 89 "data/maps/Zone5A/scripts.pory"
	lock
# 90 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_EventScript_ItemRandom1_2
# 95 "data/maps/Zone5A/scripts.pory"
	waitse
# 96 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 97 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 98 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_1
# 99 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 100 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 101 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 102 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemRandom1_2:
# 91 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 92 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_LaxMint::
# 107 "data/maps/Zone5A/scripts.pory"
	lock
# 108 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_EventScript_LaxMint_2
# 113 "data/maps/Zone5A/scripts.pory"
	waitse
# 114 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 115 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 116 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_LAX_MINT
# 117 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 118 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_LAX_MINT
# 119 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_LaxMint_2:
# 109 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 110 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 124 "data/maps/Zone5A/scripts.pory"
	lock
# 125 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 130 "data/maps/Zone5A/scripts.pory"
	waitse
# 131 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 133 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 134 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 135 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 136 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 126 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 127 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_ItemRandom2::
# 141 "data/maps/Zone5A/scripts.pory"
	lock
# 142 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_2, Zone5A_EventScript_ItemRandom2_2
# 147 "data/maps/Zone5A/scripts.pory"
	waitse
# 148 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 149 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 150 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_2
# 151 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 152 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 153 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 154 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemRandom2_2:
# 143 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 144 "data/maps/Zone5A/scripts.pory"
	release
	end


# 173 "data/maps/Zone5A/scripts.pory"

# 174 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 175 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 176 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 177 "data/maps/Zone5A/scripts.pory"
	release
# 178 "data/maps/Zone5A/scripts.pory"
	end
# 179 "data/maps/Zone5A/scripts.pory"

# 180 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 181 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 182 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 183 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 184 "data/maps/Zone5A/scripts.pory"

# 185 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 186 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 187 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 188 "data/maps/Zone5A/scripts.pory"

# 189 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 190 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 191 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 192 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 193 "data/maps/Zone5A/scripts.pory"

# 194 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 195 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 196 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Zone5A/scripts.pory"
	end
# 198 "data/maps/Zone5A/scripts.pory"

# 199 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 200 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 201 "data/maps/Zone5A/scripts.pory"

# 202 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 203 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 204 "data/maps/Zone5A/scripts.pory"

# 205 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 206 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 207 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 208 "data/maps/Zone5A/scripts.pory"

# 209 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 210 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 211 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Zone5A/scripts.pory"
	end
# 213 "data/maps/Zone5A/scripts.pory"

# 214 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 215 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 216 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 217 "data/maps/Zone5A/scripts.pory"

# 218 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 219 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 220 "data/maps/Zone5A/scripts.pory"

# 221 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 222 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 223 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 224 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 225 "data/maps/Zone5A/scripts.pory"

# 226 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 227 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 228 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Zone5A/scripts.pory"
	end
# 230 "data/maps/Zone5A/scripts.pory"

# 231 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 232 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 233 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 234 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 235 "data/maps/Zone5A/scripts.pory"

# 236 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 237 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 238 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 239 "data/maps/Zone5A/scripts.pory"

# 240 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 241 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 242 "data/maps/Zone5A/scripts.pory"
	.string "some good Bug Pokémon?$"

Zone5A_EventScript_Breeder_Text_0:
# 52 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone5A_EventScript_Breeder_Text_1:
# 56 "data/maps/Zone5A/scripts.pory"
	.string "I know some people think of them as\n"
	.string "weak Pokémon…\p"
	.string "But Skitty and Sunkern are my\n"
	.string "favorites!\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Skitty\l"
	.string "or a Sunkern.$"

Zone5A_EventScript_Breeder_Text_2:
# 65 "data/maps/Zone5A/scripts.pory"
	.string "Aww… It's so cute!\p"
	.string "Take this evolution item!$"

Zone5A_EventScript_Breeder_Text_3:
# 69 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the Skitty\n"
	.string "evolution items I have!$"

Zone5A_EventScript_Breeder_Text_4:
# 77 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the Sunkern\n"
	.string "evolution items I have!$"

Zone5A_EventScript_Breeder_Text_5:
# 80 "data/maps/Zone5A/scripts.pory"
	.string "That's not a Skitty nor a Sunkern!$"
