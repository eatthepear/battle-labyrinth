Zone0B_EventScript_EeveeGirl::
# 2 "data/maps/Zone0B/scripts.pory"
	lock
# 3 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 4 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_RECEIVED_EEVEE, Zone0B_EventScript_EeveeGirl_2
Zone0B_EventScript_EeveeGirl_1:
# 7 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_6
Zone0B_EventScript_EeveeGirl_4:
# 18 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeGiveaway, MSGBOX_YESNO
# 19 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0B_EventScript_EeveeGirl_10
# 24 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 25 "data/maps/Zone0B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone0B_EventScript_EeveeGirl_13
# 31 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_SureThing, MSGBOX_DEFAULT
# 32 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_17
Zone0B_EventScript_EeveeGirl_15:
# 40 "data/maps/Zone0B/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 41 "data/maps/Zone0B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 252
# 42 "data/maps/Zone0B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 43 "data/maps/Zone0B/scripts.pory"
	message Zone0B_Text_ReceivedEevee
# 44 "data/maps/Zone0B/scripts.pory"
	waitmessage
# 45 "data/maps/Zone0B/scripts.pory"
	waitfanfare
# 46 "data/maps/Zone0B/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
# 47 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
# 48 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_21
Zone0B_EventScript_EeveeGirl_20:
# 52 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 53 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	return

Zone0B_EventScript_EeveeGirl_2:
# 5 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_1

Zone0B_EventScript_EeveeGirl_5:
# 8 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_EEVEE, Zone0B_EventScript_EeveeUnique
# 9 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_VAPOREON, Zone0B_EventScript_EeveeUnique
# 10 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_JOLTEON, Zone0B_EventScript_EeveeUnique
# 11 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_FLAREON, Zone0B_EventScript_EeveeUnique
# 12 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_ESPEON, Zone0B_EventScript_EeveeUnique
# 13 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_UMBREON, Zone0B_EventScript_EeveeUnique
# 14 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_LEAFEON, Zone0B_EventScript_EeveeUnique
# 15 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_GLACEON, Zone0B_EventScript_EeveeUnique
# 16 "data/maps/Zone0B/scripts.pory"
	goto_if_mon_caught SPECIES_SYLVEON, Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_6:
# 7 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_5
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_10:
# 20 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_NoThanks
# 21 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_13:
# 26 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_0
# 27 "data/maps/Zone0B/scripts.pory"
	hidemoneybox
# 28 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_16:
# 33 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_EEVEE
# 34 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_23
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_17:
# 32 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_16
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_21:
# 49 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 50 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_20

Zone0B_EventScript_EeveeGirl_23:
# 35 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
# 36 "data/maps/Zone0B/scripts.pory"
	release
	end


Zone0B_EventScript_EeveeUnique::
# 57 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeUnique
# 58 "data/maps/Zone0B/scripts.pory"
	release
	return


Zone0B_EventScript_BreederM::
# 62 "data/maps/Zone0B/scripts.pory"
	lock
# 63 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 64 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
# 69 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 70 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
# 107 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 108 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_2:
# 65 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 66 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_5:
# 71 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_1
# 72 "data/maps/Zone0B/scripts.pory"
	delay 32
# 73 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_2
# 74 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 75 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_BULBASAUR
# 76 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHARMANDER
# 77 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SQUIRTLE
# 78 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIKORITA
# 79 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CYNDAQUIL
# 80 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TOTODILE
# 81 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TREECKO
# 82 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TORCHIC
# 83 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_MUDKIP
# 84 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TURTWIG
# 85 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIMCHAR
# 86 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_PIPLUP
# 87 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SNIVY
# 88 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TEPIG
# 89 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_OSHAWOTT
# 90 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHESPIN
# 91 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FENNEKIN
# 92 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FROAKIE
# 93 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_ROWLET
# 94 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_LITTEN
# 95 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_POPPLIO
# 96 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_GROOKEY
# 97 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SCORBUNNY
# 98 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SOBBLE
# 99 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SPRIGATITO
# 100 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FUECOCO
# 101 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_QUAXLY
# 102 "data/maps/Zone0B/scripts.pory"
	delay 48
# 103 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 104 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 105 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 116 "data/maps/Zone0B/scripts.pory"

# 117 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 118 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 119 "data/maps/Zone0B/scripts.pory"

# 120 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 121 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 122 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 123 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 124 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 125 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 126 "data/maps/Zone0B/scripts.pory"

# 127 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeUnique:
# 128 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\n"
# 129 "data/maps/Zone0B/scripts.pory"
	.string "So many different evolutions!$"
