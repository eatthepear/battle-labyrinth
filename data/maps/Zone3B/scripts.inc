Zone3B_MapScripts::
	.byte 0


Zone3B_EventScript_Phillipa::
# 4 "data/maps/Zone3B/scripts.pory"
	lock
# 5 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_Phillipa_Text_0
# 6 "data/maps/Zone3B/scripts.pory"
	release
	end


Zone3B_EventScript_Remi::
# 11 "data/maps/Zone3B/scripts.pory"
	lock
# 12 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_Remi_Text_0
# 13 "data/maps/Zone3B/scripts.pory"
	release
	end


Zone3B_EventScript_TradeRockruff::
# 18 "data/maps/Zone3B/scripts.pory"
	lock
# 19 "data/maps/Zone3B/scripts.pory"
	goto_if_set FLAG_ZONE3B_TRADED_ROCKRUFF, Zone3B_EventScript_TradeRockruff_2
# 25 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_1
# 26 "data/maps/Zone3B/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 27 "data/maps/Zone3B/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Zone3B/scripts.pory"
	waitmovement 0
# 29 "data/maps/Zone3B/scripts.pory"
	waitse
# 30 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 31 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROCKRUFF
# 32 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 33 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 34 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 35 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_2, MSGBOX_YESNO
# 36 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3B_EventScript_TradeRockruff_5
# 41 "data/maps/Zone3B/scripts.pory"
	special ChoosePartyMon
# 42 "data/maps/Zone3B/scripts.pory"
	waitstate
# 43 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 44 "data/maps/Zone3B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone3B_EventScript_TradeRockruff_8
# 49 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROCKRUFF
# 50 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 51 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 52 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 53 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 54 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 55 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Zone3B_EventScript_TradeRockruff_11
# 77 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 78 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 79 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 80 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 81 "data/maps/Zone3B/scripts.pory"
	waitstate
# 82 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_5, MSGBOX_DEFAULT
# 83 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_ROCKRUFF
# 84 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRockruff_2:
# 20 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 21 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_0
# 22 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRockruff_5:
# 37 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRockruff_8:
# 45 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRockruff_11:
# 56 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ROCKRUFF_OWN_TEMPO
# 57 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 58 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 59 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 60 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 61 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 62 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, SPECIES_WATCHOG
	goto_if_ne Zone3B_EventScript_TradeRockruff_14
# 67 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 68 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 69 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 70 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 71 "data/maps/Zone3B/scripts.pory"
	waitstate
# 72 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_5, MSGBOX_DEFAULT
# 73 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_ROCKRUFF
# 74 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRockruff_14:
# 63 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRockruff_Text_4, MSGBOX_DEFAULT
# 64 "data/maps/Zone3B/scripts.pory"
	release
	end


Zone3B_EventScript_Phillipa_Text_0:
# 5 "data/maps/Zone3B/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: This food is so tasty!$"

Zone3B_EventScript_Remi_Text_0:
# 12 "data/maps/Zone3B/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm glad you like the food, kiddo.\p"
	.string "I wonder when your brother will get\n"
	.string "hungry; he seems upset about his\l"
	.string "Pokémon again.$"

Zone3B_EventScript_TradeRockruff_Text_0:
# 21 "data/maps/Zone3B/scripts.pory"
	.string "Thank you so much!\p"
	.string "Take care of my Rockruff!$"

Zone3B_EventScript_TradeRockruff_Text_1:
# 25 "data/maps/Zone3B/scripts.pory"
	.string "Dear Arceus, please send someone who is\n"
	.string "willing to trade their Patrat!\p"
	.string "I really want my own Watchog!$"

Zone3B_EventScript_TradeRockruff_Text_2:
# 35 "data/maps/Zone3B/scripts.pory"
	.string "Hey there! You beat my sister in battle,\n"
	.string "right?\p"
	.string "Say, do you have a {STR_VAR_1}?\p"
	.string "I'd be willing to part with my\n"
	.string "{STR_VAR_2} for it!\p"
	.string "Alternatively, better yet, if you have a\n"
	.string "Watchog, that would be even better!$"

Zone3B_EventScript_TradeRockruff_Text_3:
# 37 "data/maps/Zone3B/scripts.pory"
	.string "If you ever bring a Patrat or Watchog,\n"
	.string "please come trade with me!$"

Zone3B_EventScript_TradeRockruff_Text_4:
# 63 "data/maps/Zone3B/scripts.pory"
	.string "Huh? That doesn't look anything like a\n"
	.string "Patrat or Watchog to me.$"

Zone3B_EventScript_TradeRockruff_Text_5:
# 72 "data/maps/Zone3B/scripts.pory"
	.string "Wow! Thank you so much!\p"
	.string "Take care of my Rockruff!$"
