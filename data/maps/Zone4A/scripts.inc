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


Zone4A_EventScript_Breeder::
# 30 "data/maps/Zone4A/scripts.pory"
	lock
# 31 "data/maps/Zone4A/scripts.pory"
	faceplayer
# 32 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ZONE4A_RECEIVED_GEM, Zone4A_EventScript_Breeder_2
# 40 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_ZONE0B_RECEIVED_EEVEE, Zone4A_EventScript_Breeder_5
# 45 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone4A_EventScript_Breeder_13
# 68 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 0
Zone4A_EventScript_Breeder_25:
# 69 "data/maps/Zone4A/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_ne Zone4A_EventScript_Breeder_26
Zone4A_EventScript_Breeder_12:
# 132 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_22, MSGBOX_DEFAULT
# 133 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 134 "data/maps/Zone4A/scripts.pory"
	release
	return

Zone4A_EventScript_Breeder_2:
# 33 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_0
# 34 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone4A_EventScript_Breeder_9
Zone4A_EventScript_Breeder_7:
# 37 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_Breeder_5:
# 41 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_2
# 42 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_Breeder_8:
# 35 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_1, MSGBOX_DEFAULT
	goto Zone4A_EventScript_Breeder_7

Zone4A_EventScript_Breeder_9:
# 34 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, Zone4A_EventScript_Breeder_8
	goto Zone4A_EventScript_Breeder_7

Zone4A_EventScript_Breeder_13:
# 47 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_4
# 48 "data/maps/Zone4A/scripts.pory"
	random 8
# 49 "data/maps/Zone4A/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/Zone4A/scripts.pory"
	case 0, Zone4A_EventScript_Breeder_17
# 52 "data/maps/Zone4A/scripts.pory"
	case 1, Zone4A_EventScript_Breeder_18
# 54 "data/maps/Zone4A/scripts.pory"
	case 2, Zone4A_EventScript_Breeder_19
# 56 "data/maps/Zone4A/scripts.pory"
	case 3, Zone4A_EventScript_Breeder_20
# 58 "data/maps/Zone4A/scripts.pory"
	case 4, Zone4A_EventScript_Breeder_21
# 60 "data/maps/Zone4A/scripts.pory"
	case 5, Zone4A_EventScript_Breeder_22
# 62 "data/maps/Zone4A/scripts.pory"
	case 6, Zone4A_EventScript_Breeder_23
# 64 "data/maps/Zone4A/scripts.pory"
	case 7, Zone4A_EventScript_Breeder_24
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_17:
# 51 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_WATER_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_18:
# 53 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_19:
# 55 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_20:
# 57 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_21:
# 59 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_22:
# 61 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_23:
# 63 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ICE_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_24:
# 65 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FAIRY_GEM
	goto Zone4A_EventScript_Breeder_12

Zone4A_EventScript_Breeder_26:
# 70 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_5, MSGBOX_DEFAULT
# 71 "data/maps/Zone4A/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone4A_EventScript_Breeder_Text_6, Zone4A_EventScript_Breeder_Text_7, Zone4A_EventScript_Breeder_Text_8, Zone4A_EventScript_Breeder_Text_9, Zone4A_EventScript_Breeder_Text_10, Zone4A_EventScript_Breeder_Text_11, Zone4A_EventScript_Breeder_Text_12, Zone4A_EventScript_Breeder_Text_13
# 72 "data/maps/Zone4A/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/Zone4A/scripts.pory"
	case 0, Zone4A_EventScript_Breeder_29
# 80 "data/maps/Zone4A/scripts.pory"
	case 1, Zone4A_EventScript_Breeder_30
# 87 "data/maps/Zone4A/scripts.pory"
	case 2, Zone4A_EventScript_Breeder_31
# 94 "data/maps/Zone4A/scripts.pory"
	case 3, Zone4A_EventScript_Breeder_32
# 101 "data/maps/Zone4A/scripts.pory"
	case 4, Zone4A_EventScript_Breeder_33
# 108 "data/maps/Zone4A/scripts.pory"
	case 5, Zone4A_EventScript_Breeder_34
# 115 "data/maps/Zone4A/scripts.pory"
	case 6, Zone4A_EventScript_Breeder_35
# 122 "data/maps/Zone4A/scripts.pory"
	case 7, Zone4A_EventScript_Breeder_36
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_29:
# 74 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_14, MSGBOX_YESNO
# 75 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_37
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_30:
# 81 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_15, MSGBOX_YESNO
# 82 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_39
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_31:
# 88 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_16, MSGBOX_YESNO
# 89 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_41
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_32:
# 95 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_17, MSGBOX_YESNO
# 96 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_43
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_33:
# 102 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_18, MSGBOX_YESNO
# 103 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_45
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_34:
# 109 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_19, MSGBOX_YESNO
# 110 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_47
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_35:
# 116 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_20, MSGBOX_YESNO
# 117 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_49
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_36:
# 123 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_21, MSGBOX_YESNO
# 124 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_51
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_37:
# 76 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 77 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_WATER_GEM
# 78 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_39:
# 83 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 84 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
# 85 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_41:
# 90 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 91 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FIRE_GEM
# 92 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_43:
# 97 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 98 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
# 99 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_45:
# 104 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 105 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_DARK_GEM
# 106 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_47:
# 111 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 112 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_GRASS_GEM
# 113 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_49:
# 118 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 119 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ICE_GEM
# 120 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25

