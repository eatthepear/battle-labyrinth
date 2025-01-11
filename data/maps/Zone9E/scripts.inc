Zone9E_MapScripts::
	.byte 0


Zone9E_EventScript_GiveSquawkabilly::
# 4 "data/maps/Zone9E/scripts.pory"
	lock
# 5 "data/maps/Zone9E/scripts.pory"
	faceplayer
# 6 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_ZONE9E_RECEIVED_SQUAWKABILLY, Zone9E_EventScript_GiveSquawkabilly_2
# 18 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_3, MSGBOX_YESNO
# 19 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_5
# 24 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_4, MSGBOX_YESNO
# 25 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_11
# 30 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone9E_EventScript_GiveSquawkabilly_14
Zone9E_EventScript_GiveSquawkabilly_13:
# 42 "data/maps/Zone9E/scripts.pory"
	random 4
# 43 "data/maps/Zone9E/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/Zone9E/scripts.pory"
	case 0, Zone9E_EventScript_GiveSquawkabilly_18
# 46 "data/maps/Zone9E/scripts.pory"
	case 1, Zone9E_EventScript_GiveSquawkabilly_19
# 48 "data/maps/Zone9E/scripts.pory"
	case 2, Zone9E_EventScript_GiveSquawkabilly_20
# 50 "data/maps/Zone9E/scripts.pory"
	case 3, Zone9E_EventScript_GiveSquawkabilly_21
Zone9E_EventScript_GiveSquawkabilly_16:
# 53 "data/maps/Zone9E/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 54 "data/maps/Zone9E/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_26
Zone9E_EventScript_GiveSquawkabilly_25:
# 76 "data/maps/Zone9E/scripts.pory"
	givemon VAR_TEMP_1, 20, ITEM_NONE
# 77 "data/maps/Zone9E/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 242
# 78 "data/maps/Zone9E/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 79 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_8, MSGBOX_DEFAULT
# 80 "data/maps/Zone9E/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 81 "data/maps/Zone9E/scripts.pory"
	message Zone9E_EventScript_GiveSquawkabilly_Text_9
# 82 "data/maps/Zone9E/scripts.pory"
	waitmessage
# 83 "data/maps/Zone9E/scripts.pory"
	waitfanfare
# 84 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_10, MSGBOX_YESNO
# 85 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_31
Zone9E_EventScript_GiveSquawkabilly_30:
# 89 "data/maps/Zone9E/scripts.pory"
	faceplayer
# 90 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_11, MSGBOX_DEFAULT
# 91 "data/maps/Zone9E/scripts.pory"
	setflag FLAG_ZONE9E_RECEIVED_SQUAWKABILLY
# 92 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_2:
# 7 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_0, MSGBOX_YESNO
# 8 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_7
# 13 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_2
# 14 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_5:
# 20 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_Text_Squawkabilly_ComeBack, MSGBOX_AUTOCLOSE
# 21 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_7:
# 9 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_1
# 10 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_11:
# 26 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_Text_Squawkabilly_ComeBack, MSGBOX_AUTOCLOSE
# 27 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_14:
# 31 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone9E_EventScript_GiveSquawkabilly_22
# 34 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_SQUAWKABILLY
# 35 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_28
	goto Zone9E_EventScript_GiveSquawkabilly_13

Zone9E_EventScript_GiveSquawkabilly_18:
# 45 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_GREEN
	goto Zone9E_EventScript_GiveSquawkabilly_16

Zone9E_EventScript_GiveSquawkabilly_19:
# 47 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_BLUE
	goto Zone9E_EventScript_GiveSquawkabilly_16

Zone9E_EventScript_GiveSquawkabilly_20:
# 49 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_YELLOW
	goto Zone9E_EventScript_GiveSquawkabilly_16

Zone9E_EventScript_GiveSquawkabilly_21:
# 51 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SQUAWKABILLY_WHITE
	goto Zone9E_EventScript_GiveSquawkabilly_16

