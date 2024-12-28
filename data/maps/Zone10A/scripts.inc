Zone10A_MapScripts::
# 2 "data/maps/Zone10A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_GEMS, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_RANDOM_1, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_BLACK_GLASSES, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_TM_SCORCHING_SANDS, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21
# 31 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 29 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone10A_EventScript_Adamina::
# 37 "data/maps/Zone10A/scripts.pory"
	lock
# 38 "data/maps/Zone10A/scripts.pory"
	faceplayer
# 39 "data/maps/Zone10A/scripts.pory"
	compare VAR_ZONE_10_STATE, 0
	goto_if_eq Zone10A_EventScript_Adamina_2
Zone10A_EventScript_Adamina_1:
# 43 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_Explain, MSGBOX_AUTOCLOSE
# 44 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_1, Zone10A_EventScript_Adamina_5
# 45 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_2, Zone10A_EventScript_Adamina_5
# 46 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_3, Zone10A_EventScript_Adamina_5
# 50 "data/maps/Zone10A/scripts.pory"
	fadeoutbgm 1
# 51 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_FoundEm, MSGBOX_AUTOCLOSE
# 52 "data/maps/Zone10A/scripts.pory"
	delay 96
# 53 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_CrushYou
# 54 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 55 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10A_EventScript_Adamina_12
# 55 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone10A_EventScript_Adamina_12
# 58 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9, Zone10A_Text_Leviathan9Defeat
Zone10A_EventScript_Adamina_11:
# 60 "data/maps/Zone10A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 61 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_HeadInside, MSGBOX_AUTOCLOSE
# 62 "data/maps/Zone10A/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 63 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone10A/scripts.pory"
	opendoor 47, 27
# 65 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 66 "data/maps/Zone10A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 67 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 69 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_9
# 70 "data/maps/Zone10A/scripts.pory"
	closedoor 47, 27
# 71 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 72 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Adamina_2:
# 40 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_NoChance
# 41 "data/maps/Zone10A/scripts.pory"
	setvar VAR_ZONE_10_STATE, 1
	goto Zone10A_EventScript_Adamina_1

Zone10A_EventScript_Adamina_5:
# 47 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Adamina_12:
# 56 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9_CHALLENGE, Zone10A_Text_Leviathan9Defeat
	goto Zone10A_EventScript_Adamina_11


Zone10A_EventScript_ItemGems::
# 121 "data/maps/Zone10A/scripts.pory"
	lock
# 122 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_GEMS, Zone10A_EventScript_ItemGems_2
# 127 "data/maps/Zone10A/scripts.pory"
	waitse
# 128 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 129 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 130 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_GEMS
# 131 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 132 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_FIRE_GEM
# 133 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_ELECTRIC_GEM
# 134 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_GROUND_GEM
# 135 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_ItemGems_2:
# 123 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 124 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_SoftSand::
# 140 "data/maps/Zone10A/scripts.pory"
	lock
# 141 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_EventScript_SoftSand_2
# 146 "data/maps/Zone10A/scripts.pory"
	waitse
# 147 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 148 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 149 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_SOFT_SAND
# 150 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 151 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_SOFT_SAND, 1
# 152 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_SoftSand_2:
# 142 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 143 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_Random1::
# 157 "data/maps/Zone10A/scripts.pory"
	lock
# 158 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_RANDOM_1, Zone10A_EventScript_Random1_2
# 163 "data/maps/Zone10A/scripts.pory"
	waitse
# 164 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 165 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 166 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_RANDOM_1
# 167 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 168 "data/maps/Zone10A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 169 "data/maps/Zone10A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 170 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Random1_2:
# 159 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 160 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_BlackGlasses::
# 175 "data/maps/Zone10A/scripts.pory"
	lock
# 176 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_BLACK_GLASSES, Zone10A_EventScript_BlackGlasses_2
# 181 "data/maps/Zone10A/scripts.pory"
	waitse
# 182 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 183 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 184 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_BLACK_GLASSES
# 185 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 186 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_BLACK_GLASSES, 1
# 187 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_BlackGlasses_2:
# 177 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 178 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_ItemTMScorchingSands::
# 192 "data/maps/Zone10A/scripts.pory"
	lock
# 193 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_TM_SCORCHING_SANDS, Zone10A_EventScript_ItemTMScorchingSands_2
# 198 "data/maps/Zone10A/scripts.pory"
	waitse
# 199 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 201 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_TM_SCORCHING_SANDS
# 202 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 203 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_TM_SCORCHING_SANDS, 1
# 204 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_ItemTMScorchingSands_2:
# 194 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 195 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_HeavyDutyBoots::
# 209 "data/maps/Zone10A/scripts.pory"
	lock
