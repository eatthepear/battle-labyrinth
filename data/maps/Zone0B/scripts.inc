Zone0B_EventScript_EeveeGirl::
# 2 "data/maps/Zone0B/scripts.pory"
	lock
# 3 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 4 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_RECEIVED_EEVEE, Zone0B_EventScript_EeveeGirl_2
Zone0B_EventScript_EeveeGirl_1:
# 7 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_EeveeGiveaway, MSGBOX_YESNO
# 8 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone0B_EventScript_EeveeGirl_5
# 13 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 14 "data/maps/Zone0B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone0B_EventScript_EeveeGirl_8
# 19 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_SureThing, MSGBOX_DEFAULT
# 20 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_EventScript_EeveeGirl_12
Zone0B_EventScript_EeveeGirl_10:
# 28 "data/maps/Zone0B/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 29 "data/maps/Zone0B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 252
# 30 "data/maps/Zone0B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 31 "data/maps/Zone0B/scripts.pory"
	message Zone0B_Text_ReceivedEevee
# 32 "data/maps/Zone0B/scripts.pory"
	waitmessage
# 33 "data/maps/Zone0B/scripts.pory"
	waitfanfare
# 34 "data/maps/Zone0B/scripts.pory"
	bufferspeciesname 0, SPECIES_EEVEE
# 35 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_HowBoutNickname, MSGBOX_YESNO
# 36 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_EeveeGirl_16
Zone0B_EventScript_EeveeGirl_15:
# 40 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 41 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	return

Zone0B_EventScript_EeveeGirl_2:
# 5 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_EventScript_EeveeUnique
	goto Zone0B_EventScript_EeveeGirl_1

Zone0B_EventScript_EeveeGirl_5:
# 9 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_NoThanks
# 10 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_8:
# 15 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_0
# 16 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_EeveeGirl_11:
# 21 "data/maps/Zone0B/scripts.pory"
	checkspeciesclause SPECIES_EEVEE
# 22 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone0B_EventScript_EeveeGirl_18
	goto Zone0B_EventScript_EeveeGirl_10

Zone0B_EventScript_EeveeGirl_12:
# 20 "data/maps/Zone0B/scripts.pory"
	goto_if_unset FLAG_SETTINGS_RANDOMIZER, Zone0B_EventScript_EeveeGirl_11
	goto Zone0B_EventScript_EeveeGirl_10

Zone0B_EventScript_EeveeGirl_16:
# 37 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 38 "data/maps/Zone0B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone0B_EventScript_EeveeGirl_15

Zone0B_EventScript_EeveeGirl_18:
# 23 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeGirl_Text_1
# 24 "data/maps/Zone0B/scripts.pory"
	release
	end


Zone0B_EventScript_EeveeUnique::
# 45 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_EeveeUnique_Text_0
# 46 "data/maps/Zone0B/scripts.pory"
	release
	return


Zone0B_EventScript_BreederM::
# 50 "data/maps/Zone0B/scripts.pory"
	lock
# 51 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 52 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES, Zone0B_EventScript_BreederM_2
# 57 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_0, MSGBOX_YESNO
# 58 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone0B_EventScript_BreederM_5
Zone0B_EventScript_BreederM_4:
# 95 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 96 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_2:
# 53 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_Text_Pokedex, MSGBOX_DEFAULT
# 54 "data/maps/Zone0B/scripts.pory"
	release
	end

Zone0B_EventScript_BreederM_5:
# 59 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_1
# 60 "data/maps/Zone0B/scripts.pory"
	delay 32
# 61 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_2
# 62 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_BULBASAUR
# 64 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHARMANDER
# 65 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SQUIRTLE
# 66 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIKORITA
# 67 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CYNDAQUIL
# 68 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TOTODILE
# 69 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TREECKO
# 70 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TORCHIC
# 71 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_MUDKIP
# 72 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TURTWIG
# 73 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHIMCHAR
# 74 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_PIPLUP
# 75 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SNIVY
# 76 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_TEPIG
# 77 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_OSHAWOTT
# 78 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_CHESPIN
# 79 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FENNEKIN
# 80 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FROAKIE
# 81 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_ROWLET
# 82 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_LITTEN
# 83 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_POPPLIO
# 84 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_GROOKEY
# 85 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SCORBUNNY
# 86 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SOBBLE
# 87 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_SPRIGATITO
# 88 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_FUECOCO
# 89 "data/maps/Zone0B/scripts.pory"
	setseenmon SPECIES_QUAXLY
