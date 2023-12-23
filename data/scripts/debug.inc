# 1 "data/scripts/debug.pory"

# 2 "data/scripts/debug.pory"
.if DEBUG_OVERWORLD_MENU == TRUE
# 3 "data/scripts/debug.pory"
Debug_MessageEnd:
# 4 "data/scripts/debug.pory"
	waitmessage
# 5 "data/scripts/debug.pory"
	waitbuttonpress
# 6 "data/scripts/debug.pory"
	releaseall
# 7 "data/scripts/debug.pory"
	end
# 8 "data/scripts/debug.pory"

# 9 "data/scripts/debug.pory"
Debug_ShowFieldMessageStringVar4::
# 10 "data/scripts/debug.pory"
	special ShowFieldMessageStringVar4
# 11 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 12 "data/scripts/debug.pory"

# 13 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage::
# 14 "data/scripts/debug.pory"
	message Debug_FlagsNotSetOverworldConfigMessage_Text
# 15 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 16 "data/scripts/debug.pory"

# 17 "data/scripts/debug.pory"
Debug_FlagsNotSetOverworldConfigMessage_Text:
# 18 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 19 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 20 "data/scripts/debug.pory"
	.string "'include/config/overworld.h'!$"
# 21 "data/scripts/debug.pory"

# 22 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage::
# 23 "data/scripts/debug.pory"
	message Debug_FlagsNotSetBattleConfigMessage_Text
# 24 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 25 "data/scripts/debug.pory"

# 26 "data/scripts/debug.pory"
Debug_FlagsNotSetBattleConfigMessage_Text:
# 27 "data/scripts/debug.pory"
	.string "Feature unavailable!\n"
# 28 "data/scripts/debug.pory"
	.string "Please define a usable flag in:\l"
# 29 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"
# 30 "data/scripts/debug.pory"

# 31 "data/scripts/debug.pory"
Debug_BoxFilledMessage::
# 32 "data/scripts/debug.pory"
	message Debug_BoxFilledMessage_Text
# 33 "data/scripts/debug.pory"
	goto Debug_MessageEnd
# 34 "data/scripts/debug.pory"

# 35 "data/scripts/debug.pory"
Debug_BoxFilledMessage_Text:
# 36 "data/scripts/debug.pory"
	.string "Storage boxes filled!$"
# 37 "data/scripts/debug.pory"

# 38 "data/scripts/debug.pory"
Debug_EventScript_Script_1::
# 39 "data/scripts/debug.pory"
	end
# 40 "data/scripts/debug.pory"

# 41 "data/scripts/debug.pory"
Debug_EventScript_Script_2::
# 42 "data/scripts/debug.pory"
	end
# 43 "data/scripts/debug.pory"

# 44 "data/scripts/debug.pory"
Debug_EventScript_Script_3::
# 45 "data/scripts/debug.pory"
	end
# 46 "data/scripts/debug.pory"

# 47 "data/scripts/debug.pory"
Debug_EventScript_Script_4::
# 48 "data/scripts/debug.pory"
	end
# 49 "data/scripts/debug.pory"

# 50 "data/scripts/debug.pory"
Debug_EventScript_Script_5::
# 51 "data/scripts/debug.pory"
	end
# 52 "data/scripts/debug.pory"

# 53 "data/scripts/debug.pory"
Debug_EventScript_Script_6::
# 54 "data/scripts/debug.pory"
	end
# 55 "data/scripts/debug.pory"

# 56 "data/scripts/debug.pory"
Debug_EventScript_Script_7::
# 57 "data/scripts/debug.pory"
	end
# 58 "data/scripts/debug.pory"

# 59 "data/scripts/debug.pory"
Debug_EventScript_Script_8::
# 60 "data/scripts/debug.pory"
	end
# 61 "data/scripts/debug.pory"

# 62 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 63 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 64 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 65 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 66 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 67 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 68 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 69 "data/scripts/debug.pory"
	release
# 70 "data/scripts/debug.pory"
	end
# 71 "data/scripts/debug.pory"

# 72 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 73 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 74 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 75 "data/scripts/debug.pory"

