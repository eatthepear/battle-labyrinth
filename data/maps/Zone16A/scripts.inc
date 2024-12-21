Zone16A_MapScripts::
# 2 "data/maps/Zone16A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_TM27, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_WATER_STONE, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_DIVE_BALL, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_TIMER_BALL, Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 21 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone16A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 19 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone16A_EventScript_LilyLeft::
# 27 "data/maps/Zone16A/scripts.pory"
	lockall
# 28 "data/maps/Zone16A/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 29 "data/maps/Zone16A/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone16A/scripts.pory"
	goto Zone16A_EventScript_LilyRight
	return


Zone16A_EventScript_LilyRight::
# 34 "data/maps/Zone16A/scripts.pory"
	lockall
# 35 "data/maps/Zone16A/scripts.pory"
	fadeoutbgm 1
# 36 "data/maps/Zone16A/scripts.pory"
	applymovement 7, Zone16A_Movement_LilyWalkDown
# 37 "data/maps/Zone16A/scripts.pory"
	waitmovement 0
# 38 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_Leviathan14Intro1, MSGBOX_DEFAULT
# 39 "data/maps/Zone16A/scripts.pory"
	setweather WEATHER_RAIN
# 40 "data/maps/Zone16A/scripts.pory"
	doweather
# 41 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_EventScript_LilyRight_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_Leviathan14Intro2
# 43 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 44 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone16A_EventScript_LilyRight_2
# 44 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone16A_EventScript_LilyRight_2
# 47 "data/maps/Zone16A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_LILY_LEVIATHAN_14, Zone16A_Text_Leviathan14Defeat
Zone16A_EventScript_LilyRight_1:
# 49 "data/maps/Zone16A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 50 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_EventScript_LilyRight_Text_1, MSGBOX_DEFAULT
# 51 "data/maps/Zone16A/scripts.pory"
	giveitem ITEM_TM28
# 52 "data/maps/Zone16A/scripts.pory"
	resetweather
# 53 "data/maps/Zone16A/scripts.pory"
	doweather
# 54 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_EventScript_LilyRight_Text_2
# 55 "data/maps/Zone16A/scripts.pory"
	closemessage
# 56 "data/maps/Zone16A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 57 "data/maps/Zone16A/scripts.pory"
	removeobject 7
# 58 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_14
# 59 "data/maps/Zone16A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 60 "data/maps/Zone16A/scripts.pory"
	setvar VAR_ZONE_16_STATE, 1
# 61 "data/maps/Zone16A/scripts.pory"
	release
	end

Zone16A_EventScript_LilyRight_2:
# 45 "data/maps/Zone16A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL, Zone16A_Text_Leviathan14Defeat
	goto Zone16A_EventScript_LilyRight_1


# 65 "data/maps/Zone16A/scripts.pory"
Zone16A_Movement_LilyWalkDown:
# 66 "data/maps/Zone16A/scripts.pory"
	walk_down
# 66 "data/maps/Zone16A/scripts.pory"
	walk_down
# 66 "data/maps/Zone16A/scripts.pory"
	walk_down
# 66 "data/maps/Zone16A/scripts.pory"
	walk_down
# 66 "data/maps/Zone16A/scripts.pory"
	walk_down
	step_end

Zone16A_EventScript_SandPile::
# 82 "data/maps/Zone16A/scripts.pory"
	lockall
# 83 "data/maps/Zone16A/scripts.pory"
	random 5
# 84 "data/maps/Zone16A/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone16A_EventScript_SandPile_2
# 114 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_EventScript_SandPile_Text_1
Zone16A_EventScript_SandPile_1:
# 116 "data/maps/Zone16A/scripts.pory"
	releaseall
	end

Zone16A_EventScript_SandPile_2:
# 85 "data/maps/Zone16A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 86 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_EventScript_SandPile_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/Zone16A/scripts.pory"
	waitmovement 0
# 88 "data/maps/Zone16A/scripts.pory"
	closemessage
# 89 "data/maps/Zone16A/scripts.pory"
	random 4
# 90 "data/maps/Zone16A/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Zone16A/scripts.pory"
	case 0, Zone16A_EventScript_SandPile_7
# 96 "data/maps/Zone16A/scripts.pory"
	case 1, Zone16A_EventScript_SandPile_8
# 101 "data/maps/Zone16A/scripts.pory"
	case 2, Zone16A_EventScript_SandPile_9
# 106 "data/maps/Zone16A/scripts.pory"
	case 3, Zone16A_EventScript_SandPile_10
Zone16A_EventScript_SandPile_5:
# 112 "data/maps/Zone16A/scripts.pory"
	dowildbattle
	goto Zone16A_EventScript_SandPile_1

