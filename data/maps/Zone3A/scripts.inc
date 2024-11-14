Zone3A_MapScripts::
# 2 "data/maps/Zone3A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_SUPER_POTION, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_REPEL, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_PARALYZE_HEAL, Zone3A_MapScripts_MAP_SCRIPT_ON_RESUME_10
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
# 61 "data/maps/Zone3A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
# 62 "data/maps/Zone3A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PHILLIPA_LEVIATHAN_3, Zone3A_Text_Leviathan3Defeat
Zone3A_EventScript_TriggerLeviathan_4:
# 64 "data/maps/Zone3A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 65 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_1
# 66 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Zone3A_Movement_Phillipa_RunAway
# 67 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_2
# 69 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 70 "data/maps/Zone3A/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 72 "data/maps/Zone3A/scripts.pory"
	waitse
# 73 "data/maps/Zone3A/scripts.pory"
	addobject 2
# 74 "data/maps/Zone3A/scripts.pory"
	clearflag FLAG_HIDE_ZONE3A_REMI
# 75 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 76 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 77 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_3
# 78 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 79 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 80 "data/maps/Zone3A/scripts.pory"
	delay 32
# 81 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 82 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 83 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_4
# 84 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkToPhillipa
# 85 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 86 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_5, MSGBOX_DEFAULT
# 87 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 88 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 89 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_6, MSGBOX_DEFAULT
# 90 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_7
# 91 "data/maps/Zone3A/scripts.pory"
	delay 32
# 92 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_8
# 93 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkBack
# 94 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Zone3A_Movement_Phillipa_WalkBack
# 95 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 96 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_9, MSGBOX_DEFAULT
# 97 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_10, MSGBOX_DEFAULT
# 98 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_11
# 99 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkToPlayer
# 100 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 101 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 102 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 103 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_12, MSGBOX_DEFAULT
# 104 "data/maps/Zone3A/scripts.pory"
	giveitem ITEM_GOOD_ROD, 1
# 105 "data/maps/Zone3A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 106 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 107 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Zone3A_Movement_Remi_WalkBackToPhillipa
# 108 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 109 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_13, MSGBOX_DEFAULT
# 110 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 111 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 112 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_EventScript_TriggerLeviathan_Text_14
# 113 "data/maps/Zone3A/scripts.pory"
	closemessage
# 114 "data/maps/Zone3A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 115 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_PHILLIPA
# 117 "data/maps/Zone3A/scripts.pory"
	removeobject 1
# 118 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 119 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 120 "data/maps/Zone3A/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 121 "data/maps/Zone3A/scripts.pory"
	waitmovement 0
# 122 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_HIDE_ZONE3A_REMI
# 123 "data/maps/Zone3A/scripts.pory"
	removeobject 2
# 124 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_3
# 125 "data/maps/Zone3A/scripts.pory"
	setvar VAR_ZONE_3_STATE, 1
# 126 "data/maps/Zone3A/scripts.pory"
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
	setvar VAR_MUGSHOT_ID, MUGSHOT_PHILLIPA
# 59 "data/maps/Zone3A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL, Zone3A_Text_Leviathan3Defeat
	goto Zone3A_EventScript_TriggerLeviathan_4


# 139 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Phillipa_RunAway:
# 140 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 140 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 140 "data/maps/Zone3A/scripts.pory"
	walk_fast_left
# 141 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
# 141 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
# 141 "data/maps/Zone3A/scripts.pory"
	walk_fast_up
	step_end

# 144 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkToPhillipa:
# 145 "data/maps/Zone3A/scripts.pory"
	walk_left
# 145 "data/maps/Zone3A/scripts.pory"
	walk_left
# 145 "data/maps/Zone3A/scripts.pory"
	walk_left
# 146 "data/maps/Zone3A/scripts.pory"
	walk_up
# 146 "data/maps/Zone3A/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkBack:
# 150 "data/maps/Zone3A/scripts.pory"
	walk_down
# 150 "data/maps/Zone3A/scripts.pory"
	walk_down
# 151 "data/maps/Zone3A/scripts.pory"
	walk_right
# 151 "data/maps/Zone3A/scripts.pory"
	walk_right
# 151 "data/maps/Zone3A/scripts.pory"
	walk_right
# 151 "data/maps/Zone3A/scripts.pory"
	walk_right
# 152 "data/maps/Zone3A/scripts.pory"
	face_down
	step_end

# 155 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Phillipa_WalkBack:
# 156 "data/maps/Zone3A/scripts.pory"
	walk_down
# 156 "data/maps/Zone3A/scripts.pory"
	walk_down
# 156 "data/maps/Zone3A/scripts.pory"
	walk_down
# 157 "data/maps/Zone3A/scripts.pory"
	walk_right
# 157 "data/maps/Zone3A/scripts.pory"
	walk_right
# 157 "data/maps/Zone3A/scripts.pory"
	walk_right
# 158 "data/maps/Zone3A/scripts.pory"
	face_down
	step_end

# 161 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkToPlayer:
# 162 "data/maps/Zone3A/scripts.pory"
	walk_down
# 163 "data/maps/Zone3A/scripts.pory"
	face_left
	step_end

