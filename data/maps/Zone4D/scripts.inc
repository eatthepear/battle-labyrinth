Zone4D_MapScripts::
# 2 "data/maps/Zone4D/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4D/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4D_WISE_GLASSES, Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4D/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4D_TM_HIDDEN_POWER, Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
	return

Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4D_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone4D_EventScript_WiseGlasses::
# 17 "data/maps/Zone4D/scripts.pory"
	lock
# 18 "data/maps/Zone4D/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4D_WISE_GLASSES, Zone4D_EventScript_WiseGlasses_2
# 23 "data/maps/Zone4D/scripts.pory"
	waitse
# 24 "data/maps/Zone4D/scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 26 "data/maps/Zone4D/scripts.pory"
	setflag FLAG_ITEM_ZONE4D_WISE_GLASSES
# 27 "data/maps/Zone4D/scripts.pory"
	addobject VAR_LAST_TALKED
# 28 "data/maps/Zone4D/scripts.pory"
	finditem ITEM_WISE_GLASSES, 1
# 29 "data/maps/Zone4D/scripts.pory"
	release
	end

Zone4D_EventScript_WiseGlasses_2:
# 19 "data/maps/Zone4D/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 20 "data/maps/Zone4D/scripts.pory"
	release
	end


Zone4D_EventScript_TMHiddenPower::
# 34 "data/maps/Zone4D/scripts.pory"
	lock
# 35 "data/maps/Zone4D/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4D_TM_HIDDEN_POWER, Zone4D_EventScript_TMHiddenPower_2
# 40 "data/maps/Zone4D/scripts.pory"
	waitse
# 41 "data/maps/Zone4D/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/Zone4D/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 43 "data/maps/Zone4D/scripts.pory"
	setflag FLAG_ITEM_ZONE4D_TM_HIDDEN_POWER
# 44 "data/maps/Zone4D/scripts.pory"
	addobject VAR_LAST_TALKED
# 45 "data/maps/Zone4D/scripts.pory"
	finditem ITEM_TM_HIDDEN_POWER
# 46 "data/maps/Zone4D/scripts.pory"
	release
	end

Zone4D_EventScript_TMHiddenPower_2:
# 36 "data/maps/Zone4D/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 37 "data/maps/Zone4D/scripts.pory"
	release
	end


# 50 "data/maps/Zone4D/scripts.pory"

# 51 "data/maps/Zone4D/scripts.pory"

# 52 "data/maps/Zone4D/scripts.pory"
Zone4D_EventScript_Lucia::
# 53 "data/maps/Zone4D/scripts.pory"
	trainerbattle_single TRAINER_PBL_LUCIA, Zone4D_Text_LuciaIntro, Zone4D_Text_LuciaDefeat
# 54 "data/maps/Zone4D/scripts.pory"
	msgbox Zone4D_Text_LuciaPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Zone4D/scripts.pory"
	end
# 56 "data/maps/Zone4D/scripts.pory"

# 57 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_LuciaIntro:
# 58 "data/maps/Zone4D/scripts.pory"
	.string "I think the exit is near here…$"
# 59 "data/maps/Zone4D/scripts.pory"

# 60 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_LuciaDefeat:
# 61 "data/maps/Zone4D/scripts.pory"
	.string "Oh?$"
# 62 "data/maps/Zone4D/scripts.pory"

# 63 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_LuciaPostBattle:
# 64 "data/maps/Zone4D/scripts.pory"
	.string "I think I see the exit!$"
# 65 "data/maps/Zone4D/scripts.pory"

# 66 "data/maps/Zone4D/scripts.pory"
Zone4D_EventScript_Fred::
# 67 "data/maps/Zone4D/scripts.pory"
	trainerbattle_single TRAINER_PBL_FRED, Zone4D_Text_FredIntro, Zone4D_Text_FredDefeat
# 68 "data/maps/Zone4D/scripts.pory"
	msgbox Zone4D_Text_FredPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Zone4D/scripts.pory"
	end
# 70 "data/maps/Zone4D/scripts.pory"

# 71 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_FredIntro:
# 72 "data/maps/Zone4D/scripts.pory"
	.string "The most important character\n"
# 73 "data/maps/Zone4D/scripts.pory"
	.string "trait someone can have is to\l"
# 74 "data/maps/Zone4D/scripts.pory"
	.string "have perseverance.$"
# 75 "data/maps/Zone4D/scripts.pory"

# 76 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_FredDefeat:
# 77 "data/maps/Zone4D/scripts.pory"
	.string "I can make it through anything!$"
# 78 "data/maps/Zone4D/scripts.pory"

# 79 "data/maps/Zone4D/scripts.pory"
Zone4D_Text_FredPostBattle:
# 80 "data/maps/Zone4D/scripts.pory"
	.string "Just keep swimming,\n"
# 81 "data/maps/Zone4D/scripts.pory"
	.string "just keep swimming.$"
