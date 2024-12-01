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
Debug_EventScript_CheckEVs::
# 39 "data/scripts/debug.pory"
	lockall
# 40 "data/scripts/debug.pory"
	getpartysize
# 41 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 42 "data/scripts/debug.pory"
	special ChoosePartyMon
# 43 "data/scripts/debug.pory"
	waitstate
# 44 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
# 45 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveEVs
# 46 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
# 47 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveEVs
# 48 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
# 49 "data/scripts/debug.pory"
Debug_EventScript_CheckEVs_End::
# 50 "data/scripts/debug.pory"
	releaseall
# 51 "data/scripts/debug.pory"
	end
# 52 "data/scripts/debug.pory"

# 53 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveEVs:
# 54 "data/scripts/debug.pory"
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"
# 55 "data/scripts/debug.pory"

# 56 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveEVs:
# 57 "data/scripts/debug.pory"
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"
# 58 "data/scripts/debug.pory"

# 59 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs::
# 60 "data/scripts/debug.pory"
	lockall
# 61 "data/scripts/debug.pory"
	getpartysize
# 62 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 63 "data/scripts/debug.pory"
	special ChoosePartyMon
# 64 "data/scripts/debug.pory"
	waitstate
# 65 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
# 66 "data/scripts/debug.pory"
	callnative Script_GetChosenMonOffensiveIVs
# 67 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
# 68 "data/scripts/debug.pory"
	callnative Script_GetChosenMonDefensiveIVs
# 69 "data/scripts/debug.pory"
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
# 70 "data/scripts/debug.pory"
Debug_EventScript_CheckIVs_End::
# 71 "data/scripts/debug.pory"
	releaseall
# 72 "data/scripts/debug.pory"
	end
# 73 "data/scripts/debug.pory"

# 74 "data/scripts/debug.pory"
Debug_EventScript_Text_OffensiveIVs:
# 75 "data/scripts/debug.pory"
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"
# 76 "data/scripts/debug.pory"

# 77 "data/scripts/debug.pory"
Debug_EventScript_Text_DefensiveIVs:
# 78 "data/scripts/debug.pory"
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"
# 79 "data/scripts/debug.pory"

# 80 "data/scripts/debug.pory"
Debug_EventScript_Script_1::
# 81 "data/scripts/debug.pory"
	end
# 82 "data/scripts/debug.pory"

# 83 "data/scripts/debug.pory"
Debug_EventScript_Script_2::
# 84 "data/scripts/debug.pory"
	end
# 85 "data/scripts/debug.pory"

# 86 "data/scripts/debug.pory"
Debug_EventScript_Script_3::
# 87 "data/scripts/debug.pory"
	end
# 88 "data/scripts/debug.pory"

# 89 "data/scripts/debug.pory"
Debug_EventScript_Script_4::
# 90 "data/scripts/debug.pory"
	end
# 91 "data/scripts/debug.pory"

# 92 "data/scripts/debug.pory"
Debug_EventScript_Script_5::
# 93 "data/scripts/debug.pory"
	end
# 94 "data/scripts/debug.pory"

# 95 "data/scripts/debug.pory"
Debug_EventScript_Script_6::
# 96 "data/scripts/debug.pory"
	end
# 97 "data/scripts/debug.pory"

# 98 "data/scripts/debug.pory"
Debug_EventScript_Script_7::
# 99 "data/scripts/debug.pory"
	end
# 100 "data/scripts/debug.pory"

# 101 "data/scripts/debug.pory"
Debug_EventScript_Script_8::
# 102 "data/scripts/debug.pory"
	end
# 103 "data/scripts/debug.pory"

# 104 "data/scripts/debug.pory"
Debug_CheckSaveBlock::
# 105 "data/scripts/debug.pory"
	callnative CheckSaveBlock1Size
# 106 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
# 107 "data/scripts/debug.pory"
	callnative CheckSaveBlock2Size
# 108 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
# 109 "data/scripts/debug.pory"
	callnative CheckSaveBlock3Size
# 110 "data/scripts/debug.pory"
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
# 111 "data/scripts/debug.pory"
	callnative CheckPokemonStorageSize
