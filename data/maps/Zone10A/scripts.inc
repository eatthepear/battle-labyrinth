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
	setvar VAR_MUGSHOT_ID, MUGSHOT_ADAMINA
# 56 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10A_EventScript_Adamina_12
# 56 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone10A_EventScript_Adamina_12
# 59 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9, Zone10A_Text_Leviathan9Defeat
Zone10A_EventScript_Adamina_11:
# 61 "data/maps/Zone10A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 62 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_HeadInside
# 63 "data/maps/Zone10A/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 64 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone10A/scripts.pory"
	opendoor 47, 27
# 66 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 67 "data/maps/Zone10A/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 68 "data/maps/Zone10A/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 70 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_9
# 71 "data/maps/Zone10A/scripts.pory"
	closedoor 47, 27
# 72 "data/maps/Zone10A/scripts.pory"
	waitdooranim
# 73 "data/maps/Zone10A/scripts.pory"
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
# 57 "data/maps/Zone10A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL, Zone10A_Text_Leviathan9Defeat
	goto Zone10A_EventScript_Adamina_11


Zone10A_EventScript_SunStone::
# 122 "data/maps/Zone10A/scripts.pory"
	lock
# 123 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SUN_STONE, Zone10A_EventScript_SunStone_2
# 128 "data/maps/Zone10A/scripts.pory"
	waitse
# 129 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 130 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 131 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_SUN_STONE
# 132 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 133 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_SUN_STONE, 1
# 134 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_SunStone_2:
# 124 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 125 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_SoftSand::
# 139 "data/maps/Zone10A/scripts.pory"
	lock
# 140 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_SOFT_SAND, Zone10A_EventScript_SoftSand_2
# 145 "data/maps/Zone10A/scripts.pory"
	waitse
# 146 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 147 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 148 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_SOFT_SAND
# 149 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 150 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_SOFT_SAND, 1
# 151 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_SoftSand_2:
# 141 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 142 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_DragonFang::
# 156 "data/maps/Zone10A/scripts.pory"
	lock
# 157 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_DRAGON_FANG, Zone10A_EventScript_DragonFang_2
# 162 "data/maps/Zone10A/scripts.pory"
	waitse
# 163 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 164 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 165 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_DRAGON_FANG
# 166 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 167 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_DRAGON_FANG, 1
# 168 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_DragonFang_2:
# 158 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 159 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_MetalCoat::
# 173 "data/maps/Zone10A/scripts.pory"
	lock
# 174 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_METAL_COAT, Zone10A_EventScript_MetalCoat_2
# 179 "data/maps/Zone10A/scripts.pory"
	waitse
# 180 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 181 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 182 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_METAL_COAT
# 183 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 184 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_METAL_COAT, 1
# 185 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_MetalCoat_2:
# 175 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 176 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_TM16::
# 190 "data/maps/Zone10A/scripts.pory"
	lock
# 191 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_TM16, Zone10A_EventScript_TM16_2
# 196 "data/maps/Zone10A/scripts.pory"
	waitse
# 197 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 198 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 199 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_TM16
# 200 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 201 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_TM16, 1
# 202 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_TM16_2:
# 192 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 193 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_HeavyDutyBoots::
# 207 "data/maps/Zone10A/scripts.pory"
	lock
# 208 "data/maps/Zone10A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS, Zone10A_EventScript_HeavyDutyBoots_2
# 213 "data/maps/Zone10A/scripts.pory"
	waitse
# 214 "data/maps/Zone10A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 215 "data/maps/Zone10A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 216 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS
# 217 "data/maps/Zone10A/scripts.pory"
	addobject VAR_LAST_TALKED
# 218 "data/maps/Zone10A/scripts.pory"
	finditem ITEM_HEAVY_DUTY_BOOTS, 1
# 219 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_HeavyDutyBoots_2:
# 209 "data/maps/Zone10A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 210 "data/maps/Zone10A/scripts.pory"
	release
	end


