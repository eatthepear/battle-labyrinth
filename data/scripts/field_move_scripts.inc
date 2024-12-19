EventScript_UseFlash_PBL::
# 2 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseFlash_PBL_Text_0, MSGBOX_DEFAULT
# 3 "data/scripts/field_move_scripts.pory"
	closemessage
# 4 "data/scripts/field_move_scripts.pory"
	animateflash 1
# 5 "data/scripts/field_move_scripts.pory"
	setflashlevel 1
# 6 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseCut_PBL::
# 11 "data/scripts/field_move_scripts.pory"
	lockall
	checkitem ITEM_MACHETE
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseCut_PBL_2
# 17 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseCut_PBL_Text_1, MSGBOX_DEFAULT
# 18 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 19 "data/scripts/field_move_scripts.pory"
	waitstate
# 20 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, EventScript_UseCut_PBL_Movement_0
# 21 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 22 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseCut_PBL_2:
# 13 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseCut_PBL_Text_0, MSGBOX_DEFAULT
# 14 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseRockSmash_PBL::
# 28 "data/scripts/field_move_scripts.pory"
	lockall
	checkitem ITEM_SLEDGEHAMMER
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseRockSmash_PBL_2
# 34 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseRockSmash_PBL_Text_1, MSGBOX_DEFAULT
# 35 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 36 "data/scripts/field_move_scripts.pory"
	waitstate
# 37 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, EventScript_UseRockSmash_PBL_Movement_0
# 38 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 39 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 40 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 41 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_UseRockSmash_PBL_5
# 46 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_UseRockSmash_PBL_8
# 46 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_UseRockSmash_PBL_8
# 50 "data/scripts/field_move_scripts.pory"
	random 100
# 51 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 52 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_UseRockSmash_PBL_14
# 53 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_UseRockSmash_PBL_14
# 54 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_UseRockSmash_PBL_14
# 55 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_UseRockSmash_PBL_14
# 56 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_UseRockSmash_PBL_14
# 57 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_UseRockSmash_PBL_14
# 58 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_UseRockSmash_PBL_14
# 59 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_UseRockSmash_PBL_14
# 60 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_UseRockSmash_PBL_14
# 61 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_UseRockSmash_PBL_14
# 62 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_UseRockSmash_PBL_14
# 63 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_UseRockSmash_PBL_14
# 64 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_UseRockSmash_PBL_14
# 65 "data/scripts/field_move_scripts.pory"
	case 13, EventScript_UseRockSmash_PBL_14
# 66 "data/scripts/field_move_scripts.pory"
	case 14, EventScript_UseRockSmash_PBL_14
# 67 "data/scripts/field_move_scripts.pory"
	case 15, EventScript_UseRockSmash_PBL_14
# 68 "data/scripts/field_move_scripts.pory"
	case 16, EventScript_UseRockSmash_PBL_14
# 69 "data/scripts/field_move_scripts.pory"
	case 17, EventScript_UseRockSmash_PBL_14
# 70 "data/scripts/field_move_scripts.pory"
	case 18, EventScript_UseRockSmash_PBL_14
# 71 "data/scripts/field_move_scripts.pory"
	case 19, EventScript_UseRockSmash_PBL_14
# 72 "data/scripts/field_move_scripts.pory"
	case 20, EventScript_UseRockSmash_PBL_14
# 73 "data/scripts/field_move_scripts.pory"
	case 21, EventScript_UseRockSmash_PBL_14
# 75 "data/scripts/field_move_scripts.pory"
	case 22, EventScript_UseRockSmash_PBL_15
# 76 "data/scripts/field_move_scripts.pory"
	case 23, EventScript_UseRockSmash_PBL_15
# 77 "data/scripts/field_move_scripts.pory"
	case 24, EventScript_UseRockSmash_PBL_15
# 78 "data/scripts/field_move_scripts.pory"
	case 25, EventScript_UseRockSmash_PBL_15
# 79 "data/scripts/field_move_scripts.pory"
	case 26, EventScript_UseRockSmash_PBL_15
# 80 "data/scripts/field_move_scripts.pory"
	case 27, EventScript_UseRockSmash_PBL_15
# 81 "data/scripts/field_move_scripts.pory"
	case 28, EventScript_UseRockSmash_PBL_15
# 82 "data/scripts/field_move_scripts.pory"
	case 29, EventScript_UseRockSmash_PBL_15
# 83 "data/scripts/field_move_scripts.pory"
	case 30, EventScript_UseRockSmash_PBL_15
# 84 "data/scripts/field_move_scripts.pory"
	case 31, EventScript_UseRockSmash_PBL_15
# 85 "data/scripts/field_move_scripts.pory"
	case 32, EventScript_UseRockSmash_PBL_15
# 86 "data/scripts/field_move_scripts.pory"
	case 33, EventScript_UseRockSmash_PBL_15
# 87 "data/scripts/field_move_scripts.pory"
	case 34, EventScript_UseRockSmash_PBL_15
# 88 "data/scripts/field_move_scripts.pory"
	case 35, EventScript_UseRockSmash_PBL_15