Zone9E_EventScript_GiveSquawkabilly_22:
# 32 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto Zone9E_EventScript_GiveSquawkabilly_13

Zone9E_EventScript_GiveSquawkabilly_26:
# 55 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_6, MSGBOX_AUTOCLOSE
# 56 "data/maps/Zone9E/scripts.pory"
	special ChoosePartyMon
# 57 "data/maps/Zone9E/scripts.pory"
	waitstate
# 58 "data/maps/Zone9E/scripts.pory"
	faceplayer
# 59 "data/maps/Zone9E/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_34
# 64 "data/maps/Zone9E/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 65 "data/maps/Zone9E/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 66 "data/maps/Zone9E/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 67 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_7, MSGBOX_YESNO
# 68 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_GiveSquawkabilly_37
# 73 "data/maps/Zone9E/scripts.pory"
	special SendChosenMonToPC
# 74 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone9E_EventScript_GiveSquawkabilly_25

Zone9E_EventScript_GiveSquawkabilly_28:
# 36 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_GiveSquawkabilly_Text_5, MSGBOX_AUTOCLOSE
# 37 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_31:
# 86 "data/maps/Zone9E/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 87 "data/maps/Zone9E/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone9E_EventScript_GiveSquawkabilly_30

Zone9E_EventScript_GiveSquawkabilly_34:
# 60 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_Text_Squawkabilly_ComeBack
# 61 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_GiveSquawkabilly_37:
# 69 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_Text_Squawkabilly_ComeBack
# 70 "data/maps/Zone9E/scripts.pory"
	release
	end


Zone9E_EventScript_GiveSquawkabilly_Text_0:
# 7 "data/maps/Zone9E/scripts.pory"
	.string "How is the Squawkabilly? Is it good in\n"
	.string "battle?$"

Zone9E_EventScript_GiveSquawkabilly_Text_1:
# 9 "data/maps/Zone9E/scripts.pory"
	.string "Very good! Keep up the training, and do\n"
	.string "come back to report on how the\l"
	.string "Squawkabilly is doing.$"

Zone9E_EventScript_GiveSquawkabilly_Text_2:
# 13 "data/maps/Zone9E/scripts.pory"
	.string "Oh, is that so? Keep up the training,\n"
	.string "and do come back to report on how the\l"
	.string "Squawkabilly is doing.$"

Zone9E_EventScript_GiveSquawkabilly_Text_3:
# 18 "data/maps/Zone9E/scripts.pory"
	.string "Excuse me! Are you willing to take part\n"
	.string "in a study?$"

Zone9E_EventScript_GiveSquawkabilly_Text_4:
# 24 "data/maps/Zone9E/scripts.pory"
	.string "I'm interested in the different forms\n"
	.string "of Squawkabilly.\p"
	.string "I'm wondering if you would be willing to\n"
	.string "train a Squawkabilly and see how it\l"
	.string "fares in battle.\p"
	.string "Would you be interested in something\n"
	.string "like that?$"

Zone9E_EventScript_GiveSquawkabilly_Text_5:
# 36 "data/maps/Zone9E/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Squawkabilly.$"

Zone9E_EventScript_GiveSquawkabilly_Text_6:
# 55 "data/maps/Zone9E/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone9E_EventScript_GiveSquawkabilly_Text_7:
# 67 "data/maps/Zone9E/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone9E_EventScript_GiveSquawkabilly_Text_8:
# 79 "data/maps/Zone9E/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone9E_EventScript_GiveSquawkabilly_Text_9:
# 81 "data/maps/Zone9E/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone9E_EventScript_GiveSquawkabilly_Text_10:
# 84 "data/maps/Zone9E/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone9E_EventScript_GiveSquawkabilly_Text_11:
# 90 "data/maps/Zone9E/scripts.pory"
	.string "Thank you for contributing to science!$"

Zone9E_Text_Squawkabilly_ComeBack::
# 96 "data/maps/Zone9E/scripts.pory"
	.string "Come back if you change your mind!$"
