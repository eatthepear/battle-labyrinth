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
	goto_if_set FLAG_ITEM_ZONE9A_MIRACLE_SEED, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_TM13, Zone9A_MapScripts_MAP_SCRIPT_ON_RESUME_9
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
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_7
# 53 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_7
# 56 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_1, MSGBOX_YESNO
Zone9A_EventScript_Ari_6:
# 58 "data/maps/Zone9A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9A_EventScript_Ari_12
# 63 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_3, MSGBOX_DEFAULT
# 64 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 65 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ARI, Zone9A_EventScript_Ari_Text_4
# 66 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_17
Zone9A_EventScript_Ari_15:
# 69 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_5, MSGBOX_DEFAULT
# 72 "data/maps/Zone9A/scripts.pory"
	closemessage
# 73 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Zone9A_Movement_WinstrateEnterHouse
# 74 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 75 "data/maps/Zone9A/scripts.pory"
	removeobject 1
# 76 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 77 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 78 "data/maps/Zone9A/scripts.pory"
	addobject 2
# 79 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 80 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 81 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_6, MSGBOX_DEFAULT
# 82 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BERTHA, Zone9A_EventScript_Ari_Text_7
# 83 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_22
Zone9A_EventScript_Ari_20:
# 86 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 87 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 88 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_8, MSGBOX_DEFAULT
# 89 "data/maps/Zone9A/scripts.pory"
	closemessage
# 90 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Zone9A_Movement_WinstrateEnterHouse
# 91 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 92 "data/maps/Zone9A/scripts.pory"
	removeobject 2
# 93 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 94 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 95 "data/maps/Zone9A/scripts.pory"
	addobject 3
# 96 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 97 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 98 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_9, MSGBOX_DEFAULT
# 99 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_CASSANDRA, Zone9A_EventScript_Ari_Text_10
# 100 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_27
Zone9A_EventScript_Ari_25:
# 103 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 105 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_11, MSGBOX_DEFAULT
# 106 "data/maps/Zone9A/scripts.pory"
	closemessage
# 107 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Zone9A_Movement_WinstrateEnterHouse
# 108 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 109 "data/maps/Zone9A/scripts.pory"
	removeobject 3
# 110 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 111 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 112 "data/maps/Zone9A/scripts.pory"
	addobject 4
# 113 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 114 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 115 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_12, MSGBOX_DEFAULT
# 116 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DOMINIC, Zone9A_EventScript_Ari_Text_13
# 117 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_32
Zone9A_EventScript_Ari_30:
# 120 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_14, MSGBOX_DEFAULT
# 121 "data/maps/Zone9A/scripts.pory"
	closemessage
# 122 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 123 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 124 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Zone9A_Movement_WinstrateEnterHouse
# 125 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 126 "data/maps/Zone9A/scripts.pory"
	removeobject 4
# 127 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 128 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 129 "data/maps/Zone9A/scripts.pory"
	addobject 5
# 130 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 131 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 132 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_15
# 133 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ERICA, Zone9A_Text_EricaDefeat
# 134 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_16
# 135 "data/maps/Zone9A/scripts.pory"
	giveitem ITEM_TM14
# 136 "data/maps/Zone9A/scripts.pory"
	closemessage
# 137 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 139 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
# 140 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 141 "data/maps/Zone9A/scripts.pory"
	removeobject 5
# 142 "data/maps/Zone9A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 143 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 144 "data/maps/Zone9A/scripts.pory"
	setvar VAR_ZONE_9_STATE, 1
# 145 "data/maps/Zone9A/scripts.pory"
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

Zone9A_EventScript_Ari_7:
# 54 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_0, MSGBOX_YESNO
	goto Zone9A_EventScript_Ari_6

Zone9A_EventScript_Ari_12:
# 59 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_2, MSGBOX_DEFAULT
# 60 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_Ari_16:
# 67 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_17:
# 66 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_16
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_21:
# 84 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_22:
# 83 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_21
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_26:
# 101 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_27:
# 100 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_26
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_31:
# 118 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_30

Zone9A_EventScript_Ari_32:
# 117 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_31
	goto Zone9A_EventScript_Ari_30


# 150 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WinstrateEnterHouse:
# 151 "data/maps/Zone9A/scripts.pory"
	walk_in_place_faster_up
# 152 "data/maps/Zone9A/scripts.pory"
	walk_up
	step_end

# 155 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WaitForNextWinstrate:
# 156 "data/maps/Zone9A/scripts.pory"
	delay_16
# 156 "data/maps/Zone9A/scripts.pory"
	delay_16
# 156 "data/maps/Zone9A/scripts.pory"
	delay_16
	step_end

Zone9A_EventScript_ItemBigRoot::
# 164 "data/maps/Zone9A/scripts.pory"
	lock
# 165 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_EventScript_ItemBigRoot_2
# 170 "data/maps/Zone9A/scripts.pory"
	waitse
# 171 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 172 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 173 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_BIG_ROOT
# 174 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 175 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_BIG_ROOT, 1
# 176 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemBigRoot_2:
# 166 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 167 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemMiracleSeed::
# 181 "data/maps/Zone9A/scripts.pory"
	lock
# 182 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_MIRACLE_SEED, Zone9A_EventScript_ItemMiracleSeed_2
# 187 "data/maps/Zone9A/scripts.pory"
	waitse
# 188 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 189 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 190 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_MIRACLE_SEED
# 191 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 192 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_MIRACLE_SEED, 1
# 193 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemMiracleSeed_2:
# 183 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 184 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemTM13::
# 198 "data/maps/Zone9A/scripts.pory"
	lock
