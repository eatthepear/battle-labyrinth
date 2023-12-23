EventScript_Headbutt::
# 2 "data/scripts/field_move_scripts.pory"
	lockall
# 3 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_0, MSGBOX_YESNO
# 4 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Headbutt_2
# 9 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_1, MSGBOX_DEFAULT
# 10 "data/scripts/field_move_scripts.pory"
	closemessage
# 11 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8005, 1
# 13 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8006, 8
# 14 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8007, 5
# 15 "data/scripts/field_move_scripts.pory"
	special ShakeCamera
# 16 "data/scripts/field_move_scripts.pory"
	playse SE_M_BIND
# 17 "data/scripts/field_move_scripts.pory"
	waitstate
# 18 "data/scripts/field_move_scripts.pory"
	waitse
# 19 "data/scripts/field_move_scripts.pory"
	special HeadbuttWildEncounter
# 20 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Headbutt_5
# 22 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Headbutt_7
EventScript_Headbutt_4:
# 107 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_Headbutt_2:
# 5 "data/scripts/field_move_scripts.pory"
	closemessage
# 6 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_Headbutt_5:
# 21 "data/scripts/field_move_scripts.pory"
	waitstate
	goto EventScript_Headbutt_4

EventScript_Headbutt_6:
# 23 "data/scripts/field_move_scripts.pory"
	random 100
# 24 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 25 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_Headbutt_12
# 26 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_Headbutt_12
# 27 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_Headbutt_12
# 28 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_Headbutt_12
# 29 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_Headbutt_12
# 30 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_Headbutt_12
# 31 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_Headbutt_12
# 32 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_Headbutt_12
# 33 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_Headbutt_12
# 34 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_Headbutt_12
# 35 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_Headbutt_12
# 36 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_Headbutt_12
# 37 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_Headbutt_12
# 38 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_Headbutt_12
# 39 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_Headbutt_12
# 40 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_Headbutt_12
# 41 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_Headbutt_12
# 42 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_Headbutt_12
# 43 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_Headbutt_12
# 44 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_Headbutt_12
# 45 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_Headbutt_12
# 46 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_Headbutt_12
# 47 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_Headbutt_12
# 48 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_Headbutt_12
# 49 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_Headbutt_12
# 52 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_Headbutt_13
# 53 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_Headbutt_13
# 54 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_Headbutt_13
# 55 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_Headbutt_13
# 60 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_Headbutt_14
# 61 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_Headbutt_14
# 62 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_Headbutt_14
# 63 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_Headbutt_14
# 68 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_Headbutt_15
# 69 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_Headbutt_15
# 70 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_Headbutt_15
# 71 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_Headbutt_15
# 76 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_Headbutt_16
# 77 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_Headbutt_16
# 78 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_Headbutt_16
# 79 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_Headbutt_16
# 84 "data/scripts/field_move_scripts.pory"
	case 41, EventScript_Headbutt_17
# 85 "data/scripts/field_move_scripts.pory"
	case 42, EventScript_Headbutt_17
# 86 "data/scripts/field_move_scripts.pory"
	case 43, EventScript_Headbutt_17
# 87 "data/scripts/field_move_scripts.pory"
	case 44, EventScript_Headbutt_17
# 92 "data/scripts/field_move_scripts.pory"
	case 45, EventScript_Headbutt_18
# 93 "data/scripts/field_move_scripts.pory"
	case 46, EventScript_Headbutt_18
# 94 "data/scripts/field_move_scripts.pory"
	case 47, EventScript_Headbutt_18
# 95 "data/scripts/field_move_scripts.pory"
	case 48, EventScript_Headbutt_18
# 100 "data/scripts/field_move_scripts.pory"
	case 49, EventScript_Headbutt_19
	goto EventScript_Headbutt_4

EventScript_Headbutt_7:
# 22 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_Headbutt_6
	goto EventScript_Headbutt_4

EventScript_Headbutt_12:
# 50 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 51 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_13:
# 56 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_Headbutt_20
	goto EventScript_Headbutt_4

