Zone3A_MapScripts::
# 2 "data/maps/Zone3A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_1, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_2, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_3, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_HYPER_POTION, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone3A_EventScript_TriggerLeviathan::
# 27 "data/maps/Zone3A/scripts.pory"
	lockall
# 28 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 29 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_0, MSGBOX_YESNO
# 31 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3A_EventScript_TriggerLeviathan_2
# 38 "data/maps/Zone3A/scripts.pory"
	closemessage
# 39 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 40 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 41 "data/maps/Zone3A/scripts.pory"
	fadeoutbgm 1
# 42 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 43 "data/maps/Zone3A/scripts.pory"
	playse SE_PIN
# 44 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 45 "data/maps/Zone3A/scripts.pory"
	waitse
# 46 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 47 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 48 "data/maps/Zone3A/scripts.pory"
	addobject 1
# 49 "data/maps/Zone3A/scripts.pory"
	clearflag FLAG_HIDE_ZONE3A_PHILLIPA
# 50 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 51 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 52 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 53 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 54 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_Leviathan3Intro
# 56 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 57 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone3A_EventScript_TriggerLeviathan_5
# 57 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone3A_EventScript_TriggerLeviathan_5
# 60 "data/maps/Zone3A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PHILLIPA_LEVIATHAN_3, Zone3A_Text_Leviathan3Defeat
Zone3A_EventScript_TriggerLeviathan_4:
# 62 "data/maps/Zone3A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 63 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_1
# 64 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Zone3A_Movement_Phillipa_RunAway
# 65 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 66 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_2
# 67 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 68 "data/maps/Zone3A/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 70 "data/maps/Zone3A/scripts.pory"
	waitse
# 71 "data/maps/Zone3A/scripts.pory"
	addobject 2
# 72 "data/maps/Zone3A/scripts.pory"
	clearflag FLAG_HIDE_ZONE3A_REMI
# 73 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 74 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 75 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_3
# 76 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 77 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 78 "data/maps/Zone3A/scripts.pory"
	delay 32
# 79 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 80 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_4
# 82 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkToPhillipa
# 83 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 84 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_5, MSGBOX_DEFAULT
# 85 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 86 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 87 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_6, MSGBOX_DEFAULT
# 88 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_7
# 89 "data/maps/Zone3A/scripts.pory"
	delay 32
# 90 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_8
# 91 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkBack
# 92 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Zone3A_Movement_Phillipa_WalkBack
# 93 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 94 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_9, MSGBOX_DEFAULT
# 95 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_10, MSGBOX_DEFAULT
# 96 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_11
# 97 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkToPlayer
# 98 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 99 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 100 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 101 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_12, MSGBOX_DEFAULT
# 102 "data/maps/Zone3A/scripts.pory"
	giveitem ITEM_GOOD_ROD, 1
# 103 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 104 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 105 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkBackToPhillipa
# 106 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 107 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_13, MSGBOX_DEFAULT
# 108 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 109 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 110 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_14
# 111 "data/maps/Zone3A/scripts.pory"
	closemessage
# 112 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 113 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 114 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
# 115 "data/maps/Zone3A/scripts.pory"
	removeobject 1
# 116 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 117 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 118 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 119 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 120 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_REMI
# 121 "data/maps/Zone3A/scripts.pory"
	removeobject 2
# 122 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_3
# 123 "data/maps/Zone3A/scripts.pory"
	setvar VAR_ZONE_3_STATE, 1
# 124 "data/maps/Zone3A/scripts.pory"
	releaseall
	end

Zone3A_EventScript_TriggerLeviathan_2:
# 32 "data/maps/Zone3A/scripts.pory"
	closemessage
# 33 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 34 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone3A/scripts.pory"
	releaseall
	end

Zone3A_EventScript_TriggerLeviathan_5:
# 58 "data/maps/Zone3A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PHILLIPA_LEVIATHAN_3_CHALLENGE, Zone3A_Text_Leviathan3Defeat
	goto Zone3A_EventScript_TriggerLeviathan_4


# 137 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Phillipa_RunAway:
# 138 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 138 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 138 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 139 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
# 139 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
# 139 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
	step_end

