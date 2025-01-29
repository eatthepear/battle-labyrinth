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
	goto_if_set FLAG_ITEM_ZONE5A_METRONOME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10
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


Zone5A_EventScript_BreederF::
# 32 "data/maps/Zone5A/scripts.pory"
	lock
# 33 "data/maps/Zone5A/scripts.pory"
	faceplayer
# 34 "data/maps/Zone5A/scripts.pory"
	showmoneybox 0, 0, 0
# 35 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_0, MSGBOX_YESNO
# 36 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone5A_EventScript_BreederF_2
# 40 "data/maps/Zone5A/scripts.pory"
	checkmoney 100, 0
# 41 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone5A_EventScript_BreederF_5
# 45 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/Zone5A/scripts.pory"
	special ChoosePartyMon
# 47 "data/maps/Zone5A/scripts.pory"
	waitstate
# 48 "data/maps/Zone5A/scripts.pory"
	faceplayer
# 49 "data/maps/Zone5A/scripts.pory"
	showmoneybox 0, 0, 0
# 50 "data/maps/Zone5A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone5A_EventScript_BreederF_8
# 72 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 73 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_1
Zone5A_EventScript_BreederF_1:
# 77 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_BreederF_2:
# 37 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 38 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_1
	goto Zone5A_EventScript_BreederF_1

Zone5A_EventScript_BreederF_5:
# 42 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_2
# 43 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
	goto Zone5A_EventScript_BreederF_1

Zone5A_EventScript_BreederF_8:
# 51 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 52 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Zone5A_EventScript_BreederF_11
# 55 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 56 "data/maps/Zone5A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 57 "data/maps/Zone5A/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 58 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_5, MSGBOX_YESNO
# 59 "data/maps/Zone5A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone5A_EventScript_BreederF_14
# 67 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
# 68 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_1
	goto Zone5A_EventScript_BreederF_1

Zone5A_EventScript_BreederF_11:
# 53 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_4
	goto Zone5A_EventScript_BreederF_1

Zone5A_EventScript_BreederF_14:
# 60 "data/maps/Zone5A/scripts.pory"
	removemoney 100
# 61 "data/maps/Zone5A/scripts.pory"
	updatemoneybox
# 62 "data/maps/Zone5A/scripts.pory"
	setvar VAR_TEMP_2, 12
# 63 "data/maps/Zone5A/scripts.pory"
	special SetMonNature
# 64 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_EventScript_BreederF_Text_6
# 65 "data/maps/Zone5A/scripts.pory"
	hidemoneybox
	goto Zone5A_EventScript_BreederF_1


Zone5A_EventScript_QuickBall::
# 82 "data/maps/Zone5A/scripts.pory"
	lock
# 83 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_QuickBall_2
# 88 "data/maps/Zone5A/scripts.pory"
	waitse
# 89 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 90 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 91 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 92 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 93 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 94 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_QuickBall_2:
# 84 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 85 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Random1::
# 99 "data/maps/Zone5A/scripts.pory"
	lock
# 100 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_EventScript_Random1_2
# 105 "data/maps/Zone5A/scripts.pory"
	waitse
# 106 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 107 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 108 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_1
# 109 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 110 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 111 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 112 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Random1_2:
# 101 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 102 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Metronome::
# 117 "data/maps/Zone5A/scripts.pory"
	lock
# 118 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_METRONOME, Zone5A_EventScript_Metronome_2
# 123 "data/maps/Zone5A/scripts.pory"
	waitse
# 124 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 125 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 126 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_METRONOME
# 127 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 128 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_METRONOME
# 129 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Metronome_2:
# 119 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 120 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 134 "data/maps/Zone5A/scripts.pory"
	lock
# 135 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 140 "data/maps/Zone5A/scripts.pory"
	waitse
# 141 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 142 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 143 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 144 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 145 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 146 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 136 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 137 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Random2::
# 151 "data/maps/Zone5A/scripts.pory"
	lock
# 152 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_2, Zone5A_EventScript_Random2_2
# 157 "data/maps/Zone5A/scripts.pory"
	waitse
# 158 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 159 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 160 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_2
# 161 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 162 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 163 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 164 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Random2_2:
# 153 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 154 "data/maps/Zone5A/scripts.pory"
	release
	end


# 183 "data/maps/Zone5A/scripts.pory"

# 184 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 185 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 186 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 187 "data/maps/Zone5A/scripts.pory"
	release
# 188 "data/maps/Zone5A/scripts.pory"
	end
# 189 "data/maps/Zone5A/scripts.pory"

# 190 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 191 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 192 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 193 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 194 "data/maps/Zone5A/scripts.pory"

# 195 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 196 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 197 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 198 "data/maps/Zone5A/scripts.pory"

# 199 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 200 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 201 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 202 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 203 "data/maps/Zone5A/scripts.pory"

# 204 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 205 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 206 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Zone5A/scripts.pory"
	end
# 208 "data/maps/Zone5A/scripts.pory"

# 209 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 210 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 211 "data/maps/Zone5A/scripts.pory"

# 212 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 213 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 214 "data/maps/Zone5A/scripts.pory"

# 215 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 216 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 217 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 218 "data/maps/Zone5A/scripts.pory"

# 219 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 220 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 221 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Zone5A/scripts.pory"
	end
# 223 "data/maps/Zone5A/scripts.pory"

# 224 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 225 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 226 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 227 "data/maps/Zone5A/scripts.pory"

# 228 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 229 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 230 "data/maps/Zone5A/scripts.pory"

# 231 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 232 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 233 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 234 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 235 "data/maps/Zone5A/scripts.pory"

# 236 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 237 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 238 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Zone5A/scripts.pory"
	end
# 240 "data/maps/Zone5A/scripts.pory"

# 241 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 242 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 243 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 244 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 245 "data/maps/Zone5A/scripts.pory"

# 246 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 247 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 248 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 249 "data/maps/Zone5A/scripts.pory"

# 250 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 251 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 252 "data/maps/Zone5A/scripts.pory"
	.string "some good Bug Pokémon?$"

Zone5A_EventScript_BreederF_Text_0:
# 35 "data/maps/Zone5A/scripts.pory"
	.string "I'll change a Pokémon's nature to\n"
	.string "Serious for the price of ¥100.$"

Zone5A_EventScript_BreederF_Text_1:
# 38 "data/maps/Zone5A/scripts.pory"
	.string "Why so serious?$"

Zone5A_EventScript_BreederF_Text_2:
# 42 "data/maps/Zone5A/scripts.pory"
	.string "You don't have enough money.$"

Zone5A_EventScript_BreederF_Text_3:
# 45 "data/maps/Zone5A/scripts.pory"
	.string "Which Pokémon would you like to change\n"
	.string "the nature?$"

Zone5A_EventScript_BreederF_Text_4:
# 53 "data/maps/Zone5A/scripts.pory"
	.string "I can't change the nature of an egg.$"

Zone5A_EventScript_BreederF_Text_5:
# 58 "data/maps/Zone5A/scripts.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

Zone5A_EventScript_BreederF_Text_6:
# 64 "data/maps/Zone5A/scripts.pory"
	.string "It's done.$"
