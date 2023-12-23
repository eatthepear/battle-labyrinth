Zone20A_MapScripts::
# 2 "data/maps/Zone20A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_HYPER_POTION, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_FULL_HEAL, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_CELL_BATTERY_3, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_ULTRA_BALL, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_REVIVE, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_SUPER_REPEL, Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_21
# 31 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone20A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 29 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone20A_EventScript_HyperPotion::
# 37 "data/maps/Zone20A/scripts.pory"
	lock
# 38 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_HYPER_POTION, Zone20A_EventScript_HyperPotion_2
# 43 "data/maps/Zone20A/scripts.pory"
	waitse
# 44 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 45 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 46 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_HYPER_POTION
# 47 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 48 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_HYPER_POTION, 1
# 49 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_HyperPotion_2:
# 39 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 40 "data/maps/Zone20A/scripts.pory"
	release
	end


Zone20A_EventScript_FullHeal::
# 54 "data/maps/Zone20A/scripts.pory"
	lock
# 55 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_FULL_HEAL, Zone20A_EventScript_FullHeal_2
# 60 "data/maps/Zone20A/scripts.pory"
	waitse
# 61 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 62 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 63 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_FULL_HEAL
# 64 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 65 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_FULL_HEAL, 1
# 66 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_FullHeal_2:
# 56 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 57 "data/maps/Zone20A/scripts.pory"
	release
	end


Zone20A_EventScript_CellBattery3::
# 71 "data/maps/Zone20A/scripts.pory"
	lock
# 72 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_CELL_BATTERY_3, Zone20A_EventScript_CellBattery3_2
# 77 "data/maps/Zone20A/scripts.pory"
	waitse
# 78 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 79 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 80 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_CELL_BATTERY_3
# 81 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 82 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_CELL_BATTERY, 3
# 83 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_CellBattery3_2:
# 73 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 74 "data/maps/Zone20A/scripts.pory"
	release
	end


Zone20A_EventScript_UltraBall::
# 88 "data/maps/Zone20A/scripts.pory"
	lock
# 89 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_ULTRA_BALL, Zone20A_EventScript_UltraBall_2
# 94 "data/maps/Zone20A/scripts.pory"
	waitse
# 95 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 96 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 97 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_ULTRA_BALL
# 98 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 99 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_ULTRA_BALL, 1
# 100 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_UltraBall_2:
# 90 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 91 "data/maps/Zone20A/scripts.pory"
	release
	end


Zone20A_EventScript_Revive::
# 105 "data/maps/Zone20A/scripts.pory"
	lock
# 106 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_REVIVE, Zone20A_EventScript_Revive_2
# 111 "data/maps/Zone20A/scripts.pory"
	waitse
# 112 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 113 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 114 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_REVIVE
# 115 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 116 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_REVIVE, 1
# 117 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_Revive_2:
# 107 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 108 "data/maps/Zone20A/scripts.pory"
	release
	end


Zone20A_EventScript_SuperRepel::
# 122 "data/maps/Zone20A/scripts.pory"
	lock
# 123 "data/maps/Zone20A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE20A_SUPER_REPEL, Zone20A_EventScript_SuperRepel_2
# 128 "data/maps/Zone20A/scripts.pory"
	waitse
# 129 "data/maps/Zone20A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 130 "data/maps/Zone20A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 131 "data/maps/Zone20A/scripts.pory"
	setflag FLAG_ITEM_ZONE20A_SUPER_REPEL
# 132 "data/maps/Zone20A/scripts.pory"
	addobject VAR_LAST_TALKED
# 133 "data/maps/Zone20A/scripts.pory"
	finditem ITEM_SUPER_REPEL, 1
# 134 "data/maps/Zone20A/scripts.pory"
	release
	end

Zone20A_EventScript_SuperRepel_2:
# 124 "data/maps/Zone20A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 125 "data/maps/Zone20A/scripts.pory"
	release
	end


# 138 "data/maps/Zone20A/scripts.pory"

# 139 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Shawn::
# 140 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SHAWN, Zone20A_Text_ShawnIntro, Zone20A_Text_ShawnDefeat
# 141 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/Zone20A/scripts.pory"
	end
# 143 "data/maps/Zone20A/scripts.pory"

# 144 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_ShawnIntro:
# 145 "data/maps/Zone20A/scripts.pory"
	.string "Secrets of the past must be\n"
# 146 "data/maps/Zone20A/scripts.pory"
	.string "uncovered!$"
# 147 "data/maps/Zone20A/scripts.pory"

# 148 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_ShawnDefeat:
# 149 "data/maps/Zone20A/scripts.pory"
	.string "What's your secret?$"
# 150 "data/maps/Zone20A/scripts.pory"

# 151 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_ShawnPostBattle:
# 152 "data/maps/Zone20A/scripts.pory"
	.string "I'm sure there's a secret to\n"
# 153 "data/maps/Zone20A/scripts.pory"
	.string "winning battles!$"
# 154 "data/maps/Zone20A/scripts.pory"

# 155 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Fernando::
# 156 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FERNANDO, Zone20A_Text_FernandoIntro, Zone20A_Text_FernandoDefeat
# 157 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_FernandoPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Zone20A/scripts.pory"
	end
# 159 "data/maps/Zone20A/scripts.pory"

# 160 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_FernandoIntro:
# 161 "data/maps/Zone20A/scripts.pory"
	.string "Caw! Caw!$"
# 162 "data/maps/Zone20A/scripts.pory"

# 163 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_FernandoDefeat:
# 164 "data/maps/Zone20A/scripts.pory"
	.string "We're birds of a feather!$"
# 165 "data/maps/Zone20A/scripts.pory"

