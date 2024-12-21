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


Zone12A_EventScript_StartGauntletBattleTop::
# 32 "data/maps/Zone12A/scripts.pory"
	lockall
# 33 "data/maps/Zone12A/scripts.pory"
	setobjectxyperm 1, 37, 13
# 34 "data/maps/Zone12A/scripts.pory"
	setobjectxyperm 2, 37, 14
# 35 "data/maps/Zone12A/scripts.pory"
	removeobject 1
# 36 "data/maps/Zone12A/scripts.pory"
	removeobject 2
# 37 "data/maps/Zone12A/scripts.pory"
	addobject 1
# 38 "data/maps/Zone12A/scripts.pory"
	addobject 2
# 39 "data/maps/Zone12A/scripts.pory"
	goto Zone12A_EventScript_InitiateRomulusJulieBattles
	return


Zone12A_EventScript_StartGauntletBattleBottom::
# 43 "data/maps/Zone12A/scripts.pory"
	lockall
# 44 "data/maps/Zone12A/scripts.pory"
	setobjectxyperm 1, 24, 27
# 45 "data/maps/Zone12A/scripts.pory"
	setobjectxyperm 2, 24, 28
# 46 "data/maps/Zone12A/scripts.pory"
	removeobject 1
# 47 "data/maps/Zone12A/scripts.pory"
	removeobject 2
# 48 "data/maps/Zone12A/scripts.pory"
	addobject 1
# 49 "data/maps/Zone12A/scripts.pory"
	addobject 2
# 50 "data/maps/Zone12A/scripts.pory"
	goto Zone12A_EventScript_InitiateRomulusJulieBattles
	return


Zone12A_EventScript_InitiateRomulusJulieBattles::
# 54 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Zone12A_Movement_Left
# 55 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Zone12A_Movement_Left
# 56 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 57 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_1, MSGBOX_DEFAULT
# 59 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone12A_EventScript_InitiateRomulusJulieBattles_2
# 59 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone12A_EventScript_InitiateRomulusJulieBattles_2
# 62 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_3, MSGBOX_YESNO
Zone12A_EventScript_InitiateRomulusJulieBattles_1:
# 64 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_InitiateRomulusJulieBattles_8
# 74 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 75 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_5
# 76 "data/maps/Zone12A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ROMULUS, Zone12A_EventScript_InitiateRomulusJulieBattles_Text_6
# 77 "data/maps/Zone12A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, Zone12A_EventScript_InitiateRomulusJulieBattles_12
Zone12A_EventScript_InitiateRomulusJulieBattles_10:
# 80 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_7
# 81 "data/maps/Zone12A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JULIE, Zone12A_EventScript_InitiateRomulusJulieBattles_Text_8
# 82 "data/maps/Zone12A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 83 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_9, MSGBOX_DEFAULT
# 84 "data/maps/Zone12A/scripts.pory"
	special HealPlayerParty
# 85 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_10, MSGBOX_DEFAULT
# 86 "data/maps/Zone12A/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 87 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_11
# 88 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Zone12A_Movement_Right
# 89 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Zone12A_Movement_Right
# 90 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 91 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_HIDE_ZONE12A_CAMPER_PICNICKER
# 92 "data/maps/Zone12A/scripts.pory"
	removeobject 1
# 93 "data/maps/Zone12A/scripts.pory"
	removeobject 2
# 94 "data/maps/Zone12A/scripts.pory"
	setvar VAR_ZONE_12_STATE, 1
# 95 "data/maps/Zone12A/scripts.pory"
	releaseall
	end

Zone12A_EventScript_InitiateRomulusJulieBattles_2:
# 60 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_2, MSGBOX_YESNO
	goto Zone12A_EventScript_InitiateRomulusJulieBattles_1

Zone12A_EventScript_InitiateRomulusJulieBattles_8:
# 65 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_InitiateRomulusJulieBattles_Text_4
# 66 "data/maps/Zone12A/scripts.pory"
	applymovement 1, Zone12A_Movement_Right