# 112 "data/scripts/debug.pory"
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
# 113 "data/scripts/debug.pory"
	release
# 114 "data/scripts/debug.pory"
	end
# 115 "data/scripts/debug.pory"

# 116 "data/scripts/debug.pory"
Debug_SaveBlock1Size::
# 117 "data/scripts/debug.pory"
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 118 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 119 "data/scripts/debug.pory"

# 120 "data/scripts/debug.pory"
Debug_SaveBlock2Size::
# 121 "data/scripts/debug.pory"
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 122 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 123 "data/scripts/debug.pory"

# 124 "data/scripts/debug.pory"
Debug_SaveBlock3Size::
# 125 "data/scripts/debug.pory"
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 126 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 127 "data/scripts/debug.pory"

# 128 "data/scripts/debug.pory"
Debug_PokemonStorageSize::
# 129 "data/scripts/debug.pory"
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
# 130 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_3}b.$"
# 131 "data/scripts/debug.pory"

# 132 "data/scripts/debug.pory"
Debug_CheckROMSpace::
# 133 "data/scripts/debug.pory"
	callnative CheckROMSize
# 134 "data/scripts/debug.pory"
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
# 135 "data/scripts/debug.pory"
	release
# 136 "data/scripts/debug.pory"
	end
# 137 "data/scripts/debug.pory"

# 138 "data/scripts/debug.pory"
Debug_ROMSize::
# 139 "data/scripts/debug.pory"
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
# 140 "data/scripts/debug.pory"
	.string "Free space: {STR_VAR_2}MB.$"
# 141 "data/scripts/debug.pory"

# 142 "data/scripts/debug.pory"
Debug_HatchAnEgg::
# 143 "data/scripts/debug.pory"
	lockall
# 144 "data/scripts/debug.pory"
	getpartysize
# 145 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 146 "data/scripts/debug.pory"
	special ChoosePartyMon
# 147 "data/scripts/debug.pory"
	waitstate
# 148 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
# 149 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 150 "data/scripts/debug.pory"
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
# 151 "data/scripts/debug.pory"
	special EggHatch
# 152 "data/scripts/debug.pory"
	waitstate
# 153 "data/scripts/debug.pory"
Debug_HatchAnEgg_End::
# 154 "data/scripts/debug.pory"
	releaseall
# 155 "data/scripts/debug.pory"
	end
# 156 "data/scripts/debug.pory"

# 157 "data/scripts/debug.pory"
Debug_NoPokemon::
# 158 "data/scripts/debug.pory"
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
# 159 "data/scripts/debug.pory"
	releaseall
# 160 "data/scripts/debug.pory"
	end
# 161 "data/scripts/debug.pory"

# 162 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_CantForceHatch::
# 163 "data/scripts/debug.pory"
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
# 164 "data/scripts/debug.pory"
	releaseall
# 165 "data/scripts/debug.pory"
	end
# 166 "data/scripts/debug.pory"

# 167 "data/scripts/debug.pory"
DebugScript_Text_EmptyParty::
# 168 "data/scripts/debug.pory"
	.string "You have no Pokémon nor Eggs.$"
# 169 "data/scripts/debug.pory"

# 170 "data/scripts/debug.pory"
DebugScript_HatchAnEgg_Text_NotAnEgg::
# 171 "data/scripts/debug.pory"
	.string "That's not a Pokémon Egg.$"
# 172 "data/scripts/debug.pory"

# 173 "data/scripts/debug.pory"
DebugScript_ZeroDaycareMons::
# 174 "data/scripts/debug.pory"
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
# 175 "data/scripts/debug.pory"
	releaseall
# 176 "data/scripts/debug.pory"
	end
# 177 "data/scripts/debug.pory"

# 178 "data/scripts/debug.pory"
DebugScript_OneDaycareMons::
# 179 "data/scripts/debug.pory"
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
# 180 "data/scripts/debug.pory"
	releaseall
# 181 "data/scripts/debug.pory"
	end
# 182 "data/scripts/debug.pory"

# 183 "data/scripts/debug.pory"
DebugScript_DaycareMonsNotCompatible::
# 184 "data/scripts/debug.pory"
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
# 185 "data/scripts/debug.pory"
	releaseall
