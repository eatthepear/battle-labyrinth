Zone15B_MapScripts::
# 2 "data/maps/Zone15B/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone15B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone15B_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone15B/scripts.pory"
	map_script_2 VAR_ZONE_15_STATE, 0, Zone15B_EventScript_LeviathanBattle
	.2byte 0


Zone15B_EventScript_LeviathanBattle::
# 8 "data/maps/Zone15B/scripts.pory"
	lockall
# 9 "data/maps/Zone15B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 10 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 11 "data/maps/Zone15B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 12 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 13 "data/maps/Zone15B/scripts.pory"
	msgbox Zone15B_EventScript_LeviathanBattle_Text_0
# 14 "data/maps/Zone15B/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/Zone15B/scripts.pory"
	playse SE_PIN
# 16 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone15B/scripts.pory"
	waitse
# 18 "data/maps/Zone15B/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 19 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone15B/scripts.pory"
	fadeoutbgm 1
# 21 "data/maps/Zone15B/scripts.pory"
	msgbox Zone15B_EventScript_LeviathanBattle_Text_1
# 22 "data/maps/Zone15B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 23 "data/maps/Zone15B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone15B_EventScript_LeviathanBattle_2
# 23 "data/maps/Zone15B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone15B_EventScript_LeviathanBattle_2
# 26 "data/maps/Zone15B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIRAGE_LEVIATHAN_13, Zone15B_Text_Leviathan13Defeat
Zone15B_EventScript_LeviathanBattle_1:
# 28 "data/maps/Zone15B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 29 "data/maps/Zone15B/scripts.pory"
	msgbox Zone15B_EventScript_LeviathanBattle_Text_2
# 30 "data/maps/Zone15B/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 31 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone15B/scripts.pory"
	msgbox Zone15B_EventScript_LeviathanBattle_Text_3
# 33 "data/maps/Zone15B/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 34 "data/maps/Zone15B/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone15B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/maps/Zone15B/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 37 "data/maps/Zone15B/scripts.pory"
	delay 40
# 38 "data/maps/Zone15B/scripts.pory"
	waitmoncry
# 39 "data/maps/Zone15B/scripts.pory"
	removeobject 1
# 40 "data/maps/Zone15B/scripts.pory"
	removeobject 2
# 41 "data/maps/Zone15B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_13
# 42 "data/maps/Zone15B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 43 "data/maps/Zone15B/scripts.pory"
	msgbox Zone15B_EventScript_LeviathanBattle_Text_4
# 44 "data/maps/Zone15B/scripts.pory"
	giveitem ITEM_RED_SHARD, 20
# 45 "data/maps/Zone15B/scripts.pory"
	setvar VAR_ZONE_15_STATE, 1
# 46 "data/maps/Zone15B/scripts.pory"
	releaseall
	end

Zone15B_EventScript_LeviathanBattle_2:
# 24 "data/maps/Zone15B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL, Zone15B_Text_Leviathan13Defeat
	goto Zone15B_EventScript_LeviathanBattle_1


Zone15B_EventScript_LeviathanBattle_Text_0:
# 13 "data/maps/Zone15B/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It appears there's nothing in this\n"
	.string "Zone, {COLOR RED}Porygon{COLOR DARK_GRAY}.\p"
	.string "We should head back and report.$"

Zone15B_EventScript_LeviathanBattle_Text_1:
# 21 "data/maps/Zone15B/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Another AI!\p"
	.string "Even in a place as cold and empty as\n"
	.string "this?\p"
	.string "No matter, my blood is boiling for a\n"
	.string "fight!$"

Zone15B_EventScript_LeviathanBattle_Text_2:
# 29 "data/maps/Zone15B/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: It seems I was mistaken.\nYou're no ordinary AI.$"

Zone15B_EventScript_LeviathanBattle_Text_3:
# 32 "data/maps/Zone15B/scripts.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Command, I've completed the\n"
	.string "assignment. Will relocate immediately.$"

Zone15B_EventScript_LeviathanBattle_Text_4:
# 43 "data/maps/Zone15B/scripts.pory"
	.string "It looks like a bag was left behind!\pInside are… Shards?$"

Zone15B_Text_Leviathan13Defeat::
# 50 "data/maps/Zone15B/scripts.pory"
	.string "…$"