# 67 "data/maps/Zone12A/scripts.pory"
	applymovement 2, Zone12A_Movement_Right
# 68 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 69 "data/maps/Zone12A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 70 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone12A/scripts.pory"
	releaseall
	end

Zone12A_EventScript_InitiateRomulusJulieBattles_11:
# 78 "data/maps/Zone12A/scripts.pory"
	special HealPlayerParty
	goto Zone12A_EventScript_InitiateRomulusJulieBattles_10

Zone12A_EventScript_InitiateRomulusJulieBattles_12:
# 77 "data/maps/Zone12A/scripts.pory"
	goto_if_unset FLAG_SETTINGS_CHALLENGE, Zone12A_EventScript_InitiateRomulusJulieBattles_11
	goto Zone12A_EventScript_InitiateRomulusJulieBattles_10


# 99 "data/maps/Zone12A/scripts.pory"
Zone12A_Movement_Left:
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
# 100 "data/maps/Zone12A/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/Zone12A/scripts.pory"
Zone12A_Movement_Right:
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
# 104 "data/maps/Zone12A/scripts.pory"
	walk_right
	step_end

Zone12A_EventScript_BreederM::
# 108 "data/maps/Zone12A/scripts.pory"
	lock
# 109 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 110 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 111 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 112 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_BreederM_2
# 117 "data/maps/Zone12A/scripts.pory"
	checkmoney 1000, 0
# 118 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone12A_EventScript_BreederM_5
# 122 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 123 "data/maps/Zone12A/scripts.pory"
	special ChoosePartyMon
# 124 "data/maps/Zone12A/scripts.pory"
	waitstate
# 125 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 126 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 127 "data/maps/Zone12A/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne Zone12A_EventScript_BreederM_8
# 150 "data/maps/Zone12A/scripts.pory"
	closemessage
# 151 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 152 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_1
Zone12A_EventScript_BreederM_1:
# 156 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_BreederM_2:
# 113 "data/maps/Zone12A/scripts.pory"
	closemessage
# 114 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 115 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_1
	goto Zone12A_EventScript_BreederM_1

Zone12A_EventScript_BreederM_5:
# 119 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_2
# 120 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederM_1

Zone12A_EventScript_BreederM_8:
# 128 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 129 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Zone12A_EventScript_BreederM_11
# 132 "data/maps/Zone12A/scripts.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 133 "data/maps/Zone12A/scripts.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 134 "data/maps/Zone12A/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 135 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_5, MSGBOX_YESNO
# 136 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone12A_EventScript_BreederM_14
# 144 "data/maps/Zone12A/scripts.pory"
	closemessage
# 145 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
# 146 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_1
	goto Zone12A_EventScript_BreederM_1

Zone12A_EventScript_BreederM_11:
# 130 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_4
	goto Zone12A_EventScript_BreederM_1

Zone12A_EventScript_BreederM_14:
# 137 "data/maps/Zone12A/scripts.pory"
	removemoney 1000
# 138 "data/maps/Zone12A/scripts.pory"
	updatemoneybox
# 139 "data/maps/Zone12A/scripts.pory"
	special CheckLeadMonTough
# 140 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_6
# 141 "data/maps/Zone12A/scripts.pory"
	closemessage
# 142 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_BreederM_1


Zone12A_EventScript_Nurse::
# 161 "data/maps/Zone12A/scripts.pory"
	lock
# 162 "data/maps/Zone12A/scripts.pory"
	faceplayer
# 163 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Nurse_Text_0, MSGBOX_DEFAULT
# 164 "data/maps/Zone12A/scripts.pory"
	showmoneybox 0, 0, 0
# 165 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 166 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone12A_EventScript_Nurse_2
# 170 "data/maps/Zone12A/scripts.pory"
	checkmoney 2000, 0
# 171 "data/maps/Zone12A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone12A_EventScript_Nurse_5
# 175 "data/maps/Zone12A/scripts.pory"
	removemoney 2000, 0