EventScript_Headbutt_14:
# 64 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_22
	goto EventScript_Headbutt_4

EventScript_Headbutt_15:
# 72 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_24
	goto EventScript_Headbutt_4

EventScript_Headbutt_16:
# 80 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_26
	goto EventScript_Headbutt_4

EventScript_Headbutt_17:
# 88 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_28
	goto EventScript_Headbutt_4

EventScript_Headbutt_18:
# 96 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Headbutt_30
	goto EventScript_Headbutt_4

EventScript_Headbutt_19:
# 101 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Headbutt_32
	goto EventScript_Headbutt_4

EventScript_Headbutt_20:
# 57 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 58 "data/scripts/field_move_scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_22:
# 65 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 66 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_24:
# 73 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 74 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_26:
# 81 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 82 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_28:
# 89 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 90 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_30:
# 97 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 98 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_32:
# 102 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 103 "data/scripts/field_move_scripts.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_Headbutt_4


EventScript_CutTree::
# 112 "data/scripts/field_move_scripts.pory"
	lockall
# 113 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_MACHETE, 1
# 114 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutTree_2
# 119 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToCut, MSGBOX_YESNO
# 120 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CutTree_5
# 125 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_MACHETE
# 126 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 127 "data/scripts/field_move_scripts.pory"
	waitstate
# 128 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 129 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 130 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 131 "data/scripts/field_move_scripts.pory"
	releaseall
	return

EventScript_CutTree_2:
# 115 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantCut, MSGBOX_DEFAULT
# 116 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_CutTree_5:
# 121 "data/scripts/field_move_scripts.pory"
	closemessage
# 122 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_RockSmash::
# 136 "data/scripts/field_move_scripts.pory"
	lockall
# 137 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_SLEDGEHAMMER, 1
# 138 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSmash_2
# 143 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 144 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSmash_5
# 148 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_SLEDGEHAMMER
# 149 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 150 "data/scripts/field_move_scripts.pory"
	waitstate
# 151 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 152 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 153 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 154 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 155 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RockSmash_8
# 160 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_RockSmash_11
# 160 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_RockSmash_11
# 164 "data/scripts/field_move_scripts.pory"
	random 100
# 165 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 166 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_RockSmash_17
# 167 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_RockSmash_17
# 168 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_RockSmash_17
# 169 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_RockSmash_17
# 170 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_RockSmash_17
# 171 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_RockSmash_17
# 172 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_RockSmash_17
# 173 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_RockSmash_17
# 174 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_RockSmash_17
# 175 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_RockSmash_17
# 176 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_RockSmash_17
# 177 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_RockSmash_17
# 178 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_RockSmash_17
# 179 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_RockSmash_17
# 180 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_RockSmash_17
# 181 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_RockSmash_17
# 182 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_RockSmash_17
# 183 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_RockSmash_17
# 184 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_RockSmash_17
# 185 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_RockSmash_17
# 186 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_RockSmash_17
# 187 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_RockSmash_17
# 189 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_RockSmash_18
# 190 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_RockSmash_18
# 191 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_RockSmash_18
# 192 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_RockSmash_18
# 193 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_RockSmash_18
# 194 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_RockSmash_18
# 195 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_RockSmash_18
# 196 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_RockSmash_18
# 197 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_RockSmash_18
# 198 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_RockSmash_18
# 199 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_RockSmash_18
# 200 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_RockSmash_18
# 201 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_RockSmash_18
# 202 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_RockSmash_18
# 203 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_RockSmash_18
# 207 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_RockSmash_19
# 208 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_RockSmash_19
# 209 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_RockSmash_19
# 210 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_RockSmash_19
# 211 "data/scripts/field_move_scripts.pory"
	case 41, EventScript_RockSmash_19
# 212 "data/scripts/field_move_scripts.pory"
	case 42, EventScript_RockSmash_19
# 213 "data/scripts/field_move_scripts.pory"
	case 43, EventScript_RockSmash_19
# 214 "data/scripts/field_move_scripts.pory"
	case 44, EventScript_RockSmash_19
