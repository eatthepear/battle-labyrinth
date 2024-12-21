# 1 "data/maps/Zone13B/scripts.pory"

# 2 "data/maps/Zone13B/scripts.pory"
Zone13B_MapScripts::
# 3 "data/maps/Zone13B/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone13B_OnTransition
# 4 "data/maps/Zone13B/scripts.pory"
	.byte 0
# 5 "data/maps/Zone13B/scripts.pory"

# 6 "data/maps/Zone13B/scripts.pory"
Zone13B_OnTransition:
# 7 "data/maps/Zone13B/scripts.pory"
	goto_if_set FLAG_ZONE13B_RECEIVED_FLASHLIGHT Zone13B_EventScript_MoveScientist
# 8 "data/maps/Zone13B/scripts.pory"
	end
# 9 "data/maps/Zone13B/scripts.pory"

# 10 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_MoveScientist:
# 11 "data/maps/Zone13B/scripts.pory"
	setobjectxyperm 1, 18, 2
# 12 "data/maps/Zone13B/scripts.pory"
	end

Zone13B_EventScript_GiveFlash::
# 16 "data/maps/Zone13B/scripts.pory"
	lock
# 17 "data/maps/Zone13B/scripts.pory"
	faceplayer
# 18 "data/maps/Zone13B/scripts.pory"
	goto_if_set FLAG_ZONE13B_RECEIVED_FLASHLIGHT, Zone13B_EventScript_GiveFlash_2
# 23 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_EventScript_GiveFlash_Text_1
# 24 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_FLASHLIGHT
# 25 "data/maps/Zone13B/scripts.pory"
	setflag FLAG_ZONE13B_RECEIVED_FLASHLIGHT
# 26 "data/maps/Zone13B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 27 "data/maps/Zone13B/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Zone13B_EventScript_GiveFlash_5
# 35 "data/maps/Zone13B/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
# 36 "data/maps/Zone13B/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone13B/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 38 "data/maps/Zone13B/scripts.pory"
	waitmovement 0
# 39 "data/maps/Zone13B/scripts.pory"
	release
	end

Zone13B_EventScript_GiveFlash_2:
# 19 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_EventScript_GiveFlash_Text_0
# 20 "data/maps/Zone13B/scripts.pory"
	release
	end

Zone13B_EventScript_GiveFlash_5:
# 28 "data/maps/Zone13B/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 29 "data/maps/Zone13B/scripts.pory"
	waitmovement 0
# 30 "data/maps/Zone13B/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 31 "data/maps/Zone13B/scripts.pory"
	waitmovement 0
# 32 "data/maps/Zone13B/scripts.pory"
	release
	end


# 44 "data/maps/Zone13B/scripts.pory"

# 45 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Gould::
# 46 "data/maps/Zone13B/scripts.pory"
	trainerbattle_single TRAINER_PBL_GOULD, Zone13B_Text_GouldIntro, Zone13B_Text_GouldDefeat
# 47 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_GouldPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Zone13B/scripts.pory"
	end
# 49 "data/maps/Zone13B/scripts.pory"

# 50 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_GouldIntro:
# 51 "data/maps/Zone13B/scripts.pory"
	.string "Evolutionary biology!\n"
# 52 "data/maps/Zone13B/scripts.pory"
	.string "The greatest of fields!$"
# 53 "data/maps/Zone13B/scripts.pory"

# 54 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_GouldDefeat:
# 55 "data/maps/Zone13B/scripts.pory"
	.string "Wait, I changed my mind.$"
# 56 "data/maps/Zone13B/scripts.pory"

# 57 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_GouldPostBattle:
# 58 "data/maps/Zone13B/scripts.pory"
	.string "You know the greatest field of all?\p"
# 59 "data/maps/Zone13B/scripts.pory"
	.string "It's the one outside, with the\n"
# 60 "data/maps/Zone13B/scripts.pory"
	.string "flowers.$"
# 61 "data/maps/Zone13B/scripts.pory"

