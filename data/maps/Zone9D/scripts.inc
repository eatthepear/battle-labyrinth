Zone9D_MapScripts::
	.byte 0


Zone9D_EventScript_Man::
# 4 "data/maps/Zone9D/scripts.pory"
	lock
# 5 "data/maps/Zone9D/scripts.pory"
	faceplayer
# 6 "data/maps/Zone9D/scripts.pory"
	goto_if_unset FLAG_ZONE9D_RECEIVED_MYSTIC_WATER, Zone9D_EventScript_Man_2
Zone9D_EventScript_Man_1:
# 17 "data/maps/Zone9D/scripts.pory"
	msgbox Zone9D_EventScript_Man_Text_3
# 18 "data/maps/Zone9D/scripts.pory"
	release
	end

Zone9D_EventScript_Man_2:
# 7 "data/maps/Zone9D/scripts.pory"
	msgbox Zone9D_EventScript_Man_Text_0, MSGBOX_YESNO
# 8 "data/maps/Zone9D/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone9D_EventScript_Man_4
	goto Zone9D_EventScript_Man_1

Zone9D_EventScript_Man_4:
# 9 "data/maps/Zone9D/scripts.pory"
	msgbox Zone9D_EventScript_Man_Text_1
# 11 "data/maps/Zone9D/scripts.pory"
	delay 96
# 12 "data/maps/Zone9D/scripts.pory"
	msgbox Zone9D_EventScript_Man_Text_2
# 13 "data/maps/Zone9D/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 14 "data/maps/Zone9D/scripts.pory"
	setflag FLAG_ZONE9D_RECEIVED_MYSTIC_WATER
	goto Zone9D_EventScript_Man_1


Zone9D_EventScript_Girl::
# 23 "data/maps/Zone9D/scripts.pory"
	lock
# 24 "data/maps/Zone9D/scripts.pory"
	faceplayer
# 25 "data/maps/Zone9D/scripts.pory"
	msgbox Zone9D_EventScript_Girl_Text_0
# 26 "data/maps/Zone9D/scripts.pory"
	release
	end


Zone9D_EventScript_Man_Text_0:
# 7 "data/maps/Zone9D/scripts.pory"
	.string "Hello, traveler. Will you take some time\n"
	.string "to listen to this poor man's story?$"

Zone9D_EventScript_Man_Text_1:
# 9 "data/maps/Zone9D/scripts.pory"
	.string "When I was seventeen years old, I was\n"
	.string "lost in the desert.\p"
	.string "I was sure I would die of thirst or\n"
	.string "hunger, but I was saved by a beautiful\l"
	.string "girl riding a Ponyta.\p"
	.string "She would go on to become my wife and\n"
	.string "mother of my daughter, as well as my\l"
	.string "best friend.\p"
	.string "Last year, she passed away after\n"
	.string "battling cancer for several months.\p"
	.string "Now, when I look around my home, I feel\n"
	.string "sad and empty without her.$"

Zone9D_EventScript_Man_Text_2:
# 12 "data/maps/Zone9D/scripts.pory"
	.string "Thank you for listening to me. Your\n"
	.string "kindness inspires me to give you this.$"

Zone9D_EventScript_Man_Text_3:
# 17 "data/maps/Zone9D/scripts.pory"
	.string "Farewell.$"

Zone9D_EventScript_Girl_Text_0:
# 25 "data/maps/Zone9D/scripts.pory"
	.string "Before Momma left, she gave me a\n"
	.string "special necklace.\p"
	.string "She called the stone inside a Mega\n"
	.string "Stone.\p"
	.string "I wonder what it does.$"