# 89 "data/scripts/field_move_scripts.pory"
	case 36, EventScript_UseRockSmash_PBL_15
# 93 "data/scripts/field_move_scripts.pory"
	case 37, EventScript_UseRockSmash_PBL_16
# 94 "data/scripts/field_move_scripts.pory"
	case 38, EventScript_UseRockSmash_PBL_16
# 95 "data/scripts/field_move_scripts.pory"
	case 39, EventScript_UseRockSmash_PBL_16
# 96 "data/scripts/field_move_scripts.pory"
	case 40, EventScript_UseRockSmash_PBL_16
# 97 "data/scripts/field_move_scripts.pory"
	case 41, EventScript_UseRockSmash_PBL_16
# 98 "data/scripts/field_move_scripts.pory"
	case 42, EventScript_UseRockSmash_PBL_16
# 99 "data/scripts/field_move_scripts.pory"
	case 43, EventScript_UseRockSmash_PBL_16
# 100 "data/scripts/field_move_scripts.pory"
	case 44, EventScript_UseRockSmash_PBL_16
# 101 "data/scripts/field_move_scripts.pory"
	case 45, EventScript_UseRockSmash_PBL_16
# 102 "data/scripts/field_move_scripts.pory"
	case 46, EventScript_UseRockSmash_PBL_16
# 106 "data/scripts/field_move_scripts.pory"
	case 47, EventScript_UseRockSmash_PBL_17
# 107 "data/scripts/field_move_scripts.pory"
	case 48, EventScript_UseRockSmash_PBL_17
# 108 "data/scripts/field_move_scripts.pory"
	case 49, EventScript_UseRockSmash_PBL_17
# 109 "data/scripts/field_move_scripts.pory"
	case 50, EventScript_UseRockSmash_PBL_17
# 110 "data/scripts/field_move_scripts.pory"
	case 51, EventScript_UseRockSmash_PBL_17
# 114 "data/scripts/field_move_scripts.pory"
	case 52, EventScript_UseRockSmash_PBL_18
# 116 "data/scripts/field_move_scripts.pory"
	case 53, EventScript_UseRockSmash_PBL_19
# 118 "data/scripts/field_move_scripts.pory"
	case 54, EventScript_UseRockSmash_PBL_20
# 120 "data/scripts/field_move_scripts.pory"
	case 55, EventScript_UseRockSmash_PBL_21
# 122 "data/scripts/field_move_scripts.pory"
	case 56, EventScript_UseRockSmash_PBL_22
# 124 "data/scripts/field_move_scripts.pory"
	case 57, EventScript_UseRockSmash_PBL_23
# 126 "data/scripts/field_move_scripts.pory"
	case 58, EventScript_UseRockSmash_PBL_24
# 128 "data/scripts/field_move_scripts.pory"
	case 59, EventScript_UseRockSmash_PBL_25
# 130 "data/scripts/field_move_scripts.pory"
	case 60, EventScript_UseRockSmash_PBL_26
# 132 "data/scripts/field_move_scripts.pory"
	case 61, EventScript_UseRockSmash_PBL_27
# 134 "data/scripts/field_move_scripts.pory"
	case 62, EventScript_UseRockSmash_PBL_28
# 136 "data/scripts/field_move_scripts.pory"
	case 63, EventScript_UseRockSmash_PBL_29
# 138 "data/scripts/field_move_scripts.pory"
	case 64, EventScript_UseRockSmash_PBL_30
# 140 "data/scripts/field_move_scripts.pory"
	case 65, EventScript_UseRockSmash_PBL_31
# 142 "data/scripts/field_move_scripts.pory"
	case 66, EventScript_UseRockSmash_PBL_32
# 144 "data/scripts/field_move_scripts.pory"
	case 67, EventScript_UseRockSmash_PBL_33
# 146 "data/scripts/field_move_scripts.pory"
	case 68, EventScript_UseRockSmash_PBL_34
# 148 "data/scripts/field_move_scripts.pory"
	case 69, EventScript_UseRockSmash_PBL_35
EventScript_UseRockSmash_PBL_12:
# 151 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseRockSmash_PBL_2:
# 30 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseRockSmash_PBL_Text_0, MSGBOX_DEFAULT
# 31 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseRockSmash_PBL_5:
# 42 "data/scripts/field_move_scripts.pory"
	waitstate
# 43 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseRockSmash_PBL_8:
# 47 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseRockSmash_PBL_14:
# 74 "data/scripts/field_move_scripts.pory"
	finditem ITEM_RED_SHARD, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_15:
# 90 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_UseRockSmash_PBL_36
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_16:
# 103 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_UseRockSmash_PBL_38
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_17:
# 111 "data/scripts/field_move_scripts.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_UseRockSmash_PBL_40
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_18:
# 115 "data/scripts/field_move_scripts.pory"
	finditem ITEM_NORMAL_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_19:
# 117 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIRE_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_20:
# 119 "data/scripts/field_move_scripts.pory"
	finditem ITEM_WATER_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_21:
# 121 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ELECTRIC_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_22:
# 123 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GRASS_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_23:
# 125 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ICE_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_24:
# 127 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FIGHTING_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_25:
# 129 "data/scripts/field_move_scripts.pory"
	finditem ITEM_POISON_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_26:
