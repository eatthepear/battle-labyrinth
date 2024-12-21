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
# 45 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeGiveaway, MSGBOX_YESNO
# 46 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0B_EventScript_EeveeGirl_10
# 51 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 52 "data/maps/Zone0B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone0B_EventScript_EeveeGirl_16
# 58 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_SureThing, MSGBOX_DEFAULT
# 59 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_23
Zone0B_EventScript_EeveeGirl_21:
# 67 "data/maps/Zone0B/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 68 "data/maps/Zone0B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 252
# 69 "data/maps/Zone0B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 70 "data/maps/Zone0B/scripts.pory"
	message Zone0B_Text_ReceivedEevee
# 71 "data/maps/Zone0B/scripts.pory"
	waitmessage
# 72 "data/maps/Zone0B/scripts.pory"
	waitfanfare
# 73 "data/maps/Zone0B/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
# 74 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
# 75 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_30
Zone0B_EventScript_EeveeGirl_29:
# 79 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 80 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	return

Zone0B_EventScript_EeveeGirl_2:
# 5 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_1

Zone0B_EventScript_EeveeGirl_5:
# 8 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_EEVEE
# 9 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_13
Zone0B_EventScript_EeveeGirl_12:
# 12 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_VAPOREON
# 13 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_19
Zone0B_EventScript_EeveeGirl_18:
# 16 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_JOLTEON
# 17 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_27
Zone0B_EventScript_EeveeGirl_26:
# 20 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_FLAREON
# 21 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_35
Zone0B_EventScript_EeveeGirl_34:
# 24 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_ESPEON
# 25 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_38
Zone0B_EventScript_EeveeGirl_37:
# 28 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_UMBREON
# 29 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_41
Zone0B_EventScript_EeveeGirl_40:
# 32 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_LEAFEON
# 33 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_44
Zone0B_EventScript_EeveeGirl_43:
# 36 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_GLACEON
# 37 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_47
Zone0B_EventScript_EeveeGirl_46:
# 40 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_SYLVEON
# 41 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_49
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_6:
# 7 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_5
	goto Zone0B_EventScript_EeveeGirl_4

Zone0B_EventScript_EeveeGirl_10:
# 47 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_NoThanks
# 48 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_13:
# 10 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_12

Zone0B_EventScript_EeveeGirl_16:
# 53 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_0
# 54 "data/maps/Zone0B/scripts.pory"
	hidemoneybox
# 55 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_19:
# 14 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_18

Zone0B_EventScript_EeveeGirl_22:
# 60 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_EEVEE
# 61 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_32
	goto Zone0B_EventScript_EeveeGirl_21

Zone0B_EventScript_EeveeGirl_23:
# 59 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_22
	goto Zone0B_EventScript_EeveeGirl_21

Zone0B_EventScript_EeveeGirl_27:
# 18 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_26

Zone0B_EventScript_EeveeGirl_30:
# 76 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 77 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_29

Zone0B_EventScript_EeveeGirl_32:
# 62 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
# 63 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_35:
# 22 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_34

Zone0B_EventScript_EeveeGirl_38:
# 26 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_37

Zone0B_EventScript_EeveeGirl_41:
# 30 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_40

Zone0B_EventScript_EeveeGirl_44:
# 34 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_43

Zone0B_EventScript_EeveeGirl_47:
# 38 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_46

Zone0B_EventScript_EeveeGirl_49:
# 42 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_4


Zone0B_EventScript_EeveeUnique::
# 84 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeUnique
# 85 "data/maps/Zone0B/scripts.pory"
	release
	return


Zone0B_EventScript_BreederM::
# 89 "data/maps/Zone0B/scripts.pory"
	lock
# 90 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 91 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
# 96 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 97 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
# 134 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 135 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_2:
# 92 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 93 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_5:
# 98 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_1
# 99 "data/maps/Zone0B/scripts.pory"
	delay 32
# 100 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_2
# 101 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 102 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_BULBASAUR
# 103 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHARMANDER
# 104 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SQUIRTLE
# 105 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIKORITA
# 106 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CYNDAQUIL
# 107 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TOTODILE
# 108 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TREECKO
# 109 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TORCHIC
# 110 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_MUDKIP
# 111 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TURTWIG
# 112 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIMCHAR
# 113 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_PIPLUP
# 114 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SNIVY
# 115 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TEPIG
# 116 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_OSHAWOTT
# 117 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHESPIN
# 118 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FENNEKIN
# 119 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FROAKIE
# 120 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_ROWLET
# 121 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_LITTEN
# 122 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_POPPLIO
# 123 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_GROOKEY
# 124 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SCORBUNNY
# 125 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SOBBLE
# 126 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SPRIGATITO
# 127 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FUECOCO
# 128 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_QUAXLY
# 129 "data/maps/Zone0B/scripts.pory"
	delay 48
