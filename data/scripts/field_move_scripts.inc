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
# 98 "data/scripts/field_move_scripts.pory"
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
	random 70
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
# 47 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_Headbutt_13
# 48 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_Headbutt_13
# 49 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_Headbutt_13
# 54 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_Headbutt_14
# 55 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_Headbutt_14
# 56 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_Headbutt_14
# 61 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_Headbutt_15
# 62 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_Headbutt_15
# 63 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_Headbutt_15
# 68 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_Headbutt_16
# 69 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_Headbutt_16
# 70 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_Headbutt_16
# 75 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_Headbutt_17
# 76 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_Headbutt_17
# 77 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_Headbutt_17
# 82 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_Headbutt_18
# 83 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_Headbutt_18
# 84 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_Headbutt_18
# 85 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_Headbutt_18
# 86 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_Headbutt_18
# 91 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_Headbutt_19
	goto EventScript_Headbutt_4

EventScript_Headbutt_7:
# 22 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_Headbutt_6
	goto EventScript_Headbutt_4

EventScript_Headbutt_12:
# 45 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 46 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_13:
# 50 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_20
	goto EventScript_Headbutt_4

EventScript_Headbutt_14:
# 57 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_22
	goto EventScript_Headbutt_4

EventScript_Headbutt_15:
# 64 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_24
	goto EventScript_Headbutt_4

EventScript_Headbutt_16:
# 71 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_26
	goto EventScript_Headbutt_4

EventScript_Headbutt_17:
# 78 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_Headbutt_28
	goto EventScript_Headbutt_4

EventScript_Headbutt_18:
# 87 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_Headbutt_30
	goto EventScript_Headbutt_4

EventScript_Headbutt_19:
# 92 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Headbutt_32
	goto EventScript_Headbutt_4

EventScript_Headbutt_20:
# 51 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 52 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_22:
# 58 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 59 "data/scripts/field_move_scripts.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_24:
# 65 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 66 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_26:
# 72 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 73 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_28:
# 79 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 80 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_30:
# 88 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 89 "data/scripts/field_move_scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_Headbutt_4

EventScript_Headbutt_32:
# 93 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_Headbutt_Text_2
# 94 "data/scripts/field_move_scripts.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_Headbutt_4


EventScript_CutTree::
# 103 "data/scripts/field_move_scripts.pory"
	lockall
# 104 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_MACHETE, 1
# 105 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_CutTree_2
# 110 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToCut, MSGBOX_YESNO
# 111 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CutTree_5
# 116 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_MACHETE
# 117 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 118 "data/scripts/field_move_scripts.pory"
	waitstate
# 119 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 120 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 121 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 122 "data/scripts/field_move_scripts.pory"
	releaseall
	return

EventScript_CutTree_2:
# 106 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantCut, MSGBOX_DEFAULT
# 107 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_CutTree_5:
# 112 "data/scripts/field_move_scripts.pory"
	closemessage
# 113 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_RockSmash::
# 127 "data/scripts/field_move_scripts.pory"
	lockall
# 128 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_SLEDGEHAMMER, 1
# 129 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_RockSmash_2
# 134 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 135 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_RockSmash_5
# 139 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_SLEDGEHAMMER
# 140 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 141 "data/scripts/field_move_scripts.pory"
	waitstate
# 142 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 143 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 144 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 145 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 146 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_RockSmash_8
# 151 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_RockSmash_11
# 151 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_RockSmash_11
# 155 "data/scripts/field_move_scripts.pory"
	random 100
# 156 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 157 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_RockSmash_17
# 158 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_RockSmash_17
# 159 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_RockSmash_17
# 160 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_RockSmash_17
# 161 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_RockSmash_17
# 162 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_RockSmash_17
# 163 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_RockSmash_17
# 164 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_RockSmash_17
# 165 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_RockSmash_17
# 166 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_RockSmash_17
# 167 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_RockSmash_17
# 168 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_RockSmash_17
# 169 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_RockSmash_17
# 170 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_RockSmash_17
# 171 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_RockSmash_17
# 172 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_RockSmash_17
# 173 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_RockSmash_17
# 174 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_RockSmash_17
# 175 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_RockSmash_17
# 176 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_RockSmash_17
# 177 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_RockSmash_17
# 178 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_RockSmash_17
# 180 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_RockSmash_18
# 181 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_RockSmash_18
# 182 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_RockSmash_18
# 183 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_RockSmash_18
# 184 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_RockSmash_18
# 185 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_RockSmash_18
# 186 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_RockSmash_18
# 187 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_RockSmash_18
# 188 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_RockSmash_18
# 189 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_RockSmash_18
# 190 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_RockSmash_18
# 191 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_RockSmash_18
# 192 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_RockSmash_18
# 193 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_RockSmash_18
# 194 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_RockSmash_18
# 198 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_RockSmash_19
# 199 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_RockSmash_19
# 200 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_RockSmash_19
# 201 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_RockSmash_19
# 202 "data/scripts/field_move_scripts.pory"
	case 41, EventScript_RockSmash_19