# 90 "data/maps/Zone0B/scripts.pory"
	delay 48
# 91 "data/maps/Zone0B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 92 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_EventScript_BreederM_Text_3, MSGBOX_DEFAULT
# 93 "data/maps/Zone0B/scripts.pory"
	setflag FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES
	goto Zone0B_EventScript_BreederM_4


# 104 "data/maps/Zone0B/scripts.pory"

# 105 "data/maps/Zone0B/scripts.pory"
Zone0B_MapScripts::
# 106 "data/maps/Zone0B/scripts.pory"
	.byte 0
# 107 "data/maps/Zone0B/scripts.pory"

# 108 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_EeveeGiveaway:
# 109 "data/maps/Zone0B/scripts.pory"
	.string "Hiya!\p"
# 110 "data/maps/Zone0B/scripts.pory"
	.string "We're running a special gift\n"
# 111 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon promotion!\p"
# 112 "data/maps/Zone0B/scripts.pory"
	.string "If you'd like, you can have your\n"
# 113 "data/maps/Zone0B/scripts.pory"
	.string "very own Eevee! What do you say?$"
# 114 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_NoThanks:
# 115 "data/maps/Zone0B/scripts.pory"
	.string "No? Well, I'll be here anyways,\n"
# 116 "data/maps/Zone0B/scripts.pory"
	.string "in case you change your mind.$"
# 117 "data/maps/Zone0B/scripts.pory"

# 118 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_SureThing:
# 119 "data/maps/Zone0B/scripts.pory"
	.string "Sure thing! Here ya go!$"
# 120 "data/maps/Zone0B/scripts.pory"

# 121 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_HowBoutNickname:
# 122 "data/maps/Zone0B/scripts.pory"
	.string "Would you like to give a nickname\n"
# 123 "data/maps/Zone0B/scripts.pory"
	.string "to Eevee?$"
# 124 "data/maps/Zone0B/scripts.pory"

# 125 "data/maps/Zone0B/scripts.pory"
Zone0B_Text_ReceivedEevee:
# 126 "data/maps/Zone0B/scripts.pory"
	.string "Received Eevee!$"
# 127 "data/maps/Zone0B/scripts.pory"

# 128 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DaycareWoman::
# 129 "data/maps/Zone0B/scripts.pory"
	lock
# 130 "data/maps/Zone0B/scripts.pory"
	faceplayer
# 131 "data/maps/Zone0B/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone0B_PokemonDayCare_EventScript_Closed
# 132 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 133 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 134 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_EggWaiting
# 135 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 136 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OneMonInDaycare
# 137 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 138 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare
# 139 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
# 140 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 141 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 142 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
# 143 "data/maps/Zone0B/scripts.pory"
	release
# 144 "data/maps/Zone0B/scripts.pory"
	end
# 145 "data/maps/Zone0B/scripts.pory"

# 146 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_Closed:
# 147 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_Closed, MSGBOX_AUTOCLOSE
# 148 "data/maps/Zone0B/scripts.pory"
	release
# 149 "data/maps/Zone0B/scripts.pory"
	end
# 150 "data/maps/Zone0B/scripts.pory"

# 151 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_Closed:
# 152 "data/maps/Zone0B/scripts.pory"
	.string "Apologies, we have too many Pokémon\n"
# 153 "data/maps/Zone0B/scripts.pory"
	.string "to take care of and not enough\l"
# 154 "data/maps/Zone0B/scripts.pory"
	.string "space, so we will be unable to take\l"
# 155 "data/maps/Zone0B/scripts.pory"
	.string "care of your Pokémon at this time.$"
# 156 "data/maps/Zone0B/scripts.pory"

