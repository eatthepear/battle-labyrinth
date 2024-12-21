Zone14A_MapScripts::
# 2 "data/maps/Zone14A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone14A_MapScripts_MAP_SCRIPT_ON_RESUME
# 9 "data/maps/Zone14A/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone14A_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Zone14A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone14A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14A_FULL_HEAL, Zone14A_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/Zone14A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone14A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/Zone14A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return

Zone14A_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Zone14A/scripts.pory"
	setflashlevel 4
	return


Zone14A_EventScript_FullHeal::
# 15 "data/maps/Zone14A/scripts.pory"
	lock
# 16 "data/maps/Zone14A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE14A_FULL_HEAL, Zone14A_EventScript_FullHeal_2
# 21 "data/maps/Zone14A/scripts.pory"
	waitse
# 22 "data/maps/Zone14A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/maps/Zone14A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 24 "data/maps/Zone14A/scripts.pory"
	setflag FLAG_ITEM_ZONE14A_FULL_HEAL
# 25 "data/maps/Zone14A/scripts.pory"
	addobject VAR_LAST_TALKED
# 26 "data/maps/Zone14A/scripts.pory"
	finditem ITEM_FULL_HEAL, 1
# 27 "data/maps/Zone14A/scripts.pory"
	release
	end

Zone14A_EventScript_FullHeal_2:
# 17 "data/maps/Zone14A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 18 "data/maps/Zone14A/scripts.pory"
	release
	end


# 31 "data/maps/Zone14A/scripts.pory"

# 32 "data/maps/Zone14A/scripts.pory"
Zone14A_EventScript_Bart::
# 33 "data/maps/Zone14A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BART, Zone14A_Text_BartIntro, Zone14A_Text_BartDefeat
# 34 "data/maps/Zone14A/scripts.pory"
	msgbox Zone14A_Text_BartPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Zone14A/scripts.pory"
	end
# 36 "data/maps/Zone14A/scripts.pory"

# 37 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_BartIntro:
# 38 "data/maps/Zone14A/scripts.pory"
	.string "I sympathize with the plight of\n"
# 39 "data/maps/Zone14A/scripts.pory"
	.string "the working class, but I simply\l"
# 40 "data/maps/Zone14A/scripts.pory"
	.string "benefit too much from inequality!$"
# 41 "data/maps/Zone14A/scripts.pory"

# 42 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_BartDefeat:
# 43 "data/maps/Zone14A/scripts.pory"
	.string "Mama! Some poor person beat me!$"
# 44 "data/maps/Zone14A/scripts.pory"

# 45 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_BartPostBattle:
# 46 "data/maps/Zone14A/scripts.pory"
	.string "I already gave you money, ok?\n"
# 47 "data/maps/Zone14A/scripts.pory"
	.string "Just scram or something.$"
# 48 "data/maps/Zone14A/scripts.pory"

# 49 "data/maps/Zone14A/scripts.pory"
Zone14A_EventScript_Nigel::
# 50 "data/maps/Zone14A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NIGEL, Zone14A_Text_NigelIntro, Zone14A_Text_NigelDefeat
# 51 "data/maps/Zone14A/scripts.pory"
	msgbox Zone14A_Text_NigelPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Zone14A/scripts.pory"
	end
# 53 "data/maps/Zone14A/scripts.pory"

# 54 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_NigelIntro:
# 55 "data/maps/Zone14A/scripts.pory"
	.string "SNEAK ATTACK!$"
# 56 "data/maps/Zone14A/scripts.pory"

# 57 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_NigelDefeat:
# 58 "data/maps/Zone14A/scripts.pory"
	.string "SNEAK ATTACK BAMBOOZLED!$"
# 59 "data/maps/Zone14A/scripts.pory"

# 60 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_NigelPostBattle:
# 61 "data/maps/Zone14A/scripts.pory"
	.string "Turns out yelling sneak attack\n"
# 62 "data/maps/Zone14A/scripts.pory"
	.string "makes it, well, not a sneak attack!$"
# 63 "data/maps/Zone14A/scripts.pory"

# 64 "data/maps/Zone14A/scripts.pory"
Zone14A_EventScript_Lola::
# 65 "data/maps/Zone14A/scripts.pory"
	trainerbattle_single TRAINER_PBL_LOLA, Zone14A_Text_LolaIntro, Zone14A_Text_LolaDefeat
# 66 "data/maps/Zone14A/scripts.pory"
	msgbox Zone14A_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Zone14A/scripts.pory"
	end
# 68 "data/maps/Zone14A/scripts.pory"

# 69 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_LolaIntro:
# 70 "data/maps/Zone14A/scripts.pory"
	.string "Seriously, when I find Charlie,\n"
# 71 "data/maps/Zone14A/scripts.pory"
	.string "he's going to regret choosing this\l"
# 72 "data/maps/Zone14A/scripts.pory"
	.string "place for our 1.5 month anniversary!$"
# 73 "data/maps/Zone14A/scripts.pory"

# 74 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_LolaDefeat:
# 75 "data/maps/Zone14A/scripts.pory"
	.string "Charlie! I found you!\n"
# 76 "data/maps/Zone14A/scripts.pory"
	.string "You are in so much trouble!$"
# 77 "data/maps/Zone14A/scripts.pory"

# 78 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_LolaPostBattle:
# 79 "data/maps/Zone14A/scripts.pory"
	.string "That stupid, stupid boy!$"
# 80 "data/maps/Zone14A/scripts.pory"

# 81 "data/maps/Zone14A/scripts.pory"
Zone14A_EventScript_Charlie::
# 82 "data/maps/Zone14A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CHARLIE, Zone14A_Text_CharlieIntro, Zone14A_Text_CharlieDefeat
# 83 "data/maps/Zone14A/scripts.pory"
	msgbox Zone14A_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Zone14A/scripts.pory"
	end
# 85 "data/maps/Zone14A/scripts.pory"

# 86 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_CharlieIntro:
# 87 "data/maps/Zone14A/scripts.pory"
	.string "Lola, baby, where are you?$"
# 88 "data/maps/Zone14A/scripts.pory"

# 89 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_CharlieDefeat:
# 90 "data/maps/Zone14A/scripts.pory"
	.string "Baby, I'm so sorry!$"
# 91 "data/maps/Zone14A/scripts.pory"

# 92 "data/maps/Zone14A/scripts.pory"
Zone14A_Text_CharliePostBattle:
# 93 "data/maps/Zone14A/scripts.pory"
	.string "I promise I'll pick a better spot\n"
# 94 "data/maps/Zone14A/scripts.pory"
	.string "next time!$"
