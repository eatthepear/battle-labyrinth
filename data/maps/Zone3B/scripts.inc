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


Zone3B_EventScript_TradeZigzagoon::
# 18 "data/maps/Zone3B/scripts.pory"
	lock
# 19 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 20 "data/maps/Zone3B/scripts.pory"
	goto_if_set FLAG_ZONE3B_TRADED_ZIGZAGOON, Zone3B_EventScript_TradeZigzagoon_2
# 25 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ZIGZAGOON
# 26 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 28 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 29 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_1, MSGBOX_YESNO
# 30 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3B_EventScript_TradeZigzagoon_5
# 35 "data/maps/Zone3B/scripts.pory"
	special ChoosePartyMon
# 36 "data/maps/Zone3B/scripts.pory"
	waitstate
# 37 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 38 "data/maps/Zone3B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone3B_EventScript_TradeZigzagoon_8
# 43 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, IsPokemonFainted
# 44 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone3B_EventScript_TradeZigzagoon_11
# 49 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 50 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 51 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 52 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Zone3B_EventScript_TradeZigzagoon_14
# 58 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 59 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 60 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 61 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 62 "data/maps/Zone3B/scripts.pory"
	waitstate
# 63 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_0, MSGBOX_DEFAULT
# 64 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_ZIGZAGOON
# 65 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_2:
# 21 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_0
# 22 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_5:
# 31 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_2, MSGBOX_DEFAULT
# 32 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_8:
# 39 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_11:
# 45 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_3
# 46 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_14:
# 53 "data/maps/Zone3B/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 54 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_4, MSGBOX_DEFAULT
# 55 "data/maps/Zone3B/scripts.pory"
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

Zone3B_EventScript_TradeZigzagoon_Text_0:
# 21 "data/maps/Zone3B/scripts.pory"
	.string "Please be good to my Zaggers!$"

Zone3B_EventScript_TradeZigzagoon_Text_1:
# 29 "data/maps/Zone3B/scripts.pory"
	.string "Hey! Are you a {STR_VAR_2} fan?\p"
	.string "If so, let's trade {STR_VAR_2}s!\p"
	.string "I'll trade you a Kantonian\n"
	.string "{STR_VAR_1} for my Galarian\l"
	.string "{STR_VAR_1}!$"

Zone3B_EventScript_TradeZigzagoon_Text_2:
# 31 "data/maps/Zone3B/scripts.pory"
	.string "Aww, you're a goon!$"

Zone3B_EventScript_TradeZigzagoon_Text_3:
# 45 "data/maps/Zone3B/scripts.pory"
	.string "Hey! Don't trade me a fainted Pokémon!$"

Zone3B_EventScript_TradeZigzagoon_Text_4:
# 54 "data/maps/Zone3B/scripts.pory"
	.string "Huh? That doesn't look anything like a\n"
	.string "{STR_VAR_1} to me.$"
