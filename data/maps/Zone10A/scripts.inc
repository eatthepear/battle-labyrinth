Zone10A_MapScripts::
# 2 "data/maps/Zone10A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SUN_STONE, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_DRAGON_FANG, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_METAL_COAT, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_TM16, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST
Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21
# 31 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone10A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 29 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone10A_EventScript_Adamina::
# 37 "data/maps/Zone10A/scripts.pory"
	lock
# 38 "data/maps/Zone10A/scripts.pory"
	faceplayer
# 39 "data/maps/Zone10A/scripts.pory"
	compare VAR_ZONE_10_STATE, 0
	goto_if_eq Zone10A_EventScript_Adamina_2
Zone10A_EventScript_Adamina_1:
# 43 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_Explain
# 44 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_1, Zone10A_EventScript_Adamina_5
# 45 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_2, Zone10A_EventScript_Adamina_5
# 46 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ZONE10A_YELLOW_SHARD_3, Zone10A_EventScript_Adamina_5
# 50 "data/maps/Zone10A/scripts.pory"
	fadeoutbgm 1
# 51 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_FoundEm
# 52 "data/maps/Zone10A/scripts.pory"
	delay 96
# 53 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_CrushYou
# 54 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 55 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10A_EventScript_Adamina_12
# 55 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone10A_EventScript_Adamina_12
# 58 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9, Zone10A_Text_Leviathan9Defeat
Zone10A_EventScript_Adamina_11:
# 60 "data/maps/Zone10A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 61 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_HeadInside
# 62 "data/maps/Zone10A/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 63 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 64 "data/maps/Zone10A/scripts.pory"
	opendoor 47, 27
# 65 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 66 "data/maps/Zone10A/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 67 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 69 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_9
# 70 "data/maps/Zone10A/scripts.pory"
	closedoor 47, 27
# 71 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 72 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Adamina_2:
# 40 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_NoChance
# 41 "data/maps/Zone10A/scripts.pory"
	setvar VAR_ZONE_10_STATE, 1
	goto Zone10A_EventScript_Adamina_1

Zone10A_EventScript_Adamina_5:
# 47 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Adamina_12:
# 56 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL, Zone10A_Text_Leviathan9Defeat
	goto Zone10A_EventScript_Adamina_11


Zone10A_EventScript_SunStone::
# 121 "data/maps/Zone10A/scripts.pory"
	lock
# 122 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SUN_STONE, Zone10A_EventScript_SunStone_2
# 127 "data/maps/Zone10A/scripts.pory"
	waitse
# 128 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 129 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 130 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_SUN_STONE
# 131 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 132 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_SUN_STONE, 1
# 133 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_SunStone_2:
# 123 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 124 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_SoftSand::
# 138 "data/maps/Zone10A/scripts.pory"
	lock
# 139 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_EventScript_SoftSand_2
# 144 "data/maps/Zone10A/scripts.pory"
	waitse
# 145 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 146 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 147 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_SOFT_SAND
# 148 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 149 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_SOFT_SAND, 1
# 150 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_SoftSand_2:
# 140 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 141 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_DragonFang::
# 155 "data/maps/Zone10A/scripts.pory"
	lock
# 156 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_DRAGON_FANG, Zone10A_EventScript_DragonFang_2
# 161 "data/maps/Zone10A/scripts.pory"
	waitse
# 162 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 163 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 164 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_DRAGON_FANG
# 165 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 166 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_DRAGON_FANG, 1
# 167 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_DragonFang_2:
# 157 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 158 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_MetalCoat::
# 172 "data/maps/Zone10A/scripts.pory"
	lock
# 173 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_METAL_COAT, Zone10A_EventScript_MetalCoat_2
# 178 "data/maps/Zone10A/scripts.pory"
	waitse
# 179 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 180 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 181 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_METAL_COAT
# 182 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 183 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_METAL_COAT, 1
# 184 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_MetalCoat_2:
# 174 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 175 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_TM16::
# 189 "data/maps/Zone10A/scripts.pory"
	lock
# 190 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_TM16, Zone10A_EventScript_TM16_2
# 195 "data/maps/Zone10A/scripts.pory"
	waitse
# 196 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 197 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 198 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_TM16
# 199 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 200 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_TM16, 1
# 201 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_TM16_2:
# 191 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 192 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_HeavyDutyBoots::
# 206 "data/maps/Zone10A/scripts.pory"
	lock
# 207 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_EventScript_HeavyDutyBoots_2
# 212 "data/maps/Zone10A/scripts.pory"
	waitse
# 213 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 214 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 215 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS
# 216 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 217 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 218 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_HeavyDutyBoots_2:
# 208 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 209 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_Ranger::
# 223 "data/maps/Zone10A/scripts.pory"
	lock
# 224 "data/maps/Zone10A/scripts.pory"
	faceplayer
# 225 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES, Zone10A_EventScript_Ranger_2
Zone10A_EventScript_Ranger_1:
# 230 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Ranger_Text_1
# 231 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Ranger_2:
# 226 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Ranger_Text_0, MSGBOX_DEFAULT
# 227 "data/maps/Zone10A/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 228 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES
	goto Zone10A_EventScript_Ranger_1


