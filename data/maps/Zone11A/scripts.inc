Zone11A_MapScripts::
# 2 "data/maps/Zone11A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM_TAUNT, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_SPELL_TAG, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_GEMS, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_RANDOM_1, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_RANDOM_2, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_22
# 31 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 33 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_FAIRY_FEATHER, Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_25
# 36 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_22:
# 29 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_21

Zone11A_MapScripts_MAP_SCRIPT_ON_RESUME_25:
# 34 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone11A_EventScript_LeviathanIntro::
# 42 "data/maps/Zone11A/scripts.pory"
	lockall
# 43 "data/maps/Zone11A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 44 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 45 "data/maps/Zone11A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 46 "data/maps/Zone11A/scripts.pory"
	playse SE_PIN
# 47 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 48 "data/maps/Zone11A/scripts.pory"
	waitse
# 49 "data/maps/Zone11A/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft3
# 50 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 51 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_0, MSGBOX_YESNO
# 52 "data/maps/Zone11A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone11A_EventScript_LeviathanIntro_2
# 59 "data/maps/Zone11A/scripts.pory"
	fadeoutbgm 1
# 60 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_2
# 61 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 62 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone11A_EventScript_LeviathanIntro_6
# 62 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone11A_EventScript_LeviathanIntro_6
# 65 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10, Zone11A_Text_Leviathan10Defeat
Zone11A_EventScript_LeviathanIntro_5:
# 67 "data/maps/Zone11A/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 68 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone11A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 70 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_3, MSGBOX_DEFAULT
# 71 "data/maps/Zone11A/scripts.pory"
	giveitem ITEM_WIDE_LENS
# 72 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 73 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_10
# 74 "data/maps/Zone11A/scripts.pory"
	setvar VAR_ZONE_11_STATE, 1
Zone11A_EventScript_LeviathanIntro_1:
# 76 "data/maps/Zone11A/scripts.pory"
	releaseall
	end

Zone11A_EventScript_LeviathanIntro_2:
# 53 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_EventScript_LeviathanIntro_Text_1
# 54 "data/maps/Zone11A/scripts.pory"
	applymovement 1, Common_Movement_WalkRight3
# 55 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone11A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 57 "data/maps/Zone11A/scripts.pory"
	waitmovement 0
	goto Zone11A_EventScript_LeviathanIntro_1

Zone11A_EventScript_LeviathanIntro_6:
# 63 "data/maps/Zone11A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_NEWTON_LEVIATHAN_10_CHALLENGE, Zone11A_Text_Leviathan10Defeat
	goto Zone11A_EventScript_LeviathanIntro_5


Zone11A_EventScript_Leviathan::
# 85 "data/maps/Zone11A/scripts.pory"
	lock
# 86 "data/maps/Zone11A/scripts.pory"
	faceplayer
# 87 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_Leviathan10Post
# 88 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_TMTaunt::
# 97 "data/maps/Zone11A/scripts.pory"
	lock
# 98 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_TM_TAUNT, Zone11A_EventScript_TMTaunt_2
# 103 "data/maps/Zone11A/scripts.pory"
	waitse
# 104 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 105 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 106 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_TM_TAUNT
# 107 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 108 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_TM_TAUNT, 1
# 109 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_TMTaunt_2:
# 99 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 100 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_MoonStone::
# 114 "data/maps/Zone11A/scripts.pory"
	lock
# 115 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_MOON_STONE, Zone11A_EventScript_MoonStone_2
# 120 "data/maps/Zone11A/scripts.pory"
	waitse
# 121 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 122 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 123 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_MOON_STONE
# 124 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 125 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_MOON_STONE
# 126 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_MoonStone_2:
# 116 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 117 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_SpellTag::
# 131 "data/maps/Zone11A/scripts.pory"
	lock
# 132 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_SPELL_TAG, Zone11A_EventScript_SpellTag_2
# 137 "data/maps/Zone11A/scripts.pory"
	waitse
# 138 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 139 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 140 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_SPELL_TAG
# 141 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 142 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_SPELL_TAG, 1
# 143 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_SpellTag_2:
# 133 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 134 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_Gems::
# 148 "data/maps/Zone11A/scripts.pory"
	lock
# 149 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_GEMS, Zone11A_EventScript_Gems_2
# 154 "data/maps/Zone11A/scripts.pory"
	waitse
# 155 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 156 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 157 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_GEMS
# 158 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 159 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_FAIRY_GEM
# 160 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_GHOST_GEM
# 161 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_DRAGON_GEM
# 162 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_Gems_2:
# 150 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 151 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_Random1::
# 167 "data/maps/Zone11A/scripts.pory"
	lock
# 168 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_RANDOM_1, Zone11A_EventScript_Random1_2
# 173 "data/maps/Zone11A/scripts.pory"
	waitse
# 174 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 175 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 176 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_RANDOM_1
# 177 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 178 "data/maps/Zone11A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 179 "data/maps/Zone11A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 180 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_Random1_2:
# 169 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 170 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_Random2::
# 185 "data/maps/Zone11A/scripts.pory"
	lock
