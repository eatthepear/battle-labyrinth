Zone1A_MapScripts::
# 2 "data/maps/Zone1A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone1A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


# 16 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkLeft:
# 17 "data/maps/Zone1A/scripts.pory"
	walk_left
# 17 "data/maps/Zone1A/scripts.pory"
	walk_left
# 17 "data/maps/Zone1A/scripts.pory"
	walk_left
# 17 "data/maps/Zone1A/scripts.pory"
	walk_left
	step_end

# 20 "data/maps/Zone1A/scripts.pory"
Zone1A_Corey_WalkRight:
# 21 "data/maps/Zone1A/scripts.pory"
	walk_right
# 21 "data/maps/Zone1A/scripts.pory"
	walk_right
# 21 "data/maps/Zone1A/scripts.pory"
	walk_right
# 21 "data/maps/Zone1A/scripts.pory"
	walk_right
	step_end

Zone1A_EventScript_TriggerLeviathanBottom::
# 25 "data/maps/Zone1A/scripts.pory"
	lockall
# 26 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 27 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 28 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 29 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 30 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone1A/scripts.pory"
	waitse
# 32 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 33 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 34 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 35 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 36 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 37 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanBottom_1
# 40 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 41 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 42 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 43 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 44 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 45 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 46 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 47 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 48 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanBottom_1:
# 38 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_TriggerLeviathanMiddle::
# 53 "data/maps/Zone1A/scripts.pory"
	lockall
# 54 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 55 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone1A/scripts.pory"
	waitse
# 58 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 59 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 60 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 61 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanMiddle_1
# 64 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 65 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 66 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 67 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 68 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 70 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanMiddle_1:
# 62 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_TriggerLeviathanTop::
# 75 "data/maps/Zone1A/scripts.pory"
	lockall
# 76 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 77 "data/maps/Zone1A/scripts.pory"
	playse SE_PIN
# 78 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 79 "data/maps/Zone1A/scripts.pory"
	waitse
# 80 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 81 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 82 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkLeft
# 83 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 84 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro, MSGBOX_YESNO
# 85 "data/maps/Zone1A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone1A_EventScript_TriggerLeviathanTop_1
# 88 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Wait
# 89 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 90 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 91 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Zone1A_Corey_WalkRight
# 92 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 93 "data/maps/Zone1A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 94 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
# 95 "data/maps/Zone1A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 96 "data/maps/Zone1A/scripts.pory"
	waitmovement 0
	return

Zone1A_EventScript_TriggerLeviathanTop_1:
# 86 "data/maps/Zone1A/scripts.pory"
	goto Zone1A_EventScript_LeviathanBattle
	return


Zone1A_EventScript_LeviathanBattle::
# 101 "data/maps/Zone1A/scripts.pory"
	fadeoutbgm 1
# 102 "data/maps/Zone1A/scripts.pory"
	setvar VAR_ZONE_1_STATE, 1
# 103 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Leviathan1Intro2
# 104 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 105 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone1A_EventScript_LeviathanBattle_2
# 105 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone1A_EventScript_LeviathanBattle_2
# 109 "data/maps/Zone1A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
# 110 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1, Zone1A_Text_Leviathan1Defeat
Zone1A_EventScript_LeviathanBattle_1:
# 112 "data/maps/Zone1A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 113 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/Zone1A/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 10
# 115 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_LeviathanBattle_Text_1
# 116 "data/maps/Zone1A/scripts.pory"
	closemessage
# 117 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 118 "data/maps/Zone1A/scripts.pory"
	removeobject 1
# 119 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_1
# 120 "data/maps/Zone1A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 121 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_LeviathanBattle_2:
# 106 "data/maps/Zone1A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_COREY
# 107 "data/maps/Zone1A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_COREY_LEVIATHAN_1_BRUTAL, Zone1A_Text_Leviathan1Defeat
	goto Zone1A_EventScript_LeviathanBattle_1


Zone1A_EventScript_ItemPotion::
# 146 "data/maps/Zone1A/scripts.pory"
	lock
# 147 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_POTION, Zone1A_EventScript_ItemPotion_2
# 152 "data/maps/Zone1A/scripts.pory"
	waitse
# 153 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 154 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 155 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_POTION
# 156 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 157 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_POTION, 1
# 158 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemPotion_2:
# 148 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 149 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_ItemQuickClaw::
# 163 "data/maps/Zone1A/scripts.pory"
	lock
# 164 "data/maps/Zone1A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE1A_QUICK_CLAW, Zone1A_EventScript_ItemQuickClaw_2
# 169 "data/maps/Zone1A/scripts.pory"
	waitse
# 170 "data/maps/Zone1A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 171 "data/maps/Zone1A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 172 "data/maps/Zone1A/scripts.pory"
	setflag FLAG_ITEM_ZONE1A_QUICK_CLAW
# 173 "data/maps/Zone1A/scripts.pory"
	addobject VAR_LAST_TALKED
# 174 "data/maps/Zone1A/scripts.pory"
	finditem ITEM_QUICK_CLAW, 1
# 175 "data/maps/Zone1A/scripts.pory"
	release
	end

Zone1A_EventScript_ItemQuickClaw_2:
# 165 "data/maps/Zone1A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 166 "data/maps/Zone1A/scripts.pory"
	release
	end