# 157 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_GiveMonToRaise:
# 158 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 159 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 160 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneMon
# 161 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
# 162 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 2
# 163 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons
# 164 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
# 165 "data/maps/Zone0B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data/maps/Zone0B/scripts.pory"
	special ChooseSendDaycareMon
# 167 "data/maps/Zone0B/scripts.pory"
	waitstate
# 168 "data/maps/Zone0B/scripts.pory"
	compare VAR_0x8004, 255
# 169 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 170 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 171 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 172 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon
# 173 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 174 "data/maps/Zone0B/scripts.pory"
	waitse
# 175 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_0x8005, 0
# 176 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
# 177 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 178 "data/maps/Zone0B/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 179 "data/maps/Zone0B/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 180 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 181 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 182 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore
# 183 "data/maps/Zone0B/scripts.pory"
	release
# 184 "data/maps/Zone0B/scripts.pory"
	end
# 185 "data/maps/Zone0B/scripts.pory"

# 186 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_ComeAgain:
# 187 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 188 "data/maps/Zone0B/scripts.pory"
	release
# 189 "data/maps/Zone0B/scripts.pory"
	end
# 190 "data/maps/Zone0B/scripts.pory"

# 191 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CanRaiseOneMore:
# 192 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 193 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 194 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 195 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 196 "data/maps/Zone0B/scripts.pory"
	end
# 197 "data/maps/Zone0B/scripts.pory"

# 198 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneMon:
# 199 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
# 200 "data/maps/Zone0B/scripts.pory"
	release
# 201 "data/maps/Zone0B/scripts.pory"
	end
# 202 "data/maps/Zone0B/scripts.pory"

# 203 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyOneAliveMon:
# 204 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
# 205 "data/maps/Zone0B/scripts.pory"
	release
# 206 "data/maps/Zone0B/scripts.pory"
	end
# 207 "data/maps/Zone0B/scripts.pory"

# 208 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OnlyTwoAliveMons:
# 209 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
# 210 "data/maps/Zone0B/scripts.pory"
	release
# 211 "data/maps/Zone0B/scripts.pory"
	end
# 212 "data/maps/Zone0B/scripts.pory"

# 213 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_EggWaiting:
# 214 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
# 215 "data/maps/Zone0B/scripts.pory"
	release
# 216 "data/maps/Zone0B/scripts.pory"
	end
# 217 "data/maps/Zone0B/scripts.pory"

# 218 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels:
# 219 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
# 220 "data/maps/Zone0B/scripts.pory"
	return
# 221 "data/maps/Zone0B/scripts.pory"

# 222 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained:
# 223 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 224 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 0
# 225 "data/maps/Zone0B/scripts.pory"
	call_if_ne Zone0B_PokemonDayCare_EventScript_YourMonHasGrownXLevels
# 226 "data/maps/Zone0B/scripts.pory"
	return
# 227 "data/maps/Zone0B/scripts.pory"

# 228 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_OneMonInDaycare:
# 229 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 230 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 231 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 232 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 233 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 234 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_GiveMonToRaise
# 235 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 236 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 237 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 238 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 239 "data/maps/Zone0B/scripts.pory"
	end
# 240 "data/maps/Zone0B/scripts.pory"

# 241 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TryRetrieveMon:
# 242 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 243 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 244 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_NoRoom
# 245 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 246 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 247 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 248 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CostPrompt
# 249 "data/maps/Zone0B/scripts.pory"
	special ShowDaycareLevelMenu
# 250 "data/maps/Zone0B/scripts.pory"
	waitstate
# 251 "data/maps/Zone0B/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 252 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
# 253 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_ComeAgain
# 254 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_CostPrompt
# 255 "data/maps/Zone0B/scripts.pory"
	end
# 256 "data/maps/Zone0B/scripts.pory"

# 257 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CostPrompt:
# 258 "data/maps/Zone0B/scripts.pory"
	special GetDaycareCost
# 259 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
# 260 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 261 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney
# 262 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 263 "data/maps/Zone0B/scripts.pory"
	end
# 264 "data/maps/Zone0B/scripts.pory"