# 131 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GROUND_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_27:
# 133 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FLYING_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_28:
# 135 "data/scripts/field_move_scripts.pory"
	finditem ITEM_PSYCHIC_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_29:
# 137 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BUG_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_30:
# 139 "data/scripts/field_move_scripts.pory"
	finditem ITEM_ROCK_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_31:
# 141 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GHOST_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_32:
# 143 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DRAGON_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_33:
# 145 "data/scripts/field_move_scripts.pory"
	finditem ITEM_DARK_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_34:
# 147 "data/scripts/field_move_scripts.pory"
	finditem ITEM_STEEL_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_35:
# 149 "data/scripts/field_move_scripts.pory"
	finditem ITEM_FAIRY_GEM, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_36:
# 91 "data/scripts/field_move_scripts.pory"
	finditem ITEM_BLUE_SHARD, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_38:
# 104 "data/scripts/field_move_scripts.pory"
	finditem ITEM_YELLOW_SHARD, 1
	goto EventScript_UseRockSmash_PBL_12

EventScript_UseRockSmash_PBL_40:
# 112 "data/scripts/field_move_scripts.pory"
	finditem ITEM_GREEN_SHARD, 1
	goto EventScript_UseRockSmash_PBL_12


EventScript_UseStrength_PBL::
# 156 "data/scripts/field_move_scripts.pory"
	lockall
# 157 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_UseStrength_PBL_2
	checkitem ITEM_POWER_GLOVE
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseStrength_PBL_5
# 167 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseStrength_PBL_Text_2, MSGBOX_DEFAULT
# 168 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 169 "data/scripts/field_move_scripts.pory"
	waitstate
# 170 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 171 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseStrength_PBL_2:
# 158 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseStrength_PBL_Text_0, MSGBOX_DEFAULT
# 159 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseStrength_PBL_5:
# 163 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseStrength_PBL_Text_1, MSGBOX_DEFAULT
# 164 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseWaterfall_PBL::
# 176 "data/scripts/field_move_scripts.pory"
	lockall
# 177 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseWaterfall_PBL_Text_0, MSGBOX_DEFAULT
# 178 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 179 "data/scripts/field_move_scripts.pory"
	waitstate
# 180 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 181 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_CannotUseWaterfall_PBL::
# 186 "data/scripts/field_move_scripts.pory"
	lockall
# 187 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_CannotUseWaterfall_PBL_Text_0, MSGBOX_DEFAULT
# 188 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_DiveSpot_PBL::
# 193 "data/scripts/field_move_scripts.pory"
	lockall
	checkitem ITEM_DIVING_SUIT
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DiveSpot_PBL_2
# 199 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_DiveSpot_PBL_Text_1, MSGBOX_DEFAULT
# 200 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 201 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_DiveSpot_PBL_2:
# 195 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_DiveSpot_PBL_Text_0, MSGBOX_DEFAULT
# 196 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseDive_PBL::
# 206 "data/scripts/field_move_scripts.pory"
	lockall
# 207 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 208 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseDiveUnderwater_PBL::
# 213 "data/scripts/field_move_scripts.pory"
	lockall
	checkitem ITEM_DIVING_SUIT
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseDiveUnderwater_PBL_2
# 219 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_PBL_Text_1, MSGBOX_DEFAULT
# 220 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 221 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseDiveUnderwater_PBL_2:
# 215 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseDiveUnderwater_PBL_Text_0, MSGBOX_DEFAULT
# 216 "data/scripts/field_move_scripts.pory"
	releaseall
	end


EventScript_UseSurf_PBL::
	checkitem ITEM_SURFBOARD
# 0 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_UseSurf_PBL_2
# 229 "data/scripts/field_move_scripts.pory"
	lockall
# 230 "data/scripts/field_move_scripts.pory"
	msgbox EventScript_UseSurf_PBL_Text_0, MSGBOX_DEFAULT
# 231 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_SURF
# 232 "data/scripts/field_move_scripts.pory"
	releaseall
	end

EventScript_UseSurf_PBL_2:
	end


# 236 "data/scripts/field_move_scripts.pory"

# 237 "data/scripts/field_move_scripts.pory"
@ Interact with cuttable tree
# 238 "data/scripts/field_move_scripts.pory"
EventScript_CutTree::
# 239 "data/scripts/field_move_scripts.pory"
	lockall
# 240 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
# 241 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_CUT
# 242 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
# 243 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 244 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 245 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_CUT
# 246 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToCut, MSGBOX_YESNO
# 247 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
# 248 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 249 "data/scripts/field_move_scripts.pory"
	closemessage
# 250 "data/scripts/field_move_scripts.pory"
EventScript_CutTreeCommon:
# 251 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 252 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
# 253 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 254 "data/scripts/field_move_scripts.pory"
	waitstate
# 255 "data/scripts/field_move_scripts.pory"
EventScript_CutTreeDown:: @ fallthrough
# 256 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 257 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 258 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 259 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 260 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 261 "data/scripts/field_move_scripts.pory"
	releaseall
# 262 "data/scripts/field_move_scripts.pory"
	end
