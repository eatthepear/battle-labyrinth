Zone12A_MapScripts::
# 2 "data/maps/Zone12A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_TM_BRICK_BREAK, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_WATER_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_LEAF_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17
# 26 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 24 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone12A_EventScript_LeviathanBattles::
# 32 "data/maps/Zone12A/scripts.pory"
	lockall
# 33 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 34 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 35 "data/maps/Zone12A/scripts.pory"
	playse SE_PIN
# 36 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone12A/scripts.pory"
	waitse
# 38 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 39 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 40 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 41 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_0, MSGBOX_YESNO
# 42 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone12A_EventScript_LeviathanBattles_2
# 47 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_4
# 48 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_5
Zone12A_EventScript_LeviathanBattles_1:
# 50 "data/maps/Zone12A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_REID, Zone12A_EventScript_LeviathanBattles_Text_6
# 51 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_7
# 52 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_8
# 53 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 54 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Common_Movement_WalkRight3
# 56 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 57 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 58 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 59 "data/maps/Zone12A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 60 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 61 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_9
# 62 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 63 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_10
# 65 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone12A_EventScript_LeviathanBattles_6
# 65 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone12A_EventScript_LeviathanBattles_6
# 68 "data/maps/Zone12A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DECLAN_LEVIATHAN_11, Zone12A_Text_Leviathan11Defeat
Zone12A_EventScript_LeviathanBattles_5:
# 70 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_11, MSGBOX_AUTOCLOSE
# 71 "data/maps/Zone12A/scripts.pory"
	delay 32
# 72 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_12
# 74 "data/maps/Zone12A/scripts.pory"
	giveitem ITEM_TM_X_SCISSOR
# 75 "data/maps/Zone12A/scripts.pory"
	setvar VAR_ZONE_12_STATE, 1
# 76 "data/maps/Zone12A/scripts.pory"
	releaseall
	return

Zone12A_EventScript_LeviathanBattles_2:
# 43 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_1
# 44 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_2
# 45 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_LeviathanBattles_Text_3
	goto Zone12A_EventScript_LeviathanBattles_1

Zone12A_EventScript_LeviathanBattles_6:
# 66 "data/maps/Zone12A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DECLAN_LEVIATHAN_11_CHALLENGE, Zone12A_Text_Leviathan11Defeat
	goto Zone12A_EventScript_LeviathanBattles_5


Zone12A_EventScript_BreederF::
# 84 "data/maps/Zone12A/scripts.pory"
	lock
# 85 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 86 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 87 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_0, MSGBOX_YESNO
# 88 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_BreederF_2
# 93 "data/maps/Zone12A/scripts.pory"
	checkmoney 1000, 0
# 94 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone12A_EventScript_BreederF_5
# 98 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_3, MSGBOX_DEFAULT
# 99 "data/maps/Zone12A/scripts.pory"
	special ChoosePartyMon
# 100 "data/maps/Zone12A/scripts.pory"
	waitstate
# 101 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 102 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 103 "data/maps/Zone12A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone12A_EventScript_BreederF_8
# 126 "data/maps/Zone12A/scripts.pory"
	closemessage
# 127 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 128 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
Zone12A_EventScript_BreederF_1:
# 132 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_BreederF_2:
# 89 "data/maps/Zone12A/scripts.pory"
	closemessage
# 90 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 91 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_5:
# 95 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_2
# 96 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_8:
# 104 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 105 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Zone12A_EventScript_BreederF_11
# 108 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 109 "data/maps/Zone12A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 110 "data/maps/Zone12A/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 111 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_5, MSGBOX_YESNO
# 112 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone12A_EventScript_BreederF_14
# 120 "data/maps/Zone12A/scripts.pory"
	closemessage
# 121 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 122 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_11:
# 106 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_4
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_14:
# 113 "data/maps/Zone12A/scripts.pory"
	removemoney 1000
# 114 "data/maps/Zone12A/scripts.pory"
	updatemoneybox
# 115 "data/maps/Zone12A/scripts.pory"
	special CheckLeadMonTough
# 116 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_6
# 117 "data/maps/Zone12A/scripts.pory"
	closemessage
# 118 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederF_1


Zone12A_EventScript_TMBrickBreak::
# 137 "data/maps/Zone12A/scripts.pory"
	lock