# 130 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 131 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 132 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 143 "data/maps/Zone0B/scripts.pory"

# 144 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 145 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 146 "data/maps/Zone0B/scripts.pory"

# 147 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 148 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 149 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 150 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 151 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 152 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 153 "data/maps/Zone0B/scripts.pory"

# 154 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeUnique:
# 155 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\n"
# 156 "data/maps/Zone0B/scripts.pory"
	.string "So many different evolutions!$"
# 157 "data/maps/Zone0B/scripts.pory"

# 158 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 159 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 160 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 161 "data/maps/Zone0B/scripts.pory"

# 162 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 163 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 164 "data/maps/Zone0B/scripts.pory"

# 165 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 166 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 167 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 168 "data/maps/Zone0B/scripts.pory"

# 169 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 170 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 171 "data/maps/Zone0B/scripts.pory"

# 172 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 173 "data/maps/Zone0B/scripts.pory"
	lock
# 174 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 175 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 176 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 177 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 178 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 179 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 180 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 181 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 182 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 183 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 184 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 185 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 186 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 187 "data/maps/Zone0B/scripts.pory"
	release
# 188 "data/maps/Zone0B/scripts.pory"
	end
# 189 "data/maps/Zone0B/scripts.pory"

# 190 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 191 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 192 "data/maps/Zone0B/scripts.pory"
	release
# 193 "data/maps/Zone0B/scripts.pory"
	end
# 194 "data/maps/Zone0B/scripts.pory"

# 195 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 196 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 197 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 198 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 199 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 200 "data/maps/Zone0B/scripts.pory"

# 201 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 202 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 203 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 204 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 205 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 206 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 207 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 208 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 209 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 211 "data/maps/Zone0B/scripts.pory"
	waitstate
# 212 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 213 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 214 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 215 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 216 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 217 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 218 "data/maps/Zone0B/scripts.pory"
	waitse
# 219 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 220 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 221 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 222 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 223 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 224 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 225 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 226 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 227 "data/maps/Zone0B/scripts.pory"
	release
# 228 "data/maps/Zone0B/scripts.pory"
	end
# 229 "data/maps/Zone0B/scripts.pory"

# 230 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 231 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 232 "data/maps/Zone0B/scripts.pory"
	release
# 233 "data/maps/Zone0B/scripts.pory"
	end
# 234 "data/maps/Zone0B/scripts.pory"

# 235 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 236 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 237 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 238 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 239 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 240 "data/maps/Zone0B/scripts.pory"
	end
# 241 "data/maps/Zone0B/scripts.pory"

# 242 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 243 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 244 "data/maps/Zone0B/scripts.pory"
	release
# 245 "data/maps/Zone0B/scripts.pory"
	end
# 246 "data/maps/Zone0B/scripts.pory"

# 247 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 248 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 249 "data/maps/Zone0B/scripts.pory"
	release
# 250 "data/maps/Zone0B/scripts.pory"
	end
# 251 "data/maps/Zone0B/scripts.pory"

# 252 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 253 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 254 "data/maps/Zone0B/scripts.pory"
	release
# 255 "data/maps/Zone0B/scripts.pory"
	end
# 256 "data/maps/Zone0B/scripts.pory"

# 257 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 258 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 259 "data/maps/Zone0B/scripts.pory"
	release
# 260 "data/maps/Zone0B/scripts.pory"
	end
# 261 "data/maps/Zone0B/scripts.pory"

# 262 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 263 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 264 "data/maps/Zone0B/scripts.pory"
	return
# 265 "data/maps/Zone0B/scripts.pory"

# 266 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 267 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 268 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 269 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 270 "data/maps/Zone0B/scripts.pory"
	return
# 271 "data/maps/Zone0B/scripts.pory"

# 272 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 273 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 274 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 275 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 276 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 277 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 278 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 279 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 280 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 281 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 282 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 283 "data/maps/Zone0B/scripts.pory"
	end
# 284 "data/maps/Zone0B/scripts.pory"

# 285 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 286 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 287 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 288 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 289 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 290 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 291 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 292 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 293 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 294 "data/maps/Zone0B/scripts.pory"
	waitstate
# 295 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 296 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 297 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 298 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 299 "data/maps/Zone0B/scripts.pory"
	end
# 300 "data/maps/Zone0B/scripts.pory"

# 301 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 302 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 303 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 304 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 305 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 306 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 307 "data/maps/Zone0B/scripts.pory"
	end
# 308 "data/maps/Zone0B/scripts.pory"

# 309 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 310 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 311 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 312 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 313 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 314 "data/maps/Zone0B/scripts.pory"
	release