# 76 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 77 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 78 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 79 "data/scripts/debug.pory"

# 80 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 81 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 82 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 83 "data/scripts/debug.pory"

# 84 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 85 "data/scripts/debug.pory"
	callnative CheckROMSize
# 86 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 87 "data/scripts/debug.pory"
	release
# 88 "data/scripts/debug.pory"
	end
# 89 "data/scripts/debug.pory"

# 90 "data/scripts/debug.pory"
Debug_ROMSize::
# 91 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 92 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 93 "data/scripts/debug.pory"

# 94 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 95 "data/scripts/debug.pory"
	lockall
# 96 "data/scripts/debug.pory"
	getpartysize
# 97 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_HatchAnEgg_NoPokemon
# 98 "data/scripts/debug.pory"
	special ChoosePartyMon
# 99 "data/scripts/debug.pory"
	waitstate
# 100 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 101 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 102 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 103 "data/scripts/debug.pory"
	special EggHatch
# 104 "data/scripts/debug.pory"
	waitstate
# 105 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 106 "data/scripts/debug.pory"
	releaseall
# 107 "data/scripts/debug.pory"
	end
# 108 "data/scripts/debug.pory"

# 109 "data/scripts/debug.pory"
Debug_HatchAnEgg_NoPokemon::
# 110 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_EmptyParty, MSGBOX_DEFAULT
# 111 "data/scripts/debug.pory"
	releaseall
# 112 "data/scripts/debug.pory"
	end
# 113 "data/scripts/debug.pory"

# 114 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 115 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 116 "data/scripts/debug.pory"
	releaseall
# 117 "data/scripts/debug.pory"
	end
# 118 "data/scripts/debug.pory"

# 119 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_EmptyParty::
# 120 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 121 "data/scripts/debug.pory"

# 122 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 123 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 124 "data/scripts/debug.pory"

# 125 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 126 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 127 "data/scripts/debug.pory"
	releaseall
# 128 "data/scripts/debug.pory"
	end
# 129 "data/scripts/debug.pory"

# 130 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 131 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 132 "data/scripts/debug.pory"
	releaseall
# 133 "data/scripts/debug.pory"
	end
# 134 "data/scripts/debug.pory"

# 135 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 136 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 137 "data/scripts/debug.pory"
	releaseall
# 138 "data/scripts/debug.pory"
	end
# 139 "data/scripts/debug.pory"

# 140 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 141 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 142 "data/scripts/debug.pory"

# 143 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 144 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 145 "data/scripts/debug.pory"

# 146 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 147 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 148 "data/scripts/debug.pory"

# 149 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 150 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 151 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 152 "data/scripts/debug.pory"
	release
# 153 "data/scripts/debug.pory"
	end
# 154 "data/scripts/debug.pory"

# 155 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 156 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 157 "data/scripts/debug.pory"

# 158 "data/scripts/debug.pory"
.endif
# 159 "data/scripts/debug.pory"

# 160 "data/scripts/debug.pory"
Debug_FlagsAndVarNotSetBattleConfigMessage::
# 161 "data/scripts/debug.pory"
	lockall
# 162 "data/scripts/debug.pory"
	message Debug_FlagsAndVarNotSetBattleConfigMessage_Text
# 163 "data/scripts/debug.pory"
	waitmessage
# 164 "data/scripts/debug.pory"
	waitbuttonpress
# 165 "data/scripts/debug.pory"
	releaseall
# 166 "data/scripts/debug.pory"
	end
# 167 "data/scripts/debug.pory"

# 168 "data/scripts/debug.pory"
Debug_FlagsAndVarNotSetBattleConfigMessage_Text:
# 169 "data/scripts/debug.pory"
	.string "Feature unavailable! Please define a\n"
# 170 "data/scripts/debug.pory"
	.string "usable flag and a usable var in:\l"
# 171 "data/scripts/debug.pory"
	.string "'include/config/battle.h'!$"

Debug_CheatStart::
# 176 "data/scripts/debug.pory"
	lockall
# 177 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 178 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 179 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 180 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 181 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 182 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 235 "data/scripts/debug.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 236 "data/scripts/debug.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 237 "data/scripts/debug.pory"
	random 20