# 186 "data/scripts/debug.pory"
	end
# 187 "data/scripts/debug.pory"

# 188 "data/scripts/debug.pory"
DebugText_DaycareNoPokemon:
# 189 "data/scripts/debug.pory"
	.string "You have no Pokémon at Daycare.$"
# 190 "data/scripts/debug.pory"

# 191 "data/scripts/debug.pory"
DebugText_DaycareOnePokemon:
# 192 "data/scripts/debug.pory"
	.string "You have only one Pokémon at Daycare.$"
# 193 "data/scripts/debug.pory"

# 194 "data/scripts/debug.pory"
DebugText_DaycarePokemonNotCompatible:
# 195 "data/scripts/debug.pory"
	.string "Your Pokémon at Daycare can't\nhave babies together!$"
# 196 "data/scripts/debug.pory"

# 197 "data/scripts/debug.pory"
Debug_ShowExpansionVersion::
# 198 "data/scripts/debug.pory"
	callnative BufferExpansionVersion
# 199 "data/scripts/debug.pory"
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
# 200 "data/scripts/debug.pory"
	release
# 201 "data/scripts/debug.pory"
	end
# 202 "data/scripts/debug.pory"

# 203 "data/scripts/debug.pory"
Debug_ExpansionVersion:
# 204 "data/scripts/debug.pory"
	.string "pokeemerald-expansion {STR_VAR_1}$"
# 205 "data/scripts/debug.pory"

# 206 "data/scripts/debug.pory"
Debug_BerryPestsDisabled::
# 207 "data/scripts/debug.pory"
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
# 208 "data/scripts/debug.pory"
	release
# 209 "data/scripts/debug.pory"
	end
# 210 "data/scripts/debug.pory"

# 211 "data/scripts/debug.pory"
DebugText_BerryPestsDisabled:
# 212 "data/scripts/debug.pory"
	.string "OW_BERRY_PESTS is disabled.\n"
# 213 "data/scripts/debug.pory"
	.string "Unable to force pests onto berry trees.$"
# 214 "data/scripts/debug.pory"

# 215 "data/scripts/debug.pory"
Debug_BerryWeedsDisabled::
# 216 "data/scripts/debug.pory"
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
# 217 "data/scripts/debug.pory"
	release
# 218 "data/scripts/debug.pory"
	end
# 219 "data/scripts/debug.pory"

# 220 "data/scripts/debug.pory"
DebugText_BerryWeedsDisabled:
# 221 "data/scripts/debug.pory"
	.string "OW_BERRY_WEEDS is disabled.\n"
# 222 "data/scripts/debug.pory"
	.string "Unable to force weeds onto berry trees.$"
# 223 "data/scripts/debug.pory"

# 224 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1::
# 225 "data/scripts/debug.pory"
	lockall
# 226 "data/scripts/debug.pory"
	getpartysize
# 227 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
# 228 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
# 229 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
# 230 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
# 231 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
# 232 "data/scripts/debug.pory"
	switch VAR_RESULT
# 233 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single
# 234 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party
# 235 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Close
# 236 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Close:
# 237 "data/scripts/debug.pory"
	releaseall
# 238 "data/scripts/debug.pory"
	end
# 239 "data/scripts/debug.pory"

# 240 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single:
# 241 "data/scripts/debug.pory"
	special ChoosePartyMon
# 242 "data/scripts/debug.pory"
	waitstate
# 243 "data/scripts/debug.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
# 244 "data/scripts/debug.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 245 "data/scripts/debug.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
# 246 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 247 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 248 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 249 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 250 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 251 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 252 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 253 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 254 "data/scripts/debug.pory"
	switch VAR_RESULT
# 255 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
# 256 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
# 257 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
# 258 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
# 259 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
# 260 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
# 261 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 262 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 263 "data/scripts/debug.pory"
	releaseall
# 264 "data/scripts/debug.pory"
	end
# 265 "data/scripts/debug.pory"

# 266 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Poison:
# 267 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, VAR_0x8004
# 268 "data/scripts/debug.pory"
	releaseall
