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
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
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

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5A_EventScript_ItemQuickBall::
# 27 "data/maps/Zone5A/scripts.pory"
	lock
# 28 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
# 33 "data/maps/Zone5A/scripts.pory"
	waitse
# 34 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 36 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 37 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 38 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 39 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
# 29 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 30 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Breeder::
# 44 "data/maps/Zone5A/scripts.pory"
	lock
# 45 "data/maps/Zone5A/scripts.pory"
	faceplayer
# 46 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ZONE5A_RECEIVED_PINK_SCARF, Zone5A_EventScript_Breeder_3
Zone5A_EventScript_Breeder_1:
# 51 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_1, MSGBOX_YESNO
# 52 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_Breeder_7
Zone5A_EventScript_Breeder_6:
# 79 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Breeder_2:
# 47 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_0
# 48 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Breeder_3:
# 46 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH, Zone5A_EventScript_Breeder_2
	goto Zone5A_EventScript_Breeder_1

Zone5A_EventScript_Breeder_7:
# 53 "data/maps/Zone5A/scripts.pory"
	special ChoosePartyMon
# 54 "data/maps/Zone5A/scripts.pory"
	waitstate
# 55 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone5A_EventScript_Breeder_9
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_9:
# 56 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 57 "data/maps/Zone5A/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/Zone5A/scripts.pory"
	case SPECIES_SKITTY, Zone5A_EventScript_Breeder_12
# 66 "data/maps/Zone5A/scripts.pory"
	case SPECIES_SUNKERN, Zone5A_EventScript_Breeder_13
# 75 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_5
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_12:
# 59 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_ZONE5A_RECEIVED_PINK_SCARF, Zone5A_EventScript_Breeder_15
# 64 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_3
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_13:
# 67 "data/maps/Zone5A/scripts.pory"
	goto_if_unset FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH, Zone5A_EventScript_Breeder_18
# 72 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_4
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_15:
# 60 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_2
# 61 "data/maps/Zone5A/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 62 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ZONE5A_RECEIVED_PINK_SCARF
	goto Zone5A_EventScript_Breeder_6

Zone5A_EventScript_Breeder_18:
# 68 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_Breeder_Text_2
# 69 "data/maps/Zone5A/scripts.pory"
	giveitem ITEM_SURPRISE_MULCH
# 70 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ZONE5A_RECEIVED_SURPRISE_MULCH
	goto Zone5A_EventScript_Breeder_6


Zone5A_EventScript_ItemRandom1::
# 84 "data/maps/Zone5A/scripts.pory"
	lock
# 85 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_EventScript_ItemRandom1_2
# 90 "data/maps/Zone5A/scripts.pory"
	waitse
# 91 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 92 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 93 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_1
# 94 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 95 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 96 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 97 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemRandom1_2:
# 86 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 87 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_LaxMint::
# 102 "data/maps/Zone5A/scripts.pory"
	lock
# 103 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_EventScript_LaxMint_2
# 108 "data/maps/Zone5A/scripts.pory"
	waitse
# 109 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 111 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_LAX_MINT
# 112 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 113 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_LAX_MINT
# 114 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_LaxMint_2:
# 104 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 105 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 119 "data/maps/Zone5A/scripts.pory"
	lock
# 120 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 125 "data/maps/Zone5A/scripts.pory"
	waitse
# 126 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 127 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 128 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 129 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 130 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 131 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 121 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 122 "data/maps/Zone5A/scripts.pory"
	release
	end


# 150 "data/maps/Zone5A/scripts.pory"

# 151 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 152 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 153 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 154 "data/maps/Zone5A/scripts.pory"
	release
# 155 "data/maps/Zone5A/scripts.pory"
	end
# 156 "data/maps/Zone5A/scripts.pory"

# 157 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 158 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 159 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 160 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 161 "data/maps/Zone5A/scripts.pory"

# 162 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 163 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 164 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 165 "data/maps/Zone5A/scripts.pory"

# 166 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 167 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 168 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 169 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 170 "data/maps/Zone5A/scripts.pory"

# 171 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 172 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 173 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Zone5A/scripts.pory"
	end
# 175 "data/maps/Zone5A/scripts.pory"

# 176 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 177 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 178 "data/maps/Zone5A/scripts.pory"

# 179 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 180 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 181 "data/maps/Zone5A/scripts.pory"

# 182 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 183 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 184 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 185 "data/maps/Zone5A/scripts.pory"

# 186 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 187 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 188 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Zone5A/scripts.pory"
	end
# 190 "data/maps/Zone5A/scripts.pory"

# 191 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 192 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 193 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 194 "data/maps/Zone5A/scripts.pory"

# 195 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 196 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 197 "data/maps/Zone5A/scripts.pory"

# 198 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 199 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 200 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 201 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 202 "data/maps/Zone5A/scripts.pory"

# 203 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 204 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 205 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/Zone5A/scripts.pory"
	end
# 207 "data/maps/Zone5A/scripts.pory"

# 208 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 209 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 210 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 211 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 212 "data/maps/Zone5A/scripts.pory"

# 213 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 214 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 215 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 216 "data/maps/Zone5A/scripts.pory"

# 217 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 218 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 219 "data/maps/Zone5A/scripts.pory"
	.string "some good Bug Pokémon?$"

Zone5A_EventScript_Breeder_Text_0:
# 47 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone5A_EventScript_Breeder_Text_1:
# 51 "data/maps/Zone5A/scripts.pory"
	.string "I know some people think of them as\n"
	.string "weak Pokémon…\p"
	.string "But Skitty and Sunkern are my\n"
	.string "favorites!\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Skitty\l"
	.string "or a Sunkern.$"

Zone5A_EventScript_Breeder_Text_2:
# 60 "data/maps/Zone5A/scripts.pory"
	.string "Aww… It's so cute!\p"
	.string "Take this evolution item!$"

Zone5A_EventScript_Breeder_Text_3:
# 64 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the Skitty\n"
	.string "evolution items I have!$"

Zone5A_EventScript_Breeder_Text_4:
# 72 "data/maps/Zone5A/scripts.pory"
	.string "I already gave you all the Sunkern\n"
	.string "evolution items I have!$"

Zone5A_EventScript_Breeder_Text_5:
# 75 "data/maps/Zone5A/scripts.pory"
	.string "That's not a Skitty nor a Sunkern!$"
