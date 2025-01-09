Zone12A_MapScripts::
# 2 "data/maps/Zone12A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_TM24, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_MACHO_BRACE, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_METRONOME, Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17
# 26 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone12A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 24 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone12A_EventScript_BreederF::
# 32 "data/maps/Zone12A/scripts.pory"
	lock
# 33 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 34 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 35 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_0, MSGBOX_YESNO
# 36 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_BreederF_2
# 41 "data/maps/Zone12A/scripts.pory"
	checkmoney 1000, 0
# 42 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone12A_EventScript_BreederF_5
# 46 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_3, MSGBOX_DEFAULT
# 47 "data/maps/Zone12A/scripts.pory"
	special ChoosePartyMon
# 48 "data/maps/Zone12A/scripts.pory"
	waitstate
# 49 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 50 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 51 "data/maps/Zone12A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone12A_EventScript_BreederF_8
# 74 "data/maps/Zone12A/scripts.pory"
	closemessage
# 75 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 76 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
Zone12A_EventScript_BreederF_1:
# 80 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_BreederF_2:
# 37 "data/maps/Zone12A/scripts.pory"
	closemessage
# 38 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 39 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_5:
# 43 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_2
# 44 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_8:
# 52 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 53 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Zone12A_EventScript_BreederF_11
# 56 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 57 "data/maps/Zone12A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 58 "data/maps/Zone12A/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 59 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_5, MSGBOX_YESNO
# 60 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone12A_EventScript_BreederF_14
# 68 "data/maps/Zone12A/scripts.pory"
	closemessage
# 69 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 70 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_1
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_11:
# 54 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_4
	goto Zone12A_EventScript_BreederF_1

Zone12A_EventScript_BreederF_14:
# 61 "data/maps/Zone12A/scripts.pory"
	removemoney 1000
# 62 "data/maps/Zone12A/scripts.pory"
	updatemoneybox
# 63 "data/maps/Zone12A/scripts.pory"
	special CheckLeadMonTough
# 64 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederF_Text_6
# 65 "data/maps/Zone12A/scripts.pory"
	closemessage
# 66 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederF_1


Zone12A_EventScript_TM24::
# 85 "data/maps/Zone12A/scripts.pory"
	lock
# 86 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_TM24, Zone12A_EventScript_TM24_2
# 91 "data/maps/Zone12A/scripts.pory"
	waitse
# 92 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 93 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 94 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_TM24
# 95 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 96 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_TM24, 1
# 97 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_TM24_2:
# 87 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 88 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_ThunderStone::
# 102 "data/maps/Zone12A/scripts.pory"
	lock
# 103 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_EventScript_ThunderStone_2
# 108 "data/maps/Zone12A/scripts.pory"
	waitse
# 109 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 110 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 111 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_THUNDER_STONE
# 112 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 113 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_THUNDER_STONE, 1
# 114 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_ThunderStone_2:
# 104 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 105 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_FireStone::
# 119 "data/maps/Zone12A/scripts.pory"
	lock
# 120 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_EventScript_FireStone_2
# 125 "data/maps/Zone12A/scripts.pory"
	waitse
# 126 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 127 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 128 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_FIRE_STONE
# 129 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 130 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_FIRE_STONE, 1
# 131 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_FireStone_2:
# 121 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 122 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_MachoBrace::
# 136 "data/maps/Zone12A/scripts.pory"
	lock
# 137 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_MACHO_BRACE, Zone12A_EventScript_MachoBrace_2
# 142 "data/maps/Zone12A/scripts.pory"
	waitse
# 143 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 144 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 145 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_MACHO_BRACE
# 146 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 147 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_MACHO_BRACE, 1
# 148 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_MachoBrace_2:
# 138 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 139 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_Metronome::
# 153 "data/maps/Zone12A/scripts.pory"
	lock
# 154 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_METRONOME, Zone12A_EventScript_Metronome_2
# 159 "data/maps/Zone12A/scripts.pory"
	waitse
# 160 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 161 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 162 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_METRONOME
# 163 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 164 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_METRONOME, 1
# 165 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_Metronome_2:
# 155 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 156 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_Romulus::
# 170 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ROMULUS, Zone12A_EventScript_Romulus_Text_0, Zone12A_EventScript_Romulus_Text_1
# 171 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Romulus_Text_2, MSGBOX_AUTOCLOSE
	end


