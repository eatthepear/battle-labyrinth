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
# 31 "data/maps/Zone0B/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 32 "data/maps/Zone0B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 252
# 33 "data/maps/Zone0B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/Zone0B/scripts.pory"
	message Zone0B_Text_ReceivedEevee
# 35 "data/maps/Zone0B/scripts.pory"
	waitmessage
# 36 "data/maps/Zone0B/scripts.pory"
	waitfanfare
# 37 "data/maps/Zone0B/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
# 38 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
# 39 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_21
Zone0B_EventScript_EeveeGirl_20:
# 43 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 44 "data/maps/Zone0B/scripts.pory"
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
	checkspeciesclause SPECIES_EEVEE
# 25 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_23
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_17:
# 23 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_16
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_21:
# 40 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 41 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_20

Zone0B_EventScript_EeveeGirl_23:
# 26 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
# 27 "data/maps/Zone0B/scripts.pory"
	release
	end


Zone0B_EventScript_EeveeUnique::
# 48 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeUnique_Text_0
# 49 "data/maps/Zone0B/scripts.pory"
	release
	return


Zone0B_EventScript_BreederM::
# 53 "data/maps/Zone0B/scripts.pory"
	lock
# 54 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 55 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
# 60 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 61 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
# 98 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 99 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_2:
# 56 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 57 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_5:
# 62 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_1
# 63 "data/maps/Zone0B/scripts.pory"
	delay 32
# 64 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_2
# 65 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 66 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_BULBASAUR
# 67 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHARMANDER
# 68 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SQUIRTLE
# 69 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIKORITA
# 70 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CYNDAQUIL
# 71 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TOTODILE
# 72 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TREECKO
# 73 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TORCHIC
# 74 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_MUDKIP
# 75 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TURTWIG
# 76 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIMCHAR
# 77 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_PIPLUP
# 78 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SNIVY
# 79 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TEPIG
# 80 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_OSHAWOTT
# 81 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHESPIN
# 82 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FENNEKIN
# 83 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FROAKIE
# 84 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_ROWLET
# 85 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_LITTEN
# 86 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_POPPLIO
# 87 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_GROOKEY
# 88 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SCORBUNNY
# 89 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SOBBLE
# 90 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SPRIGATITO
# 91 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FUECOCO
# 92 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_QUAXLY
# 93 "data/maps/Zone0B/scripts.pory"
	delay 48
# 94 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 95 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 96 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 107 "data/maps/Zone0B/scripts.pory"

# 108 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 109 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 110 "data/maps/Zone0B/scripts.pory"

# 111 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 112 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 113 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 114 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 115 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 116 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 117 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 118 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 119 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 120 "data/maps/Zone0B/scripts.pory"

# 121 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 122 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 123 "data/maps/Zone0B/scripts.pory"

# 124 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 125 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 126 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 127 "data/maps/Zone0B/scripts.pory"

# 128 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 129 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 130 "data/maps/Zone0B/scripts.pory"

# 131 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 132 "data/maps/Zone0B/scripts.pory"
	lock
# 133 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 134 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 135 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 136 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 137 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 138 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 139 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 140 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 141 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 142 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 143 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 144 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 145 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 146 "data/maps/Zone0B/scripts.pory"
	release
# 147 "data/maps/Zone0B/scripts.pory"
	end
# 148 "data/maps/Zone0B/scripts.pory"

# 149 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 150 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 151 "data/maps/Zone0B/scripts.pory"
	release
# 152 "data/maps/Zone0B/scripts.pory"
	end
# 153 "data/maps/Zone0B/scripts.pory"

# 154 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 155 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 156 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 157 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 158 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 159 "data/maps/Zone0B/scripts.pory"

# 160 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 161 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 162 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 163 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 164 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 165 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 166 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 167 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 168 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 170 "data/maps/Zone0B/scripts.pory"
	waitstate
# 171 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 172 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 173 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 174 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 175 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 176 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 177 "data/maps/Zone0B/scripts.pory"
	waitse