# 142 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkToPhillipa:
# 143 "data/maps/Zone3A/scripts.pory"
	walk_left
# 143 "data/maps/Zone3A/scripts.pory"
	walk_left
# 143 "data/maps/Zone3A/scripts.pory"
	walk_left
# 144 "data/maps/Zone3A/scripts.pory"
	walk_up
# 144 "data/maps/Zone3A/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkBack:
# 148 "data/maps/Zone3A/scripts.pory"
	walk_down
# 148 "data/maps/Zone3A/scripts.pory"
	walk_down
# 149 "data/maps/Zone3A/scripts.pory"
	walk_right
# 149 "data/maps/Zone3A/scripts.pory"
	walk_right
# 149 "data/maps/Zone3A/scripts.pory"
	walk_right
# 149 "data/maps/Zone3A/scripts.pory"
	walk_right
# 150 "data/maps/Zone3A/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Phillipa_WalkBack:
# 154 "data/maps/Zone3A/scripts.pory"
	walk_down
# 154 "data/maps/Zone3A/scripts.pory"
	walk_down
# 154 "data/maps/Zone3A/scripts.pory"
	walk_down
# 155 "data/maps/Zone3A/scripts.pory"
	walk_right
# 155 "data/maps/Zone3A/scripts.pory"
	walk_right
# 155 "data/maps/Zone3A/scripts.pory"
	walk_right
# 156 "data/maps/Zone3A/scripts.pory"
	face_down
	step_end

# 159 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkToPlayer:
# 160 "data/maps/Zone3A/scripts.pory"
	walk_down
# 161 "data/maps/Zone3A/scripts.pory"
	face_left
	step_end

# 164 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkBackToPhillipa:
# 165 "data/maps/Zone3A/scripts.pory"
	walk_up
# 166 "data/maps/Zone3A/scripts.pory"
	face_left
	step_end

Zone3A_EventScript_Breeder::
# 170 "data/maps/Zone3A/scripts.pory"
	lock
# 171 "data/maps/Zone3A/scripts.pory"
	faceplayer
# 172 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ZONE3A_RECEIVED_PINK_SCARF, Zone3A_EventScript_Breeder_3
Zone3A_EventScript_Breeder_1:
# 177 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_1, MSGBOX_YESNO
# 178 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone3A_EventScript_Breeder_7
Zone3A_EventScript_Breeder_6:
# 205 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_Breeder_2:
# 173 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_0
# 174 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_Breeder_3:
# 172 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ZONE3A_RECEIVED_SURPRISE_MULCH, Zone3A_EventScript_Breeder_2
	goto Zone3A_EventScript_Breeder_1

Zone3A_EventScript_Breeder_7:
# 179 "data/maps/Zone3A/scripts.pory"
	special ChoosePartyMon
# 180 "data/maps/Zone3A/scripts.pory"
	waitstate
# 181 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone3A_EventScript_Breeder_9
	goto Zone3A_EventScript_Breeder_6

Zone3A_EventScript_Breeder_9:
# 182 "data/maps/Zone3A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 183 "data/maps/Zone3A/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Zone3A/scripts.pory"
	case SPECIES_SKITTY, Zone3A_EventScript_Breeder_12
# 192 "data/maps/Zone3A/scripts.pory"
	case SPECIES_SUNKERN, Zone3A_EventScript_Breeder_13
# 201 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_5
	goto Zone3A_EventScript_Breeder_6

Zone3A_EventScript_Breeder_12:
# 185 "data/maps/Zone3A/scripts.pory"
	goto_if_unset FLAG_ZONE3A_RECEIVED_PINK_SCARF, Zone3A_EventScript_Breeder_15
# 190 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_3
	goto Zone3A_EventScript_Breeder_6

Zone3A_EventScript_Breeder_13:
# 193 "data/maps/Zone3A/scripts.pory"
	goto_if_unset FLAG_ZONE3A_RECEIVED_SURPRISE_MULCH, Zone3A_EventScript_Breeder_18
# 198 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_4
	goto Zone3A_EventScript_Breeder_6

Zone3A_EventScript_Breeder_15:
# 186 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_2
# 187 "data/maps/Zone3A/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 188 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ZONE3A_RECEIVED_PINK_SCARF
	goto Zone3A_EventScript_Breeder_6

