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


Zone3B_EventScript_TradeRattata::
# 18 "data/maps/Zone3B/scripts.pory"
	lock
# 19 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 20 "data/maps/Zone3B/scripts.pory"
	goto_if_set FLAG_ZONE3B_TRADED_RATTATA_ALOLA, Zone3B_EventScript_TradeRattata_2
# 25 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RATTATA_ALOLA
# 26 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 28 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 29 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_1, MSGBOX_YESNO
# 30 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3B_EventScript_TradeRattata_5
# 35 "data/maps/Zone3B/scripts.pory"
	special ChoosePartyMon
# 36 "data/maps/Zone3B/scripts.pory"
	waitstate
# 37 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 38 "data/maps/Zone3B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone3B_EventScript_TradeRattata_8
# 43 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 44 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 45 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 46 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Zone3B_EventScript_TradeRattata_11
# 52 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 53 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 54 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 55 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 56 "data/maps/Zone3B/scripts.pory"
	waitstate
# 57 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_RATTATA_ALOLA
# 59 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRattata_2:
# 21 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_0
# 22 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRattata_5:
# 31 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_2, MSGBOX_DEFAULT
# 32 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRattata_8:
# 39 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeRattata_11:
# 47 "data/maps/Zone3B/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 48 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_3, MSGBOX_DEFAULT
# 49 "data/maps/Zone3B/scripts.pory"
	release
	end


Zone3B_EventScript_TradeZigzagoon::
# 64 "data/maps/Zone3B/scripts.pory"
	lock
# 65 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 66 "data/maps/Zone3B/scripts.pory"
	goto_if_set FLAG_ZONE3B_TRADED_ZIGZAGOON_GALAR, Zone3B_EventScript_TradeZigzagoon_2
# 71 "data/maps/Zone3B/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ZIGZAGOON_GALAR
# 72 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 73 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 74 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 75 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_1, MSGBOX_YESNO
# 76 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3B_EventScript_TradeZigzagoon_5
# 81 "data/maps/Zone3B/scripts.pory"
	special ChoosePartyMon
# 82 "data/maps/Zone3B/scripts.pory"
	waitstate
# 83 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 84 "data/maps/Zone3B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone3B_EventScript_TradeZigzagoon_8
# 89 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 90 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 91 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 92 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Zone3B_EventScript_TradeZigzagoon_11
# 98 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 99 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 100 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 101 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 102 "data/maps/Zone3B/scripts.pory"
	waitstate
# 103 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_0, MSGBOX_DEFAULT
# 104 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_ZIGZAGOON_GALAR
# 105 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_2:
# 67 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_0
# 68 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_5:
# 77 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_2, MSGBOX_DEFAULT
# 78 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_8:
# 85 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeZigzagoon_Text_2, MSGBOX_DEFAULT
# 86 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeZigzagoon_11:
# 93 "data/maps/Zone3B/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 94 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeRattata_Text_3, MSGBOX_DEFAULT
# 95 "data/maps/Zone3B/scripts.pory"
	release
	end


Zone3B_EventScript_Phillipa_Text_0:
# 5 "data/maps/Zone3B/scripts.pory"
	.string "{COLOR BLUE}Phillipa{COLOR DARK_GRAY}: This food is so tasty!$"

Zone3B_EventScript_Remi_Text_0:
# 12 "data/maps/Zone3B/scripts.pory"
	.string "{COLOR BLUE}Remi{COLOR DARK_GRAY}: I'm glad you like the food, kiddo.\p"
	.string "I wonder when your brothers will get\n"
	.string "hungry; they seem to be fighting again.$"

Zone3B_EventScript_TradeRattata_Text_0:
# 21 "data/maps/Zone3B/scripts.pory"
	.string "Please be good to my Ratters!$"

Zone3B_EventScript_TradeRattata_Text_1:
# 29 "data/maps/Zone3B/scripts.pory"
	.string "Hey! Help me show my twin brother that\n"
	.string "Rattata is the superior Pokémon! Trade\l"
	.string "me a Kantonian {STR_VAR_2}, and I'll\l"
	.string "give you a really nice Alolan\l"
	.string "{STR_VAR_1} in exchange!$"

Zone3B_EventScript_TradeRattata_Text_2:
# 31 "data/maps/Zone3B/scripts.pory"
	.string "Aww, rats!$"

Zone3B_EventScript_TradeRattata_Text_3:
# 48 "data/maps/Zone3B/scripts.pory"
	.string "Huh? That doesn't look anything like a\n"
	.string "{STR_VAR_1} to me.$"

Zone3B_EventScript_TradeZigzagoon_Text_0:
# 67 "data/maps/Zone3B/scripts.pory"
	.string "Please be good to my Zaggers!$"

Zone3B_EventScript_TradeZigzagoon_Text_1:
# 75 "data/maps/Zone3B/scripts.pory"
	.string "Hey! Help me show my twin brother that\n"
	.string "Zigzagoon is the superior Pokémon!\l"
	.string "Trade me a Kantonian {STR_VAR_2},\l"
	.string "and I'll give you a really nice Galarian\l"
	.string "{STR_VAR_1} in exchange!$"

Zone3B_EventScript_TradeZigzagoon_Text_2:
# 77 "data/maps/Zone3B/scripts.pory"
	.string "Aww, you're a goon!$"
