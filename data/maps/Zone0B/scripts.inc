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
# 104 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 105 "data/maps/Zone0B/scripts.pory"
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
	delay 48
# 100 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 101 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 113 "data/maps/Zone0B/scripts.pory"

# 114 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 115 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 116 "data/maps/Zone0B/scripts.pory"

# 117 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 118 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 119 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 120 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 121 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 122 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 123 "data/maps/Zone0B/scripts.pory"

# 124 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeUnique:
# 125 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\n"
# 126 "data/maps/Zone0B/scripts.pory"
	.string "So many different evolutions!$"
# 127 "data/maps/Zone0B/scripts.pory"

# 128 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 129 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 130 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 131 "data/maps/Zone0B/scripts.pory"

# 132 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 133 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 134 "data/maps/Zone0B/scripts.pory"

# 135 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 136 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 137 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 138 "data/maps/Zone0B/scripts.pory"

# 139 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 140 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 141 "data/maps/Zone0B/scripts.pory"

# 142 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 143 "data/maps/Zone0B/scripts.pory"
	lock
# 144 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 145 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 146 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 147 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 148 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 149 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 150 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 151 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 152 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 153 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 154 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 155 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 156 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 157 "data/maps/Zone0B/scripts.pory"
	release
# 158 "data/maps/Zone0B/scripts.pory"
	end
# 159 "data/maps/Zone0B/scripts.pory"

# 160 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 161 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 162 "data/maps/Zone0B/scripts.pory"
	release
# 163 "data/maps/Zone0B/scripts.pory"
	end
# 164 "data/maps/Zone0B/scripts.pory"

# 165 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 166 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 167 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 168 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 169 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 170 "data/maps/Zone0B/scripts.pory"

# 171 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 172 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 173 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 174 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 175 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 176 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 177 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 178 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 179 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 180 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 181 "data/maps/Zone0B/scripts.pory"
	waitstate
# 182 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 183 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 184 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 185 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 186 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 187 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 188 "data/maps/Zone0B/scripts.pory"
	waitse
# 189 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 190 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 191 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 192 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 193 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 194 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 195 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 196 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 197 "data/maps/Zone0B/scripts.pory"
	release
# 198 "data/maps/Zone0B/scripts.pory"
	end
# 199 "data/maps/Zone0B/scripts.pory"

# 200 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 201 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 202 "data/maps/Zone0B/scripts.pory"
	release
# 203 "data/maps/Zone0B/scripts.pory"
	end
# 204 "data/maps/Zone0B/scripts.pory"

# 205 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 206 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 207 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 208 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 209 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 210 "data/maps/Zone0B/scripts.pory"
	end
# 211 "data/maps/Zone0B/scripts.pory"

# 212 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 213 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 214 "data/maps/Zone0B/scripts.pory"
	release
# 215 "data/maps/Zone0B/scripts.pory"
	end
# 216 "data/maps/Zone0B/scripts.pory"

# 217 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 218 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 219 "data/maps/Zone0B/scripts.pory"
	release
# 220 "data/maps/Zone0B/scripts.pory"
	end
# 221 "data/maps/Zone0B/scripts.pory"

# 222 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 223 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 224 "data/maps/Zone0B/scripts.pory"
	release
# 225 "data/maps/Zone0B/scripts.pory"
	end
# 226 "data/maps/Zone0B/scripts.pory"

# 227 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 228 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 229 "data/maps/Zone0B/scripts.pory"
	release
# 230 "data/maps/Zone0B/scripts.pory"
	end
# 231 "data/maps/Zone0B/scripts.pory"

# 232 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 233 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 234 "data/maps/Zone0B/scripts.pory"
	return
# 235 "data/maps/Zone0B/scripts.pory"

# 236 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 237 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 238 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 239 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 240 "data/maps/Zone0B/scripts.pory"
	return
# 241 "data/maps/Zone0B/scripts.pory"

# 242 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 243 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 244 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 245 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 246 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 247 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 248 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 249 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 250 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 251 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 252 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 253 "data/maps/Zone0B/scripts.pory"
	end
# 254 "data/maps/Zone0B/scripts.pory"

# 255 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 256 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 257 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 258 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 259 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 260 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 261 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 262 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 263 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 264 "data/maps/Zone0B/scripts.pory"
	waitstate
# 265 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 266 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 267 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 268 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 269 "data/maps/Zone0B/scripts.pory"
	end
# 270 "data/maps/Zone0B/scripts.pory"

# 271 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 272 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 273 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 274 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 275 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 276 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 277 "data/maps/Zone0B/scripts.pory"
	end