# 62 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Mendel::
# 63 "data/maps/Zone13B/scripts.pory"
	trainerbattle_single TRAINER_PBL_MENDEL, Zone13B_Text_MendelIntro, Zone13B_Text_MendelDefeat
# 64 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_MendelPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Zone13B/scripts.pory"
	end
# 66 "data/maps/Zone13B/scripts.pory"

# 67 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_MendelIntro:
# 68 "data/maps/Zone13B/scripts.pory"
	.string "What are the ethics of reviving\n"
# 69 "data/maps/Zone13B/scripts.pory"
	.string "Pokémon from fossils?$"
# 70 "data/maps/Zone13B/scripts.pory"

# 71 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_MendelDefeat:
# 72 "data/maps/Zone13B/scripts.pory"
	.string "I don't even know what ethics\n"
# 73 "data/maps/Zone13B/scripts.pory"
	.string "means!$"
# 74 "data/maps/Zone13B/scripts.pory"

# 75 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_MendelPostBattle:
# 76 "data/maps/Zone13B/scripts.pory"
	.string "Uhm, I guess I'll just fill out\n"
# 77 "data/maps/Zone13B/scripts.pory"
	.string "this form with 'entirely ethical'?$"
# 78 "data/maps/Zone13B/scripts.pory"

# 79 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist1::
# 80 "data/maps/Zone13B/scripts.pory"
	lock
# 81 "data/maps/Zone13B/scripts.pory"
	faceplayer
# 82 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_Scientist1, MSGBOX_AUTOCLOSE
# 83 "data/maps/Zone13B/scripts.pory"
	release
# 84 "data/maps/Zone13B/scripts.pory"
	end
# 85 "data/maps/Zone13B/scripts.pory"

# 86 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_Scientist1:
# 87 "data/maps/Zone13B/scripts.pory"
	.string "The mine was operational a few\n"
# 88 "data/maps/Zone13B/scripts.pory"
	.string "decades ago, but it was found that\l"
# 89 "data/maps/Zone13B/scripts.pory"
	.string "the money meant to be going to the\l"
# 90 "data/maps/Zone13B/scripts.pory"
	.string "workers was being stolen by corrupt\l"
# 91 "data/maps/Zone13B/scripts.pory"
	.string "corporations.\p"
# 92 "data/maps/Zone13B/scripts.pory"
	.string "Capitalism, am I right?$"
# 93 "data/maps/Zone13B/scripts.pory"

# 94 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3::
# 95 "data/maps/Zone13B/scripts.pory"
	lock
# 96 "data/maps/Zone13B/scripts.pory"
	faceplayer
# 97 "data/maps/Zone13B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone13B_EventScript_Scientist3_GaveBall
# 98 "data/maps/Zone13B/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone13B_EventScript_Scientist3_GaveBall
# 99 "data/maps/Zone13B/scripts.pory"
	goto_if_set FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED, Zone13B_EventScript_Scientist3_GaveBall
# 100 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_Scientist3_GivePokeball, MSGBOX_DEFAULT
# 101 "data/maps/Zone13B/scripts.pory"
	random 7
# 102 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 0
# 103 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveLevel
# 104 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 1
# 105 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveLure
# 106 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 2
# 107 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveMoon
# 108 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 3
# 109 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveFriend
# 110 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 4
# 111 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveLove
# 112 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 5
# 113 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveHeavy
# 114 "data/maps/Zone13B/scripts.pory"
	compare VAR_RESULT, 6
# 115 "data/maps/Zone13B/scripts.pory"
	call_if_eq Zone13B_EventScript_Scientist3_GiveFast
# 116 "data/maps/Zone13B/scripts.pory"
	setflag FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED
# 117 "data/maps/Zone13B/scripts.pory"
	goto Zone13B_EventScript_Scientist3_GaveBall
# 118 "data/maps/Zone13B/scripts.pory"
	end
# 119 "data/maps/Zone13B/scripts.pory"

# 120 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveLevel:
# 121 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_LEVEL_BALL
# 122 "data/maps/Zone13B/scripts.pory"
	return
# 123 "data/maps/Zone13B/scripts.pory"