# 238 "data/scripts/debug.pory"
	switch VAR_RESULT
# 239 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_3
# 241 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_4
# 243 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_5
# 245 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_6
# 247 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_7
# 249 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_8
# 251 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_9
# 253 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_10
# 255 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_11
# 257 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_12
# 259 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_13
# 261 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_14
# 263 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_15
# 265 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_16
# 267 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_17
# 269 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_18
# 271 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_19
# 273 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_20
# 275 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_21
# 277 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_22
Debug_CheatStart_1:
# 280 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 4, ITEM_NONE
# 281 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 282 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 283 "data/scripts/debug.pory"
	random 20
# 284 "data/scripts/debug.pory"
	switch VAR_RESULT
# 285 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_25
# 287 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_26
# 289 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_27
# 291 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_28
# 293 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_29
# 295 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_30
# 297 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_31
# 299 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_32
# 301 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_33
# 303 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_34
# 305 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_35
# 307 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_36
# 309 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_37
# 311 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_38
# 313 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_39
# 315 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_40
# 317 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_41
# 319 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_42
# 321 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_43
# 323 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_44
Debug_CheatStart_23:
# 326 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 4, ITEM_NONE
# 327 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 328 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 329 "data/scripts/debug.pory"
	random 20
# 330 "data/scripts/debug.pory"
	switch VAR_RESULT
# 331 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_47
# 333 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_48
# 335 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_49
# 337 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_50
# 339 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_51
# 341 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_52
# 343 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_53
# 345 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_54
# 347 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_55
# 349 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_56
# 351 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_57
# 353 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_58
# 355 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_59
# 357 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_60
# 359 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_61
# 361 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_62
# 363 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_63
# 365 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_64
# 367 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_65
# 369 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_66
Debug_CheatStart_45:
# 372 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 6, ITEM_NONE
# 373 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 374 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 375 "data/scripts/debug.pory"
	msgbox Debug_CheatStart_Text_0, MSGBOX_YESNO
# 376 "data/scripts/debug.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_CheatStart_68
# 389 "data/scripts/debug.pory"
	random 20
# 390 "data/scripts/debug.pory"
	switch VAR_RESULT
# 391 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_81
# 393 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_82
# 395 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_83
# 397 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_84
# 399 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_85
# 401 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_86
# 403 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_87
# 405 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_88
# 407 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_89
# 409 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_90
# 411 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_91
# 413 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_92
# 415 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_93
# 417 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_94
# 419 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_95
# 421 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_96
# 423 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_97
# 425 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_98
# 427 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_99
# 429 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_100
Debug_CheatStart_67:
# 433 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 8, ITEM_NONE
# 434 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 435 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 436 "data/scripts/debug.pory"
	msgbox Debug_CheatStart_Text_1, MSGBOX_YESNO
# 437 "data/scripts/debug.pory"
	compare VAR_RESULT, YES
	goto_if_eq Debug_CheatStart_72
# 452 "data/scripts/debug.pory"
	random 20
# 453 "data/scripts/debug.pory"
	switch VAR_RESULT
# 454 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_118
# 456 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_119
# 458 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_120
# 460 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_121
# 462 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_122
# 464 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_123
# 466 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_124
# 468 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_125
# 470 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_126
# 472 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_127
# 474 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_128
# 476 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_129
# 478 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_130
# 480 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_131
# 482 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_132
# 484 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_133
# 486 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_134
# 488 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_135
# 490 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_136
# 492 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_137
Debug_CheatStart_116:
# 495 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 10, ITEM_NONE
Debug_CheatStart_71:
# 497 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 498 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 499 "data/scripts/debug.pory"
	msgbox Debug_CheatStart_Text_2, MSGBOX_DEFAULT
# 500 "data/scripts/debug.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_Text_3, Debug_CheatStart_Text_4, Debug_CheatStart_Text_5, Debug_CheatStart_Text_6, Debug_CheatStart_Text_7, Debug_CheatStart_Text_8, Debug_CheatStart_Text_9, Debug_CheatStart_Text_10
# 501 "data/scripts/debug.pory"
	switch VAR_RESULT