Zone4A_EventScript_Breeder_51:
# 125 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 126 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FAIRY_GEM
# 127 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_25


Zone4A_EventScript_Random1::
# 142 "data/maps/Zone4A/scripts.pory"
	lock
# 143 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_RANDOM_1, Zone4A_EventScript_Random1_2
# 148 "data/maps/Zone4A/scripts.pory"
	waitse
# 149 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 150 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 151 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_RANDOM_1
# 152 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 153 "data/maps/Zone4A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 154 "data/maps/Zone4A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 155 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_Random1_2:
# 144 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 145 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_SilverPowder::
# 160 "data/maps/Zone4A/scripts.pory"
	lock
# 161 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_EventScript_SilverPowder_2
# 166 "data/maps/Zone4A/scripts.pory"
	waitse
# 167 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 168 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 169 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_SILVER_POWDER
# 170 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 171 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_SILVER_POWDER, 1
# 172 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_SilverPowder_2:
# 162 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 163 "data/maps/Zone4A/scripts.pory"
	release
	end


# 176 "data/maps/Zone4A/scripts.pory"

# 177 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Herman::
# 178 "data/maps/Zone4A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
# 179 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Zone4A/scripts.pory"
	end
# 181 "data/maps/Zone4A/scripts.pory"

# 182 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanIntro:
# 183 "data/maps/Zone4A/scripts.pory"
	.string "I keep going through this exit,\n"
# 184 "data/maps/Zone4A/scripts.pory"
	.string "'cause it might lead somewhere!$"
# 185 "data/maps/Zone4A/scripts.pory"

# 186 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanDefeat:
# 187 "data/maps/Zone4A/scripts.pory"
	.string "But I keep getting back here!$"
# 188 "data/maps/Zone4A/scripts.pory"

# 189 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanPostBattle:
# 190 "data/maps/Zone4A/scripts.pory"
	.string "Try something else?\n"
# 191 "data/maps/Zone4A/scripts.pory"
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

Zone4A_EventScript_Breeder_Text_0:
# 33 "data/maps/Zone4A/scripts.pory"
	.string "If you want to evolve your Eevee into a\n"
	.string "different evolution, I've heard you can\l"
	.string "find the occasional gem in an item\l"
	.string "chests.$"

Zone4A_EventScript_Breeder_Text_1:
# 35 "data/maps/Zone4A/scripts.pory"
	.string "You can also try to find Gems by\n"
	.string "smashing rocks with a Sledgehammer!$"

Zone4A_EventScript_Breeder_Text_2:
# 41 "data/maps/Zone4A/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "There's a special Eevee giveaway at the\n"
	.string "Day-Care, so go check that out!$"

Zone4A_EventScript_Breeder_Text_3:
# 45 "data/maps/Zone4A/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "We've been studying how Eevee evolves\n"
	.string "differently based on which elemental\l"
	.string "Gem it is exposed to.$"

Zone4A_EventScript_Breeder_Text_4:
# 47 "data/maps/Zone4A/scripts.pory"
	.string "Why don't you take this Gem!$"

Zone4A_EventScript_Breeder_Text_5:
# 70 "data/maps/Zone4A/scripts.pory"
	.string "What's your favorite evolution of\n"
	.string "Eevee?$"

Zone4A_EventScript_Breeder_Text_6:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Vaporeon$"

Zone4A_EventScript_Breeder_Text_7:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Jolteon$"

Zone4A_EventScript_Breeder_Text_8:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Flareon$"

Zone4A_EventScript_Breeder_Text_9:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Espeon$"

Zone4A_EventScript_Breeder_Text_10:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Umbreon$"

Zone4A_EventScript_Breeder_Text_11:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Leafeon$"

Zone4A_EventScript_Breeder_Text_12:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Glaceon$"

Zone4A_EventScript_Breeder_Text_13:
# 71 "data/maps/Zone4A/scripts.pory"
	.string "Sylveon$"

Zone4A_EventScript_Breeder_Text_14:
# 74 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Vaporeon?$"

Zone4A_EventScript_Breeder_Text_15:
# 81 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Jolteon?$"

Zone4A_EventScript_Breeder_Text_16:
# 88 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Flareon?$"

Zone4A_EventScript_Breeder_Text_17:
# 95 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Espeon?$"

Zone4A_EventScript_Breeder_Text_18:
# 102 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Umbreon?$"

Zone4A_EventScript_Breeder_Text_19:
# 109 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Leafeon?$"

Zone4A_EventScript_Breeder_Text_20:
# 116 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Glaceon?$"

Zone4A_EventScript_Breeder_Text_21:
# 123 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Sylveon?$"

Zone4A_EventScript_Breeder_Text_22:
# 132 "data/maps/Zone4A/scripts.pory"
	.string "I hope you can put that Gem to good\n"
	.string "use!$"

Zone4A_Text_HereGem::
# 137 "data/maps/Zone4A/scripts.pory"
	.string "Then I suppose this would be of good\n"
	.string "use to you!$"