# 176 "data/maps/Zone12A/scripts.pory"
	updatemoneybox
# 177 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Nurse_Text_2
# 178 "data/maps/Zone12A/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 179 "data/maps/Zone12A/scripts.pory"
	playfanfare MUS_HEAL
# 180 "data/maps/Zone12A/scripts.pory"
	waitfanfare
# 181 "data/maps/Zone12A/scripts.pory"
	special HealPlayerParty
# 182 "data/maps/Zone12A/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 183 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Nurse_Text_3, MSGBOX_DEFAULT
# 184 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
Zone12A_EventScript_Nurse_1:
# 187 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_Nurse_Text_4
# 188 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_Nurse_2:
# 167 "data/maps/Zone12A/scripts.pory"
	closemessage
# 168 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_Nurse_1

Zone12A_EventScript_Nurse_5:
# 172 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_EventScript_BreederM_Text_2
# 173 "data/maps/Zone12A/scripts.pory"
	hidemoneybox
	goto Zone12A_EventScript_Nurse_1


Zone12A_EventScript_TM24::
# 193 "data/maps/Zone12A/scripts.pory"
	lock
# 194 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_TM24, Zone12A_EventScript_TM24_2
# 199 "data/maps/Zone12A/scripts.pory"
	waitse
# 200 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 201 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 202 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_TM24
# 203 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 204 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_TM24, 1
# 205 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_TM24_2:
# 195 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 196 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_ThunderStone::
# 210 "data/maps/Zone12A/scripts.pory"
	lock
# 211 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_THUNDER_STONE, Zone12A_EventScript_ThunderStone_2
# 216 "data/maps/Zone12A/scripts.pory"
	waitse
# 217 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 218 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 219 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_THUNDER_STONE
# 220 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 221 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_THUNDER_STONE, 1
# 222 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_ThunderStone_2:
# 212 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 213 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_FireStone::
# 227 "data/maps/Zone12A/scripts.pory"
	lock
# 228 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_FIRE_STONE, Zone12A_EventScript_FireStone_2
# 233 "data/maps/Zone12A/scripts.pory"
	waitse
# 234 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 235 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 236 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_FIRE_STONE
# 237 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 238 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_FIRE_STONE, 1
# 239 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_FireStone_2:
# 229 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 230 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_MachoBrace::
# 244 "data/maps/Zone12A/scripts.pory"
	lock
# 245 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_MACHO_BRACE, Zone12A_EventScript_MachoBrace_2
# 250 "data/maps/Zone12A/scripts.pory"
	waitse
# 251 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 252 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 253 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_MACHO_BRACE
# 254 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 255 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_MACHO_BRACE, 1
# 256 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_MachoBrace_2:
# 246 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 247 "data/maps/Zone12A/scripts.pory"
	release
	end


Zone12A_EventScript_Metronome::
# 261 "data/maps/Zone12A/scripts.pory"
	lock
# 262 "data/maps/Zone12A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE12A_METRONOME, Zone12A_EventScript_Metronome_2
# 267 "data/maps/Zone12A/scripts.pory"
	waitse
# 268 "data/maps/Zone12A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 269 "data/maps/Zone12A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 270 "data/maps/Zone12A/scripts.pory"
	setflag FLAG_ITEM_ZONE12A_METRONOME
# 271 "data/maps/Zone12A/scripts.pory"
	addobject VAR_LAST_TALKED
# 272 "data/maps/Zone12A/scripts.pory"
	finditem ITEM_METRONOME, 1
# 273 "data/maps/Zone12A/scripts.pory"
	release
	end

Zone12A_EventScript_Metronome_2:
# 263 "data/maps/Zone12A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 264 "data/maps/Zone12A/scripts.pory"
	release
	end


# 277 "data/maps/Zone12A/scripts.pory"

# 278 "data/maps/Zone12A/scripts.pory"

# 279 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Waterfall::
# 280 "data/maps/Zone12A/scripts.pory"
	lockall