Zone10A_EventScript_Ranger::
# 224 "data/maps/Zone10A/scripts.pory"
	lock
# 225 "data/maps/Zone10A/scripts.pory"
	faceplayer
# 226 "data/maps/Zone10A/scripts.pory"
	goto_if_unset FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES, Zone10A_EventScript_Ranger_2
Zone10A_EventScript_Ranger_1:
# 231 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Ranger_Text_1
# 232 "data/maps/Zone10A/scripts.pory"
	release
	end

Zone10A_EventScript_Ranger_2:
# 227 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_EventScript_Ranger_Text_0, MSGBOX_DEFAULT
# 228 "data/maps/Zone10A/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 229 "data/maps/Zone10A/scripts.pory"
	setflag FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES
	goto Zone10A_EventScript_Ranger_1


# 236 "data/maps/Zone10A/scripts.pory"

# 237 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Kyle::
# 238 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KYLE, Zone10A_Text_KyleIntro, Zone10A_Text_KyleDefeat
# 239 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_KylePostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Zone10A/scripts.pory"
	end
# 241 "data/maps/Zone10A/scripts.pory"

# 242 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KyleIntro:
# 243 "data/maps/Zone10A/scripts.pory"
	.string "I daydream a lot. It's a bad habit!$"
# 244 "data/maps/Zone10A/scripts.pory"

# 245 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KyleDefeat:
# 246 "data/maps/Zone10A/scripts.pory"
	.string "I dream of one day winning…$"
# 247 "data/maps/Zone10A/scripts.pory"

# 248 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_KylePostBattle:
# 249 "data/maps/Zone10A/scripts.pory"
	.string "I'll be a champion some day,\n"
# 250 "data/maps/Zone10A/scripts.pory"
	.string "just you wait!$"
# 251 "data/maps/Zone10A/scripts.pory"

# 252 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Belle::
# 253 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BELLE, Zone10A_Text_BelleIntro, Zone10A_Text_BelleDefeat
# 254 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_BellePostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/Zone10A/scripts.pory"
	end
# 256 "data/maps/Zone10A/scripts.pory"

# 257 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BelleIntro:
# 258 "data/maps/Zone10A/scripts.pory"
	.string "Pfft!$"
# 259 "data/maps/Zone10A/scripts.pory"

# 260 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BelleDefeat:
# 261 "data/maps/Zone10A/scripts.pory"
	.string "Sorry, I didn't mean to be rude!$"
# 262 "data/maps/Zone10A/scripts.pory"

# 263 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_BellePostBattle:
# 264 "data/maps/Zone10A/scripts.pory"
	.string "Some sand flew into my mouth so I\n"
# 265 "data/maps/Zone10A/scripts.pory"
	.string "had to get it out!$"
# 266 "data/maps/Zone10A/scripts.pory"

# 267 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Dewey::
# 268 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DEWEY, Zone10A_Text_DeweyIntro, Zone10A_Text_DeweyDefeat
# 269 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_DeweyPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Zone10A/scripts.pory"
	end
# 271 "data/maps/Zone10A/scripts.pory"

# 272 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyIntro:
# 273 "data/maps/Zone10A/scripts.pory"
	.string "My party is so worn down…\n"
# 274 "data/maps/Zone10A/scripts.pory"
	.string "Maybe they'll be reenergized after\l"
# 275 "data/maps/Zone10A/scripts.pory"
	.string "battle!$"
# 276 "data/maps/Zone10A/scripts.pory"

# 277 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyDefeat:
# 278 "data/maps/Zone10A/scripts.pory"
	.string "Hmm…\n"
# 279 "data/maps/Zone10A/scripts.pory"
	.string "I don't think they gained any energy…$"
# 280 "data/maps/Zone10A/scripts.pory"

