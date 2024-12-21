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


Zone9A_EventScript_SetRegularGrass::
# 22 "data/maps/Zone9A/scripts.pory"
	setvar VAR_ZONE_9_STATE, 1
	return


Zone9A_EventScript_SetThickGrass::
# 26 "data/maps/Zone9A/scripts.pory"
	setvar VAR_ZONE_9_STATE, 0
	return


Zone9A_EventScript_HerbalSign::
# 30 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Man::
# 35 "data/maps/Zone9A/scripts.pory"
	lock
# 36 "data/maps/Zone9A/scripts.pory"
	faceplayer
# 37 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Man_Text_0
# 38 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_Ari::
# 43 "data/maps/Zone9A/scripts.pory"
	lock
# 44 "data/maps/Zone9A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 45 "data/maps/Zone9A/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Zone9A_EventScript_Ari_2
# 52 "data/maps/Zone9A/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Zone9A_EventScript_Ari_3
Zone9A_EventScript_Ari_1:
# 60 "data/maps/Zone9A/scripts.pory"
	faceplayer
# 61 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_7
# 61 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_7
# 64 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_1, MSGBOX_YESNO
Zone9A_EventScript_Ari_6:
# 66 "data/maps/Zone9A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone9A_EventScript_Ari_12
# 71 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_3, MSGBOX_DEFAULT
# 72 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 73 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ARI, Zone9A_EventScript_Ari_Text_4
# 74 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_17
Zone9A_EventScript_Ari_15:
# 77 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 79 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_5, MSGBOX_DEFAULT
# 80 "data/maps/Zone9A/scripts.pory"
	closemessage
# 81 "data/maps/Zone9A/scripts.pory"
	applymovement 1, Zone9A_Movement_WinstrateEnterHouse
# 82 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 83 "data/maps/Zone9A/scripts.pory"
	removeobject 1
# 84 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 85 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 86 "data/maps/Zone9A/scripts.pory"
	addobject 2
# 87 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 88 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 89 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_6, MSGBOX_DEFAULT
# 90 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BERTHA, Zone9A_EventScript_Ari_Text_7
# 91 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_22
Zone9A_EventScript_Ari_20:
# 94 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 96 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_8, MSGBOX_DEFAULT
# 97 "data/maps/Zone9A/scripts.pory"
	closemessage
# 98 "data/maps/Zone9A/scripts.pory"
	applymovement 2, Zone9A_Movement_WinstrateEnterHouse
# 99 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 100 "data/maps/Zone9A/scripts.pory"
	removeobject 2
# 101 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 102 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 103 "data/maps/Zone9A/scripts.pory"
	addobject 3
# 104 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 105 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 106 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_9, MSGBOX_DEFAULT
# 107 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_CASSANDRA, Zone9A_EventScript_Ari_Text_10
# 108 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_27
Zone9A_EventScript_Ari_25:
# 111 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 113 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_11, MSGBOX_DEFAULT
# 114 "data/maps/Zone9A/scripts.pory"
	closemessage
# 115 "data/maps/Zone9A/scripts.pory"
	applymovement 3, Zone9A_Movement_WinstrateEnterHouse
# 116 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 117 "data/maps/Zone9A/scripts.pory"
	removeobject 3
# 118 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 119 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 120 "data/maps/Zone9A/scripts.pory"
	addobject 4
# 121 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkDown
# 122 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 123 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_12, MSGBOX_DEFAULT
# 124 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_DOMINIC, Zone9A_EventScript_Ari_Text_13
# 125 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone9A_EventScript_Ari_32
Zone9A_EventScript_Ari_30:
# 128 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_14, MSGBOX_DEFAULT
# 129 "data/maps/Zone9A/scripts.pory"
	closemessage
# 130 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 131 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 132 "data/maps/Zone9A/scripts.pory"
	applymovement 4, Zone9A_Movement_WinstrateEnterHouse
# 133 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 134 "data/maps/Zone9A/scripts.pory"
	removeobject 4
# 135 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Zone9A_Movement_WaitForNextWinstrate
# 136 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 137 "data/maps/Zone9A/scripts.pory"
	addobject 5
# 138 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkDown
# 139 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 140 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_15
# 141 "data/maps/Zone9A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ERICA, Zone9A_Text_EricaDefeat
# 142 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_16
# 143 "data/maps/Zone9A/scripts.pory"
	giveitem ITEM_TM14
# 144 "data/maps/Zone9A/scripts.pory"
	closemessage
# 145 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 146 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 147 "data/maps/Zone9A/scripts.pory"
	applymovement 5, Zone9A_Movement_WinstrateEnterHouse
# 148 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 149 "data/maps/Zone9A/scripts.pory"
	removeobject 5
# 150 "data/maps/Zone9A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 151 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_HIDE_ZONE9A_ARI_WINSTRATE
# 152 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_Ari_2:
# 46 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 47 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 48 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 49 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 50 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 51 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_3:
# 53 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 54 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 56 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone9A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 58 "data/maps/Zone9A/scripts.pory"
	waitmovement 0
	goto Zone9A_EventScript_Ari_1

