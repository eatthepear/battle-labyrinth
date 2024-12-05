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
	goto_if_set FLAG_ITEM_ZONE5A_TM04, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
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
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
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


Zone5A_EventScript_ItemTM04::
# 84 "data/maps/Zone5A/scripts.pory"
	lock
# 85 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_TM04, Zone5A_EventScript_ItemTM04_2
# 90 "data/maps/Zone5A/scripts.pory"
	waitse
# 91 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 92 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 93 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_TM04
# 94 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 95 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_TM04
# 96 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemTM04_2:
# 86 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 87 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_LaxMint::
# 101 "data/maps/Zone5A/scripts.pory"
	lock
# 102 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_EventScript_LaxMint_2
# 107 "data/maps/Zone5A/scripts.pory"
	waitse
# 108 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 109 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 110 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_LAX_MINT
# 111 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 112 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_LAX_MINT
# 113 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_LaxMint_2:
# 103 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 104 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 118 "data/maps/Zone5A/scripts.pory"
	lock
# 119 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 124 "data/maps/Zone5A/scripts.pory"
	waitse
# 125 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 126 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 127 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 128 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 129 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 130 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 120 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 121 "data/maps/Zone5A/scripts.pory"
	release
	end


# 149 "data/maps/Zone5A/scripts.pory"

# 150 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 151 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 152 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 153 "data/maps/Zone5A/scripts.pory"
	release
# 154 "data/maps/Zone5A/scripts.pory"
	end
# 155 "data/maps/Zone5A/scripts.pory"

# 156 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 157 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 158 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 159 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 160 "data/maps/Zone5A/scripts.pory"

# 161 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 162 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 163 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 164 "data/maps/Zone5A/scripts.pory"

# 165 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 166 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 167 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 168 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 169 "data/maps/Zone5A/scripts.pory"

# 170 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 171 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 172 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Zone5A/scripts.pory"
	end
# 174 "data/maps/Zone5A/scripts.pory"

# 175 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 176 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 177 "data/maps/Zone5A/scripts.pory"

# 178 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 179 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 180 "data/maps/Zone5A/scripts.pory"

# 181 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 182 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 183 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 184 "data/maps/Zone5A/scripts.pory"

# 185 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 186 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 187 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Zone5A/scripts.pory"
	end
# 189 "data/maps/Zone5A/scripts.pory"

# 190 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 191 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 192 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 193 "data/maps/Zone5A/scripts.pory"

# 194 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 195 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 196 "data/maps/Zone5A/scripts.pory"

# 197 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 198 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 199 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 200 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 201 "data/maps/Zone5A/scripts.pory"

# 202 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 203 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 204 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Zone5A/scripts.pory"
	end
# 206 "data/maps/Zone5A/scripts.pory"

# 207 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 208 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 209 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 210 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 211 "data/maps/Zone5A/scripts.pory"

# 212 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 213 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 214 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 215 "data/maps/Zone5A/scripts.pory"

# 216 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 217 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 218 "data/maps/Zone5A/scripts.pory"
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
