Zone4E_MapScripts::
# 2 "data/maps/Zone4E/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_RANDOM_1, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_POISON_BARB, Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_5
# 11 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone4E_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone4E_EventScript_LeviathanBattle::
# 17 "data/maps/Zone4E/scripts.pory"
	lockall
# 18 "data/maps/Zone4E/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 19 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone4E/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 21 "data/maps/Zone4E/scripts.pory"
	applymovement 4, Common_Movement_WalkRight2
# 22 "data/maps/Zone4E/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone4E/scripts.pory"
	fadeoutbgm 1
# 24 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_Text_Leviathan4Intro
# 25 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 26 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone4E_EventScript_LeviathanBattle_2
# 26 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone4E_EventScript_LeviathanBattle_2
# 29 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4, Zone4E_Text_Leviathan4Defeat
Zone4E_EventScript_LeviathanBattle_1:
# 31 "data/maps/Zone4E/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 32 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 33 "data/maps/Zone4E/scripts.pory"
	giveitem ITEM_TM_SNARL
# 34 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_LeviathanBattle_Text_1
# 35 "data/maps/Zone4E/scripts.pory"
	closemessage
# 36 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 37 "data/maps/Zone4E/scripts.pory"
	removeobject 3
# 38 "data/maps/Zone4E/scripts.pory"
	removeobject 4
# 39 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_4
# 40 "data/maps/Zone4E/scripts.pory"
	setvar VAR_ZONE_4_STATE, 1
# 41 "data/maps/Zone4E/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 42 "data/maps/Zone4E/scripts.pory"
	releaseall
	end

Zone4E_EventScript_LeviathanBattle_2:
# 27 "data/maps/Zone4E/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ELLA_AND_BELLA_LEVIATHAN_4_CHALLENGE, Zone4E_Text_Leviathan4Defeat
	goto Zone4E_EventScript_LeviathanBattle_1


Zone4E_EventScript_StruggleBugTutor::
# 56 "data/maps/Zone4E/scripts.pory"
	lock
# 57 "data/maps/Zone4E/scripts.pory"
	faceplayer
# 58 "data/maps/Zone4E/scripts.pory"
	showmoneybox 0, 0, 0
# 59 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ZONE4E_MOVE_TUTOR_TAUGHT_STRUGGLE_BUG, Zone4E_EventScript_StruggleBugTutor_2
# 68 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_2, MSGBOX_YESNO
# 69 "data/maps/Zone4E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone4E_EventScript_StruggleBugTutor_10
Zone4E_EventScript_StruggleBugTutor_1:
# 76 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ZONE4E_MOVE_TUTOR_TAUGHT_STRUGGLE_BUG, Zone4E_EventScript_StruggleBugTutor_6
Zone4E_EventScript_StruggleBugTutor_5:
# 85 "data/maps/Zone4E/scripts.pory"
	setvar VAR_TEMP_0, MOVE_STRUGGLE_BUG
# 86 "data/maps/Zone4E/scripts.pory"
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
# 87 "data/maps/Zone4E/scripts.pory"
	buffermovename 0, VAR_TEMP_0
# 88 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_4, MSGBOX_DEFAULT
# 89 "data/maps/Zone4E/scripts.pory"
	special ChooseMonForMoveTutor
# 90 "data/maps/Zone4E/scripts.pory"
	waitstate
# 91 "data/maps/Zone4E/scripts.pory"
	lock
# 92 "data/maps/Zone4E/scripts.pory"
	faceplayer
# 93 "data/maps/Zone4E/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone4E_EventScript_StruggleBugTutor_13
# 98 "data/maps/Zone4E/scripts.pory"
	showmoneybox 0, 0, 0
# 99 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_5, MSGBOX_DEFAULT
# 100 "data/maps/Zone4E/scripts.pory"
	goto_if_unset FLAG_ZONE4E_MOVE_TUTOR_TAUGHT_STRUGGLE_BUG, Zone4E_EventScript_StruggleBugTutor_18
# 103 "data/maps/Zone4E/scripts.pory"
	removemoney 500
# 104 "data/maps/Zone4E/scripts.pory"
	updatemoneybox
# 105 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_6, MSGBOX_DEFAULT
# 106 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_1
Zone4E_EventScript_StruggleBugTutor_17:
# 108 "data/maps/Zone4E/scripts.pory"
	hidemoneybox
# 109 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_StruggleBugTutor_2:
# 60 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_0, MSGBOX_YESNO
# 61 "data/maps/Zone4E/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone4E_EventScript_StruggleBugTutor_8
	goto Zone4E_EventScript_StruggleBugTutor_1

Zone4E_EventScript_StruggleBugTutor_6:
# 77 "data/maps/Zone4E/scripts.pory"
	checkmoney 500, 0
# 78 "data/maps/Zone4E/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone4E_EventScript_StruggleBugTutor_15
	goto Zone4E_EventScript_StruggleBugTutor_5

Zone4E_EventScript_StruggleBugTutor_8:
# 62 "data/maps/Zone4E/scripts.pory"
	hidemoneybox
# 63 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_1
# 64 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_StruggleBugTutor_10:
# 70 "data/maps/Zone4E/scripts.pory"
	hidemoneybox
# 71 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_1
# 72 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_StruggleBugTutor_13:
# 94 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_1
# 95 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_StruggleBugTutor_15:
# 79 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_StruggleBugTutor_Text_3
# 80 "data/maps/Zone4E/scripts.pory"
	hidemoneybox
