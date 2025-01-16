Zone11A_MapScripts::
# 2 "data/maps/Zone11A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 16 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 14 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone11A_EventScript_LeviathanIntro::
# 22 "data/maps/Zone11A/scripts.pory"
	lockall
# 23 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 24 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 26 "data/maps/Zone11A/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 28 "data/maps/Zone11A/scripts.pory"
	waitse
# 29 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 30 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 31 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 32 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 33 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 34 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_0, MSGBOX_YESNO
# 36 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_LeviathanIntro_2
# 47 "data/maps/Zone11A/scripts.pory"
	fadeoutbgm 1
# 48 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_2
# 49 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 50 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11A_EventScript_LeviathanIntro_6
# 50 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone11A_EventScript_LeviathanIntro_6
# 53 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10, Zone11A_Text_Leviathan10Defeat
Zone11A_EventScript_LeviathanIntro_5:
# 55 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 56 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone11A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 58 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_3, MSGBOX_DEFAULT
# 59 "data/maps/Zone11A/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 60 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 61 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 62 "data/maps/Zone11A/scripts.pory"
	setvar VAR_ZONE_11_STATE, 1
Zone11A_EventScript_LeviathanIntro_1:
# 64 "data/maps/Zone11A/scripts.pory"
	releaseall
	end

Zone11A_EventScript_LeviathanIntro_2:
# 37 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_1
# 38 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 39 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 40 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 41 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 42 "data/maps/Zone11A/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 43 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone11A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 45 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
	goto Zone11A_EventScript_LeviathanIntro_1

Zone11A_EventScript_LeviathanIntro_6:
# 51 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE, Zone11A_Text_Leviathan10Defeat
	goto Zone11A_EventScript_LeviathanIntro_5


Zone11A_EventScript_Leviathan::
# 73 "data/maps/Zone11A/scripts.pory"
	lock
# 74 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 75 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 76 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_TM22::
# 85 "data/maps/Zone11A/scripts.pory"
	lock
# 86 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM22, Zone11A_EventScript_TM22_2
# 91 "data/maps/Zone11A/scripts.pory"
	waitse
# 92 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 93 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 94 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TM22
# 95 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 96 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TM22, 1
# 97 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TM22_2:
# 87 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 88 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_MoonStone::
# 102 "data/maps/Zone11A/scripts.pory"
	lock
# 103 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_EventScript_MoonStone_2
# 108 "data/maps/Zone11A/scripts.pory"
	waitse
# 109 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 111 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_MOON_STONE
# 112 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 113 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_MOON_STONE
# 114 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_MoonStone_2:
# 104 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 105 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_TimerBall::
# 119 "data/maps/Zone11A/scripts.pory"
	lock
# 120 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TIMER_BALL, Zone11A_EventScript_TimerBall_2
# 125 "data/maps/Zone11A/scripts.pory"
	waitse
# 126 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 127 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 128 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TIMER_BALL
# 129 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 130 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TIMER_BALL, 1
# 131 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TimerBall_2:
# 121 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 122 "data/maps/Zone11A/scripts.pory"
	release
	end


# 135 "data/maps/Zone11A/scripts.pory"

# 136 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_CelebiIntro::
# 137 "data/maps/Zone11A/scripts.pory"
	lockall
# 138 "data/maps/Zone11A/scripts.pory"
	goto Zone11A_EventScript_NoCelebi
# 139 "data/maps/Zone11A/scripts.pory"
	releaseall
# 140 "data/maps/Zone11A/scripts.pory"
	end
# 141 "data/maps/Zone11A/scripts.pory"

# 142 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_NoCelebi:
# 143 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
# 144 "data/maps/Zone11A/scripts.pory"
	releaseall
# 145 "data/maps/Zone11A/scripts.pory"
	end
# 146 "data/maps/Zone11A/scripts.pory"

# 147 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_SacredTree:
# 148 "data/maps/Zone11A/scripts.pory"
	.string "This appears to be a sacred tree.$"
# 149 "data/maps/Zone11A/scripts.pory"

# 150 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Jeanette::
# 151 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
# 152 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Zone11A/scripts.pory"
	end
# 154 "data/maps/Zone11A/scripts.pory"

# 155 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteIntro:
# 156 "data/maps/Zone11A/scripts.pory"
	.string "Ah! An angry spirit!$"
# 157 "data/maps/Zone11A/scripts.pory"

# 158 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteDefeat:
# 159 "data/maps/Zone11A/scripts.pory"
	.string "I wasn't talking about you,\n"
# 160 "data/maps/Zone11A/scripts.pory"
	.string "I meant behind you!$"
# 161 "data/maps/Zone11A/scripts.pory"

# 162 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanettePostBattle:
# 163 "data/maps/Zone11A/scripts.pory"
	.string "It's gone now…$"
# 164 "data/maps/Zone11A/scripts.pory"