# 263 "data/scripts/field_move_scripts.pory"

# 264 "data/scripts/field_move_scripts.pory"
@ Use cut from party menu
# 265 "data/scripts/field_move_scripts.pory"
EventScript_UseCut::
# 266 "data/scripts/field_move_scripts.pory"
	lockall
# 267 "data/scripts/field_move_scripts.pory"
	goto EventScript_CutTreeCommon
# 268 "data/scripts/field_move_scripts.pory"

# 269 "data/scripts/field_move_scripts.pory"
Movement_CutTreeDown:
# 270 "data/scripts/field_move_scripts.pory"
	cut_tree
# 271 "data/scripts/field_move_scripts.pory"
	step_end
# 272 "data/scripts/field_move_scripts.pory"

# 273 "data/scripts/field_move_scripts.pory"
EventScript_CheckTreeCantCut::
# 274 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantCut, MSGBOX_DEFAULT
# 275 "data/scripts/field_move_scripts.pory"
	releaseall
# 276 "data/scripts/field_move_scripts.pory"
	end
# 277 "data/scripts/field_move_scripts.pory"

# 278 "data/scripts/field_move_scripts.pory"
EventScript_CancelCut::
# 279 "data/scripts/field_move_scripts.pory"
	closemessage
# 280 "data/scripts/field_move_scripts.pory"
	releaseall
# 281 "data/scripts/field_move_scripts.pory"
	end
# 282 "data/scripts/field_move_scripts.pory"

# 283 "data/scripts/field_move_scripts.pory"
Text_WantToCut:
# 284 "data/scripts/field_move_scripts.pory"
	.string "This tree looks like it can be\n"
# 285 "data/scripts/field_move_scripts.pory"
	.string "CUT down!\p"
# 286 "data/scripts/field_move_scripts.pory"
	.string "Would you like to CUT it?$"
# 287 "data/scripts/field_move_scripts.pory"

# 288 "data/scripts/field_move_scripts.pory"
Text_MonUsedFieldMove:
# 289 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
# 290 "data/scripts/field_move_scripts.pory"

# 291 "data/scripts/field_move_scripts.pory"
Text_CantCut:
# 292 "data/scripts/field_move_scripts.pory"
	.string "This tree looks like it can be\n"
# 293 "data/scripts/field_move_scripts.pory"
	.string "CUT down!$"
# 294 "data/scripts/field_move_scripts.pory"

# 295 "data/scripts/field_move_scripts.pory"
@ Use rock smash from party menu
# 296 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash::
# 297 "data/scripts/field_move_scripts.pory"
	lockall
# 298 "data/scripts/field_move_scripts.pory"
	goto EventScript_RockSmashCommon
# 299 "data/scripts/field_move_scripts.pory"

# 300 "data/scripts/field_move_scripts.pory"
@ Interact with smashable rock
# 301 "data/scripts/field_move_scripts.pory"
EventScript_RockSmash::
# 302 "data/scripts/field_move_scripts.pory"
	lockall
# 303 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
# 304 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 305 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 306 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 307 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 308 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 309 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 310 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 311 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 312 "data/scripts/field_move_scripts.pory"
	closemessage
# 313 "data/scripts/field_move_scripts.pory"
EventScript_RockSmashCommon:
# 314 "data/scripts/field_move_scripts.pory"
	@ check if follower should use the field move
# 315 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 316 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
# 317 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 318 "data/scripts/field_move_scripts.pory"
	waitstate
# 319 "data/scripts/field_move_scripts.pory"
EventScript_SmashRock:: @ fallthrough
# 320 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 321 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 322 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 323 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 324 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 325 "data/scripts/field_move_scripts.pory"
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
# 326 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
# 327 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 328 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
# 329 "data/scripts/field_move_scripts.pory"
	waitstate
# 330 "data/scripts/field_move_scripts.pory"
	releaseall
# 331 "data/scripts/field_move_scripts.pory"
	end
# 332 "data/scripts/field_move_scripts.pory"

# 333 "data/scripts/field_move_scripts.pory"
EventScript_FollowerFieldMove:
# 334 "data/scripts/field_move_scripts.pory"
	getdirectiontoface VAR_0x8005, OBJ_EVENT_ID_FOLLOWER, OBJ_EVENT_ID_PLAYER
# 335 "data/scripts/field_move_scripts.pory"
	specialvar VAR_0x8006, GetPlayerFacingDirection
# 336 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_0x8005, DIR_NONE, EventScript_FollowerFieldMoveEnd
# 337 "data/scripts/field_move_scripts.pory"
	@ Swap follower and player
# 338 "data/scripts/field_move_scripts.pory"
	call EventScript_FollowerSwap
# 339 "data/scripts/field_move_scripts.pory"
	@ Face follower in direction and jump
# 340 "data/scripts/field_move_scripts.pory"
	switch VAR_0x8006
# 341 "data/scripts/field_move_scripts.pory"
	case DIR_NORTH, EventScript_FollowerJumpNorth
# 342 "data/scripts/field_move_scripts.pory"
	case DIR_EAST, EventScript_FollowerJumpEast