# 178 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 179 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 180 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 181 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 182 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 183 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 184 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 185 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 186 "data/maps/Zone0B/scripts.pory"
	release
# 187 "data/maps/Zone0B/scripts.pory"
	end
# 188 "data/maps/Zone0B/scripts.pory"

# 189 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 190 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 191 "data/maps/Zone0B/scripts.pory"
	release
# 192 "data/maps/Zone0B/scripts.pory"
	end
# 193 "data/maps/Zone0B/scripts.pory"

# 194 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 195 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 196 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 197 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 198 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 199 "data/maps/Zone0B/scripts.pory"
	end
# 200 "data/maps/Zone0B/scripts.pory"

# 201 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 202 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 203 "data/maps/Zone0B/scripts.pory"
	release
# 204 "data/maps/Zone0B/scripts.pory"
	end
# 205 "data/maps/Zone0B/scripts.pory"

# 206 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 207 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 208 "data/maps/Zone0B/scripts.pory"
	release
# 209 "data/maps/Zone0B/scripts.pory"
	end
# 210 "data/maps/Zone0B/scripts.pory"

# 211 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 212 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 213 "data/maps/Zone0B/scripts.pory"
	release
# 214 "data/maps/Zone0B/scripts.pory"
	end
# 215 "data/maps/Zone0B/scripts.pory"

# 216 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 217 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 218 "data/maps/Zone0B/scripts.pory"
	release
# 219 "data/maps/Zone0B/scripts.pory"
	end
# 220 "data/maps/Zone0B/scripts.pory"

# 221 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 222 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 223 "data/maps/Zone0B/scripts.pory"
	return
# 224 "data/maps/Zone0B/scripts.pory"

# 225 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 226 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 227 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 228 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 229 "data/maps/Zone0B/scripts.pory"
	return
# 230 "data/maps/Zone0B/scripts.pory"

# 231 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 232 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 233 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 234 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 235 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 236 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 237 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 238 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 239 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 240 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 241 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 242 "data/maps/Zone0B/scripts.pory"
	end
# 243 "data/maps/Zone0B/scripts.pory"

# 244 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 245 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 246 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 247 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 248 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 249 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 250 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 251 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 252 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 253 "data/maps/Zone0B/scripts.pory"
	waitstate
# 254 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 255 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 256 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 257 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 258 "data/maps/Zone0B/scripts.pory"
	end
# 259 "data/maps/Zone0B/scripts.pory"

# 260 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 261 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 262 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 263 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 264 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 265 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 266 "data/maps/Zone0B/scripts.pory"
	end
# 267 "data/maps/Zone0B/scripts.pory"

# 268 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 269 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 270 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 271 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 272 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 273 "data/maps/Zone0B/scripts.pory"
	release
# 274 "data/maps/Zone0B/scripts.pory"
	end
# 275 "data/maps/Zone0B/scripts.pory"

# 276 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 277 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 278 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 279 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 280 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 281 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 282 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 283 "data/maps/Zone0B/scripts.pory"
	waitse
# 284 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 285 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 286 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 287 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 288 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 289 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 290 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 291 "data/maps/Zone0B/scripts.pory"
	end
# 292 "data/maps/Zone0B/scripts.pory"

# 293 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 294 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 295 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 296 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 297 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 298 "data/maps/Zone0B/scripts.pory"
	end
# 299 "data/maps/Zone0B/scripts.pory"

# 300 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 301 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 302 "data/maps/Zone0B/scripts.pory"
	release
# 303 "data/maps/Zone0B/scripts.pory"
	end
# 304 "data/maps/Zone0B/scripts.pory"

# 305 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 306 "data/maps/Zone0B/scripts.pory"
	delay_16
# 307 "data/maps/Zone0B/scripts.pory"
	delay_16
# 308 "data/maps/Zone0B/scripts.pory"
	face_left
