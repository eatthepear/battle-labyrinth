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


Zone3B_EventScript_TradeDelibird::
# 18 "data/maps/Zone3B/scripts.pory"
	lock
# 19 "data/maps/Zone3B/scripts.pory"
	goto_if_set FLAG_ZONE3B_TRADED_DELIBIRD, Zone3B_EventScript_TradeDelibird_2
# 25 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_1
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
	setvar VAR_0x8008, INGAME_TRADE_DELIBIRD
# 32 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 33 "data/maps/Zone3B/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 34 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 35 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_2, MSGBOX_YESNO
# 36 "data/maps/Zone3B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone3B_EventScript_TradeDelibird_5
# 41 "data/maps/Zone3B/scripts.pory"
	special ChoosePartyMon
# 42 "data/maps/Zone3B/scripts.pory"
	waitstate
# 43 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 44 "data/maps/Zone3B/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Zone3B_EventScript_TradeDelibird_8
# 49 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 50 "data/maps/Zone3B/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 51 "data/maps/Zone3B/scripts.pory"
	special CreateInGameTradePokemon
# 52 "data/maps/Zone3B/scripts.pory"
	special DoInGameTradeScene
# 53 "data/maps/Zone3B/scripts.pory"
	waitstate
# 54 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_4, MSGBOX_DEFAULT
# 55 "data/maps/Zone3B/scripts.pory"
	setflag FLAG_ZONE3B_TRADED_DELIBIRD
# 56 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeDelibird_2:
# 20 "data/maps/Zone3B/scripts.pory"
	faceplayer
# 21 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_0
# 22 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeDelibird_5:
# 37 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_3, MSGBOX_DEFAULT
# 38 "data/maps/Zone3B/scripts.pory"
	release
	end

Zone3B_EventScript_TradeDelibird_8:
# 45 "data/maps/Zone3B/scripts.pory"
	msgbox Zone3B_EventScript_TradeDelibird_Text_3, MSGBOX_DEFAULT
# 46 "data/maps/Zone3B/scripts.pory"
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

Zone3B_EventScript_TradeDelibird_Text_0:
# 21 "data/maps/Zone3B/scripts.pory"
	.string "My Delibird is stronger than other\n"
	.string "Delibird, but it still stinks!$"

Zone3B_EventScript_TradeDelibird_Text_1:
# 25 "data/maps/Zone3B/scripts.pory"
	.string "Please, oh please, won't anyone trade me\n"
	.string "a better Pokémon?$"

Zone3B_EventScript_TradeDelibird_Text_2:
# 35 "data/maps/Zone3B/scripts.pory"
	.string "Please! You've got to trade me! I'll take\n"
	.string "anything! {STR_VAR_2} is the worst\l"
	.string "Pokémon ever!$"

Zone3B_EventScript_TradeDelibird_Text_3:
# 37 "data/maps/Zone3B/scripts.pory"
	.string "Please! I can't win any battles with a\n"
	.string "{STR_VAR_2}$"

Zone3B_EventScript_TradeDelibird_Text_4:
# 54 "data/maps/Zone3B/scripts.pory"
	.string "Thank you! Now I've got a real Pokémon\n"
	.string "to use!$"
