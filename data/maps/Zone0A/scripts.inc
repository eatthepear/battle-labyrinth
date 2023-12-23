Zone0A_EventScript_Porygon::
# 2 "data/maps/Zone0A/scripts.pory"
	lockall
# 3 "data/maps/Zone0A/scripts.pory"
	fadeoutbgm 1
# 4 "data/maps/Zone0A/scripts.pory"
	delay 64
# 5 "data/maps/Zone0A/scripts.pory"
	message Zone0A_EventScript_Porygon_Text_0
# 6 "data/maps/Zone0A/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 7 "data/maps/Zone0A/scripts.pory"
	delay 40
# 8 "data/maps/Zone0A/scripts.pory"
	waitmoncry
# 9 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 10 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 12 "data/maps/Zone0A/scripts.pory"
	waitse
# 13 "data/maps/Zone0A/scripts.pory"
	closemessage
# 14 "data/maps/Zone0A/scripts.pory"
	delay 40
# 15 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 16 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 17 "data/maps/Zone0A/scripts.pory"
	delay 40
# 18 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 19 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 20 "data/maps/Zone0A/scripts.pory"
	delay 40
# 21 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 22 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_EventScript_Porygon_Text_1
# 24 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 25 "data/maps/Zone0A/scripts.pory"
	fadeinbgm 1
# 26 "data/maps/Zone0A/scripts.pory"
	releaseall
	return


# 29 "data/maps/Zone0A/scripts.pory"

# 30 "data/maps/Zone0A/scripts.pory"
Zone0A_MapScripts::
# 31 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone0A_OnFrame
# 32 "data/maps/Zone0A/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Zone0A_OnTransition
# 33 "data/maps/Zone0A/scripts.pory"
	.byte 0
# 34 "data/maps/Zone0A/scripts.pory"

# 35 "data/maps/Zone0A/scripts.pory"
Zone0A_OnFrame:
# 36 "data/maps/Zone0A/scripts.pory"
	map_script_2 VAR_ZONE_0_STATE, 0, Zone0A_EventScript_Intro
# 37 "data/maps/Zone0A/scripts.pory"
	.2byte 0
# 38 "data/maps/Zone0A/scripts.pory"

# 39 "data/maps/Zone0A/scripts.pory"
Zone0A_OnTransition: @ 81F3983
# 40 "data/maps/Zone0A/scripts.pory"
	call Zone0A_EventScript_TryMoveDayCareMan
# 41 "data/maps/Zone0A/scripts.pory"
	end
# 42 "data/maps/Zone0A/scripts.pory"

# 43 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TryMoveDayCareMan::
# 44 "data/maps/Zone0A/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Zone0A_EventScript_StopMoveDayCareMan
# 45 "data/maps/Zone0A/scripts.pory"
	setobjectxyperm 1, 22, 9
# 46 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_StopMoveDayCareMan::
# 47 "data/maps/Zone0A/scripts.pory"
	return
# 48 "data/maps/Zone0A/scripts.pory"

# 49 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_Intro:
# 50 "data/maps/Zone0A/scripts.pory"
	lockall
# 51 "data/maps/Zone0A/scripts.pory"
	call EventScript_MoveCameraUp
# 52 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 53 "data/maps/Zone0A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 54 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 55 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone0A/scripts.pory"
	waitse
# 57 "data/maps/Zone0A/scripts.pory"
	call EventScript_MoveCameraDown
# 58 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 59 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 60 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkDown
# 61 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 62 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_Intro, MSGBOX_DEFAULT
# 63 "data/maps/Zone0A/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 64 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 65 "data/maps/Zone0A/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 67 "data/maps/Zone0A/scripts.pory"
	waitse
# 68 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_End, MSGBOX_AUTOCLOSE
# 69 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 70 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 71 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 72 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 73 "data/maps/Zone0A/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 74 "data/maps/Zone0A/scripts.pory"
	waitmovement 0
# 75 "data/maps/Zone0A/scripts.pory"
	goto_if_eq VAR_ZONE_B1_STATE, 1, Zone0A_EventScript_SetZoneB1
# 76 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 1
# 77 "data/maps/Zone0A/scripts.pory"
	releaseall
# 78 "data/maps/Zone0A/scripts.pory"
	end
# 79 "data/maps/Zone0A/scripts.pory"

# 80 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_SetZoneB1:
# 81 "data/maps/Zone0A/scripts.pory"
	setvar VAR_ZONE_0_STATE, 2
# 82 "data/maps/Zone0A/scripts.pory"
	releaseall
# 83 "data/maps/Zone0A/scripts.pory"
	end
# 84 "data/maps/Zone0A/scripts.pory"

# 85 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_Intro:
# 86 "data/maps/Zone0A/scripts.pory"
	.string "Hello, {PLAYER}.\n"
