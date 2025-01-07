Zone7A_MapScripts::
# 2 "data/maps/Zone7A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_1, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GEMS, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SERIOUS_MINT, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_2, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22
# 31 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 33 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_3, Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25
# 36 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_22:
# 29 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_21

Zone7A_MapScripts_MAP_SCRIPT_ON_RESUME_25:
# 34 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone7A_EventScript_Beauty::
# 43 "data/maps/Zone7A/scripts.pory"
	lock
# 44 "data/maps/Zone7A/scripts.pory"
	faceplayer
# 45 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_3
Zone7A_EventScript_Beauty_1:
# 50 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_1, MSGBOX_YESNO
# 51 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone7A_EventScript_Beauty_7
Zone7A_EventScript_Beauty_6:
# 78 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_Beauty_2:
# 46 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_0
# 47 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_Beauty_3:
# 45 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_2
	goto Zone7A_EventScript_Beauty_1

Zone7A_EventScript_Beauty_7:
# 52 "data/maps/Zone7A/scripts.pory"
	special ChoosePartyMon
# 53 "data/maps/Zone7A/scripts.pory"
	waitstate
# 54 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, 255
	goto_if_ne Zone7A_EventScript_Beauty_9
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_9:
# 55 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 56 "data/maps/Zone7A/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/Zone7A/scripts.pory"
	case SPECIES_SWIRLIX, Zone7A_EventScript_Beauty_12
# 65 "data/maps/Zone7A/scripts.pory"
	case SPECIES_SPRITZEE, Zone7A_EventScript_Beauty_13
# 74 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_5
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_12:
# 58 "data/maps/Zone7A/scripts.pory"
	goto_if_unset FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM, Zone7A_EventScript_Beauty_15
# 63 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_3
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_13:
# 66 "data/maps/Zone7A/scripts.pory"
	goto_if_unset FLAG_ZONE7A_RECEIVED_SACHET, Zone7A_EventScript_Beauty_18
# 71 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_4
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_15:
# 59 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_2
# 60 "data/maps/Zone7A/scripts.pory"
	giveitem ITEM_WHIPPED_DREAM
# 61 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM
	goto Zone7A_EventScript_Beauty_6

Zone7A_EventScript_Beauty_18:
# 67 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Beauty_Text_2
# 68 "data/maps/Zone7A/scripts.pory"
	giveitem ITEM_SACHET
# 69 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ZONE7A_RECEIVED_SACHET
	goto Zone7A_EventScript_Beauty_6


Zone7A_EventScript_FangsTutor::
# 84 "data/maps/Zone7A/scripts.pory"
	lock
# 85 "data/maps/Zone7A/scripts.pory"
	faceplayer
# 86 "data/maps/Zone7A/scripts.pory"
	showmoneybox 0, 0, 0
# 87 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_MOVE_TUTOR_TAUGHT_FANG, Zone7A_EventScript_FangsTutor_2
# 96 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_2, MSGBOX_YESNO
# 97 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone7A_EventScript_FangsTutor_10
Zone7A_EventScript_FangsTutor_1:
# 104 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ZONE7A_MOVE_TUTOR_TAUGHT_FANG, Zone7A_EventScript_FangsTutor_6
Zone7A_EventScript_FangsTutor_5:
# 113 "data/maps/Zone7A/scripts.pory"
	message Zone7A_EventScript_FangsTutor_Text_4
# 114 "data/maps/Zone7A/scripts.pory"
	waitmessage
# 115 "data/maps/Zone7A/scripts.pory"
	dynmultichoice 21, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Zone7A_EventScript_FangsTutor_Text_5, Zone7A_EventScript_FangsTutor_Text_6, Zone7A_EventScript_FangsTutor_Text_7, Zone7A_EventScript_FangsTutor_Text_8
# 116 "data/maps/Zone7A/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/Zone7A/scripts.pory"
	case 0, Zone7A_EventScript_FangsTutor_14
# 120 "data/maps/Zone7A/scripts.pory"
	case 1, Zone7A_EventScript_FangsTutor_15
# 123 "data/maps/Zone7A/scripts.pory"
	case 2, Zone7A_EventScript_FangsTutor_16
# 126 "data/maps/Zone7A/scripts.pory"
	case 3, Zone7A_EventScript_FangsTutor_17
# 127 "data/maps/Zone7A/scripts.pory"
	case MULTI_B_PRESSED, Zone7A_EventScript_FangsTutor_17
Zone7A_EventScript_FangsTutor_12:
# 133 "data/maps/Zone7A/scripts.pory"
	buffermovename 0, VAR_TEMP_0
