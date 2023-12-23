Zone4A_MapScripts::
# 2 "data/maps/Zone4A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4A_EventScript_Breeder::
# 12 "data/maps/Zone4A/scripts.pory"
	lock
# 13 "data/maps/Zone4A/scripts.pory"
	faceplayer
# 14 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_ZONE0B_RECEIVED_EEVEE, Zone4A_EventScript_Breeder_2
# 19 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_1, MSGBOX_DEFAULT
Zone4A_EventScript_Breeder_5:
# 20 "data/maps/Zone4A/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_ne Zone4A_EventScript_Breeder_6
# 86 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_20, MSGBOX_DEFAULT
# 87 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone4A_EventScript_Breeder_10
Zone4A_EventScript_Breeder_8:
# 90 "data/maps/Zone4A/scripts.pory"
	delay 16
# 91 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_22, MSGBOX_DEFAULT
# 92 "data/maps/Zone4A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/maps/Zone4A/scripts.pory"
	removeobject 3
# 94 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 95 "data/maps/Zone4A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 96 "data/maps/Zone4A/scripts.pory"
	release
	return

Zone4A_EventScript_Breeder_2:
# 15 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_0
# 16 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_Breeder_6:
# 21 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_2, MSGBOX_DEFAULT
# 22 "data/maps/Zone4A/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Zone4A_EventScript_Breeder_Text_3, Zone4A_EventScript_Breeder_Text_4, Zone4A_EventScript_Breeder_Text_5, Zone4A_EventScript_Breeder_Text_6, Zone4A_EventScript_Breeder_Text_7, Zone4A_EventScript_Breeder_Text_8, Zone4A_EventScript_Breeder_Text_9, Zone4A_EventScript_Breeder_Text_10
# 23 "data/maps/Zone4A/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/Zone4A/scripts.pory"
	case 0, Zone4A_EventScript_Breeder_14
# 31 "data/maps/Zone4A/scripts.pory"
	case 1, Zone4A_EventScript_Breeder_15
# 38 "data/maps/Zone4A/scripts.pory"
	case 2, Zone4A_EventScript_Breeder_16
# 45 "data/maps/Zone4A/scripts.pory"
	case 3, Zone4A_EventScript_Breeder_17
# 52 "data/maps/Zone4A/scripts.pory"
	case 4, Zone4A_EventScript_Breeder_18
# 59 "data/maps/Zone4A/scripts.pory"
	case 5, Zone4A_EventScript_Breeder_19
# 66 "data/maps/Zone4A/scripts.pory"
	case 6, Zone4A_EventScript_Breeder_20
# 73 "data/maps/Zone4A/scripts.pory"
	case 7, Zone4A_EventScript_Breeder_21
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_9:
# 88 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_21, MSGBOX_DEFAULT
	goto Zone4A_EventScript_Breeder_8

Zone4A_EventScript_Breeder_10:
# 87 "data/maps/Zone4A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, Zone4A_EventScript_Breeder_9
	goto Zone4A_EventScript_Breeder_8

Zone4A_EventScript_Breeder_14:
# 25 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_11, MSGBOX_YESNO
# 26 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_22
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_15:
# 32 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_12, MSGBOX_YESNO
# 33 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_24
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_16:
# 39 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_13, MSGBOX_YESNO
# 40 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_26
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_17:
# 46 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_14, MSGBOX_YESNO
# 47 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_28
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_18:
# 53 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_15, MSGBOX_YESNO
# 54 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_30
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_19:
# 60 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_16, MSGBOX_YESNO
# 61 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_32
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_20:
# 67 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_17, MSGBOX_YESNO
# 68 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_34
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_21:
# 74 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4A_EventScript_Breeder_36
# 77 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_19, MSGBOX_YESNO
# 78 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_Breeder_39
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_22:
# 27 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 28 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_WATER_GEM
# 29 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_24:
# 34 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 35 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
# 36 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_26:
# 41 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 42 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FIRE_GEM
# 43 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_28:
# 48 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 49 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
# 50 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_30:
# 55 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 56 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_DARK_GEM
# 57 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_32:
# 62 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 63 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_GRASS_GEM
# 64 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_34:
# 69 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 70 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_ICE_GEM
# 71 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_36:
# 75 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Breeder_Text_18, MSGBOX_DEFAULT
	goto Zone4A_EventScript_Breeder_5

Zone4A_EventScript_Breeder_39:
# 79 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HereGem, MSGBOX_DEFAULT
# 80 "data/maps/Zone4A/scripts.pory"
	giveitem ITEM_FAIRY_GEM
# 81 "data/maps/Zone4A/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto Zone4A_EventScript_Breeder_5


Zone4A_EventScript_ItemBurnHeal::
# 104 "data/maps/Zone4A/scripts.pory"
	lock
# 105 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_EventScript_ItemBurnHeal_2
# 110 "data/maps/Zone4A/scripts.pory"
	waitse
