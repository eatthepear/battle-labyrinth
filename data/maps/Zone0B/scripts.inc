Zone0B_EventScript_EeveeGirl::
# 2 "data/maps/Zone0B/scripts.pory"
	lock
# 3 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 4 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone0B_EventScript_EeveeGirl_2
# 4 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0B_EventScript_EeveeGirl_2
Zone0B_EventScript_EeveeGirl_1:
# 7 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_RECEIVED_EEVEE, Zone0B_EventScript_EeveeGirl_7
Zone0B_EventScript_EeveeGirl_6:
# 10 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeGiveaway, MSGBOX_YESNO
# 11 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0B_EventScript_EeveeGirl_10
# 16 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 17 "data/maps/Zone0B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone0B_EventScript_EeveeGirl_13
# 22 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_SureThing, MSGBOX_DEFAULT
# 23 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_17
Zone0B_EventScript_EeveeGirl_15:
# 32 "data/maps/Zone0B/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 33 "data/maps/Zone0B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 252
# 34 "data/maps/Zone0B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 35 "data/maps/Zone0B/scripts.pory"
	message Zone0B_Text_ReceivedEevee
# 36 "data/maps/Zone0B/scripts.pory"
	waitmessage
# 37 "data/maps/Zone0B/scripts.pory"
	waitfanfare
# 38 "data/maps/Zone0B/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
# 39 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
# 40 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_21
Zone0B_EventScript_EeveeGirl_20:
# 44 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 45 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	return

Zone0B_EventScript_EeveeGirl_2:
# 5 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_1

Zone0B_EventScript_EeveeGirl_7:
# 8 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_6

Zone0B_EventScript_EeveeGirl_10:
# 12 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_NoThanks
# 13 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_13:
# 18 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_0
# 19 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_16:
# 24 "data/maps/Zone0B/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_EEVEE
# 25 "data/maps/Zone0B/scripts.pory"
	callnative CheckSpeciesClause
# 26 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_TEMP_1, Zone0B_EventScript_EeveeGirl_23
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_17:
# 23 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_16
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_21:
# 41 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 42 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_20

Zone0B_EventScript_EeveeGirl_23:
# 27 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
# 28 "data/maps/Zone0B/scripts.pory"
	release
	end


Zone0B_EventScript_EeveeUnique::
# 49 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeUnique_Text_0
# 50 "data/maps/Zone0B/scripts.pory"
	release
	return


Zone0B_EventScript_BreederM::
# 54 "data/maps/Zone0B/scripts.pory"
	lock
# 55 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 56 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
# 61 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 62 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
# 99 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 100 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_2:
# 57 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 58 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_5:
# 63 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_1
# 64 "data/maps/Zone0B/scripts.pory"
	delay 32
# 65 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_2
# 66 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 67 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_BULBASAUR
# 68 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHARMANDER
# 69 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SQUIRTLE
# 70 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIKORITA
# 71 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CYNDAQUIL
# 72 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TOTODILE
# 73 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TREECKO
# 74 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TORCHIC
# 75 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_MUDKIP
# 76 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TURTWIG
# 77 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIMCHAR
# 78 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_PIPLUP
# 79 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SNIVY
# 80 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TEPIG
# 81 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_OSHAWOTT
# 82 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHESPIN
# 83 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FENNEKIN
# 84 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FROAKIE
# 85 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_ROWLET
# 86 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_LITTEN
# 87 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_POPPLIO
# 88 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_GROOKEY
# 89 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SCORBUNNY
# 90 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SOBBLE
# 91 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SPRIGATITO
# 92 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FUECOCO
# 93 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_QUAXLY
# 94 "data/maps/Zone0B/scripts.pory"
	delay 48
# 95 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 96 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 97 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 108 "data/maps/Zone0B/scripts.pory"

# 109 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 110 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 111 "data/maps/Zone0B/scripts.pory"

# 112 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 113 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 114 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 115 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 116 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 117 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 118 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 119 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 120 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 121 "data/maps/Zone0B/scripts.pory"

# 122 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 123 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 124 "data/maps/Zone0B/scripts.pory"

# 125 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 126 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 127 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 128 "data/maps/Zone0B/scripts.pory"

# 129 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 130 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 131 "data/maps/Zone0B/scripts.pory"

# 132 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 133 "data/maps/Zone0B/scripts.pory"
	lock