# 134 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_9, MSGBOX_DEFAULT
# 135 "data/maps/Zone7A/scripts.pory"
	special ChooseMonForMoveTutor
# 136 "data/maps/Zone7A/scripts.pory"
	waitstate
# 137 "data/maps/Zone7A/scripts.pory"
	lock
# 138 "data/maps/Zone7A/scripts.pory"
	faceplayer
# 139 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Zone7A_EventScript_FangsTutor_21
# 145 "data/maps/Zone7A/scripts.pory"
	showmoneybox 0, 0, 0
# 146 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_10, MSGBOX_DEFAULT
# 147 "data/maps/Zone7A/scripts.pory"
	goto_if_unset FLAG_ZONE7A_MOVE_TUTOR_TAUGHT_FANG, Zone7A_EventScript_FangsTutor_24
# 150 "data/maps/Zone7A/scripts.pory"
	removemoney 1000
# 151 "data/maps/Zone7A/scripts.pory"
	updatemoneybox
# 152 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_11, MSGBOX_DEFAULT
# 153 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_1
Zone7A_EventScript_FangsTutor_23:
# 155 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 156 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_2:
# 88 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_0, MSGBOX_YESNO
# 89 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone7A_EventScript_FangsTutor_8
	goto Zone7A_EventScript_FangsTutor_1

Zone7A_EventScript_FangsTutor_6:
# 105 "data/maps/Zone7A/scripts.pory"
	checkmoney 1000, 0
# 106 "data/maps/Zone7A/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone7A_EventScript_FangsTutor_18
	goto Zone7A_EventScript_FangsTutor_5

Zone7A_EventScript_FangsTutor_8:
# 90 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 91 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_1
# 92 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_10:
# 98 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 99 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_1
# 100 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_14:
# 118 "data/maps/Zone7A/scripts.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 119 "data/maps/Zone7A/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto Zone7A_EventScript_FangsTutor_12

Zone7A_EventScript_FangsTutor_15:
# 121 "data/maps/Zone7A/scripts.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 122 "data/maps/Zone7A/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto Zone7A_EventScript_FangsTutor_12

Zone7A_EventScript_FangsTutor_16:
# 124 "data/maps/Zone7A/scripts.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 125 "data/maps/Zone7A/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto Zone7A_EventScript_FangsTutor_12

Zone7A_EventScript_FangsTutor_17:
# 128 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_1
# 129 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 130 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_18:
# 107 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_3
# 108 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 109 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_21:
# 140 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_FangsTutor_Text_1
# 141 "data/maps/Zone7A/scripts.pory"
	hidemoneybox
# 142 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_FangsTutor_24:
# 148 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ZONE7A_MOVE_TUTOR_TAUGHT_FANG
	goto Zone7A_EventScript_FangsTutor_23


Zone7A_EventScript_ItemSharpBeak::
# 161 "data/maps/Zone7A/scripts.pory"
	lock
# 162 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SHARP_BEAK, Zone7A_EventScript_ItemSharpBeak_2
# 167 "data/maps/Zone7A/scripts.pory"
	waitse
# 168 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 169 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 170 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SHARP_BEAK
# 171 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 172 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_SHARP_BEAK, 1
# 173 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSharpBeak_2:
# 163 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 164 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemRandom1::
# 178 "data/maps/Zone7A/scripts.pory"
	lock
# 179 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_1, Zone7A_EventScript_ItemRandom1_2
# 184 "data/maps/Zone7A/scripts.pory"
	waitse
# 185 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 186 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 187 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_RANDOM_1
# 188 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 189 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 190 "data/maps/Zone7A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 191 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemRandom1_2:
# 180 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 181 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemGems::
# 196 "data/maps/Zone7A/scripts.pory"
	lock
# 197 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_GEMS, Zone7A_EventScript_ItemGems_2
# 202 "data/maps/Zone7A/scripts.pory"
	waitse
# 203 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 204 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 205 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_GEMS
# 206 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 207 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_ROCK_GEM
# 208 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_FIGHTING_GEM
# 209 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_PSYCHIC_GEM
# 210 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemGems_2:
# 198 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 199 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemSeriousMint::
# 215 "data/maps/Zone7A/scripts.pory"
	lock
# 216 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_SERIOUS_MINT, Zone7A_EventScript_ItemSeriousMint_2
# 221 "data/maps/Zone7A/scripts.pory"
	waitse
# 222 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 223 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 224 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_SERIOUS_MINT
# 225 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 226 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 227 "data/maps/Zone7A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 228 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemSeriousMint_2:
# 217 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 218 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemBlackBelt::
# 233 "data/maps/Zone7A/scripts.pory"
	lock