# 186 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_RANDOM_2, Zone11A_EventScript_Random2_2
# 191 "data/maps/Zone11A/scripts.pory"
	waitse
# 192 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 193 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 194 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_RANDOM_2
# 195 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 196 "data/maps/Zone11A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 197 "data/maps/Zone11A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 198 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_Random2_2:
# 187 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 188 "data/maps/Zone11A/scripts.pory"
	release
	end


Zone11A_EventScript_FairyFeather::
# 203 "data/maps/Zone11A/scripts.pory"
	lock
# 204 "data/maps/Zone11A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE11A_FAIRY_FEATHER, Zone11A_EventScript_FairyFeather_2
# 209 "data/maps/Zone11A/scripts.pory"
	waitse
# 210 "data/maps/Zone11A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 211 "data/maps/Zone11A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 212 "data/maps/Zone11A/scripts.pory"
	setflag FLAG_ITEM_ZONE11A_FAIRY_FEATHER
# 213 "data/maps/Zone11A/scripts.pory"
	addobject VAR_LAST_TALKED
# 214 "data/maps/Zone11A/scripts.pory"
	finditem ITEM_FAIRY_FEATHER, 1
# 215 "data/maps/Zone11A/scripts.pory"
	release
	end

Zone11A_EventScript_FairyFeather_2:
# 205 "data/maps/Zone11A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 206 "data/maps/Zone11A/scripts.pory"
	release
	end


# 219 "data/maps/Zone11A/scripts.pory"

# 220 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_CelebiIntro::
# 221 "data/maps/Zone11A/scripts.pory"
	lockall
# 222 "data/maps/Zone11A/scripts.pory"
	goto Zone11A_EventScript_NoCelebi
# 223 "data/maps/Zone11A/scripts.pory"
	releaseall
# 224 "data/maps/Zone11A/scripts.pory"
	end
# 225 "data/maps/Zone11A/scripts.pory"

# 226 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_NoCelebi:
# 227 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_SacredTree, MSGBOX_AUTOCLOSE
# 228 "data/maps/Zone11A/scripts.pory"
	releaseall
# 229 "data/maps/Zone11A/scripts.pory"
	end
# 230 "data/maps/Zone11A/scripts.pory"

# 231 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_SacredTree:
# 232 "data/maps/Zone11A/scripts.pory"
	.string "This appears to be a sacred tree.$"
# 233 "data/maps/Zone11A/scripts.pory"

# 234 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Jeanette::
# 235 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JEANETTE, Zone11A_Text_JeanetteIntro, Zone11A_Text_JeanetteDefeat
# 236 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JeanettePostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Zone11A/scripts.pory"
	end
# 238 "data/maps/Zone11A/scripts.pory"

# 239 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteIntro:
# 240 "data/maps/Zone11A/scripts.pory"
	.string "Ah! An angry spirit!$"
# 241 "data/maps/Zone11A/scripts.pory"

# 242 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanetteDefeat:
# 243 "data/maps/Zone11A/scripts.pory"
	.string "I wasn't talking about you,\n"
# 244 "data/maps/Zone11A/scripts.pory"
	.string "I meant behind you!$"
# 245 "data/maps/Zone11A/scripts.pory"

# 246 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JeanettePostBattle:
# 247 "data/maps/Zone11A/scripts.pory"
	.string "It's gone now…$"
# 248 "data/maps/Zone11A/scripts.pory"

# 249 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_EmmaandLeo::
# 250 "data/maps/Zone11A/scripts.pory"
	trainerbattle_double TRAINER_PBL_EMMA_AND_LEO, Zone11A_Text_EmmaandLeoIntro, Zone11A_Text_EmmaandLeoDefeat, gText_NotEnoughMons
# 251 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_EmmaandLeoPostBattle, MSGBOX_DEFAULT
# 252 "data/maps/Zone11A/scripts.pory"
	release
# 253 "data/maps/Zone11A/scripts.pory"
	end
# 254 "data/maps/Zone11A/scripts.pory"

# 255 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoIntro:
# 256 "data/maps/Zone11A/scripts.pory"
	.string "Leo: I'm gonna show my girlfriend\n"
# 257 "data/maps/Zone11A/scripts.pory"
	.string "that I'm brave!\p"
# 258 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Ugh. Enforcing gender norms,\n"
# 259 "data/maps/Zone11A/scripts.pory"
	.string "am I right?$"
# 260 "data/maps/Zone11A/scripts.pory"

# 261 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoDefeat:
# 262 "data/maps/Zone11A/scripts.pory"
	.string "Leo: My toxic masculinity, ruined!\p"
# 263 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Maybe I need a new SO…$"
# 264 "data/maps/Zone11A/scripts.pory"

# 265 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_EmmaandLeoPostBattle:
# 266 "data/maps/Zone11A/scripts.pory"
	.string "Leo: Don't talk to my girlfriend!\p"