# 87 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 88 "data/maps/Zone0A/scripts.pory"
	.string "Welcome to my home.\p"
# 89 "data/maps/Zone0A/scripts.pory"
	.string "There are no trainers here, no\n"
# 90 "data/maps/Zone0A/scripts.pory"
	.string "challenges to face. Everything is\l"
# 91 "data/maps/Zone0A/scripts.pory"
	.string "meant to help you on your journey.\p"
# 92 "data/maps/Zone0A/scripts.pory"
	.string "As a welcome gift, I'd like you to\n"
# 93 "data/maps/Zone0A/scripts.pory"
	.string "have this.$"
# 94 "data/maps/Zone0A/scripts.pory"

# 95 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_End:
# 96 "data/maps/Zone0A/scripts.pory"
	.string "Oh, yes!\p"
# 97 "data/maps/Zone0A/scripts.pory"
	.string "We are running a special gift\n"
# 98 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon promotion at the\l"
# 99 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon Day-Care.\p"
# 100 "data/maps/Zone0A/scripts.pory"
	.string "Speak to my daughter inside for\n"
# 101 "data/maps/Zone0A/scripts.pory"
	.string "more details.$"
# 102 "data/maps/Zone0A/scripts.pory"

# 103 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareMan::
# 104 "data/maps/Zone0A/scripts.pory"
	lock
# 105 "data/maps/Zone0A/scripts.pory"
	faceplayer
# 106 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 107 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 108 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
# 109 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareEggWaiting
# 110 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
# 111 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnOneMon
# 112 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
# 113 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_CheckOnTwoMons
# 114 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
# 115 "data/maps/Zone0A/scripts.pory"
	release
# 116 "data/maps/Zone0A/scripts.pory"
	end
# 117 "data/maps/Zone0A/scripts.pory"

# 118 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareEggWaiting:
# 119 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DoYouWantEgg, MSGBOX_YESNO
# 120 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 121 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 122 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 123 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, YES
# 124 "data/maps/Zone0A/scripts.pory"
	goto_if_eq Zone0A_EventScript_DaycareAcceptEgg
# 125 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_IllKeepIt, MSGBOX_DEFAULT
# 126 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 127 "data/maps/Zone0A/scripts.pory"
	special RejectEggFromDayCare
# 128 "data/maps/Zone0A/scripts.pory"
	release
# 129 "data/maps/Zone0A/scripts.pory"
	end
# 130 "data/maps/Zone0A/scripts.pory"

# 131 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareAcceptEgg:
# 132 "data/maps/Zone0A/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 133 "data/maps/Zone0A/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 134 "data/maps/Zone0A/scripts.pory"
	goto_if_ne Zone0A_EventScript_DaycareReceiveEgg
# 135 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
# 136 "data/maps/Zone0A/scripts.pory"
	release
# 137 "data/maps/Zone0A/scripts.pory"
	end
# 138 "data/maps/Zone0A/scripts.pory"

# 139 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DaycareReceiveEgg:
# 140 "data/maps/Zone0A/scripts.pory"
	message Zone0A_Text_ReceivedEgg
# 141 "data/maps/Zone0A/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 142 "data/maps/Zone0A/scripts.pory"
	waitfanfare
# 143 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 144 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
# 145 "data/maps/Zone0A/scripts.pory"
	special GiveEggFromDaycare
# 146 "data/maps/Zone0A/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 147 "data/maps/Zone0A/scripts.pory"
	release
# 148 "data/maps/Zone0A/scripts.pory"
	end
# 149 "data/maps/Zone0A/scripts.pory"

# 150 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnOneMon:
# 151 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 152 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
# 153 "data/maps/Zone0A/scripts.pory"
	release
# 154 "data/maps/Zone0A/scripts.pory"
	end
# 155 "data/maps/Zone0A/scripts.pory"

# 156 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_CheckOnTwoMons:
# 157 "data/maps/Zone0A/scripts.pory"
	special GetDaycareMonNicknames
# 158 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
# 159 "data/maps/Zone0A/scripts.pory"
	special SetDaycareCompatibilityString
# 160 "data/maps/Zone0A/scripts.pory"
	special ShowFieldMessageStringVar4
# 161 "data/maps/Zone0A/scripts.pory"
	waitmessage
# 162 "data/maps/Zone0A/scripts.pory"
	waitbuttonpress
# 163 "data/maps/Zone0A/scripts.pory"
	release
# 164 "data/maps/Zone0A/scripts.pory"
	end
# 165 "data/maps/Zone0A/scripts.pory"

# 166 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_SeeWifeIfYoudLikeMeToRaiseMon:
# 167 "data/maps/Zone0A/scripts.pory"
	.string "I'm the Day-Care Man.\p"