# 124 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveLure:
# 125 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_LURE_BALL
# 126 "data/maps/Zone13B/scripts.pory"
	return
# 127 "data/maps/Zone13B/scripts.pory"

# 128 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveMoon:
# 129 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_MOON_BALL
# 130 "data/maps/Zone13B/scripts.pory"
	return
# 131 "data/maps/Zone13B/scripts.pory"

# 132 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveFriend:
# 133 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_FRIEND_BALL
# 134 "data/maps/Zone13B/scripts.pory"
	return
# 135 "data/maps/Zone13B/scripts.pory"

# 136 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveLove:
# 137 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_LOVE_BALL
# 138 "data/maps/Zone13B/scripts.pory"
	return
# 139 "data/maps/Zone13B/scripts.pory"

# 140 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveHeavy:
# 141 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_HEAVY_BALL
# 142 "data/maps/Zone13B/scripts.pory"
	return
# 143 "data/maps/Zone13B/scripts.pory"

# 144 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GiveFast:
# 145 "data/maps/Zone13B/scripts.pory"
	giveitem ITEM_FAST_BALL
# 146 "data/maps/Zone13B/scripts.pory"
	return
# 147 "data/maps/Zone13B/scripts.pory"

# 148 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist3_GaveBall:
# 149 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_Scientist3_Funded, MSGBOX_AUTOCLOSE
# 150 "data/maps/Zone13B/scripts.pory"
	release
# 151 "data/maps/Zone13B/scripts.pory"
	end
# 152 "data/maps/Zone13B/scripts.pory"

# 153 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_Scientist3_GivePokeball:
# 154 "data/maps/Zone13B/scripts.pory"
	.string "I'm developing new Pokeballs here.\p"
# 155 "data/maps/Zone13B/scripts.pory"
	.string "You're deserving of one!$"
# 156 "data/maps/Zone13B/scripts.pory"

# 157 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_Scientist3_Funded:
# 158 "data/maps/Zone13B/scripts.pory"
	.string "We're funded by Silph Co.$"
# 159 "data/maps/Zone13B/scripts.pory"

# 160 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist4::
# 161 "data/maps/Zone13B/scripts.pory"
	lock
# 162 "data/maps/Zone13B/scripts.pory"
	faceplayer
# 163 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_Scientist4, MSGBOX_AUTOCLOSE
# 164 "data/maps/Zone13B/scripts.pory"
	release
# 165 "data/maps/Zone13B/scripts.pory"
	end
# 166 "data/maps/Zone13B/scripts.pory"

# 167 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_Scientist4:
# 168 "data/maps/Zone13B/scripts.pory"
	.string "9 to 5, underpaid,\n"
# 169 "data/maps/Zone13B/scripts.pory"
	.string "wish I had some better grades.$"
# 170 "data/maps/Zone13B/scripts.pory"

# 171 "data/maps/Zone13B/scripts.pory"
Zone13B_EventScript_Scientist5::
# 172 "data/maps/Zone13B/scripts.pory"
	lock
# 173 "data/maps/Zone13B/scripts.pory"
	msgbox Zone13B_Text_Scientist5, MSGBOX_AUTOCLOSE
# 174 "data/maps/Zone13B/scripts.pory"
	release
# 175 "data/maps/Zone13B/scripts.pory"
	end
# 176 "data/maps/Zone13B/scripts.pory"

# 177 "data/maps/Zone13B/scripts.pory"
Zone13B_Text_Scientist5:
# 178 "data/maps/Zone13B/scripts.pory"
	.string "He's sound asleep.\n"
# 179 "data/maps/Zone13B/scripts.pory"
	.string "Better not wake him.$"

Zone13B_EventScript_GiveFlash_Text_0:
# 19 "data/maps/Zone13B/scripts.pory"
	.string "Be careful down there.$"

Zone13B_EventScript_GiveFlash_Text_1:
# 23 "data/maps/Zone13B/scripts.pory"
	.string "This leads to the old mine.\pYou'll need a flashlight to\nnavigate through.$"