# 502 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_103
# 504 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_104
# 506 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_105
# 508 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_106
# 510 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_107
# 512 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_108
# 514 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_109
Debug_CheatStart_101:
# 517 "data/scripts/debug.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 518 "data/scripts/debug.pory"
	random 18
# 519 "data/scripts/debug.pory"
	switch VAR_RESULT
# 520 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_140
# 522 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_141
# 524 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_142
# 526 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_143
# 528 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_144
# 530 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_145
# 532 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_146
# 534 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_147
# 536 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_148
# 538 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_149
# 540 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_150
# 542 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_151
# 544 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_152
# 546 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_153
# 548 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_154
# 550 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_155
# 552 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_156
# 554 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_157
Debug_CheatStart_138:
# 557 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 12, ITEM_NONE
# 558 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 559 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 560 "data/scripts/debug.pory"
	setvar VAR_ZONE, 5
# 561 "data/scripts/debug.pory"
	additem ITEM_REPEL
# 562 "data/scripts/debug.pory"
	setflag FLAG_TIM_INTRO
# 563 "data/scripts/debug.pory"
	additem ITEM_EXP_SHARE
# 564 "data/scripts/debug.pory"
	additem ITEM_SILK_SCARF
# 565 "data/scripts/debug.pory"
	additem ITEM_GOOD_ROD
# 566 "data/scripts/debug.pory"
	additem ITEM_HEAL_BALL, 7
# 567 "data/scripts/debug.pory"
	removeitem ITEM_POKE_BALL, 10
# 568 "data/scripts/debug.pory"
	removemoney 1000
# 569 "data/scripts/debug.pory"
	additem ITEM_TM02
# 570 "data/scripts/debug.pory"
	additem ITEM_BURN_HEAL
# 571 "data/scripts/debug.pory"
	additem ITEM_AWAKENING
# 572 "data/scripts/debug.pory"
	additem ITEM_MUSCLE_BAND
# 573 "data/scripts/debug.pory"
	additem ITEM_WISE_GLASSES
# 574 "data/scripts/debug.pory"
	additem ITEM_SUPER_POTION, 2
# 575 "data/scripts/debug.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 576 "data/scripts/debug.pory"
	additem ITEM_ANTIDOTE, 2
# 577 "data/scripts/debug.pory"
	additem ITEM_TM03
# 578 "data/scripts/debug.pory"
	additem ITEM_TM04
# 579 "data/scripts/debug.pory"
	additem ITEM_QUICK_BALL
# 580 "data/scripts/debug.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
# 581 "data/scripts/debug.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 582 "data/scripts/debug.pory"
	setflag FLAG_JOY_INTRO
# 583 "data/scripts/debug.pory"
	setflag FLAG_MAX_INTRO
# 584 "data/scripts/debug.pory"
	setflag FLAG_TIM_INTRO
# 585 "data/scripts/debug.pory"
	setflag FLAG_VARRICK_INTRO
# 586 "data/scripts/debug.pory"
	setflag FLAG_LELOUCH_INTRO
# 587 "data/scripts/debug.pory"
	setvar VAR_ZONE_0_STATE, 3
# 588 "data/scripts/debug.pory"
	additem ITEM_TM21
# 589 "data/scripts/debug.pory"
	callnative DisableBattleAnimationSetting
# 590 "data/scripts/debug.pory"
	warp MAP_ZONE5SANCTUARY, 255, 22, 7
# 591 "data/scripts/debug.pory"
	waitstate
# 592 "data/scripts/debug.pory"
	release
	end

Debug_CheatStart_3:
# 240 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Debug_CheatStart_1

Debug_CheatStart_4:
# 242 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_AZURILL
	goto Debug_CheatStart_1

Debug_CheatStart_5:
# 244 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_1

Debug_CheatStart_6:
# 246 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BIDOOF
	goto Debug_CheatStart_1

Debug_CheatStart_7:
# 248 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_8:
# 250 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_9:
# 252 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_1

Debug_CheatStart_10:
# 254 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUNEARY
	goto Debug_CheatStart_1