# 343 "data/scripts/field_move_scripts.pory"
	case DIR_SOUTH, EventScript_FollowerJumpSouth
# 344 "data/scripts/field_move_scripts.pory"
	case DIR_WEST, EventScript_FollowerJumpWest
# 345 "data/scripts/field_move_scripts.pory"
EventScript_FollowerFieldMoveEnd:
# 346 "data/scripts/field_move_scripts.pory"
	return
# 347 "data/scripts/field_move_scripts.pory"

# 348 "data/scripts/field_move_scripts.pory"
EventScript_FollowerSwap:
# 349 "data/scripts/field_move_scripts.pory"
	switch VAR_0x8005
# 350 "data/scripts/field_move_scripts.pory"
	case DIR_NORTH, EventScript_FollowerMoveNorth
# 351 "data/scripts/field_move_scripts.pory"
	case DIR_EAST, EventScript_FollowerMoveEast
# 352 "data/scripts/field_move_scripts.pory"
	case DIR_SOUTH, EventScript_FollowerMoveSouth
# 353 "data/scripts/field_move_scripts.pory"
	case DIR_WEST, EventScript_FollowerMoveWest
# 354 "data/scripts/field_move_scripts.pory"
	return
# 355 "data/scripts/field_move_scripts.pory"

# 356 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveNorth:
# 357 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkUp
# 358 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 359 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 360 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 361 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 362 "data/scripts/field_move_scripts.pory"
	return
# 363 "data/scripts/field_move_scripts.pory"

# 364 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveEast:
# 365 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkRight
# 366 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeft
# 367 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 368 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 369 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 370 "data/scripts/field_move_scripts.pory"
	return
# 371 "data/scripts/field_move_scripts.pory"

# 372 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveSouth:
# 373 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkDown
# 374 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkUp
# 375 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 376 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 377 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 378 "data/scripts/field_move_scripts.pory"
	return
# 379 "data/scripts/field_move_scripts.pory"

# 380 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveWest:
# 381 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_WalkLeft
# 382 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkRight
# 383 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 384 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 385 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 386 "data/scripts/field_move_scripts.pory"
	return
# 387 "data/scripts/field_move_scripts.pory"

# 388 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpNorth:
# 389 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpUp
# 390 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 391 "data/scripts/field_move_scripts.pory"
	return
# 392 "data/scripts/field_move_scripts.pory"

# 393 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpEast:
# 394 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpRight
# 395 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 396 "data/scripts/field_move_scripts.pory"
	return
# 397 "data/scripts/field_move_scripts.pory"

# 398 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpSouth:
# 399 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpDown
# 400 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 401 "data/scripts/field_move_scripts.pory"
	return
# 402 "data/scripts/field_move_scripts.pory"

# 403 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpWest:
# 404 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpLeft
# 405 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 406 "data/scripts/field_move_scripts.pory"
	return
# 407 "data/scripts/field_move_scripts.pory"

# 408 "data/scripts/field_move_scripts.pory"
EventScript_EndSmash::
# 409 "data/scripts/field_move_scripts.pory"
	releaseall
# 410 "data/scripts/field_move_scripts.pory"
	end
# 411 "data/scripts/field_move_scripts.pory"

# 412 "data/scripts/field_move_scripts.pory"
Movement_WalkUp:
# 413 "data/scripts/field_move_scripts.pory"
	walk_up
# 414 "data/scripts/field_move_scripts.pory"
	step_end
# 415 "data/scripts/field_move_scripts.pory"

# 416 "data/scripts/field_move_scripts.pory"
Movement_JumpUp:
# 417 "data/scripts/field_move_scripts.pory"
	jump_in_place_up
# 418 "data/scripts/field_move_scripts.pory"
	step_end
# 419 "data/scripts/field_move_scripts.pory"

# 420 "data/scripts/field_move_scripts.pory"
Movement_WalkRight:
# 421 "data/scripts/field_move_scripts.pory"
	walk_right
# 422 "data/scripts/field_move_scripts.pory"
	step_end
# 423 "data/scripts/field_move_scripts.pory"

# 424 "data/scripts/field_move_scripts.pory"
Movement_JumpRight:
# 425 "data/scripts/field_move_scripts.pory"
	jump_in_place_right
# 426 "data/scripts/field_move_scripts.pory"
	step_end
# 427 "data/scripts/field_move_scripts.pory"

# 428 "data/scripts/field_move_scripts.pory"
Movement_WalkDown:
# 429 "data/scripts/field_move_scripts.pory"
	walk_down
# 430 "data/scripts/field_move_scripts.pory"
	step_end
# 431 "data/scripts/field_move_scripts.pory"

# 432 "data/scripts/field_move_scripts.pory"
Movement_JumpDown:
# 433 "data/scripts/field_move_scripts.pory"
	jump_in_place_down
# 434 "data/scripts/field_move_scripts.pory"
	step_end
# 435 "data/scripts/field_move_scripts.pory"

# 436 "data/scripts/field_move_scripts.pory"
Movement_WalkLeft:
# 437 "data/scripts/field_move_scripts.pory"
	walk_left
# 438 "data/scripts/field_move_scripts.pory"
	step_end