# 281 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DontGoDown, MSGBOX_AUTOCLOSE
# 282 "data/maps/Zone12A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 283 "data/maps/Zone12A/scripts.pory"
	waitmovement 0
# 284 "data/maps/Zone12A/scripts.pory"
	releaseall
# 285 "data/maps/Zone12A/scripts.pory"
	end
# 286 "data/maps/Zone12A/scripts.pory"

# 287 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DontGoDown:
# 288 "data/maps/Zone12A/scripts.pory"
	.string "You don't want to go down the\n"
# 289 "data/maps/Zone12A/scripts.pory"
	.string "waterfall without a way back up!$"
# 290 "data/maps/Zone12A/scripts.pory"

# 291 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Essence::
# 292 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_ESSENCE, Zone12A_Text_EssenceIntro, Zone12A_Text_EssenceDefeat
# 293 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_EssencePostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Zone12A/scripts.pory"
	end
# 295 "data/maps/Zone12A/scripts.pory"

# 296 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceIntro:
# 297 "data/maps/Zone12A/scripts.pory"
	.string "I know I shouldn't be walking\n"
# 298 "data/maps/Zone12A/scripts.pory"
	.string "near a puddle like this…$"
# 299 "data/maps/Zone12A/scripts.pory"

# 300 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssenceDefeat:
# 301 "data/maps/Zone12A/scripts.pory"
	.string "But I just love looking at my\n"
# 302 "data/maps/Zone12A/scripts.pory"
	.string "reflection too much!$"
# 303 "data/maps/Zone12A/scripts.pory"

# 304 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_EssencePostBattle:
# 305 "data/maps/Zone12A/scripts.pory"
	.string "Sigh… I'm even more beautiful\n"
# 306 "data/maps/Zone12A/scripts.pory"
	.string "than Narcissus…$"
# 307 "data/maps/Zone12A/scripts.pory"

# 308 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Dolores::
# 309 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_DOLORES, Zone12A_Text_DoloresIntro, Zone12A_Text_DoloresDefeat
# 310 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_DoloresPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Zone12A/scripts.pory"
	end
# 312 "data/maps/Zone12A/scripts.pory"

# 313 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresIntro:
# 314 "data/maps/Zone12A/scripts.pory"
	.string "You have to be prepared for bad\n"
# 315 "data/maps/Zone12A/scripts.pory"
	.string "weather at any moment!$"
# 316 "data/maps/Zone12A/scripts.pory"

# 317 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresDefeat:
# 318 "data/maps/Zone12A/scripts.pory"
	.string "Wow! You blew me right off my feet!$"
# 319 "data/maps/Zone12A/scripts.pory"

# 320 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_DoloresPostBattle:
# 321 "data/maps/Zone12A/scripts.pory"
	.string "Weather affects Pokémon battles\n"
# 322 "data/maps/Zone12A/scripts.pory"
	.string "just as much as it affects our\l"
# 323 "data/maps/Zone12A/scripts.pory"
	.string "lives, huh?$"
# 324 "data/maps/Zone12A/scripts.pory"

# 325 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Trevor::
# 326 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_TREVOR, Zone12A_Text_TrevorIntro, Zone12A_Text_TrevorDefeat
# 327 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Zone12A/scripts.pory"
	end
# 329 "data/maps/Zone12A/scripts.pory"

# 330 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorIntro:
# 331 "data/maps/Zone12A/scripts.pory"
	.string "Attack, my bird Pokémon!$"
# 332 "data/maps/Zone12A/scripts.pory"

# 333 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorDefeat:
# 334 "data/maps/Zone12A/scripts.pory"
	.string "The shock of losing stings!$"
# 335 "data/maps/Zone12A/scripts.pory"

# 336 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_TrevorPostBattle:
# 337 "data/maps/Zone12A/scripts.pory"
	.string "We'll get them next time,\n"
# 338 "data/maps/Zone12A/scripts.pory"
	.string "my feathered friends!$"
