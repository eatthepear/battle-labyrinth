Zone18A_MapScripts::
# 2 "data/maps/Zone18A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_POTION_2, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_REPEL, Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone18A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone18A_EventScript_PirateEvent::
# 17 "data/maps/Zone18A/scripts.pory"
	lockall
# 18 "data/maps/Zone18A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 19 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_0
# 21 "data/maps/Zone18A/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/Zone18A/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone18A_Movement_CameraDown
# 23 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 24 "data/maps/Zone18A/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 25 "data/maps/Zone18A/scripts.pory"
	addobject 7
# 26 "data/maps/Zone18A/scripts.pory"
	addobject 8
# 27 "data/maps/Zone18A/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_PIRATES
# 28 "data/maps/Zone18A/scripts.pory"
	delay 40
# 29 "data/maps/Zone18A/scripts.pory"
	applymovement 7, Zone18A_Movement_Pirate1_Left
# 30 "data/maps/Zone18A/scripts.pory"
	applymovement 8, Zone18A_Movement_Pirate2_Left
# 31 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_3
# 35 "data/maps/Zone18A/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 36 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_4
# 38 "data/maps/Zone18A/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 39 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone18A/scripts.pory"
	removeobject 6
# 41 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_DOLL
# 42 "data/maps/Zone18A/scripts.pory"
	delay 40
# 43 "data/maps/Zone18A/scripts.pory"
	applymovement 7, Zone18A_Movement_Pirate1_Right
# 44 "data/maps/Zone18A/scripts.pory"
	applymovement 8, Zone18A_Movement_Pirate2_Right
# 45 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 46 "data/maps/Zone18A/scripts.pory"
	removeobject 7
# 47 "data/maps/Zone18A/scripts.pory"
	removeobject 8
# 48 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_PIRATES
# 49 "data/maps/Zone18A/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Zone18A_Movement_CameraUp
# 50 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 51 "data/maps/Zone18A/scripts.pory"
	special RemoveCameraObject
# 52 "data/maps/Zone18A/scripts.pory"
	removeobject 11
# 53 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_HIDE_ZONE18A_BOAT
# 54 "data/maps/Zone18A/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 55 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_5, MSGBOX_DEFAULT
# 57 "data/maps/Zone18A/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 58 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 59 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_6, MSGBOX_DEFAULT
# 60 "data/maps/Zone18A/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 61 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 62 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_PirateEvent_Text_7, MSGBOX_DEFAULT
# 63 "data/maps/Zone18A/scripts.pory"
	giveitem ITEM_DIVING_SUIT
# 64 "data/maps/Zone18A/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 65 "data/maps/Zone18A/scripts.pory"
	waitmovement 0
# 66 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_Eli, MSGBOX_DEFAULT
# 67 "data/maps/Zone18A/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_HIDE_ZONE19D_PIRATES
# 69 "data/maps/Zone18A/scripts.pory"
	setvar VAR_ZONE_18_STATE, 4
# 70 "data/maps/Zone18A/scripts.pory"
	release
	end


# 74 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_CameraDown:
# 75 "data/maps/Zone18A/scripts.pory"
	walk_down
# 75 "data/maps/Zone18A/scripts.pory"
	walk_down
# 75 "data/maps/Zone18A/scripts.pory"
	walk_down
# 75 "data/maps/Zone18A/scripts.pory"
	walk_down
# 75 "data/maps/Zone18A/scripts.pory"
	walk_down
	step_end

# 78 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_Pirate1_Left:
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 79 "data/maps/Zone18A/scripts.pory"
	walk_left
# 80 "data/maps/Zone18A/scripts.pory"
	face_down
	step_end

# 83 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_Pirate2_Left:
# 84 "data/maps/Zone18A/scripts.pory"
	walk_left
# 84 "data/maps/Zone18A/scripts.pory"
	walk_left
# 84 "data/maps/Zone18A/scripts.pory"
	walk_left