# 439 "data/scripts/field_move_scripts.pory"

# 440 "data/scripts/field_move_scripts.pory"
Movement_JumpLeft:
# 441 "data/scripts/field_move_scripts.pory"
	jump_in_place_left
# 442 "data/scripts/field_move_scripts.pory"
	step_end
# 443 "data/scripts/field_move_scripts.pory"

# 444 "data/scripts/field_move_scripts.pory"
Movement_SmashRock:
# 445 "data/scripts/field_move_scripts.pory"
	rock_smash_break
# 446 "data/scripts/field_move_scripts.pory"
	step_end
# 447 "data/scripts/field_move_scripts.pory"

# 448 "data/scripts/field_move_scripts.pory"
EventScript_CantSmashRock::
# 449 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSmash, MSGBOX_DEFAULT
# 450 "data/scripts/field_move_scripts.pory"
	releaseall
# 451 "data/scripts/field_move_scripts.pory"
	end
# 452 "data/scripts/field_move_scripts.pory"

# 453 "data/scripts/field_move_scripts.pory"
EventScript_CancelSmash::
# 454 "data/scripts/field_move_scripts.pory"
	closemessage
# 455 "data/scripts/field_move_scripts.pory"
	releaseall
# 456 "data/scripts/field_move_scripts.pory"
	end
# 457 "data/scripts/field_move_scripts.pory"

# 458 "data/scripts/field_move_scripts.pory"
Text_WantToSmash:
# 459 "data/scripts/field_move_scripts.pory"
	.string "This rock appears to be breakable.\n"
# 460 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use ROCK SMASH?$"
# 461 "data/scripts/field_move_scripts.pory"

# 462 "data/scripts/field_move_scripts.pory"
Text_CantSmash:
# 463 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock, but a POKéMON\n"
# 464 "data/scripts/field_move_scripts.pory"
	.string "may be able to smash it.$"
# 465 "data/scripts/field_move_scripts.pory"

# 466 "data/scripts/field_move_scripts.pory"
EventScript_StrengthBoulder::
# 467 "data/scripts/field_move_scripts.pory"
	lockall
# 468 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
# 469 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
# 470 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_STRENGTH
# 471 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
# 472 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 473 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToStrength, MSGBOX_YESNO
# 474 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
# 475 "data/scripts/field_move_scripts.pory"
	closemessage
# 476 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 477 "data/scripts/field_move_scripts.pory"
	waitstate
# 478 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 479 "data/scripts/field_move_scripts.pory"
	end
# 480 "data/scripts/field_move_scripts.pory"

# 481 "data/scripts/field_move_scripts.pory"
EventScript_UseStrength::
# 482 "data/scripts/field_move_scripts.pory"
	lockall
# 483 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 484 "data/scripts/field_move_scripts.pory"
	waitstate
# 485 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 486 "data/scripts/field_move_scripts.pory"
	end
# 487 "data/scripts/field_move_scripts.pory"

# 488 "data/scripts/field_move_scripts.pory"
EventScript_ActivateStrength::
# 489 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 490 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
# 491 "data/scripts/field_move_scripts.pory"
	releaseall
# 492 "data/scripts/field_move_scripts.pory"
	end
# 493 "data/scripts/field_move_scripts.pory"

# 494 "data/scripts/field_move_scripts.pory"
EventScript_CantStrength::
# 495 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantStrength, MSGBOX_DEFAULT
# 496 "data/scripts/field_move_scripts.pory"
	releaseall
# 497 "data/scripts/field_move_scripts.pory"
	end
# 498 "data/scripts/field_move_scripts.pory"

# 499 "data/scripts/field_move_scripts.pory"
EventScript_CheckActivatedBoulder::
# 500 "data/scripts/field_move_scripts.pory"
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
# 501 "data/scripts/field_move_scripts.pory"
	releaseall
# 502 "data/scripts/field_move_scripts.pory"
	end
# 503 "data/scripts/field_move_scripts.pory"

# 504 "data/scripts/field_move_scripts.pory"
EventScript_CancelStrength::
# 505 "data/scripts/field_move_scripts.pory"
	closemessage
# 506 "data/scripts/field_move_scripts.pory"
	releaseall
# 507 "data/scripts/field_move_scripts.pory"
	end
# 508 "data/scripts/field_move_scripts.pory"

# 509 "data/scripts/field_move_scripts.pory"
Text_WantToStrength:
# 510 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a POKéMON\n"
# 511 "data/scripts/field_move_scripts.pory"
	.string "may be able to push it aside.\p"
# 512 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use STRENGTH?$"
# 513 "data/scripts/field_move_scripts.pory"

# 514 "data/scripts/field_move_scripts.pory"
Text_MonUsedStrength:
# 515 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used STRENGTH!\p"
# 516 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
# 517 "data/scripts/field_move_scripts.pory"
	.string "possible to move boulders around!$"
# 518 "data/scripts/field_move_scripts.pory"

# 519 "data/scripts/field_move_scripts.pory"
Text_CantStrength:
# 520 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but a POKéMON\n"
# 521 "data/scripts/field_move_scripts.pory"
	.string "may be able to push it aside.$"