# 130 "data/maps/Zone0B/scripts.pory"

# 131 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 132 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 133 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 134 "data/maps/Zone0B/scripts.pory"

# 135 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 136 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 137 "data/maps/Zone0B/scripts.pory"

# 138 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 139 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 140 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 141 "data/maps/Zone0B/scripts.pory"

# 142 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 143 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 144 "data/maps/Zone0B/scripts.pory"

# 145 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 146 "data/maps/Zone0B/scripts.pory"
	lock
# 147 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 148 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 149 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 150 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 151 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 152 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 153 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 154 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 155 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 156 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 157 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 158 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 159 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 160 "data/maps/Zone0B/scripts.pory"
	release
# 161 "data/maps/Zone0B/scripts.pory"
	end
# 162 "data/maps/Zone0B/scripts.pory"

# 163 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 164 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 165 "data/maps/Zone0B/scripts.pory"
	release
# 166 "data/maps/Zone0B/scripts.pory"
	end
# 167 "data/maps/Zone0B/scripts.pory"

# 168 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 169 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 170 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 171 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 172 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 173 "data/maps/Zone0B/scripts.pory"

# 174 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 175 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 176 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 177 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 178 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 179 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 180 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 181 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 182 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 183 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 184 "data/maps/Zone0B/scripts.pory"
	waitstate
# 185 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 186 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 187 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 188 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 189 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 190 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 191 "data/maps/Zone0B/scripts.pory"
	waitse
# 192 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 193 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 194 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 195 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 196 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 197 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 198 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 199 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 200 "data/maps/Zone0B/scripts.pory"
	release
# 201 "data/maps/Zone0B/scripts.pory"
	end
# 202 "data/maps/Zone0B/scripts.pory"

# 203 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 204 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 205 "data/maps/Zone0B/scripts.pory"
	release
# 206 "data/maps/Zone0B/scripts.pory"
	end
# 207 "data/maps/Zone0B/scripts.pory"

# 208 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 209 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 210 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 211 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 212 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 213 "data/maps/Zone0B/scripts.pory"
	end
# 214 "data/maps/Zone0B/scripts.pory"

# 215 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 216 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 217 "data/maps/Zone0B/scripts.pory"
	release
# 218 "data/maps/Zone0B/scripts.pory"
	end
# 219 "data/maps/Zone0B/scripts.pory"

# 220 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 221 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 222 "data/maps/Zone0B/scripts.pory"
	release
# 223 "data/maps/Zone0B/scripts.pory"
	end
# 224 "data/maps/Zone0B/scripts.pory"

# 225 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 226 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 227 "data/maps/Zone0B/scripts.pory"
	release
# 228 "data/maps/Zone0B/scripts.pory"
	end
# 229 "data/maps/Zone0B/scripts.pory"

# 230 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 231 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 232 "data/maps/Zone0B/scripts.pory"
	release
# 233 "data/maps/Zone0B/scripts.pory"
	end
# 234 "data/maps/Zone0B/scripts.pory"

# 235 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 236 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 237 "data/maps/Zone0B/scripts.pory"
	return
# 238 "data/maps/Zone0B/scripts.pory"

# 239 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 240 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 241 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 242 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 243 "data/maps/Zone0B/scripts.pory"
	return
# 244 "data/maps/Zone0B/scripts.pory"

# 245 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 246 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 247 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 248 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 249 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 250 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 251 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 252 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 253 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 254 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 255 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 256 "data/maps/Zone0B/scripts.pory"
	end
# 257 "data/maps/Zone0B/scripts.pory"

# 258 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 259 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 260 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 261 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 262 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 263 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 264 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 265 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 266 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 267 "data/maps/Zone0B/scripts.pory"
	waitstate
# 268 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 269 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 270 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 271 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 272 "data/maps/Zone0B/scripts.pory"
	end
# 273 "data/maps/Zone0B/scripts.pory"

# 274 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 275 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 276 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 277 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 278 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 279 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 280 "data/maps/Zone0B/scripts.pory"
	end
# 281 "data/maps/Zone0B/scripts.pory"

# 282 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 283 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 284 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 285 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 286 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 287 "data/maps/Zone0B/scripts.pory"
	release
# 288 "data/maps/Zone0B/scripts.pory"
	end
# 289 "data/maps/Zone0B/scripts.pory"

# 290 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 291 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 292 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 293 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 294 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 295 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 296 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 297 "data/maps/Zone0B/scripts.pory"
	waitse