# 234 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_BLACK_BELT, Zone7A_EventScript_ItemBlackBelt_2
# 239 "data/maps/Zone7A/scripts.pory"
	waitse
# 240 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 241 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 242 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_BLACK_BELT
# 243 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 244 "data/maps/Zone7A/scripts.pory"
	finditem ITEM_BLACK_BELT, 1
# 245 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemBlackBelt_2:
# 235 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 236 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemRandom2::
# 250 "data/maps/Zone7A/scripts.pory"
	lock
# 251 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_2, Zone7A_EventScript_ItemRandom2_2
# 256 "data/maps/Zone7A/scripts.pory"
	waitse
# 257 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 258 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 259 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_RANDOM_2
# 260 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 261 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 262 "data/maps/Zone7A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 263 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemRandom2_2:
# 252 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 253 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_ItemRandom3::
# 268 "data/maps/Zone7A/scripts.pory"
	lock
# 269 "data/maps/Zone7A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE7A_RANDOM_3, Zone7A_EventScript_ItemRandom3_2
# 274 "data/maps/Zone7A/scripts.pory"
	waitse
# 275 "data/maps/Zone7A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 276 "data/maps/Zone7A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 277 "data/maps/Zone7A/scripts.pory"
	setflag FLAG_ITEM_ZONE7A_RANDOM_3
# 278 "data/maps/Zone7A/scripts.pory"
	addobject VAR_LAST_TALKED
# 279 "data/maps/Zone7A/scripts.pory"
	specialvar VAR_TEMP_1, RandomItemChest
# 280 "data/maps/Zone7A/scripts.pory"
	finditem VAR_TEMP_1, VAR_TEMP_0
# 281 "data/maps/Zone7A/scripts.pory"
	release
	end

Zone7A_EventScript_ItemRandom3_2:
# 270 "data/maps/Zone7A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 271 "data/maps/Zone7A/scripts.pory"
	release
	end


Zone7A_EventScript_Sign::
# 286 "data/maps/Zone7A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 287 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_HealSign::
# 292 "data/maps/Zone7A/scripts.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 293 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_EventScript_HealSign_Text_0, MSGBOX_SIGN
	end


# 297 "data/maps/Zone7A/scripts.pory"

# 298 "data/maps/Zone7A/scripts.pory"

# 299 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Millie::
# 300 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_MILLIE, Zone7A_Text_MillieIntro, Zone7A_Text_MillieDefeat
# 301 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_MilliePostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Zone7A/scripts.pory"
	end
# 303 "data/maps/Zone7A/scripts.pory"

# 304 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieIntro:
# 305 "data/maps/Zone7A/scripts.pory"
	.string "At the base of this mountain,\n"
# 306 "data/maps/Zone7A/scripts.pory"
	.string "is a perfect spot for battle!$"
# 307 "data/maps/Zone7A/scripts.pory"

# 308 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MillieDefeat:
# 309 "data/maps/Zone7A/scripts.pory"
	.string "This spot is now tainted, by\n"
# 310 "data/maps/Zone7A/scripts.pory"
	.string "my defeat!$"
# 311 "data/maps/Zone7A/scripts.pory"

# 312 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_MilliePostBattle:
# 313 "data/maps/Zone7A/scripts.pory"
	.string "It's a good spot for resting too!$"
# 314 "data/maps/Zone7A/scripts.pory"

# 315 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Jamal::
# 316 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_JAMAL, Zone7A_Text_JamalIntro, Zone7A_Text_JamalDefeat
# 317 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Zone7A/scripts.pory"
	end
# 319 "data/maps/Zone7A/scripts.pory"

# 320 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalIntro:
# 321 "data/maps/Zone7A/scripts.pory"
	.string "Valleys like these are simply,\n"
# 322 "data/maps/Zone7A/scripts.pory"
	.string "succintly, superb!$"
# 323 "data/maps/Zone7A/scripts.pory"

# 324 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalDefeat:
# 325 "data/maps/Zone7A/scripts.pory"
	.string "I don't like this valley anymore!$"
# 326 "data/maps/Zone7A/scripts.pory"

# 327 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_JamalPostBattle:
# 328 "data/maps/Zone7A/scripts.pory"
	.string "How can I like a place that I've\n"
# 329 "data/maps/Zone7A/scripts.pory"
	.string "lost at?$"
# 330 "data/maps/Zone7A/scripts.pory"