# 166 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_FernandoPostBattle:
# 167 "data/maps/Zone20A/scripts.pory"
	.string "What's your favorite bird Pokémon?$"
# 168 "data/maps/Zone20A/scripts.pory"

# 169 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Kane::
# 170 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KANE, Zone20A_Text_KaneIntro, Zone20A_Text_KaneDefeat
# 171 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_KanePostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Zone20A/scripts.pory"
	end
# 173 "data/maps/Zone20A/scripts.pory"

# 174 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KaneIntro:
# 175 "data/maps/Zone20A/scripts.pory"
	.string "Modesty! Courtesy!\n"
# 176 "data/maps/Zone20A/scripts.pory"
	.string "Integrity! Compassion!$"
# 177 "data/maps/Zone20A/scripts.pory"

# 178 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KaneDefeat:
# 179 "data/maps/Zone20A/scripts.pory"
	.string "Gratitude! Self-control!\n"
# 180 "data/maps/Zone20A/scripts.pory"
	.string "Perseverance! Indomitable spirit!$"
# 181 "data/maps/Zone20A/scripts.pory"

# 182 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KanePostBattle:
# 183 "data/maps/Zone20A/scripts.pory"
	.string "I hold my values dear to my heart.$"
# 184 "data/maps/Zone20A/scripts.pory"

# 185 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Kirk::
# 186 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KIRK, Zone20A_Text_KirkIntro, Zone20A_Text_KirkDefeat
# 187 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Zone20A/scripts.pory"
	end
# 189 "data/maps/Zone20A/scripts.pory"

# 190 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KirkIntro:
# 191 "data/maps/Zone20A/scripts.pory"
	.string "What's long, clawed, and breathes\n"
# 192 "data/maps/Zone20A/scripts.pory"
	.string "fire?$"
# 193 "data/maps/Zone20A/scripts.pory"

# 194 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KirkDefeat:
# 195 "data/maps/Zone20A/scripts.pory"
	.string "Well, a lot of things!$"
# 196 "data/maps/Zone20A/scripts.pory"

# 197 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_KirkPostBattle:
# 198 "data/maps/Zone20A/scripts.pory"
	.string "Dragon-types aren't necessarily\n"
# 199 "data/maps/Zone20A/scripts.pory"
	.string "just Western dragons.$"
# 200 "data/maps/Zone20A/scripts.pory"

# 201 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Dalton::
# 202 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DALTON, Zone20A_Text_DaltonIntro, Zone20A_Text_DaltonDefeat
# 203 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Zone20A/scripts.pory"
	end
# 205 "data/maps/Zone20A/scripts.pory"

# 206 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_DaltonIntro:
# 207 "data/maps/Zone20A/scripts.pory"
	.string "Regional variants are a\n"
# 208 "data/maps/Zone20A/scripts.pory"
	.string "collector's bane!$"
# 209 "data/maps/Zone20A/scripts.pory"

# 210 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_DaltonDefeat:
# 211 "data/maps/Zone20A/scripts.pory"
	.string "But you have to admit, some of them\n"
# 212 "data/maps/Zone20A/scripts.pory"
	.string "are really cool!$"
# 213 "data/maps/Zone20A/scripts.pory"

# 214 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_DaltonPostBattle:
# 215 "data/maps/Zone20A/scripts.pory"
	.string "Divergent evolution is quite the\n"
# 216 "data/maps/Zone20A/scripts.pory"
	.string "idea, isn't it?$"
# 217 "data/maps/Zone20A/scripts.pory"

# 218 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Lee::
# 219 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_LEE, Zone20A_Text_LeeIntro, Zone20A_Text_LeeDefeat
# 220 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_LeePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Zone20A/scripts.pory"
	end
# 222 "data/maps/Zone20A/scripts.pory"

# 223 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_LeeIntro:
# 224 "data/maps/Zone20A/scripts.pory"
	.string "For love!$"
# 225 "data/maps/Zone20A/scripts.pory"

# 226 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_LeeDefeat:
# 227 "data/maps/Zone20A/scripts.pory"
	.string "For the love of the environment!$"
# 228 "data/maps/Zone20A/scripts.pory"

# 229 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_LeePostBattle:
# 230 "data/maps/Zone20A/scripts.pory"
	.string "We practiced that battle cry for\n"
# 231 "data/maps/Zone20A/scripts.pory"
	.string "quite a while.$"
# 232 "data/maps/Zone20A/scripts.pory"

# 233 "data/maps/Zone20A/scripts.pory"
Zone20A_EventScript_Blanche::
# 234 "data/maps/Zone20A/scripts.pory"
	trainerbattle_single TRAINER_PBL_BLANCHE, Zone20A_Text_BlancheIntro, Zone20A_Text_BlancheDefeat
# 235 "data/maps/Zone20A/scripts.pory"
	msgbox Zone20A_Text_BlanchePostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/Zone20A/scripts.pory"
	end
# 237 "data/maps/Zone20A/scripts.pory"

# 238 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_BlancheIntro:
# 239 "data/maps/Zone20A/scripts.pory"
	.string "For the environment!$"
# 240 "data/maps/Zone20A/scripts.pory"

# 241 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_BlancheDefeat:
# 242 "data/maps/Zone20A/scripts.pory"
	.string "For environments of love!$"
# 243 "data/maps/Zone20A/scripts.pory"

# 244 "data/maps/Zone20A/scripts.pory"
Zone20A_Text_BlanchePostBattle:
# 245 "data/maps/Zone20A/scripts.pory"
	.string "Both the environment and love are\n"
# 246 "data/maps/Zone20A/scripts.pory"
	.string "super important!$"