# 215 "data/scripts/field_move_scripts.pory"
	case 45, EventScript_RockSmash_19
# 216 "data/scripts/field_move_scripts.pory"
	case 46, EventScript_RockSmash_19
# 220 "data/scripts/field_move_scripts.pory"
	case 47, EventScript_RockSmash_20
# 221 "data/scripts/field_move_scripts.pory"
	case 48, EventScript_RockSmash_20
# 222 "data/scripts/field_move_scripts.pory"
	case 49, EventScript_RockSmash_20
# 223 "data/scripts/field_move_scripts.pory"
	case 50, EventScript_RockSmash_20
# 224 "data/scripts/field_move_scripts.pory"
	case 51, EventScript_RockSmash_20
# 228 "data/scripts/field_move_scripts.pory"
	case 52, EventScript_RockSmash_21
# 230 "data/scripts/field_move_scripts.pory"
	case 53, EventScript_RockSmash_22
# 232 "data/scripts/field_move_scripts.pory"
	case 54, EventScript_RockSmash_23
# 234 "data/scripts/field_move_scripts.pory"
	case 55, EventScript_RockSmash_24
# 236 "data/scripts/field_move_scripts.pory"
	case 56, EventScript_RockSmash_25
# 238 "data/scripts/field_move_scripts.pory"
	case 57, EventScript_RockSmash_26
# 240 "data/scripts/field_move_scripts.pory"
	case 58, EventScript_RockSmash_27
# 242 "data/scripts/field_move_scripts.pory"
	case 59, EventScript_RockSmash_28
# 244 "data/scripts/field_move_scripts.pory"
	case 60, EventScript_RockSmash_29
# 246 "data/scripts/field_move_scripts.pory"
	case 61, EventScript_RockSmash_30
# 248 "data/scripts/field_move_scripts.pory"
	case 62, EventScript_RockSmash_31
# 250 "data/scripts/field_move_scripts.pory"
	case 63, EventScript_RockSmash_32
# 252 "data/scripts/field_move_scripts.pory"
	case 64, EventScript_RockSmash_33
# 254 "data/scripts/field_move_scripts.pory"
	case 65, EventScript_RockSmash_34
# 256 "data/scripts/field_move_scripts.pory"
	case 66, EventScript_RockSmash_35
# 258 "data/scripts/field_move_scripts.pory"
	case 67, EventScript_RockSmash_36
# 260 "data/scripts/field_move_scripts.pory"
	case 68, EventScript_RockSmash_37
# 262 "data/scripts/field_move_scripts.pory"
	case 69, EventScript_RockSmash_38
EventScript_RockSmash_15:
# 265 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_2:
# 139 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSmash, MSGBOX_DEFAULT
# 140 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_5:
# 145 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_8:
# 156 "data/scripts/field_move_scripts.pory"
	waitstate
# 157 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_11:
# 161 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_17:
# 188 "data/scripts/field_move_scripts.pory"
	finditem ITEM_RED_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_18:
# 204 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_RockSmash_39
	goto EventScript_RockSmash_15

EventScript_RockSmash_19:
# 217 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_RockSmash_41
	goto EventScript_RockSmash_15

EventScript_RockSmash_20:
# 225 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_RockSmash_43
	goto EventScript_RockSmash_15

EventScript_RockSmash_21:
# 229 "data/scripts/field_move_scripts.pory"
	finditem ITEM_NORMAL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_22:
# 231 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIRE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_23:
# 233 "data/scripts/field_move_scripts.pory"
	finditem ITEM_WATER_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_24:
# 235 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_25:
# 237 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GRASS_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_26:
# 239 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ICE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_27:
# 241 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIGHTING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_28:
# 243 "data/scripts/field_move_scripts.pory"
	finditem ITEM_POISON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_29:
# 245 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GROUND_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_30:
# 247 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FLYING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_31:
# 249 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_32:
# 251 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BUG_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_33:
# 253 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ROCK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_34:
# 255 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GHOST_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_35:
# 257 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DRAGON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_36:
# 259 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DARK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_37:
# 261 "data/scripts/field_move_scripts.pory"
	finditem ITEM_STEEL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_38:
