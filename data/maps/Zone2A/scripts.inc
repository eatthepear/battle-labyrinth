Zone2A_MapScripts::
# 2 "data/maps/Zone2A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2A_ANTIDOTE, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2A_EventScript_ItemAntidote::
# 12 "data/maps/Zone2A/scripts.pory"
	lock
# 13 "data/maps/Zone2A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2A_ANTIDOTE, Zone2A_EventScript_ItemAntidote_2
# 18 "data/maps/Zone2A/scripts.pory"
	waitse
# 19 "data/maps/Zone2A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 21 "data/maps/Zone2A/scripts.pory"
	setflag FLAG_ITEM_ZONE2A_ANTIDOTE
# 22 "data/maps/Zone2A/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/Zone2A/scripts.pory"
	finditem ITEM_ANTIDOTE, 1
# 24 "data/maps/Zone2A/scripts.pory"
	release
	end

Zone2A_EventScript_ItemAntidote_2:
# 14 "data/maps/Zone2A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/Zone2A/scripts.pory"
	release
	end


Zone2A_EventScript_CautionSign::
# 29 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_ExpShareSign::
# 34 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_ExpShareSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_Polly::
# 39 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_POLLY, Zone2A_EventScript_Polly_Text_0, Zone2A_EventScript_Polly_Text_1
# 40 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_Polly_Text_2, MSGBOX_AUTOCLOSE
	end


# 44 "data/maps/Zone2A/scripts.pory"

# 45 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Jeremiah::
# 46 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
# 47 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Zone2A/scripts.pory"
	end
# 49 "data/maps/Zone2A/scripts.pory"

# 50 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahIntro:
# 51 "data/maps/Zone2A/scripts.pory"
	.string "The more legs, the better!$"
# 52 "data/maps/Zone2A/scripts.pory"

# 53 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahDefeat:
# 54 "data/maps/Zone2A/scripts.pory"
	.string "Oh… Come on!$"
# 55 "data/maps/Zone2A/scripts.pory"

# 56 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahPostBattle:
# 57 "data/maps/Zone2A/scripts.pory"
	.string "Just wait till my Bugs are all evolved!$"
# 58 "data/maps/Zone2A/scripts.pory"

# 59 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Sign::
# 60 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_Sign, MSGBOX_SIGN
# 61 "data/maps/Zone2A/scripts.pory"
	end
# 62 "data/maps/Zone2A/scripts.pory"

# 63 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_Sign:
# 64 "data/maps/Zone2A/scripts.pory"
	.string "Trainer Tips\p"
# 65 "data/maps/Zone2A/scripts.pory"
	.string "You may find hidden items by\n"
# 66 "data/maps/Zone2A/scripts.pory"
	.string "checking certain tiles with {A_BUTTON}.\p"
# 67 "data/maps/Zone2A/scripts.pory"
	.string "However, you won't find any hidden\n"
# 68 "data/maps/Zone2A/scripts.pory"
	.string "items on Brutal difficulty.$"

Zone2A_EventScript_CautionSign_Text_0:
# 29 "data/maps/Zone2A/scripts.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2A_EventScript_ExpShareSign_Text_0:
# 34 "data/maps/Zone2A/scripts.pory"
	.string "Trainer Tips\p"
	.string "The Exp. All only gives Pokémon who\n"
	.string "didn't participate in battle 25%\l"
	.string "experience.\p"
	.string "If you want to train up a particular\n"
	.string "Pokémon, you can give them the held\l"
	.string "item Exp. Share so they get full\l"
	.string "experience!$"

Zone2A_EventScript_Polly_Text_0:
# 39 "data/maps/Zone2A/scripts.pory"
	.string "I've heard there's a tunnel nearby with\n"
	.string "some cool Pokémon living in it!$"

Zone2A_EventScript_Polly_Text_1:
# 39 "data/maps/Zone2A/scripts.pory"
	.string "At this rate, I'll never find it!$"

Zone2A_EventScript_Polly_Text_2:
# 40 "data/maps/Zone2A/scripts.pory"
	.string "I'm sure it's here somewhere…$"
