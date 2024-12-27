Zone9A_MapScripts::
# 2 "data/maps/Zone9A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_RANDOM_1, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_TM_PLUCK, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST
	return

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


Zone9A_EventScript_HerbalSign::
# 22 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Man::
# 27 "data/maps/Zone9A/scripts.pory"
	lock
# 28 "data/maps/Zone9A/scripts.pory"
	faceplayer
# 29 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Man_Text_0
# 30 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_Ari::
# 35 "data/maps/Zone9A/scripts.pory"
	lock
# 36 "data/maps/Zone9A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 37 "data/maps/Zone9A/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Zone9A_EventScript_Ari_2
# 44 "data/maps/Zone9A/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Zone9A_EventScript_Ari_3
Zone9A_EventScript_Ari_1:
# 52 "data/maps/Zone9A/scripts.pory"
	faceplayer
# 53 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_0, MSGBOX_YESNO
# 54 "data/maps/Zone9A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9A_EventScript_Ari_6
# 59 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_2, MSGBOX_DEFAULT
# 60 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 61 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ARI, Zone9A_EventScript_Ari_Text_3
# 62 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_4, MSGBOX_DEFAULT
# 65 "data/maps/Zone9A/scripts.pory"
	closemessage
# 66 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Zone9A_Movement_WinstrateEnterHouse
# 67 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone9A/scripts.pory"
	removeobject 1
# 69 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 70 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone9A/scripts.pory"
	addobject 2
# 72 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 73 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 74 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_5, MSGBOX_DEFAULT
# 75 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BERTHA, Zone9A_EventScript_Ari_Text_6
# 76 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 78 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_7, MSGBOX_DEFAULT
# 79 "data/maps/Zone9A/scripts.pory"
	closemessage
# 80 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Zone9A_Movement_WinstrateEnterHouse
# 81 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 82 "data/maps/Zone9A/scripts.pory"
	removeobject 2
# 83 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 84 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 85 "data/maps/Zone9A/scripts.pory"
	addobject 3
# 86 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 87 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 88 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_8, MSGBOX_DEFAULT
# 89 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_CASSANDRA, Zone9A_EventScript_Ari_Text_9
# 90 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 91 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 92 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_10, MSGBOX_DEFAULT
# 93 "data/maps/Zone9A/scripts.pory"
	closemessage
# 94 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Zone9A_Movement_WinstrateEnterHouse
# 95 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 96 "data/maps/Zone9A/scripts.pory"
	removeobject 3
# 97 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 98 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 99 "data/maps/Zone9A/scripts.pory"
	addobject 4
# 100 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 101 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 102 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_11, MSGBOX_DEFAULT
# 103 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DOMINIC, Zone9A_EventScript_Ari_Text_12
# 104 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_13, MSGBOX_DEFAULT
# 105 "data/maps/Zone9A/scripts.pory"
	closemessage
# 106 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 108 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Zone9A_Movement_WinstrateEnterHouse
# 109 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 110 "data/maps/Zone9A/scripts.pory"
	removeobject 4
# 111 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 112 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 113 "data/maps/Zone9A/scripts.pory"
	addobject 5
# 114 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 115 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_14
# 117 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ERICA, Zone9A_EventScript_Ari_Text_15
# 118 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_16
# 119 "data/maps/Zone9A/scripts.pory"
	giveitem ITEM_TM_RETALIATE
# 120 "data/maps/Zone9A/scripts.pory"
	closemessage
# 121 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 122 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 123 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
# 124 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 125 "data/maps/Zone9A/scripts.pory"
	removeobject 5
# 126 "data/maps/Zone9A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 127 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 128 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_Ari_2:
# 38 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 39 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 41 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 42 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 43 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_3:
# 45 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 46 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 47 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 48 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 49 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 50 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_6:
# 55 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/Zone9A/scripts.pory"
	release
	end


# 133 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WinstrateEnterHouse:
# 134 "data/maps/Zone9A/scripts.pory"
	walk_in_place_faster_up
# 135 "data/maps/Zone9A/scripts.pory"
	walk_up
	step_end

# 138 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WaitForNextWinstrate:
# 139 "data/maps/Zone9A/scripts.pory"
	delay_16
# 139 "data/maps/Zone9A/scripts.pory"
	delay_16
# 139 "data/maps/Zone9A/scripts.pory"
	delay_16
	step_end

Zone9A_EventScript_ItemBigRoot::
# 143 "data/maps/Zone9A/scripts.pory"
	lock
# 144 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_EventScript_ItemBigRoot_2
# 149 "data/maps/Zone9A/scripts.pory"
	waitse