Zone3A_EventScript_Breeder_18:
# 194 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Breeder_Text_2
# 195 "data/maps/Zone3A/scripts.pory"
	giveitem ITEM_SURPRISE_MULCH
# 196 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ZONE3A_RECEIVED_SURPRISE_MULCH
	goto Zone3A_EventScript_Breeder_6


Zone3A_EventScript_ItemRandom1::
# 210 "data/maps/Zone3A/scripts.pory"
	lock
# 211 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_1, Zone3A_EventScript_ItemRandom1_2
# 216 "data/maps/Zone3A/scripts.pory"
	waitse
# 217 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 218 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 219 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_RANDOM_1
# 220 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 221 "data/maps/Zone3A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 222 "data/maps/Zone3A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 223 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemRandom1_2:
# 212 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 213 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemRandom2::
# 228 "data/maps/Zone3A/scripts.pory"
	lock
# 229 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_2, Zone3A_EventScript_ItemRandom2_2
# 234 "data/maps/Zone3A/scripts.pory"
	waitse
# 235 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 236 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 237 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_RANDOM_2
# 238 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 239 "data/maps/Zone3A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 240 "data/maps/Zone3A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 241 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemRandom2_2:
# 230 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 231 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemRandom3::
# 246 "data/maps/Zone3A/scripts.pory"
	lock
# 247 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_RANDOM_3, Zone3A_EventScript_ItemRandom3_2
# 252 "data/maps/Zone3A/scripts.pory"
	waitse
# 253 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 254 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 255 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_RANDOM_3
# 256 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 257 "data/maps/Zone3A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 258 "data/maps/Zone3A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 259 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemRandom3_2:
# 248 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 249 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemHyperPotion::
# 264 "data/maps/Zone3A/scripts.pory"
	lock
# 265 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_HYPER_POTION, Zone3A_EventScript_ItemHyperPotion_2
# 270 "data/maps/Zone3A/scripts.pory"
	waitse
# 271 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 272 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 273 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_HYPER_POTION
# 274 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 275 "data/maps/Zone3A/scripts.pory"
	finditem ITEM_HYPER_POTION, 1
# 276 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemHyperPotion_2:
# 266 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 267 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_Surveil::
# 281 "data/maps/Zone3A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 282 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_Surveil_Text_0, MSGBOX_SIGN
	end


Zone3A_EventScript_ChillingWaterTutor::
# 287 "data/maps/Zone3A/scripts.pory"
	lock
# 288 "data/maps/Zone3A/scripts.pory"
	faceplayer
# 289 "data/maps/Zone3A/scripts.pory"
	showmoneybox 0, 0, 0
# 290 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ZONE3A_MOVE_TUTOR_TAUGHT_CHILLING_WATER, Zone3A_EventScript_ChillingWaterTutor_2
# 299 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_2, MSGBOX_YESNO
# 300 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3A_EventScript_ChillingWaterTutor_10
Zone3A_EventScript_ChillingWaterTutor_1:
# 307 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ZONE3A_MOVE_TUTOR_TAUGHT_CHILLING_WATER, Zone3A_EventScript_ChillingWaterTutor_6
Zone3A_EventScript_ChillingWaterTutor_5:
# 316 "data/maps/Zone3A/scripts.pory"
	setvar VAR_TEMP_0, MOVE_CHILLING_WATER
# 317 "data/maps/Zone3A/scripts.pory"
	setvar VAR_0x8005, MOVE_CHILLING_WATER
# 318 "data/maps/Zone3A/scripts.pory"
	buffermovename 0, VAR_TEMP_0
# 319 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_4, MSGBOX_DEFAULT
# 320 "data/maps/Zone3A/scripts.pory"
	special ChooseMonForMoveTutor
# 321 "data/maps/Zone3A/scripts.pory"
	waitstate
# 322 "data/maps/Zone3A/scripts.pory"
	lock
# 323 "data/maps/Zone3A/scripts.pory"
	faceplayer
# 324 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone3A_EventScript_ChillingWaterTutor_13
# 329 "data/maps/Zone3A/scripts.pory"
	showmoneybox 0, 0, 0