Zone1A_EventScript_PorygonSign::
# 180 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 181 "data/maps/Zone1A/scripts.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 182 "data/maps/Zone1A/scripts.pory"
	setseenmon SPECIES_PORYGON
# 183 "data/maps/Zone1A/scripts.pory"
	waitbuttonpress
# 184 "data/maps/Zone1A/scripts.pory"
	hidemonpic
# 185 "data/maps/Zone1A/scripts.pory"
	release
	end


# 189 "data/maps/Zone1A/scripts.pory"

# 190 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Nina::
# 191 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_NINA, Zone1A_Text_NinaIntro, Zone1A_Text_NinaDefeat
# 192 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Zone1A/scripts.pory"
	end
# 194 "data/maps/Zone1A/scripts.pory"

# 195 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaIntro:
# 196 "data/maps/Zone1A/scripts.pory"
	.string "Hey, you! Let's battle!$"
# 197 "data/maps/Zone1A/scripts.pory"

# 198 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaDefeat:
# 199 "data/maps/Zone1A/scripts.pory"
	.string "Aww… Come on!$"
# 200 "data/maps/Zone1A/scripts.pory"

# 201 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_NinaPostBattle:
# 202 "data/maps/Zone1A/scripts.pory"
	.string "I always lose…$"
# 203 "data/maps/Zone1A/scripts.pory"

# 204 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Mariam::
# 205 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARIAM, Zone1A_Text_MariamIntro, Zone1A_Text_MariamDefeat
# 206 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_MariamPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Zone1A/scripts.pory"
	end
# 208 "data/maps/Zone1A/scripts.pory"

# 209 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamIntro:
# 210 "data/maps/Zone1A/scripts.pory"
	.string "Be careful, I'm tough!$"
# 211 "data/maps/Zone1A/scripts.pory"

# 212 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamDefeat:
# 213 "data/maps/Zone1A/scripts.pory"
	.string "Sheesh!$"
# 214 "data/maps/Zone1A/scripts.pory"

# 215 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_MariamPostBattle:
# 216 "data/maps/Zone1A/scripts.pory"
	.string "Maybe I need more Pokémon.$"
# 217 "data/maps/Zone1A/scripts.pory"

# 218 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Oscar::
# 219 "data/maps/Zone1A/scripts.pory"
	trainerbattle_single TRAINER_PBL_OSCAR, Zone1A_Text_OscarIntro, Zone1A_Text_OscarDefeat
# 220 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_OscarPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Zone1A/scripts.pory"
	end
# 222 "data/maps/Zone1A/scripts.pory"

# 223 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarIntro:
# 224 "data/maps/Zone1A/scripts.pory"
	.string "Fear my might!$"
# 225 "data/maps/Zone1A/scripts.pory"

# 226 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarDefeat:
# 227 "data/maps/Zone1A/scripts.pory"
	.string "Beaten! Disgrace!$"
# 228 "data/maps/Zone1A/scripts.pory"

# 229 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_OscarPostBattle:
# 230 "data/maps/Zone1A/scripts.pory"
	.string "I must reclaim my honor…$"
# 231 "data/maps/Zone1A/scripts.pory"

# 232 "data/maps/Zone1A/scripts.pory"
Zone1A_EventScript_Sign::
# 233 "data/maps/Zone1A/scripts.pory"
	msgbox Zone1A_Text_Sign, MSGBOX_SIGN
# 234 "data/maps/Zone1A/scripts.pory"
	end
# 235 "data/maps/Zone1A/scripts.pory"

# 236 "data/maps/Zone1A/scripts.pory"
Zone1A_Text_Sign:
# 237 "data/maps/Zone1A/scripts.pory"
	.string "Trainer Tips!\p"
# 238 "data/maps/Zone1A/scripts.pory"
	.string "Press {R_BUTTON} to enable\n"
# 239 "data/maps/Zone1A/scripts.pory"
	.string "or disable Auto Run.$"

Zone1A_EventScript_LeviathanBattle_Text_0:
# 113 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: I thought if I gave my Skwovet\n"
	.string "an Oran Berry, I would be able to win.\l"
	.string "Oran Berries really are the best!\p"
	.string "Here, let me share some with you and\n"
	.string "your Pokémon!$"

Zone1A_EventScript_LeviathanBattle_Text_1:
# 115 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Well, anyways, I've gotta run\n"
	.string "now.\p"
	.string "Bye bye!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 180 "data/maps/Zone1A/scripts.pory"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_Text_Leviathan1Intro::
# 125 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Hi! My name's Corey.\n"
	.string "I'm the resident Leviathan around here.\p"
	.string "If you want to go forward, you'll have\n"
	.string "to beat me!\p"
	.string "So, are you ready for our battle?$"

Zone1A_Text_Leviathan1Wait::
# 132 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Okay. You just let me know when\n"
	.string "you're ready.$"

Zone1A_Text_Leviathan1Intro2::
# 136 "data/maps/Zone1A/scripts.pory"
	.string "{COLOR BLUE}Corey{COLOR DARK_GRAY}: Aww, yeah!\n"
	.string "This battle is gonna be awesome!$"

Zone1A_Text_Leviathan1Defeat::
# 141 "data/maps/Zone1A/scripts.pory"
	.string "Drats! Even the Oran Berry wasn't\n"
	.string "enough!$"