# 267 "data/maps/Zone11A/scripts.pory"
	.string "Emma: Pff.$"
# 268 "data/maps/Zone11A/scripts.pory"

# 269 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Joel::
# 270 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JOEL, Zone11A_Text_JoelIntro, Zone11A_Text_JoelDefeat
# 271 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/Zone11A/scripts.pory"
	end
# 273 "data/maps/Zone11A/scripts.pory"

# 274 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelIntro:
# 275 "data/maps/Zone11A/scripts.pory"
	.string "Ugh, another forest maze?\n"
# 276 "data/maps/Zone11A/scripts.pory"
	.string "At least this one doesn't have warps…$"
# 277 "data/maps/Zone11A/scripts.pory"

# 278 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelDefeat:
# 279 "data/maps/Zone11A/scripts.pory"
	.string "Another defeat?\n"
# 280 "data/maps/Zone11A/scripts.pory"
	.string "Luck is just not on my side today…$"
# 281 "data/maps/Zone11A/scripts.pory"

# 282 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_JoelPostBattle:
# 283 "data/maps/Zone11A/scripts.pory"
	.string "I'll see you another day.$"
# 284 "data/maps/Zone11A/scripts.pory"

# 285 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Marion::
# 286 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARION, Zone11A_Text_MarionIntro, Zone11A_Text_MarionDefeat
# 287 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_MarionPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Zone11A/scripts.pory"
	end
# 289 "data/maps/Zone11A/scripts.pory"

# 290 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionIntro:
# 291 "data/maps/Zone11A/scripts.pory"
	.string "My psychic powers have no match!$"
# 292 "data/maps/Zone11A/scripts.pory"

# 293 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionDefeat:
# 294 "data/maps/Zone11A/scripts.pory"
	.string "You're too powerful…$"
# 295 "data/maps/Zone11A/scripts.pory"

# 296 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_MarionPostBattle:
# 297 "data/maps/Zone11A/scripts.pory"
	.string "Your power level…\n"
# 298 "data/maps/Zone11A/scripts.pory"
	.string "It's over 9000!$"
# 299 "data/maps/Zone11A/scripts.pory"

# 300 "data/maps/Zone11A/scripts.pory"
Zone11A_EventScript_Regina::
# 301 "data/maps/Zone11A/scripts.pory"
	trainerbattle_single TRAINER_PBL_REGINA, Zone11A_Text_ReginaIntro, Zone11A_Text_ReginaDefeat
# 302 "data/maps/Zone11A/scripts.pory"
	msgbox Zone11A_Text_ReginaPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Zone11A/scripts.pory"
	end
# 304 "data/maps/Zone11A/scripts.pory"

# 305 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaIntro:
# 306 "data/maps/Zone11A/scripts.pory"
	.string "Do you hear the call?$"
# 307 "data/maps/Zone11A/scripts.pory"

# 308 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaDefeat:
# 309 "data/maps/Zone11A/scripts.pory"
	.string "The spirits… I can hear their voices!$"
# 310 "data/maps/Zone11A/scripts.pory"

# 311 "data/maps/Zone11A/scripts.pory"
Zone11A_Text_ReginaPostBattle:
# 312 "data/maps/Zone11A/scripts.pory"
	.string "It might just be the wind whistling,\n"
# 313 "data/maps/Zone11A/scripts.pory"
	.string "but I'm sure the voices are from the\l"
# 314 "data/maps/Zone11A/scripts.pory"
	.string "beyond.$"

Zone11A_EventScript_LeviathanIntro_Text_0:
# 51 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Excuse me, I realize this is\n"
	.string "rather sudden, but would you like to be\l"
	.string "a part of my experiment?\p"
	.string "It involves the study of Gravity!$"

Zone11A_EventScript_LeviathanIntro_Text_1:
# 53 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: I see.$"

Zone11A_EventScript_LeviathanIntro_Text_2:
# 60 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Thank you! The experiment name\n"
	.string "is: Gravity and its Pokémon\l"
	.string "battle-winning properties!$"

Zone11A_EventScript_LeviathanIntro_Text_3:
# 70 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Gravity is not the only way to\n"
	.string "utilize lower accuracy moves\l"
	.string "consistently.\p"
	.string "I'd like you to have this Wide Lens.$"

Zone11A_Text_Leviathan10Defeat::
# 80 "data/maps/Zone11A/scripts.pory"
	.string "Alas, not even the power of Gravity is\nstrong enough to win me a battle…$"

Zone11A_Text_Leviathan10Post::
# 92 "data/maps/Zone11A/scripts.pory"
	.string "{COLOR BLUE}Newton{COLOR DARK_GRAY}: Unfortunately, I'm afraid the\n"
	.string "path ahead is blocked off until my\l"
	.string "experiments finish.\p"
	.string "Perhaps come back far in the future,\n"
	.string "when I've finished here.$"