# 265 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_CheckEnoughMoney:
# 266 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 267 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, 1
# 268 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_RetrieveMon
# 269 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 270 "data/maps/Zone0B/scripts.pory"
	release
# 271 "data/maps/Zone0B/scripts.pory"
	end
# 272 "data/maps/Zone0B/scripts.pory"

# 273 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_RetrieveMon:
# 274 "data/maps/Zone0B/scripts.pory"
	applymovement LOCALID_DAYCARE_LADY, Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon
# 275 "data/maps/Zone0B/scripts.pory"
	waitmovement 0
# 276 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 277 "data/maps/Zone0B/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 278 "data/maps/Zone0B/scripts.pory"
	playse SE_SHOP
# 279 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
# 280 "data/maps/Zone0B/scripts.pory"
	waitse
# 281 "data/maps/Zone0B/scripts.pory"
	playmoncry VAR_RESULT, 0
# 282 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
# 283 "data/maps/Zone0B/scripts.pory"
	waitmoncry
# 284 "data/maps/Zone0B/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 285 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 286 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon
# 287 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 288 "data/maps/Zone0B/scripts.pory"
	end
# 289 "data/maps/Zone0B/scripts.pory"

# 290 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_AskRetrieveOtherMon:
# 291 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 292 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 293 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 294 "data/maps/Zone0B/scripts.pory"
	goto Zone0B_PokemonDayCare_EventScript_ComeAgain
# 295 "data/maps/Zone0B/scripts.pory"
	end
# 296 "data/maps/Zone0B/scripts.pory"

# 297 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_NoRoom:
# 298 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
# 299 "data/maps/Zone0B/scripts.pory"
	release
# 300 "data/maps/Zone0B/scripts.pory"
	end
# 301 "data/maps/Zone0B/scripts.pory"

# 302 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Movement_RetrieveDaycareMon:
# 303 "data/maps/Zone0B/scripts.pory"
	delay_16
# 304 "data/maps/Zone0B/scripts.pory"
	delay_16
# 305 "data/maps/Zone0B/scripts.pory"
	face_left
# 306 "data/maps/Zone0B/scripts.pory"
	delay_16
# 307 "data/maps/Zone0B/scripts.pory"
	delay_16
# 308 "data/maps/Zone0B/scripts.pory"
	face_right
# 309 "data/maps/Zone0B/scripts.pory"
	delay_16
# 310 "data/maps/Zone0B/scripts.pory"
	delay_16
# 311 "data/maps/Zone0B/scripts.pory"
	face_up
# 312 "data/maps/Zone0B/scripts.pory"
	walk_slow_up
# 313 "data/maps/Zone0B/scripts.pory"
	set_invisible
# 314 "data/maps/Zone0B/scripts.pory"
	delay_16
# 315 "data/maps/Zone0B/scripts.pory"
	delay_16
# 316 "data/maps/Zone0B/scripts.pory"
	delay_16
# 317 "data/maps/Zone0B/scripts.pory"
	delay_16
# 318 "data/maps/Zone0B/scripts.pory"
	delay_16
# 319 "data/maps/Zone0B/scripts.pory"
	face_down
# 320 "data/maps/Zone0B/scripts.pory"
	set_visible
# 321 "data/maps/Zone0B/scripts.pory"
	walk_slow_down
# 322 "data/maps/Zone0B/scripts.pory"
	step_end
# 323 "data/maps/Zone0B/scripts.pory"

# 324 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_EventScript_TwoMonsInDaycare:
# 325 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
# 326 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 0
# 327 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 328 "data/maps/Zone0B/scripts.pory"
	setvar VAR_0x8004, 1
# 329 "data/maps/Zone0B/scripts.pory"
	call Zone0B_PokemonDayCare_EventScript_DisplayLevelsGained
# 330 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 331 "data/maps/Zone0B/scripts.pory"
	compare VAR_RESULT, YES
# 332 "data/maps/Zone0B/scripts.pory"
	goto_if_eq Zone0B_PokemonDayCare_EventScript_TryRetrieveMon
# 333 "data/maps/Zone0B/scripts.pory"
	msgbox Zone0B_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