# 84 "data/maps/Zone18A/scripts.pory"
	walk_left
# 84 "data/maps/Zone18A/scripts.pory"
	walk_left
	step_end

# 87 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_Pirate1_Right:
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
# 88 "data/maps/Zone18A/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_Pirate2_Right:
# 92 "data/maps/Zone18A/scripts.pory"
	walk_right
# 92 "data/maps/Zone18A/scripts.pory"
	walk_right
# 92 "data/maps/Zone18A/scripts.pory"
	walk_right
# 92 "data/maps/Zone18A/scripts.pory"
	walk_right
# 92 "data/maps/Zone18A/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/Zone18A/scripts.pory"
Zone18A_Movement_CameraUp:
# 96 "data/maps/Zone18A/scripts.pory"
	walk_up
# 96 "data/maps/Zone18A/scripts.pory"
	walk_up
# 96 "data/maps/Zone18A/scripts.pory"
	walk_up
# 96 "data/maps/Zone18A/scripts.pory"
	walk_up
# 96 "data/maps/Zone18A/scripts.pory"
	walk_up
	step_end

Zone18A_EventScript_Eli::
# 108 "data/maps/Zone18A/scripts.pory"
	lock
# 109 "data/maps/Zone18A/scripts.pory"
	faceplayer
# 110 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_Eli
# 111 "data/maps/Zone18A/scripts.pory"
	release
	end


Zone18A_EventScript_Zoe::
# 116 "data/maps/Zone18A/scripts.pory"
	lock
# 117 "data/maps/Zone18A/scripts.pory"
	faceplayer
# 118 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_Zoe
# 119 "data/maps/Zone18A/scripts.pory"
	release
	end


Zone18A_EventScript_AzurillDoll::
# 124 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_AzurillDoll_Text_0, MSGBOX_SIGN
	end


Zone18A_EventScript_SellSodaPop::
# 129 "data/maps/Zone18A/scripts.pory"
	lock
# 130 "data/maps/Zone18A/scripts.pory"
	faceplayer
# 131 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone18A_EventScript_SellSodaPop_2
# 131 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone18A_EventScript_SellSodaPop_2
# 136 "data/maps/Zone18A/scripts.pory"
	showmoneybox 0, 0, 0
# 137 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_SellSodaPop_Text_1, MSGBOX_YESNO
# 138 "data/maps/Zone18A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18A_EventScript_SellSodaPop_7
# 151 "data/maps/Zone18A/scripts.pory"
	hidemoneybox
# 152 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_SellSodaPop_Text_4
Zone18A_EventScript_SellSodaPop_6:
# 154 "data/maps/Zone18A/scripts.pory"
	release
	end

Zone18A_EventScript_SellSodaPop_2:
# 132 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_SellSodaPop_Text_0
# 133 "data/maps/Zone18A/scripts.pory"
	release
	end

Zone18A_EventScript_SellSodaPop_7:
# 139 "data/maps/Zone18A/scripts.pory"
	checkmoney 300, 0
# 140 "data/maps/Zone18A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone18A_EventScript_SellSodaPop_10
# 144 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_SellSodaPop_Text_3
# 145 "data/maps/Zone18A/scripts.pory"
	removemoney 300, 0
# 146 "data/maps/Zone18A/scripts.pory"
	updatemoneybox
# 147 "data/maps/Zone18A/scripts.pory"
	giveitem ITEM_SODA_POP
# 148 "data/maps/Zone18A/scripts.pory"
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_6

Zone18A_EventScript_SellSodaPop_10:
# 141 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_EventScript_SellSodaPop_Text_2
# 142 "data/maps/Zone18A/scripts.pory"
	hidemoneybox
	goto Zone18A_EventScript_SellSodaPop_6


Zone18A_EventScript_SuperPotion2::
# 159 "data/maps/Zone18A/scripts.pory"
	lock
