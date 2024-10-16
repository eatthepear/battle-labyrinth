Zone0A_EventScript_Intro::
# 2 "data/maps/Zone0A/scripts.pory"
	lockall
# 3 "data/maps/Zone0A/scripts.pory"
	call EventScript_MoveCameraUp
# 4 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 5 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 6 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 7 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 8 "data/maps/Zone0A/scripts.pory"
	waitse
# 9 "data/maps/Zone0A/scripts.pory"
	call EventScript_MoveCameraDown
# 10 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 11 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 12 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_0, MSGBOX_DEFAULT
# 13 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 14 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone0A_EventScript_Intro_2
# 14 "data/maps/Zone0A/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone0A_EventScript_Intro_2
# 17 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_2
Zone0A_EventScript_Intro_1:
# 19 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 20 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 22 "data/maps/Zone0A/scripts.pory"
	waitse
# 23 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_3
# 24 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp2
# 25 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 26 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 27 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 28 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 29 "data/maps/Zone0A/scripts.pory"
	releaseall
	end

Zone0A_EventScript_Intro_2:
# 15 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Intro_Text_1
	goto Zone0A_EventScript_Intro_1


Zone0A_EventScript_Porygon::
# 34 "data/maps/Zone0A/scripts.pory"
	lockall
# 35 "data/maps/Zone0A/scripts.pory"
	fadeoutbgm 1
# 36 "data/maps/Zone0A/scripts.pory"
	delay 64
# 37 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Porygon_Text_0
# 38 "data/maps/Zone0A/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 39 "data/maps/Zone0A/scripts.pory"
	delay 40
# 40 "data/maps/Zone0A/scripts.pory"
	waitmoncry
# 41 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 42 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 43 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 44 "data/maps/Zone0A/scripts.pory"
	waitse
# 45 "data/maps/Zone0A/scripts.pory"
	closemessage
# 46 "data/maps/Zone0A/scripts.pory"
	delay 40
# 47 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 48 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 49 "data/maps/Zone0A/scripts.pory"
	delay 40
# 50 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 51 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 52 "data/maps/Zone0A/scripts.pory"
	delay 40
# 53 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 54 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 55 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Porygon_Text_1
# 56 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 57 "data/maps/Zone0A/scripts.pory"
	fadeinbgm 1
# 58 "data/maps/Zone0A/scripts.pory"
	releaseall
	return


# 61 "data/maps/Zone0A/scripts.pory"

# 62 "data/maps/Zone0A/scripts.pory"
Zone0A_MapScripts::
# 63 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_OnFrame
# 64 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0A_OnTransition
# 65 "data/maps/Zone0A/scripts.pory"
	.byte 0
# 66 "data/maps/Zone0A/scripts.pory"

# 67 "data/maps/Zone0A/scripts.pory"
Zone0A_OnFrame:
# 68 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 0, Zone0A_EventScript_Intro
# 69 "data/maps/Zone0A/scripts.pory"
	.2byte 0
# 70 "data/maps/Zone0A/scripts.pory"

# 71 "data/maps/Zone0A/scripts.pory"
Zone0A_OnTransition: @ 81F3983
# 72 "data/maps/Zone0A/scripts.pory"
	call Zone0A_EventScript_TryMoveDayCareMan
# 73 "data/maps/Zone0A/scripts.pory"
	end
# 74 "data/maps/Zone0A/scripts.pory"

# 75 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 76 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PBL_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 77 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 78 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 79 "data/maps/Zone0A/scripts.pory"
	return
# 80 "data/maps/Zone0A/scripts.pory"

# 81 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 82 "data/maps/Zone0A/scripts.pory"
	lock
# 83 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 84 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 85 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 86 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 87 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 88 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 89 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 90 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 91 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 92 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 93 "data/maps/Zone0A/scripts.pory"
	release
# 94 "data/maps/Zone0A/scripts.pory"
	end
# 95 "data/maps/Zone0A/scripts.pory"

# 96 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 97 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 98 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 99 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 100 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 101 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 102 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 103 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 104 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 105 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 106 "data/maps/Zone0A/scripts.pory"
	release
# 107 "data/maps/Zone0A/scripts.pory"
	end
# 108 "data/maps/Zone0A/scripts.pory"

# 109 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 110 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 111 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 112 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 113 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 114 "data/maps/Zone0A/scripts.pory"
	release
# 115 "data/maps/Zone0A/scripts.pory"
	end
# 116 "data/maps/Zone0A/scripts.pory"

