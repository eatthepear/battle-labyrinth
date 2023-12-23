Zone2B_MapScripts::
# 2 "data/maps/Zone2B/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2B_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2B_EventScript_LeviathanBattle::
# 12 "data/maps/Zone2B/scripts.pory"
	lock
# 13 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 14 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_2, Zone2B_EventScript_LeviathanBattle_2
# 19 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2WantBattle, MSGBOX_YESNO
# 20 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_LeviathanBattle_5
# 25 "data/maps/Zone2B/scripts.pory"
	fadeoutbgm 1
# 26 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2Intro
# 27 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 28 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone2B_EventScript_LeviathanBattle_8
# 28 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone2B_EventScript_LeviathanBattle_8
# 32 "data/maps/Zone2B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
# 33 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOEY_LEVIATHAN_2, Zone2B_Text_Leviathan2Defeat
Zone2B_EventScript_LeviathanBattle_7:
# 35 "data/maps/Zone2B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 36 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 37 "data/maps/Zone2B/scripts.pory"
	giveitem ITEM_SILK_SCARF, 1
# 38 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 39 "data/maps/Zone2B/scripts.pory"
	closemessage
# 40 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_2
# 41 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_2:
# 15 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_LeviathanBattle_Text_0
# 16 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_5:
# 21 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_Leviathan2DenyBattle
# 22 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_LeviathanBattle_8:
# 29 "data/maps/Zone2B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_JOEY
# 30 "data/maps/Zone2B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JOEY_LEVIATHAN_2_BRUTAL, Zone2B_Text_Leviathan2Defeat
	goto Zone2B_EventScript_LeviathanBattle_7


Zone2B_EventScript_BuyBug::
# 62 "data/maps/Zone2B/scripts.pory"
	lock
# 63 "data/maps/Zone2B/scripts.pory"
	faceplayer
# 64 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_4
Zone2B_EventScript_BuyBug_3:
# 69 "data/maps/Zone2B/scripts.pory"
	showmoneybox 0, 0, 0
# 70 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_1, MSGBOX_YESNO
# 71 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone2B_EventScript_BuyBug_7
# 76 "data/maps/Zone2B/scripts.pory"
	checkmoney 1000, 0
# 77 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone2B_EventScript_BuyBug_10
# 81 "data/maps/Zone2B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 82 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone2B_EventScript_BuyBug_14
# 88 "data/maps/Zone2B/scripts.pory"
	call EventScript_NuzlockeVerifyGift
# 89 "data/maps/Zone2B/scripts.pory"
	removemoney 1000
# 90 "data/maps/Zone2B/scripts.pory"
	updatemoneybox
# 91 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_5
# 92 "data/maps/Zone2B/scripts.pory"
	closemessage
# 93 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 94 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone2B_EventScript_BuyBug_17
# 153 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_7, MSGBOX_DEFAULT
# 154 "data/maps/Zone2B/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone2B_EventScript_BuyBug_Text_8, Zone2B_EventScript_BuyBug_Text_9, Zone2B_EventScript_BuyBug_Text_10, Zone2B_EventScript_BuyBug_Text_11
# 155 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_28
# 158 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_29
# 160 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_30
# 162 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_31
Zone2B_EventScript_BuyBug_16:
# 166 "data/maps/Zone2B/scripts.pory"
	givemon VAR_TEMP_1, 5, ITEM_NONE
# 167 "data/maps/Zone2B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 251
# 168 "data/maps/Zone2B/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 169 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_12
# 170 "data/maps/Zone2B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/Zone2B/scripts.pory"
	message Zone2B_EventScript_BuyBug_Text_13
# 172 "data/maps/Zone2B/scripts.pory"
	waitmessage
# 173 "data/maps/Zone2B/scripts.pory"
	waitfanfare
# 174 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_14, MSGBOX_YESNO
# 175 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone2B_EventScript_BuyBug_21
Zone2B_EventScript_BuyBug_20:
# 179 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_15, MSGBOX_DEFAULT
Zone2B_EventScript_BuyBug_1:
# 183 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_2:
# 65 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_0
# 66 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_4:
# 64 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG, Zone2B_EventScript_BuyBug_2
	goto Zone2B_EventScript_BuyBug_3

Zone2B_EventScript_BuyBug_7:
# 72 "data/maps/Zone2B/scripts.pory"
	closemessage
# 73 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 74 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_2
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_10:
# 78 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_3
# 79 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
	goto Zone2B_EventScript_BuyBug_1

Zone2B_EventScript_BuyBug_14:
# 83 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_4
# 84 "data/maps/Zone2B/scripts.pory"
	hidemoneybox
# 85 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_17:
# 95 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, Zone2B_EventScript_BuyBug_24
# 98 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_3, 0
# 99 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_BLIPBUG
# 100 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_33
Zone2B_EventScript_BuyBug_32:
# 103 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_GRUBBIN
# 104 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_36
Zone2B_EventScript_BuyBug_35:
# 107 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 108 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_39
Zone2B_EventScript_BuyBug_38:
# 111 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 112 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_42
Zone2B_EventScript_BuyBug_41:
# 115 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_3, 4
	goto_if_eq Zone2B_EventScript_BuyBug_45