# 330 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_5, MSGBOX_DEFAULT
# 331 "data/maps/Zone3A/scripts.pory"
	goto_if_unset FLAG_ZONE3A_MOVE_TUTOR_TAUGHT_CHILLING_WATER, Zone3A_EventScript_ChillingWaterTutor_18
# 334 "data/maps/Zone3A/scripts.pory"
	removemoney 500
# 335 "data/maps/Zone3A/scripts.pory"
	updatemoneybox
# 336 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_6, MSGBOX_DEFAULT
# 337 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_1
Zone3A_EventScript_ChillingWaterTutor_17:
# 339 "data/maps/Zone3A/scripts.pory"
	hidemoneybox
# 340 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ChillingWaterTutor_2:
# 291 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_0, MSGBOX_YESNO
# 292 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3A_EventScript_ChillingWaterTutor_8
	goto Zone3A_EventScript_ChillingWaterTutor_1

Zone3A_EventScript_ChillingWaterTutor_6:
# 308 "data/maps/Zone3A/scripts.pory"
	checkmoney 500, 0
# 309 "data/maps/Zone3A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone3A_EventScript_ChillingWaterTutor_15
	goto Zone3A_EventScript_ChillingWaterTutor_5

Zone3A_EventScript_ChillingWaterTutor_8:
# 293 "data/maps/Zone3A/scripts.pory"
	hidemoneybox
# 294 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_1
# 295 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ChillingWaterTutor_10:
# 301 "data/maps/Zone3A/scripts.pory"
	hidemoneybox
# 302 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_1
# 303 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ChillingWaterTutor_13:
# 325 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_1
# 326 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ChillingWaterTutor_15:
# 310 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_ChillingWaterTutor_Text_3
# 311 "data/maps/Zone3A/scripts.pory"
	hidemoneybox
# 312 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ChillingWaterTutor_18:
# 332 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ZONE3A_MOVE_TUTOR_TAUGHT_CHILLING_WATER
	goto Zone3A_EventScript_ChillingWaterTutor_17


# 344 "data/maps/Zone3A/scripts.pory"

# 345 "data/maps/Zone3A/scripts.pory"

# 346 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Patrick::
# 347 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PATRICK, Zone3A_Text_PatrickIntro, Zone3A_Text_PatrickDefeat
# 348 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/Zone3A/scripts.pory"
	end
# 350 "data/maps/Zone3A/scripts.pory"

# 351 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickIntro:
# 352 "data/maps/Zone3A/scripts.pory"
	.string "My friends call me the free Exp guy,\n"
# 353 "data/maps/Zone3A/scripts.pory"
	.string "but I'll prove them wrong!$"
# 354 "data/maps/Zone3A/scripts.pory"

# 355 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickDefeat:
# 356 "data/maps/Zone3A/scripts.pory"
	.string "Oops, guess not…$"
# 357 "data/maps/Zone3A/scripts.pory"

# 358 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickPostBattle:
# 359 "data/maps/Zone3A/scripts.pory"
	.string "I guess I am the free Exp guy…$"
# 360 "data/maps/Zone3A/scripts.pory"

# 361 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Jemma::
# 362 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEMMA, Zone3A_Text_JemmaIntro, Zone3A_Text_JemmaDefeat
# 363 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_JemmaPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Zone3A/scripts.pory"
	end
# 365 "data/maps/Zone3A/scripts.pory"

# 366 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaIntro:
# 367 "data/maps/Zone3A/scripts.pory"
	.string "Hey! You have to pay to cross!$"
# 368 "data/maps/Zone3A/scripts.pory"

# 369 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaDefeat:
# 370 "data/maps/Zone3A/scripts.pory"
	.string "Uh… You can go for free!$"
# 371 "data/maps/Zone3A/scripts.pory"

# 372 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaPostBattle:
# 373 "data/maps/Zone3A/scripts.pory"
	.string "I was scamming people so well too…$"
# 374 "data/maps/Zone3A/scripts.pory"