# 263 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FAIRY_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_39:
# 205 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BLUE_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_41:
# 218 "data/scripts/field_move_scripts.pory"
	finditem ITEM_YELLOW_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_43:
# 226 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GREEN_SHARD, 1
	goto EventScript_RockSmash_15


EventScript_UseDive::
# 271 "data/scripts/field_move_scripts.pory"
	lockall
# 272 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 273 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDive_2
# 278 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_1, MSGBOX_YESNO
# 279 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDive_5
# 283 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 284 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 285 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 286 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_2:
# 274 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_0, MSGBOX_DEFAULT
# 275 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_5:
# 280 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseDiveUnderwater::
# 291 "data/scripts/field_move_scripts.pory"
	lockall
# 292 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 293 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDiveUnderwater_2
# 298 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_1, MSGBOX_YESNO
# 299 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDiveUnderwater_5
# 303 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 304 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 305 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 306 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_2:
# 294 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_0, MSGBOX_DEFAULT
# 295 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_5:
# 300 "data/scripts/field_move_scripts.pory"
	releaseall
	end


# 310 "data/scripts/field_move_scripts.pory"

# 311 "data/scripts/field_move_scripts.pory"
@ Use rock smash from party menu
# 312 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash::
# 313 "data/scripts/field_move_scripts.pory"
	lockall
# 314 "data/scripts/field_move_scripts.pory"
	releaseall
# 315 "data/scripts/field_move_scripts.pory"
	end
# 316 "data/scripts/field_move_scripts.pory"

# 317 "data/scripts/field_move_scripts.pory"
Movement_SmashRock: @ 829082B
# 318 "data/scripts/field_move_scripts.pory"
	rock_smash_break
# 319 "data/scripts/field_move_scripts.pory"
	step_end
# 320 "data/scripts/field_move_scripts.pory"

# 321 "data/scripts/field_move_scripts.pory"
Text_WantToSmash:
# 322 "data/scripts/field_move_scripts.pory"
	.string "This rock appears to be breakable.\n"
# 323 "data/scripts/field_move_scripts.pory"
	.string "Use the Sledgehammer to smash it?$"
# 324 "data/scripts/field_move_scripts.pory"

# 325 "data/scripts/field_move_scripts.pory"
Text_CantSmash:
# 326 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock.$"
# 327 "data/scripts/field_move_scripts.pory"

# 328 "data/scripts/field_move_scripts.pory"
Movement_CutTreeDown:
# 329 "data/scripts/field_move_scripts.pory"
	cut_tree
# 330 "data/scripts/field_move_scripts.pory"
	step_end
# 331 "data/scripts/field_move_scripts.pory"

# 332 "data/scripts/field_move_scripts.pory"
Text_WantToCut:
# 333 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.\n"
# 334 "data/scripts/field_move_scripts.pory"
	.string "Use the Machete to remove it?$"
# 335 "data/scripts/field_move_scripts.pory"

# 336 "data/scripts/field_move_scripts.pory"
Text_MonUsedFieldMove:
# 337 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
# 338 "data/scripts/field_move_scripts.pory"

# 339 "data/scripts/field_move_scripts.pory"
Text_CantCut:
# 340 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.$"
# 341 "data/scripts/field_move_scripts.pory"

# 342 "data/scripts/field_move_scripts.pory"
EventScript_StrengthBoulder::
# 343 "data/scripts/field_move_scripts.pory"
	lockall
# 344 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
# 345 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_STRENGTH
# 346 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
# 347 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 348 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToStrength, MSGBOX_YESNO
# 349 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
# 350 "data/scripts/field_move_scripts.pory"
	closemessage
# 351 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 352 "data/scripts/field_move_scripts.pory"
	waitstate
# 353 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 354 "data/scripts/field_move_scripts.pory"
	end
# 355 "data/scripts/field_move_scripts.pory"