# 203 "data/scripts/field_move_scripts.pory"
	case 42, EventScript_RockSmash_19
# 204 "data/scripts/field_move_scripts.pory"
	case 43, EventScript_RockSmash_19
# 205 "data/scripts/field_move_scripts.pory"
	case 44, EventScript_RockSmash_19
# 206 "data/scripts/field_move_scripts.pory"
	case 45, EventScript_RockSmash_19
# 207 "data/scripts/field_move_scripts.pory"
	case 46, EventScript_RockSmash_19
# 211 "data/scripts/field_move_scripts.pory"
	case 47, EventScript_RockSmash_20
# 212 "data/scripts/field_move_scripts.pory"
	case 48, EventScript_RockSmash_20
# 213 "data/scripts/field_move_scripts.pory"
	case 49, EventScript_RockSmash_20
# 214 "data/scripts/field_move_scripts.pory"
	case 50, EventScript_RockSmash_20
# 215 "data/scripts/field_move_scripts.pory"
	case 51, EventScript_RockSmash_20
# 219 "data/scripts/field_move_scripts.pory"
	case 52, EventScript_RockSmash_21
# 221 "data/scripts/field_move_scripts.pory"
	case 53, EventScript_RockSmash_22
# 223 "data/scripts/field_move_scripts.pory"
	case 54, EventScript_RockSmash_23
# 225 "data/scripts/field_move_scripts.pory"
	case 55, EventScript_RockSmash_24
# 227 "data/scripts/field_move_scripts.pory"
	case 56, EventScript_RockSmash_25
# 229 "data/scripts/field_move_scripts.pory"
	case 57, EventScript_RockSmash_26
# 231 "data/scripts/field_move_scripts.pory"
	case 58, EventScript_RockSmash_27
# 233 "data/scripts/field_move_scripts.pory"
	case 59, EventScript_RockSmash_28
# 235 "data/scripts/field_move_scripts.pory"
	case 60, EventScript_RockSmash_29
# 237 "data/scripts/field_move_scripts.pory"
	case 61, EventScript_RockSmash_30
# 239 "data/scripts/field_move_scripts.pory"
	case 62, EventScript_RockSmash_31
# 241 "data/scripts/field_move_scripts.pory"
	case 63, EventScript_RockSmash_32
# 243 "data/scripts/field_move_scripts.pory"
	case 64, EventScript_RockSmash_33
# 245 "data/scripts/field_move_scripts.pory"
	case 65, EventScript_RockSmash_34
# 247 "data/scripts/field_move_scripts.pory"
	case 66, EventScript_RockSmash_35
# 249 "data/scripts/field_move_scripts.pory"
	case 67, EventScript_RockSmash_36
# 251 "data/scripts/field_move_scripts.pory"
	case 68, EventScript_RockSmash_37
# 253 "data/scripts/field_move_scripts.pory"
	case 69, EventScript_RockSmash_38
EventScript_RockSmash_15:
# 256 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_2:
# 130 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSmash, MSGBOX_DEFAULT
# 131 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_5:
# 136 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_8:
# 147 "data/scripts/field_move_scripts.pory"
	waitstate
# 148 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_11:
# 152 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_RockSmash_17:
# 179 "data/scripts/field_move_scripts.pory"
	finditem ITEM_RED_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_18:
# 195 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_RockSmash_39
	goto EventScript_RockSmash_15

EventScript_RockSmash_19:
# 208 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_RockSmash_41
	goto EventScript_RockSmash_15

EventScript_RockSmash_20:
# 216 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_RockSmash_43
	goto EventScript_RockSmash_15

EventScript_RockSmash_21:
# 220 "data/scripts/field_move_scripts.pory"
	finditem ITEM_NORMAL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_22:
# 222 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIRE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_23:
# 224 "data/scripts/field_move_scripts.pory"
	finditem ITEM_WATER_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_24:
