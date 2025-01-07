Zone4A_MapScripts::
# 2 "data/maps/Zone4A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_RANDOM_1, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4A_EventScript_PoisonTree::
# 17 "data/maps/Zone4A/scripts.pory"
	lock
# 18 "data/maps/Zone4A/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 19 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_0, MSGBOX_YESNO
# 20 "data/maps/Zone4A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone4A_EventScript_PoisonTree_2
# 24 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_2
Zone4A_EventScript_PoisonTree_1:
# 26 "data/maps/Zone4A/scripts.pory"
	release
	return

Zone4A_EventScript_PoisonTree_2:
# 21 "data/maps/Zone4A/scripts.pory"
	trysetstatus STATUS1_POISON, 0
# 22 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_PoisonTree_Text_1
	goto Zone4A_EventScript_PoisonTree_1


Zone4A_EventScript_ItemRandom1::
# 122 "data/maps/Zone4A/scripts.pory"
	lock
# 123 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_RANDOM_1, Zone4A_EventScript_ItemRandom1_2
# 128 "data/maps/Zone4A/scripts.pory"
	waitse
# 129 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 130 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 131 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_RANDOM_1
# 132 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 133 "data/maps/Zone4A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 134 "data/maps/Zone4A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 135 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemRandom1_2:
# 124 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 125 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_ItemSilverPowder::
# 140 "data/maps/Zone4A/scripts.pory"
	lock
# 141 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_EventScript_ItemSilverPowder_2
# 146 "data/maps/Zone4A/scripts.pory"
	waitse
# 147 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 148 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 149 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_SILVER_POWDER
# 150 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 151 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_SILVER_POWDER, 1
# 152 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemSilverPowder_2:
# 142 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 143 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_Sign::
# 157 "data/maps/Zone4A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 158 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


# 162 "data/maps/Zone4A/scripts.pory"

# 163 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Herman::
# 164 "data/maps/Zone4A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
# 165 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Zone4A/scripts.pory"
	end
# 167 "data/maps/Zone4A/scripts.pory"

# 168 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanIntro:
# 169 "data/maps/Zone4A/scripts.pory"
	.string "I keep going through this exit,\n"
# 170 "data/maps/Zone4A/scripts.pory"
	.string "'cause it might lead somewhere!$"
# 171 "data/maps/Zone4A/scripts.pory"

# 172 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanDefeat:
# 173 "data/maps/Zone4A/scripts.pory"
	.string "But I keep getting back here!$"
# 174 "data/maps/Zone4A/scripts.pory"

# 175 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanPostBattle:
# 176 "data/maps/Zone4A/scripts.pory"
	.string "Try something else?\n"
# 177 "data/maps/Zone4A/scripts.pory"
	.string "No, I'm sure this is the right way!$"

Zone4A_EventScript_PoisonTree_Text_0:
# 19 "data/maps/Zone4A/scripts.pory"
	.string "This strange looking tree has\n"
	.string "potentially dangerous looking sap\l"
	.string "flowing out of it.\p"
	.string "Do you want to have your\n"
	.string "{STR_VAR_1} touch it?$"

Zone4A_EventScript_PoisonTree_Text_1:
# 22 "data/maps/Zone4A/scripts.pory"
	.string "Your {STR_VAR_1} touched the\n"
	.string "strange sap and was exposed to the\l"
	.string "poison!$"

Zone4A_EventScript_PoisonTree_Text_2:
# 24 "data/maps/Zone4A/scripts.pory"
	.string "Better to be safe than sorry.$"

Zone4A_EventScript_Sign_Text_0:
# 158 "data/maps/Zone4A/scripts.pory"
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"