Zone16A_EventScript_SandPile_7:
# 92 "data/maps/Zone16A/scripts.pory"
	setwildbattle SPECIES_PINCURCHIN, 28, ITEM_NONE
# 93 "data/maps/Zone16A/scripts.pory"
	playmoncry SPECIES_PINCURCHIN, 2
# 94 "data/maps/Zone16A/scripts.pory"
	delay 40
# 95 "data/maps/Zone16A/scripts.pory"
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_8:
# 97 "data/maps/Zone16A/scripts.pory"
	setwildbattle SPECIES_PYUKUMUKU, 28, ITEM_NONE
# 98 "data/maps/Zone16A/scripts.pory"
	playmoncry SPECIES_PYUKUMUKU, 2
# 99 "data/maps/Zone16A/scripts.pory"
	delay 40
# 100 "data/maps/Zone16A/scripts.pory"
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_9:
# 102 "data/maps/Zone16A/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 28, ITEM_NONE
# 103 "data/maps/Zone16A/scripts.pory"
	playmoncry SPECIES_SANDYGAST, 2
# 104 "data/maps/Zone16A/scripts.pory"
	delay 40
# 105 "data/maps/Zone16A/scripts.pory"
	waitmoncry
	goto Zone16A_EventScript_SandPile_5

Zone16A_EventScript_SandPile_10:
# 107 "data/maps/Zone16A/scripts.pory"
	setwildbattle SPECIES_WIMPOD, 28, ITEM_NONE
# 108 "data/maps/Zone16A/scripts.pory"
	playmoncry SPECIES_WIMPOD, 2
# 109 "data/maps/Zone16A/scripts.pory"
	delay 40
# 110 "data/maps/Zone16A/scripts.pory"
	waitmoncry
	goto Zone16A_EventScript_SandPile_5


Zone16A_EventScript_TM27::
# 121 "data/maps/Zone16A/scripts.pory"
	lock
# 122 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_TM27, Zone16A_EventScript_TM27_2
# 127 "data/maps/Zone16A/scripts.pory"
	waitse
# 128 "data/maps/Zone16A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 129 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 130 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_ITEM_ZONE16A_TM27
# 131 "data/maps/Zone16A/scripts.pory"
	addobject VAR_LAST_TALKED
# 132 "data/maps/Zone16A/scripts.pory"
	finditem ITEM_TM27, 1
# 133 "data/maps/Zone16A/scripts.pory"
	release
	end

Zone16A_EventScript_TM27_2:
# 123 "data/maps/Zone16A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 124 "data/maps/Zone16A/scripts.pory"
	release
	end


Zone16A_EventScript_WaterStone::
# 138 "data/maps/Zone16A/scripts.pory"
	lock
# 139 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_WATER_STONE, Zone16A_EventScript_WaterStone_2
# 144 "data/maps/Zone16A/scripts.pory"
	waitse
# 145 "data/maps/Zone16A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 146 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 147 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_ITEM_ZONE16A_WATER_STONE
# 148 "data/maps/Zone16A/scripts.pory"
	addobject VAR_LAST_TALKED
# 149 "data/maps/Zone16A/scripts.pory"
	finditem ITEM_WATER_STONE, 1
# 150 "data/maps/Zone16A/scripts.pory"
	release
	end

Zone16A_EventScript_WaterStone_2:
# 140 "data/maps/Zone16A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 141 "data/maps/Zone16A/scripts.pory"
	release
	end


Zone16A_EventScript_DiveBall::
# 155 "data/maps/Zone16A/scripts.pory"
	lock
# 156 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_DIVE_BALL, Zone16A_EventScript_DiveBall_2
# 161 "data/maps/Zone16A/scripts.pory"
	waitse
# 162 "data/maps/Zone16A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 163 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 164 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_ITEM_ZONE16A_DIVE_BALL
# 165 "data/maps/Zone16A/scripts.pory"
	addobject VAR_LAST_TALKED
# 166 "data/maps/Zone16A/scripts.pory"
	finditem ITEM_DIVE_BALL, 1
# 167 "data/maps/Zone16A/scripts.pory"
	release
	end

Zone16A_EventScript_DiveBall_2:
# 157 "data/maps/Zone16A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 158 "data/maps/Zone16A/scripts.pory"
	release
	end


Zone16A_EventScript_TimerBall::
# 172 "data/maps/Zone16A/scripts.pory"
	lock
# 173 "data/maps/Zone16A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE16A_TIMER_BALL, Zone16A_EventScript_TimerBall_2
# 178 "data/maps/Zone16A/scripts.pory"
	waitse