# 298 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 299 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 300 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 301 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 302 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 303 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 304 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 305 "data/maps/Zone0B/scripts.pory"
	end
# 306 "data/maps/Zone0B/scripts.pory"

# 307 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 308 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 309 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 310 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 311 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 312 "data/maps/Zone0B/scripts.pory"
	end
# 313 "data/maps/Zone0B/scripts.pory"

# 314 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 315 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 316 "data/maps/Zone0B/scripts.pory"
	release
# 317 "data/maps/Zone0B/scripts.pory"
	end
# 318 "data/maps/Zone0B/scripts.pory"

# 319 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 320 "data/maps/Zone0B/scripts.pory"
	delay_16
# 321 "data/maps/Zone0B/scripts.pory"
	delay_16
# 322 "data/maps/Zone0B/scripts.pory"
	face_left
# 323 "data/maps/Zone0B/scripts.pory"
	delay_16
# 324 "data/maps/Zone0B/scripts.pory"
	delay_16
# 325 "data/maps/Zone0B/scripts.pory"
	face_right
# 326 "data/maps/Zone0B/scripts.pory"
	delay_16
# 327 "data/maps/Zone0B/scripts.pory"
	delay_16
# 328 "data/maps/Zone0B/scripts.pory"
	face_up
# 329 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 330 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 331 "data/maps/Zone0B/scripts.pory"
	delay_16
# 332 "data/maps/Zone0B/scripts.pory"
	delay_16
# 333 "data/maps/Zone0B/scripts.pory"
	delay_16
# 334 "data/maps/Zone0B/scripts.pory"
	delay_16
# 335 "data/maps/Zone0B/scripts.pory"
	delay_16
# 336 "data/maps/Zone0B/scripts.pory"
	face_down
# 337 "data/maps/Zone0B/scripts.pory"
	set_visible
# 338 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 339 "data/maps/Zone0B/scripts.pory"
	step_end
# 340 "data/maps/Zone0B/scripts.pory"

# 341 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 342 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 343 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 344 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 345 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 346 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 347 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 348 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 349 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 350 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 351 "data/maps/Zone0B/scripts.pory"
	release
# 352 "data/maps/Zone0B/scripts.pory"
	end
# 353 "data/maps/Zone0B/scripts.pory"

# 354 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 355 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 356 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 357 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 358 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 359 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 360 "data/maps/Zone0B/scripts.pory"

# 361 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 362 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 363 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 364 "data/maps/Zone0B/scripts.pory"

# 365 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 366 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 367 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 368 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 369 "data/maps/Zone0B/scripts.pory"

# 370 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 371 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 372 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 373 "data/maps/Zone0B/scripts.pory"

# 374 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 375 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 376 "data/maps/Zone0B/scripts.pory"

# 377 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 378 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 379 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 380 "data/maps/Zone0B/scripts.pory"

# 381 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 382 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 383 "data/maps/Zone0B/scripts.pory"

# 384 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 385 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 386 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 387 "data/maps/Zone0B/scripts.pory"

# 388 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 389 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 390 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 391 "data/maps/Zone0B/scripts.pory"

# 392 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 393 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 394 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 395 "data/maps/Zone0B/scripts.pory"

# 396 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 397 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 398 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 399 "data/maps/Zone0B/scripts.pory"

# 400 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 401 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 402 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 403 "data/maps/Zone0B/scripts.pory"

# 404 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 405 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 406 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 407 "data/maps/Zone0B/scripts.pory"

# 408 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 409 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 410 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 411 "data/maps/Zone0B/scripts.pory"

# 412 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 413 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 414 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 415 "data/maps/Zone0B/scripts.pory"

# 416 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 417 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 418 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 419 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 420 "data/maps/Zone0B/scripts.pory"

# 421 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 422 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 423 "data/maps/Zone0B/scripts.pory"

# 424 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 425 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 426 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 427 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 428 "data/maps/Zone0B/scripts.pory"

# 429 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 430 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 431 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 432 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 433 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 434 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 435 "data/maps/Zone0B/scripts.pory"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
# 26 "data/maps/Zone0B/scripts.pory"
	.string "Looks like you've got a full party.\n"
	.string "Make some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
# 35 "data/maps/Zone0B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's evolution\l"
	.string "lines.$"

Zone0B_EventScript_BreederM_Text_0:
# 69 "data/maps/Zone0B/scripts.pory"
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
# 71 "data/maps/Zone0B/scripts.pory"
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
# 73 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
# 104 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 112 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"