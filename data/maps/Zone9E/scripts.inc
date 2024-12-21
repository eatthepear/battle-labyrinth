Zone9E_MapScripts::
	.byte 0


Zone9E_EventScript_BuyFarmAnimal::
# 4 "data/maps/Zone9E/scripts.pory"
	lock
# 5 "data/maps/Zone9E/scripts.pory"
	faceplayer
# 6 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone9E_EventScript_BuyFarmAnimal_4
Zone9E_EventScript_BuyFarmAnimal_3:
# 11 "data/maps/Zone9E/scripts.pory"
	showmoneybox 0, 0, 0
# 12 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_1, MSGBOX_YESNO
# 13 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_7
# 18 "data/maps/Zone9E/scripts.pory"
	checkmoney 5000, 0
# 19 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_10
# 23 "data/maps/Zone9E/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 24 "data/maps/Zone9E/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_14
# 30 "data/maps/Zone9E/scripts.pory"
	call EventScript_NuzlockeVerifyBuy
# 31 "data/maps/Zone9E/scripts.pory"
	removemoney 5000
# 32 "data/maps/Zone9E/scripts.pory"
	updatemoneybox
# 33 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_5, MSGBOX_DEFAULT
# 34 "data/maps/Zone9E/scripts.pory"
	closemessage
# 35 "data/maps/Zone9E/scripts.pory"
	hidemoneybox
# 36 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone9E_EventScript_BuyFarmAnimal_17
# 95 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_7, MSGBOX_DEFAULT
# 96 "data/maps/Zone9E/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone9E_EventScript_BuyFarmAnimal_Text_8, Zone9E_EventScript_BuyFarmAnimal_Text_9, Zone9E_EventScript_BuyFarmAnimal_Text_10, Zone9E_EventScript_BuyFarmAnimal_Text_11
# 97 "data/maps/Zone9E/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/Zone9E/scripts.pory"
	case 0, Zone9E_EventScript_BuyFarmAnimal_28
# 100 "data/maps/Zone9E/scripts.pory"
	case 1, Zone9E_EventScript_BuyFarmAnimal_29
# 102 "data/maps/Zone9E/scripts.pory"
	case 2, Zone9E_EventScript_BuyFarmAnimal_30
# 104 "data/maps/Zone9E/scripts.pory"
	case 3, Zone9E_EventScript_BuyFarmAnimal_31
Zone9E_EventScript_BuyFarmAnimal_16:
# 108 "data/maps/Zone9E/scripts.pory"
	givemon VAR_TEMP_1, 20, ITEM_NONE
# 109 "data/maps/Zone9E/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 249
# 110 "data/maps/Zone9E/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 111 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_12, MSGBOX_DEFAULT
# 112 "data/maps/Zone9E/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 113 "data/maps/Zone9E/scripts.pory"
	message Zone9E_EventScript_BuyFarmAnimal_Text_13
# 114 "data/maps/Zone9E/scripts.pory"
	waitmessage
# 115 "data/maps/Zone9E/scripts.pory"
	waitfanfare
# 116 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_14, MSGBOX_YESNO
# 117 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_21
Zone9E_EventScript_BuyFarmAnimal_20:
# 121 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_15, MSGBOX_DEFAULT
Zone9E_EventScript_BuyFarmAnimal_1:
# 125 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_BuyFarmAnimal_2:
# 7 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_0
# 8 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_BuyFarmAnimal_4:
# 6 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_ZONE9E_NUZLOCKE_BOUGHT_FARM_ANIMAL, Zone9E_EventScript_BuyFarmAnimal_2
	goto Zone9E_EventScript_BuyFarmAnimal_3

Zone9E_EventScript_BuyFarmAnimal_7:
# 14 "data/maps/Zone9E/scripts.pory"
	closemessage
# 15 "data/maps/Zone9E/scripts.pory"
	hidemoneybox
# 16 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_2
	goto Zone9E_EventScript_BuyFarmAnimal_1

Zone9E_EventScript_BuyFarmAnimal_10:
# 20 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_3
# 21 "data/maps/Zone9E/scripts.pory"
	hidemoneybox
	goto Zone9E_EventScript_BuyFarmAnimal_1

Zone9E_EventScript_BuyFarmAnimal_14:
# 25 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_4
# 26 "data/maps/Zone9E/scripts.pory"
	hidemoneybox
# 27 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_BuyFarmAnimal_17:
# 37 "data/maps/Zone9E/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone9E_EventScript_BuyFarmAnimal_24
# 40 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_3, 0
# 41 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_MILTANK
# 42 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_33
Zone9E_EventScript_BuyFarmAnimal_32:
# 45 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_TAUROS
# 46 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_36
Zone9E_EventScript_BuyFarmAnimal_35:
# 49 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_INDEEDEE_F
# 50 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_39
Zone9E_EventScript_BuyFarmAnimal_38:
# 53 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_INDEEDEE
# 54 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_42
Zone9E_EventScript_BuyFarmAnimal_41:
# 57 "data/maps/Zone9E/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_45
Zone9E_EventScript_BuyFarmAnimal_47:
# 63 "data/maps/Zone9E/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_48
Zone9E_EventScript_BuyFarmAnimal_23:
# 93 "data/maps/Zone9E/scripts.pory"
	setflag FLAG_ZONE9E_NUZLOCKE_BOUGHT_FARM_ANIMAL
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_21:
# 118 "data/maps/Zone9E/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 119 "data/maps/Zone9E/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone9E_EventScript_BuyFarmAnimal_20