# 210 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_EventScript_HeavyDutyBoots_2
# 215 "data/maps/Zone10A/scripts.pory"
	waitse
# 216 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 217 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 218 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS
# 219 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 220 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 221 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_HeavyDutyBoots_2:
# 211 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 212 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_ParasolLady::
# 226 "data/maps/Zone10A/scripts.pory"
	lock
# 227 "data/maps/Zone10A/scripts.pory"
	faceplayer
# 228 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES, Zone10A_EventScript_ParasolLady_2
Zone10A_EventScript_ParasolLady_1:
# 233 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_ParasolLady_Text_1
# 234 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_ParasolLady_2:
# 229 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_ParasolLady_Text_0, MSGBOX_DEFAULT
# 230 "data/maps/Zone10A/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 231 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES
	goto Zone10A_EventScript_ParasolLady_1


Zone10A_EventScript_Alana::
# 239 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ALANA, Zone10A_EventScript_Alana_Text_0, Zone10A_EventScript_Alana_Text_1
# 240 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Alana_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Jacob::
# 245 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JACOB, Zone10A_EventScript_Jacob_Text_0, Zone10A_EventScript_Jacob_Text_1
# 246 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Jacob_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Dewey::
# 251 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DEWEY, Zone10A_EventScript_Dewey_Text_0, Zone10A_EventScript_Dewey_Text_1
# 252 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Dewey_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Ernest::
# 257 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ERNEST, Zone10A_EventScript_Ernest_Text_0, Zone10A_EventScript_Ernest_Text_1
# 258 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Ernest_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Kyle::
# 263 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KYLE, Zone10A_EventScript_Kyle_Text_0, Zone10A_EventScript_Kyle_Text_1
# 264 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Kyle_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Elias::
# 269 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ELIAS, Zone10A_EventScript_Elias_Text_0, Zone10A_EventScript_Elias_Text_1
# 270 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Elias_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Pearlie::
# 275 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PEARLIE, Zone10A_EventScript_Pearlie_Text_0, Zone10A_EventScript_Pearlie_Text_1
# 276 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Pearlie_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Susan::
# 281 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SUSAN, Zone10A_EventScript_Susan_Text_0, Zone10A_EventScript_Susan_Text_1
# 282 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Pearlie_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Conrad::
# 287 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONRAD, Zone10A_EventScript_Conrad_Text_0, Zone10A_EventScript_Conrad_Text_1
# 288 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Conrad_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_Brett::
# 293 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BRETT, Zone10A_EventScript_Brett_Text_0, Zone10A_EventScript_Brett_Text_1
# 294 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Brett_Text_2, MSGBOX_AUTOCLOSE
	end


Zone10A_EventScript_ParasolLady_Text_0:
# 229 "data/maps/Zone10A/scripts.pory"
	.string "Hey there! This sandstorm is fierce for\n"
	.string "those unprepared!\p"
	.string "It's not safe to be out in the\n"
	.string "sandstorm for long periods of time, so\l"
	.string "take this!$"

Zone10A_EventScript_ParasolLady_Text_1:
# 233 "data/maps/Zone10A/scripts.pory"
	.string "Remember kids, safety first!$"

Zone10A_EventScript_Alana_Text_0:
# 239 "data/maps/Zone10A/scripts.pory"
	.string "Pfft!$"

Zone10A_EventScript_Alana_Text_1:
# 239 "data/maps/Zone10A/scripts.pory"
	.string "Sorry, I didn't mean to be rude!$"

Zone10A_EventScript_Alana_Text_2:
# 240 "data/maps/Zone10A/scripts.pory"
	.string "Some sand flew into my mouth so I had\n"
	.string "to get it out!$"

Zone10A_EventScript_Jacob_Text_0:
# 245 "data/maps/Zone10A/scripts.pory"
	.string "Even with a sandstorm, birds can still\n"
	.string "fly high!$"

Zone10A_EventScript_Jacob_Text_1:
# 245 "data/maps/Zone10A/scripts.pory"
	.string "But sometimes it's better to land and\n"
	.string "rest!$"

Zone10A_EventScript_Jacob_Text_2:
# 246 "data/maps/Zone10A/scripts.pory"
	.string "I should really go take a rest at the\n"
	.string "rest house.$"

Zone10A_EventScript_Dewey_Text_0:
# 251 "data/maps/Zone10A/scripts.pory"
	.string "I think there's an entrance to some\n"
	.string "ruins somewhere around here…$"

Zone10A_EventScript_Dewey_Text_1:
# 251 "data/maps/Zone10A/scripts.pory"
	.string "No ruins in sight!$"