# 150 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 151 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 152 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_BIG_ROOT
# 153 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 154 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_BIG_ROOT, 1
# 155 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemBigRoot_2:
# 145 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 146 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemRandom1::
# 160 "data/maps/Zone9A/scripts.pory"
	lock
# 161 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_RANDOM_1, Zone9A_EventScript_ItemRandom1_2
# 166 "data/maps/Zone9A/scripts.pory"
	waitse
# 167 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 168 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 169 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_RANDOM_1
# 170 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 171 "data/maps/Zone9A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 172 "data/maps/Zone9A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 173 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemRandom1_2:
# 162 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 163 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemTMPluck::
# 178 "data/maps/Zone9A/scripts.pory"
	lock
# 179 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_TM_PLUCK, Zone9A_EventScript_ItemTMPluck_2
# 184 "data/maps/Zone9A/scripts.pory"
	waitse
# 185 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 186 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 187 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_TM_PLUCK
# 188 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 189 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_TM_PLUCK, 1
# 190 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemTMPluck_2:
# 180 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 181 "data/maps/Zone9A/scripts.pory"
	release
	end


# 194 "data/maps/Zone9A/scripts.pory"

# 195 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Cooper::
# 196 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_COOPER, Zone9A_Text_CooperIntro, Zone9A_Text_CooperDefeat
# 197 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Zone9A/scripts.pory"
       end
# 199 "data/maps/Zone9A/scripts.pory"

# 200 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperIntro:
# 201 "data/maps/Zone9A/scripts.pory"
	.string "Bet you didn't expect me!$"
# 202 "data/maps/Zone9A/scripts.pory"

# 203 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperDefeat:
# 204 "data/maps/Zone9A/scripts.pory"
	.string "I didn't expect you, either!$"
# 205 "data/maps/Zone9A/scripts.pory"

# 206 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperPostBattle:
# 207 "data/maps/Zone9A/scripts.pory"
	.string "I just pop out occasionally in\n"
# 208 "data/maps/Zone9A/scripts.pory"
	.string "case someone is there.$"
# 209 "data/maps/Zone9A/scripts.pory"

# 210 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Carmine::
# 211 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_CARMINE, Zone9A_Text_CarmineIntro, Zone9A_Text_CarmineDefeat
# 212 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CarminePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Zone9A/scripts.pory"
       end
# 214 "data/maps/Zone9A/scripts.pory"

# 215 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineIntro:
# 216 "data/maps/Zone9A/scripts.pory"
	.string "Whew, it's hot in the jungle!$"
# 217 "data/maps/Zone9A/scripts.pory"

# 218 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineDefeat:
# 219 "data/maps/Zone9A/scripts.pory"
	.string "I think the humidity is the worst\n"
# 220 "data/maps/Zone9A/scripts.pory"
	.string "part!$"
# 221 "data/maps/Zone9A/scripts.pory"

# 222 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarminePostBattle:
# 223 "data/maps/Zone9A/scripts.pory"
	.string "I hope there's AC in the village.$"
# 224 "data/maps/Zone9A/scripts.pory"

# 225 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Sign::
# 226 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_Text_Sign, MSGBOX_SIGN
# 227 "data/maps/Zone9A/scripts.pory"
	end
# 228 "data/maps/Zone9A/scripts.pory"

# 229 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_Sign:
# 230 "data/maps/Zone9A/scripts.pory"
	.string "Trainer Tips\p"
# 231 "data/maps/Zone9A/scripts.pory"
	.string "While you are on the Pokémon stats\n"
# 232 "data/maps/Zone9A/scripts.pory"
	.string "screen, you can press {A_BUTTON} to switch\l"
# 233 "data/maps/Zone9A/scripts.pory"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_Jonathan::
# 237 "data/maps/Zone9A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JONATHAN, Zone9A_EventScript_Jonathan_Text_0, Zone9A_EventScript_Jonathan_Text_1
# 238 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Jonathan_Text_2, MSGBOX_AUTOCLOSE
	end


Zone9A_EventScript_Calvin::
# 243 "data/maps/Zone9A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CALVIN, Zone9A_EventScript_Calvin_Text_0, Zone9A_EventScript_Calvin_Text_1
# 244 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Calvin_Text_2, MSGBOX_AUTOCLOSE
	end


Zone9A_EventScript_Luis::
# 249 "data/maps/Zone9A/scripts.pory"
	trainerbattle_single TRAINER_PBL_LUIS, Zone9A_EventScript_Luis_Text_0, Zone9A_EventScript_Luis_Text_1
# 250 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Luis_Text_2, MSGBOX_AUTOCLOSE
	end


Zone9A_EventScript_HerbalSign_Text_0:
# 22 "data/maps/Zone9A/scripts.pory"
	.string "Herbal and Incense Shop$"