# 522 "data/scripts/field_move_scripts.pory"

# 523 "data/scripts/field_move_scripts.pory"
Text_StrengthActivated:
# 524 "data/scripts/field_move_scripts.pory"
	.string "STRENGTH made it possible to move\n"
# 525 "data/scripts/field_move_scripts.pory"
	.string "boulders around.$"
# 526 "data/scripts/field_move_scripts.pory"

# 527 "data/scripts/field_move_scripts.pory"
EventScript_UseWaterfall::
# 528 "data/scripts/field_move_scripts.pory"
	lockall
# 529 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_WATERFALL
# 530 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
# 531 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 532 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 533 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
# 534 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 535 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
# 536 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 537 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndWaterfall
# 538 "data/scripts/field_move_scripts.pory"

# 539 "data/scripts/field_move_scripts.pory"
EventScript_CannotUseWaterfall::
# 540 "data/scripts/field_move_scripts.pory"
	lockall
# 541 "data/scripts/field_move_scripts.pory"

# 542 "data/scripts/field_move_scripts.pory"
EventScript_CantWaterfall::
# 543 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT
# 544 "data/scripts/field_move_scripts.pory"

# 545 "data/scripts/field_move_scripts.pory"
EventScript_EndWaterfall::
# 546 "data/scripts/field_move_scripts.pory"
	releaseall
# 547 "data/scripts/field_move_scripts.pory"
	end
# 548 "data/scripts/field_move_scripts.pory"

# 549 "data/scripts/field_move_scripts.pory"
Text_CantWaterfall:
# 550 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with\n"
# 551 "data/scripts/field_move_scripts.pory"
	.string "a mighty roar.$"
# 552 "data/scripts/field_move_scripts.pory"

# 553 "data/scripts/field_move_scripts.pory"
Text_WantToWaterfall:
# 554 "data/scripts/field_move_scripts.pory"
	.string "It's a large waterfall.\n"
# 555 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use WATERFALL?$"
# 556 "data/scripts/field_move_scripts.pory"

# 557 "data/scripts/field_move_scripts.pory"
Text_MonUsedWaterfall:
# 558 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used WATERFALL.$"
# 559 "data/scripts/field_move_scripts.pory"

# 560 "data/scripts/field_move_scripts.pory"
EventScript_UseDive::
# 561 "data/scripts/field_move_scripts.pory"
	lockall
# 562 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_DIVE
# 563 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
# 564 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 565 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 566 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 567 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToDive, MSGBOX_YESNO
# 568 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
# 569 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
# 570 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 571 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndDive
# 572 "data/scripts/field_move_scripts.pory"
	end
# 573 "data/scripts/field_move_scripts.pory"

# 574 "data/scripts/field_move_scripts.pory"
EventScript_CantDive::
# 575 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantDive, MSGBOX_DEFAULT
# 576 "data/scripts/field_move_scripts.pory"
	releaseall
# 577 "data/scripts/field_move_scripts.pory"
	end
# 578 "data/scripts/field_move_scripts.pory"

# 579 "data/scripts/field_move_scripts.pory"
EventScript_EndDive::
# 580 "data/scripts/field_move_scripts.pory"
	releaseall
# 581 "data/scripts/field_move_scripts.pory"
	end
# 582 "data/scripts/field_move_scripts.pory"

# 583 "data/scripts/field_move_scripts.pory"
EventScript_UseDiveUnderwater::
# 584 "data/scripts/field_move_scripts.pory"
	lockall
# 585 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_DIVE
# 586 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
# 587 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 588 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 589 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 590 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSurface, MSGBOX_YESNO
# 591 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
# 592 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
# 593 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 594 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSurface
# 595 "data/scripts/field_move_scripts.pory"
	end
# 596 "data/scripts/field_move_scripts.pory"

# 597 "data/scripts/field_move_scripts.pory"
EventScript_CantSurface::
# 598 "data/scripts/field_move_scripts.pory"
	lockall
# 599 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSurface, MSGBOX_DEFAULT
# 600 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSurface
# 601 "data/scripts/field_move_scripts.pory"
	end
# 602 "data/scripts/field_move_scripts.pory"

# 603 "data/scripts/field_move_scripts.pory"
EventScript_EndSurface::
# 604 "data/scripts/field_move_scripts.pory"
	releaseall
# 605 "data/scripts/field_move_scripts.pory"
	end
# 606 "data/scripts/field_move_scripts.pory"

# 607 "data/scripts/field_move_scripts.pory"
EventScript_DigCommon:
# 608 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 609 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
# 610 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIG
# 611 "data/scripts/field_move_scripts.pory"
	waitstate
# 612 "data/scripts/field_move_scripts.pory"
EventScript_DigSealedChamber:: @ fallthrough
# 613 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 614 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 615 "data/scripts/field_move_scripts.pory"
	callnative DoBrailleDigEffect
# 616 "data/scripts/field_move_scripts.pory"
	releaseall
# 617 "data/scripts/field_move_scripts.pory"
	end
# 618 "data/scripts/field_move_scripts.pory"