Debug_CheatStart_11:
# 256 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_12:
# 258 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_FLETCHLING
	goto Debug_CheatStart_1

Debug_CheatStart_13:
# 260 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_14:
# 262 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_15:
# 264 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_1

Debug_CheatStart_16:
# 266 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PIDGEY
	goto Debug_CheatStart_1

Debug_CheatStart_17:
# 268 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_18:
# 270 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_19:
# 272 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_1

Debug_CheatStart_20:
# 274 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SHINX
	goto Debug_CheatStart_1

Debug_CheatStart_21:
# 276 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ZIGZAGOON_GALARIAN
	goto Debug_CheatStart_1

Debug_CheatStart_22:
# 278 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ZIGZAGOON_GALARIAN
	goto Debug_CheatStart_1

Debug_CheatStart_25:
# 286 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_23

Debug_CheatStart_26:
# 288 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_23

Debug_CheatStart_27:
# 290 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_23

Debug_CheatStart_28:
# 292 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PHANPY
	goto Debug_CheatStart_23

Debug_CheatStart_29:
# 294 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_23

Debug_CheatStart_30:
# 296 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_POOCHYENA
	goto Debug_CheatStart_23

Debug_CheatStart_31:
# 298 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_23

Debug_CheatStart_32:
# 300 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_23

Debug_CheatStart_33:
# 302 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_23

Debug_CheatStart_34:
# 304 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SENTRET
	goto Debug_CheatStart_23

Debug_CheatStart_35:
# 306 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SPEAROW
	goto Debug_CheatStart_23

Debug_CheatStart_36:
# 308 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SPEAROW
	goto Debug_CheatStart_23

Debug_CheatStart_37:
# 310 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_TEDDIURSA
	goto Debug_CheatStart_23

Debug_CheatStart_38:
# 312 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_TEDDIURSA
	goto Debug_CheatStart_23

Debug_CheatStart_39:
# 314 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_23

Debug_CheatStart_40:
# 316 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_23

Debug_CheatStart_41:
# 318 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_23

Debug_CheatStart_42:
# 320 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_23

Debug_CheatStart_43:
# 322 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_NIDORAN_F
	goto Debug_CheatStart_23

Debug_CheatStart_44:
# 324 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_NIDORAN_M
	goto Debug_CheatStart_23

Debug_CheatStart_47:
# 332 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_45

Debug_CheatStart_48:
# 334 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BONSLY
	goto Debug_CheatStart_45

Debug_CheatStart_49:
# 336 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_45

Debug_CheatStart_50:
# 338 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HOOTHOOT
	goto Debug_CheatStart_45

Debug_CheatStart_51:
# 340 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_45

Debug_CheatStart_52:
# 342 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MANKEY
	goto Debug_CheatStart_45

Debug_CheatStart_53:
# 344 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_45

Debug_CheatStart_54:
# 346 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PANCHAM
	goto Debug_CheatStart_45

Debug_CheatStart_55:
# 348 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_45

Debug_CheatStart_56:
# 350 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_45

Debug_CheatStart_57:
# 352 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PIKIPEK
	goto Debug_CheatStart_45

Debug_CheatStart_58:
# 354 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PIKIPEK
	goto Debug_CheatStart_45

Debug_CheatStart_59:
# 356 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SEEDOT
	goto Debug_CheatStart_45

Debug_CheatStart_60:
# 358 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SEEDOT
	goto Debug_CheatStart_45

Debug_CheatStart_61:
# 360 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SKWOVET
	goto Debug_CheatStart_45

Debug_CheatStart_62:
# 362 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SKWOVET
	goto Debug_CheatStart_45

Debug_CheatStart_63:
# 364 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_45

Debug_CheatStart_64:
# 366 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STUNKY
	goto Debug_CheatStart_45

Debug_CheatStart_65:
# 368 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_45

Debug_CheatStart_66:
# 370 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_VOLTORB_HISUIAN
	goto Debug_CheatStart_45

Debug_CheatStart_68:
# 377 "data/scripts/debug.pory"
	random 4
# 378 "data/scripts/debug.pory"
	switch VAR_RESULT
