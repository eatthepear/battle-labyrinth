Zone4A_MapScripts::
# 2 "data/maps/Zone4A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_RANDOM_1, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4A_EventScript_PoisonTree::
# 17 "data/maps/Zone4A/scripts.pory"
	lock
# 18 "data/maps/Zone4A/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 19 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_0, MSGBOX_YESNO
# 20 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_PoisonTree_2
# 24 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_2
Zone4A_EventScript_PoisonTree_1:
# 26 "data/maps/Zone4A/scripts.pory"
	release
	return

Zone4A_EventScript_PoisonTree_2:
# 21 "data/maps/Zone4A/scripts.pory"
	trysetstatus STATUS1_POISON, 0
# 22 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_1
	goto Zone4A_EventScript_PoisonTree_1


Zone4A_EventScript_GiveSquawkabilly::
# 30 "data/maps/Zone4A/scripts.pory"
	lock
# 31 "data/maps/Zone4A/scripts.pory"
	faceplayer
# 32 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ZONE4A_RECEIVED_SQUAWKABILLY, Zone4A_EventScript_GiveSquawkabilly_2
# 44 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_3, MSGBOX_YESNO
# 45 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_5
# 50 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_4, MSGBOX_YESNO
# 51 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_11
# 56 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone4A_EventScript_GiveSquawkabilly_14
Zone4A_EventScript_GiveSquawkabilly_13:
# 68 "data/maps/Zone4A/scripts.pory"
	random 4
# 69 "data/maps/Zone4A/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/Zone4A/scripts.pory"
	case 0, Zone4A_EventScript_GiveSquawkabilly_18
# 72 "data/maps/Zone4A/scripts.pory"
	case 1, Zone4A_EventScript_GiveSquawkabilly_19
# 74 "data/maps/Zone4A/scripts.pory"
	case 2, Zone4A_EventScript_GiveSquawkabilly_20
# 76 "data/maps/Zone4A/scripts.pory"
	case 3, Zone4A_EventScript_GiveSquawkabilly_21
Zone4A_EventScript_GiveSquawkabilly_16:
# 79 "data/maps/Zone4A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 80 "data/maps/Zone4A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_26
Zone4A_EventScript_GiveSquawkabilly_25:
# 102 "data/maps/Zone4A/scripts.pory"
	givemon VAR_TEMP_1, 12, ITEM_NONE
# 103 "data/maps/Zone4A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 242
# 104 "data/maps/Zone4A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 105 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_8, MSGBOX_DEFAULT
# 106 "data/maps/Zone4A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 107 "data/maps/Zone4A/scripts.pory"
	message Zone4A_EventScript_GiveSquawkabilly_Text_9
# 108 "data/maps/Zone4A/scripts.pory"
	waitmessage
# 109 "data/maps/Zone4A/scripts.pory"
	waitfanfare
# 110 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_10, MSGBOX_YESNO
# 111 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_31
Zone4A_EventScript_GiveSquawkabilly_30:
# 115 "data/maps/Zone4A/scripts.pory"
	faceplayer
# 116 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_11, MSGBOX_DEFAULT
# 117 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ZONE4A_RECEIVED_SQUAWKABILLY
# 118 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_2:
# 33 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_0, MSGBOX_YESNO
# 34 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_7
# 39 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_2
# 40 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_5:
# 46 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Squawkabilly_ComeBack, MSGBOX_AUTOCLOSE
# 47 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_7:
# 35 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_1
# 36 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_11:
# 52 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Squawkabilly_ComeBack, MSGBOX_AUTOCLOSE
# 53 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_14:
# 57 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone4A_EventScript_GiveSquawkabilly_22
# 60 "data/maps/Zone4A/scripts.pory"
	checkspeciesclause SPECIES_SQUAWKABILLY
# 61 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_28
	goto Zone4A_EventScript_GiveSquawkabilly_13

Zone4A_EventScript_GiveSquawkabilly_18:
# 71 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_GREEN
	goto Zone4A_EventScript_GiveSquawkabilly_16

Zone4A_EventScript_GiveSquawkabilly_19:
# 73 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_BLUE
	goto Zone4A_EventScript_GiveSquawkabilly_16

Zone4A_EventScript_GiveSquawkabilly_20:
# 75 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_YELLOW
	goto Zone4A_EventScript_GiveSquawkabilly_16

Zone4A_EventScript_GiveSquawkabilly_21:
# 77 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_WHITE
	goto Zone4A_EventScript_GiveSquawkabilly_16

Zone4A_EventScript_GiveSquawkabilly_22:
# 58 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone4A_EventScript_GiveSquawkabilly_13

Zone4A_EventScript_GiveSquawkabilly_26:
# 81 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_6, MSGBOX_AUTOCLOSE
# 82 "data/maps/Zone4A/scripts.pory"
	special ChoosePartyMon
# 83 "data/maps/Zone4A/scripts.pory"
	waitstate
# 84 "data/maps/Zone4A/scripts.pory"
	faceplayer
# 85 "data/maps/Zone4A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_34
# 90 "data/maps/Zone4A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 91 "data/maps/Zone4A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 92 "data/maps/Zone4A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 93 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_7, MSGBOX_YESNO
# 94 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone4A_EventScript_GiveSquawkabilly_37
# 99 "data/maps/Zone4A/scripts.pory"
	special SendChosenMonToPC
# 100 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone4A_EventScript_GiveSquawkabilly_25