# 138 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_TM_BRICK_BREAK, Zone12A_EventScript_TMBrickBreak_2
# 143 "data/maps/Zone12A/scripts.pory"
	waitse
# 144 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 145 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 146 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_TM_BRICK_BREAK
# 147 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 148 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_TM_BRICK_BREAK, 1
# 149 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_TMBrickBreak_2:
# 139 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 140 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_ThunderStone::
# 154 "data/maps/Zone12A/scripts.pory"
	lock
# 155 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_EventScript_ThunderStone_2
# 160 "data/maps/Zone12A/scripts.pory"
	waitse
# 161 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 162 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 163 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_THUNDER_STONE
# 164 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 165 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_THUNDER_STONE, 1
# 166 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_ThunderStone_2:
# 156 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 157 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_FireStone::
# 171 "data/maps/Zone12A/scripts.pory"
	lock
# 172 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_EventScript_FireStone_2
# 177 "data/maps/Zone12A/scripts.pory"
	waitse
# 178 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 179 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 180 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_FIRE_STONE
# 181 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 182 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_FIRE_STONE, 1
# 183 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_FireStone_2:
# 173 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 174 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_WaterStone::
# 188 "data/maps/Zone12A/scripts.pory"
	lock
# 189 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_WATER_STONE, Zone12A_EventScript_WaterStone_2
# 194 "data/maps/Zone12A/scripts.pory"
	waitse
# 195 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 196 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 197 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_WATER_STONE
# 198 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 199 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_WATER_STONE, 1
# 200 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_WaterStone_2:
# 190 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 191 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_LeafStone::
# 205 "data/maps/Zone12A/scripts.pory"
	lock
# 206 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_LEAF_STONE, Zone12A_EventScript_LeafStone_2
# 211 "data/maps/Zone12A/scripts.pory"
	waitse
# 212 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 213 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 214 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_LEAF_STONE
# 215 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 216 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_LEAF_STONE, 1
# 217 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_LeafStone_2:
# 207 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 208 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_Romulus::
# 222 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ROMULUS, Zone12A_EventScript_Romulus_Text_0, Zone12A_EventScript_Romulus_Text_1
# 223 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Romulus_Text_2, MSGBOX_AUTOCLOSE
	end


Zone12A_EventScript_Julie::
# 228 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JULIE, Zone12A_EventScript_Julie_Text_0, Zone12A_EventScript_Julie_Text_1
# 229 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Julie_Text_2, MSGBOX_AUTOCLOSE
	end


# 233 "data/maps/Zone12A/scripts.pory"

# 234 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Waterfall::
# 235 "data/maps/Zone12A/scripts.pory"
	lockall
# 236 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DontGoDown, MSGBOX_AUTOCLOSE
# 237 "data/maps/Zone12A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 238 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 239 "data/maps/Zone12A/scripts.pory"
	releaseall
# 240 "data/maps/Zone12A/scripts.pory"
	end
# 241 "data/maps/Zone12A/scripts.pory"

# 242 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DontGoDown:
# 243 "data/maps/Zone12A/scripts.pory"
	.string "You don't want to go down the\n"
# 244 "data/maps/Zone12A/scripts.pory"
	.string "waterfall without a way back up!$"
# 245 "data/maps/Zone12A/scripts.pory"

# 246 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Essence::
# 247 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ESSENCE, Zone12A_Text_EssenceIntro, Zone12A_Text_EssenceDefeat
# 248 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_EssencePostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Zone12A/scripts.pory"
	end
# 250 "data/maps/Zone12A/scripts.pory"

# 251 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceIntro:
# 252 "data/maps/Zone12A/scripts.pory"
	.string "I know I shouldn't be walking\n"
# 253 "data/maps/Zone12A/scripts.pory"
	.string "near a puddle like this…$"
# 254 "data/maps/Zone12A/scripts.pory"

# 255 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceDefeat:
# 256 "data/maps/Zone12A/scripts.pory"
	.string "But I just love looking at my\n"
# 257 "data/maps/Zone12A/scripts.pory"
	.string "reflection too much!$"
# 258 "data/maps/Zone12A/scripts.pory"

# 259 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssencePostBattle:
# 260 "data/maps/Zone12A/scripts.pory"
	.string "Sigh… I'm even more beautiful\n"
# 261 "data/maps/Zone12A/scripts.pory"
	.string "than Narcissus…$"
