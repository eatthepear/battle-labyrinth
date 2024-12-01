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
	goto_if_set FLAG_ITEM_ZONE5A_TM04, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MOON_STONE, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone5A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone5A_EventScript_ItemQuickBall::
# 27 "data/maps/Zone5A/scripts.pory"
	lock
# 28 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_QUICK_BALL, Zone5A_EventScript_ItemQuickBall_2
# 33 "data/maps/Zone5A/scripts.pory"
	waitse
# 34 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 36 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_QUICK_BALL
# 37 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 38 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 39 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemQuickBall_2:
# 29 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 30 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_ItemTM04::
# 44 "data/maps/Zone5A/scripts.pory"
	lock
# 45 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_TM04, Zone5A_EventScript_ItemTM04_2
# 50 "data/maps/Zone5A/scripts.pory"
	waitse
# 51 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 53 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_TM04
# 54 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 55 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_TM04
# 56 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_ItemTM04_2:
# 46 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 47 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MoonStone::
# 61 "data/maps/Zone5A/scripts.pory"
	lock
# 62 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MOON_STONE, Zone5A_EventScript_MoonStone_2
# 67 "data/maps/Zone5A/scripts.pory"
	waitse
# 68 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 69 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 70 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MOON_STONE
# 71 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 72 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MOON_STONE
# 73 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MoonStone_2:
# 63 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 64 "data/maps/Zone5A/scripts.pory"
	release
	end


Zone5A_EventScript_MiracleSeed::
# 78 "data/maps/Zone5A/scripts.pory"
	lock
# 79 "data/maps/Zone5A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE5A_MIRACLE_SEED, Zone5A_EventScript_MiracleSeed_2
# 84 "data/maps/Zone5A/scripts.pory"
	waitse
# 85 "data/maps/Zone5A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/Zone5A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 87 "data/maps/Zone5A/scripts.pory"
	setflag FLAG_ITEM_ZONE5A_MIRACLE_SEED
# 88 "data/maps/Zone5A/scripts.pory"
	addobject VAR_LAST_TALKED
# 89 "data/maps/Zone5A/scripts.pory"
	finditem ITEM_MIRACLE_SEED
# 90 "data/maps/Zone5A/scripts.pory"
	release
	end

Zone5A_EventScript_MiracleSeed_2:
# 80 "data/maps/Zone5A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 81 "data/maps/Zone5A/scripts.pory"
	release
	end


# 109 "data/maps/Zone5A/scripts.pory"

# 110 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_AnneAndJune::
# 111 "data/maps/Zone5A/scripts.pory"
	trainerbattle_double TRAINER_PBL_ANNE_AND_JUNE, Zone5A_Text_AnneAndJuneIntro, Zone5A_Text_AnneAndJuneDefeat, gText_NotEnoughMons
# 112 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_AnneAndJunePostBattle, MSGBOX_DEFAULT
# 113 "data/maps/Zone5A/scripts.pory"
	release
# 114 "data/maps/Zone5A/scripts.pory"
	end
# 115 "data/maps/Zone5A/scripts.pory"

# 116 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneIntro:
# 117 "data/maps/Zone5A/scripts.pory"
	.string "Anne: We're teammates!\p"
# 118 "data/maps/Zone5A/scripts.pory"
	.string "June: No, I'm the Senior and\n"
# 119 "data/maps/Zone5A/scripts.pory"
	.string "you're the Junior!$"
# 120 "data/maps/Zone5A/scripts.pory"

# 121 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJuneDefeat:
# 122 "data/maps/Zone5A/scripts.pory"
	.string "Anne: I guess you were right…\p"
# 123 "data/maps/Zone5A/scripts.pory"
	.string "June: We still lost though…$"
# 124 "data/maps/Zone5A/scripts.pory"

# 125 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_AnneAndJunePostBattle:
# 126 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Maybe we needed better…\p"
# 127 "data/maps/Zone5A/scripts.pory"
	.string "June: Coordination?\p"
