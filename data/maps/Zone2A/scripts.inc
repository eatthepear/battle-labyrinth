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


Zone2A_EventScript_Polly::
# 30 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_POLLY, Zone2A_EventScript_Polly_Text_0, Zone2A_EventScript_Polly_Text_1
# 31 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_EventScript_Polly_Text_2, MSGBOX_AUTOCLOSE
	end


# 35 "data/maps/Zone2A/scripts.pory"

# 36 "data/maps/Zone2A/scripts.pory"
Zone2A_EventScript_Jeremiah::
# 37 "data/maps/Zone2A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEREMIAH, Zone2A_Text_JeremiahIntro, Zone2A_Text_JeremiahDefeat
# 38 "data/maps/Zone2A/scripts.pory"
	msgbox Zone2A_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Zone2A/scripts.pory"
	end
# 40 "data/maps/Zone2A/scripts.pory"

# 41 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahIntro:
# 42 "data/maps/Zone2A/scripts.pory"
	.string "The more legs, the better!$"
# 43 "data/maps/Zone2A/scripts.pory"

# 44 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahDefeat:
# 45 "data/maps/Zone2A/scripts.pory"
	.string "Oh… Come on!$"
# 46 "data/maps/Zone2A/scripts.pory"

# 47 "data/maps/Zone2A/scripts.pory"
Zone2A_Text_JeremiahPostBattle:
# 48 "data/maps/Zone2A/scripts.pory"
	.string "Just wait till my Bugs are all evolved!$"

Zone2A_EventScript_Polly_Text_0:
# 30 "data/maps/Zone2A/scripts.pory"
	.string "I've heard there's a tunnel nearby with\n"
	.string "some cool Pokémon living in it!$"

Zone2A_EventScript_Polly_Text_1:
# 30 "data/maps/Zone2A/scripts.pory"
	.string "At this rate, I'll never find it!$"

Zone2A_EventScript_Polly_Text_2:
# 31 "data/maps/Zone2A/scripts.pory"
	.string "I'm sure it's here somewhere…$"