Zone10A_EventScript_Dewey_Text_2:
# 252 "data/maps/Zone10A/scripts.pory"
	.string "My map says the ruins are to the north\n"
	.string "somewhere…$"

Zone10A_EventScript_Ernest_Text_0:
# 257 "data/maps/Zone10A/scripts.pory"
	.string "I came prepared for the wrath of the\n"
	.string "desert!$"

Zone10A_EventScript_Ernest_Text_1:
# 257 "data/maps/Zone10A/scripts.pory"
	.string "But I was not prepared for you!$"

Zone10A_EventScript_Ernest_Text_2:
# 258 "data/maps/Zone10A/scripts.pory"
	.string "Preparations are important, be it for\n"
	.string "hiking or battling!$"

Zone10A_EventScript_Kyle_Text_0:
# 263 "data/maps/Zone10A/scripts.pory"
	.string "I daydream a lot. It's a bad habit!$"

Zone10A_EventScript_Kyle_Text_1:
# 263 "data/maps/Zone10A/scripts.pory"
	.string "I dream of one day winning…$"

Zone10A_EventScript_Kyle_Text_2:
# 264 "data/maps/Zone10A/scripts.pory"
	.string "I'll be a winner some day, just you wait!$"

Zone10A_EventScript_Elias_Text_0:
# 269 "data/maps/Zone10A/scripts.pory"
	.string "Tell me, have you faced the power of\n"
	.string "Dragons?$"

Zone10A_EventScript_Elias_Text_1:
# 269 "data/maps/Zone10A/scripts.pory"
	.string "No! My Dragons!$"

Zone10A_EventScript_Elias_Text_2:
# 270 "data/maps/Zone10A/scripts.pory"
	.string "I must train them further!$"

Zone10A_EventScript_Pearlie_Text_0:
# 275 "data/maps/Zone10A/scripts.pory"
	.string "Backpacking together is safer!$"

Zone10A_EventScript_Pearlie_Text_1:
# 275 "data/maps/Zone10A/scripts.pory"
	.string "At least I have Susan!$"

Zone10A_EventScript_Pearlie_Text_2:
# 276 "data/maps/Zone10A/scripts.pory"
	.string "We really like backpacking together.$"

Zone10A_EventScript_Susan_Text_0:
# 281 "data/maps/Zone10A/scripts.pory"
	.string "Backpacking together makes us\n"
	.string "stronger!$"

Zone10A_EventScript_Susan_Text_1:
# 281 "data/maps/Zone10A/scripts.pory"
	.string "At least I have Pearlie!$"

Zone10A_EventScript_Conrad_Text_0:
# 287 "data/maps/Zone10A/scripts.pory"
	.string "Sand keeps getting in my lunch, so I'll\n"
	.string "take out my frustration on you!$"

Zone10A_EventScript_Conrad_Text_1:
# 287 "data/maps/Zone10A/scripts.pory"
	.string "Ugh! Now there's sand everywhere!$"

Zone10A_EventScript_Conrad_Text_2:
# 288 "data/maps/Zone10A/scripts.pory"
	.string "I don't like sand.\n"
	.string "It's coarse and rough and irritating\l"
	.string "and it gets everywhere.$"

Zone10A_EventScript_Brett_Text_0:
# 293 "data/maps/Zone10A/scripts.pory"
	.string "My friend told me I could find an oasis\n"
	.string "in the desert, so I've come to fish!$"

Zone10A_EventScript_Brett_Text_1:
# 293 "data/maps/Zone10A/scripts.pory"
	.string "Uh… I'm realizing now she didn't mean a\n"
	.string "literal oasis.$"

Zone10A_EventScript_Brett_Text_2:
# 294 "data/maps/Zone10A/scripts.pory"
	.string "There doesn't seem to be any water\n"
	.string "anywhere…\p"
	.string "My friend gave me bad advice!$"

Zone10A_Text_NoChance::
# 76 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "…\l"
	.string "…\l"
	.string "…\l"
	.string "Fine.$"

Zone10A_Text_Explain::
# 88 "data/maps/Zone10A/scripts.pory"
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Blue Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

Zone10A_Text_FoundEm::
# 97 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, wow, you actually\n"
	.string "found them? What a surprise.$"

Zone10A_Text_CrushYou::
# 102 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, were you expecting me\n"
	.string "to let you in just because you\l"
	.string "found some scraps? No way.\p"
	.string "You'll have to beat me in a battle\n"
	.string "to earn my respect!\l"
	.string "I'm gonna crush you!$"

Zone10A_Text_Leviathan9Defeat::
# 111 "data/maps/Zone10A/scripts.pory"
	.string "Adamina: Fine. A win is a win.$"

Zone10A_Text_HeadInside::
# 115 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"