# 262 "data/maps/Zone12A/scripts.pory"

# 263 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Dolores::
# 264 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DOLORES, Zone12A_Text_DoloresIntro, Zone12A_Text_DoloresDefeat
# 265 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DoloresPostBattle, MSGBOX_AUTOCLOSE
# 266 "data/maps/Zone12A/scripts.pory"
	end
# 267 "data/maps/Zone12A/scripts.pory"

# 268 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresIntro:
# 269 "data/maps/Zone12A/scripts.pory"
	.string "You have to be prepared for bad\n"
# 270 "data/maps/Zone12A/scripts.pory"
	.string "weather at any moment!$"
# 271 "data/maps/Zone12A/scripts.pory"

# 272 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresDefeat:
# 273 "data/maps/Zone12A/scripts.pory"
	.string "Wow! You blew me right off my feet!$"
# 274 "data/maps/Zone12A/scripts.pory"

# 275 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresPostBattle:
# 276 "data/maps/Zone12A/scripts.pory"
	.string "Weather affects Pokémon battles\n"
# 277 "data/maps/Zone12A/scripts.pory"
	.string "just as much as it affects our\l"
# 278 "data/maps/Zone12A/scripts.pory"
	.string "lives, huh?$"
# 279 "data/maps/Zone12A/scripts.pory"

# 280 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Genie::
# 281 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GENIE, Zone12A_Text_GenieIntro, Zone12A_Text_GenieDefeat
# 282 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_GeniePostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Zone12A/scripts.pory"
	end
# 284 "data/maps/Zone12A/scripts.pory"

# 285 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieIntro:
# 286 "data/maps/Zone12A/scripts.pory"
	.string "Hi, I'm a fan!$"
# 287 "data/maps/Zone12A/scripts.pory"

# 288 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieDefeat:
# 289 "data/maps/Zone12A/scripts.pory"
	.string "A fan of sneaking up on people!$"
# 290 "data/maps/Zone12A/scripts.pory"

# 291 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GeniePostBattle:
# 292 "data/maps/Zone12A/scripts.pory"
	.string "Okay, I admit, it's a weird hobby.$"
# 293 "data/maps/Zone12A/scripts.pory"

# 294 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Abigail::
# 295 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ABIGAIL, Zone12A_Text_AbigailIntro, Zone12A_Text_AbigailDefeat
# 296 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Zone12A/scripts.pory"
	end
# 298 "data/maps/Zone12A/scripts.pory"

# 299 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailIntro:
# 300 "data/maps/Zone12A/scripts.pory"
	.string "This puddle is not good for someone\n"
# 301 "data/maps/Zone12A/scripts.pory"
	.string "without rain boots!$"
# 302 "data/maps/Zone12A/scripts.pory"

# 303 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailDefeat:
# 304 "data/maps/Zone12A/scripts.pory"
	.string "But it's just too fun to splash\n"
# 305 "data/maps/Zone12A/scripts.pory"
	.string "around!$"
# 306 "data/maps/Zone12A/scripts.pory"

# 307 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailPostBattle:
# 308 "data/maps/Zone12A/scripts.pory"
	.string "Splashing around is fun!$"
# 309 "data/maps/Zone12A/scripts.pory"

# 310 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Federico::
# 311 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FEDERICO, Zone12A_Text_FedericoIntro, Zone12A_Text_FedericoDefeat
# 312 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_FedericoPostBattle, MSGBOX_AUTOCLOSE
# 313 "data/maps/Zone12A/scripts.pory"
	end
# 314 "data/maps/Zone12A/scripts.pory"

# 315 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoIntro:
# 316 "data/maps/Zone12A/scripts.pory"
	.string "Argh… I wish I had a Surfboard…$"
# 317 "data/maps/Zone12A/scripts.pory"

# 318 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoDefeat:
# 319 "data/maps/Zone12A/scripts.pory"
	.string "Then I could ride the waves,\n"
# 320 "data/maps/Zone12A/scripts.pory"
	.string "searching for bigger fish!$"
# 321 "data/maps/Zone12A/scripts.pory"

# 322 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoPostBattle:
# 323 "data/maps/Zone12A/scripts.pory"
	.string "Sounds like a catch, am I right?$"
# 324 "data/maps/Zone12A/scripts.pory"