Zone12A_EventScript_Julie::
# 176 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JULIE, Zone12A_EventScript_Julie_Text_0, Zone12A_EventScript_Julie_Text_1
# 177 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Julie_Text_2, MSGBOX_AUTOCLOSE
	end


# 181 "data/maps/Zone12A/scripts.pory"

# 182 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Waterfall::
# 183 "data/maps/Zone12A/scripts.pory"
	lockall
# 184 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DontGoDown, MSGBOX_AUTOCLOSE
# 185 "data/maps/Zone12A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 186 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 187 "data/maps/Zone12A/scripts.pory"
	releaseall
# 188 "data/maps/Zone12A/scripts.pory"
	end
# 189 "data/maps/Zone12A/scripts.pory"

# 190 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DontGoDown:
# 191 "data/maps/Zone12A/scripts.pory"
	.string "You don't want to go down the\n"
# 192 "data/maps/Zone12A/scripts.pory"
	.string "waterfall without a way back up!$"
# 193 "data/maps/Zone12A/scripts.pory"

# 194 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Essence::
# 195 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ESSENCE, Zone12A_Text_EssenceIntro, Zone12A_Text_EssenceDefeat
# 196 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_EssencePostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Zone12A/scripts.pory"
	end
# 198 "data/maps/Zone12A/scripts.pory"

# 199 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceIntro:
# 200 "data/maps/Zone12A/scripts.pory"
	.string "I know I shouldn't be walking\n"
# 201 "data/maps/Zone12A/scripts.pory"
	.string "near a puddle like this…$"
# 202 "data/maps/Zone12A/scripts.pory"

# 203 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceDefeat:
# 204 "data/maps/Zone12A/scripts.pory"
	.string "But I just love looking at my\n"
# 205 "data/maps/Zone12A/scripts.pory"
	.string "reflection too much!$"
# 206 "data/maps/Zone12A/scripts.pory"

# 207 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssencePostBattle:
# 208 "data/maps/Zone12A/scripts.pory"
	.string "Sigh… I'm even more beautiful\n"
# 209 "data/maps/Zone12A/scripts.pory"
	.string "than Narcissus…$"
# 210 "data/maps/Zone12A/scripts.pory"

# 211 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Dolores::
# 212 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DOLORES, Zone12A_Text_DoloresIntro, Zone12A_Text_DoloresDefeat
# 213 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DoloresPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Zone12A/scripts.pory"
	end
# 215 "data/maps/Zone12A/scripts.pory"

# 216 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresIntro:
# 217 "data/maps/Zone12A/scripts.pory"
	.string "You have to be prepared for bad\n"
# 218 "data/maps/Zone12A/scripts.pory"
	.string "weather at any moment!$"
# 219 "data/maps/Zone12A/scripts.pory"

# 220 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresDefeat:
# 221 "data/maps/Zone12A/scripts.pory"
	.string "Wow! You blew me right off my feet!$"
# 222 "data/maps/Zone12A/scripts.pory"

# 223 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresPostBattle:
# 224 "data/maps/Zone12A/scripts.pory"
	.string "Weather affects Pokémon battles\n"
# 225 "data/maps/Zone12A/scripts.pory"
	.string "just as much as it affects our\l"
# 226 "data/maps/Zone12A/scripts.pory"
	.string "lives, huh?$"
# 227 "data/maps/Zone12A/scripts.pory"

# 228 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Genie::
# 229 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GENIE, Zone12A_Text_GenieIntro, Zone12A_Text_GenieDefeat
# 230 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_GeniePostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/Zone12A/scripts.pory"
	end
# 232 "data/maps/Zone12A/scripts.pory"

# 233 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieIntro:
# 234 "data/maps/Zone12A/scripts.pory"
	.string "Hi, I'm a fan!$"
# 235 "data/maps/Zone12A/scripts.pory"

# 236 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieDefeat:
# 237 "data/maps/Zone12A/scripts.pory"
	.string "A fan of sneaking up on people!$"
# 238 "data/maps/Zone12A/scripts.pory"

# 239 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GeniePostBattle:
# 240 "data/maps/Zone12A/scripts.pory"
	.string "Okay, I admit, it's a weird hobby.$"