# 356 "data/scripts/field_move_scripts.pory"
EventScript_UseStrength::
# 357 "data/scripts/field_move_scripts.pory"
	lockall
# 358 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 359 "data/scripts/field_move_scripts.pory"
	waitstate
# 360 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 361 "data/scripts/field_move_scripts.pory"
	end
# 362 "data/scripts/field_move_scripts.pory"

# 363 "data/scripts/field_move_scripts.pory"
EventScript_ActivateStrength::
# 364 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 365 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
# 366 "data/scripts/field_move_scripts.pory"
	releaseall
# 367 "data/scripts/field_move_scripts.pory"
	end
# 368 "data/scripts/field_move_scripts.pory"

# 369 "data/scripts/field_move_scripts.pory"
EventScript_CantStrength::
# 370 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantStrength, MSGBOX_DEFAULT
# 371 "data/scripts/field_move_scripts.pory"
	releaseall
# 372 "data/scripts/field_move_scripts.pory"
	end
# 373 "data/scripts/field_move_scripts.pory"

# 374 "data/scripts/field_move_scripts.pory"
EventScript_CheckActivatedBoulder::
# 375 "data/scripts/field_move_scripts.pory"
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
# 376 "data/scripts/field_move_scripts.pory"
	releaseall
# 377 "data/scripts/field_move_scripts.pory"
	end
# 378 "data/scripts/field_move_scripts.pory"

# 379 "data/scripts/field_move_scripts.pory"
EventScript_CancelStrength::
# 380 "data/scripts/field_move_scripts.pory"
	closemessage
# 381 "data/scripts/field_move_scripts.pory"
	releaseall
# 382 "data/scripts/field_move_scripts.pory"
	end
# 383 "data/scripts/field_move_scripts.pory"

# 384 "data/scripts/field_move_scripts.pory"
Text_WantToStrength:
# 385 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a POKéMON\n"
# 386 "data/scripts/field_move_scripts.pory"
	.string "may be able to push it aside.\p"
# 387 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use STRENGTH?$"
# 388 "data/scripts/field_move_scripts.pory"

# 389 "data/scripts/field_move_scripts.pory"
Text_MonUsedStrength:
# 390 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used STRENGTH!\p"
# 391 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
# 392 "data/scripts/field_move_scripts.pory"
	.string "possible to move boulders around!$"
# 393 "data/scripts/field_move_scripts.pory"

# 394 "data/scripts/field_move_scripts.pory"
Text_CantStrength:
# 395 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder.$"
# 396 "data/scripts/field_move_scripts.pory"

# 397 "data/scripts/field_move_scripts.pory"
Text_StrengthActivated:
# 398 "data/scripts/field_move_scripts.pory"
	.string "STRENGTH made it possible to move\n"
# 399 "data/scripts/field_move_scripts.pory"
	.string "boulders around.$"
# 400 "data/scripts/field_move_scripts.pory"

# 401 "data/scripts/field_move_scripts.pory"
EventScript_UseWaterfall::
# 402 "data/scripts/field_move_scripts.pory"
	lockall
# 403 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_WATERFALL
# 404 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
# 405 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 406 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 407 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
# 408 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 409 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
# 410 "data/scripts/field_move_scripts.pory"
    call FollowerIntoPlayerScript
# 411 "data/scripts/field_move_scripts.pory"
    callnative HideFollower
# 412 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 413 "data/scripts/field_move_scripts.pory"
    callnative FollowMe_WarpSetEnd
# 414 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndWaterfall
# 415 "data/scripts/field_move_scripts.pory"

# 416 "data/scripts/field_move_scripts.pory"
EventScript_CannotUseWaterfall::
# 417 "data/scripts/field_move_scripts.pory"
	lockall
# 418 "data/scripts/field_move_scripts.pory"

# 419 "data/scripts/field_move_scripts.pory"
EventScript_CantWaterfall::
# 420 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT
# 421 "data/scripts/field_move_scripts.pory"

# 422 "data/scripts/field_move_scripts.pory"
EventScript_EndWaterfall::
# 423 "data/scripts/field_move_scripts.pory"
	releaseall