# 325 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Hilda::
# 326 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HILDA, Zone12A_Text_HildaIntro, Zone12A_Text_HildaDefeat
# 327 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_HildaPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Zone12A/scripts.pory"
	end
# 329 "data/maps/Zone12A/scripts.pory"

# 330 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaIntro:
# 331 "data/maps/Zone12A/scripts.pory"
	.string "After a swim, a quick run is what\n"
# 332 "data/maps/Zone12A/scripts.pory"
	.string "I need to dry off!$"
# 333 "data/maps/Zone12A/scripts.pory"

# 334 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaDefeat:
# 335 "data/maps/Zone12A/scripts.pory"
	.string "I'm suddenly very tired!$"
# 336 "data/maps/Zone12A/scripts.pory"

# 337 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaPostBattle:
# 338 "data/maps/Zone12A/scripts.pory"
	.string "Exercising without a break is\n"
# 339 "data/maps/Zone12A/scripts.pory"
	.string "tough!$"
# 340 "data/maps/Zone12A/scripts.pory"

# 341 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Trevor::
# 342 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_TREVOR, Zone12A_Text_TrevorIntro, Zone12A_Text_TrevorDefeat
# 343 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 344 "data/maps/Zone12A/scripts.pory"
	end
# 345 "data/maps/Zone12A/scripts.pory"

# 346 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorIntro:
# 347 "data/maps/Zone12A/scripts.pory"
	.string "Go, my Baby Pokémon, go!$"
# 348 "data/maps/Zone12A/scripts.pory"

# 349 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorDefeat:
# 350 "data/maps/Zone12A/scripts.pory"
	.string "Maybe they're a little weak to\n"
# 351 "data/maps/Zone12A/scripts.pory"
	.string "battle.$"
# 352 "data/maps/Zone12A/scripts.pory"

# 353 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorPostBattle:
# 354 "data/maps/Zone12A/scripts.pory"
	.string "I'll work on raising them more!$"
# 355 "data/maps/Zone12A/scripts.pory"

# 356 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Rufus::
# 357 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RUFUS, Zone12A_Text_RufusIntro, Zone12A_Text_RufusDefeat
# 358 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_RufusPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Zone12A/scripts.pory"
	end
# 360 "data/maps/Zone12A/scripts.pory"

# 361 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusIntro:
# 362 "data/maps/Zone12A/scripts.pory"
	.string "I'm looking for rare Pokémon!$"
# 363 "data/maps/Zone12A/scripts.pory"

# 364 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusDefeat:
# 365 "data/maps/Zone12A/scripts.pory"
	.string "But I can barely see through the\n"
# 366 "data/maps/Zone12A/scripts.pory"
	.string "grass!$"
# 367 "data/maps/Zone12A/scripts.pory"

# 368 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusPostBattle:
# 369 "data/maps/Zone12A/scripts.pory"
	.string "I won't give up my search!$"
# 370 "data/maps/Zone12A/scripts.pory"

# 371 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Kinley::
# 372 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KINLEY, Zone12A_Text_KinleyIntro, Zone12A_Text_KinleyDefeat
# 373 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_KinleyPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Zone12A/scripts.pory"
	end
# 375 "data/maps/Zone12A/scripts.pory"

# 376 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyIntro:
# 377 "data/maps/Zone12A/scripts.pory"
	.string "This grass is far too tall\n"
# 378 "data/maps/Zone12A/scripts.pory"
	.string "for someone of my stature!$"
# 379 "data/maps/Zone12A/scripts.pory"

# 380 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyDefeat:
# 381 "data/maps/Zone12A/scripts.pory"
	.string "I meant financial stature!\n"
# 382 "data/maps/Zone12A/scripts.pory"
	.string "I'm not short!$"
# 383 "data/maps/Zone12A/scripts.pory"

# 384 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyPostBattle:
# 385 "data/maps/Zone12A/scripts.pory"
	.string "Errr… Never mind.$"

Zone12A_EventScript_LeviathanBattles_Text_0:
# 41 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Reid{COLOR DARK_GRAY}: Hey, kid, you like Bugs?$"

Zone12A_EventScript_LeviathanBattles_Text_1:
# 43 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Reid{COLOR DARK_GRAY}: Alrighty, I can let you go.$"

Zone12A_EventScript_LeviathanBattles_Text_2:
# 44 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Wait! We should check!$"