# 81 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_StruggleBugTutor_18:
# 101 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ZONE4E_MOVE_TUTOR_TAUGHT_STRUGGLE_BUG
	goto Zone4E_EventScript_StruggleBugTutor_17


Zone4E_EventScript_ItemRandom1::
# 114 "data/maps/Zone4E/scripts.pory"
	lock
# 115 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_RANDOM_1, Zone4E_EventScript_ItemRandom1_2
# 120 "data/maps/Zone4E/scripts.pory"
	waitse
# 121 "data/maps/Zone4E/scripts.pory"
	removeobject VAR_LAST_TALKED
# 122 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 123 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ITEM_ZONE4E_RANDOM_1
# 124 "data/maps/Zone4E/scripts.pory"
	addobject VAR_LAST_TALKED
# 125 "data/maps/Zone4E/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 126 "data/maps/Zone4E/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 127 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_ItemRandom1_2:
# 116 "data/maps/Zone4E/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 117 "data/maps/Zone4E/scripts.pory"
	release
	end


Zone4E_EventScript_ItemPoisonBarb::
# 132 "data/maps/Zone4E/scripts.pory"
	lock
# 133 "data/maps/Zone4E/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE4E_POISON_BARB, Zone4E_EventScript_ItemPoisonBarb_2
# 138 "data/maps/Zone4E/scripts.pory"
	waitse
# 139 "data/maps/Zone4E/scripts.pory"
	removeobject VAR_LAST_TALKED
# 140 "data/maps/Zone4E/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 141 "data/maps/Zone4E/scripts.pory"
	setflag FLAG_ITEM_ZONE4E_POISON_BARB
# 142 "data/maps/Zone4E/scripts.pory"
	addobject VAR_LAST_TALKED
# 143 "data/maps/Zone4E/scripts.pory"
	finditem ITEM_POISON_BARB, 1
# 144 "data/maps/Zone4E/scripts.pory"
	release
	end

Zone4E_EventScript_ItemPoisonBarb_2:
# 134 "data/maps/Zone4E/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 135 "data/maps/Zone4E/scripts.pory"
	release
	end


Zone4E_EventScript_Sign::
# 149 "data/maps/Zone4E/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 150 "data/maps/Zone4E/scripts.pory"
	msgbox Zone4E_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4E_EventScript_LeviathanBattle_Text_0:
# 32 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: Wargh! Not only are we lost in the\n"
	.string "wood…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: We could've won that battle, you\n"
	.string "misunderstood!\p"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: I guess our teamwork could be\n"
	.string "improved…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Yeah… Oh right, here's a thing for\n"
	.string "those approved!$"

Zone4E_EventScript_LeviathanBattle_Text_1:
# 34 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: This TM can help in double battles!\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Shush, you're annoying them with\n"
	.string "your prattles!\p"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: That rhyme barely worked!\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Oh, don't be irked!$"

Zone4E_EventScript_StruggleBugTutor_Text_0:
# 60 "data/maps/Zone4E/scripts.pory"
	.string "Hey! You made it to the end. I bet it was\n"
	.string "a struggle getting here, right?\p"
	.string "You know what's not a struggle? The\n"
	.string "move Struggle Bug!\p"
	.string "I can teach Struggle Bug to one of your\n"
	.string "Pokémon for the low price of ¥500. How\l"
	.string "about it?$"

Zone4E_EventScript_StruggleBugTutor_Text_1:
# 63 "data/maps/Zone4E/scripts.pory"
	.string "Okay, come back again.$"

Zone4E_EventScript_StruggleBugTutor_Text_2:
# 68 "data/maps/Zone4E/scripts.pory"
	.string "Hey! You made it to the end. I bet it was\n"
	.string "a struggle getting here, right?\p"
	.string "You know what's not a struggle? The\n"
	.string "move Struggle Bug!\p"
	.string "I can teach Struggle Bug to one of your\n"
	.string "Pokémon. First time is free, while\l"
	.string "subsequent times cost ¥500! How about\l"
	.string "it?$"

Zone4E_EventScript_StruggleBugTutor_Text_3:
# 79 "data/maps/Zone4E/scripts.pory"
	.string "Hate to break it to you, but you don't have enough money.$"

Zone4E_EventScript_StruggleBugTutor_Text_4:
# 88 "data/maps/Zone4E/scripts.pory"
	.string "Which Pokémon should learn\n{STR_VAR_1}?$"

Zone4E_EventScript_StruggleBugTutor_Text_5:
# 99 "data/maps/Zone4E/scripts.pory"
	.string "There! It's done. Use that move well!$"

Zone4E_EventScript_StruggleBugTutor_Text_6:
# 105 "data/maps/Zone4E/scripts.pory"
	.string "{PLAYER} paid ¥500.$"

Zone4E_EventScript_Sign_Text_0:
# 150 "data/maps/Zone4E/scripts.pory"
	.string "Trainer Tips\p"
	.string "The Pokémon you encounter in different\n"
	.string "areas of the same zone may have slight\l"
	.string "differences!$"

Zone4E_Text_Leviathan4Intro::
# 46 "data/maps/Zone4E/scripts.pory"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: Watch out!\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Don't fear!\p"
	.string "{COLOR BLUE}Ella{COLOR DARK_GRAY}: The dynamic duo of Ella & Bella…\p"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Will always persevere!\p"
	.string "{COLOR BLUE}Ella & Bella{COLOR DARK_GRAY}: It's time to battle it out,\n"
	.string "victory is near!$"

Zone4E_Text_Leviathan4Defeat::
# 50 "data/maps/Zone4E/scripts.pory"
	.string "We lost!$"
