Zone6A_MapScripts::
# 2 "data/maps/Zone6A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_TM07, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST
Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone6A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone6A_EventScript_LeviathanBattle::
# 22 "data/maps/Zone6A/scripts.pory"
	lock
# 23 "data/maps/Zone6A/scripts.pory"
	faceplayer
# 24 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_6, Zone6A_EventScript_LeviathanBattle_2
# 30 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_1, MSGBOX_YESNO
# 32 "data/maps/Zone6A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone6A_EventScript_LeviathanBattle_5
# 37 "data/maps/Zone6A/scripts.pory"
	fadeoutbgm 1
# 38 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_3, MSGBOX_DEFAULT
# 39 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 40 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_8
# 40 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_8
Zone6A_EventScript_LeviathanBattle_7:
# 45 "data/maps/Zone6A/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_MINA
# 46 "data/maps/Zone6A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MINA_LEVIATHAN_6, Zone6A_EventScript_LeviathanBattle_Text_5
# 47 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone6A_EventScript_LeviathanBattle_13
# 47 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone6A_EventScript_LeviathanBattle_13
Zone6A_EventScript_LeviathanBattle_12:
# 51 "data/maps/Zone6A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 52 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
# 53 "data/maps/Zone6A/scripts.pory"
	giveitem ITEM_TM08
# 54 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_Mina_PostBattle
# 55 "data/maps/Zone6A/scripts.pory"
	closemessage
# 56 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_6
# 57 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_LeviathanBattle_2:
# 25 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_Mina_PostBattle
# 26 "data/maps/Zone6A/scripts.pory"
	closemessage
# 27 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_LeviathanBattle_5:
# 33 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_2
# 34 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_LeviathanBattle_8:
# 41 "data/maps/Zone6A/scripts.pory"
	setweather WEATHER_RAIN
# 42 "data/maps/Zone6A/scripts.pory"
	doweather
# 43 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_EventScript_LeviathanBattle_Text_4
	goto Zone6A_EventScript_LeviathanBattle_7

Zone6A_EventScript_LeviathanBattle_13:
# 48 "data/maps/Zone6A/scripts.pory"
	resetweather
# 49 "data/maps/Zone6A/scripts.pory"
	doweather
	goto Zone6A_EventScript_LeviathanBattle_12


Zone6A_EventScript_ItemNetBall::
# 66 "data/maps/Zone6A/scripts.pory"
	lock
# 67 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NET_BALL, Zone6A_EventScript_ItemNetBall_2
# 72 "data/maps/Zone6A/scripts.pory"
	waitse
# 73 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 74 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 75 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NET_BALL
# 76 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 77 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NET_BALL, 1
# 78 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemNetBall_2:
# 68 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 69 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemTM07::
# 83 "data/maps/Zone6A/scripts.pory"
	lock
# 84 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_TM07, Zone6A_EventScript_ItemTM07_2
# 89 "data/maps/Zone6A/scripts.pory"
	waitse
# 90 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 91 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 92 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_TM07
# 93 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 94 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_TM07
# 95 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemTM07_2:
# 85 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 86 "data/maps/Zone6A/scripts.pory"
	release
	end


Zone6A_EventScript_ItemNestBall::
# 100 "data/maps/Zone6A/scripts.pory"
	lock
# 101 "data/maps/Zone6A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE6A_NEST_BALL, Zone6A_EventScript_ItemNestBall_2
# 106 "data/maps/Zone6A/scripts.pory"
	waitse
# 107 "data/maps/Zone6A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 108 "data/maps/Zone6A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 109 "data/maps/Zone6A/scripts.pory"
	setflag FLAG_ITEM_ZONE6A_NEST_BALL
# 110 "data/maps/Zone6A/scripts.pory"
	addobject VAR_LAST_TALKED
# 111 "data/maps/Zone6A/scripts.pory"
	finditem ITEM_NEST_BALL, 1
# 112 "data/maps/Zone6A/scripts.pory"
	release
	end

Zone6A_EventScript_ItemNestBall_2:
# 102 "data/maps/Zone6A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 103 "data/maps/Zone6A/scripts.pory"
	release
	end