# 281 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_DeweyPostBattle:
# 282 "data/maps/Zone10A/scripts.pory"
	.string "Maybe I need to rest instead.$"
# 283 "data/maps/Zone10A/scripts.pory"

# 284 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Pearlie::
# 285 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PEARLIE, Zone10A_Text_PearlieIntro, Zone10A_Text_PearlieDefeat
# 286 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_PearliePostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Zone10A/scripts.pory"
	end
# 288 "data/maps/Zone10A/scripts.pory"

# 289 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearlieIntro:
# 290 "data/maps/Zone10A/scripts.pory"
	.string "Sand keeps getting in my lunch,\n"
# 291 "data/maps/Zone10A/scripts.pory"
	.string "so I'll take out my frustration on you!$"
# 292 "data/maps/Zone10A/scripts.pory"

# 293 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearlieDefeat:
# 294 "data/maps/Zone10A/scripts.pory"
	.string "Ugh! Now there's sand everywhere!$"
# 295 "data/maps/Zone10A/scripts.pory"

# 296 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_PearliePostBattle:
# 297 "data/maps/Zone10A/scripts.pory"
	.string "I don't like sand.\n"
# 298 "data/maps/Zone10A/scripts.pory"
	.string "It's coarse and rough and irritating and\l"
# 299 "data/maps/Zone10A/scripts.pory"
	.string "it gets everywhere.$"
# 300 "data/maps/Zone10A/scripts.pory"

# 301 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Ernest::
# 302 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ERNEST, Zone10A_Text_ErnestIntro, Zone10A_Text_ErnestDefeat
# 303 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Zone10A/scripts.pory"
	end
# 305 "data/maps/Zone10A/scripts.pory"

# 306 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestIntro:
# 307 "data/maps/Zone10A/scripts.pory"
	.string "I came prepared the wrath of the\n"
# 308 "data/maps/Zone10A/scripts.pory"
	.string "desert!$"
# 309 "data/maps/Zone10A/scripts.pory"

# 310 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestDefeat:
# 311 "data/maps/Zone10A/scripts.pory"
	.string "But I was not prepared for you!$"
# 312 "data/maps/Zone10A/scripts.pory"

# 313 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ErnestPostBattle:
# 314 "data/maps/Zone10A/scripts.pory"
	.string "Preparations are important, be it\n"
# 315 "data/maps/Zone10A/scripts.pory"
	.string "for hiking or battling!$"
# 316 "data/maps/Zone10A/scripts.pory"

# 317 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Alana::
# 318 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ALANA, Zone10A_Text_AlanaIntro, Zone10A_Text_AlanaDefeat
# 319 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_AlanaPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Zone10A/scripts.pory"
	end
# 321 "data/maps/Zone10A/scripts.pory"

# 322 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaIntro:
# 323 "data/maps/Zone10A/scripts.pory"
	.string "Conrad told me to come here for our date,\n"
# 324 "data/maps/Zone10A/scripts.pory"
	.string "but he's nowhere to be found!$"
# 325 "data/maps/Zone10A/scripts.pory"

# 326 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaDefeat:
# 327 "data/maps/Zone10A/scripts.pory"
	.string "I wonder if I got stood up…$"
# 328 "data/maps/Zone10A/scripts.pory"

# 329 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_AlanaPostBattle:
# 330 "data/maps/Zone10A/scripts.pory"
	.string "No way, a woman like me getting stood up?\n"
# 331 "data/maps/Zone10A/scripts.pory"
	.string "He probably just got lost.$"
# 332 "data/maps/Zone10A/scripts.pory"

# 333 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Susan::
# 334 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SUSAN, Zone10A_Text_SusanIntro, Zone10A_Text_SusanDefeat
# 335 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_SusanPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Zone10A/scripts.pory"
	end
# 337 "data/maps/Zone10A/scripts.pory"

# 338 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanIntro:
# 339 "data/maps/Zone10A/scripts.pory"
	.string "ARGH! YOU STUPID, LITTLE… ARGH!$"