Zone9A_EventScript_Ari_7:
# 62 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_0, MSGBOX_YESNO
	goto Zone9A_EventScript_Ari_6

Zone9A_EventScript_Ari_12:
# 67 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_EventScript_Ari_Text_2, MSGBOX_DEFAULT
# 68 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_Ari_16:
# 75 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_17:
# 74 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_16
	goto Zone9A_EventScript_Ari_15

Zone9A_EventScript_Ari_21:
# 92 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_22:
# 91 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_21
	goto Zone9A_EventScript_Ari_20

Zone9A_EventScript_Ari_26:
# 109 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_27:
# 108 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_26
	goto Zone9A_EventScript_Ari_25

Zone9A_EventScript_Ari_31:
# 126 "data/maps/Zone9A/scripts.pory"
	special HealPlayerParty
	goto Zone9A_EventScript_Ari_30

Zone9A_EventScript_Ari_32:
# 125 "data/maps/Zone9A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone9A_EventScript_Ari_31
	goto Zone9A_EventScript_Ari_30


# 157 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WinstrateEnterHouse:
# 158 "data/maps/Zone9A/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/Zone9A/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/Zone9A/scripts.pory"
Zone9A_Movement_WaitForNextWinstrate:
# 163 "data/maps/Zone9A/scripts.pory"
	delay_16
# 163 "data/maps/Zone9A/scripts.pory"
	delay_16
# 163 "data/maps/Zone9A/scripts.pory"
	delay_16
	step_end

Zone9A_EventScript_ItemBigRoot::
# 171 "data/maps/Zone9A/scripts.pory"
	lock
# 172 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_BIG_ROOT, Zone9A_EventScript_ItemBigRoot_2
# 177 "data/maps/Zone9A/scripts.pory"
	waitse
# 178 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 179 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 180 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_BIG_ROOT
# 181 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 182 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_BIG_ROOT, 1
# 183 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemBigRoot_2:
# 173 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 174 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemMiracleSeed::
# 188 "data/maps/Zone9A/scripts.pory"
	lock
# 189 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_MIRACLE_SEED, Zone9A_EventScript_ItemMiracleSeed_2
# 194 "data/maps/Zone9A/scripts.pory"
	waitse
# 195 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 196 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 197 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_MIRACLE_SEED
# 198 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 199 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_MIRACLE_SEED, 1
# 200 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemMiracleSeed_2:
# 190 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 191 "data/maps/Zone9A/scripts.pory"
	release
	end


Zone9A_EventScript_ItemTM13::
# 205 "data/maps/Zone9A/scripts.pory"
	lock
# 206 "data/maps/Zone9A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE9A_TM13, Zone9A_EventScript_ItemTM13_2
# 211 "data/maps/Zone9A/scripts.pory"
	waitse
# 212 "data/maps/Zone9A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 213 "data/maps/Zone9A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 214 "data/maps/Zone9A/scripts.pory"
	setflag FLAG_ITEM_ZONE9A_TM13
# 215 "data/maps/Zone9A/scripts.pory"
	addobject VAR_LAST_TALKED
# 216 "data/maps/Zone9A/scripts.pory"
	finditem ITEM_TM13, 1
# 217 "data/maps/Zone9A/scripts.pory"
	release
	end

Zone9A_EventScript_ItemTM13_2:
# 207 "data/maps/Zone9A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 208 "data/maps/Zone9A/scripts.pory"
	release
	end


# 221 "data/maps/Zone9A/scripts.pory"

# 222 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Cooper::
# 223 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_COOPER, Zone9A_Text_CooperIntro, Zone9A_Text_CooperDefeat
# 224 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Zone9A/scripts.pory"
       end
# 226 "data/maps/Zone9A/scripts.pory"

# 227 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperIntro:
# 228 "data/maps/Zone9A/scripts.pory"
	.string "Bet you didn't expect me!$"
# 229 "data/maps/Zone9A/scripts.pory"

# 230 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperDefeat:
# 231 "data/maps/Zone9A/scripts.pory"
	.string "I didn't expect you, either!$"
# 232 "data/maps/Zone9A/scripts.pory"

# 233 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CooperPostBattle:
# 234 "data/maps/Zone9A/scripts.pory"
	.string "I just pop out occasionally in\n"
# 235 "data/maps/Zone9A/scripts.pory"
	.string "case someone is there.$"
# 236 "data/maps/Zone9A/scripts.pory"

# 237 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Carmine::
# 238 "data/maps/Zone9A/scripts.pory"
       trainerbattle_single TRAINER_PBL_CARMINE, Zone9A_Text_CarmineIntro, Zone9A_Text_CarmineDefeat
# 239 "data/maps/Zone9A/scripts.pory"
       msgbox Zone9A_Text_CarminePostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Zone9A/scripts.pory"
       end
# 241 "data/maps/Zone9A/scripts.pory"