Zone4A_EventScript_GiveSquawkabilly_28:
# 62 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_GiveSquawkabilly_Text_5, MSGBOX_AUTOCLOSE
# 63 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_31:
# 112 "data/maps/Zone4A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 113 "data/maps/Zone4A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone4A_EventScript_GiveSquawkabilly_30

Zone4A_EventScript_GiveSquawkabilly_34:
# 86 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Squawkabilly_ComeBack
# 87 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_GiveSquawkabilly_37:
# 95 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Squawkabilly_ComeBack
# 96 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_ItemRandom1::
# 219 "data/maps/Zone4A/scripts.pory"
	lock
# 220 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_RANDOM_1, Zone4A_EventScript_ItemRandom1_2
# 225 "data/maps/Zone4A/scripts.pory"
	waitse
# 226 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 227 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 228 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_RANDOM_1
# 229 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 230 "data/maps/Zone4A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 231 "data/maps/Zone4A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 232 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemRandom1_2:
# 221 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 222 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_ItemSilverPowder::
# 237 "data/maps/Zone4A/scripts.pory"
	lock
# 238 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_EventScript_ItemSilverPowder_2
# 243 "data/maps/Zone4A/scripts.pory"
	waitse
# 244 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 245 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 246 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_SILVER_POWDER
# 247 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 248 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_SILVER_POWDER, 1
# 249 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemSilverPowder_2:
# 239 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 240 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_Sign::
# 254 "data/maps/Zone4A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 255 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


# 259 "data/maps/Zone4A/scripts.pory"

# 260 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Herman::
# 261 "data/maps/Zone4A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
# 262 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Zone4A/scripts.pory"
	end
# 264 "data/maps/Zone4A/scripts.pory"

# 265 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanIntro:
# 266 "data/maps/Zone4A/scripts.pory"
	.string "I keep going through this exit,\n"
# 267 "data/maps/Zone4A/scripts.pory"
	.string "'cause it might lead somewhere!$"
# 268 "data/maps/Zone4A/scripts.pory"

# 269 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanDefeat:
# 270 "data/maps/Zone4A/scripts.pory"
	.string "But I keep getting back here!$"
# 271 "data/maps/Zone4A/scripts.pory"

# 272 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanPostBattle:
# 273 "data/maps/Zone4A/scripts.pory"
	.string "Try something else?\n"
# 274 "data/maps/Zone4A/scripts.pory"
	.string "No, I'm sure this is the right way!$"

Zone4A_EventScript_PoisonTree_Text_0:
# 19 "data/maps/Zone4A/scripts.pory"
	.string "This strange looking tree has\n"
	.string "potentially dangerous looking sap\l"
	.string "flowing out of it.\p"
	.string "Do you want to have your\n"
	.string "{STR_VAR_1} touch it?$"

Zone4A_EventScript_PoisonTree_Text_1:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Your {STR_VAR_1} touched the\n"
	.string "strange sap and was exposed to the\l"
	.string "poison!$"

Zone4A_EventScript_PoisonTree_Text_2:
# 24 "data/maps/Zone4A/scripts.pory"
	.string "Better to be safe than sorry.$"

Zone4A_EventScript_GiveSquawkabilly_Text_0:
# 33 "data/maps/Zone4A/scripts.pory"
	.string "How is the Squawkabilly? Is it good in\n"
	.string "battle?$"

Zone4A_EventScript_GiveSquawkabilly_Text_1:
# 35 "data/maps/Zone4A/scripts.pory"
	.string "Very good! Keep up the training, and do\n"
	.string "come back to report on how the\l"
	.string "Squawkabilly is doing.$"

Zone4A_EventScript_GiveSquawkabilly_Text_2:
# 39 "data/maps/Zone4A/scripts.pory"
	.string "Oh, is that so? Keep up the training,\n"
	.string "and do come back to report on how the\l"
	.string "Squawkabilly is doing.$"

Zone4A_EventScript_GiveSquawkabilly_Text_3:
# 44 "data/maps/Zone4A/scripts.pory"
	.string "Excuse me! Are you willing to take part\n"
	.string "in a study?$"

Zone4A_EventScript_GiveSquawkabilly_Text_4:
# 50 "data/maps/Zone4A/scripts.pory"
	.string "I'm interested in the different forms\n"
	.string "of Squawkabilly.\p"
	.string "I'm wondering if you would be willing to\n"
	.string "train a Squawkabilly and see how it\l"
	.string "fares in battle.\p"
	.string "Would you be interested in something\n"
	.string "like that?$"

Zone4A_EventScript_GiveSquawkabilly_Text_5:
# 62 "data/maps/Zone4A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Squawkabilly.$"

Zone4A_EventScript_GiveSquawkabilly_Text_6:
# 81 "data/maps/Zone4A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone4A_EventScript_GiveSquawkabilly_Text_7:
# 93 "data/maps/Zone4A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone4A_EventScript_GiveSquawkabilly_Text_8:
# 105 "data/maps/Zone4A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone4A_EventScript_GiveSquawkabilly_Text_9:
# 107 "data/maps/Zone4A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone4A_EventScript_GiveSquawkabilly_Text_10:
# 110 "data/maps/Zone4A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone4A_EventScript_GiveSquawkabilly_Text_11:
# 116 "data/maps/Zone4A/scripts.pory"
	.string "Thank you for contributing to science!$"

Zone4A_EventScript_Sign_Text_0:
# 255 "data/maps/Zone4A/scripts.pory"
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4A_Text_Squawkabilly_ComeBack::
# 122 "data/maps/Zone4A/scripts.pory"
	.string "Come back if you change your mind!$"
