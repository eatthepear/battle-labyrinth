Zone9C_MapScripts::
	.byte 0


Zone9C_EventScript_Man::
# 4 "data/maps/Zone9C/scripts.pory"
	lock
# 5 "data/maps/Zone9C/scripts.pory"
	faceplayer
# 6 "data/maps/Zone9C/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9C_EventScript_Man_2
# 6 "data/maps/Zone9C/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone9C_EventScript_Man_2
# 11 "data/maps/Zone9C/scripts.pory"
	message Zone9C_EventScript_Man_Text_1
# 12 "data/maps/Zone9C/scripts.pory"
	waitmessage
# 13 "data/maps/Zone9C/scripts.pory"
	pokemart Zone9C_Shop_Herbal
# 14 "data/maps/Zone9C/scripts.pory"
	msgbox Zone9C_EventScript_Man_Text_2, MSGBOX_DEFAULT
# 15 "data/maps/Zone9C/scripts.pory"
	release
	end

Zone9C_EventScript_Man_2:
# 7 "data/maps/Zone9C/scripts.pory"
	msgbox Zone9C_EventScript_Man_Text_0
# 8 "data/maps/Zone9C/scripts.pory"
	release
	end


	.align 2
# 19 "data/maps/Zone9C/scripts.pory"
Zone9C_Shop_Herbal:
# 20 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 21 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 22 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 23 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

Zone9C_EventScript_Woman::
# 27 "data/maps/Zone9C/scripts.pory"
	lock
# 28 "data/maps/Zone9C/scripts.pory"
	faceplayer
# 29 "data/maps/Zone9C/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9C_EventScript_Woman_2
# 29 "data/maps/Zone9C/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone9C_EventScript_Woman_2
# 34 "data/maps/Zone9C/scripts.pory"
	message Zone9C_EventScript_Woman_Text_1
# 35 "data/maps/Zone9C/scripts.pory"
	waitmessage
# 36 "data/maps/Zone9C/scripts.pory"
	pokemart Zone9C_Shop_Incense
# 37 "data/maps/Zone9C/scripts.pory"
	msgbox Zone9C_EventScript_Woman_Text_2, MSGBOX_DEFAULT
# 38 "data/maps/Zone9C/scripts.pory"
	release
	end

Zone9C_EventScript_Woman_2:
# 30 "data/maps/Zone9C/scripts.pory"
	msgbox Zone9C_EventScript_Woman_Text_0
# 31 "data/maps/Zone9C/scripts.pory"
	release
	end


	.align 2
# 42 "data/maps/Zone9C/scripts.pory"
Zone9C_Shop_Incense:
# 43 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 44 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 45 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 46 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 47 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 48 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 49 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 50 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 51 "data/maps/Zone9C/scripts.pory"
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

Zone9C_EventScript_Man_Text_0:
# 7 "data/maps/Zone9C/scripts.pory"
	.string "Welcome to my Herb shop.\p"
	.string "Unfortunately, we are out of stock of\n"
	.string "ingredients to make more herbs.$"

Zone9C_EventScript_Man_Text_1:
# 11 "data/maps/Zone9C/scripts.pory"
	.string "Welcome to my Herb shop.\nAll natural ingredients only.$"

Zone9C_EventScript_Man_Text_2:
# 14 "data/maps/Zone9C/scripts.pory"
	.string "Take it easy, now.$"

Zone9C_EventScript_Woman_Text_0:
# 30 "data/maps/Zone9C/scripts.pory"
	.string "The fragrance, the aroma…\p"
	.string "Unfortunately, my incense shop is\n"
	.string "lacking key ingredients and is not open\l"
	.string "at this time.$"

Zone9C_EventScript_Woman_Text_1:
# 34 "data/maps/Zone9C/scripts.pory"
	.string "The fragrance, the aroma…\nWelcome to my Incense shop.$"

Zone9C_EventScript_Woman_Text_2:
# 37 "data/maps/Zone9C/scripts.pory"
	.string "Rest easy, now.$"