# 375 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Annabelle::
# 376 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ANNABELLE, Zone3A_Text_AnnabelleIntro, Zone3A_Text_AnnabelleDefeat
# 377 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_AnnabellePostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Zone3A/scripts.pory"
	end
# 379 "data/maps/Zone3A/scripts.pory"

# 380 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabelleIntro:
# 381 "data/maps/Zone3A/scripts.pory"
	.string "I wonder what day it is…$"
# 382 "data/maps/Zone3A/scripts.pory"

# 383 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabelleDefeat:
# 384 "data/maps/Zone3A/scripts.pory"
	.string "Apparently it's defeat day!$"
# 385 "data/maps/Zone3A/scripts.pory"

# 386 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabellePostBattle:
# 387 "data/maps/Zone3A/scripts.pory"
	.string "Tomorrow will be another day.$"
# 388 "data/maps/Zone3A/scripts.pory"

# 389 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Boris::
# 390 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BORIS, Zone3A_Text_BorisIntro, Zone3A_Text_BorisDefeat
# 391 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_BorisPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Zone3A/scripts.pory"
	end
# 393 "data/maps/Zone3A/scripts.pory"

# 394 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisIntro:
# 395 "data/maps/Zone3A/scripts.pory"
	.string "Never give up, never surrender!$"
# 396 "data/maps/Zone3A/scripts.pory"

# 397 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisDefeat:
# 398 "data/maps/Zone3A/scripts.pory"
	.string "I surrender!$"
# 399 "data/maps/Zone3A/scripts.pory"

# 400 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisPostBattle:
# 401 "data/maps/Zone3A/scripts.pory"
	.string "I'm a hypocrite, I know.$"
# 402 "data/maps/Zone3A/scripts.pory"

# 403 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Richard::
# 404 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RICHARD, Zone3A_Text_RichardIntro, Zone3A_Text_RichardDefeat
# 405 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/Zone3A/scripts.pory"
	end
# 407 "data/maps/Zone3A/scripts.pory"

# 408 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardIntro:
# 409 "data/maps/Zone3A/scripts.pory"
	.string "I have far too much money to deal\n"
# 410 "data/maps/Zone3A/scripts.pory"
	.string "with the likes of you!$"
# 411 "data/maps/Zone3A/scripts.pory"

# 412 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardDefeat:
# 413 "data/maps/Zone3A/scripts.pory"
	.string "Agh! My money!$"
# 414 "data/maps/Zone3A/scripts.pory"

# 415 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardPostBattle:
# 416 "data/maps/Zone3A/scripts.pory"
	.string "Do you think I can buy humility\n"
# 417 "data/maps/Zone3A/scripts.pory"
	.string "with my money?$"

Zone3A_EventScript_TriggerLeviathan_Text_0:
# 30 "data/maps/Zone3A/scripts.pory"
	.string "This looks like someone's home!\nGo inside?$"

Zone3A_EventScript_TriggerLeviathan_Text_1:
# 63 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah!$"

Zone3A_EventScript_TriggerLeviathan_Text_2:
# 66 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Phillipa? Are you ok?$"

Zone3A_EventScript_TriggerLeviathan_Text_3:
# 75 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Oh!$"

Zone3A_EventScript_TriggerLeviathan_Text_4:
# 81 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I see.\p"
	.string "You must have defeated my daughter in\n"
	.string "battle.\p"
	.string "Don't worry, I'll go talk to her.$"

Zone3A_EventScript_TriggerLeviathan_Text_5:
# 84 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Hey, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_6:
# 87 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah! Daddy! I lost!$"

Zone3A_EventScript_TriggerLeviathan_Text_7:
# 88 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I know, love, but sometimes we\n"
	.string "lose, and that's life. We have to face\l"
	.string "our losses with honor, right?$"

Zone3A_EventScript_TriggerLeviathan_Text_8:
# 90 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff…\p"
	.string "Okay…$"

Zone3A_EventScript_TriggerLeviathan_Text_9:
# 94 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: What do you say?$"

Zone3A_EventScript_TriggerLeviathan_Text_10:
# 95 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff… Thank you very much\n"
	.string "for the battle!$"

Zone3A_EventScript_TriggerLeviathan_Text_11:
# 96 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm proud of you, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_12:
# 101 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Thanks for being a good sport.\p"
	.string "Here, I want you to have this.$"