# 116 "data/maps/Zone6A/scripts.pory"

# 117 "data/maps/Zone6A/scripts.pory"

# 118 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Zack::
# 119 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ZACK, Zone6A_Text_ZackIntro, Zone6A_Text_ZackDefeat
# 120 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_ZackPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Zone6A/scripts.pory"
	end
# 122 "data/maps/Zone6A/scripts.pory"

# 123 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ZackIntro:
# 124 "data/maps/Zone6A/scripts.pory"
	.string "My twin sister Mina loves tubing\n"
# 125 "data/maps/Zone6A/scripts.pory"
	.string "just as much as I do!$"
# 126 "data/maps/Zone6A/scripts.pory"

# 127 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ZackDefeat:
# 128 "data/maps/Zone6A/scripts.pory"
	.string "She just won't admit it!$"
# 129 "data/maps/Zone6A/scripts.pory"

# 130 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ZackPostBattle:
# 131 "data/maps/Zone6A/scripts.pory"
	.string "Our family really loves tubing!$"
# 132 "data/maps/Zone6A/scripts.pory"

# 133 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Melanie::
# 134 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MELANIE, Zone6A_Text_MelanieIntro, Zone6A_Text_MelanieDefeat
# 135 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Zone6A/scripts.pory"
	end
# 137 "data/maps/Zone6A/scripts.pory"

# 138 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieIntro:
# 139 "data/maps/Zone6A/scripts.pory"
	.string "Watch where you're going!$"
# 140 "data/maps/Zone6A/scripts.pory"

# 141 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelanieDefeat:
# 142 "data/maps/Zone6A/scripts.pory"
	.string "Sorry I yelled at you…$"
# 143 "data/maps/Zone6A/scripts.pory"

# 144 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_MelaniePostBattle:
# 145 "data/maps/Zone6A/scripts.pory"
	.string "I also need to be careful about\n"
# 146 "data/maps/Zone6A/scripts.pory"
	.string "where I'm going.$"
# 147 "data/maps/Zone6A/scripts.pory"

# 148 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Constance::
# 149 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONSTANCE, Zone6A_Text_ConstanceIntro, Zone6A_Text_ConstanceDefeat
# 150 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_ConstancePostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Zone6A/scripts.pory"
	end
# 152 "data/maps/Zone6A/scripts.pory"

# 153 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceIntro:
# 154 "data/maps/Zone6A/scripts.pory"
	.string "Want to join my picnic?$"
# 155 "data/maps/Zone6A/scripts.pory"

# 156 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstanceDefeat:
# 157 "data/maps/Zone6A/scripts.pory"
	.string "Oops, I forgot to pack food!$"
# 158 "data/maps/Zone6A/scripts.pory"

# 159 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_ConstancePostBattle:
# 160 "data/maps/Zone6A/scripts.pory"
	.string "I can look for some Berries or\n"
# 161 "data/maps/Zone6A/scripts.pory"
	.string "something…$"
# 162 "data/maps/Zone6A/scripts.pory"

# 163 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Frank::
# 164 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FRANK, Zone6A_Text_FrankIntro, Zone6A_Text_FrankDefeat
# 165 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Zone6A/scripts.pory"
	end
# 167 "data/maps/Zone6A/scripts.pory"

# 168 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankIntro:
# 169 "data/maps/Zone6A/scripts.pory"
	.string "The beach is full of surprises!$"
# 170 "data/maps/Zone6A/scripts.pory"

# 171 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankDefeat:
# 172 "data/maps/Zone6A/scripts.pory"
	.string "This time, I was surprised by you!$"
# 173 "data/maps/Zone6A/scripts.pory"

# 174 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_FrankPostBattle:
# 175 "data/maps/Zone6A/scripts.pory"
	.string "Your skills are astounding!$"
# 176 "data/maps/Zone6A/scripts.pory"

# 177 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Dudley::
# 178 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DUDLEY, Zone6A_Text_DudleyIntro, Zone6A_Text_DudleyDefeat
# 179 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Zone6A/scripts.pory"
	end