# 334 "data/maps/Zone0B/scripts.pory"
	release
# 335 "data/maps/Zone0B/scripts.pory"
	end
# 336 "data/maps/Zone0B/scripts.pory"

# 337 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
# 338 "data/maps/Zone0B/scripts.pory"
	.string "I'm the Day-Care Lady.\p"
# 339 "data/maps/Zone0B/scripts.pory"
	.string "We can raise a Pokémon for you\n"
# 340 "data/maps/Zone0B/scripts.pory"
	.string "for a flat cost of ¥500,\l"
# 341 "data/maps/Zone0B/scripts.pory"
	.string "plus ¥200 per level gained.\p"
# 342 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one?$"
# 343 "data/maps/Zone0B/scripts.pory"

# 344 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhichMonShouldWeRaise:
# 345 "data/maps/Zone0B/scripts.pory"
	.string "Which Pokémon should we raise for\n"
# 346 "data/maps/Zone0B/scripts.pory"
	.string "you?$"
# 347 "data/maps/Zone0B/scripts.pory"

# 348 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WellRaiseYourMon:
# 349 "data/maps/Zone0B/scripts.pory"
	.string "Fine, we'll raise your {STR_VAR_1}\n"
# 350 "data/maps/Zone0B/scripts.pory"
	.string "for a while.\p"
# 351 "data/maps/Zone0B/scripts.pory"
	.string "Come back for it later.$"
# 352 "data/maps/Zone0B/scripts.pory"

# 353 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WeCanRaiseOneMore:
# 354 "data/maps/Zone0B/scripts.pory"
	.string "We can raise two of your Pokémon.\n"
# 355 "data/maps/Zone0B/scripts.pory"
	.string "Would you like us to raise one more?$"
# 356 "data/maps/Zone0B/scripts.pory"

# 357 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HusbandWasLookingForYou:
# 358 "data/maps/Zone0B/scripts.pory"
	.string "My husband was looking for you.$"
# 359 "data/maps/Zone0B/scripts.pory"

# 360 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_FineThenComeAgain:
# 361 "data/maps/Zone0B/scripts.pory"
	.string "Oh, fine, then.\n"
# 362 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 363 "data/maps/Zone0B/scripts.pory"

# 364 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_NotEnoughMoney:
# 365 "data/maps/Zone0B/scripts.pory"
	.string "You don't have enough money…$"
# 366 "data/maps/Zone0B/scripts.pory"

# 367 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeOtherOneBackToo:
# 368 "data/maps/Zone0B/scripts.pory"
	.string "Will you take back the other one,\n"
# 369 "data/maps/Zone0B/scripts.pory"
	.string "too?$"
# 370 "data/maps/Zone0B/scripts.pory"

# 371 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ComeAgain:
# 372 "data/maps/Zone0B/scripts.pory"
	.string "Fine.\n"
# 373 "data/maps/Zone0B/scripts.pory"
	.string "Come again.$"
# 374 "data/maps/Zone0B/scripts.pory"

# 375 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_GoodToSeeYou:
# 376 "data/maps/Zone0B/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 377 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon can only be doing good!$"
# 378 "data/maps/Zone0B/scripts.pory"

# 379 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourMonHasGrownXLevels:
# 380 "data/maps/Zone0B/scripts.pory"
	.string "By level, your {STR_VAR_1} has\n"
# 381 "data/maps/Zone0B/scripts.pory"
	.string "grown by {STR_VAR_2}.$"
# 382 "data/maps/Zone0B/scripts.pory"

# 383 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YourTeamIsFull:
# 384 "data/maps/Zone0B/scripts.pory"
	.string "Your Pokémon team is full.\n"
# 385 "data/maps/Zone0B/scripts.pory"
	.string "Make room, then come see me.$"
# 386 "data/maps/Zone0B/scripts.pory"

# 387 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_ItWillCostX:
# 388 "data/maps/Zone0B/scripts.pory"
	.string "If you want your {STR_VAR_1} back,\n"
# 389 "data/maps/Zone0B/scripts.pory"
	.string "it will cost ¥{STR_VAR_2}.$"
