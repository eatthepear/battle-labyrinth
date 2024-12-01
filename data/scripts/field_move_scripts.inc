EventScript_HandleFlashlight::
# 2 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_FLASHLIGHT
# 3 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 6 "data/scripts/field_move_scripts.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 4 "data/scripts/field_move_scripts.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_Headbutt::
# 12 "data/scripts/field_move_scripts.pory"
	lockall
# 13 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_0, MSGBOX_YESNO
# 14 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Headbutt_2
# 19 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_1, MSGBOX_DEFAULT
# 20 "data/scripts/field_move_scripts.pory"
	closemessage
# 21 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8005, 1
# 23 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8006, 8
# 24 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8007, 5
# 25 "data/scripts/field_move_scripts.pory"
	special ShakeCamera
# 26 "data/scripts/field_move_scripts.pory"
	playse SE_M_BIND
# 27 "data/scripts/field_move_scripts.pory"
	waitstate
# 28 "data/scripts/field_move_scripts.pory"
	waitse
# 29 "data/scripts/field_move_scripts.pory"
	special HeadbuttWildEncounter
# 30 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Headbutt_5
# 32 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Headbutt_7
EventScript_Headbutt_4:
# 108 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_Headbutt_2:
# 15 "data/scripts/field_move_scripts.pory"
	closemessage
# 16 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_Headbutt_5:
# 31 "data/scripts/field_move_scripts.pory"
	waitstate
	goto EventScript_Headbutt_4

EventScript_Headbutt_6:
# 33 "data/scripts/field_move_scripts.pory"
	random 70
# 34 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 35 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_Headbutt_12
# 36 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_Headbutt_12
# 37 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_Headbutt_12
# 38 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_Headbutt_12
# 39 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_Headbutt_12
# 40 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_Headbutt_12
# 41 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_Headbutt_12
# 42 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_Headbutt_12
# 43 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_Headbutt_12
# 44 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_Headbutt_12
# 45 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_Headbutt_12
# 46 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_Headbutt_12
# 47 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_Headbutt_12
# 48 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_Headbutt_12
# 49 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_Headbutt_12
# 50 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_Headbutt_12
# 51 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_Headbutt_12
# 52 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_Headbutt_12
# 53 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_Headbutt_12
# 54 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_Headbutt_12
# 57 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_Headbutt_13
# 58 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_Headbutt_13
# 59 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_Headbutt_13
# 64 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_Headbutt_14
# 65 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_Headbutt_14
# 66 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_Headbutt_14
# 71 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_Headbutt_15
# 72 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_Headbutt_15
# 73 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_Headbutt_15
# 78 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_Headbutt_16
# 79 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_Headbutt_16
# 80 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_Headbutt_16
# 85 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_Headbutt_17
# 86 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_Headbutt_17
# 87 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_Headbutt_17
# 92 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_Headbutt_18
# 93 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_Headbutt_18
# 94 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_Headbutt_18
# 95 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_Headbutt_18
# 96 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_Headbutt_18
# 101 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_Headbutt_19
	goto EventScript_Headbutt_4

EventScript_Headbutt_7:
# 32 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_Headbutt_6
	goto EventScript_Headbutt_4

EventScript_Headbutt_12:
# 55 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 56 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_13:
# 60 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_20
	goto EventScript_Headbutt_4

EventScript_Headbutt_14:
# 67 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_22
	goto EventScript_Headbutt_4

EventScript_Headbutt_15:
# 74 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_24
	goto EventScript_Headbutt_4

EventScript_Headbutt_16:
# 81 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_26
	goto EventScript_Headbutt_4

EventScript_Headbutt_17:
# 88 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_28
	goto EventScript_Headbutt_4

EventScript_Headbutt_18:
# 97 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_Headbutt_30
	goto EventScript_Headbutt_4

EventScript_Headbutt_19:
# 102 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Headbutt_32
	goto EventScript_Headbutt_4