# 117 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 118 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 119 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 120 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 121 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 122 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 123 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 124 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PBL_PENDING_DAYCARE_EGG
# 125 "data/maps/Zone0A/scripts.pory"
	release
# 126 "data/maps/Zone0A/scripts.pory"
	end
# 127 "data/maps/Zone0A/scripts.pory"

# 128 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 129 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 130 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 131 "data/maps/Zone0A/scripts.pory"
	release
# 132 "data/maps/Zone0A/scripts.pory"
	end
# 133 "data/maps/Zone0A/scripts.pory"

# 134 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 135 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 136 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 137 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 138 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 139 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 140 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 141 "data/maps/Zone0A/scripts.pory"
	release
# 142 "data/maps/Zone0A/scripts.pory"
	end
# 143 "data/maps/Zone0A/scripts.pory"

# 144 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 145 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 146 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 147 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 148 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 149 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 150 "data/maps/Zone0A/scripts.pory"

# 151 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 152 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 153 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 154 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 155 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 156 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 157 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 158 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 159 "data/maps/Zone0A/scripts.pory"

# 160 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 161 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 162 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 163 "data/maps/Zone0A/scripts.pory"

# 164 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 165 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 166 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 167 "data/maps/Zone0A/scripts.pory"

# 168 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 169 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 170 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 171 "data/maps/Zone0A/scripts.pory"

# 172 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 173 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 174 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 175 "data/maps/Zone0A/scripts.pory"

# 176 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 177 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 178 "data/maps/Zone0A/scripts.pory"

# 179 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 180 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 181 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 182 "data/maps/Zone0A/scripts.pory"

# 183 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 184 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 185 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"
# 186 "data/maps/Zone0A/scripts.pory"

# 187 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DayCareSign::
# 188 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DayCareSign, MSGBOX_SIGN
# 189 "data/maps/Zone0A/scripts.pory"
	end
# 190 "data/maps/Zone0A/scripts.pory"

# 191 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TPISign::
# 192 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TPISign, MSGBOX_SIGN
# 193 "data/maps/Zone0A/scripts.pory"
	end
# 194 "data/maps/Zone0A/scripts.pory"

# 195 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DayCareSign:
# 196 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon Day Care\n"
# 197 "data/maps/Zone0A/scripts.pory"
	.string "9 Generations and counting!$"
# 198 "data/maps/Zone0A/scripts.pory"

# 199 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TPISign:
# 200 "data/maps/Zone0A/scripts.pory"
	.string "Teleport Institute\n"
# 201 "data/maps/Zone0A/scripts.pory"
	.string "Getting around, easy peasy.$"

Zone0A_EventScript_Intro_Text_0:
# 12 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\n"
	.string "I'm the Day-Care Man.\p"
	.string "Welcome to my home.\p"
	.string "There are no trainers here, and no\n"
	.string "challenges to face. Everything is meant\l"
	.string "to help you on your journey.\p"
	.string "As a welcome gift, I'd like you to have\n"
	.string "this.$"

Zone0A_EventScript_Intro_Text_1:
# 15 "data/maps/Zone0A/scripts.pory"
	.string "I've been trying to farm some Berries in\n"
	.string "the Berry fields here.\p"
	.string "The soil is getting too hard to farm any\n"
	.string "more though, plus with the wild Pokémon\l"
	.string "that eat the Berries, it's impossible to\l"
	.string "grow more.\p"
	.string "Feel free to pick any Berries I may have\n"
	.string "left.$"

Zone0A_EventScript_Intro_Text_2:
# 17 "data/maps/Zone0A/scripts.pory"
	.string "I've been trying to farm some Berries in\n"
	.string "the Berry fields here.\p"
	.string "You should give it a try, though beware\n"
	.string "wild Pokémon that might be nibbling on\l"
	.string "your Berries.\p"
	.string "Feel free to pick any Berries I might\n"
	.string "have missed.$"

Zone0A_EventScript_Intro_Text_3:
# 23 "data/maps/Zone0A/scripts.pory"
	.string "Oh, yes!\p"
	.string "We are running a special gift Pokémon\n"
	.string "promotion at the Pokémon Day-Care.\p"
	.string "Speak to my daughter inside for more\n"
	.string "details.$"

Zone0A_EventScript_Porygon_Text_0:
# 37 "data/maps/Zone0A/scripts.pory"
	.string "Beeeouuuuuu zeedeeboo!$"

Zone0A_EventScript_Porygon_Text_1:
# 55 "data/maps/Zone0A/scripts.pory"
	.string "There seemed to be a Pokémon's cry, but\n"
	.string "it's gone now.$"