# 235 "data/maps/Zone10A/scripts.pory"

# 236 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Kyle::
# 237 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KYLE, Zone10A_Text_KyleIntro, Zone10A_Text_KyleDefeat
# 238 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_KylePostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Zone10A/scripts.pory"
	end
# 240 "data/maps/Zone10A/scripts.pory"

# 241 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KyleIntro:
# 242 "data/maps/Zone10A/scripts.pory"
	.string "I daydream a lot. It's a bad habit!$"
# 243 "data/maps/Zone10A/scripts.pory"

# 244 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KyleDefeat:
# 245 "data/maps/Zone10A/scripts.pory"
	.string "I dream of one day winning…$"
# 246 "data/maps/Zone10A/scripts.pory"

# 247 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KylePostBattle:
# 248 "data/maps/Zone10A/scripts.pory"
	.string "I'll be a champion some day,\n"
# 249 "data/maps/Zone10A/scripts.pory"
	.string "just you wait!$"
# 250 "data/maps/Zone10A/scripts.pory"

# 251 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Belle::
# 252 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BELLE, Zone10A_Text_BelleIntro, Zone10A_Text_BelleDefeat
# 253 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_BellePostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Zone10A/scripts.pory"
	end
# 255 "data/maps/Zone10A/scripts.pory"

# 256 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BelleIntro:
# 257 "data/maps/Zone10A/scripts.pory"
	.string "Pfft!$"
# 258 "data/maps/Zone10A/scripts.pory"

# 259 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BelleDefeat:
# 260 "data/maps/Zone10A/scripts.pory"
	.string "Sorry, I didn't mean to be rude!$"
# 261 "data/maps/Zone10A/scripts.pory"

# 262 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BellePostBattle:
# 263 "data/maps/Zone10A/scripts.pory"
	.string "Some sand flew into my mouth so I\n"
# 264 "data/maps/Zone10A/scripts.pory"
	.string "had to get it out!$"
# 265 "data/maps/Zone10A/scripts.pory"

# 266 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Dewey::
# 267 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DEWEY, Zone10A_Text_DeweyIntro, Zone10A_Text_DeweyDefeat
# 268 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_DeweyPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/Zone10A/scripts.pory"
	end
# 270 "data/maps/Zone10A/scripts.pory"

# 271 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyIntro:
# 272 "data/maps/Zone10A/scripts.pory"
	.string "My party is so worn down…\n"
# 273 "data/maps/Zone10A/scripts.pory"
	.string "Maybe they'll be reenergized after\l"
# 274 "data/maps/Zone10A/scripts.pory"
	.string "battle!$"
# 275 "data/maps/Zone10A/scripts.pory"

# 276 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyDefeat:
# 277 "data/maps/Zone10A/scripts.pory"
	.string "Hmm…\n"
# 278 "data/maps/Zone10A/scripts.pory"
	.string "I don't think they gained any energy…$"
# 279 "data/maps/Zone10A/scripts.pory"

# 280 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyPostBattle:
# 281 "data/maps/Zone10A/scripts.pory"
	.string "Maybe I need to rest instead.$"
# 282 "data/maps/Zone10A/scripts.pory"

# 283 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Pearlie::
# 284 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PEARLIE, Zone10A_Text_PearlieIntro, Zone10A_Text_PearlieDefeat
# 285 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_PearliePostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Zone10A/scripts.pory"
	end
# 287 "data/maps/Zone10A/scripts.pory"

# 288 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearlieIntro:
# 289 "data/maps/Zone10A/scripts.pory"
	.string "Sand keeps getting in my lunch,\n"
# 290 "data/maps/Zone10A/scripts.pory"
	.string "so I'll take out my frustration on you!$"
# 291 "data/maps/Zone10A/scripts.pory"

# 292 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearlieDefeat:
# 293 "data/maps/Zone10A/scripts.pory"
	.string "Ugh! Now there's sand everywhere!$"
# 294 "data/maps/Zone10A/scripts.pory"

# 295 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearliePostBattle:
# 296 "data/maps/Zone10A/scripts.pory"
	.string "I don't like sand.\n"
# 297 "data/maps/Zone10A/scripts.pory"
	.string "It's coarse and rough and irritating and\l"
# 298 "data/maps/Zone10A/scripts.pory"
	.string "it gets everywhere.$"
# 299 "data/maps/Zone10A/scripts.pory"

# 300 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Ernest::
# 301 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ERNEST, Zone10A_Text_ErnestIntro, Zone10A_Text_ErnestDefeat
# 302 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Zone10A/scripts.pory"
	end
# 304 "data/maps/Zone10A/scripts.pory"

# 305 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestIntro:
# 306 "data/maps/Zone10A/scripts.pory"
	.string "I came prepared the wrath of the\n"
# 307 "data/maps/Zone10A/scripts.pory"
	.string "desert!$"
# 308 "data/maps/Zone10A/scripts.pory"

# 309 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestDefeat:
# 310 "data/maps/Zone10A/scripts.pory"
	.string "But I was not prepared for you!$"
# 311 "data/maps/Zone10A/scripts.pory"