EventScript_Headbutt_20:
# 61 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 62 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_22:
# 68 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 69 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_24:
# 75 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 76 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_26:
# 82 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 83 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_28:
# 89 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 90 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_30:
# 98 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 99 "data/scripts/field_move_scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_32:
# 103 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 104 "data/scripts/field_move_scripts.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_Headbutt_4


EventScript_CutTree::
# 113 "data/scripts/field_move_scripts.pory"
	lockall
# 114 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_MACHETE, 1
# 115 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutTree_2
# 120 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToCut, MSGBOX_YESNO
# 121 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CutTree_5
# 126 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_MACHETE
# 127 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 128 "data/scripts/field_move_scripts.pory"
	waitstate
# 129 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 130 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 131 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/scripts/field_move_scripts.pory"
	releaseall
	return

EventScript_CutTree_2:
# 116 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantCut, MSGBOX_DEFAULT
# 117 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_CutTree_5:
# 122 "data/scripts/field_move_scripts.pory"
	closemessage
# 123 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_RockSmash::
# 137 "data/scripts/field_move_scripts.pory"
	lockall
# 138 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_SLEDGEHAMMER, 1
# 139 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSmash_2
# 144 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 145 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSmash_5
# 149 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_SLEDGEHAMMER
# 150 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 151 "data/scripts/field_move_scripts.pory"
	waitstate
# 152 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 153 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 154 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 155 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 156 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RockSmash_8
# 161 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_RockSmash_11
# 161 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_RockSmash_11
# 165 "data/scripts/field_move_scripts.pory"
	random 100
# 166 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 167 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_RockSmash_17
# 168 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_RockSmash_17
# 169 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_RockSmash_17
# 170 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_RockSmash_17
# 171 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_RockSmash_17
# 172 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_RockSmash_17
# 173 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_RockSmash_17
# 174 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_RockSmash_17
# 175 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_RockSmash_17
# 176 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_RockSmash_17
# 177 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_RockSmash_17
# 178 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_RockSmash_17
# 179 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_RockSmash_17
# 180 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_RockSmash_17
# 181 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_RockSmash_17
# 182 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_RockSmash_17
# 183 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_RockSmash_17
# 184 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_RockSmash_17
# 185 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_RockSmash_17
# 186 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_RockSmash_17
# 187 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_RockSmash_17
# 188 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_RockSmash_17
# 190 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_RockSmash_18
# 191 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_RockSmash_18
# 192 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_RockSmash_18
# 193 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_RockSmash_18
# 194 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_RockSmash_18
# 195 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_RockSmash_18
# 196 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_RockSmash_18
# 197 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_RockSmash_18
# 198 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_RockSmash_18
# 199 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_RockSmash_18
# 200 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_RockSmash_18
# 201 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_RockSmash_18
# 202 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_RockSmash_18
# 203 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_RockSmash_18
# 204 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_RockSmash_18
# 208 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_RockSmash_19
# 209 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_RockSmash_19
# 210 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_RockSmash_19
# 211 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_RockSmash_19
# 212 "data/scripts/field_move_scripts.pory"
	case 41, EventScript_RockSmash_19
# 213 "data/scripts/field_move_scripts.pory"
	case 42, EventScript_RockSmash_19
# 214 "data/scripts/field_move_scripts.pory"
	case 43, EventScript_RockSmash_19
# 215 "data/scripts/field_move_scripts.pory"
	case 44, EventScript_RockSmash_19
# 216 "data/scripts/field_move_scripts.pory"
	case 45, EventScript_RockSmash_19
# 217 "data/scripts/field_move_scripts.pory"
	case 46, EventScript_RockSmash_19
# 221 "data/scripts/field_move_scripts.pory"
	case 47, EventScript_RockSmash_20
# 222 "data/scripts/field_move_scripts.pory"
	case 48, EventScript_RockSmash_20
# 223 "data/scripts/field_move_scripts.pory"
	case 49, EventScript_RockSmash_20