# 269 "data/scripts/debug.pory"
	end
# 270 "data/scripts/debug.pory"

# 271 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Paralysis:
# 272 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
# 273 "data/scripts/debug.pory"
	releaseall
# 274 "data/scripts/debug.pory"
	end
# 275 "data/scripts/debug.pory"

# 276 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Sleep:
# 277 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, VAR_0x8004
# 278 "data/scripts/debug.pory"
	releaseall
# 279 "data/scripts/debug.pory"
	end
# 280 "data/scripts/debug.pory"

# 281 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Burn:
# 282 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, VAR_0x8004
# 283 "data/scripts/debug.pory"
	releaseall
# 284 "data/scripts/debug.pory"
	end
# 285 "data/scripts/debug.pory"

# 286 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Freeze:
# 287 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, VAR_0x8004
# 288 "data/scripts/debug.pory"
	releaseall
# 289 "data/scripts/debug.pory"
	end
# 290 "data/scripts/debug.pory"

# 291 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Single_Frostbite:
# 292 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
# 293 "data/scripts/debug.pory"
	releaseall
# 294 "data/scripts/debug.pory"
	end
# 295 "data/scripts/debug.pory"

# 296 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party:
# 297 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
# 298 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
# 299 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
# 300 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
# 301 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
# 302 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
# 303 "data/scripts/debug.pory"
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
# 304 "data/scripts/debug.pory"
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
# 305 "data/scripts/debug.pory"
	switch VAR_RESULT
# 306 "data/scripts/debug.pory"
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
# 307 "data/scripts/debug.pory"
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
# 308 "data/scripts/debug.pory"
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
# 309 "data/scripts/debug.pory"
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
# 310 "data/scripts/debug.pory"
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
# 311 "data/scripts/debug.pory"
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
# 312 "data/scripts/debug.pory"
	case 6, Debug_EventScript_InflictStatus1_Close
# 313 "data/scripts/debug.pory"
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
# 314 "data/scripts/debug.pory"
	releaseall
# 315 "data/scripts/debug.pory"
	end
# 316 "data/scripts/debug.pory"

# 317 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Poison:
# 318 "data/scripts/debug.pory"
	setstatus1 STATUS1_POISON, PARTY_SIZE
# 319 "data/scripts/debug.pory"
	releaseall
# 320 "data/scripts/debug.pory"
	end
# 321 "data/scripts/debug.pory"

# 322 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Paralysis:
# 323 "data/scripts/debug.pory"
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
# 324 "data/scripts/debug.pory"
	releaseall
# 325 "data/scripts/debug.pory"
	end
# 326 "data/scripts/debug.pory"

# 327 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Sleep:
# 328 "data/scripts/debug.pory"
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
# 329 "data/scripts/debug.pory"
	releaseall
# 330 "data/scripts/debug.pory"
	end
# 331 "data/scripts/debug.pory"

# 332 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Burn:
# 333 "data/scripts/debug.pory"
	setstatus1 STATUS1_BURN, PARTY_SIZE
# 334 "data/scripts/debug.pory"
	releaseall
# 335 "data/scripts/debug.pory"
	end
# 336 "data/scripts/debug.pory"

# 337 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Freeze:
# 338 "data/scripts/debug.pory"
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
# 339 "data/scripts/debug.pory"
	releaseall
# 340 "data/scripts/debug.pory"
	end
# 341 "data/scripts/debug.pory"

# 342 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Party_Frostbite:
# 343 "data/scripts/debug.pory"
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
# 344 "data/scripts/debug.pory"
	releaseall
# 345 "data/scripts/debug.pory"
	end
# 346 "data/scripts/debug.pory"

# 347 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Single:
# 348 "data/scripts/debug.pory"
	.string "Single$"
# 349 "data/scripts/debug.pory"

# 350 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_PartyWide:
# 351 "data/scripts/debug.pory"
	.string "Party-wide$"
# 352 "data/scripts/debug.pory"

# 353 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Close:
# 354 "data/scripts/debug.pory"
	.string "Close$"
# 355 "data/scripts/debug.pory"