Zone3A_EventScript_TriggerLeviathan_Text_13:
# 107 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Alright, that's enough excitement\n"
	.string "for one day.\p"
	.string "It's dinner time.$"

Zone3A_EventScript_TriggerLeviathan_Text_14:
# 110 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Food!$"

Zone3A_EventScript_Breeder_Text_0:
# 173 "data/maps/Zone3A/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone3A_EventScript_Breeder_Text_1:
# 177 "data/maps/Zone3A/scripts.pory"
	.string "I know some people think of them as\n"
	.string "weak Pokémon…\p"
	.string "But Skitty and Sunkern are my\n"
	.string "favorites!\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Skitty\l"
	.string "or a Sunkern.$"

Zone3A_EventScript_Breeder_Text_2:
# 186 "data/maps/Zone3A/scripts.pory"
	.string "Aww… It's so cute!\p"
	.string "Take this evolution item!$"

Zone3A_EventScript_Breeder_Text_3:
# 190 "data/maps/Zone3A/scripts.pory"
	.string "I already gave you all the Skitty\n"
	.string "evolution items I have!$"

Zone3A_EventScript_Breeder_Text_4:
# 198 "data/maps/Zone3A/scripts.pory"
	.string "I already gave you all the Sunkern\n"
	.string "evolution items I have!$"

Zone3A_EventScript_Breeder_Text_5:
# 201 "data/maps/Zone3A/scripts.pory"
	.string "That's not a Skitty nor a Sunkern!$"

Zone3A_EventScript_Surveil_Text_0:
# 282 "data/maps/Zone3A/scripts.pory"
	.string "Trainer Tips\p"
	.string "In battle, you can use Surveil to see\n"
	.string "the opponent's team.\p"
	.string "If you want to see full team\n"
	.string "information, you can turn on the Full\l"
	.string "Info setting by speaking to Colress.$"

Zone3A_EventScript_ChillingWaterTutor_Text_0:
# 291 "data/maps/Zone3A/scripts.pory"
	.string "Ho there, trainer!\p"
	.string "Are your Water Pokémon interested in\n"
	.string "learning a new technique? I call it:\l"
	.string "Chilling Water!\p"
	.string "I can teach one of your Pokémon\n"
	.string "Chilling Water for the low price of ¥500.\l"
	.string "Interested?$"

Zone3A_EventScript_ChillingWaterTutor_Text_1:
# 294 "data/maps/Zone3A/scripts.pory"
	.string "Good day to you!$"

Zone3A_EventScript_ChillingWaterTutor_Text_2:
# 299 "data/maps/Zone3A/scripts.pory"
	.string "Ho there, trainer!\p"
	.string "Are your Water Pokémon interested in\n"
	.string "learning a new technique? I call it:\l"
	.string "Chilling Water!\p"
	.string "I can teach one of your Pokémon\n"
	.string "Chilling Water. First time is free, while\l"
	.string "subsequent times cost ¥500!\l"
	.string "Interested?$"

Zone3A_EventScript_ChillingWaterTutor_Text_3:
# 310 "data/maps/Zone3A/scripts.pory"
	.string "Hate to break it to you, but you don't have enough money.$"

Zone3A_EventScript_ChillingWaterTutor_Text_4:
# 319 "data/maps/Zone3A/scripts.pory"
	.string "Which Pokémon should learn\n{STR_VAR_1}?$"

Zone3A_EventScript_ChillingWaterTutor_Text_5:
# 330 "data/maps/Zone3A/scripts.pory"
	.string "There! It's done. Use that move well!$"

Zone3A_EventScript_ChillingWaterTutor_Text_6:
# 336 "data/maps/Zone3A/scripts.pory"
	.string "{PLAYER} paid ¥500.$"

Zone3A_Text_Leviathan3Intro::
# 128 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: You! How dare you intrude on\n"
	.string "my home!\p"
	.string "I am Phillipa, the all powerful!$"

Zone3A_Text_Leviathan3Defeat::
# 133 "data/maps/Zone3A/scripts.pory"
	.string "Wah!!!$"
