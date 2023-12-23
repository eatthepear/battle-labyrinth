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


# 28 "data/maps/Zone2A/scripts.pory"

# 29 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Polly::
# 30 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_POLLY, Zone2A_Text_PollyIntro, Zone2A_Text_PollyDefeat
# 31 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_PollyPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Zone2A/scripts.pory"
	end
# 33 "data/maps/Zone2A/scripts.pory"

# 34 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_PollyIntro:
# 35 "data/maps/Zone2A/scripts.pory"
	.string "Don't you just love magic?$"
# 36 "data/maps/Zone2A/scripts.pory"

# 37 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_PollyDefeat:
# 38 "data/maps/Zone2A/scripts.pory"
	.string "Absolutely magical!$"
# 39 "data/maps/Zone2A/scripts.pory"

# 40 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_PollyPostBattle:
# 41 "data/maps/Zone2A/scripts.pory"
	.string "I'm glad I live in as magical a\n"
# 42 "data/maps/Zone2A/scripts.pory"
	.string "world as this one!$"
# 43 "data/maps/Zone2A/scripts.pory"

# 44 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Jeremiah::
# 45 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
# 46 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Zone2A/scripts.pory"
	end
# 48 "data/maps/Zone2A/scripts.pory"

# 49 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahIntro:
# 50 "data/maps/Zone2A/scripts.pory"
	.string "The more legs, the better!$"
# 51 "data/maps/Zone2A/scripts.pory"

# 52 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahDefeat:
# 53 "data/maps/Zone2A/scripts.pory"
	.string "Oh… Come on!$"
# 54 "data/maps/Zone2A/scripts.pory"

# 55 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahPostBattle:
# 56 "data/maps/Zone2A/scripts.pory"
	.string "Just wait till my Bugs are all evolved!$"
# 57 "data/maps/Zone2A/scripts.pory"

# 58 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Sign::
# 59 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_Sign, MSGBOX_SIGN
# 60 "data/maps/Zone2A/scripts.pory"
	end
# 61 "data/maps/Zone2A/scripts.pory"

# 62 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_Sign:
# 63 "data/maps/Zone2A/scripts.pory"
	.string "Trainer Tips!\p"
# 64 "data/maps/Zone2A/scripts.pory"
	.string "You may find hidden items by\n"
# 65 "data/maps/Zone2A/scripts.pory"
	.string "checking certain tiles with {A_BUTTON}.\p"
# 66 "data/maps/Zone2A/scripts.pory"
	.string "However, you won't find many hidden\n"
# 67 "data/maps/Zone2A/scripts.pory"
	.string "items on Brutal difficulty.$"