# 356 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Poison:
# 357 "data/scripts/debug.pory"
	.string "Poison$"
# 358 "data/scripts/debug.pory"

# 359 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Paralysis:
# 360 "data/scripts/debug.pory"
	.string "Paralysis$"
# 361 "data/scripts/debug.pory"

# 362 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Sleep:
# 363 "data/scripts/debug.pory"
	.string "Sleep$"
# 364 "data/scripts/debug.pory"

# 365 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Burn:
# 366 "data/scripts/debug.pory"
	.string "Burn$"
# 367 "data/scripts/debug.pory"

# 368 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Freeze:
# 369 "data/scripts/debug.pory"
	.string "Freeze$"
# 370 "data/scripts/debug.pory"

# 371 "data/scripts/debug.pory"
Debug_EventScript_InflictStatus1_Text_Frostbite:
# 372 "data/scripts/debug.pory"
	.string "Frostbite$"
# 373 "data/scripts/debug.pory"

# 374 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters::
# 375 "data/scripts/debug.pory"
	callnative CheckEWRAMCounters
# 376 "data/scripts/debug.pory"
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
# 377 "data/scripts/debug.pory"
	release
# 378 "data/scripts/debug.pory"
	end
# 379 "data/scripts/debug.pory"

# 380 "data/scripts/debug.pory"
Debug_EventScript_EWRAMCounters_Text::
# 381 "data/scripts/debug.pory"
	.string "Follower Steps: {STR_VAR_1}.\n"
# 382 "data/scripts/debug.pory"
	.string "Fishing Chain: {STR_VAR_2}.$"
# 383 "data/scripts/debug.pory"

# 384 "data/scripts/debug.pory"
.endif

Debug_CheatStart::
# 388 "data/scripts/debug.pory"
	lockall
# 389 "data/scripts/debug.pory"
	additem ITEM_RARE_CANDY, 100
# 442 "data/scripts/debug.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 443 "data/scripts/debug.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 444 "data/scripts/debug.pory"
	random 20
# 445 "data/scripts/debug.pory"
	switch VAR_RESULT
# 446 "data/scripts/debug.pory"
	case 0, Debug_CheatStart_3
# 448 "data/scripts/debug.pory"
	case 1, Debug_CheatStart_4
# 450 "data/scripts/debug.pory"
	case 2, Debug_CheatStart_5
# 452 "data/scripts/debug.pory"
	case 3, Debug_CheatStart_6
# 454 "data/scripts/debug.pory"
	case 4, Debug_CheatStart_7
# 456 "data/scripts/debug.pory"
	case 5, Debug_CheatStart_8
# 458 "data/scripts/debug.pory"
	case 6, Debug_CheatStart_9
# 460 "data/scripts/debug.pory"
	case 7, Debug_CheatStart_10
# 462 "data/scripts/debug.pory"
	case 8, Debug_CheatStart_11
# 464 "data/scripts/debug.pory"
	case 9, Debug_CheatStart_12
# 466 "data/scripts/debug.pory"
	case 10, Debug_CheatStart_13
# 468 "data/scripts/debug.pory"
	case 11, Debug_CheatStart_14
# 470 "data/scripts/debug.pory"
	case 12, Debug_CheatStart_15
# 472 "data/scripts/debug.pory"
	case 13, Debug_CheatStart_16
# 474 "data/scripts/debug.pory"
	case 14, Debug_CheatStart_17
# 476 "data/scripts/debug.pory"
	case 15, Debug_CheatStart_18
# 478 "data/scripts/debug.pory"
	case 16, Debug_CheatStart_19
# 480 "data/scripts/debug.pory"
	case 17, Debug_CheatStart_20
# 482 "data/scripts/debug.pory"
	case 18, Debug_CheatStart_21
# 484 "data/scripts/debug.pory"
	case 19, Debug_CheatStart_22
Debug_CheatStart_1:
# 487 "data/scripts/debug.pory"
	random 2
# 488 "data/scripts/debug.pory"
	compare VAR_RESULT, 0
	goto_if_eq Debug_CheatStart_24
# 491 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 4, ITEM_NONE
Debug_CheatStart_23:
# 493 "data/scripts/debug.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 494 "data/scripts/debug.pory"
	msgbox gText_ObtainedDebugMon