# 315 "data/maps/Zone0B/scripts.pory"
	end
# 316 "data/maps/Zone0B/scripts.pory"

# 317 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 318 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 319 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 320 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 321 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 322 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 323 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 324 "data/maps/Zone0B/scripts.pory"
	waitse
# 325 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 326 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 327 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 328 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 329 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 330 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 331 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 332 "data/maps/Zone0B/scripts.pory"
	end
# 333 "data/maps/Zone0B/scripts.pory"

# 334 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 335 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 336 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 337 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 338 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 339 "data/maps/Zone0B/scripts.pory"
	end
# 340 "data/maps/Zone0B/scripts.pory"

# 341 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 342 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 343 "data/maps/Zone0B/scripts.pory"
	release
# 344 "data/maps/Zone0B/scripts.pory"
	end
# 345 "data/maps/Zone0B/scripts.pory"

# 346 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 347 "data/maps/Zone0B/scripts.pory"
	delay_16
# 348 "data/maps/Zone0B/scripts.pory"
	delay_16
# 349 "data/maps/Zone0B/scripts.pory"
	face_left
# 350 "data/maps/Zone0B/scripts.pory"
	delay_16
# 351 "data/maps/Zone0B/scripts.pory"
	delay_16
# 352 "data/maps/Zone0B/scripts.pory"
	face_right
# 353 "data/maps/Zone0B/scripts.pory"
	delay_16
# 354 "data/maps/Zone0B/scripts.pory"
	delay_16
# 355 "data/maps/Zone0B/scripts.pory"
	face_up
# 356 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 357 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 358 "data/maps/Zone0B/scripts.pory"
	delay_16
# 359 "data/maps/Zone0B/scripts.pory"
	delay_16
# 360 "data/maps/Zone0B/scripts.pory"
	delay_16
# 361 "data/maps/Zone0B/scripts.pory"
	delay_16
# 362 "data/maps/Zone0B/scripts.pory"
	delay_16
# 363 "data/maps/Zone0B/scripts.pory"
	face_down
# 364 "data/maps/Zone0B/scripts.pory"
	set_visible
# 365 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 366 "data/maps/Zone0B/scripts.pory"
	step_end
# 367 "data/maps/Zone0B/scripts.pory"

# 368 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 369 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 370 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 371 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 372 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 373 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 374 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 375 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 376 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 377 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 378 "data/maps/Zone0B/scripts.pory"
	release
# 379 "data/maps/Zone0B/scripts.pory"
	end
# 380 "data/maps/Zone0B/scripts.pory"

# 381 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 382 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 383 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 384 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 385 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 386 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 387 "data/maps/Zone0B/scripts.pory"

# 388 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 389 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 390 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 391 "data/maps/Zone0B/scripts.pory"

# 392 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 393 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 394 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 395 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 396 "data/maps/Zone0B/scripts.pory"

# 397 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 398 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 399 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 400 "data/maps/Zone0B/scripts.pory"

# 401 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 402 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 403 "data/maps/Zone0B/scripts.pory"

# 404 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 405 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 406 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 407 "data/maps/Zone0B/scripts.pory"

# 408 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 409 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 410 "data/maps/Zone0B/scripts.pory"

# 411 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 412 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 413 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 414 "data/maps/Zone0B/scripts.pory"

# 415 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 416 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 417 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 418 "data/maps/Zone0B/scripts.pory"

# 419 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 420 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 421 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 422 "data/maps/Zone0B/scripts.pory"

# 423 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 424 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 425 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 426 "data/maps/Zone0B/scripts.pory"

# 427 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 428 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 429 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 430 "data/maps/Zone0B/scripts.pory"

# 431 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 432 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 433 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 434 "data/maps/Zone0B/scripts.pory"

# 435 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 436 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 437 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 438 "data/maps/Zone0B/scripts.pory"

# 439 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 440 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 441 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 442 "data/maps/Zone0B/scripts.pory"

# 443 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 444 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 445 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 446 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 447 "data/maps/Zone0B/scripts.pory"

# 448 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 449 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 450 "data/maps/Zone0B/scripts.pory"

# 451 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 452 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 453 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 454 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 455 "data/maps/Zone0B/scripts.pory"

# 456 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 457 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 458 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 459 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 460 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 461 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 462 "data/maps/Zone0B/scripts.pory"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
# 53 "data/maps/Zone0B/scripts.pory"
	.string "Looks like you've got a full party.\n"
	.string "Make some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
# 62 "data/maps/Zone0B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's evolution\l"
	.string "lines.$"

Zone0B_EventScript_BreederM_Text_0:
# 96 "data/maps/Zone0B/scripts.pory"
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
# 98 "data/maps/Zone0B/scripts.pory"
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
# 100 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
# 131 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 139 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"