# 226 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_25:
# 228 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GRASS_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_26:
# 230 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ICE_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_27:
# 232 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIGHTING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_28:
# 234 "data/scripts/field_move_scripts.pory"
	finditem ITEM_POISON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_29:
# 236 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GROUND_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_30:
# 238 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FLYING_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_31:
# 240 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_32:
# 242 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BUG_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_33:
# 244 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ROCK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_34:
# 246 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GHOST_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_35:
# 248 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DRAGON_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_36:
# 250 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DARK_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_37:
# 252 "data/scripts/field_move_scripts.pory"
	finditem ITEM_STEEL_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_38:
# 254 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FAIRY_GEM, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_39:
# 196 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BLUE_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_41:
# 209 "data/scripts/field_move_scripts.pory"
	finditem ITEM_YELLOW_SHARD, 1
	goto EventScript_RockSmash_15

EventScript_RockSmash_43:
# 217 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GREEN_SHARD, 1
	goto EventScript_RockSmash_15


EventScript_UseDive::
# 262 "data/scripts/field_move_scripts.pory"
	lockall
# 263 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 264 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDive_2
# 269 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_1, MSGBOX_YESNO
# 270 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDive_5
# 274 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 275 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 276 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 277 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_2:
# 265 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDive_Text_0, MSGBOX_DEFAULT
# 266 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDive_5:
# 271 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseDiveUnderwater::
# 282 "data/scripts/field_move_scripts.pory"
	lockall
# 283 "data/scripts/field_move_scripts.pory"
	checkitem ITEM_DIVING_GEAR, 1
# 284 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDiveUnderwater_2
# 289 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_1, MSGBOX_YESNO
# 290 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_UseDiveUnderwater_5
# 294 "data/scripts/field_move_scripts.pory"
	setitemarg ITEM_DIVING_GEAR
# 295 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 296 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 297 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_2:
# 285 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_Text_0, MSGBOX_DEFAULT
# 286 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_5:
# 291 "data/scripts/field_move_scripts.pory"
	releaseall
	end


# 301 "data/scripts/field_move_scripts.pory"

# 302 "data/scripts/field_move_scripts.pory"
@ Use rock smash from party menu
# 303 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash::
# 304 "data/scripts/field_move_scripts.pory"
	lockall
# 305 "data/scripts/field_move_scripts.pory"
	releaseall
# 306 "data/scripts/field_move_scripts.pory"
	end
# 307 "data/scripts/field_move_scripts.pory"

# 308 "data/scripts/field_move_scripts.pory"
Movement_SmashRock: @ 829082B
# 309 "data/scripts/field_move_scripts.pory"
	rock_smash_break
# 310 "data/scripts/field_move_scripts.pory"
	step_end
# 311 "data/scripts/field_move_scripts.pory"

# 312 "data/scripts/field_move_scripts.pory"
Text_WantToSmash:
# 313 "data/scripts/field_move_scripts.pory"
	.string "This rock appears to be breakable.\n"
# 314 "data/scripts/field_move_scripts.pory"
	.string "Use the Sledgehammer to smash it?$"
# 315 "data/scripts/field_move_scripts.pory"

# 316 "data/scripts/field_move_scripts.pory"
Text_CantSmash:
# 317 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock.$"
# 318 "data/scripts/field_move_scripts.pory"

# 319 "data/scripts/field_move_scripts.pory"
Movement_CutTreeDown:
# 320 "data/scripts/field_move_scripts.pory"
	cut_tree
# 321 "data/scripts/field_move_scripts.pory"
	step_end
# 322 "data/scripts/field_move_scripts.pory"

# 323 "data/scripts/field_move_scripts.pory"
Text_WantToCut:
# 324 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.\n"
# 325 "data/scripts/field_move_scripts.pory"
	.string "Use the Machete to remove it?$"
# 326 "data/scripts/field_move_scripts.pory"

# 327 "data/scripts/field_move_scripts.pory"
Text_MonUsedFieldMove:
# 328 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
# 329 "data/scripts/field_move_scripts.pory"

# 330 "data/scripts/field_move_scripts.pory"
Text_CantCut:
# 331 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.$"
# 332 "data/scripts/field_move_scripts.pory"

# 333 "data/scripts/field_move_scripts.pory"
EventScript_StrengthBoulder::
# 334 "data/scripts/field_move_scripts.pory"
	lockall