# 424 "data/scripts/field_move_scripts.pory"
	end
# 425 "data/scripts/field_move_scripts.pory"

# 426 "data/scripts/field_move_scripts.pory"
Text_CantWaterfall:
# 427 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with\n"
# 428 "data/scripts/field_move_scripts.pory"
	.string "a mighty roar.$"
# 429 "data/scripts/field_move_scripts.pory"

# 430 "data/scripts/field_move_scripts.pory"
Text_WantToWaterfall:
# 431 "data/scripts/field_move_scripts.pory"
	.string "It's a large waterfall.\n"
# 432 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use WATERFALL?$"
# 433 "data/scripts/field_move_scripts.pory"

# 434 "data/scripts/field_move_scripts.pory"
Text_MonUsedWaterfall:
# 435 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used WATERFALL.$"
# 436 "data/scripts/field_move_scripts.pory"

# 437 "data/scripts/field_move_scripts.pory"
EventScript_FailSweetScent::
# 438 "data/scripts/field_move_scripts.pory"
	msgbox Text_FailSweetScent, MSGBOX_SIGN
# 439 "data/scripts/field_move_scripts.pory"
	end
# 440 "data/scripts/field_move_scripts.pory"

# 441 "data/scripts/field_move_scripts.pory"
Text_FailSweetScent:
# 442 "data/scripts/field_move_scripts.pory"
	.string "Looks like there's nothing here…$"
# 443 "data/scripts/field_move_scripts.pory"

# 444 "data/scripts/field_move_scripts.pory"
EventScript_DisableAutoRun::
# 445 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunDisabled MSGBOX_SIGN
# 446 "data/scripts/field_move_scripts.pory"
	end
# 447 "data/scripts/field_move_scripts.pory"

# 448 "data/scripts/field_move_scripts.pory"
AutoRunDisabled:
# 449 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
# 450 "data/scripts/field_move_scripts.pory"
    
# 451 "data/scripts/field_move_scripts.pory"
EventScript_EnableAutoRun::
# 452 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunEnabled MSGBOX_SIGN
# 453 "data/scripts/field_move_scripts.pory"
	end
# 454 "data/scripts/field_move_scripts.pory"

# 455 "data/scripts/field_move_scripts.pory"
AutoRunEnabled:
# 456 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"
# 457 "data/scripts/field_move_scripts.pory"
	
# 458 "data/scripts/field_move_scripts.pory"
EventScript_UseRockClimb::
# 459 "data/scripts/field_move_scripts.pory"
	lockall
# 460 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 461 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 462 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_CantRockClimb
# 463 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick 0, VAR_RESULT
# 464 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 465 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 466 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
# 467 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_EndRockClimb
# 468 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 469 "data/scripts/field_move_scripts.pory"
	closemessage
# 470 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 471 "data/scripts/field_move_scripts.pory"
	waitstate
# 472 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndRockClimb
# 473 "data/scripts/field_move_scripts.pory"
	
# 474 "data/scripts/field_move_scripts.pory"
EventScript_CantRockClimb::
# 475 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT
# 476 "data/scripts/field_move_scripts.pory"
	
# 477 "data/scripts/field_move_scripts.pory"
EventScript_EndRockClimb::
# 478 "data/scripts/field_move_scripts.pory"
	releaseall
# 479 "data/scripts/field_move_scripts.pory"
	end
# 480 "data/scripts/field_move_scripts.pory"
	
# 481 "data/scripts/field_move_scripts.pory"
Text_WantToRockClimb:
# 482 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 483 "data/scripts/field_move_scripts.pory"
    .string "Would you like to use Rock Climb?$"
# 484 "data/scripts/field_move_scripts.pory"
    
# 485 "data/scripts/field_move_scripts.pory"
Text_MonUsedRockClimb:
# 486 "data/scripts/field_move_scripts.pory"
    .string "{STR_VAR_1} used Rock Climb!$"
# 487 "data/scripts/field_move_scripts.pory"
    
