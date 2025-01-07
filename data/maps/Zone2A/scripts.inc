Zone2A_MapScripts::
# 2 "data/maps/Zone2A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone2A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2A_RANDOM_1, Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone2A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone2A_EventScript_ItemRandom1::
# 12 "data/maps/Zone2A/scripts.pory"
	lock
# 13 "data/maps/Zone2A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE2A_RANDOM_1, Zone2A_EventScript_ItemRandom1_2
# 18 "data/maps/Zone2A/scripts.pory"
	waitse
# 19 "data/maps/Zone2A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Zone2A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 21 "data/maps/Zone2A/scripts.pory"
	setflag FLAG_ITEM_ZONE2A_RANDOM_1
# 22 "data/maps/Zone2A/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/Zone2A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 24 "data/maps/Zone2A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 25 "data/maps/Zone2A/scripts.pory"
	release
	end

Zone2A_EventScript_ItemRandom1_2:
# 14 "data/maps/Zone2A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/Zone2A/scripts.pory"
	release
	end


Zone2A_EventScript_Sign::
# 29 "data/maps/Zone2A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 30 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_ExpShareSign::
# 35 "data/maps/Zone2A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 36 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_ExpShareSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_CautionSign::
# 41 "data/maps/Zone2A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 42 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_Polly::
# 47 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_POLLY, Zone2A_EventScript_Polly_Text_0, Zone2A_EventScript_Polly_Text_1
# 48 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_Polly_Text_2, MSGBOX_AUTOCLOSE
	end


# 52 "data/maps/Zone2A/scripts.pory"

# 53 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Jeremiah::
# 54 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
# 55 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Zone2A/scripts.pory"
	end
# 57 "data/maps/Zone2A/scripts.pory"

# 58 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahIntro:
# 59 "data/maps/Zone2A/scripts.pory"
	.string "The more legs, the better!$"
# 60 "data/maps/Zone2A/scripts.pory"

# 61 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahDefeat:
# 62 "data/maps/Zone2A/scripts.pory"
	.string "Oh… Come on!$"
# 63 "data/maps/Zone2A/scripts.pory"

# 64 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahPostBattle:
# 65 "data/maps/Zone2A/scripts.pory"
	.string "Just wait till my Bugs are all evolved!$"

Zone2A_EventScript_Sign_Text_0:
# 30 "data/maps/Zone2A/scripts.pory"
	.string "Trainer Tips\p"
	.string "You may find hidden items by checking\n"
	.string "certain tiles with {A_BUTTON}.\p"
	.string "However, you won't find any hidden\n"
	.string "items on Brutal or Independent.$"

Zone2A_EventScript_ExpShareSign_Text_0:
# 36 "data/maps/Zone2A/scripts.pory"
	.string "Trainer Tips\p"
	.string "The Exp. All only gives Pokémon who\n"
	.string "didn't participate in battle 25%\l"
	.string "experience.\p"
	.string "If you want to train up a particular\n"
	.string "Pokémon, you can give them the held\l"
	.string "item Exp. Share so they get full\l"
	.string "experience!$"

Zone2A_EventScript_CautionSign_Text_0:
# 42 "data/maps/Zone2A/scripts.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2A_EventScript_Polly_Text_0:
# 47 "data/maps/Zone2A/scripts.pory"
	.string "I've heard there's a tunnel nearby with\n"
	.string "some cool Pokémon living in it!$"

Zone2A_EventScript_Polly_Text_1:
# 47 "data/maps/Zone2A/scripts.pory"
	.string "At this rate, I'll never find it!$"

Zone2A_EventScript_Polly_Text_2:
# 48 "data/maps/Zone2A/scripts.pory"
	.string "I'm sure it's here somewhere…$"