# 242 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineIntro:
# 243 "data/maps/Zone9A/scripts.pory"
	.string "Whew, it's hot in the jungle!$"
# 244 "data/maps/Zone9A/scripts.pory"

# 245 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarmineDefeat:
# 246 "data/maps/Zone9A/scripts.pory"
	.string "I think the humidity is the worst\n"
# 247 "data/maps/Zone9A/scripts.pory"
	.string "part!$"
# 248 "data/maps/Zone9A/scripts.pory"

# 249 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_CarminePostBattle:
# 250 "data/maps/Zone9A/scripts.pory"
	.string "I hope there's AC in the village.$"
# 251 "data/maps/Zone9A/scripts.pory"

# 252 "data/maps/Zone9A/scripts.pory"
Zone9A_EventScript_Sign::
# 253 "data/maps/Zone9A/scripts.pory"
	msgbox Zone9A_Text_Sign, MSGBOX_SIGN
# 254 "data/maps/Zone9A/scripts.pory"
	end
# 255 "data/maps/Zone9A/scripts.pory"

# 256 "data/maps/Zone9A/scripts.pory"
Zone9A_Text_Sign:
# 257 "data/maps/Zone9A/scripts.pory"
	.string "Trainer Tips\p"
# 258 "data/maps/Zone9A/scripts.pory"
	.string "While you are on the Pokémon stats\n"
# 259 "data/maps/Zone9A/scripts.pory"
	.string "screen, you can press {A_BUTTON} to switch\l"
# 260 "data/maps/Zone9A/scripts.pory"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_HerbalSign_Text_0:
# 30 "data/maps/Zone9A/scripts.pory"
	.string "Herbal and Incense Shop$"

Zone9A_EventScript_Man_Text_0:
# 37 "data/maps/Zone9A/scripts.pory"
	.string "Hey there, champ!\p"
	.string "In our modest village, there is a family\n"
	.string "of strong Trainers.\p"
	.string "Why don't you go spar with them?$"

Zone9A_EventScript_Ari_Text_0:
# 62 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row,\lwithout being healed in between\lbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_1:
# 64 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Howzit goin?\pOh, you're a traveler!\nYou might be strong enough…\pI bet you can't defeat the five\nmembers of my family in a row.\pYou'll be fully healed in between\nbattles.\pWhat do you say to my little wager?$"

Zone9A_EventScript_Ari_Text_2:
# 67 "data/maps/Zone9A/scripts.pory"
	.string "Ah, so you're a chicken. Well, if\nyou change your mind, I'll be here.$"

Zone9A_EventScript_Ari_Text_3:
# 71 "data/maps/Zone9A/scripts.pory"
	.string "Alright, well, best of luck!$"

Zone9A_EventScript_Ari_Text_4:
# 73 "data/maps/Zone9A/scripts.pory"
	.string "What!? How!?\nYou're tougher than I thought!$"

Zone9A_EventScript_Ari_Text_5:
# 79 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Ari{COLOR DARK_GRAY}: Hey, everyone!\nI've found a pretty strong Trainer!$"

Zone9A_EventScript_Ari_Text_6:
# 89 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: You beat my brother?\nUgh. Such a brat.\pLet's just get this over with.$"

Zone9A_EventScript_Ari_Text_7:
# 90 "data/maps/Zone9A/scripts.pory"
	.string "Sigh…\nI thought this would happen…$"

Zone9A_EventScript_Ari_Text_8:
# 96 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Bertha{COLOR DARK_GRAY}: Mom! It's your turn!$"

Zone9A_EventScript_Ari_Text_9:
# 106 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: Oh! I am so excited!\pFinally, a challenger who got past\nboth of my children!\pIt's Momma's time to shine!$"

Zone9A_EventScript_Ari_Text_10:
# 107 "data/maps/Zone9A/scripts.pory"
	.string "It was you who shined instead!$"

Zone9A_EventScript_Ari_Text_11:
# 113 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Cassandra{COLOR DARK_GRAY}: It's all you, baby!$"

Zone9A_EventScript_Ari_Text_12:
# 123 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Guess what time it is?\nIt's time to take out the trash!$"

Zone9A_EventScript_Ari_Text_13:
# 124 "data/maps/Zone9A/scripts.pory"
	.string "Sorry, sorry!\nI didn't realize you were so strong!$"

Zone9A_EventScript_Ari_Text_14:
# 128 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Dominic{COLOR DARK_GRAY}: Kids!\nWake your grandma up!$"

Zone9A_EventScript_Ari_Text_15:
# 140 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Who dares disturb me from my\n"
	.string "slumber?$"

Zone9A_EventScript_Ari_Text_16:
# 142 "data/maps/Zone9A/scripts.pory"
	.string "{COLOR BLUE}Erica{COLOR DARK_GRAY}: Good, good.\pWell done, young one.\pHere is a little reward for you\ncompleting my family's trial.$"

Zone9A_Text_EricaDefeat::
# 166 "data/maps/Zone9A/scripts.pory"
	.string "Oh… You are the one…$"
