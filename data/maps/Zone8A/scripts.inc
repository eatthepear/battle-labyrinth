Zone8A_MapScripts::
# 2 "data/maps/Zone8A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_RANDOM_1, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_RANDOM_2, Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone8A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone8A_EventScript_BuyTyrogue::
# 22 "data/maps/Zone8A/scripts.pory"
	lock
# 23 "data/maps/Zone8A/scripts.pory"
	faceplayer
# 24 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ZONE8A_BOUGHT_TYROGUE, Zone8A_EventScript_BuyTyrogue_2
# 29 "data/maps/Zone8A/scripts.pory"
	showmoneybox 0, 0, 0
# 30 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_1, MSGBOX_YESNO
# 31 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone8A_EventScript_BuyTyrogue_5
# 37 "data/maps/Zone8A/scripts.pory"
	checkmoney 2000, 0
# 38 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone8A_EventScript_BuyTyrogue_8
# 44 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone8A_EventScript_BuyTyrogue_11
Zone8A_EventScript_BuyTyrogue_10:
# 59 "data/maps/Zone8A/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TYROGUE
# 60 "data/maps/Zone8A/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 61 "data/maps/Zone8A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone8A_EventScript_BuyTyrogue_14
Zone8A_EventScript_BuyTyrogue_13:
# 85 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_6, MSGBOX_YESNO
# 86 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone8A_EventScript_BuyTyrogue_19
# 92 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ZONE8A_BOUGHT_TYROGUE
# 93 "data/maps/Zone8A/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone8A_EventScript_BuyTyrogue_28
Zone8A_EventScript_BuyTyrogue_27:
# 97 "data/maps/Zone8A/scripts.pory"
	removemoney 2000
# 98 "data/maps/Zone8A/scripts.pory"
	updatemoneybox
# 99 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_7, MSGBOX_DEFAULT
# 100 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 101 "data/maps/Zone8A/scripts.pory"
	givemon VAR_TEMP_1, 15, ITEM_NONE
# 102 "data/maps/Zone8A/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 243
# 103 "data/maps/Zone8A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 104 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_8, MSGBOX_DEFAULT
# 105 "data/maps/Zone8A/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/Zone8A/scripts.pory"
	message Zone8A_EventScript_BuyTyrogue_Text_9
# 107 "data/maps/Zone8A/scripts.pory"
	waitmessage
# 108 "data/maps/Zone8A/scripts.pory"
	waitfanfare
# 109 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_10, MSGBOX_YESNO
# 110 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone8A_EventScript_BuyTyrogue_35
Zone8A_EventScript_BuyTyrogue_34:
# 114 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_11, MSGBOX_DEFAULT
# 115 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_2:
# 25 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_0
# 26 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_5:
# 32 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 33 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_0
# 34 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_8:
# 39 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_2
# 40 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 41 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_11:
# 45 "data/maps/Zone8A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone8A_EventScript_BuyTyrogue_16
	goto Zone8A_EventScript_BuyTyrogue_10

Zone8A_EventScript_BuyTyrogue_14:
# 62 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_4, MSGBOX_AUTOCLOSE
# 63 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 64 "data/maps/Zone8A/scripts.pory"
	special ChoosePartyMon
# 65 "data/maps/Zone8A/scripts.pory"
	waitstate
# 66 "data/maps/Zone8A/scripts.pory"
	faceplayer
# 67 "data/maps/Zone8A/scripts.pory"
	showmoneybox 0, 0, 0
# 68 "data/maps/Zone8A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone8A_EventScript_BuyTyrogue_22
# 74 "data/maps/Zone8A/scripts.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 75 "data/maps/Zone8A/scripts.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 76 "data/maps/Zone8A/scripts.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 77 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_5, MSGBOX_YESNO
# 78 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone8A_EventScript_BuyTyrogue_30
	goto Zone8A_EventScript_BuyTyrogue_13

Zone8A_EventScript_BuyTyrogue_16:
# 46 "data/maps/Zone8A/scripts.pory"
	setvar VAR_TEMP_3, 0
# 47 "data/maps/Zone8A/scripts.pory"
	checkspeciesclause SPECIES_TYROGUE
# 48 "data/maps/Zone8A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone8A_EventScript_BuyTyrogue_25
Zone8A_EventScript_BuyTyrogue_24:
# 51 "data/maps/Zone8A/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Zone8A_EventScript_BuyTyrogue_32
	goto Zone8A_EventScript_BuyTyrogue_10