# 160 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_POTION_2, Zone18A_EventScript_SuperPotion2_2
# 165 "data/maps/Zone18A/scripts.pory"
	waitse
# 166 "data/maps/Zone18A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 167 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 168 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_ITEM_ZONE18A_SUPER_POTION_2
# 169 "data/maps/Zone18A/scripts.pory"
	addobject VAR_LAST_TALKED
# 170 "data/maps/Zone18A/scripts.pory"
	finditem ITEM_SUPER_POTION, 2
# 171 "data/maps/Zone18A/scripts.pory"
	release
	end

Zone18A_EventScript_SuperPotion2_2:
# 161 "data/maps/Zone18A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 162 "data/maps/Zone18A/scripts.pory"
	release
	end


Zone18A_EventScript_SuperRepel::
# 176 "data/maps/Zone18A/scripts.pory"
	lock
# 177 "data/maps/Zone18A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE18A_SUPER_REPEL, Zone18A_EventScript_SuperRepel_2
# 182 "data/maps/Zone18A/scripts.pory"
	waitse
# 183 "data/maps/Zone18A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 184 "data/maps/Zone18A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 185 "data/maps/Zone18A/scripts.pory"
	setflag FLAG_ITEM_ZONE18A_SUPER_REPEL
# 186 "data/maps/Zone18A/scripts.pory"
	addobject VAR_LAST_TALKED
# 187 "data/maps/Zone18A/scripts.pory"
	finditem ITEM_SUPER_REPEL, 1
# 188 "data/maps/Zone18A/scripts.pory"
	release
	end

Zone18A_EventScript_SuperRepel_2:
# 178 "data/maps/Zone18A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 179 "data/maps/Zone18A/scripts.pory"
	release
	end


# 192 "data/maps/Zone18A/scripts.pory"

# 193 "data/maps/Zone18A/scripts.pory"
Zone18A_EventScript_Sign::
# 194 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_Sign, MSGBOX_SIGN
# 195 "data/maps/Zone18A/scripts.pory"
	end
# 196 "data/maps/Zone18A/scripts.pory"

# 197 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_Sign:
# 198 "data/maps/Zone18A/scripts.pory"
	.string "Trainer's Dojo!\n"
# 199 "data/maps/Zone18A/scripts.pory"
	.string "All challengers welcome!$"
# 200 "data/maps/Zone18A/scripts.pory"

# 201 "data/maps/Zone18A/scripts.pory"
Zone18A_EventScript_Doris::
# 202 "data/maps/Zone18A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DORIS, Zone18A_Text_DorisIntro, Zone18A_Text_DorisDefeat
# 203 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_DorisPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Zone18A/scripts.pory"
	end
# 205 "data/maps/Zone18A/scripts.pory"

# 206 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_DorisIntro:
# 207 "data/maps/Zone18A/scripts.pory"
	.string "I've wanted a relaxing vacation for\n"
# 208 "data/maps/Zone18A/scripts.pory"
	.string "so long, but it's been so boring!\p"
# 209 "data/maps/Zone18A/scripts.pory"
	.string "How about a battle to spice things up?$"
# 210 "data/maps/Zone18A/scripts.pory"

# 211 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_DorisDefeat:
# 212 "data/maps/Zone18A/scripts.pory"
	.string "Now that was exciting!$"
# 213 "data/maps/Zone18A/scripts.pory"

# 214 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_DorisPostBattle:
# 215 "data/maps/Zone18A/scripts.pory"
	.string "I'll check out the Trainer's Dojo.\n"
# 216 "data/maps/Zone18A/scripts.pory"
	.string "It'll be more fun than just\l"
# 217 "data/maps/Zone18A/scripts.pory"
	.string "lounging around, right?$"
# 218 "data/maps/Zone18A/scripts.pory"