# 224 "data/scripts/field_move_scripts.pory"
	case 50, EventScript_RockSmash_20
# 225 "data/scripts/field_move_scripts.pory"
	case 51, EventScript_RockSmash_20
# 229 "data/scripts/field_move_scripts.pory"
	case 52, EventScript_RockSmash_21
# 231 "data/scripts/field_move_scripts.pory"
	case 53, EventScript_RockSmash_22
# 233 "data/scripts/field_move_scripts.pory"
	case 54, EventScript_RockSmash_23
# 235 "data/scripts/field_move_scripts.pory"
	case 55, EventScript_RockSmash_24
# 237 "data/scripts/field_move_scripts.pory"
	case 56, EventScript_RockSmash_25
# 239 "data/scripts/field_move_scripts.pory"
	case 57, EventScript_RockSmash_26
# 241 "data/scripts/field_move_scripts.pory"
	case 58, EventScript_RockSmash_27
# 243 "data/scripts/field_move_scripts.pory"
	case 59, EventScript_RockSmash_28
# 245 "data/scripts/field_move_scripts.pory"
	case 60, EventScript_RockSmash_29
# 247 "data/scripts/field_move_scripts.pory"
	case 61, EventScript_RockSmash_30
# 249 "data/scripts/field_move_scripts.pory"
	case 62, EventScript_RockSmash_31
# 251 "data/scripts/field_move_scripts.pory"
	case 63, EventScript_RockSmash_32
# 253 "data/scripts/field_move_scripts.pory"
	case 64, EventScript_RockSmash_33
# 255 "data/scripts/field_move_scripts.pory"
	case 65, EventScript_RockSmash_34
# 257 "data/scripts/field_move_scripts.pory"
	case 66, EventScript_RockSmash_35
# 259 "data/scripts/field_move_scripts.pory"
	case 67, EventScript_RockSmash_36
# 261 "data/scripts/field_move_scripts.pory"
	case 68, EventScript_RockSmash_37
# 263 "data/scripts/field_move_scripts.pory"
	case 69, EventScript_RockSmash_38
EventScript_RockSmash_15:
# 266 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_2:
# 140 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSmash, MSGBOX_DEFAULT
# 141 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_5:
# 146 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_8:
# 157 "data/scripts/field_move_scripts.pory"
	waitstate
# 158 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_11:
# 162 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_17:
# 189 "data/scripts/field_move_scripts.pory"
	finditem ITEM_RED_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_18:
# 205 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_RockSmash_39
	goto EventScript_RockSmash_15

EventScript_RockSmash_19:
# 218 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_RockSmash_41
	goto EventScript_RockSmash_15

EventScript_RockSmash_20:
# 226 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_RockSmash_43
	goto EventScript_RockSmash_15

EventScript_RockSmash_21:
# 230 "data/scripts/field_move_scripts.pory"
	finditem ITEM_NORMAL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_22:
# 232 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIRE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_23:
# 234 "data/scripts/field_move_scripts.pory"
	finditem ITEM_WATER_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_24:
# 236 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_25:
# 238 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GRASS_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_26:
# 240 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ICE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_27:
# 242 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIGHTING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_28:
# 244 "data/scripts/field_move_scripts.pory"
	finditem ITEM_POISON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_29:
# 246 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GROUND_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_30:
# 248 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FLYING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_31:
# 250 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_32:
# 252 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BUG_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_33:
# 254 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ROCK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_34:
# 256 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GHOST_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_35:
# 258 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DRAGON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_36:
# 260 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DARK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_37:
# 262 "data/scripts/field_move_scripts.pory"
	finditem ITEM_STEEL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_38:
# 264 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FAIRY_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_39:
# 206 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BLUE_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_41:
# 219 "data/scripts/field_move_scripts.pory"
	finditem ITEM_YELLOW_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_43:
# 227 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GREEN_SHARD, 1
	goto EventScript_RockSmash_15