# 166 "data/maps/Zone3A/scripts.pory"
Zone3A_Movement_Remi_WalkBackToPhillipa:
# 167 "data/maps/Zone3A/scripts.pory"
	walk_up
# 168 "data/maps/Zone3A/scripts.pory"
	face_left
	step_end

Zone3A_EventScript_ItemSuperPotion::
# 172 "data/maps/Zone3A/scripts.pory"
	lock
# 173 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_SUPER_POTION, Zone3A_EventScript_ItemSuperPotion_2
# 178 "data/maps/Zone3A/scripts.pory"
	waitse
# 179 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 180 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 181 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_SUPER_POTION
# 182 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 183 "data/maps/Zone3A/scripts.pory"
	finditem ITEM_SUPER_POTION, 1
# 184 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemSuperPotion_2:
# 174 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 175 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemRepel::
# 189 "data/maps/Zone3A/scripts.pory"
	lock
# 190 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_REPEL, Zone3A_EventScript_ItemRepel_2
# 195 "data/maps/Zone3A/scripts.pory"
	waitse
# 196 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 197 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 198 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_REPEL
# 199 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 200 "data/maps/Zone3A/scripts.pory"
	finditem ITEM_REPEL, 1
# 201 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemRepel_2:
# 191 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 192 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemParalyzeHeal::
# 206 "data/maps/Zone3A/scripts.pory"
	lock
# 207 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_PARALYZE_HEAL, Zone3A_EventScript_ItemParalyzeHeal_2
# 212 "data/maps/Zone3A/scripts.pory"
	waitse
# 213 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 214 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 215 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_PARALYZE_HEAL
# 216 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 217 "data/maps/Zone3A/scripts.pory"
	finditem ITEM_PARALYZE_HEAL, 1
# 218 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemParalyzeHeal_2:
# 208 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 209 "data/maps/Zone3A/scripts.pory"
	release
	end


Zone3A_EventScript_ItemHyperPotion::
# 223 "data/maps/Zone3A/scripts.pory"
	lock
# 224 "data/maps/Zone3A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE3A_HYPER_POTION, Zone3A_EventScript_ItemHyperPotion_2
# 229 "data/maps/Zone3A/scripts.pory"
	waitse
# 230 "data/maps/Zone3A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 231 "data/maps/Zone3A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 232 "data/maps/Zone3A/scripts.pory"
	setflag FLAG_ITEM_ZONE3A_HYPER_POTION
# 233 "data/maps/Zone3A/scripts.pory"
	addobject VAR_LAST_TALKED
# 234 "data/maps/Zone3A/scripts.pory"
	finditem ITEM_HYPER_POTION, 1
# 235 "data/maps/Zone3A/scripts.pory"
	release
	end

Zone3A_EventScript_ItemHyperPotion_2:
# 225 "data/maps/Zone3A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 226 "data/maps/Zone3A/scripts.pory"
	release
	end


# 239 "data/maps/Zone3A/scripts.pory"

# 240 "data/maps/Zone3A/scripts.pory"

# 241 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Patrick::
# 242 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PATRICK, Zone3A_Text_PatrickIntro, Zone3A_Text_PatrickDefeat
# 243 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_PatrickPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Zone3A/scripts.pory"
	end
# 245 "data/maps/Zone3A/scripts.pory"

# 246 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickIntro:
# 247 "data/maps/Zone3A/scripts.pory"
	.string "My friends call me the free Exp guy,\n"
# 248 "data/maps/Zone3A/scripts.pory"
	.string "but I'll prove them wrong!$"
# 249 "data/maps/Zone3A/scripts.pory"

# 250 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickDefeat:
# 251 "data/maps/Zone3A/scripts.pory"
	.string "Oops, guess not…$"
# 252 "data/maps/Zone3A/scripts.pory"

# 253 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_PatrickPostBattle:
# 254 "data/maps/Zone3A/scripts.pory"
	.string "I guess I am the free Exp guy…$"
# 255 "data/maps/Zone3A/scripts.pory"

# 256 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Jemma::
# 257 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEMMA, Zone3A_Text_JemmaIntro, Zone3A_Text_JemmaDefeat
# 258 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_JemmaPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Zone3A/scripts.pory"
	end
# 260 "data/maps/Zone3A/scripts.pory"

# 261 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaIntro:
# 262 "data/maps/Zone3A/scripts.pory"
	.string "Hey! You have to pay to cross!$"
# 263 "data/maps/Zone3A/scripts.pory"

# 264 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaDefeat:
# 265 "data/maps/Zone3A/scripts.pory"
	.string "Uh… You can go for free!$"
# 266 "data/maps/Zone3A/scripts.pory"

# 267 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_JemmaPostBattle:
# 268 "data/maps/Zone3A/scripts.pory"
	.string "I was scamming people so well too…$"
# 269 "data/maps/Zone3A/scripts.pory"

# 270 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Annabelle::
# 271 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ANNABELLE, Zone3A_Text_AnnabelleIntro, Zone3A_Text_AnnabelleDefeat
# 272 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_AnnabellePostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Zone3A/scripts.pory"
	end