# 219 "data/maps/Zone18A/scripts.pory"
Zone18A_EventScript_Homer::
# 220 "data/maps/Zone18A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HOMER, Zone18A_Text_HomerIntro, Zone18A_Text_HomerDefeat
# 221 "data/maps/Zone18A/scripts.pory"
	msgbox Zone18A_Text_HomerPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Zone18A/scripts.pory"
	end
# 223 "data/maps/Zone18A/scripts.pory"

# 224 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_HomerIntro:
# 225 "data/maps/Zone18A/scripts.pory"
	.string "Ah, a lovely day by the beach.\p"
# 226 "data/maps/Zone18A/scripts.pory"
	.string "What's that? A battle?\p"
# 227 "data/maps/Zone18A/scripts.pory"
	.string "Say no more! I'm all riled up!$"
# 228 "data/maps/Zone18A/scripts.pory"

# 229 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_HomerDefeat:
# 230 "data/maps/Zone18A/scripts.pory"
	.string "Argh! You ruined my perfect day!$"
# 231 "data/maps/Zone18A/scripts.pory"

# 232 "data/maps/Zone18A/scripts.pory"
Zone18A_Text_HomerPostBattle:
# 233 "data/maps/Zone18A/scripts.pory"
	.string "My day is ruined! How am I supposed\n"
# 234 "data/maps/Zone18A/scripts.pory"
	.string "to enjoy my day at the beach\l"
# 235 "data/maps/Zone18A/scripts.pory"
	.string "knowing I've lost to some commoner?$"

Zone18A_EventScript_PirateEvent_Text_0:
# 20 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: There it is! My Azurill doll!$"

Zone18A_EventScript_PirateEvent_Text_1:
# 32 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: What the?$"

Zone18A_EventScript_PirateEvent_Text_2:
# 33 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Pirates!$"

Zone18A_EventScript_PirateEvent_Text_3:
# 34 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Hey, wait! That's my special doll!\n"
	.string "Don't take it, please!$"

Zone18A_EventScript_PirateEvent_Text_4:
# 37 "data/maps/Zone18A/scripts.pory"
	.string "It be ours now, laddy!$"

Zone18A_EventScript_PirateEvent_Text_5:
# 56 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Wah!!!$"

Zone18A_EventScript_PirateEvent_Text_6:
# 59 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: It'll be ok, Eli!$"

Zone18A_EventScript_PirateEvent_Text_7:
# 62 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: {PLAYER}! You're stronger than\n"
	.string "both of us.\p"
	.string "Can you chase the pirates and recover\n"
	.string "the doll?\p"
	.string "Here, you can borrow this Diving Gear; it\n"
	.string "might be helpful.$"

Zone18A_EventScript_AzurillDoll_Text_0:
# 124 "data/maps/Zone18A/scripts.pory"
	.string "It's an Azurill doll.\nIt's clearly been well loved.$"

Zone18A_EventScript_SellSodaPop_Text_0:
# 132 "data/maps/Zone18A/scripts.pory"
	.string "Soda Pop! I usually sell it, but today\n"
	.string "I'm out of stock!$"

Zone18A_EventScript_SellSodaPop_Text_1:
# 137 "data/maps/Zone18A/scripts.pory"
	.string "Want to buy some Soda Pop?\n¥300 for 50 HP a pop!$"

Zone18A_EventScript_SellSodaPop_Text_2:
# 141 "data/maps/Zone18A/scripts.pory"
	.string "You don't have enough money!$"

Zone18A_EventScript_SellSodaPop_Text_3:
# 144 "data/maps/Zone18A/scripts.pory"
	.string "Here you go!$"

Zone18A_EventScript_SellSodaPop_Text_4:
# 152 "data/maps/Zone18A/scripts.pory"
	.string "Aww, did you not like my pun?$"

Zone18A_Text_Eli::
# 99 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Please! Help!$"

Zone18A_Text_Zoe::
# 103 "data/maps/Zone18A/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Please, recover my brother's\n"
	.string "Azurill doll from the pirates.$"