EventScript_UseDive::
# 272 "data/scripts/field_move_scripts.pory"
	lockall
# 273 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 274 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDive_2
# 279 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_1, MSGBOX_YESNO
# 280 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDive_5
# 284 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 285 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 286 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 287 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_2:
# 275 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_0, MSGBOX_DEFAULT
# 276 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_5:
# 281 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseDiveUnderwater::
# 292 "data/scripts/field_move_scripts.pory"
	lockall
# 293 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 294 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDiveUnderwater_2
# 299 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_1, MSGBOX_YESNO
# 300 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDiveUnderwater_5
# 304 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 305 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 306 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 307 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_2:
# 295 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_0, MSGBOX_DEFAULT
# 296 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_5:
# 301 "data/scripts/field_move_scripts.pory"
	releaseall
	end


# 311 "data/scripts/field_move_scripts.pory"

# 312 "data/scripts/field_move_scripts.pory"
@ Use rock smash from party menu
# 313 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash::
# 314 "data/scripts/field_move_scripts.pory"
	lockall
# 315 "data/scripts/field_move_scripts.pory"
	releaseall
# 316 "data/scripts/field_move_scripts.pory"
	end
# 317 "data/scripts/field_move_scripts.pory"

# 318 "data/scripts/field_move_scripts.pory"
Movement_SmashRock: @ 829082B
# 319 "data/scripts/field_move_scripts.pory"
	rock_smash_break
# 320 "data/scripts/field_move_scripts.pory"
	step_end
# 321 "data/scripts/field_move_scripts.pory"

# 322 "data/scripts/field_move_scripts.pory"
Text_WantToSmash:
# 323 "data/scripts/field_move_scripts.pory"
	.string "This rock appears to be breakable.\n"
# 324 "data/scripts/field_move_scripts.pory"
	.string "Use the Sledgehammer to smash it?$"
# 325 "data/scripts/field_move_scripts.pory"

# 326 "data/scripts/field_move_scripts.pory"
Text_CantSmash:
# 327 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock.$"
# 328 "data/scripts/field_move_scripts.pory"

# 329 "data/scripts/field_move_scripts.pory"
Movement_CutTreeDown:
# 330 "data/scripts/field_move_scripts.pory"
	cut_tree
# 331 "data/scripts/field_move_scripts.pory"
	step_end
# 332 "data/scripts/field_move_scripts.pory"

# 333 "data/scripts/field_move_scripts.pory"
Text_WantToCut:
# 334 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.\n"
# 335 "data/scripts/field_move_scripts.pory"
	.string "Use the Machete to remove it?$"
# 336 "data/scripts/field_move_scripts.pory"

# 337 "data/scripts/field_move_scripts.pory"
Text_MonUsedFieldMove:
# 338 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
# 339 "data/scripts/field_move_scripts.pory"

# 340 "data/scripts/field_move_scripts.pory"
Text_CantCut:
# 341 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.$"
# 342 "data/scripts/field_move_scripts.pory"

# 343 "data/scripts/field_move_scripts.pory"
EventScript_StrengthBoulder::
# 344 "data/scripts/field_move_scripts.pory"
	lockall
# 345 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
# 346 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_STRENGTH
# 347 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
# 348 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 349 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToStrength, MSGBOX_YESNO
# 350 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
# 351 "data/scripts/field_move_scripts.pory"
	closemessage
# 352 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 353 "data/scripts/field_move_scripts.pory"
	waitstate
# 354 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 355 "data/scripts/field_move_scripts.pory"
	end
# 356 "data/scripts/field_move_scripts.pory"

# 357 "data/scripts/field_move_scripts.pory"
EventScript_UseStrength::
# 358 "data/scripts/field_move_scripts.pory"
	lockall
# 359 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 360 "data/scripts/field_move_scripts.pory"
	waitstate
# 361 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 362 "data/scripts/field_move_scripts.pory"
	end