# 165 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_EmmaandLeo::
# 166 "data/maps/Zone11A/scripts.pory"
	trainerbattle_double TRAINER_PBL_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
# 167 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
# 168 "data/maps/Zone11A/scripts.pory"
	release
# 169 "data/maps/Zone11A/scripts.pory"
	end
# 170 "data/maps/Zone11A/scripts.pory"

# 171 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoIntro:
# 172 "data/maps/Zone11A/scripts.pory"
	.string "Leo: I'm gonna show my girlfriend\n"
# 173 "data/maps/Zone11A/scripts.pory"
	.string "that I'm brave!\p"
# 174 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Ugh. Enforcing gender norms,\n"
# 175 "data/maps/Zone11A/scripts.pory"
	.string "am I right?$"
# 176 "data/maps/Zone11A/scripts.pory"

# 177 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoDefeat:
# 178 "data/maps/Zone11A/scripts.pory"
	.string "Leo: My toxic masculinity, ruined!\p"
# 179 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Maybe I need a new SO…$"
# 180 "data/maps/Zone11A/scripts.pory"

# 181 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoPostBattle:
# 182 "data/maps/Zone11A/scripts.pory"
	.string "Leo: Don't talk to my girlfriend!\p"
# 183 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Pff.$"
# 184 "data/maps/Zone11A/scripts.pory"

# 185 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Joel::
# 186 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
# 187 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Zone11A/scripts.pory"
	end
# 189 "data/maps/Zone11A/scripts.pory"

# 190 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelIntro:
# 191 "data/maps/Zone11A/scripts.pory"
	.string "Ugh, another forest maze?\n"
# 192 "data/maps/Zone11A/scripts.pory"
	.string "At least this one doesn't have warps…$"
# 193 "data/maps/Zone11A/scripts.pory"

# 194 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelDefeat:
# 195 "data/maps/Zone11A/scripts.pory"
	.string "Another defeat?\n"
# 196 "data/maps/Zone11A/scripts.pory"
	.string "Luck is just not on my side today…$"
# 197 "data/maps/Zone11A/scripts.pory"

# 198 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelPostBattle:
# 199 "data/maps/Zone11A/scripts.pory"
	.string "I'll see you another day.$"
# 200 "data/maps/Zone11A/scripts.pory"

# 201 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Marion::
# 202 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARION, Zone11A_Text_MarionIntro, Zone11A_Text_MarionDefeat
# 203 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Zone11A/scripts.pory"
	end
# 205 "data/maps/Zone11A/scripts.pory"

# 206 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionIntro:
# 207 "data/maps/Zone11A/scripts.pory"
	.string "My psychic powers have no match!$"
# 208 "data/maps/Zone11A/scripts.pory"

# 209 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionDefeat:
# 210 "data/maps/Zone11A/scripts.pory"
	.string "You're too powerful…$"
# 211 "data/maps/Zone11A/scripts.pory"

# 212 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionPostBattle:
# 213 "data/maps/Zone11A/scripts.pory"
	.string "Your power level…\n"
# 214 "data/maps/Zone11A/scripts.pory"
	.string "It's over 9000!$"
# 215 "data/maps/Zone11A/scripts.pory"

# 216 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Regina::
# 217 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
# 218 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Zone11A/scripts.pory"
	end
# 220 "data/maps/Zone11A/scripts.pory"

# 221 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaIntro:
# 222 "data/maps/Zone11A/scripts.pory"
	.string "Do you hear the call?$"
# 223 "data/maps/Zone11A/scripts.pory"

# 224 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaDefeat:
# 225 "data/maps/Zone11A/scripts.pory"
	.string "The spirits… I can hear their voices!$"
# 226 "data/maps/Zone11A/scripts.pory"

# 227 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaPostBattle:
# 228 "data/maps/Zone11A/scripts.pory"
	.string "It might just be the wind whistling,\n"
# 229 "data/maps/Zone11A/scripts.pory"
	.string "but I'm sure the voices are from the\l"
# 230 "data/maps/Zone11A/scripts.pory"
	.string "beyond.$"

Zone11A_EventScript_LeviathanIntro_Text_0:
# 35 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Excuse me, I realize this is\n"
	.string "rather sudden, but would you like to be\l"
	.string "a part of my experiment?\p"
	.string "It involves the study of Gravity!$"

Zone11A_EventScript_LeviathanIntro_Text_1:
# 37 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: I see.$"

Zone11A_EventScript_LeviathanIntro_Text_2:
# 48 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Thank you! The experiment name\n"
	.string "is: Gravity and its Pokémon\l"
	.string "battle-winning properties!$"

Zone11A_EventScript_LeviathanIntro_Text_3:
# 58 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Gravity is not the only way to\n"
	.string "utilize lower accuracy moves\l"
	.string "consistently.\p"
	.string "I'd like you to have this Wide Lens.$"

Zone11A_Text_Leviathan10Defeat::
# 68 "data/maps/Zone11A/scripts.pory"
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
# 80 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