Zone9E_EventScript_BuyFarmAnimal_24:
# 38 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_23

Zone9E_EventScript_BuyFarmAnimal_28:
# 99 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_29:
# 101 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAUROS
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_30:
# 103 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_INDEEDEE_F
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_31:
# 105 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_INDEEDEE
	goto Zone9E_EventScript_BuyFarmAnimal_16

Zone9E_EventScript_BuyFarmAnimal_33:
# 43 "data/maps/Zone9E/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_32

Zone9E_EventScript_BuyFarmAnimal_36:
# 47 "data/maps/Zone9E/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_35

Zone9E_EventScript_BuyFarmAnimal_39:
# 51 "data/maps/Zone9E/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_38

Zone9E_EventScript_BuyFarmAnimal_42:
# 55 "data/maps/Zone9E/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone9E_EventScript_BuyFarmAnimal_41

Zone9E_EventScript_BuyFarmAnimal_45:
# 58 "data/maps/Zone9E/scripts.pory"
	msgbox Zone9E_EventScript_BuyFarmAnimal_Text_6
# 59 "data/maps/Zone9E/scripts.pory"
	addmoney 3000
# 60 "data/maps/Zone9E/scripts.pory"
	release
	end

Zone9E_EventScript_BuyFarmAnimal_48:
# 64 "data/maps/Zone9E/scripts.pory"
	random 4
# 65 "data/maps/Zone9E/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/Zone9E/scripts.pory"
	case 0, Zone9E_EventScript_BuyFarmAnimal_51
# 72 "data/maps/Zone9E/scripts.pory"
	case 1, Zone9E_EventScript_BuyFarmAnimal_52
# 78 "data/maps/Zone9E/scripts.pory"
	case 2, Zone9E_EventScript_BuyFarmAnimal_53
# 84 "data/maps/Zone9E/scripts.pory"
	case 3, Zone9E_EventScript_BuyFarmAnimal_54
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_51:
# 67 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_MILTANK
# 68 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_56
# 71 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MILTANK
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_52:
# 73 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_TAUROS
# 74 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_59
# 77 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TAUROS
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_53:
# 79 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_INDEEDEE_F
# 80 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_62
# 83 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_INDEEDEE_F
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_54:
# 85 "data/maps/Zone9E/scripts.pory"
	checkspeciesclause SPECIES_INDEEDEE
# 86 "data/maps/Zone9E/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone9E_EventScript_BuyFarmAnimal_65
# 89 "data/maps/Zone9E/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_INDEEDEE
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_56:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_59:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_62:
	goto Zone9E_EventScript_BuyFarmAnimal_47

Zone9E_EventScript_BuyFarmAnimal_65:
	goto Zone9E_EventScript_BuyFarmAnimal_47


Zone9E_EventScript_BuyFarmAnimal_Text_0:
# 7 "data/maps/Zone9E/scripts.pory"
	.string "Sorry, honey. The rest of these Pokémon\n"
	.string "aren't for sale anymore.$"

Zone9E_EventScript_BuyFarmAnimal_Text_1:
# 12 "data/maps/Zone9E/scripts.pory"
	.string "Howdy! There ain't many farms 'round\n"
	.string "these parts, so I have an offer for you.\p"
	.string "I'll give you a Miltank, Tauros, or\n"
	.string "Indeedee, for only ¥5000!$"

Zone9E_EventScript_BuyFarmAnimal_Text_2:
# 16 "data/maps/Zone9E/scripts.pory"
	.string "Well, aren't you a downer.$"

Zone9E_EventScript_BuyFarmAnimal_Text_3:
# 20 "data/maps/Zone9E/scripts.pory"
	.string "You don't have enough money.$"

Zone9E_EventScript_BuyFarmAnimal_Text_4:
# 25 "data/maps/Zone9E/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone9E_EventScript_BuyFarmAnimal_Text_5:
# 33 "data/maps/Zone9E/scripts.pory"
	.string "Thanks for supporting us farm folk.$"

Zone9E_EventScript_BuyFarmAnimal_Text_6:
# 58 "data/maps/Zone9E/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone9E_EventScript_BuyFarmAnimal_Text_7:
# 95 "data/maps/Zone9E/scripts.pory"
	.string "Choose which of these you would like.$"

Zone9E_EventScript_BuyFarmAnimal_Text_8:
# 96 "data/maps/Zone9E/scripts.pory"
	.string "Miltank$"

Zone9E_EventScript_BuyFarmAnimal_Text_9:
# 96 "data/maps/Zone9E/scripts.pory"
	.string "Tauros$"

Zone9E_EventScript_BuyFarmAnimal_Text_10:
# 96 "data/maps/Zone9E/scripts.pory"
	.string "Indeedee-F$"

Zone9E_EventScript_BuyFarmAnimal_Text_11:
# 96 "data/maps/Zone9E/scripts.pory"
	.string "Indeedee-M$"

Zone9E_EventScript_BuyFarmAnimal_Text_12:
# 111 "data/maps/Zone9E/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone9E_EventScript_BuyFarmAnimal_Text_13:
# 113 "data/maps/Zone9E/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone9E_EventScript_BuyFarmAnimal_Text_14:
# 116 "data/maps/Zone9E/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone9E_EventScript_BuyFarmAnimal_Text_15:
# 121 "data/maps/Zone9E/scripts.pory"
	.string "Take care of {STR_VAR_1} as well as\n"
	.string "it takes care of you!$"