# 363 "data/scripts/field_move_scripts.pory"

# 364 "data/scripts/field_move_scripts.pory"
EventScript_ActivateStrength::
# 365 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 366 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
# 367 "data/scripts/field_move_scripts.pory"
	releaseall
# 368 "data/scripts/field_move_scripts.pory"
	end
# 369 "data/scripts/field_move_scripts.pory"

# 370 "data/scripts/field_move_scripts.pory"
EventScript_CantStrength::
# 371 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantStrength, MSGBOX_DEFAULT
# 372 "data/scripts/field_move_scripts.pory"
	releaseall
# 373 "data/scripts/field_move_scripts.pory"
	end
# 374 "data/scripts/field_move_scripts.pory"

# 375 "data/scripts/field_move_scripts.pory"
EventScript_CheckActivatedBoulder::
# 376 "data/scripts/field_move_scripts.pory"
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
# 377 "data/scripts/field_move_scripts.pory"
	releaseall
# 378 "data/scripts/field_move_scripts.pory"
	end
# 379 "data/scripts/field_move_scripts.pory"

# 380 "data/scripts/field_move_scripts.pory"
EventScript_CancelStrength::
# 381 "data/scripts/field_move_scripts.pory"
	closemessage
# 382 "data/scripts/field_move_scripts.pory"
	releaseall
# 383 "data/scripts/field_move_scripts.pory"
	end
# 384 "data/scripts/field_move_scripts.pory"

# 385 "data/scripts/field_move_scripts.pory"
Text_WantToStrength:
# 386 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a POKéMON\n"
# 387 "data/scripts/field_move_scripts.pory"
	.string "may be able to push it aside.\p"
# 388 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use STRENGTH?$"
# 389 "data/scripts/field_move_scripts.pory"

# 390 "data/scripts/field_move_scripts.pory"
Text_MonUsedStrength:
# 391 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used STRENGTH!\p"
# 392 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
# 393 "data/scripts/field_move_scripts.pory"
	.string "possible to move boulders around!$"
# 394 "data/scripts/field_move_scripts.pory"

# 395 "data/scripts/field_move_scripts.pory"
Text_CantStrength:
# 396 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder.$"
# 397 "data/scripts/field_move_scripts.pory"

# 398 "data/scripts/field_move_scripts.pory"
Text_StrengthActivated:
# 399 "data/scripts/field_move_scripts.pory"
	.string "STRENGTH made it possible to move\n"
# 400 "data/scripts/field_move_scripts.pory"
	.string "boulders around.$"
# 401 "data/scripts/field_move_scripts.pory"

# 402 "data/scripts/field_move_scripts.pory"
EventScript_UseWaterfall::
# 403 "data/scripts/field_move_scripts.pory"
	lockall
# 404 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_WATERFALL
# 405 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
# 406 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 407 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 408 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
# 409 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 410 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
# 411 "data/scripts/field_move_scripts.pory"
    call FollowerIntoPlayerScript
# 412 "data/scripts/field_move_scripts.pory"
    callnative HideFollower
# 413 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 414 "data/scripts/field_move_scripts.pory"
    callnative FollowMe_WarpSetEnd
# 415 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndWaterfall
# 416 "data/scripts/field_move_scripts.pory"

# 417 "data/scripts/field_move_scripts.pory"
EventScript_CannotUseWaterfall::
# 418 "data/scripts/field_move_scripts.pory"
	lockall
# 419 "data/scripts/field_move_scripts.pory"

# 420 "data/scripts/field_move_scripts.pory"
EventScript_CantWaterfall::
# 421 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT
# 422 "data/scripts/field_move_scripts.pory"

# 423 "data/scripts/field_move_scripts.pory"
EventScript_EndWaterfall::
# 424 "data/scripts/field_move_scripts.pory"
	releaseall
# 425 "data/scripts/field_move_scripts.pory"
	end
# 426 "data/scripts/field_move_scripts.pory"