Zone2B_EventScript_BuyBug_47:
# 121 "data/maps/Zone2B/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Zone2B_EventScript_BuyBug_48
Zone2B_EventScript_BuyBug_23:
# 151 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_21:
# 176 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 177 "data/maps/Zone2B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone2B_EventScript_BuyBug_20

Zone2B_EventScript_BuyBug_24:
# 96 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BLIPBUG
	goto Zone2B_EventScript_BuyBug_23

Zone2B_EventScript_BuyBug_28:
# 157 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BLIPBUG
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_29:
# 159 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GRUBBIN
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_30:
# 161 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_31:
# 163 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_16

Zone2B_EventScript_BuyBug_33:
# 101 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_32

Zone2B_EventScript_BuyBug_36:
# 105 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_35

Zone2B_EventScript_BuyBug_39:
# 109 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_38

Zone2B_EventScript_BuyBug_42:
# 113 "data/maps/Zone2B/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Zone2B_EventScript_BuyBug_41

Zone2B_EventScript_BuyBug_45:
# 116 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_EventScript_BuyBug_Text_6
# 117 "data/maps/Zone2B/scripts.pory"
	addmoney 1000
# 118 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_BuyBug_48:
# 122 "data/maps/Zone2B/scripts.pory"
	random 4
# 123 "data/maps/Zone2B/scripts.pory"
	switch VAR_RESULT
# 124 "data/maps/Zone2B/scripts.pory"
	case 0, Zone2B_EventScript_BuyBug_51
# 130 "data/maps/Zone2B/scripts.pory"
	case 1, Zone2B_EventScript_BuyBug_52
# 136 "data/maps/Zone2B/scripts.pory"
	case 2, Zone2B_EventScript_BuyBug_53
# 142 "data/maps/Zone2B/scripts.pory"
	case 3, Zone2B_EventScript_BuyBug_54
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_51:
# 125 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_BLIPBUG
# 126 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_56
# 129 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BLIPBUG
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_52:
# 131 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_GRUBBIN
# 132 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_59
# 135 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_GRUBBIN
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_53:
# 137 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_SEWADDLE
# 138 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_62
# 141 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SEWADDLE
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_54:
# 143 "data/maps/Zone2B/scripts.pory"
	checkspeciesclause SPECIES_VENIPEDE
# 144 "data/maps/Zone2B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone2B_EventScript_BuyBug_65
# 147 "data/maps/Zone2B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENIPEDE
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_56:
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_59:
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_62:
	goto Zone2B_EventScript_BuyBug_47

Zone2B_EventScript_BuyBug_65:
	goto Zone2B_EventScript_BuyBug_47


Zone2B_EventScript_ItemPotion::
# 188 "data/maps/Zone2B/scripts.pory"
	lock
# 189 "data/maps/Zone2B/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2B_POTION_X2, Zone2B_EventScript_ItemPotion_2
# 194 "data/maps/Zone2B/scripts.pory"
	waitse
# 195 "data/maps/Zone2B/scripts.pory"
	removeobject VAR_LAST_TALKED
# 196 "data/maps/Zone2B/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 197 "data/maps/Zone2B/scripts.pory"
	setflag FLAG_ITEM_ZONE2B_POTION_X2
# 198 "data/maps/Zone2B/scripts.pory"
	addobject VAR_LAST_TALKED
# 199 "data/maps/Zone2B/scripts.pory"
	finditem ITEM_POTION, 2
# 200 "data/maps/Zone2B/scripts.pory"
	release
	end

Zone2B_EventScript_ItemPotion_2:
# 190 "data/maps/Zone2B/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 191 "data/maps/Zone2B/scripts.pory"
	release
	end


# 204 "data/maps/Zone2B/scripts.pory"

# 205 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Harper::
# 206 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_HARPER, Zone2B_Text_HarperIntro, Zone2B_Text_HarperDefeat
# 207 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_HarperPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Zone2B/scripts.pory"
	end
# 209 "data/maps/Zone2B/scripts.pory"

# 210 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperIntro:
# 211 "data/maps/Zone2B/scripts.pory"
	.string "Surprise! Battle time!$"
# 212 "data/maps/Zone2B/scripts.pory"

# 213 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperDefeat:
# 214 "data/maps/Zone2B/scripts.pory"
	.string "My spirit, crushed!$"
# 215 "data/maps/Zone2B/scripts.pory"

# 216 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_HarperPostBattle:
# 217 "data/maps/Zone2B/scripts.pory"
	.string "I don't know if I can ever\n"
# 218 "data/maps/Zone2B/scripts.pory"
	.string "come back from this loss…$"
# 219 "data/maps/Zone2B/scripts.pory"

