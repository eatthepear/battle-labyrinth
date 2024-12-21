Zone4C_MapScripts::
# 2 "data/maps/Zone4C/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_MUSCLE_BAND, Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_TWISTED_SPOON, Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4C_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4C_EventScript_ItemMuscleBand::
# 17 "data/maps/Zone4C/scripts.pory"
	lock
# 18 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_MUSCLE_BAND, Zone4C_EventScript_ItemMuscleBand_2
# 23 "data/maps/Zone4C/scripts.pory"
	waitse
# 24 "data/maps/Zone4C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 26 "data/maps/Zone4C/scripts.pory"
	setflag FLAG_ITEM_ZONE4C_MUSCLE_BAND
# 27 "data/maps/Zone4C/scripts.pory"
	addobject VAR_LAST_TALKED
# 28 "data/maps/Zone4C/scripts.pory"
	finditem ITEM_MUSCLE_BAND, 1
# 29 "data/maps/Zone4C/scripts.pory"
	release
	end

Zone4C_EventScript_ItemMuscleBand_2:
# 19 "data/maps/Zone4C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 20 "data/maps/Zone4C/scripts.pory"
	release
	end


Zone4C_EventScript_ItemTwistedSpoon::
# 34 "data/maps/Zone4C/scripts.pory"
	lock
# 35 "data/maps/Zone4C/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4C_TWISTED_SPOON, Zone4C_EventScript_ItemTwistedSpoon_2
# 40 "data/maps/Zone4C/scripts.pory"
	waitse
# 41 "data/maps/Zone4C/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/Zone4C/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 43 "data/maps/Zone4C/scripts.pory"
	setflag FLAG_ITEM_ZONE4C_TWISTED_SPOON
# 44 "data/maps/Zone4C/scripts.pory"
	addobject VAR_LAST_TALKED
# 45 "data/maps/Zone4C/scripts.pory"
	finditem ITEM_TWISTED_SPOON, 1
# 46 "data/maps/Zone4C/scripts.pory"
	release
	end

Zone4C_EventScript_ItemTwistedSpoon_2:
# 36 "data/maps/Zone4C/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 37 "data/maps/Zone4C/scripts.pory"
	release
	end


Zone4C_EventScript_Sign::
# 51 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


# 55 "data/maps/Zone4C/scripts.pory"

# 56 "data/maps/Zone4C/scripts.pory"
Zone4C_EventScript_Santiago::
# 57 "data/maps/Zone4C/scripts.pory"
	trainerbattle_single TRAINER_PBL_SANTIAGO, Zone4C_Text_SantiagoIntro, Zone4C_Text_SantiagoDefeat
# 58 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Zone4C/scripts.pory"
	end
# 60 "data/maps/Zone4C/scripts.pory"

# 61 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoIntro:
# 62 "data/maps/Zone4C/scripts.pory"
	.string "I've collected rare Bug Pokémon!\n"
# 63 "data/maps/Zone4C/scripts.pory"
	.string "Here, let me show you!$"
# 64 "data/maps/Zone4C/scripts.pory"

# 65 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoDefeat:
# 66 "data/maps/Zone4C/scripts.pory"
	.string "Why are they so weak, though?$"
# 67 "data/maps/Zone4C/scripts.pory"

# 68 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_SantiagoPostBattle:
# 69 "data/maps/Zone4C/scripts.pory"
	.string "I'll just work on evolving them.\n"
# 70 "data/maps/Zone4C/scripts.pory"
	.string "Then I can finally win!$"
# 71 "data/maps/Zone4C/scripts.pory"

# 72 "data/maps/Zone4C/scripts.pory"
Zone4C_EventScript_ChloeandKaya::
# 73 "data/maps/Zone4C/scripts.pory"
	trainerbattle_double TRAINER_PBL_CHLOE_AND_KAYA, Zone4C_Text_ChloeandKayaIntro, Zone4C_Text_ChloeandKayaDefeat, gText_NotEnoughMons
# 74 "data/maps/Zone4C/scripts.pory"
	msgbox Zone4C_Text_ChloeandKayaPostBattle, MSGBOX_DEFAULT
# 75 "data/maps/Zone4C/scripts.pory"
	release
# 76 "data/maps/Zone4C/scripts.pory"
	end
# 77 "data/maps/Zone4C/scripts.pory"

# 78 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaIntro:
# 79 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Twin power!\p"
# 80 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Activate!$"
# 81 "data/maps/Zone4C/scripts.pory"

# 82 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaDefeat:
# 83 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Twin power!\p"
# 84 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Defeated!$"
# 85 "data/maps/Zone4C/scripts.pory"

# 86 "data/maps/Zone4C/scripts.pory"
Zone4C_Text_ChloeandKayaPostBattle:
# 87 "data/maps/Zone4C/scripts.pory"
	.string "Chloe: Twin power!\p"
# 88 "data/maps/Zone4C/scripts.pory"
	.string "Kaya: Twin power!$"

Zone4C_EventScript_Sign_Text_0:
# 51 "data/maps/Zone4C/scripts.pory"
	.string "Trainer Tips\p"
	.string "Starting from now, there is a 20%\n"
	.string "chance to encounter wild Pokémon in a\l"
	.string "Double Battle.$"