# 427 "data/scripts/field_move_scripts.pory"
Text_CantWaterfall:
# 428 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with\n"
# 429 "data/scripts/field_move_scripts.pory"
	.string "a mighty roar.$"
# 430 "data/scripts/field_move_scripts.pory"

# 431 "data/scripts/field_move_scripts.pory"
Text_WantToWaterfall:
# 432 "data/scripts/field_move_scripts.pory"
	.string "It's a large waterfall.\n"
# 433 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use WATERFALL?$"
# 434 "data/scripts/field_move_scripts.pory"

# 435 "data/scripts/field_move_scripts.pory"
Text_MonUsedWaterfall:
# 436 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used WATERFALL.$"
# 437 "data/scripts/field_move_scripts.pory"

# 438 "data/scripts/field_move_scripts.pory"
EventScript_FailSweetScent::
# 439 "data/scripts/field_move_scripts.pory"
	msgbox Text_FailSweetScent, MSGBOX_SIGN
# 440 "data/scripts/field_move_scripts.pory"
	end
# 441 "data/scripts/field_move_scripts.pory"

# 442 "data/scripts/field_move_scripts.pory"
Text_FailSweetScent:
# 443 "data/scripts/field_move_scripts.pory"
	.string "Looks like there's nothing here…$"
# 444 "data/scripts/field_move_scripts.pory"

# 445 "data/scripts/field_move_scripts.pory"
EventScript_DisableAutoRun::
# 446 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunDisabled MSGBOX_SIGN
# 447 "data/scripts/field_move_scripts.pory"
	end
# 448 "data/scripts/field_move_scripts.pory"

# 449 "data/scripts/field_move_scripts.pory"
AutoRunDisabled:
# 450 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
# 451 "data/scripts/field_move_scripts.pory"
    
# 452 "data/scripts/field_move_scripts.pory"
EventScript_EnableAutoRun::
# 453 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunEnabled MSGBOX_SIGN
# 454 "data/scripts/field_move_scripts.pory"
	end
# 455 "data/scripts/field_move_scripts.pory"

# 456 "data/scripts/field_move_scripts.pory"
AutoRunEnabled:
# 457 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"
# 458 "data/scripts/field_move_scripts.pory"
	
# 459 "data/scripts/field_move_scripts.pory"
EventScript_UseRockClimb::
# 460 "data/scripts/field_move_scripts.pory"
	lockall
# 461 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 462 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 463 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_CantRockClimb
# 464 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick 0, VAR_RESULT
# 465 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 466 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 467 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
# 468 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_EndRockClimb
# 469 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 470 "data/scripts/field_move_scripts.pory"
	closemessage
# 471 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 472 "data/scripts/field_move_scripts.pory"
	waitstate
# 473 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndRockClimb
# 474 "data/scripts/field_move_scripts.pory"
	
# 475 "data/scripts/field_move_scripts.pory"
EventScript_CantRockClimb::
# 476 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT
# 477 "data/scripts/field_move_scripts.pory"
	
# 478 "data/scripts/field_move_scripts.pory"
EventScript_EndRockClimb::
# 479 "data/scripts/field_move_scripts.pory"
	releaseall
# 480 "data/scripts/field_move_scripts.pory"
	end
# 481 "data/scripts/field_move_scripts.pory"
	
# 482 "data/scripts/field_move_scripts.pory"
Text_WantToRockClimb:
# 483 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 484 "data/scripts/field_move_scripts.pory"
    .string "Would you like to use Rock Climb?$"
# 485 "data/scripts/field_move_scripts.pory"
    
# 486 "data/scripts/field_move_scripts.pory"
Text_MonUsedRockClimb:
# 487 "data/scripts/field_move_scripts.pory"
    .string "{STR_VAR_1} used Rock Climb!$"
# 488 "data/scripts/field_move_scripts.pory"
    