# 274 "data/maps/Zone3A/scripts.pory"

# 275 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabelleIntro:
# 276 "data/maps/Zone3A/scripts.pory"
	.string "I wonder what day it is…$"
# 277 "data/maps/Zone3A/scripts.pory"

# 278 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabelleDefeat:
# 279 "data/maps/Zone3A/scripts.pory"
	.string "Apparently it's defeat day!$"
# 280 "data/maps/Zone3A/scripts.pory"

# 281 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_AnnabellePostBattle:
# 282 "data/maps/Zone3A/scripts.pory"
	.string "Tomorrow will be another day.$"
# 283 "data/maps/Zone3A/scripts.pory"

# 284 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Boris::
# 285 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BORIS, Zone3A_Text_BorisIntro, Zone3A_Text_BorisDefeat
# 286 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_BorisPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Zone3A/scripts.pory"
	end
# 288 "data/maps/Zone3A/scripts.pory"

# 289 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisIntro:
# 290 "data/maps/Zone3A/scripts.pory"
	.string "Never give up, never surrender!$"
# 291 "data/maps/Zone3A/scripts.pory"

# 292 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisDefeat:
# 293 "data/maps/Zone3A/scripts.pory"
	.string "I surrender!$"
# 294 "data/maps/Zone3A/scripts.pory"

# 295 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_BorisPostBattle:
# 296 "data/maps/Zone3A/scripts.pory"
	.string "I'm a hypocrite, I know.$"
# 297 "data/maps/Zone3A/scripts.pory"

# 298 "data/maps/Zone3A/scripts.pory"
Zone3A_EventScript_Richard::
# 299 "data/maps/Zone3A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RICHARD, Zone3A_Text_RichardIntro, Zone3A_Text_RichardDefeat
# 300 "data/maps/Zone3A/scripts.pory"
	msgbox Zone3A_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Zone3A/scripts.pory"
	end
# 302 "data/maps/Zone3A/scripts.pory"

# 303 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardIntro:
# 304 "data/maps/Zone3A/scripts.pory"
	.string "I have far too much money to deal\n"
# 305 "data/maps/Zone3A/scripts.pory"
	.string "with the likes of you!$"
# 306 "data/maps/Zone3A/scripts.pory"

# 307 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardDefeat:
# 308 "data/maps/Zone3A/scripts.pory"
	.string "Agh! My money!$"
# 309 "data/maps/Zone3A/scripts.pory"

# 310 "data/maps/Zone3A/scripts.pory"
Zone3A_Text_RichardPostBattle:
# 311 "data/maps/Zone3A/scripts.pory"
	.string "Do you think I can buy humility\n"
# 312 "data/maps/Zone3A/scripts.pory"
	.string "with my money?$"

Zone3A_EventScript_TriggerLeviathan_Text_0:
# 30 "data/maps/Zone3A/scripts.pory"
	.string "This looks like someone's home!\nGo inside?$"

Zone3A_EventScript_TriggerLeviathan_Text_1:
# 65 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah!$"

Zone3A_EventScript_TriggerLeviathan_Text_2:
# 68 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Phillipa? Are you ok?$"

Zone3A_EventScript_TriggerLeviathan_Text_3:
# 77 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Oh!$"

Zone3A_EventScript_TriggerLeviathan_Text_4:
# 83 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I see.\p"
	.string "You must have defeated my daughter in\n"
	.string "battle.\p"
	.string "Don't worry, I'll go talk to her.$"

Zone3A_EventScript_TriggerLeviathan_Text_5:
# 86 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Hey, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_6:
# 89 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Wah! Daddy! I lost!$"

Zone3A_EventScript_TriggerLeviathan_Text_7:
# 90 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I know, love, but sometimes we\n"
	.string "lose, and that's life. We have to face\l"
	.string "our losses with honor, right?$"

Zone3A_EventScript_TriggerLeviathan_Text_8:
# 92 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff…\p"
	.string "Okay…$"

Zone3A_EventScript_TriggerLeviathan_Text_9:
# 96 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: What do you say?$"

Zone3A_EventScript_TriggerLeviathan_Text_10:
# 97 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Sniff… Thank you very much\n"
	.string "for the battle!$"

Zone3A_EventScript_TriggerLeviathan_Text_11:
# 98 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm proud of you, kiddo.$"

Zone3A_EventScript_TriggerLeviathan_Text_12:
# 103 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Thanks for being a good sport.\p"
	.string "Here, I want you to have this.$"

Zone3A_EventScript_TriggerLeviathan_Text_13:
# 109 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: Alright, that's enough excitement\n"
	.string "for one day.\p"
	.string "It's dinner time.$"

Zone3A_EventScript_TriggerLeviathan_Text_14:
# 112 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: Food!$"

Zone3A_Text_Leviathan3Intro::
# 130 "data/maps/Zone3A/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: You! How dare you intrude on\n"
	.string "my home!\p"
	.string "I am {COLOR BLUE}Leviathan Phillipa{COLOR DARK_GRAY}, all powerful!$"

Zone3A_Text_Leviathan3Defeat::
# 135 "data/maps/Zone3A/scripts.pory"
	.string "Wah!!!$"