# 134 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 135 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 136 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 137 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 138 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 139 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 140 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 141 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 142 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 143 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 144 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 145 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 146 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 147 "data/maps/Zone0B/scripts.pory"
	release
# 148 "data/maps/Zone0B/scripts.pory"
	end
# 149 "data/maps/Zone0B/scripts.pory"

# 150 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 151 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 152 "data/maps/Zone0B/scripts.pory"
	release
# 153 "data/maps/Zone0B/scripts.pory"
	end
# 154 "data/maps/Zone0B/scripts.pory"

# 155 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 156 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 157 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 158 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 159 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 160 "data/maps/Zone0B/scripts.pory"

# 161 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 162 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 163 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 164 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 165 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 166 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 167 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 168 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 169 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 171 "data/maps/Zone0B/scripts.pory"
	waitstate
# 172 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 173 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 174 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 175 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 176 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 177 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 178 "data/maps/Zone0B/scripts.pory"
	waitse
# 179 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 180 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 181 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 182 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 183 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 184 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 185 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 186 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 187 "data/maps/Zone0B/scripts.pory"
	release
# 188 "data/maps/Zone0B/scripts.pory"
	end
# 189 "data/maps/Zone0B/scripts.pory"

# 190 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 191 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 192 "data/maps/Zone0B/scripts.pory"
	release
# 193 "data/maps/Zone0B/scripts.pory"
	end
# 194 "data/maps/Zone0B/scripts.pory"

# 195 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 196 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 197 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 198 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 199 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 200 "data/maps/Zone0B/scripts.pory"
	end
# 201 "data/maps/Zone0B/scripts.pory"

# 202 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 203 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 204 "data/maps/Zone0B/scripts.pory"
	release
# 205 "data/maps/Zone0B/scripts.pory"
	end
# 206 "data/maps/Zone0B/scripts.pory"

# 207 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 208 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 209 "data/maps/Zone0B/scripts.pory"
	release
# 210 "data/maps/Zone0B/scripts.pory"
	end
# 211 "data/maps/Zone0B/scripts.pory"

# 212 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 213 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 214 "data/maps/Zone0B/scripts.pory"
	release
# 215 "data/maps/Zone0B/scripts.pory"
	end
# 216 "data/maps/Zone0B/scripts.pory"

# 217 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 218 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 219 "data/maps/Zone0B/scripts.pory"
	release
# 220 "data/maps/Zone0B/scripts.pory"
	end
# 221 "data/maps/Zone0B/scripts.pory"

# 222 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 223 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 224 "data/maps/Zone0B/scripts.pory"
	return
# 225 "data/maps/Zone0B/scripts.pory"

# 226 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 227 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 228 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 229 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 230 "data/maps/Zone0B/scripts.pory"
	return
# 231 "data/maps/Zone0B/scripts.pory"

# 232 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 233 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 234 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 235 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 236 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 237 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 238 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 239 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 240 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 241 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 242 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 243 "data/maps/Zone0B/scripts.pory"
	end
# 244 "data/maps/Zone0B/scripts.pory"

# 245 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 246 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 247 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 248 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 249 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 250 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 251 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 252 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 253 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 254 "data/maps/Zone0B/scripts.pory"
	waitstate
# 255 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 256 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 257 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 258 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 259 "data/maps/Zone0B/scripts.pory"
	end
# 260 "data/maps/Zone0B/scripts.pory"

# 261 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 262 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 263 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 264 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 265 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 266 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 267 "data/maps/Zone0B/scripts.pory"
	end
# 268 "data/maps/Zone0B/scripts.pory"

# 269 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 270 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 271 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 272 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 273 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 274 "data/maps/Zone0B/scripts.pory"
	release
# 275 "data/maps/Zone0B/scripts.pory"
	end
# 276 "data/maps/Zone0B/scripts.pory"

# 277 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 278 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 279 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 280 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 281 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 282 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 283 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 284 "data/maps/Zone0B/scripts.pory"
	waitse
# 285 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 286 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 287 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 288 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 289 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 290 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 291 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 292 "data/maps/Zone0B/scripts.pory"
	end
# 293 "data/maps/Zone0B/scripts.pory"

# 294 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 295 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 296 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 297 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 298 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 299 "data/maps/Zone0B/scripts.pory"
	end
# 300 "data/maps/Zone0B/scripts.pory"