# 199 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_TM13, Zone9A_EventScript_ItemTM13_2
# 204 "data/maps/Zone9A/scripts.pory"
	waitse
# 205 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 206 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 207 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_TM13
# 208 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 209 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_TM13, 1
# 210 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemTM13_2:
# 200 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 201 "data/maps/Zone9A/scripts.pory"
	release
	end


# 214 "data/maps/Zone9A/scripts.pory"

# 215 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Cooper::
# 216 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_COOPER, Zone9A_Text_CooperIntro, Zone9A_Text_CooperDefeat
# 217 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Zone9A/scripts.pory"
       end
# 219 "data/maps/Zone9A/scripts.pory"

# 220 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperIntro:
# 221 "data/maps/Zone9A/scripts.pory"
	.string "Bet you didn't expect me!$"
# 222 "data/maps/Zone9A/scripts.pory"

# 223 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperDefeat:
# 224 "data/maps/Zone9A/scripts.pory"
	.string "I didn't expect you, either!$"
# 225 "data/maps/Zone9A/scripts.pory"

# 226 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperPostBattle:
# 227 "data/maps/Zone9A/scripts.pory"
	.string "I just pop out occasionally in\n"
# 228 "data/maps/Zone9A/scripts.pory"
	.string "case someone is there.$"
# 229 "data/maps/Zone9A/scripts.pory"

# 230 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Carmine::
# 231 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_CARMINE, Zone9A_Text_CarmineIntro, Zone9A_Text_CarmineDefeat
# 232 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CarminePostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Zone9A/scripts.pory"
       end
# 234 "data/maps/Zone9A/scripts.pory"

# 235 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineIntro:
# 236 "data/maps/Zone9A/scripts.pory"
	.string "Whew, it's hot in the jungle!$"
# 237 "data/maps/Zone9A/scripts.pory"

# 238 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineDefeat:
# 239 "data/maps/Zone9A/scripts.pory"
	.string "I think the humidity is the worst\n"
# 240 "data/maps/Zone9A/scripts.pory"
	.string "part!$"
# 241 "data/maps/Zone9A/scripts.pory"

# 242 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarminePostBattle:
# 243 "data/maps/Zone9A/scripts.pory"
	.string "I hope there's AC in the village.$"
# 244 "data/maps/Zone9A/scripts.pory"

# 245 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Sign::
# 246 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_Text_Sign, MSGBOX_SIGN
# 247 "data/maps/Zone9A/scripts.pory"
	end
# 248 "data/maps/Zone9A/scripts.pory"

# 249 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_Sign:
# 250 "data/maps/Zone9A/scripts.pory"
	.string "Trainer Tips!\p"
# 251 "data/maps/Zone9A/scripts.pory"
	.string "While you are on the Pokémon stats\n"
# 252 "data/maps/Zone9A/scripts.pory"
	.string "screen, you can press {A_BUTTON} to switch\l"
# 253 "data/maps/Zone9A/scripts.pory"
	.string "between stats, IVs, or EVs.$"

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
# 54 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row,\lwithout being healed in between\lbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_1:
# 56 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row.\pYou'll be fully healed in between\nbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_2:
# 59 "data/maps/Zone9A/scripts.pory"
	.string "Ah, so you're a chicken. Well, if\nyou change your mind, I'll be here.$"

Zone9A_EventScript_Ari_Text_3:
# 63 "data/maps/Zone9A/scripts.pory"
	.string "Alright, well, best of luck!$"

Zone9A_EventScript_Ari_Text_4:
# 65 "data/maps/Zone9A/scripts.pory"
	.string "What!? How!?\nYou're tougher than I thought!$"

Zone9A_EventScript_Ari_Text_5:
# 71 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Hey, everyone!\nI've found a pretty strong Trainer!$"

Zone9A_EventScript_Ari_Text_6:
# 81 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: You beat my brother?\nUgh. Such a brat.\pLet's just get this over with.$"

Zone9A_EventScript_Ari_Text_7:
# 82 "data/maps/Zone9A/scripts.pory"
	.string "Sigh…\nI thought this would happen…$"

Zone9A_EventScript_Ari_Text_8:
# 88 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Mom! It's your turn!$"

Zone9A_EventScript_Ari_Text_9:
# 98 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: Oh! I am so excited!\pFinally, a challenger who got past\nboth of my children!\pIt's Momma's time to shine!$"

Zone9A_EventScript_Ari_Text_10:
# 99 "data/maps/Zone9A/scripts.pory"
	.string "It was you who shined instead!$"

Zone9A_EventScript_Ari_Text_11:
# 105 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: It's all you, baby!$"

Zone9A_EventScript_Ari_Text_12:
# 115 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Guess what time it is?\nIt's time to take out the trash!$"

Zone9A_EventScript_Ari_Text_13:
# 116 "data/maps/Zone9A/scripts.pory"
	.string "Sorry, sorry!\nI didn't realize you were so strong!$"

Zone9A_EventScript_Ari_Text_14:
# 120 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Kids!\nWake your grandma up!$"

Zone9A_EventScript_Ari_Text_15:
# 132 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Who dares disturb me from my\n"
	.string "slumber?$"

Zone9A_EventScript_Ari_Text_16:
# 134 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Good, good.\pWell done, young one.\pHere is a little reward for you\ncompleting my family's trial.$"

Zone9A_Text_EricaDefeat::
# 159 "data/maps/Zone9A/scripts.pory"
	.string "Oh… You are the one…$"