# 179 "data/maps/Zone16A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 180 "data/maps/Zone16A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 181 "data/maps/Zone16A/scripts.pory"
	setflag FLAG_ITEM_ZONE16A_TIMER_BALL
# 182 "data/maps/Zone16A/scripts.pory"
	addobject VAR_LAST_TALKED
# 183 "data/maps/Zone16A/scripts.pory"
	finditem ITEM_TIMER_BALL, 1
# 184 "data/maps/Zone16A/scripts.pory"
	release
	end

Zone16A_EventScript_TimerBall_2:
# 174 "data/maps/Zone16A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 175 "data/maps/Zone16A/scripts.pory"
	release
	end


# 188 "data/maps/Zone16A/scripts.pory"

# 189 "data/maps/Zone16A/scripts.pory"

# 190 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Sign::
# 191 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_Sign, MSGBOX_SIGN
# 192 "data/maps/Zone16A/scripts.pory"
	end
# 193 "data/maps/Zone16A/scripts.pory"

# 194 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_Sign:
# 195 "data/maps/Zone16A/scripts.pory"
	.string "Sand piles may contain Pokémon.\p"
# 196 "data/maps/Zone16A/scripts.pory"
	.string "Be cautious!\n"
# 197 "data/maps/Zone16A/scripts.pory"
	.string "They don't like being disturbed!$"
# 198 "data/maps/Zone16A/scripts.pory"

# 199 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Iona::
# 200 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_IONA, Zone16A_Text_IonaIntro, Zone16A_Text_IonaDefeat
# 201 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_IonaPostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Zone16A/scripts.pory"
	end
# 203 "data/maps/Zone16A/scripts.pory"

# 204 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_IonaIntro:
# 205 "data/maps/Zone16A/scripts.pory"
	.string "The Water Pokémon are tickling\n"
# 206 "data/maps/Zone16A/scripts.pory"
	.string "my toes!$"
# 207 "data/maps/Zone16A/scripts.pory"

# 208 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_IonaDefeat:
# 209 "data/maps/Zone16A/scripts.pory"
	.string "Oh, that was just seaweed.$"
# 210 "data/maps/Zone16A/scripts.pory"

# 211 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_IonaPostBattle:
# 212 "data/maps/Zone16A/scripts.pory"
	.string "Don't you love that there is such\n"
# 213 "data/maps/Zone16A/scripts.pory"
	.string "a diversity of Water Pokémon?$"
# 214 "data/maps/Zone16A/scripts.pory"

# 215 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Berke::
# 216 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BERKE, Zone16A_Text_BerkeIntro, Zone16A_Text_BerkeDefeat
# 217 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Zone16A/scripts.pory"
	end
# 219 "data/maps/Zone16A/scripts.pory"

# 220 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_BerkeIntro:
# 221 "data/maps/Zone16A/scripts.pory"
	.string "Just keep swimming,\n"
# 222 "data/maps/Zone16A/scripts.pory"
	.string "just keep swimming!$"
# 223 "data/maps/Zone16A/scripts.pory"

# 224 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_BerkeDefeat:
# 225 "data/maps/Zone16A/scripts.pory"
	.string "It's a good motto, right?$"
# 226 "data/maps/Zone16A/scripts.pory"

# 227 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_BerkePostBattle:
# 228 "data/maps/Zone16A/scripts.pory"
	.string "Who's Dory?$"
# 229 "data/maps/Zone16A/scripts.pory"

# 230 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Tanisha::
# 231 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_TANISHA, Zone16A_Text_TanishaIntro, Zone16A_Text_TanishaDefeat
# 232 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_TanishaPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Zone16A/scripts.pory"
	end
# 234 "data/maps/Zone16A/scripts.pory"

# 235 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_TanishaIntro:
# 236 "data/maps/Zone16A/scripts.pory"
	.string "Training Pokémon is hard work!$"
# 237 "data/maps/Zone16A/scripts.pory"

# 238 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_TanishaDefeat:
# 239 "data/maps/Zone16A/scripts.pory"
	.string "It seems I've succeeded in training\n"
# 240 "data/maps/Zone16A/scripts.pory"
	.string "your Pokémon!$"
# 241 "data/maps/Zone16A/scripts.pory"

# 242 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_TanishaPostBattle:
# 243 "data/maps/Zone16A/scripts.pory"
	.string "You're welcome, by the way!$"
# 244 "data/maps/Zone16A/scripts.pory"

# 245 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Robert::
# 246 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ROBERT, Zone16A_Text_RobertIntro, Zone16A_Text_RobertDefeat
# 247 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Zone16A/scripts.pory"
	end
# 249 "data/maps/Zone16A/scripts.pory"