# 111 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 112 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 113 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_BURN_HEAL
# 114 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 115 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_BURN_HEAL, 1
# 116 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemBurnHeal_2:
# 106 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 107 "data/maps/Zone4A/scripts.pory"
	release
	end


# 120 "data/maps/Zone4A/scripts.pory"

# 121 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Sign::
# 122 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
# 123 "data/maps/Zone4A/scripts.pory"
	end
# 124 "data/maps/Zone4A/scripts.pory"

# 125 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_Sign:
# 126 "data/maps/Zone4A/scripts.pory"
	.string "These woods are enchanted…\n"
# 127 "data/maps/Zone4A/scripts.pory"
	.string "Don't get lost!$"
# 128 "data/maps/Zone4A/scripts.pory"

# 129 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Herman::
# 130 "data/maps/Zone4A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
# 131 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/Zone4A/scripts.pory"
	end
# 133 "data/maps/Zone4A/scripts.pory"

# 134 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanIntro:
# 135 "data/maps/Zone4A/scripts.pory"
	.string "I keep going through this exit,\n"
# 136 "data/maps/Zone4A/scripts.pory"
	.string "'cause it might lead somewhere!$"
# 137 "data/maps/Zone4A/scripts.pory"

# 138 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanDefeat:
# 139 "data/maps/Zone4A/scripts.pory"
	.string "But I keep getting back here!$"
# 140 "data/maps/Zone4A/scripts.pory"

# 141 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanPostBattle:
# 142 "data/maps/Zone4A/scripts.pory"
	.string "Try something else?\n"
# 143 "data/maps/Zone4A/scripts.pory"
	.string "No, I'm sure this is the right way!$"

Zone4A_EventScript_Breeder_Text_0:
# 15 "data/maps/Zone4A/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "There's a special Eevee giveaway at the\n"
	.string "Day-Care, so go check that out!$"

Zone4A_EventScript_Breeder_Text_1:
# 19 "data/maps/Zone4A/scripts.pory"
	.string "Hello, {PLAYER}!\n"
	.string "I work at the Pokémon Day-Care.\p"
	.string "We've been studying how Eevee evolves\n"
	.string "differently based on which elemental\l"
	.string "Gem it holds when it levels up.$"

Zone4A_EventScript_Breeder_Text_2:
# 21 "data/maps/Zone4A/scripts.pory"
	.string "What's your favorite evolution of\n"
	.string "Eevee?$"

Zone4A_EventScript_Breeder_Text_3:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Vaporeon$"

Zone4A_EventScript_Breeder_Text_4:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Jolteon$"

Zone4A_EventScript_Breeder_Text_5:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Flareon$"

Zone4A_EventScript_Breeder_Text_6:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Espeon$"

Zone4A_EventScript_Breeder_Text_7:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Umbreon$"

Zone4A_EventScript_Breeder_Text_8:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Leafeon$"

Zone4A_EventScript_Breeder_Text_9:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Glaceon$"

Zone4A_EventScript_Breeder_Text_10:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Sylveon$"

Zone4A_EventScript_Breeder_Text_11:
# 25 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Vaporeon?$"

Zone4A_EventScript_Breeder_Text_12:
# 32 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Jolteon?$"

Zone4A_EventScript_Breeder_Text_13:
# 39 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Flareon?$"

Zone4A_EventScript_Breeder_Text_14:
# 46 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Espeon?$"

Zone4A_EventScript_Breeder_Text_15:
# 53 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Umbreon?$"

Zone4A_EventScript_Breeder_Text_16:
# 60 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Leafeon?$"

Zone4A_EventScript_Breeder_Text_17:
# 67 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Glaceon?$"

Zone4A_EventScript_Breeder_Text_18:
# 75 "data/maps/Zone4A/scripts.pory"
	.string "Unfortunately, I ran out of Fairy Gems\n"
	.string "to give out.\p"
	.string "You'll have to find a way to evolve your\n"
	.string "Eevee into Sylveon elsewhere.$"

Zone4A_EventScript_Breeder_Text_19:
# 77 "data/maps/Zone4A/scripts.pory"
	.string "Oh, so you like Sylveon?$"

Zone4A_EventScript_Breeder_Text_20:
# 86 "data/maps/Zone4A/scripts.pory"
	.string "I hope you can put that Gem to good\n"
	.string "use.$"

Zone4A_EventScript_Breeder_Text_21:
# 88 "data/maps/Zone4A/scripts.pory"
	.string "If you want to evolve your Eevee into a\n"
	.string "different evolution, you can always\l"
	.string "find Gems by smashing rocks with a\l"
	.string "Sledgehammer!$"

Zone4A_EventScript_Breeder_Text_22:
# 91 "data/maps/Zone4A/scripts.pory"
	.string "Well, I'm off to help other trainers.\p"
	.string "See you!$"

Zone4A_Text_HereGem::
# 99 "data/maps/Zone4A/scripts.pory"
	.string "Then I suppose this would be of good\n"
	.string "use to you!$"