# 241 "data/maps/Zone12A/scripts.pory"

# 242 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Abigail::
# 243 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ABIGAIL, Zone12A_Text_AbigailIntro, Zone12A_Text_AbigailDefeat
# 244 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Zone12A/scripts.pory"
	end
# 246 "data/maps/Zone12A/scripts.pory"

# 247 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailIntro:
# 248 "data/maps/Zone12A/scripts.pory"
	.string "This puddle is not good for someone\n"
# 249 "data/maps/Zone12A/scripts.pory"
	.string "without rain boots!$"
# 250 "data/maps/Zone12A/scripts.pory"

# 251 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailDefeat:
# 252 "data/maps/Zone12A/scripts.pory"
	.string "But it's just too fun to splash\n"
# 253 "data/maps/Zone12A/scripts.pory"
	.string "around!$"
# 254 "data/maps/Zone12A/scripts.pory"

# 255 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_AbigailPostBattle:
# 256 "data/maps/Zone12A/scripts.pory"
	.string "Splashing around is fun!$"
# 257 "data/maps/Zone12A/scripts.pory"

# 258 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Federico::
# 259 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FEDERICO, Zone12A_Text_FedericoIntro, Zone12A_Text_FedericoDefeat
# 260 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_FedericoPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Zone12A/scripts.pory"
	end
# 262 "data/maps/Zone12A/scripts.pory"

# 263 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoIntro:
# 264 "data/maps/Zone12A/scripts.pory"
	.string "Argh… I wish I had a Surfboard…$"
# 265 "data/maps/Zone12A/scripts.pory"

# 266 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoDefeat:
# 267 "data/maps/Zone12A/scripts.pory"
	.string "Then I could ride the waves,\n"
# 268 "data/maps/Zone12A/scripts.pory"
	.string "searching for bigger fish!$"
# 269 "data/maps/Zone12A/scripts.pory"

# 270 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoPostBattle:
# 271 "data/maps/Zone12A/scripts.pory"
	.string "Sounds like a catch, am I right?$"
# 272 "data/maps/Zone12A/scripts.pory"

# 273 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Hilda::
# 274 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HILDA, Zone12A_Text_HildaIntro, Zone12A_Text_HildaDefeat
# 275 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_HildaPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/Zone12A/scripts.pory"
	end
# 277 "data/maps/Zone12A/scripts.pory"

# 278 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaIntro:
# 279 "data/maps/Zone12A/scripts.pory"
	.string "After a swim, a quick run is what\n"
# 280 "data/maps/Zone12A/scripts.pory"
	.string "I need to dry off!$"
# 281 "data/maps/Zone12A/scripts.pory"

# 282 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaDefeat:
# 283 "data/maps/Zone12A/scripts.pory"
	.string "I'm suddenly very tired!$"
# 284 "data/maps/Zone12A/scripts.pory"

# 285 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaPostBattle:
# 286 "data/maps/Zone12A/scripts.pory"
	.string "Exercising without a break is\n"
# 287 "data/maps/Zone12A/scripts.pory"
	.string "tough!$"
# 288 "data/maps/Zone12A/scripts.pory"

# 289 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Trevor::
# 290 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_TREVOR, Zone12A_Text_TrevorIntro, Zone12A_Text_TrevorDefeat
# 291 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Zone12A/scripts.pory"
	end
# 293 "data/maps/Zone12A/scripts.pory"

# 294 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorIntro:
# 295 "data/maps/Zone12A/scripts.pory"
	.string "Go, my Baby Pokémon, go!$"
# 296 "data/maps/Zone12A/scripts.pory"

# 297 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorDefeat:
# 298 "data/maps/Zone12A/scripts.pory"
	.string "Maybe they're a little weak to\n"
# 299 "data/maps/Zone12A/scripts.pory"
	.string "battle.$"
# 300 "data/maps/Zone12A/scripts.pory"

# 301 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorPostBattle:
# 302 "data/maps/Zone12A/scripts.pory"
	.string "I'll work on raising them more!$"
# 303 "data/maps/Zone12A/scripts.pory"

# 304 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Rufus::
# 305 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RUFUS, Zone12A_Text_RufusIntro, Zone12A_Text_RufusDefeat
# 306 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_RufusPostBattle, MSGBOX_AUTOCLOSE
# 307 "data/maps/Zone12A/scripts.pory"
	end