Zone9A_EventScript_Man_Text_0:
# 29 "data/maps/Zone9A/scripts.pory"
	.string "Hey there, champ!\p"
	.string "In our modest village, there is a family\n"
	.string "of strong Trainers.\p"
	.string "Why don't you go spar with them?$"

Zone9A_EventScript_Ari_Text_0:
# 53 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\p"
	.string "Oh, you're a traveler! You might be\n"
	.string "strong enough…\p"
	.string "I bet you can't defeat the five members\n"
	.string "of my family in a row!\p"
	.string "What do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_1:
# 55 "data/maps/Zone9A/scripts.pory"
	.string "Ah, so you're a chicken. Well, if you\n"
	.string "change your mind, I'll be here.$"

Zone9A_EventScript_Ari_Text_2:
# 59 "data/maps/Zone9A/scripts.pory"
	.string "Alright, well, best of luck!$"

Zone9A_EventScript_Ari_Text_3:
# 61 "data/maps/Zone9A/scripts.pory"
	.string "What!? How!?\n"
	.string "You're tougher than I thought!$"

Zone9A_EventScript_Ari_Text_4:
# 64 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Hey, everyone!\nI've found a pretty strong Trainer!$"

Zone9A_EventScript_Ari_Text_5:
# 74 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: You beat my brother? Ugh. Such\n"
	.string "a brat.\p"
	.string "Let's just get this over with.$"

Zone9A_EventScript_Ari_Text_6:
# 75 "data/maps/Zone9A/scripts.pory"
	.string "Sigh… I thought this would happen…$"

Zone9A_EventScript_Ari_Text_7:
# 78 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Mom! It's your turn!$"

Zone9A_EventScript_Ari_Text_8:
# 88 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: Oh! I am so excited!\p"
	.string "Finally, a challenger who got past both\n"
	.string "of my children!\p"
	.string "It's Momma's time to shine!$"

Zone9A_EventScript_Ari_Text_9:
# 89 "data/maps/Zone9A/scripts.pory"
	.string "It was you who shined instead!$"

Zone9A_EventScript_Ari_Text_10:
# 92 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: It's all you, baby!$"

Zone9A_EventScript_Ari_Text_11:
# 102 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Guess what time it is? It's\n"
	.string "time to take out the trash!$"

Zone9A_EventScript_Ari_Text_12:
# 103 "data/maps/Zone9A/scripts.pory"
	.string "Sorry, sorry! I didn't realize you were\n"
	.string "so strong!$"

Zone9A_EventScript_Ari_Text_13:
# 104 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Kids!\n"
	.string "Wake your grandma up!$"

Zone9A_EventScript_Ari_Text_14:
# 116 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Who dares disturb me from my\n"
	.string "slumber?$"

Zone9A_EventScript_Ari_Text_15:
# 117 "data/maps/Zone9A/scripts.pory"
	.string "Very impressive.$"

Zone9A_EventScript_Ari_Text_16:
# 118 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Good, good.\p"
	.string "Well done, young one.\p"
	.string "Here is a little reward for completing\n"
	.string "my family's trial.$"

Zone9A_EventScript_Jonathan_Text_0:
# 237 "data/maps/Zone9A/scripts.pory"
	.string "Jungles like these are where Bugs\n"
	.string "thrive!$"

Zone9A_EventScript_Jonathan_Text_1:
# 237 "data/maps/Zone9A/scripts.pory"
	.string "I'm not thriving!$"

Zone9A_EventScript_Jonathan_Text_2:
# 238 "data/maps/Zone9A/scripts.pory"
	.string "Make sure to protect yourself from the\n"
	.string "elements!$"

Zone9A_EventScript_Calvin_Text_0:
# 243 "data/maps/Zone9A/scripts.pory"
	.string "This pond is filled with muck!$"

Zone9A_EventScript_Calvin_Text_1:
# 243 "data/maps/Zone9A/scripts.pory"
	.string "The muck is where Pokémon live!$"

Zone9A_EventScript_Calvin_Text_2:
# 244 "data/maps/Zone9A/scripts.pory"
	.string "Fishing in a jungle is a unique\n"
	.string "experience!$"

Zone9A_EventScript_Luis_Text_0:
# 249 "data/maps/Zone9A/scripts.pory"
	.string "Whew! I am tired. If I beat you in a\n"
	.string "Pokémon battle, do you think you could\l"
	.string "watch the little ones for a while?$"

Zone9A_EventScript_Luis_Text_1:
# 249 "data/maps/Zone9A/scripts.pory"
	.string "At least now they're out of energy!$"

Zone9A_EventScript_Luis_Text_2:
# 250 "data/maps/Zone9A/scripts.pory"
	.string "Finally, I can take a short break!$"