# 250 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_RobertIntro:
# 251 "data/maps/Zone16A/scripts.pory"
	.string "Hey there!\n"
# 252 "data/maps/Zone16A/scripts.pory"
	.string "How do you do?$"
# 253 "data/maps/Zone16A/scripts.pory"

# 254 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_RobertDefeat:
# 255 "data/maps/Zone16A/scripts.pory"
	.string "We're the rhyming Hiker pair!$"
# 256 "data/maps/Zone16A/scripts.pory"

# 257 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_RobertPostBattle:
# 258 "data/maps/Zone16A/scripts.pory"
	.string "Rhyming is easy…$"
# 259 "data/maps/Zone16A/scripts.pory"

# 260 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Chris::
# 261 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CHRIS, Zone16A_Text_ChrisIntro, Zone16A_Text_ChrisDefeat
# 262 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Zone16A/scripts.pory"
	end
# 264 "data/maps/Zone16A/scripts.pory"

# 265 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_ChrisIntro:
# 266 "data/maps/Zone16A/scripts.pory"
	.string "Hey there!\n"
# 267 "data/maps/Zone16A/scripts.pory"
	.string "What's hip, hopping, and new?$"
# 268 "data/maps/Zone16A/scripts.pory"

# 269 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_ChrisDefeat:
# 270 "data/maps/Zone16A/scripts.pory"
	.string "You beat us fair and square!$"
# 271 "data/maps/Zone16A/scripts.pory"

# 272 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_ChrisPostBattle:
# 273 "data/maps/Zone16A/scripts.pory"
	.string "Battling makes me queasy…$"
# 274 "data/maps/Zone16A/scripts.pory"

# 275 "data/maps/Zone16A/scripts.pory"
Zone16A_EventScript_Angus::
# 276 "data/maps/Zone16A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ANGUS, Zone16A_Text_AngusIntro, Zone16A_Text_AngusDefeat
# 277 "data/maps/Zone16A/scripts.pory"
	msgbox Zone16A_Text_AngusPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Zone16A/scripts.pory"
	end
# 279 "data/maps/Zone16A/scripts.pory"

# 280 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_AngusIntro:
# 281 "data/maps/Zone16A/scripts.pory"
	.string "Fishing isn't just a hobby.\n"
# 282 "data/maps/Zone16A/scripts.pory"
	.string "It's a lifestyle!$"
# 283 "data/maps/Zone16A/scripts.pory"

# 284 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_AngusDefeat:
# 285 "data/maps/Zone16A/scripts.pory"
	.string "I've fished up defeat!$"
# 286 "data/maps/Zone16A/scripts.pory"

# 287 "data/maps/Zone16A/scripts.pory"
Zone16A_Text_AngusPostBattle:
# 288 "data/maps/Zone16A/scripts.pory"
	.string "Dive Balls can help capture\n"
# 289 "data/maps/Zone16A/scripts.pory"
	.string "Pokémon while fishing.$"

Zone16A_EventScript_LilyRight_Text_0:
# 41 "data/maps/Zone16A/scripts.pory"
	.string "It suddenly began to rain!$"

Zone16A_EventScript_LilyRight_Text_1:
# 50 "data/maps/Zone16A/scripts.pory"
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Well then. I suppose you'll be\n"
	.string "wanting your reward.\p"
	.string "Here you go.$"

Zone16A_EventScript_LilyRight_Text_2:
# 54 "data/maps/Zone16A/scripts.pory"
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: It seems the rain has stopped.\p"
	.string "I'll be enjoying the rest of my day with\n"
	.string "a nice dip in the water.\l"
	.string "Goodbye.$"

Zone16A_EventScript_SandPile_Text_0:
# 86 "data/maps/Zone16A/scripts.pory"
	.string "There was a Pokémon in the sand pile!$"

Zone16A_EventScript_SandPile_Text_1:
# 114 "data/maps/Zone16A/scripts.pory"
	.string "It's a pile of sand.$"

Zone16A_Text_Leviathan14Intro1::
# 69 "data/maps/Zone16A/scripts.pory"
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Did you know that you can smell\n"
	.string "plants better right before a storm?$"

Zone16A_Text_Leviathan14Intro2::
# 73 "data/maps/Zone16A/scripts.pory"
	.string "{COLOR BLUE}Lily{COLOR DARK_GRAY}: Oh, would you look at that.\p"
	.string "No wonder I could smell the flowers so\n"
	.string "well!\p"
	.string "Don't you know the rain just makes my\n"
	.string "flowers stronger?$"

Zone16A_Text_Leviathan14Defeat::
# 77 "data/maps/Zone16A/scripts.pory"
	.string "Woe is me…$"