# 168 "data/maps/Zone0A/scripts.pory"
	.string "I help take care of the precious\n"
# 169 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon of Trainers.\p"
# 170 "data/maps/Zone0A/scripts.pory"
	.string "If you'd like me to raise your Pokémon,\n"
# 171 "data/maps/Zone0A/scripts.pory"
	.string "have a word with my wife.$"
# 172 "data/maps/Zone0A/scripts.pory"

# 173 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DoYouWantEgg:
# 174 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you!\p"
# 175 "data/maps/Zone0A/scripts.pory"
	.string "We were raising your Pokémon,\n"
# 176 "data/maps/Zone0A/scripts.pory"
	.string "and my goodness, were we surprised!\p"
# 177 "data/maps/Zone0A/scripts.pory"
	.string "Your Pokémon had an Egg!\p"
# 178 "data/maps/Zone0A/scripts.pory"
	.string "We don't know how it got there,\n"
# 179 "data/maps/Zone0A/scripts.pory"
	.string "but your Pokémon had it.\p"
# 180 "data/maps/Zone0A/scripts.pory"
	.string "You do want it, yes?$"
# 181 "data/maps/Zone0A/scripts.pory"

# 182 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonIsDoingFine:
# 183 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Good to see you.\n"
# 184 "data/maps/Zone0A/scripts.pory"
	.string "Your {STR_VAR_1}'s doing fine.$"
# 185 "data/maps/Zone0A/scripts.pory"

# 186 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IllKeepIt:
# 187 "data/maps/Zone0A/scripts.pory"
	.string "Well then, I'll keep it.\n"
# 188 "data/maps/Zone0A/scripts.pory"
	.string "Thanks!$"
# 189 "data/maps/Zone0A/scripts.pory"

# 190 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YouHaveNoRoomForIt:
# 191 "data/maps/Zone0A/scripts.pory"
	.string "You have no room for it…\n"
# 192 "data/maps/Zone0A/scripts.pory"
	.string "Come back when you've made room.$"
# 193 "data/maps/Zone0A/scripts.pory"

# 194 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_ReceivedEgg:
# 195 "data/maps/Zone0A/scripts.pory"
	.string "{PLAYER} received the Egg from\n"
# 196 "data/maps/Zone0A/scripts.pory"
	.string "the Day-Care Man.$"
# 197 "data/maps/Zone0A/scripts.pory"

# 198 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TakeGoodCareOfIt:
# 199 "data/maps/Zone0A/scripts.pory"
	.string "Take good care of it.$"
# 200 "data/maps/Zone0A/scripts.pory"

# 201 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_YourMonsAreDoingFine:
# 202 "data/maps/Zone0A/scripts.pory"
	.string "Ah, it's you! Your {STR_VAR_1} and\n"
# 203 "data/maps/Zone0A/scripts.pory"
	.string "{STR_VAR_2} are doing fine.$"
# 204 "data/maps/Zone0A/scripts.pory"

# 205 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_IWillKeepDoYouWantIt:
# 206 "data/maps/Zone0A/scripts.pory"
	.string "I really will keep it.\n"
# 207 "data/maps/Zone0A/scripts.pory"
	.string "You do want this, yes?$"
# 208 "data/maps/Zone0A/scripts.pory"

# 209 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_DayCareSign::
# 210 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_DayCareSign, MSGBOX_SIGN
# 211 "data/maps/Zone0A/scripts.pory"
	end
# 212 "data/maps/Zone0A/scripts.pory"

# 213 "data/maps/Zone0A/scripts.pory"
Zone0A_EventScript_TPISign::
# 214 "data/maps/Zone0A/scripts.pory"
	msgbox Zone0A_Text_TPISign, MSGBOX_SIGN
# 215 "data/maps/Zone0A/scripts.pory"
	end
# 216 "data/maps/Zone0A/scripts.pory"

# 217 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_DayCareSign:
# 218 "data/maps/Zone0A/scripts.pory"
	.string "Pokémon Day Care\n"
# 219 "data/maps/Zone0A/scripts.pory"
	.string "8 Generations and counting!$"
# 220 "data/maps/Zone0A/scripts.pory"

# 221 "data/maps/Zone0A/scripts.pory"
Zone0A_Text_TPISign:
# 222 "data/maps/Zone0A/scripts.pory"
	.string "Teleport Institute\n"
# 223 "data/maps/Zone0A/scripts.pory"
	.string "Getting around, easy peasy.$"

Zone0A_EventScript_Porygon_Text_0:
# 5 "data/maps/Zone0A/scripts.pory"
	.string "Beeeouuuuuu zeedeeboo!$"

Zone0A_EventScript_Porygon_Text_1:
# 23 "data/maps/Zone0A/scripts.pory"
	.string "There seemed to be a Pokémon's cry, but\n"
	.string "it's gone now.$"