# 331 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Paige::
# 332 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PAIGE, Zone7A_Text_PaigeIntro, Zone7A_Text_PaigeDefeat
# 333 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/Zone7A/scripts.pory"
	end
# 335 "data/maps/Zone7A/scripts.pory"

# 336 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeIntro:
# 337 "data/maps/Zone7A/scripts.pory"
	.string "My son ran up the steps so fast!$"
# 338 "data/maps/Zone7A/scripts.pory"

# 339 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigeDefeat:
# 340 "data/maps/Zone7A/scripts.pory"
	.string "I just can't keep up!$"
# 341 "data/maps/Zone7A/scripts.pory"

# 342 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PaigePostBattle:
# 343 "data/maps/Zone7A/scripts.pory"
	.string "Maybe I'll rest in the rest house…$"
# 344 "data/maps/Zone7A/scripts.pory"

# 345 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Seth::
# 346 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_SETH, Zone7A_Text_SethIntro, Zone7A_Text_SethDefeat
# 347 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_SethPostBattle, MSGBOX_AUTOCLOSE
# 348 "data/maps/Zone7A/scripts.pory"
	end
# 349 "data/maps/Zone7A/scripts.pory"

# 350 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethIntro:
# 351 "data/maps/Zone7A/scripts.pory"
	.string "Momma! You're too slow!$"
# 352 "data/maps/Zone7A/scripts.pory"

# 353 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethDefeat:
# 354 "data/maps/Zone7A/scripts.pory"
	.string "I wasn't fast enough!$"
# 355 "data/maps/Zone7A/scripts.pory"

# 356 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_SethPostBattle:
# 357 "data/maps/Zone7A/scripts.pory"
	.string "I'm all out of energy…\n"
# 358 "data/maps/Zone7A/scripts.pory"
	.string "Snack time!$"
# 359 "data/maps/Zone7A/scripts.pory"

# 360 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Connie::
# 361 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_CONNIE, Zone7A_Text_ConnieIntro, Zone7A_Text_ConnieDefeat
# 362 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Zone7A/scripts.pory"
	end
# 364 "data/maps/Zone7A/scripts.pory"

# 365 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieIntro:
# 366 "data/maps/Zone7A/scripts.pory"
	.string "You've been double teamed!$"
# 367 "data/maps/Zone7A/scripts.pory"

# 368 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConnieDefeat:
# 369 "data/maps/Zone7A/scripts.pory"
	.string "Shoot! My bad!$"
# 370 "data/maps/Zone7A/scripts.pory"

# 371 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_ConniePostBattle:
# 372 "data/maps/Zone7A/scripts.pory"
	.string "We're working on our strategy!$"
# 373 "data/maps/Zone7A/scripts.pory"

# 374 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Peter::
# 375 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_PETER, Zone7A_Text_PeterIntro, Zone7A_Text_PeterDefeat
# 376 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_PeterPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Zone7A/scripts.pory"
	end
# 378 "data/maps/Zone7A/scripts.pory"

# 379 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterIntro:
# 380 "data/maps/Zone7A/scripts.pory"
	.string "Together we're unstoppable!$"
# 381 "data/maps/Zone7A/scripts.pory"

# 382 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterDefeat:
# 383 "data/maps/Zone7A/scripts.pory"
	.string "Darn! My mistake!$"
# 384 "data/maps/Zone7A/scripts.pory"

# 385 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_PeterPostBattle:
# 386 "data/maps/Zone7A/scripts.pory"
	.string "We're trying our best!$"
# 387 "data/maps/Zone7A/scripts.pory"

# 388 "data/maps/Zone7A/scripts.pory"
Zone7A_EventScript_Whitaker::
# 389 "data/maps/Zone7A/scripts.pory"
	trainerbattle_single TRAINER_PBL_WHITAKER, Zone7A_Text_WhitakerIntro, Zone7A_Text_WhitakerDefeat
# 390 "data/maps/Zone7A/scripts.pory"
	msgbox Zone7A_Text_WhitakerPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Zone7A/scripts.pory"
	end
# 392 "data/maps/Zone7A/scripts.pory"

# 393 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerIntro:
# 394 "data/maps/Zone7A/scripts.pory"
	.string "Can you feel the breeze?\n"
# 395 "data/maps/Zone7A/scripts.pory"
	.string "My birds have never been stronger!$"
# 396 "data/maps/Zone7A/scripts.pory"

# 397 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerDefeat:
# 398 "data/maps/Zone7A/scripts.pory"
	.string "Um… Rematch?$"
# 399 "data/maps/Zone7A/scripts.pory"