# 339 "data/maps/Zone12A/scripts.pory"

# 340 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Federico::
# 341 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_FEDERICO, Zone12A_Text_FedericoIntro, Zone12A_Text_FedericoDefeat
# 342 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_FedericoPostBattle, MSGBOX_AUTOCLOSE
# 343 "data/maps/Zone12A/scripts.pory"
	end
# 344 "data/maps/Zone12A/scripts.pory"

# 345 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoIntro:
# 346 "data/maps/Zone12A/scripts.pory"
	.string "Argh… I wish I had a Surfboard…$"
# 347 "data/maps/Zone12A/scripts.pory"

# 348 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoDefeat:
# 349 "data/maps/Zone12A/scripts.pory"
	.string "Then I could ride the waves,\n"
# 350 "data/maps/Zone12A/scripts.pory"
	.string "searching for bigger fish!$"
# 351 "data/maps/Zone12A/scripts.pory"

# 352 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_FedericoPostBattle:
# 353 "data/maps/Zone12A/scripts.pory"
	.string "Sounds like a catch, am I right?$"
# 354 "data/maps/Zone12A/scripts.pory"

# 355 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Genie::
# 356 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GENIE, Zone12A_Text_GenieIntro, Zone12A_Text_GenieDefeat
# 357 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_GeniePostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Zone12A/scripts.pory"
	end
# 359 "data/maps/Zone12A/scripts.pory"

# 360 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieIntro:
# 361 "data/maps/Zone12A/scripts.pory"
	.string "Running trains the mind and the soul!$"
# 362 "data/maps/Zone12A/scripts.pory"

# 363 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GenieDefeat:
# 364 "data/maps/Zone12A/scripts.pory"
	.string "But it does not train your Pokémon!$"
# 365 "data/maps/Zone12A/scripts.pory"

# 366 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_GeniePostBattle:
# 367 "data/maps/Zone12A/scripts.pory"
	.string "Huff… I need a break…$"
# 368 "data/maps/Zone12A/scripts.pory"

# 369 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Hilda::
# 370 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_HILDA, Zone12A_Text_HildaIntro, Zone12A_Text_HildaDefeat
# 371 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_HildaPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Zone12A/scripts.pory"
	end
# 373 "data/maps/Zone12A/scripts.pory"

# 374 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaIntro:
# 375 "data/maps/Zone12A/scripts.pory"
	.string "Hi, I'm a fan!$"
# 376 "data/maps/Zone12A/scripts.pory"

# 377 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaDefeat:
# 378 "data/maps/Zone12A/scripts.pory"
	.string "A fan of sneaking up on people!$"
# 379 "data/maps/Zone12A/scripts.pory"

# 380 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_HildaPostBattle:
# 381 "data/maps/Zone12A/scripts.pory"
	.string "Okay, I admit, it's a weird hobby.$"
# 382 "data/maps/Zone12A/scripts.pory"

# 383 "data/maps/Zone12A/scripts.pory"
Zone12A_EventScript_Kinley::
# 384 "data/maps/Zone12A/scripts.pory"
	trainerbattle_single TRAINER_PBL_KINLEY, Zone12A_Text_KinleyIntro, Zone12A_Text_KinleyDefeat
# 385 "data/maps/Zone12A/scripts.pory"
	msgbox Zone12A_Text_KinleyPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Zone12A/scripts.pory"
	end
# 387 "data/maps/Zone12A/scripts.pory"

# 388 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyIntro:
# 389 "data/maps/Zone12A/scripts.pory"
	.string "This grass is far too tall\n"
# 390 "data/maps/Zone12A/scripts.pory"
	.string "for someone of my stature!$"
# 391 "data/maps/Zone12A/scripts.pory"

# 392 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyDefeat:
# 393 "data/maps/Zone12A/scripts.pory"
	.string "I meant financial stature!\n"
# 394 "data/maps/Zone12A/scripts.pory"
	.string "I'm not short!$"
