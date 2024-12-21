Zone4A_MapScripts::
# 2 "data/maps/Zone4A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_MapScripts_MAP_SCRIPT_ON_RESUME_2
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


Zone4A_EventScript_ItemBurnHeal::
# 122 "data/maps/Zone4A/scripts.pory"
	lock
# 123 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_BURN_HEAL, Zone4A_EventScript_ItemBurnHeal_2
# 128 "data/maps/Zone4A/scripts.pory"
	waitse
# 129 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 130 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 131 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_BURN_HEAL
# 132 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 133 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_BURN_HEAL, 1
# 134 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemBurnHeal_2:
# 124 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 125 "data/maps/Zone4A/scripts.pory"
	release
	end


Zone4A_EventScript_ItemSilverPowder::
# 139 "data/maps/Zone4A/scripts.pory"
	lock
# 140 "data/maps/Zone4A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4A_SILVER_POWDER, Zone4A_EventScript_ItemSilverPowder_2
# 145 "data/maps/Zone4A/scripts.pory"
	waitse
# 146 "data/maps/Zone4A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 147 "data/maps/Zone4A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 148 "data/maps/Zone4A/scripts.pory"
	setflag FLAG_ITEM_ZONE4A_SILVER_POWDER
# 149 "data/maps/Zone4A/scripts.pory"
	addobject VAR_LAST_TALKED
# 150 "data/maps/Zone4A/scripts.pory"
	finditem ITEM_SILVER_POWDER, 1
# 151 "data/maps/Zone4A/scripts.pory"
	release
	end

Zone4A_EventScript_ItemSilverPowder_2:
# 141 "data/maps/Zone4A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 142 "data/maps/Zone4A/scripts.pory"
	release
	end


# 155 "data/maps/Zone4A/scripts.pory"

# 156 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Sign::
# 157 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_Sign, MSGBOX_SIGN
# 158 "data/maps/Zone4A/scripts.pory"
	end
# 159 "data/maps/Zone4A/scripts.pory"

# 160 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_Sign:
# 161 "data/maps/Zone4A/scripts.pory"
	.string "These woods are enchanted…\n"
# 162 "data/maps/Zone4A/scripts.pory"
	.string "Don't get lost!$"
# 163 "data/maps/Zone4A/scripts.pory"

# 164 "data/maps/Zone4A/scripts.pory"
Zone4A_EventScript_Herman::
# 165 "data/maps/Zone4A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HERMAN, Zone4A_Text_HermanIntro, Zone4A_Text_HermanDefeat
# 166 "data/maps/Zone4A/scripts.pory"
	msgbox Zone4A_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Zone4A/scripts.pory"
	end
# 168 "data/maps/Zone4A/scripts.pory"

# 169 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanIntro:
# 170 "data/maps/Zone4A/scripts.pory"
	.string "I keep going through this exit,\n"
# 171 "data/maps/Zone4A/scripts.pory"
	.string "'cause it might lead somewhere!$"
# 172 "data/maps/Zone4A/scripts.pory"

# 173 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanDefeat:
# 174 "data/maps/Zone4A/scripts.pory"
	.string "But I keep getting back here!$"
# 175 "data/maps/Zone4A/scripts.pory"

# 176 "data/maps/Zone4A/scripts.pory"
Zone4A_Text_HermanPostBattle:
# 177 "data/maps/Zone4A/scripts.pory"
	.string "Try something else?\n"
# 178 "data/maps/Zone4A/scripts.pory"
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