# 308 "data/maps/Zone12A/scripts.pory"

# 309 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusIntro:
# 310 "data/maps/Zone12A/scripts.pory"
	.string "I'm looking for rare Pokémon!$"
# 311 "data/maps/Zone12A/scripts.pory"

# 312 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusDefeat:
# 313 "data/maps/Zone12A/scripts.pory"
	.string "But I can barely see through the\n"
# 314 "data/maps/Zone12A/scripts.pory"
	.string "grass!$"
# 315 "data/maps/Zone12A/scripts.pory"

# 316 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_RufusPostBattle:
# 317 "data/maps/Zone12A/scripts.pory"
	.string "I won't give up my search!$"
# 318 "data/maps/Zone12A/scripts.pory"

# 319 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Kinley::
# 320 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KINLEY, Zone12A_Text_KinleyIntro, Zone12A_Text_KinleyDefeat
# 321 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_KinleyPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Zone12A/scripts.pory"
	end
# 323 "data/maps/Zone12A/scripts.pory"

# 324 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyIntro:
# 325 "data/maps/Zone12A/scripts.pory"
	.string "This grass is far too tall\n"
# 326 "data/maps/Zone12A/scripts.pory"
	.string "for someone of my stature!$"
# 327 "data/maps/Zone12A/scripts.pory"

# 328 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyDefeat:
# 329 "data/maps/Zone12A/scripts.pory"
	.string "I meant financial stature!\n"
# 330 "data/maps/Zone12A/scripts.pory"
	.string "I'm not short!$"
# 331 "data/maps/Zone12A/scripts.pory"

# 332 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyPostBattle:
# 333 "data/maps/Zone12A/scripts.pory"
	.string "Errr… Never mind.$"

Zone12A_EventScript_BreederF_Text_0:
# 35 "data/maps/Zone12A/scripts.pory"
	.string "I'll change a Pokémon's nature to\n"
	.string "Serious for the price of ¥1000.$"

Zone12A_EventScript_BreederF_Text_1:
# 39 "data/maps/Zone12A/scripts.pory"
	.string "Why so serious?$"

Zone12A_EventScript_BreederF_Text_2:
# 43 "data/maps/Zone12A/scripts.pory"
	.string "You don't have enough money.$"

Zone12A_EventScript_BreederF_Text_3:
# 46 "data/maps/Zone12A/scripts.pory"
	.string "Which Pokémon would you like to change\n"
	.string "the nature?$"

Zone12A_EventScript_BreederF_Text_4:
# 54 "data/maps/Zone12A/scripts.pory"
	.string "I can't change the nature of an egg.$"

Zone12A_EventScript_BreederF_Text_5:
# 59 "data/maps/Zone12A/scripts.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

Zone12A_EventScript_BreederF_Text_6:
# 64 "data/maps/Zone12A/scripts.pory"
	.string "It's done.$"

Zone12A_EventScript_Romulus_Text_0:
# 170 "data/maps/Zone12A/scripts.pory"
	.string "But soft, what light through yonder\n"
	.string "window breaks?\p"
	.string "It is the east, and Julie is the sun.$"

Zone12A_EventScript_Romulus_Text_1:
# 170 "data/maps/Zone12A/scripts.pory"
	.string "I defy you, stars!$"

Zone12A_EventScript_Romulus_Text_2:
# 171 "data/maps/Zone12A/scripts.pory"
	.string "With love's light wings did I o'erperch\n"
	.string "these walls,\p"
	.string "For stony limits cannot hold love out.$"

Zone12A_EventScript_Julie_Text_0:
# 176 "data/maps/Zone12A/scripts.pory"
	.string "O Romulus, Romulus! Wherefore art thou\n"
	.string "Romulus?$"

Zone12A_EventScript_Julie_Text_1:
# 176 "data/maps/Zone12A/scripts.pory"
	.string "My only love sprung from my only hate,\p"
	.string "Too early seen unknown, and known too\n"
	.string "late!$"

Zone12A_EventScript_Julie_Text_2:
# 177 "data/maps/Zone12A/scripts.pory"
	.string "My bounty is as boundless as the sea,\p"
	.string "My love as deep; the more I give to thee,\p"
	.string "The more I have, for both are infinite.$"