# 128 "data/maps/Zone5A/scripts.pory"
	.string "Anne: Yeah, exactly that!$"
# 129 "data/maps/Zone5A/scripts.pory"

# 130 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Rebecca::
# 131 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REBECCA, Zone5A_Text_RebeccaIntro, Zone5A_Text_RebeccaDefeat
# 132 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_RebeccaPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Zone5A/scripts.pory"
	end
# 134 "data/maps/Zone5A/scripts.pory"

# 135 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaIntro:
# 136 "data/maps/Zone5A/scripts.pory"
	.string "Don't interrupt my morning walk!$"
# 137 "data/maps/Zone5A/scripts.pory"

# 138 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaDefeat:
# 139 "data/maps/Zone5A/scripts.pory"
	.string "I really like walking, ok?$"
# 140 "data/maps/Zone5A/scripts.pory"

# 141 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_RebeccaPostBattle:
# 142 "data/maps/Zone5A/scripts.pory"
	.string "Exercise is good for the heart and\n"
# 143 "data/maps/Zone5A/scripts.pory"
	.string "body!$"
# 144 "data/maps/Zone5A/scripts.pory"

# 145 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Caitlyn::
# 146 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CAITLYN, Zone5A_Text_CaitlynIntro, Zone5A_Text_CaitlynDefeat
# 147 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_CaitlynPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Zone5A/scripts.pory"
	end
# 149 "data/maps/Zone5A/scripts.pory"

# 150 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynIntro:
# 151 "data/maps/Zone5A/scripts.pory"
	.string "This is such a nice spot to picnic!\n"
# 152 "data/maps/Zone5A/scripts.pory"
	.string "Shoo! Find your own spot!$"
# 153 "data/maps/Zone5A/scripts.pory"

# 154 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynDefeat:
# 155 "data/maps/Zone5A/scripts.pory"
	.string "I guess you can join me…$"
# 156 "data/maps/Zone5A/scripts.pory"

# 157 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_CaitlynPostBattle:
# 158 "data/maps/Zone5A/scripts.pory"
	.string "Why's this the best spot to picnic?\n"
# 159 "data/maps/Zone5A/scripts.pory"
	.string "It's because you can see a lot of\l"
# 160 "data/maps/Zone5A/scripts.pory"
	.string "the forest below from here!$"
# 161 "data/maps/Zone5A/scripts.pory"

# 162 "data/maps/Zone5A/scripts.pory"
Zone5A_EventScript_Kevin::
# 163 "data/maps/Zone5A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KEVIN, Zone5A_Text_KevinIntro, Zone5A_Text_KevinDefeat
# 164 "data/maps/Zone5A/scripts.pory"
	msgbox Zone5A_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/Zone5A/scripts.pory"
	end
# 166 "data/maps/Zone5A/scripts.pory"

# 167 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinIntro:
# 168 "data/maps/Zone5A/scripts.pory"
	.string "Hmm… It appears there's not many\n"
# 169 "data/maps/Zone5A/scripts.pory"
	.string "Bug Pokémon in this area… Maybe\l"
# 170 "data/maps/Zone5A/scripts.pory"
	.string "I'll study you instead!$"
# 171 "data/maps/Zone5A/scripts.pory"

# 172 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinDefeat:
# 173 "data/maps/Zone5A/scripts.pory"
	.string "You seem to be the type that's good\n"
# 174 "data/maps/Zone5A/scripts.pory"
	.string "at Pokémon battling!$"
# 175 "data/maps/Zone5A/scripts.pory"

# 176 "data/maps/Zone5A/scripts.pory"
Zone5A_Text_KevinPostBattle:
# 177 "data/maps/Zone5A/scripts.pory"
	.string "Still, you know anywhere I can find\n"
# 178 "data/maps/Zone5A/scripts.pory"
	.string "some good Bug Pokémon?$"