# 379 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_76
# 381 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_77
# 383 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_78
# 385 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_79
	goto Debug_CheatStart_67

Debug_CheatStart_72:
# 438 "data/scripts/debug.pory"
	random 4
# 439 "data/scripts/debug.pory"
	switch VAR_RESULT
# 440 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_112
# 442 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_113
# 444 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_114
# 446 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_115
Debug_CheatStart_110:
# 449 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 8, ITEM_NONE
	goto Debug_CheatStart_71

Debug_CheatStart_76:
# 380 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_CHEWTLE
	goto Debug_CheatStart_67

Debug_CheatStart_77:
# 382 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_DEWPIDER
	goto Debug_CheatStart_67

Debug_CheatStart_78:
# 384 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SURSKIT
	goto Debug_CheatStart_67

Debug_CheatStart_79:
# 386 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WISHIWASHI
	goto Debug_CheatStart_67

Debug_CheatStart_81:
# 392 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_67

Debug_CheatStart_82:
# 394 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUIZEL
	goto Debug_CheatStart_67

Debug_CheatStart_83:
# 396 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_67

Debug_CheatStart_84:
# 398 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_CRABRAWLER
	goto Debug_CheatStart_67

Debug_CheatStart_85:
# 400 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_67

Debug_CheatStart_86:
# 402 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_EKANS
	goto Debug_CheatStart_67

Debug_CheatStart_87:
# 404 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GLAMEOW
	goto Debug_CheatStart_67

Debug_CheatStart_88:
# 406 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GLAMEOW
	goto Debug_CheatStart_67

Debug_CheatStart_89:
# 408 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_67

Debug_CheatStart_90:
# 410 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LITLEO
	goto Debug_CheatStart_67

Debug_CheatStart_91:
# 412 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LOTAD
	goto Debug_CheatStart_67

Debug_CheatStart_92:
# 414 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LOTAD
	goto Debug_CheatStart_67

Debug_CheatStart_93:
# 416 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MEDITITE
	goto Debug_CheatStart_67

Debug_CheatStart_94:
# 418 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MEDITITE
	goto Debug_CheatStart_67

Debug_CheatStart_95:
# 420 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_67

Debug_CheatStart_96:
# 422 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ROCKRUFF
	goto Debug_CheatStart_67

Debug_CheatStart_97:
# 424 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_67

Debug_CheatStart_98:
# 426 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_67

Debug_CheatStart_99:
# 428 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOPER
	goto Debug_CheatStart_67

Debug_CheatStart_100:
# 430 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOPER
	goto Debug_CheatStart_67

Debug_CheatStart_103:
# 503 "data/scripts/debug.pory"
	additem ITEM_WATER_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_104:
# 505 "data/scripts/debug.pory"
	additem ITEM_ELECTRIC_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_105:
# 507 "data/scripts/debug.pory"
	additem ITEM_FIRE_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_106:
# 509 "data/scripts/debug.pory"
	additem ITEM_PSYCHIC_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_107:
# 511 "data/scripts/debug.pory"
	additem ITEM_DARK_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_108:
# 513 "data/scripts/debug.pory"
	additem ITEM_GRASS_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_109:
# 515 "data/scripts/debug.pory"
	additem ITEM_ICE_GEM
	goto Debug_CheatStart_101

Debug_CheatStart_112:
# 441 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PETILIL
	goto Debug_CheatStart_110

Debug_CheatStart_113:
# 443 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_COTTONEE
	goto Debug_CheatStart_110

Debug_CheatStart_114:
# 445 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_110

Debug_CheatStart_115:
# 447 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_110

Debug_CheatStart_118:
# 455 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_116

Debug_CheatStart_119:
# 457 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HOUNDOUR
	goto Debug_CheatStart_116

Debug_CheatStart_120:
# 459 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MORELULL
	goto Debug_CheatStart_116

Debug_CheatStart_121:
# 461 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MORELULL
	goto Debug_CheatStart_116

Debug_CheatStart_122:
# 463 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_116

Debug_CheatStart_123:
# 465 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PHANTUMP
	goto Debug_CheatStart_116