# 390 "data/maps/Zone0B/scripts.pory"

# 391 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_HeresYourMon:
# 392 "data/maps/Zone0B/scripts.pory"
	.string "Perfect!\n"
# 393 "data/maps/Zone0B/scripts.pory"
	.string "Here's your Pokémon.$"
# 394 "data/maps/Zone0B/scripts.pory"

# 395 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TookBackMon:
# 396 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} took back {STR_VAR_1} from\n"
# 397 "data/maps/Zone0B/scripts.pory"
	.string "the Day-Care Lady.$"
# 398 "data/maps/Zone0B/scripts.pory"

# 399 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YouHaveJustOneMon:
# 400 "data/maps/Zone0B/scripts.pory"
	.string "Oh? But you have just one\n"
# 401 "data/maps/Zone0B/scripts.pory"
	.string "Pokémon.\p"
# 402 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 403 "data/maps/Zone0B/scripts.pory"

# 404 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_TakeYourMonBack:
# 405 "data/maps/Zone0B/scripts.pory"
	.string "Will you take your Pokémon back?$"
# 406 "data/maps/Zone0B/scripts.pory"

# 407 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_WhatWillYouBattleWith:
# 408 "data/maps/Zone0B/scripts.pory"
	.string "If you leave me that Pokémon,\n"
# 409 "data/maps/Zone0B/scripts.pory"
	.string "what will you battle with?\p"
# 410 "data/maps/Zone0B/scripts.pory"
	.string "Come back another time.$"
# 411 "data/maps/Zone0B/scripts.pory"

# 412 "data/maps/Zone0B/scripts.pory"
Zone0B_PokemonDayCare_Text_YoullBeLeftWithJustOne:
# 413 "data/maps/Zone0B/scripts.pory"
	.string "Huh?\n"
# 414 "data/maps/Zone0B/scripts.pory"
	.string "Now, now.\p"
# 415 "data/maps/Zone0B/scripts.pory"
	.string "If you leave that Pokémon with\n"
# 416 "data/maps/Zone0B/scripts.pory"
	.string "me, you'll be left with just one.\p"
# 417 "data/maps/Zone0B/scripts.pory"
	.string "You will be better off if you catch\n"
# 418 "data/maps/Zone0B/scripts.pory"
	.string "some more, I dare say.$"

Zone0B_EventScript_EeveeGirl_Text_0:
# 15 "data/maps/Zone0B/scripts.pory"
	.string "Looks like you've got a full party.\nMake some space, then come back!$"

Zone0B_EventScript_EeveeGirl_Text_1:
# 23 "data/maps/Zone0B/scripts.pory"
	.string "Unfortunately, you have already\n"
	.string "obtained a Pokémon in Eevee's evolution\l"
	.string "line.$"

Zone0B_EventScript_EeveeUnique_Text_0:
# 45 "data/maps/Zone0B/scripts.pory"
	.string "Eevee is quite a unique Pokémon.\p"
	.string "It evolves through exposure to\n"
	.string "different elemental sources; even a\l"
	.string "fraction of elemental energy, such as\l"
	.string "from a Gem, would be enough to evolve\l"
	.string "it.$"

Zone0B_EventScript_BreederM_Text_0:
# 57 "data/maps/Zone0B/scripts.pory"
	.string "Hey there! Would you like to see some\n"
	.string "Pokémon in my sketchbook?\p"
	.string "They could be useful for your Pokédex!$"

Zone0B_EventScript_BreederM_Text_1:
# 59 "data/maps/Zone0B/scripts.pory"
	.string "Here you go…$"

Zone0B_EventScript_BreederM_Text_2:
# 61 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER} started entering in the\n"
	.string "information into the Pokédex…$"

Zone0B_EventScript_BreederM_Text_3:
# 92 "data/maps/Zone0B/scripts.pory"
	.string "{PLAYER}'s Pokédex was filled with\n"
	.string "entries of starter Pokémon!$"

Zone0B_Text_Pokedex::
# 100 "data/maps/Zone0B/scripts.pory"
	.string "Good luck completing your Pokédex.$"