# 335 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
# 336 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_STRENGTH
# 337 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
# 338 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 339 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToStrength, MSGBOX_YESNO
# 340 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
# 341 "data/scripts/field_move_scripts.pory"
	closemessage
# 342 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 343 "data/scripts/field_move_scripts.pory"
	waitstate
# 344 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 345 "data/scripts/field_move_scripts.pory"
	end
# 346 "data/scripts/field_move_scripts.pory"

# 347 "data/scripts/field_move_scripts.pory"
EventScript_UseStrength::
# 348 "data/scripts/field_move_scripts.pory"
	lockall
# 349 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 350 "data/scripts/field_move_scripts.pory"
	waitstate
# 351 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 352 "data/scripts/field_move_scripts.pory"
	end
# 353 "data/scripts/field_move_scripts.pory"

# 354 "data/scripts/field_move_scripts.pory"
EventScript_ActivateStrength::
# 355 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 356 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
# 357 "data/scripts/field_move_scripts.pory"
	releaseall
# 358 "data/scripts/field_move_scripts.pory"
	end
# 359 "data/scripts/field_move_scripts.pory"

# 360 "data/scripts/field_move_scripts.pory"
EventScript_CantStrength::
# 361 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantStrength, MSGBOX_DEFAULT
# 362 "data/scripts/field_move_scripts.pory"
	releaseall
# 363 "data/scripts/field_move_scripts.pory"
	end
# 364 "data/scripts/field_move_scripts.pory"

# 365 "data/scripts/field_move_scripts.pory"
EventScript_CheckActivatedBoulder::
# 366 "data/scripts/field_move_scripts.pory"
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
# 367 "data/scripts/field_move_scripts.pory"
	releaseall
# 368 "data/scripts/field_move_scripts.pory"
	end
# 369 "data/scripts/field_move_scripts.pory"

# 370 "data/scripts/field_move_scripts.pory"
EventScript_CancelStrength::
# 371 "data/scripts/field_move_scripts.pory"
	closemessage
# 372 "data/scripts/field_move_scripts.pory"
	releaseall
# 373 "data/scripts/field_move_scripts.pory"
	end
# 374 "data/scripts/field_move_scripts.pory"

# 375 "data/scripts/field_move_scripts.pory"
Text_WantToStrength:
# 376 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a POKéMON\n"
# 377 "data/scripts/field_move_scripts.pory"
	.string "may be able to push it aside.\p"
# 378 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use STRENGTH?$"
# 379 "data/scripts/field_move_scripts.pory"

# 380 "data/scripts/field_move_scripts.pory"
Text_MonUsedStrength:
# 381 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used STRENGTH!\p"
# 382 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
# 383 "data/scripts/field_move_scripts.pory"
	.string "possible to move boulders around!$"
# 384 "data/scripts/field_move_scripts.pory"

# 385 "data/scripts/field_move_scripts.pory"
Text_CantStrength:
# 386 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder.$"
# 387 "data/scripts/field_move_scripts.pory"

# 388 "data/scripts/field_move_scripts.pory"
Text_StrengthActivated:
# 389 "data/scripts/field_move_scripts.pory"
	.string "STRENGTH made it possible to move\n"
# 390 "data/scripts/field_move_scripts.pory"
	.string "boulders around.$"
# 391 "data/scripts/field_move_scripts.pory"

# 392 "data/scripts/field_move_scripts.pory"
EventScript_UseWaterfall::
# 393 "data/scripts/field_move_scripts.pory"
	lockall
# 394 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_WATERFALL
# 395 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
# 396 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 397 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 398 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
# 399 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 400 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
# 401 "data/scripts/field_move_scripts.pory"
    call FollowerIntoPlayerScript
# 402 "data/scripts/field_move_scripts.pory"
    callnative HideFollower
# 403 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 404 "data/scripts/field_move_scripts.pory"
    callnative FollowMe_WarpSetEnd
# 405 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndWaterfall
# 406 "data/scripts/field_move_scripts.pory"

# 407 "data/scripts/field_move_scripts.pory"
EventScript_CannotUseWaterfall::
# 408 "data/scripts/field_move_scripts.pory"
	lockall
# 409 "data/scripts/field_move_scripts.pory"

# 410 "data/scripts/field_move_scripts.pory"
EventScript_CantWaterfall::
# 411 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT
# 412 "data/scripts/field_move_scripts.pory"

# 413 "data/scripts/field_move_scripts.pory"
EventScript_EndWaterfall::
# 414 "data/scripts/field_move_scripts.pory"
	releaseall