Debug_CheatStart_124:
# 467 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_116

Debug_CheatStart_125:
# 469 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PONYTA_GALARIAN
	goto Debug_CheatStart_116

Debug_CheatStart_126:
# 471 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_116

Debug_CheatStart_127:
# 473 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_HATENNA
	goto Debug_CheatStart_116

Debug_CheatStart_128:
# 475 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_116

Debug_CheatStart_129:
# 477 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_IMPIDIMP
	goto Debug_CheatStart_116

Debug_CheatStart_130:
# 479 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_116

Debug_CheatStart_131:
# 481 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GOTHITA
	goto Debug_CheatStart_116

Debug_CheatStart_132:
# 483 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_116

Debug_CheatStart_133:
# 485 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SOLOSIS
	goto Debug_CheatStart_116

Debug_CheatStart_134:
# 487 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SPRITZEE
	goto Debug_CheatStart_116

Debug_CheatStart_135:
# 489 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SPRITZEE
	goto Debug_CheatStart_116

Debug_CheatStart_136:
# 491 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SWIRLIX
	goto Debug_CheatStart_116

Debug_CheatStart_137:
# 493 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SWIRLIX
	goto Debug_CheatStart_116

Debug_CheatStart_140:
# 521 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_138

Debug_CheatStart_141:
# 523 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ABRA
	goto Debug_CheatStart_138

Debug_CheatStart_142:
# 525 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_138

Debug_CheatStart_143:
# 527 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GROWLITHE
	goto Debug_CheatStart_138

Debug_CheatStart_144:
# 529 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_138

Debug_CheatStart_145:
# 531 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAGNEMITE
	goto Debug_CheatStart_138

Debug_CheatStart_146:
# 533 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RALTS
	goto Debug_CheatStart_138

Debug_CheatStart_147:
# 535 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RALTS
	goto Debug_CheatStart_138

Debug_CheatStart_148:
# 537 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_138

Debug_CheatStart_149:
# 539 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_ROOKIDEE
	goto Debug_CheatStart_138

Debug_CheatStart_150:
# 541 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_138

Debug_CheatStart_151:
# 543 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_SNUBBULL
	goto Debug_CheatStart_138

Debug_CheatStart_152:
# 545 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_138

Debug_CheatStart_153:
# 547 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STARLY
	goto Debug_CheatStart_138

Debug_CheatStart_154:
# 549 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_138

Debug_CheatStart_155:
# 551 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_STUFFUL
	goto Debug_CheatStart_138

Debug_CheatStart_156:
# 553 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_138

Debug_CheatStart_157:
# 555 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_TAILLOW
	goto Debug_CheatStart_138


Debug_CheatStart_Text_0:
# 375 "data/scripts/debug.pory"
	.string "Would you like a water encounter?$"

Debug_CheatStart_Text_1:
# 436 "data/scripts/debug.pory"
	.string "Would you like a golden tree encounter?$"

Debug_CheatStart_Text_2:
# 499 "data/scripts/debug.pory"
	.string "Choose an Eevee evolution.$"

Debug_CheatStart_Text_3:
# 500 "data/scripts/debug.pory"
	.string "Vaporeon$"

Debug_CheatStart_Text_4:
# 500 "data/scripts/debug.pory"
	.string "Jolteon$"

Debug_CheatStart_Text_5:
# 500 "data/scripts/debug.pory"
	.string "Flareon$"

Debug_CheatStart_Text_6:
# 500 "data/scripts/debug.pory"
	.string "Espeon$"

Debug_CheatStart_Text_7:
# 500 "data/scripts/debug.pory"
	.string "Umbreon$"

Debug_CheatStart_Text_8:
# 500 "data/scripts/debug.pory"
	.string "Leafeon$"

Debug_CheatStart_Text_9:
# 500 "data/scripts/debug.pory"
	.string "Glaceon$"

Debug_CheatStart_Text_10:
# 500 "data/scripts/debug.pory"
	.string "Sylveon$"

gText_ObtainedDebugMon::
# 596 "data/scripts/debug.pory"
	.string "Obtained {STR_VAR_1}!$"