# 791 "data/scripts/debug.pory"
	setflag FLAG_SETTINGS_FULL_SURVEIL
# 792 "data/scripts/debug.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 793 "data/scripts/debug.pory"
	setflag FLAG_PORTENTIA_INTRO
# 794 "data/scripts/debug.pory"
	setflag FLAG_TIM_INTRO
# 795 "data/scripts/debug.pory"
	setflag FLAG_VARRICK_INTRO
# 796 "data/scripts/debug.pory"
	setflag FLAG_JULIA_INTRO
# 797 "data/scripts/debug.pory"
	setflag FLAG_LELOUCH_INTRO
# 798 "data/scripts/debug.pory"
	setflag FLAG_MARIE_INTRO
# 799 "data/scripts/debug.pory"
	setflag FLAG_JOY_INTRO
# 800 "data/scripts/debug.pory"
	setvar VAR_ZONE_0_STATE, 3
# 801 "data/scripts/debug.pory"
	additem ITEM_ORAN_BERRY, 4
# 802 "data/scripts/debug.pory"
	removemoney 2800
# 803 "data/scripts/debug.pory"
	additem ITEM_POTION, 10
# 804 "data/scripts/debug.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 805 "data/scripts/debug.pory"
	additem ITEM_ANTIDOTE, 2
# 806 "data/scripts/debug.pory"
	callnative DisableBattleAnimationSetting
# 807 "data/scripts/debug.pory"
	random 5
# 808 "data/scripts/debug.pory"
	copyvar VAR_WILD_MUSIC, VAR_RESULT
# 809 "data/scripts/debug.pory"
	random 5
# 810 "data/scripts/debug.pory"
	copyvar VAR_TRAINER_MUSIC, VAR_RESULT
# 811 "data/scripts/debug.pory"
	random 5
# 812 "data/scripts/debug.pory"
	copyvar VAR_LEVIATHAN_MUSIC, VAR_RESULT
# 815 "data/scripts/debug.pory"
	release
	end

Debug_CheatStart_3:
# 447 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_1

Debug_CheatStart_4:
# 449 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_LILLIPUP
	goto Debug_CheatStart_1

Debug_CheatStart_5:
# 451 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_1

Debug_CheatStart_6:
# 453 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_RATTATA
	goto Debug_CheatStart_1

Debug_CheatStart_7:
# 455 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_1

Debug_CheatStart_8:
# 457 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_WOOLOO
	goto Debug_CheatStart_1

Debug_CheatStart_9:
# 459 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_10:
# 461 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PSYDUCK
	goto Debug_CheatStart_1

Debug_CheatStart_11:
# 463 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_DUCKLETT
	goto Debug_CheatStart_1

Debug_CheatStart_12:
# 465 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_DUCKLETT
	goto Debug_CheatStart_1

Debug_CheatStart_13:
# 467 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GOSSIFLEUR
	goto Debug_CheatStart_1

Debug_CheatStart_14:
# 469 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_GOSSIFLEUR
	goto Debug_CheatStart_1

Debug_CheatStart_15:
# 471 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_16:
# 473 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_BUDEW
	goto Debug_CheatStart_1

Debug_CheatStart_17:
# 475 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_1

Debug_CheatStart_18:
# 477 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_YAMPER
	goto Debug_CheatStart_1

Debug_CheatStart_19:
# 479 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_20:
# 481 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_MAREEP
	goto Debug_CheatStart_1

Debug_CheatStart_21:
# 483 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_PICHU
	goto Debug_CheatStart_1

Debug_CheatStart_22:
# 485 "data/scripts/debug.pory"
	setvar VAR_TEMP_0, SPECIES_IGGLYBUFF
	goto Debug_CheatStart_1

Debug_CheatStart_24:
# 489 "data/scripts/debug.pory"
	givemon VAR_TEMP_0, 3, ITEM_NONE
	goto Debug_CheatStart_23


gText_ObtainedDebugMon::
# 819 "data/scripts/debug.pory"
	.string "Obtained {STR_VAR_1}!$"
