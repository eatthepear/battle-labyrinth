Zone5A_MapScripts::
# 2 "data/maps/Zone5A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_2, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_17
# 26 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 24 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5A_EventScript_QuickBall::
# 32 "data/maps/Zone5A/scripts.pory"
	lock
# 33 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_QuickBall_2
# 38 "data/maps/Zone5A/scripts.pory"
	waitse
# 39 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 40 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 41 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 42 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 43 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 44 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_QuickBall_2:
# 34 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 35 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Random1::
# 49 "data/maps/Zone5A/scripts.pory"
	lock
# 50 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_1, Zone5A_EventScript_Random1_2
# 55 "data/maps/Zone5A/scripts.pory"
	waitse
# 56 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 57 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 58 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_1
# 59 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 60 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 61 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 62 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Random1_2:
# 51 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 52 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_LaxMint::
# 67 "data/maps/Zone5A/scripts.pory"
	lock
# 68 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_LAX_MINT, Zone5A_EventScript_LaxMint_2
# 73 "data/maps/Zone5A/scripts.pory"
	waitse
# 74 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 75 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 76 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_LAX_MINT
# 77 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 78 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_LAX_MINT
# 79 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_LaxMint_2:
# 69 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 70 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 84 "data/maps/Zone5A/scripts.pory"
	lock
# 85 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 90 "data/maps/Zone5A/scripts.pory"
	waitse
# 91 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 92 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 93 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 94 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 95 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 96 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 86 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 87 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_Random2::
# 101 "data/maps/Zone5A/scripts.pory"
	lock
# 102 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_RANDOM_2, Zone5A_EventScript_Random2_2
# 107 "data/maps/Zone5A/scripts.pory"
	waitse
# 108 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 109 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 110 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_RANDOM_2
# 111 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 112 "data/maps/Zone5A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 113 "data/maps/Zone5A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 114 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_Random2_2:
# 103 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 104 "data/maps/Zone5A/scripts.pory"
	release
	end


# 133 "data/maps/Zone5A/scripts.pory"

# 134 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 135 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 136 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 137 "data/maps/Zone5A/scripts.pory"
	release
# 138 "data/maps/Zone5A/scripts.pory"
	end
# 139 "data/maps/Zone5A/scripts.pory"

# 140 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 141 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 142 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 143 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 144 "data/maps/Zone5A/scripts.pory"

# 145 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 146 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 147 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 148 "data/maps/Zone5A/scripts.pory"

# 149 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 150 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 151 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 152 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 153 "data/maps/Zone5A/scripts.pory"

# 154 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 155 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 156 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Zone5A/scripts.pory"
	end
# 158 "data/maps/Zone5A/scripts.pory"

# 159 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 160 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 161 "data/maps/Zone5A/scripts.pory"

# 162 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 163 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 164 "data/maps/Zone5A/scripts.pory"

# 165 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 166 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 167 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 168 "data/maps/Zone5A/scripts.pory"

# 169 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 170 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 171 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Zone5A/scripts.pory"
	end
# 173 "data/maps/Zone5A/scripts.pory"

# 174 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 175 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 176 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 177 "data/maps/Zone5A/scripts.pory"

# 178 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 179 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 180 "data/maps/Zone5A/scripts.pory"

# 181 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 182 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 183 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 184 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 185 "data/maps/Zone5A/scripts.pory"

# 186 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 187 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 188 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Zone5A/scripts.pory"
	end
# 190 "data/maps/Zone5A/scripts.pory"

# 191 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 192 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 193 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 194 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 195 "data/maps/Zone5A/scripts.pory"

# 196 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 197 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 198 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 199 "data/maps/Zone5A/scripts.pory"

# 200 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 201 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 202 "data/maps/Zone5A/scripts.pory"
	.string "some good Bug Pokémon?$"