# 395 "data/maps/Zone12A/scripts.pory"

# 396 "data/maps/Zone12A/scripts.pory"
Zone12A_Text_KinleyPostBattle:
# 397 "data/maps/Zone12A/scripts.pory"
	.string "Errr… Never mind.$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_0:
# 57 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Well, well well. Look what we have\n"
	.string "here!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_1:
# 58 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: A trainer! Trying to cross the\n"
	.string "river!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_2:
# 60 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Trainer, would you like to face\n"
	.string "our trial? We'll battle you one after\l"
	.string "the other, and you won't be healed in\l"
	.string "between battles!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_3:
# 62 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Trainer, would you like to face\n"
	.string "our trial? We'll battle you one after\l"
	.string "the other, and you'll be healed in\l"
	.string "between battles!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_4:
# 65 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Oh! How cowardly.$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_5:
# 75 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Well then, I'm up first! Better\n"
	.string "hope luck is on your side!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_6:
# 76 "data/maps/Zone12A/scripts.pory"
	.string "Romulus: The critical hits didn't come\n"
	.string "through!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_7:
# 80 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: Next up is me! I won't need any\n"
	.string "crits to beat you!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_8:
# 81 "data/maps/Zone12A/scripts.pory"
	.string "Julie: You won even without landing a\n"
	.string "critical hit!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_9:
# 83 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: You got us! We'll let you cross\n"
	.string "the river, and heal your Pokémon to\l"
	.string "boot!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_10:
# 85 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Julie{COLOR DARK_GRAY}: We'll even give you this item, too!$"

Zone12A_EventScript_InitiateRomulusJulieBattles_Text_11:
# 87 "data/maps/Zone12A/scripts.pory"
	.string "{COLOR BLUE}Romulus{COLOR DARK_GRAY}: Au revoir!$"

Zone12A_EventScript_BreederM_Text_0:
# 111 "data/maps/Zone12A/scripts.pory"
	.string "I'll change a Pokémon's nature to\n"
	.string "Serious for the price of ¥1000.$"

Zone12A_EventScript_BreederM_Text_1:
# 115 "data/maps/Zone12A/scripts.pory"
	.string "Why so serious?$"

Zone12A_EventScript_BreederM_Text_2:
# 119 "data/maps/Zone12A/scripts.pory"
	.string "You don't have enough money.$"

Zone12A_EventScript_BreederM_Text_3:
# 122 "data/maps/Zone12A/scripts.pory"
	.string "Which Pokémon would you like to change\n"
	.string "the nature?$"

Zone12A_EventScript_BreederM_Text_4:
# 130 "data/maps/Zone12A/scripts.pory"
	.string "I can't change the nature of an egg.$"

Zone12A_EventScript_BreederM_Text_5:
# 135 "data/maps/Zone12A/scripts.pory"
	.string "Are you sure you want your\n"
	.string "{STR_VAR_1} to have a Serious\l"
	.string "nature?$"

Zone12A_EventScript_BreederM_Text_6:
# 140 "data/maps/Zone12A/scripts.pory"
	.string "It's done.$"

Zone12A_EventScript_Nurse_Text_0:
# 163 "data/maps/Zone12A/scripts.pory"
	.string "Hey.\pI know you don't have access to your Bag, so…\pI'll heal your entire party for a\nflat ¥2000 fee.$"

Zone12A_EventScript_Nurse_Text_1:
# 165 "data/maps/Zone12A/scripts.pory"
	.string "Should I heal your Pokémon?$"

Zone12A_EventScript_Nurse_Text_2:
# 177 "data/maps/Zone12A/scripts.pory"
	.string "That will be ¥2000, thank you…$"

Zone12A_EventScript_Nurse_Text_3:
# 183 "data/maps/Zone12A/scripts.pory"
	.string "Your party has been restored.$"

Zone12A_EventScript_Nurse_Text_4:
# 187 "data/maps/Zone12A/scripts.pory"
	.string "See you next time.$"