Zone8A_EventScript_BuyTyrogue_19:
# 87 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 88 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_0
# 89 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_22:
# 69 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 70 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_0
# 71 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_25:
# 49 "data/maps/Zone8A/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone8A_EventScript_BuyTyrogue_24

Zone8A_EventScript_BuyTyrogue_28:
# 94 "data/maps/Zone8A/scripts.pory"
	special SendChosenMonToPC
# 95 "data/maps/Zone8A/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto Zone8A_EventScript_BuyTyrogue_27

Zone8A_EventScript_BuyTyrogue_30:
# 79 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 80 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_0
# 81 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_32:
# 52 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_EventScript_BuyTyrogue_Text_3
# 53 "data/maps/Zone8A/scripts.pory"
	hidemoneybox
# 54 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_BuyTyrogue_35:
# 111 "data/maps/Zone8A/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 112 "data/maps/Zone8A/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone8A_EventScript_BuyTyrogue_34


Zone8A_EventScript_Magnet::
# 120 "data/maps/Zone8A/scripts.pory"
	lock
# 121 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_MAGNET, Zone8A_EventScript_Magnet_2
# 126 "data/maps/Zone8A/scripts.pory"
	waitse
# 127 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 128 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 129 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_MAGNET
# 130 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 131 "data/maps/Zone8A/scripts.pory"
	finditem ITEM_MAGNET, 1
# 132 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_Magnet_2:
# 122 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 123 "data/maps/Zone8A/scripts.pory"
	release
	end


Zone8A_EventScript_Random1::
# 137 "data/maps/Zone8A/scripts.pory"
	lock
# 138 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_RANDOM_1, Zone8A_EventScript_Random1_2
# 143 "data/maps/Zone8A/scripts.pory"
	waitse
# 144 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 145 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 146 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_RANDOM_1
# 147 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 148 "data/maps/Zone8A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 149 "data/maps/Zone8A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 150 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_Random1_2:
# 139 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 140 "data/maps/Zone8A/scripts.pory"
	release
	end


Zone8A_EventScript_Random2::
# 155 "data/maps/Zone8A/scripts.pory"
	lock
# 156 "data/maps/Zone8A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE8A_RANDOM_2, Zone8A_EventScript_Random2_2
# 161 "data/maps/Zone8A/scripts.pory"
	waitse
# 162 "data/maps/Zone8A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 163 "data/maps/Zone8A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 164 "data/maps/Zone8A/scripts.pory"
	setflag FLAG_ITEM_ZONE8A_RANDOM_2
# 165 "data/maps/Zone8A/scripts.pory"
	addobject VAR_LAST_TALKED
# 166 "data/maps/Zone8A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 167 "data/maps/Zone8A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 168 "data/maps/Zone8A/scripts.pory"
	release
	end

Zone8A_EventScript_Random2_2:
# 157 "data/maps/Zone8A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 158 "data/maps/Zone8A/scripts.pory"
	release
	end


# 172 "data/maps/Zone8A/scripts.pory"

# 173 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Jimmy::
# 174 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JIMMY, Zone8A_Text_JimmyIntro, Zone8A_Text_JimmyDefeat
# 175 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_JimmyPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Zone8A/scripts.pory"
	end
# 177 "data/maps/Zone8A/scripts.pory"

# 178 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyIntro:
# 179 "data/maps/Zone8A/scripts.pory"
	.string "Rare Pokémon… Do you have them?$"
# 180 "data/maps/Zone8A/scripts.pory"

# 181 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyDefeat:
# 182 "data/maps/Zone8A/scripts.pory"
	.string "You do! You do have rare Pokémon!$"
# 183 "data/maps/Zone8A/scripts.pory"

# 184 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_JimmyPostBattle:
# 185 "data/maps/Zone8A/scripts.pory"
	.string "I want to collect all the rare\n"
# 186 "data/maps/Zone8A/scripts.pory"
	.string "Pokémon in the world!$"
# 187 "data/maps/Zone8A/scripts.pory"

# 188 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Beckham::
# 189 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BECKHAM, Zone8A_Text_BeckhamIntro, Zone8A_Text_BeckhamDefeat
# 190 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_BeckhamPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/Zone8A/scripts.pory"
	end
# 192 "data/maps/Zone8A/scripts.pory"