# 340 "data/maps/Zone10A/scripts.pory"

# 341 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanDefeat:
# 342 "data/maps/Zone10A/scripts.pory"
	.string "UGH!$"
# 343 "data/maps/Zone10A/scripts.pory"

# 344 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_SusanPostBattle:
# 345 "data/maps/Zone10A/scripts.pory"
	.string "Crunch, crunch, crunch…\n"
# 346 "data/maps/Zone10A/scripts.pory"
	.string "…\p"
# 347 "data/maps/Zone10A/scripts.pory"
	.string "Sorry about earlier.\n"
# 348 "data/maps/Zone10A/scripts.pory"
	.string "I was feeling a little bit hangry.$"
# 349 "data/maps/Zone10A/scripts.pory"

# 350 "data/maps/Zone10A/scripts.pory"
Zone10A_EventScript_Conrad::
# 351 "data/maps/Zone10A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONRAD, Zone10A_Text_ConradIntro, Zone10A_Text_ConradDefeat
# 352 "data/maps/Zone10A/scripts.pory"
	msgbox Zone10A_Text_ConradPostBattle, MSGBOX_AUTOCLOSE
# 353 "data/maps/Zone10A/scripts.pory"
	end
# 354 "data/maps/Zone10A/scripts.pory"

# 355 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradIntro:
# 356 "data/maps/Zone10A/scripts.pory"
	.string "I'm looking for my date.\n"
# 357 "data/maps/Zone10A/scripts.pory"
	.string "Have you seen her?$"
# 358 "data/maps/Zone10A/scripts.pory"

# 359 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradDefeat:
# 360 "data/maps/Zone10A/scripts.pory"
	.string "She probably thinks I stood her up…$"
# 361 "data/maps/Zone10A/scripts.pory"

# 362 "data/maps/Zone10A/scripts.pory"
Zone10A_Text_ConradPostBattle:
# 363 "data/maps/Zone10A/scripts.pory"
	.string "Not a great first impression,\n"
# 364 "data/maps/Zone10A/scripts.pory"
	.string "if I'm being honest.$"

Zone10A_EventScript_Ranger_Text_0:
# 227 "data/maps/Zone10A/scripts.pory"
	.string "Excuse me! I'm a member of the Pokémon\n"
	.string "Ranger Corps, working to protect both\l"
	.string "people and Pokémon.\p"
	.string "It's not safe to be out in the\n"
	.string "sandstorm for long periods of time, so\l"
	.string "take this!$"

Zone10A_EventScript_Ranger_Text_1:
# 231 "data/maps/Zone10A/scripts.pory"
	.string "Remember kids, safety first!$"

Zone10A_Text_NoChance::
# 77 "data/maps/Zone10A/scripts.pory"
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
# 89 "data/maps/Zone10A/scripts.pory"
	.string "If you really want to get in,\n"
	.string "you have to earn your place.\p"
	.string "In the desert, there are 3 hidden\n"
	.string "Yellow Shards.\p"
	.string "Find them and bring them to me.\n"
	.string "Then we'll see.$"

Zone10A_Text_FoundEm::
# 98 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, wow, you actually\n"
	.string "found them? What a surprise.$"

Zone10A_Text_CrushYou::
# 103 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Oh, were you expecting me\n"
	.string "to let you in just because you\l"
	.string "found some scraps? No way.\p"
	.string "You'll have to beat me in a battle\n"
	.string "to earn my respect!\l"
	.string "I'm gonna crush you!$"

Zone10A_Text_Leviathan9Defeat::
# 112 "data/maps/Zone10A/scripts.pory"
	.string "Adamina: Fine. A win is a win.$"

Zone10A_Text_HeadInside::
# 116 "data/maps/Zone10A/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Go on, head inside.\n"
	.string "I've got nothing for you.$"