# 489 "data/scripts/field_move_scripts.pory"
Text_CantRockClimb:
# 490 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 491 "data/scripts/field_move_scripts.pory"
    .string "A Pokémon may be able to climb it.$"
# 492 "data/scripts/field_move_scripts.pory"

# 493 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScript::
# 494 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 495 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 496 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 497 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 498 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 499 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 500 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 501 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScriptReturn:
# 502 "data/scripts/field_move_scripts.pory"
	return
# 503 "data/scripts/field_move_scripts.pory"
    
# 504 "data/scripts/field_move_scripts.pory"
FollowerIntoPlayerScript::
# 505 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 506 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 507 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 508 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 509 "data/scripts/field_move_scripts.pory"
	setvar 0x8005 0xFE  @ follower
# 510 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 511 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 512 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 513 "data/scripts/field_move_scripts.pory"
	return
# 514 "data/scripts/field_move_scripts.pory"
    
# 515 "data/scripts/field_move_scripts.pory"
WalkCall:
# 516 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x0
# 517 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkDownCall
# 518 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x1
# 519 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkUpCall
# 520 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x2
# 521 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkLeftCall
# 522 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x3
# 523 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkRightCall
# 524 "data/scripts/field_move_scripts.pory"
	waitmovement 0x8005
# 525 "data/scripts/field_move_scripts.pory"
	return
# 526 "data/scripts/field_move_scripts.pory"
	
# 527 "data/scripts/field_move_scripts.pory"
WalkDownCall:
# 528 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkDown
# 529 "data/scripts/field_move_scripts.pory"
	return
# 530 "data/scripts/field_move_scripts.pory"

# 531 "data/scripts/field_move_scripts.pory"
WalkUpCall:
# 532 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkUp
# 533 "data/scripts/field_move_scripts.pory"
	return
# 534 "data/scripts/field_move_scripts.pory"

# 535 "data/scripts/field_move_scripts.pory"
WalkLeftCall:
# 536 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkLeft
# 537 "data/scripts/field_move_scripts.pory"
	return
# 538 "data/scripts/field_move_scripts.pory"

# 539 "data/scripts/field_move_scripts.pory"
WalkRightCall:
# 540 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkRight
# 541 "data/scripts/field_move_scripts.pory"
	return
# 542 "data/scripts/field_move_scripts.pory"
    
# 543 "data/scripts/field_move_scripts.pory"
WalkDown:
# 544 "data/scripts/field_move_scripts.pory"
    walk_down
# 545 "data/scripts/field_move_scripts.pory"
    step_end 
# 546 "data/scripts/field_move_scripts.pory"

# 547 "data/scripts/field_move_scripts.pory"
WalkUp:
# 548 "data/scripts/field_move_scripts.pory"
    walk_up
# 549 "data/scripts/field_move_scripts.pory"
    step_end
# 550 "data/scripts/field_move_scripts.pory"

# 551 "data/scripts/field_move_scripts.pory"
WalkLeft:
# 552 "data/scripts/field_move_scripts.pory"
    walk_left
# 553 "data/scripts/field_move_scripts.pory"
    step_end
# 554 "data/scripts/field_move_scripts.pory"

# 555 "data/scripts/field_move_scripts.pory"
WalkRight:
# 556 "data/scripts/field_move_scripts.pory"
    walk_right
# 557 "data/scripts/field_move_scripts.pory"
    step_end

EventScript_Headbutt_Text_0:
# 13 "data/scripts/field_move_scripts.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_Headbutt_Text_1:
# 19 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_Headbutt_Text_2:
# 55 "data/scripts/field_move_scripts.pory"
	.string "A Berry fell from the tree!$"

EventScript_UseDive_Text_0:
# 275 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.$"

EventScript_UseDive_Text_1:
# 279 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.\nUse the Diving Gear?$"

EventScript_UseDiveUnderwater_Text_0:
# 295 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nYou may be able to surface…$"

EventScript_UseDiveUnderwater_Text_1:
# 299 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nWould you like to surface?$"