# 193 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamIntro:
# 194 "data/maps/Zone8A/scripts.pory"
	.string "What's your favorite monster movie?$"
# 195 "data/maps/Zone8A/scripts.pory"

# 196 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamDefeat:
# 197 "data/maps/Zone8A/scripts.pory"
	.string "I like the ones with lots of\n"
# 198 "data/maps/Zone8A/scripts.pory"
	.string "destruction: all of them!$"
# 199 "data/maps/Zone8A/scripts.pory"

# 200 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_BeckhamPostBattle:
# 201 "data/maps/Zone8A/scripts.pory"
	.string "Which one is my favorite?\n"
# 202 "data/maps/Zone8A/scripts.pory"
	.string "That's a good question…\l"
# 203 "data/maps/Zone8A/scripts.pory"
	.string "I'll have to think about it!$"
# 204 "data/maps/Zone8A/scripts.pory"

# 205 "data/maps/Zone8A/scripts.pory"
Zone8A_EventScript_Emiliano::
# 206 "data/maps/Zone8A/scripts.pory"
	trainerbattle_single TRAINER_PBL_EMILIANO, Zone8A_Text_EmilianoIntro, Zone8A_Text_EmilianoDefeat
# 207 "data/maps/Zone8A/scripts.pory"
	msgbox Zone8A_Text_EmilianoPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Zone8A/scripts.pory"
	end
# 209 "data/maps/Zone8A/scripts.pory"

# 210 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoIntro:
# 211 "data/maps/Zone8A/scripts.pory"
	.string "I'm so hungry…$"
# 212 "data/maps/Zone8A/scripts.pory"

# 213 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoDefeat:
# 214 "data/maps/Zone8A/scripts.pory"
	.string "It's because I keep thinking about\n"
# 215 "data/maps/Zone8A/scripts.pory"
	.string "pancakes!$"
# 216 "data/maps/Zone8A/scripts.pory"

# 217 "data/maps/Zone8A/scripts.pory"
Zone8A_Text_EmilianoPostBattle:
# 218 "data/maps/Zone8A/scripts.pory"
	.string "Mmm… Pancakes…$"

Zone8A_EventScript_BuyTyrogue_Text_0:
# 25 "data/maps/Zone8A/scripts.pory"
	.string "ALRIGHT! BACK TO TRAINING!$"

Zone8A_EventScript_BuyTyrogue_Text_1:
# 30 "data/maps/Zone8A/scripts.pory"
	.string "I'M TRAINING!\p"
	.string "I'M TRAINING!\p"
	.string "I'M TRAINING!\p"
	.string "I'M TRAINING!\p"
	.string "I'M TRAINING!\p"
	.string "I'M TRAINING!\p"
	.string "Err… Oh!\p"
	.string "You look like a capable Trainer!\p"
	.string "Are you interested in raising this\n"
	.string "Tyrogue?\p"
	.string "I won't part with it without ¥2000!$"

Zone8A_EventScript_BuyTyrogue_Text_2:
# 39 "data/maps/Zone8A/scripts.pory"
	.string "You don't have enough money.\pALRIGHT! BACK TO TRAINING!$"

Zone8A_EventScript_BuyTyrogue_Text_3:
# 52 "data/maps/Zone8A/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in this evolution\l"
	.string "line.$"

Zone8A_EventScript_BuyTyrogue_Text_4:
# 62 "data/maps/Zone8A/scripts.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

Zone8A_EventScript_BuyTyrogue_Text_5:
# 77 "data/maps/Zone8A/scripts.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

Zone8A_EventScript_BuyTyrogue_Text_6:
# 85 "data/maps/Zone8A/scripts.pory"
	.string "Just to confirm…\p"
	.string "You're sure you want to buy Tyrogue for\n"
	.string "¥2000?$"

Zone8A_EventScript_BuyTyrogue_Text_7:
# 99 "data/maps/Zone8A/scripts.pory"
	.string "GOOD PURCHASE!$"

Zone8A_EventScript_BuyTyrogue_Text_8:
# 104 "data/maps/Zone8A/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone8A_EventScript_BuyTyrogue_Text_9:
# 106 "data/maps/Zone8A/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone8A_EventScript_BuyTyrogue_Text_10:
# 109 "data/maps/Zone8A/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone8A_EventScript_BuyTyrogue_Text_11:
# 114 "data/maps/Zone8A/scripts.pory"
	.string "TRAIN TYROGUE WELL!$"