# 415 "data/scripts/field_move_scripts.pory"
	end
# 416 "data/scripts/field_move_scripts.pory"

# 417 "data/scripts/field_move_scripts.pory"
Text_CantWaterfall:
# 418 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with\n"
# 419 "data/scripts/field_move_scripts.pory"
	.string "a mighty roar.$"
# 420 "data/scripts/field_move_scripts.pory"

# 421 "data/scripts/field_move_scripts.pory"
Text_WantToWaterfall:
# 422 "data/scripts/field_move_scripts.pory"
	.string "It's a large waterfall.\n"
# 423 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use WATERFALL?$"
# 424 "data/scripts/field_move_scripts.pory"

# 425 "data/scripts/field_move_scripts.pory"
Text_MonUsedWaterfall:
# 426 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used WATERFALL.$"
# 427 "data/scripts/field_move_scripts.pory"

# 428 "data/scripts/field_move_scripts.pory"
EventScript_FailSweetScent::
# 429 "data/scripts/field_move_scripts.pory"
	msgbox Text_FailSweetScent, MSGBOX_SIGN
# 430 "data/scripts/field_move_scripts.pory"
	end
# 431 "data/scripts/field_move_scripts.pory"

# 432 "data/scripts/field_move_scripts.pory"
Text_FailSweetScent:
# 433 "data/scripts/field_move_scripts.pory"
	.string "Looks like there's nothing here…$"
# 434 "data/scripts/field_move_scripts.pory"

# 435 "data/scripts/field_move_scripts.pory"
EventScript_DisableAutoRun::
# 436 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunDisabled MSGBOX_SIGN
# 437 "data/scripts/field_move_scripts.pory"
	end
# 438 "data/scripts/field_move_scripts.pory"

# 439 "data/scripts/field_move_scripts.pory"
AutoRunDisabled:
# 440 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
# 441 "data/scripts/field_move_scripts.pory"
    
# 442 "data/scripts/field_move_scripts.pory"
EventScript_EnableAutoRun::
# 443 "data/scripts/field_move_scripts.pory"
	msgbox AutoRunEnabled MSGBOX_SIGN
# 444 "data/scripts/field_move_scripts.pory"
	end
# 445 "data/scripts/field_move_scripts.pory"

# 446 "data/scripts/field_move_scripts.pory"
AutoRunEnabled:
# 447 "data/scripts/field_move_scripts.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"
# 448 "data/scripts/field_move_scripts.pory"
	
# 449 "data/scripts/field_move_scripts.pory"
EventScript_UseRockClimb::
# 450 "data/scripts/field_move_scripts.pory"
	lockall
# 451 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_ROCK_CLIMB
# 452 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 453 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_CantRockClimb
# 454 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick 0, VAR_RESULT
# 455 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 456 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 457 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, NO
# 458 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_EndRockClimb
# 459 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 460 "data/scripts/field_move_scripts.pory"
	closemessage
# 461 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 462 "data/scripts/field_move_scripts.pory"
	waitstate
# 463 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndRockClimb
# 464 "data/scripts/field_move_scripts.pory"
	
# 465 "data/scripts/field_move_scripts.pory"
EventScript_CantRockClimb::
# 466 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT
# 467 "data/scripts/field_move_scripts.pory"
	
# 468 "data/scripts/field_move_scripts.pory"
EventScript_EndRockClimb::
# 469 "data/scripts/field_move_scripts.pory"
	releaseall
# 470 "data/scripts/field_move_scripts.pory"
	end
# 471 "data/scripts/field_move_scripts.pory"
	
# 472 "data/scripts/field_move_scripts.pory"
Text_WantToRockClimb:
# 473 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 474 "data/scripts/field_move_scripts.pory"
    .string "Would you like to use Rock Climb?$"
# 475 "data/scripts/field_move_scripts.pory"
    
# 476 "data/scripts/field_move_scripts.pory"
Text_MonUsedRockClimb:
# 477 "data/scripts/field_move_scripts.pory"
    .string "{STR_VAR_1} used Rock Climb!$"
# 478 "data/scripts/field_move_scripts.pory"
    
# 479 "data/scripts/field_move_scripts.pory"
Text_CantRockClimb:
# 480 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 481 "data/scripts/field_move_scripts.pory"
    .string "A Pokémon may be able to climb it.$"
# 482 "data/scripts/field_move_scripts.pory"