# 488 "data/scripts/field_move_scripts.pory"
Text_CantRockClimb:
# 489 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 490 "data/scripts/field_move_scripts.pory"
    .string "A Pokémon may be able to climb it.$"
# 491 "data/scripts/field_move_scripts.pory"

# 492 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScript::
# 493 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 494 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 495 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 496 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 497 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 498 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 499 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 500 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScriptReturn:
# 501 "data/scripts/field_move_scripts.pory"
	return
# 502 "data/scripts/field_move_scripts.pory"
    
# 503 "data/scripts/field_move_scripts.pory"
FollowerIntoPlayerScript::
# 504 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 505 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 506 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 507 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 508 "data/scripts/field_move_scripts.pory"
	setvar 0x8005 0xFE  @ follower
# 509 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 510 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 511 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 512 "data/scripts/field_move_scripts.pory"
	return
# 513 "data/scripts/field_move_scripts.pory"
    
# 514 "data/scripts/field_move_scripts.pory"
WalkCall:
# 515 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x0
# 516 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkDownCall
# 517 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x1
# 518 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkUpCall
# 519 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x2
# 520 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkLeftCall
# 521 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x3
# 522 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkRightCall
# 523 "data/scripts/field_move_scripts.pory"
	waitmovement 0x8005
# 524 "data/scripts/field_move_scripts.pory"
	return
# 525 "data/scripts/field_move_scripts.pory"
	
# 526 "data/scripts/field_move_scripts.pory"
WalkDownCall:
# 527 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkDown
# 528 "data/scripts/field_move_scripts.pory"
	return
# 529 "data/scripts/field_move_scripts.pory"

# 530 "data/scripts/field_move_scripts.pory"
WalkUpCall:
# 531 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkUp
# 532 "data/scripts/field_move_scripts.pory"
	return
# 533 "data/scripts/field_move_scripts.pory"

# 534 "data/scripts/field_move_scripts.pory"
WalkLeftCall:
# 535 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkLeft
# 536 "data/scripts/field_move_scripts.pory"
	return
# 537 "data/scripts/field_move_scripts.pory"

# 538 "data/scripts/field_move_scripts.pory"
WalkRightCall:
# 539 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkRight
# 540 "data/scripts/field_move_scripts.pory"
	return
# 541 "data/scripts/field_move_scripts.pory"
    
# 542 "data/scripts/field_move_scripts.pory"
WalkDown:
# 543 "data/scripts/field_move_scripts.pory"
    walk_down
# 544 "data/scripts/field_move_scripts.pory"
    step_end 
# 545 "data/scripts/field_move_scripts.pory"

# 546 "data/scripts/field_move_scripts.pory"
WalkUp:
# 547 "data/scripts/field_move_scripts.pory"
    walk_up
# 548 "data/scripts/field_move_scripts.pory"
    step_end
# 549 "data/scripts/field_move_scripts.pory"

# 550 "data/scripts/field_move_scripts.pory"
WalkLeft:
# 551 "data/scripts/field_move_scripts.pory"
    walk_left
# 552 "data/scripts/field_move_scripts.pory"
    step_end
# 553 "data/scripts/field_move_scripts.pory"

# 554 "data/scripts/field_move_scripts.pory"
WalkRight:
# 555 "data/scripts/field_move_scripts.pory"
    walk_right
# 556 "data/scripts/field_move_scripts.pory"
    step_end

EventScript_Headbutt_Text_0:
# 3 "data/scripts/field_move_scripts.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_Headbutt_Text_1:
# 9 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_Headbutt_Text_2:
# 50 "data/scripts/field_move_scripts.pory"
	.string "A Berry fell from the tree!$"

EventScript_UseDive_Text_0:
# 274 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.$"

EventScript_UseDive_Text_1:
# 278 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.\nUse the Diving Gear?$"

EventScript_UseDiveUnderwater_Text_0:
# 294 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nYou may be able to surface…$"

EventScript_UseDiveUnderwater_Text_1:
# 298 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nWould you like to surface?$"