# 619 "data/scripts/field_move_scripts.pory"
@ Use Dig from party menu
# 620 "data/scripts/field_move_scripts.pory"
EventScript_UseDig::
# 621 "data/scripts/field_move_scripts.pory"
	lockall
# 622 "data/scripts/field_move_scripts.pory"
	goto EventScript_DigCommon
# 623 "data/scripts/field_move_scripts.pory"

# 624 "data/scripts/field_move_scripts.pory"

# 625 "data/scripts/field_move_scripts.pory"
EventScript_CutGrassCommon:
# 626 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 627 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
# 628 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
# 629 "data/scripts/field_move_scripts.pory"
	waitstate
# 630 "data/scripts/field_move_scripts.pory"

# 631 "data/scripts/field_move_scripts.pory"
@ Use Cut grass from party menu
# 632 "data/scripts/field_move_scripts.pory"
EventScript_UseCutGrass::
# 633 "data/scripts/field_move_scripts.pory"
	lockall
# 634 "data/scripts/field_move_scripts.pory"
	goto EventScript_CutGrassCommon
# 635 "data/scripts/field_move_scripts.pory"

# 636 "data/scripts/field_move_scripts.pory"
Text_CantDive:
# 637 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here. A POKéMON\n"
# 638 "data/scripts/field_move_scripts.pory"
	.string "may be able to go underwater.$"
# 639 "data/scripts/field_move_scripts.pory"

# 640 "data/scripts/field_move_scripts.pory"
Text_WantToDive:
# 641 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.\n"
# 642 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use DIVE?$"
# 643 "data/scripts/field_move_scripts.pory"

# 644 "data/scripts/field_move_scripts.pory"
Text_MonUsedDive:
# 645 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} used DIVE.$"
# 646 "data/scripts/field_move_scripts.pory"

# 647 "data/scripts/field_move_scripts.pory"
Text_CantSurface:
# 648 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\n"
# 649 "data/scripts/field_move_scripts.pory"
	.string "A POKéMON may be able to surface.$"
# 650 "data/scripts/field_move_scripts.pory"

# 651 "data/scripts/field_move_scripts.pory"
Text_WantToSurface:
# 652 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.\n"
# 653 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use DIVE?$"
# 654 "data/scripts/field_move_scripts.pory"

# 655 "data/scripts/field_move_scripts.pory"
EventScript_FailSweetScent::
# 656 "data/scripts/field_move_scripts.pory"
	msgbox Text_FailSweetScent, MSGBOX_SIGN
# 657 "data/scripts/field_move_scripts.pory"
	end
# 658 "data/scripts/field_move_scripts.pory"

# 659 "data/scripts/field_move_scripts.pory"
Text_FailSweetScent:
# 660 "data/scripts/field_move_scripts.pory"
	.string "Looks like there's nothing here…$"

# 20 "data/scripts/field_move_scripts.pory"
EventScript_UseCut_PBL_Movement_0:
# 20 "data/scripts/field_move_scripts.pory"
	cut_tree
	step_end

# 37 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash_PBL_Movement_0:
# 37 "data/scripts/field_move_scripts.pory"
	rock_smash_break
	step_end

EventScript_UseFlash_PBL_Text_0:
# 2 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} used the Flashlight!$"

EventScript_UseCut_PBL_Text_0:
# 13 "data/scripts/field_move_scripts.pory"
	.string "This shrub is blocking the way.$"

EventScript_UseCut_PBL_Text_1:
# 17 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} used the Machete!$"

EventScript_UseRockSmash_PBL_Text_0:
# 30 "data/scripts/field_move_scripts.pory"
	.string "It's a rugged rock.$"

EventScript_UseRockSmash_PBL_Text_1:
# 34 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} used the Sledgehammer!$"

EventScript_UseStrength_PBL_Text_0:
# 158 "data/scripts/field_move_scripts.pory"
	.string "It's now possible to move boulders\n"
	.string "around.$"

EventScript_UseStrength_PBL_Text_1:
# 163 "data/scripts/field_move_scripts.pory"
	.string "It's a big boulder, but it's too heavy to\n"
	.string "push it aside.$"

EventScript_UseStrength_PBL_Text_2:
# 167 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} used the Power Glove!$"

EventScript_UseWaterfall_PBL_Text_0:
# 177 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} climbed the watefall!$"

EventScript_CannotUseWaterfall_PBL_Text_0:
# 187 "data/scripts/field_move_scripts.pory"
	.string "A wall of water is crashing down with a\n"
	.string "mighty roar.$"

EventScript_DiveSpot_PBL_Text_0:
# 195 "data/scripts/field_move_scripts.pory"
	.string "The sea is deep here.$"

EventScript_DiveSpot_PBL_Text_1:
# 199 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} put on the Diving Suit!$"

EventScript_UseDiveUnderwater_PBL_Text_0:
# 215 "data/scripts/field_move_scripts.pory"
	.string "Light is filtering down from above.$"

EventScript_UseDiveUnderwater_PBL_Text_1:
# 219 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} swam to the surface!$"

EventScript_UseSurf_PBL_Text_0:
# 230 "data/scripts/field_move_scripts.pory"
	.string "{PLAYER} used the Surfboard!$"