# 278 "data/maps/Zone0B/scripts.pory"

# 279 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 280 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 281 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 282 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 283 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 284 "data/maps/Zone0B/scripts.pory"
	release
# 285 "data/maps/Zone0B/scripts.pory"
	end
# 286 "data/maps/Zone0B/scripts.pory"

# 287 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 288 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 289 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 290 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 291 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 292 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 293 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 294 "data/maps/Zone0B/scripts.pory"
	waitse
# 295 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 296 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 297 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 298 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 299 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 300 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 301 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 302 "data/maps/Zone0B/scripts.pory"
	end
# 303 "data/maps/Zone0B/scripts.pory"

# 304 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 305 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 306 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 307 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 308 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 309 "data/maps/Zone0B/scripts.pory"
	end
# 310 "data/maps/Zone0B/scripts.pory"

# 311 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 312 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 313 "data/maps/Zone0B/scripts.pory"
	release
# 314 "data/maps/Zone0B/scripts.pory"
	end
# 315 "data/maps/Zone0B/scripts.pory"

# 316 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 317 "data/maps/Zone0B/scripts.pory"
	delay_16
# 318 "data/maps/Zone0B/scripts.pory"
	delay_16
# 319 "data/maps/Zone0B/scripts.pory"
	face_left
# 320 "data/maps/Zone0B/scripts.pory"
	delay_16
# 321 "data/maps/Zone0B/scripts.pory"
	delay_16
# 322 "data/maps/Zone0B/scripts.pory"
	face_right
# 323 "data/maps/Zone0B/scripts.pory"
	delay_16
# 324 "data/maps/Zone0B/scripts.pory"
	delay_16
# 325 "data/maps/Zone0B/scripts.pory"
	face_up
# 326 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 327 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 328 "data/maps/Zone0B/scripts.pory"
	delay_16
# 329 "data/maps/Zone0B/scripts.pory"
	delay_16
# 330 "data/maps/Zone0B/scripts.pory"
	delay_16
# 331 "data/maps/Zone0B/scripts.pory"
	delay_16
# 332 "data/maps/Zone0B/scripts.pory"
	delay_16
# 333 "data/maps/Zone0B/scripts.pory"
	face_down
# 334 "data/maps/Zone0B/scripts.pory"
	set_visible
# 335 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 336 "data/maps/Zone0B/scripts.pory"
	step_end
# 337 "data/maps/Zone0B/scripts.pory"

# 338 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 339 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 340 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 341 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 342 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 343 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 344 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 345 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 346 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 347 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 348 "data/maps/Zone0B/scripts.pory"
	release
# 349 "data/maps/Zone0B/scripts.pory"
	end
# 350 "data/maps/Zone0B/scripts.pory"

# 351 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 352 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 353 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 354 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 355 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 356 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 357 "data/maps/Zone0B/scripts.pory"

# 358 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 359 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 360 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 361 "data/maps/Zone0B/scripts.pory"

# 362 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 363 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 364 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 365 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 366 "data/maps/Zone0B/scripts.pory"

# 367 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 368 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 369 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 370 "data/maps/Zone0B/scripts.pory"

# 371 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 372 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 373 "data/maps/Zone0B/scripts.pory"

# 374 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 375 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 376 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 377 "data/maps/Zone0B/scripts.pory"

# 378 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 379 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 380 "data/maps/Zone0B/scripts.pory"

# 381 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 382 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 383 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 384 "data/maps/Zone0B/scripts.pory"

# 385 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 386 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 387 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 388 "data/maps/Zone0B/scripts.pory"

# 389 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 390 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 391 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 392 "data/maps/Zone0B/scripts.pory"

# 393 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 394 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 395 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 396 "data/maps/Zone0B/scripts.pory"

# 397 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 398 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 399 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 400 "data/maps/Zone0B/scripts.pory"

# 401 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 402 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 403 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 404 "data/maps/Zone0B/scripts.pory"

# 405 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 406 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 407 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 408 "data/maps/Zone0B/scripts.pory"

# 409 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 410 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 411 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 412 "data/maps/Zone0B/scripts.pory"

# 413 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 414 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 415 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 416 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 417 "data/maps/Zone0B/scripts.pory"

# 418 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 419 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 420 "data/maps/Zone0B/scripts.pory"

# 421 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 422 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 423 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 424 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 425 "data/maps/Zone0B/scripts.pory"

# 426 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 427 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 428 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 429 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 430 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 431 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 432 "data/maps/Zone0B/scripts.pory"
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
# 101 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 109 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"