# 483 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScript::
# 484 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 485 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 486 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 487 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 488 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 489 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 490 "data/scripts/field_move_scripts.pory"
	callnative FollowerTrainerSightingPositionFix
# 491 "data/scripts/field_move_scripts.pory"
FollowerPositionFixScriptReturn:
# 492 "data/scripts/field_move_scripts.pory"
	return
# 493 "data/scripts/field_move_scripts.pory"
    
# 494 "data/scripts/field_move_scripts.pory"
FollowerIntoPlayerScript::
# 495 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x0
# 496 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 497 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0xFFFF
# 498 "data/scripts/field_move_scripts.pory"
	goto_if_eq FollowerPositionFixScriptReturn
# 499 "data/scripts/field_move_scripts.pory"
	setvar 0x8005 0xFE  @ follower
# 500 "data/scripts/field_move_scripts.pory"
	call WalkCall
# 501 "data/scripts/field_move_scripts.pory"
	setvar 0x8000 0x1
# 502 "data/scripts/field_move_scripts.pory"
	callnative FollowerIntoPlayer
# 503 "data/scripts/field_move_scripts.pory"
	return
# 504 "data/scripts/field_move_scripts.pory"
    
# 505 "data/scripts/field_move_scripts.pory"
WalkCall:
# 506 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x0
# 507 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkDownCall
# 508 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x1
# 509 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkUpCall
# 510 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x2
# 511 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkLeftCall
# 512 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT 0x3
# 513 "data/scripts/field_move_scripts.pory"
	call_if_eq WalkRightCall
# 514 "data/scripts/field_move_scripts.pory"
	waitmovement 0x8005
# 515 "data/scripts/field_move_scripts.pory"
	return
# 516 "data/scripts/field_move_scripts.pory"
	
# 517 "data/scripts/field_move_scripts.pory"
WalkDownCall:
# 518 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkDown
# 519 "data/scripts/field_move_scripts.pory"
	return
# 520 "data/scripts/field_move_scripts.pory"

# 521 "data/scripts/field_move_scripts.pory"
WalkUpCall:
# 522 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkUp
# 523 "data/scripts/field_move_scripts.pory"
	return
# 524 "data/scripts/field_move_scripts.pory"

# 525 "data/scripts/field_move_scripts.pory"
WalkLeftCall:
# 526 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkLeft
# 527 "data/scripts/field_move_scripts.pory"
	return
# 528 "data/scripts/field_move_scripts.pory"

# 529 "data/scripts/field_move_scripts.pory"
WalkRightCall:
# 530 "data/scripts/field_move_scripts.pory"
	applymovement 0x8005 WalkRight
# 531 "data/scripts/field_move_scripts.pory"
	return
# 532 "data/scripts/field_move_scripts.pory"
    
# 533 "data/scripts/field_move_scripts.pory"
WalkDown:
# 534 "data/scripts/field_move_scripts.pory"
    walk_down
# 535 "data/scripts/field_move_scripts.pory"
    step_end 
# 536 "data/scripts/field_move_scripts.pory"

# 537 "data/scripts/field_move_scripts.pory"
WalkUp:
# 538 "data/scripts/field_move_scripts.pory"
    walk_up
# 539 "data/scripts/field_move_scripts.pory"
    step_end
# 540 "data/scripts/field_move_scripts.pory"

# 541 "data/scripts/field_move_scripts.pory"
WalkLeft:
# 542 "data/scripts/field_move_scripts.pory"
    walk_left
# 543 "data/scripts/field_move_scripts.pory"
    step_end
# 544 "data/scripts/field_move_scripts.pory"

# 545 "data/scripts/field_move_scripts.pory"
WalkRight:
# 546 "data/scripts/field_move_scripts.pory"
    walk_right
# 547 "data/scripts/field_move_scripts.pory"
    step_end

EventScript_Headbutt_Text_0:
# 3 "data/scripts/field_move_scripts.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_Headbutt_Text_1:
# 9 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_Headbutt_Text_2:
# 45 "data/scripts/field_move_scripts.pory"
	.string "A Berry fell from the tree!$"

EventScript_UseDive_Text_0:
# 265 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.$"

EventScript_UseDive_Text_1:
# 269 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.\nUse the Diving Gear?$"

EventScript_UseDiveUnderwater_Text_0:
# 285 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nYou may be able to surface…$"

EventScript_UseDiveUnderwater_Text_1:
# 289 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\nWould you like to surface?$"