Zone12A_EventScript_LeviathanBattles_Text_3:
# 45 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Reid{COLOR DARK_GRAY}: Oof, you're right.\p"
	.string "Sorry about this if you do actually like\n"
	.string "Bug Pokémon!$"

Zone12A_EventScript_LeviathanBattles_Text_4:
# 47 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: You know what that means.$"

Zone12A_EventScript_LeviathanBattles_Text_5:
# 48 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Reid{COLOR DARK_GRAY}: You're about to regret giving the\n"
	.string "wrong answer!$"

Zone12A_EventScript_LeviathanBattles_Text_6:
# 50 "data/maps/Zone12A/scripts.pory"
	.string "My creepy crawlies!$"

Zone12A_EventScript_LeviathanBattles_Text_7:
# 51 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: I'm disappointed, {COLOR BLUE}Reid{COLOR DARK_GRAY}. You had\n"
	.string "such potential!$"

Zone12A_EventScript_LeviathanBattles_Text_8:
# 52 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Reid{COLOR DARK_GRAY}: …$"

Zone12A_EventScript_LeviathanBattles_Text_9:
# 61 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Hmph.$"

Zone12A_EventScript_LeviathanBattles_Text_10:
# 64 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: He wasn't that devoted to the\n"
	.string "cause anyways.\p"
	.string "Let me show you how devoted I am!\p"
	.string "For Bug Pokémon!$"

Zone12A_EventScript_LeviathanBattles_Text_11:
# 70 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Uhm…$"

Zone12A_EventScript_LeviathanBattles_Text_12:
# 72 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Declan{COLOR DARK_GRAY}: Reid!$"

Zone12A_EventScript_BreederF_Text_0:
# 87 "data/maps/Zone12A/scripts.pory"
	.string "I'll change a Pokémon's nature to\n"
	.string "Serious for the price of ¥1000.$"

Zone12A_EventScript_BreederF_Text_1:
# 91 "data/maps/Zone12A/scripts.pory"
	.string "Why so serious?$"

Zone12A_EventScript_BreederF_Text_2:
# 95 "data/maps/Zone12A/scripts.pory"
	.string "You don't have enough money.$"

Zone12A_EventScript_BreederF_Text_3:
# 98 "data/maps/Zone12A/scripts.pory"
	.string "Which Pokémon would you like to change\n"
	.string "the nature?$"

Zone12A_EventScript_BreederF_Text_4:
# 106 "data/maps/Zone12A/scripts.pory"
	.string "I can't change the nature of an egg.$"

Zone12A_EventScript_BreederF_Text_5:
# 111 "data/maps/Zone12A/scripts.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

Zone12A_EventScript_BreederF_Text_6:
# 116 "data/maps/Zone12A/scripts.pory"
	.string "It's done.$"

Zone12A_EventScript_Romulus_Text_0:
# 222 "data/maps/Zone12A/scripts.pory"
	.string "But soft, what light through yonder\n"
	.string "window breaks?\p"
	.string "It is the east, and Julie is the sun.$"

Zone12A_EventScript_Romulus_Text_1:
# 222 "data/maps/Zone12A/scripts.pory"
	.string "I defy you, stars!$"

Zone12A_EventScript_Romulus_Text_2:
# 223 "data/maps/Zone12A/scripts.pory"
	.string "With love's light wings did I o'erperch\n"
	.string "these walls,\p"
	.string "For stony limits cannot hold love out.$"

Zone12A_EventScript_Julie_Text_0:
# 228 "data/maps/Zone12A/scripts.pory"
	.string "O Romulus, Romulus! Wherefore art thou\n"
	.string "Romulus?$"

Zone12A_EventScript_Julie_Text_1:
# 228 "data/maps/Zone12A/scripts.pory"
	.string "My only love sprung from my only hate,\p"
	.string "Too early seen unknown, and known too\n"
	.string "late!$"

Zone12A_EventScript_Julie_Text_2:
# 229 "data/maps/Zone12A/scripts.pory"
	.string "My bounty is as boundless as the sea,\p"
	.string "My love as deep; the more I give to thee,\p"
	.string "The more I have, for both are infinite.$"

Zone12A_Text_Leviathan11Defeat::
# 79 "data/maps/Zone12A/scripts.pory"
	.string "No! You couldn't!\n"
	.string "How could I lose to you?$"