# 400 "data/maps/Zone7A/scripts.pory"
Zone7A_Text_WhitakerPostBattle:
# 401 "data/maps/Zone7A/scripts.pory"
	.string "My birds need some time to sleep\n"
# 402 "data/maps/Zone7A/scripts.pory"
	.string "in their nests!$"

Zone7A_EventScript_Beauty_Text_0:
# 46 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone7A_EventScript_Beauty_Text_1:
# 50 "data/maps/Zone7A/scripts.pory"
	.string "Beautiful, Fairy-type Pokémon…\p"
	.string "I'll give you the corresponding\n"
	.string "evolution item if you show me a Swirlix\l"
	.string "or a Spritzee.$"

Zone7A_EventScript_Beauty_Text_2:
# 59 "data/maps/Zone7A/scripts.pory"
	.string "That Pokémon is absolutely stunning…\n"
	.string "Take this, as promised.$"

Zone7A_EventScript_Beauty_Text_3:
# 63 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the Swirlix\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_4:
# 71 "data/maps/Zone7A/scripts.pory"
	.string "I already gave you all the Spritzee\n"
	.string "evolution items I have!$"

Zone7A_EventScript_Beauty_Text_5:
# 74 "data/maps/Zone7A/scripts.pory"
	.string "That's not a Swirlix nor a Spritzee!$"

Zone7A_EventScript_FangsTutor_Text_0:
# 88 "data/maps/Zone7A/scripts.pory"
	.string "Congrats on climbing the mountain! Had\n"
	.string "to fight tooth and nail to get here,\l"
	.string "didn't you?\p"
	.string "Y'know, speaking of tooth, I can teach\n"
	.string "your Pokémon how to use one of the\l"
	.string "elemental fangs.\p"
	.string "For the low price of ¥1000, your\n"
	.string "Pokémon could learn Thunder Fang, Fire\l"
	.string "Fang, or Ice Fang, if you're interested?$"

Zone7A_EventScript_FangsTutor_Text_1:
# 91 "data/maps/Zone7A/scripts.pory"
	.string "You just let me know if you need me.$"

Zone7A_EventScript_FangsTutor_Text_2:
# 96 "data/maps/Zone7A/scripts.pory"
	.string "Congrats on climbing the mountain! Had\n"
	.string "to fight tooth and nail to get here,\l"
	.string "didn't you?\p"
	.string "Y'know, speaking of tooth, I can teach\n"
	.string "your Pokémon how to use one of the\l"
	.string "elemental fangs.\p"
	.string "For the low price of ¥1000, your\n"
	.string "Pokémon could learn Thunder Fang, Fire\l"
	.string "Fang, or Ice Fang, if you're interested?\l"
	.string "First time tutor is free!$"

Zone7A_EventScript_FangsTutor_Text_3:
# 107 "data/maps/Zone7A/scripts.pory"
	.string "Hate to break it to you, but you don't have enough money.$"

Zone7A_EventScript_FangsTutor_Text_4:
# 113 "data/maps/Zone7A/scripts.pory"
	.string "What move should I teach?$"

Zone7A_EventScript_FangsTutor_Text_5:
# 115 "data/maps/Zone7A/scripts.pory"
	.string "Thunder Fang$"

Zone7A_EventScript_FangsTutor_Text_6:
# 115 "data/maps/Zone7A/scripts.pory"
	.string "Fire Fang$"

Zone7A_EventScript_FangsTutor_Text_7:
# 115 "data/maps/Zone7A/scripts.pory"
	.string "Ice Fang$"

Zone7A_EventScript_FangsTutor_Text_8:
# 115 "data/maps/Zone7A/scripts.pory"
	.string "Exit$"

Zone7A_EventScript_FangsTutor_Text_9:
# 134 "data/maps/Zone7A/scripts.pory"
	.string "Which Pokémon should learn\n{STR_VAR_1}?$"

Zone7A_EventScript_FangsTutor_Text_10:
# 146 "data/maps/Zone7A/scripts.pory"
	.string "There! It's done. Use that move well!$"

Zone7A_EventScript_FangsTutor_Text_11:
# 152 "data/maps/Zone7A/scripts.pory"
	.string "{PLAYER} paid ¥1000.$"

Zone7A_EventScript_Sign_Text_0:
# 287 "data/maps/Zone7A/scripts.pory"
	.string "Trainer Tips\p"
	.string "You can change the music you hear in\n"
	.string "battle by speaking to Colress!$"

Zone7A_EventScript_HealSign_Text_0:
# 293 "data/maps/Zone7A/scripts.pory"
	.string "A stop for weary travelers.$"