# 301 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 302 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 303 "data/maps/Zone0B/scripts.pory"
	release
# 304 "data/maps/Zone0B/scripts.pory"
	end
# 305 "data/maps/Zone0B/scripts.pory"

# 306 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 307 "data/maps/Zone0B/scripts.pory"
	delay_16
# 308 "data/maps/Zone0B/scripts.pory"
	delay_16
# 309 "data/maps/Zone0B/scripts.pory"
	face_left
# 310 "data/maps/Zone0B/scripts.pory"
	delay_16
# 311 "data/maps/Zone0B/scripts.pory"
	delay_16
# 312 "data/maps/Zone0B/scripts.pory"
	face_right
# 313 "data/maps/Zone0B/scripts.pory"
	delay_16
# 314 "data/maps/Zone0B/scripts.pory"
	delay_16
# 315 "data/maps/Zone0B/scripts.pory"
	face_up
# 316 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 317 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 318 "data/maps/Zone0B/scripts.pory"
	delay_16
# 319 "data/maps/Zone0B/scripts.pory"
	delay_16
# 320 "data/maps/Zone0B/scripts.pory"
	delay_16
# 321 "data/maps/Zone0B/scripts.pory"
	delay_16
# 322 "data/maps/Zone0B/scripts.pory"
	delay_16
# 323 "data/maps/Zone0B/scripts.pory"
	face_down
# 324 "data/maps/Zone0B/scripts.pory"
	set_visible
# 325 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 326 "data/maps/Zone0B/scripts.pory"
	step_end
# 327 "data/maps/Zone0B/scripts.pory"

# 328 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 329 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 330 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 331 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 332 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 333 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 334 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 335 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 336 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 337 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 338 "data/maps/Zone0B/scripts.pory"
	release
# 339 "data/maps/Zone0B/scripts.pory"
	end
# 340 "data/maps/Zone0B/scripts.pory"

# 341 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 342 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 343 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 344 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 345 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 346 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 347 "data/maps/Zone0B/scripts.pory"

# 348 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 349 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 350 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 351 "data/maps/Zone0B/scripts.pory"

# 352 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 353 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 354 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 355 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 356 "data/maps/Zone0B/scripts.pory"

# 357 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 358 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 359 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 360 "data/maps/Zone0B/scripts.pory"

# 361 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 362 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 363 "data/maps/Zone0B/scripts.pory"

# 364 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 365 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 366 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 367 "data/maps/Zone0B/scripts.pory"

# 368 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 369 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 370 "data/maps/Zone0B/scripts.pory"

# 371 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 372 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 373 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 374 "data/maps/Zone0B/scripts.pory"

# 375 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 376 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 377 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 378 "data/maps/Zone0B/scripts.pory"

# 379 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 380 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 381 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 382 "data/maps/Zone0B/scripts.pory"

# 383 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 384 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 385 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 386 "data/maps/Zone0B/scripts.pory"

# 387 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 388 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 389 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 390 "data/maps/Zone0B/scripts.pory"

# 391 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 392 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 393 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 394 "data/maps/Zone0B/scripts.pory"

# 395 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 396 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 397 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 398 "data/maps/Zone0B/scripts.pory"

# 399 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 400 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 401 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 402 "data/maps/Zone0B/scripts.pory"

# 403 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 404 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 405 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 406 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 407 "data/maps/Zone0B/scripts.pory"

# 408 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 409 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 410 "data/maps/Zone0B/scripts.pory"

# 411 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 412 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 413 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 414 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 415 "data/maps/Zone0B/scripts.pory"

# 416 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 417 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 418 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 419 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 420 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 421 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 422 "data/maps/Zone0B/scripts.pory"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
# 18 "data/maps/Zone0B/scripts.pory"
	.string "Looks like you've got a full party.\nMake some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
# 27 "data/maps/Zone0B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's evolution\l"
	.string "line.$"

Zone0B_EventScript_EeveeUnique_Text_0:
# 49 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\p"
	.string "It evolves through exposure to\n"
	.string "different elemental sources; even a\l"
	.string "fraction of elemental energy, such as\l"
	.string "from a Gem, would be enough to evolve\l"
	.string "it.$"

Zone0B_EventScript_BreederM_Text_0:
# 61 "data/maps/Zone0B/scripts.pory"
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
# 63 "data/maps/Zone0B/scripts.pory"
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
# 65 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
# 96 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 104 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"