# 181 "data/maps/Zone6A/scripts.pory"

# 182 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyIntro:
# 183 "data/maps/Zone6A/scripts.pory"
	.string "You made me miss my catch!$"
# 184 "data/maps/Zone6A/scripts.pory"

# 185 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyDefeat:
# 186 "data/maps/Zone6A/scripts.pory"
	.string "Argh, there was no catch!\n"
# 187 "data/maps/Zone6A/scripts.pory"
	.string "I'm just frustrated!$"
# 188 "data/maps/Zone6A/scripts.pory"

# 189 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DudleyPostBattle:
# 190 "data/maps/Zone6A/scripts.pory"
	.string "Sorry for taking out my fishing\n"
# 191 "data/maps/Zone6A/scripts.pory"
	.string "frustration out on you.$"
# 192 "data/maps/Zone6A/scripts.pory"

# 193 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Daisy::
# 194 "data/maps/Zone6A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DAISY, Zone6A_Text_DaisyIntro, Zone6A_Text_DaisyDefeat
# 195 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/Zone6A/scripts.pory"
	end
# 197 "data/maps/Zone6A/scripts.pory"

# 198 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyIntro:
# 199 "data/maps/Zone6A/scripts.pory"
	.string "Baby Pokémon are just so cute!$"
# 200 "data/maps/Zone6A/scripts.pory"

# 201 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyDefeat:
# 202 "data/maps/Zone6A/scripts.pory"
	.string "They're not too great in battle,\n"
# 203 "data/maps/Zone6A/scripts.pory"
	.string "though.$"
# 204 "data/maps/Zone6A/scripts.pory"

# 205 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_DaisyPostBattle:
# 206 "data/maps/Zone6A/scripts.pory"
	.string "I guess these little ones need more\n"
# 207 "data/maps/Zone6A/scripts.pory"
	.string "time to get stronger and evolve!$"
# 208 "data/maps/Zone6A/scripts.pory"

# 209 "data/maps/Zone6A/scripts.pory"
Zone6A_EventScript_Sign::
# 210 "data/maps/Zone6A/scripts.pory"
	msgbox Zone6A_Text_Sign, MSGBOX_SIGN
# 211 "data/maps/Zone6A/scripts.pory"
	end
# 212 "data/maps/Zone6A/scripts.pory"

# 213 "data/maps/Zone6A/scripts.pory"
Zone6A_Text_Sign:
# 214 "data/maps/Zone6A/scripts.pory"
	.string "Trainer Tips!\p"
# 215 "data/maps/Zone6A/scripts.pory"
	.string "You can sort items in the Bag\n"
# 216 "data/maps/Zone6A/scripts.pory"
	.string "using {START_BUTTON}.$"

Zone6A_EventScript_LeviathanBattle_Text_0:
# 30 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Woah!$"

Zone6A_EventScript_LeviathanBattle_Text_1:
# 31 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Hey you! You think you're better\n"
	.string "than me or something?$"

Zone6A_EventScript_LeviathanBattle_Text_2:
# 33 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: That's what I thought!$"

Zone6A_EventScript_LeviathanBattle_Text_3:
# 38 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Who do you think you are?\p"
	.string "I'm a {COLOR BLUE}Leviathan{COLOR DARK_GRAY}, you know!$"

Zone6A_EventScript_LeviathanBattle_Text_4:
# 43 "data/maps/Zone6A/scripts.pory"
	.string "It suddenly began to rain!$"

Zone6A_EventScript_LeviathanBattle_Text_5:
# 46 "data/maps/Zone6A/scripts.pory"
	.string "Rain, rain, go away…$"

Zone6A_EventScript_LeviathanBattle_Text_6:
# 52 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: Woah!\p"
	.string "You're pretty good!\p"
	.string "Here, take this!$"

Zone6A_Text_Mina_PostBattle::
# 61 "data/maps/Zone6A/scripts.pory"
	.string "{COLOR BLUE}Mina{COLOR DARK_GRAY}: I love leaving footprints in the\n"
	.string "sand.\p"
	.string "And tubing! That too.$"
