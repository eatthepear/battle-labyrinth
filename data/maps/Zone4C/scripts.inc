Zone4C_MapScripts::
# 2 "data/maps/Zone4C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_MUSCLE_BAND, Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4C_EventScript_ItemMuscleBand::
# 12 "data/maps/Zone4C/scripts.pory"
	lock
# 13 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_MUSCLE_BAND, Zone4C_EventScript_ItemMuscleBand_2
# 18 "data/maps/Zone4C/scripts.pory"
	waitse
# 19 "data/maps/Zone4C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 21 "data/maps/Zone4C/scripts.pory"
	setflag FLAG_ITEM_ZONE4C_MUSCLE_BAND
# 22 "data/maps/Zone4C/scripts.pory"
	addobject VAR_LAST_TALKED
# 23 "data/maps/Zone4C/scripts.pory"
	finditem ITEM_MUSCLE_BAND, 1
# 24 "data/maps/Zone4C/scripts.pory"
	release
	end

Zone4C_EventScript_ItemMuscleBand_2:
# 14 "data/maps/Zone4C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 15 "data/maps/Zone4C/scripts.pory"
	release
	end


# 28 "data/maps/Zone4C/scripts.pory"

# 29 "data/maps/Zone4C/scripts.pory"
Zone4C_EventScript_Santiago::
# 30 "data/maps/Zone4C/scripts.pory"
	trainerbattle_single TRAINER_PBL_SANTIAGO, Zone4C_Text_SantiagoIntro, Zone4C_Text_SantiagoDefeat
# 31 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Zone4C/scripts.pory"
	end
# 33 "data/maps/Zone4C/scripts.pory"

# 34 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoIntro:
# 35 "data/maps/Zone4C/scripts.pory"
	.string "I've collected rare Bug Pokémon!\n"
# 36 "data/maps/Zone4C/scripts.pory"
	.string "Here, let me show you!$"
# 37 "data/maps/Zone4C/scripts.pory"

# 38 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoDefeat:
# 39 "data/maps/Zone4C/scripts.pory"
	.string "Why are they so weak, though?$"
# 40 "data/maps/Zone4C/scripts.pory"

# 41 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoPostBattle:
# 42 "data/maps/Zone4C/scripts.pory"
	.string "I'll just work on evolving them.\n"
# 43 "data/maps/Zone4C/scripts.pory"
	.string "Then I can finally win!$"
# 44 "data/maps/Zone4C/scripts.pory"

# 45 "data/maps/Zone4C/scripts.pory"
Zone4C_EventScript_ChloeandKaya::
# 46 "data/maps/Zone4C/scripts.pory"
	trainerbattle_double TRAINER_PBL_CHLOE_AND_KAYA, Zone4C_Text_ChloeandKayaIntro, Zone4C_Text_ChloeandKayaDefeat, gText_NotEnoughMons
# 47 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_Text_ChloeandKayaPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Zone4C/scripts.pory"
	release
# 49 "data/maps/Zone4C/scripts.pory"
	end
# 50 "data/maps/Zone4C/scripts.pory"

# 51 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaIntro:
# 52 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Twin power!\p"
# 53 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Activate!$"
# 54 "data/maps/Zone4C/scripts.pory"

# 55 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaDefeat:
# 56 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Twin power!\p"
# 57 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Defeated!$"
# 58 "data/maps/Zone4C/scripts.pory"

# 59 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaPostBattle:
# 60 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Twin power!\p"
# 61 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Twin power!$"
# 62 "data/maps/Zone4C/scripts.pory"

# 63 "data/maps/Zone4C/scripts.pory"
Zone4C_EventScript_Sign::
# 64 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_Text_Sign, MSGBOX_SIGN
# 65 "data/maps/Zone4C/scripts.pory"
	end
# 66 "data/maps/Zone4C/scripts.pory"

# 67 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_Sign:
# 68 "data/maps/Zone4C/scripts.pory"
	.string "Trainer Tips!\p"
# 69 "data/maps/Zone4C/scripts.pory"
	.string "There is a 20% chance to encounter\n"
# 70 "data/maps/Zone4C/scripts.pory"
	.string "wild Pokémon in a Double Battle.$"