# 309 "data/maps/Zone0B/scripts.pory"
	delay_16
# 310 "data/maps/Zone0B/scripts.pory"
	delay_16
# 311 "data/maps/Zone0B/scripts.pory"
	face_right
# 312 "data/maps/Zone0B/scripts.pory"
	delay_16
# 313 "data/maps/Zone0B/scripts.pory"
	delay_16
# 314 "data/maps/Zone0B/scripts.pory"
	face_up
# 315 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 316 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 317 "data/maps/Zone0B/scripts.pory"
	delay_16
# 318 "data/maps/Zone0B/scripts.pory"
	delay_16
# 319 "data/maps/Zone0B/scripts.pory"
	delay_16
# 320 "data/maps/Zone0B/scripts.pory"
	delay_16
# 321 "data/maps/Zone0B/scripts.pory"
	delay_16
# 322 "data/maps/Zone0B/scripts.pory"
	face_down
# 323 "data/maps/Zone0B/scripts.pory"
	set_visible
# 324 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 325 "data/maps/Zone0B/scripts.pory"
	step_end
# 326 "data/maps/Zone0B/scripts.pory"

# 327 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 328 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 329 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 330 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 331 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 332 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 333 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 334 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 335 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 336 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 337 "data/maps/Zone0B/scripts.pory"
	release
# 338 "data/maps/Zone0B/scripts.pory"
	end
# 339 "data/maps/Zone0B/scripts.pory"

# 340 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 341 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 342 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 343 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 344 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 345 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 346 "data/maps/Zone0B/scripts.pory"

# 347 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 348 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 349 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 350 "data/maps/Zone0B/scripts.pory"

# 351 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 352 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 353 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 354 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 355 "data/maps/Zone0B/scripts.pory"

# 356 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 357 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 358 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 359 "data/maps/Zone0B/scripts.pory"

# 360 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 361 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 362 "data/maps/Zone0B/scripts.pory"

# 363 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 364 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 365 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 366 "data/maps/Zone0B/scripts.pory"

# 367 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 368 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 369 "data/maps/Zone0B/scripts.pory"

# 370 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 371 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 372 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 373 "data/maps/Zone0B/scripts.pory"

# 374 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 375 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 376 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 377 "data/maps/Zone0B/scripts.pory"

# 378 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 379 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 380 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 381 "data/maps/Zone0B/scripts.pory"

# 382 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 383 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 384 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 385 "data/maps/Zone0B/scripts.pory"

# 386 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 387 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 388 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 389 "data/maps/Zone0B/scripts.pory"

# 390 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 391 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 392 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 393 "data/maps/Zone0B/scripts.pory"

# 394 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 395 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 396 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 397 "data/maps/Zone0B/scripts.pory"

# 398 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 399 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 400 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 401 "data/maps/Zone0B/scripts.pory"

# 402 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 403 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 404 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 405 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 406 "data/maps/Zone0B/scripts.pory"

# 407 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 408 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 409 "data/maps/Zone0B/scripts.pory"

# 410 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 411 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 412 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 413 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 414 "data/maps/Zone0B/scripts.pory"

# 415 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 416 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 417 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 418 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 419 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 420 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 421 "data/maps/Zone0B/scripts.pory"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
# 18 "data/maps/Zone0B/scripts.pory"
	.string "Looks like you've got a full party.\nMake some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
# 26 "data/maps/Zone0B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's evolution\l"
	.string "line.$"

Zone0B_EventScript_EeveeUnique_Text_0:
# 48 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\p"
	.string "It evolves through exposure to\n"
	.string "different elemental sources; even a\l"
	.string "fraction of elemental energy, such as\l"
	.string "from a Gem, would be enough to evolve\l"
	.string "it.$"

Zone0B_EventScript_BreederM_Text_0:
# 60 "data/maps/Zone0B/scripts.pory"
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
# 62 "data/maps/Zone0B/scripts.pory"
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
# 64 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
# 95 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 103 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"