# 312 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestPostBattle:
# 313 "data/maps/Zone10A/scripts.pory"
	.string "Preparations are important, be it\n"
# 314 "data/maps/Zone10A/scripts.pory"
	.string "for hiking or battling!$"
# 315 "data/maps/Zone10A/scripts.pory"

# 316 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Alana::
# 317 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ALANA, Zone10A_Text_AlanaIntro, Zone10A_Text_AlanaDefeat
# 318 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_AlanaPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Zone10A/scripts.pory"
	end
# 320 "data/maps/Zone10A/scripts.pory"

# 321 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaIntro:
# 322 "data/maps/Zone10A/scripts.pory"
	.string "Conrad told me to come here for our date,\n"
# 323 "data/maps/Zone10A/scripts.pory"
	.string "but he's nowhere to be found!$"
# 324 "data/maps/Zone10A/scripts.pory"

# 325 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaDefeat:
# 326 "data/maps/Zone10A/scripts.pory"
	.string "I wonder if I got stood up…$"
# 327 "data/maps/Zone10A/scripts.pory"

# 328 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaPostBattle:
# 329 "data/maps/Zone10A/scripts.pory"
	.string "No way, a woman like me getting stood up?\n"
# 330 "data/maps/Zone10A/scripts.pory"
	.string "He probably just got lost.$"
# 331 "data/maps/Zone10A/scripts.pory"

# 332 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Susan::
# 333 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SUSAN, Zone10A_Text_SusanIntro, Zone10A_Text_SusanDefeat
# 334 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/Zone10A/scripts.pory"
	end
# 336 "data/maps/Zone10A/scripts.pory"

# 337 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanIntro:
# 338 "data/maps/Zone10A/scripts.pory"
	.string "ARGH! YOU STUPID, LITTLE… ARGH!$"
# 339 "data/maps/Zone10A/scripts.pory"

# 340 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanDefeat:
# 341 "data/maps/Zone10A/scripts.pory"
	.string "UGH!$"
# 342 "data/maps/Zone10A/scripts.pory"

# 343 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanPostBattle:
# 344 "data/maps/Zone10A/scripts.pory"
	.string "Crunch, crunch, crunch…\n"
# 345 "data/maps/Zone10A/scripts.pory"
	.string "…\p"
# 346 "data/maps/Zone10A/scripts.pory"
	.string "Sorry about earlier.\n"
# 347 "data/maps/Zone10A/scripts.pory"
	.string "I was feeling a little bit hangry.$"
# 348 "data/maps/Zone10A/scripts.pory"

# 349 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Conrad::
# 350 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONRAD, Zone10A_Text_ConradIntro, Zone10A_Text_ConradDefeat
# 351 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_ConradPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Zone10A/scripts.pory"
	end
# 353 "data/maps/Zone10A/scripts.pory"

# 354 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradIntro:
# 355 "data/maps/Zone10A/scripts.pory"
	.string "I'm looking for my date.\n"
# 356 "data/maps/Zone10A/scripts.pory"
	.string "Have you seen her?$"
# 357 "data/maps/Zone10A/scripts.pory"

# 358 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradDefeat:
# 359 "data/maps/Zone10A/scripts.pory"
	.string "She probably thinks I stood her up…$"
# 360 "data/maps/Zone10A/scripts.pory"

# 361 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradPostBattle:
# 362 "data/maps/Zone10A/scripts.pory"
	.string "Not a great first impression,\n"
# 363 "data/maps/Zone10A/scripts.pory"
	.string "if I'm being honest.$"

Zone10A_EventScript_Ranger_Text_0:
# 226 "data/maps/Zone10A/scripts.pory"
	.string "Excuse me! I'm a member of the Pokémon\n"
	.string "Ranger Corps, working to protect both\l"
	.string "people and Pokémon.\p"
	.string "It's not safe to be out in the\n"
	.string "sandstorm for long periods of time, so\l"
	.string "take this!$"

Zone10A_EventScript_Ranger_Text_1:
# 230 "data/maps/Zone10A/scripts.pory"
	.string "Remember kids, safety first!$"

Zone10A_Text_NoChance::
# 76 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Nope.\n"
	.string "No chance you're getting in.\p"
	.string "Zero.\n"
	.string "Zip.\l"
	.string "Zilch.\l"
	.string "…\l"
	.string "…\l"
	.string "…\l"
	.string "Fine.$"

Zone10A_Text_Explain::
# 88 "data/maps/Zone10A/scripts.pory"
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Yellow Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

Zone10A_Text_FoundEm::
# 97 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, wow, you actually\n"
	.string "found them? What a surprise.$"

Zone10A_Text_CrushYou::
# 102 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, were you expecting me\n"
	.string "to let you in just because you\l"
	.string "found some scraps? No way.\p"
	.string "You'll have to beat me in a battle\n"
	.string "to earn my respect!\l"
	.string "I'm gonna crush you!$"

Zone10A_Text_Leviathan9Defeat::
# 111 "data/maps/Zone10A/scripts.pory"
	.string "Adamina: Fine. A win is a win.$"

Zone10A_Text_HeadInside::
# 115 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"