# 220 "data/maps/Zone2B/scripts.pory"
Zone2B_EventScript_Arthur::
# 221 "data/maps/Zone2B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ARTHUR, Zone2B_Text_ArthurIntro, Zone2B_Text_ArthurDefeat
# 222 "data/maps/Zone2B/scripts.pory"
	msgbox Zone2B_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Zone2B/scripts.pory"
	end
# 224 "data/maps/Zone2B/scripts.pory"

# 225 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurIntro:
# 226 "data/maps/Zone2B/scripts.pory"
	.string "Hey, you! Get out of my way!$"
# 227 "data/maps/Zone2B/scripts.pory"

# 228 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurDefeat:
# 229 "data/maps/Zone2B/scripts.pory"
	.string "You're too strong!$"
# 230 "data/maps/Zone2B/scripts.pory"

# 231 "data/maps/Zone2B/scripts.pory"
Zone2B_Text_ArthurPostBattle:
# 232 "data/maps/Zone2B/scripts.pory"
	.string "Sorry about earlier.$"

Zone2B_EventScript_LeviathanBattle_Text_0:
# 15 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Do I have to have more Pokémon in\n"
	.string "order to battle better?\p"
	.string "No!\n"
	.string "I'm sticking with this one no matter\l"
	.string "what!$"

Zone2B_EventScript_LeviathanBattle_Text_1:
# 36 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Even after all that training,\n"
	.string "Rattata wasn't enough to get across\l"
	.string "the finish line.\p"
	.string "That's all right though;\p"
	.string "I enjoyed our battle so much, I want to\n"
	.string "give you this!$"

Zone2B_EventScript_BuyBug_Text_0:
# 65 "data/maps/Zone2B/scripts.pory"
	.string "Scram! I'm out of bugs for you to buy\n"
	.string "right now.\p"
	.string "Come back later.$"

Zone2B_EventScript_BuyBug_Text_1:
# 70 "data/maps/Zone2B/scripts.pory"
	.string "Oh! You look like a Bug-type\n"
	.string "enthusiast.\p"
	.string "Would you care to buy a Bug-type\n"
	.string "Pokemon?\p"
	.string "I've got Grubbin, Sewaddle, Venipede, or\n"
	.string "Blipbug for only ¥1000!$"

Zone2B_EventScript_BuyBug_Text_2:
# 74 "data/maps/Zone2B/scripts.pory"
	.string "Ugh. Fine.$"

Zone2B_EventScript_BuyBug_Text_3:
# 78 "data/maps/Zone2B/scripts.pory"
	.string "You don't have enough money.$"

Zone2B_EventScript_BuyBug_Text_4:
# 83 "data/maps/Zone2B/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone2B_EventScript_BuyBug_Text_5:
# 91 "data/maps/Zone2B/scripts.pory"
	.string "Ehehehe, thank you…$"

Zone2B_EventScript_BuyBug_Text_6:
# 116 "data/maps/Zone2B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in each of these\l"
	.string "evolution lines.$"

Zone2B_EventScript_BuyBug_Text_7:
# 153 "data/maps/Zone2B/scripts.pory"
	.string "Choose which Bug you would like.$"

Zone2B_EventScript_BuyBug_Text_8:
# 154 "data/maps/Zone2B/scripts.pory"
	.string "Blipbug$"

Zone2B_EventScript_BuyBug_Text_9:
# 154 "data/maps/Zone2B/scripts.pory"
	.string "Grubbin$"

Zone2B_EventScript_BuyBug_Text_10:
# 154 "data/maps/Zone2B/scripts.pory"
	.string "Sewaddle$"

Zone2B_EventScript_BuyBug_Text_11:
# 154 "data/maps/Zone2B/scripts.pory"
	.string "Venipede$"

Zone2B_EventScript_BuyBug_Text_12:
# 169 "data/maps/Zone2B/scripts.pory"
	.string "Here's your {STR_VAR_1}.$"

Zone2B_EventScript_BuyBug_Text_13:
# 171 "data/maps/Zone2B/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

Zone2B_EventScript_BuyBug_Text_14:
# 174 "data/maps/Zone2B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone2B_EventScript_BuyBug_Text_15:
# 179 "data/maps/Zone2B/scripts.pory"
	.string "Pleasure doing business with you.$"

Zone2B_Text_Leviathan2WantBattle::
# 45 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: My Rattata is in the top\n"
	.string "percentage of Rattata! Want to see?$"

Zone2B_Text_Leviathan2Intro::
# 49 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: All right then, let's battle!$"

Zone2B_Text_Leviathan2DenyBattle::
# 53 "data/maps/Zone2B/scripts.pory"
	.string "{COLOR BLUE}Joey{COLOR DARK_GRAY}: Oh, all right…$"

Zone2B_Text_Leviathan2Defeat::
# 57 "data/maps/Zone2B/scripts.pory"
	.string "Ack! I lost again!\p"
	.string "Doggone it!$"
