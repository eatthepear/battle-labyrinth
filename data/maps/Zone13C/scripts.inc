Zone13C_MapScripts::
	.byte 0


Zone13C_EventScript_LeviathanBattle::
# 4 "data/maps/Zone13C/scripts.pory"
	lock
# 5 "data/maps/Zone13C/scripts.pory"
	faceplayer
# 6 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_11, Zone13C_EventScript_LeviathanBattle_2
# 12 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Leviathan11WantBattle, MSGBOX_YESNO
# 13 "data/maps/Zone13C/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone13C_EventScript_LeviathanBattle_5
# 18 "data/maps/Zone13C/scripts.pory"
	fadeoutbgm 1
# 19 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 21 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone13C_EventScript_LeviathanBattle_8
# 21 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone13C_EventScript_LeviathanBattle_8
# 24 "data/maps/Zone13C/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JENNY_LEVIATHAN_11, Zone13C_Text_Leviathan11Defeat
Zone13C_EventScript_LeviathanBattle_7:
# 26 "data/maps/Zone13C/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 27 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 28 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 29 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Jenny_PostBattle
# 30 "data/maps/Zone13C/scripts.pory"
	closemessage
# 31 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_11
# 32 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_LeviathanBattle_2:
# 7 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Jenny_PostBattle
# 8 "data/maps/Zone13C/scripts.pory"
	closemessage
# 9 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_LeviathanBattle_5:
# 14 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_LeviathanBattle_Text_0
# 15 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_LeviathanBattle_8:
# 22 "data/maps/Zone13C/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_JENNY_LEVIATHAN_11_CHALLENGE, Zone13C_Text_Leviathan11Defeat
	goto Zone13C_EventScript_LeviathanBattle_7


Zone13C_EventScript_Fossil_Scientist::
# 49 "data/maps/Zone13C/scripts.pory"
	lock
# 50 "data/maps/Zone13C/scripts.pory"
	faceplayer
# 51 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone13C_EventScript_Fossil_Scientist_2
# 56 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_5
# 56 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, Zone13C_EventScript_Fossil_Scientist_5
Zone13C_EventScript_Fossil_Scientist_4:
# 59 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_DAILY_FOSSIL_RECEIVED, Zone13C_EventScript_Fossil_Scientist_10
Zone13C_EventScript_Fossil_Scientist_9:
# 62 "data/maps/Zone13C/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 63 "data/maps/Zone13C/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Zone13C/scripts.pory"
	waitmovement 0
# 65 "data/maps/Zone13C/scripts.pory"
	waitse
# 66 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_1
# 67 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone13C_EventScript_Fossil_Scientist_13
Zone13C_EventScript_Fossil_Scientist_12:
# 70 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_DAILY_FOSSIL_RECEIVED
# 71 "data/maps/Zone13C/scripts.pory"
	random 9
# 72 "data/maps/Zone13C/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/Zone13C/scripts.pory"
	case 0, Zone13C_EventScript_Fossil_Scientist_17
# 75 "data/maps/Zone13C/scripts.pory"
	case 1, Zone13C_EventScript_Fossil_Scientist_18
# 77 "data/maps/Zone13C/scripts.pory"
	case 2, Zone13C_EventScript_Fossil_Scientist_19
# 79 "data/maps/Zone13C/scripts.pory"
	case 3, Zone13C_EventScript_Fossil_Scientist_20
# 81 "data/maps/Zone13C/scripts.pory"
	case 4, Zone13C_EventScript_Fossil_Scientist_21
# 83 "data/maps/Zone13C/scripts.pory"
	case 5, Zone13C_EventScript_Fossil_Scientist_22
# 85 "data/maps/Zone13C/scripts.pory"
	case 6, Zone13C_EventScript_Fossil_Scientist_23
# 87 "data/maps/Zone13C/scripts.pory"
	case 7, Zone13C_EventScript_Fossil_Scientist_24
# 89 "data/maps/Zone13C/scripts.pory"
	case 8, Zone13C_EventScript_Fossil_Scientist_25
Zone13C_EventScript_Fossil_Scientist_15:
# 92 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, Zone13C_EventScript_Fossil_Scientist_27
# 95 "data/maps/Zone13C/scripts.pory"
	goto Zone13C_EventScript_Fossil_VanillaReceived
Zone13C_EventScript_Fossil_Scientist_26:
	end

Zone13C_EventScript_Fossil_Scientist_2:
# 52 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Fossil_Scientist_Text_0
# 53 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_Fossil_Scientist_5:
# 57 "data/maps/Zone13C/scripts.pory"
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_4

Zone13C_EventScript_Fossil_Scientist_10:
# 60 "data/maps/Zone13C/scripts.pory"
	goto Zone13C_EventScript_Fossil_VanillaReceived
	goto Zone13C_EventScript_Fossil_Scientist_9

Zone13C_EventScript_Fossil_Scientist_13:
# 68 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto Zone13C_EventScript_Fossil_Scientist_12

Zone13C_EventScript_Fossil_Scientist_17:
# 74 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_18:
# 76 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_19:
# 78 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_OLD_AMBER
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_20:
# 80 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_21:
# 82 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_22:
# 84 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_COVER_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_23:
# 86 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_PLUME_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_24:
# 88 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_25:
# 90 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_SAIL_FOSSIL
	goto Zone13C_EventScript_Fossil_Scientist_15

Zone13C_EventScript_Fossil_Scientist_27:
# 93 "data/maps/Zone13C/scripts.pory"
	goto Zone13C_EventScript_Fossil_NuzlockeReceived
	goto Zone13C_EventScript_Fossil_Scientist_26


Zone13C_EventScript_Fossil_VanillaReceived::
# 101 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Fossil_VanillaReceived_Text_0
# 102 "data/maps/Zone13C/scripts.pory"
	release
	end


Zone13C_EventScript_Fossil_NuzlockeReceived::
# 107 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Fossil_NuzlockeReceived_Text_0
# 108 "data/maps/Zone13C/scripts.pory"
	release
	end


Zone13C_EventScript_Scientist4::
# 113 "data/maps/Zone13C/scripts.pory"
	lock
# 114 "data/maps/Zone13C/scripts.pory"
	faceplayer
# 115 "data/maps/Zone13C/scripts.pory"
	goto_if_unset FLAG_ZONE13C_RECEIVED_ZOOM_LENS, Zone13C_EventScript_Scientist4_2
Zone13C_EventScript_Scientist4_1:
# 120 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Scientist4_Text_1
# 121 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_Scientist4_2:
# 116 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Scientist4_Text_0
# 117 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 118 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_ZONE13C_RECEIVED_ZOOM_LENS
	goto Zone13C_EventScript_Scientist4_1


Zone13C_EventScript_Cook::
# 126 "data/maps/Zone13C/scripts.pory"
	lock
# 127 "data/maps/Zone13C/scripts.pory"
	faceplayer
# 128 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_ZONE13C_RECEIVED_APPLES, Zone13C_EventScript_Cook_3
Zone13C_EventScript_Cook_1:
# 133 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_1, MSGBOX_YESNO
# 134 "data/maps/Zone13C/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone13C_EventScript_Cook_7
Zone13C_EventScript_Cook_6:
# 168 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_Cook_2:
# 129 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_0
# 130 "data/maps/Zone13C/scripts.pory"
	release
	end

Zone13C_EventScript_Cook_3:
# 128 "data/maps/Zone13C/scripts.pory"
	goto_if_set FLAG_ZONE13C_RECEIVED_SWEETS, Zone13C_EventScript_Cook_2
	goto Zone13C_EventScript_Cook_1

Zone13C_EventScript_Cook_7:
# 135 "data/maps/Zone13C/scripts.pory"
	special ChoosePartyMon
# 136 "data/maps/Zone13C/scripts.pory"
	waitstate
# 137 "data/maps/Zone13C/scripts.pory"
	compare VAR_RESULT, 255
	goto_if_ne Zone13C_EventScript_Cook_9
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_9:
# 138 "data/maps/Zone13C/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 139 "data/maps/Zone13C/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Zone13C/scripts.pory"
	case SPECIES_APPLIN, Zone13C_EventScript_Cook_12
# 149 "data/maps/Zone13C/scripts.pory"
	case SPECIES_MILCERY, Zone13C_EventScript_Cook_13
# 164 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_6
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_12:
# 141 "data/maps/Zone13C/scripts.pory"
	goto_if_unset FLAG_ZONE13C_RECEIVED_APPLES, Zone13C_EventScript_Cook_15
# 147 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_3
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_13:
# 150 "data/maps/Zone13C/scripts.pory"
	goto_if_unset FLAG_ZONE13C_RECEIVED_SWEETS, Zone13C_EventScript_Cook_18
# 161 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_5
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_15:
# 142 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_2
# 143 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_SWEET_APPLE
# 144 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_TART_APPLE
# 145 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_ZONE13C_RECEIVED_APPLES
	goto Zone13C_EventScript_Cook_6

Zone13C_EventScript_Cook_18:
# 151 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_EventScript_Cook_Text_4
# 152 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_STRAWBERRY_SWEET
# 153 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_LOVE_SWEET
# 154 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_BERRY_SWEET
# 155 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_CLOVER_SWEET
# 156 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_FLOWER_SWEET
# 157 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_STAR_SWEET
# 158 "data/maps/Zone13C/scripts.pory"
	giveitem ITEM_RIBBON_SWEET
# 159 "data/maps/Zone13C/scripts.pory"
	setflag FLAG_ZONE13C_RECEIVED_SWEETS
	goto Zone13C_EventScript_Cook_6


# 172 "data/maps/Zone13C/scripts.pory"

# 173 "data/maps/Zone13C/scripts.pory"

# 174 "data/maps/Zone13C/scripts.pory"
Zone13C_EventScript_Darwin::
# 175 "data/maps/Zone13C/scripts.pory"
	trainerbattle_single TRAINER_PBL_DARWIN, Zone13C_Text_DarwinIntro, Zone13C_Text_DarwinDefeat
# 176 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_DarwinPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Zone13C/scripts.pory"
	end
# 178 "data/maps/Zone13C/scripts.pory"

# 179 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_DarwinIntro:
# 180 "data/maps/Zone13C/scripts.pory"
	.string "I've been doing research on\n"
# 181 "data/maps/Zone13C/scripts.pory"
	.string "branched evolutions!$"
# 182 "data/maps/Zone13C/scripts.pory"

# 183 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_DarwinDefeat:
# 184 "data/maps/Zone13C/scripts.pory"
	.string "Even some starters have branched\n"
# 185 "data/maps/Zone13C/scripts.pory"
	.string "evolution!$"
# 186 "data/maps/Zone13C/scripts.pory"

# 187 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_DarwinPostBattle:
# 188 "data/maps/Zone13C/scripts.pory"
	.string "According to my research:\p"
# 189 "data/maps/Zone13C/scripts.pory"
	.string "Quilava evolves into Hisuian\n"
# 190 "data/maps/Zone13C/scripts.pory"
	.string "Typhlosion with a Fire Stone,\p"
# 191 "data/maps/Zone13C/scripts.pory"
	.string "Dewott evolves into Hisuian\n"
# 192 "data/maps/Zone13C/scripts.pory"
	.string "Samurott with a Water Stone,\p"
# 193 "data/maps/Zone13C/scripts.pory"
	.string "and Dartrix evolves into Hisuian\n"
# 194 "data/maps/Zone13C/scripts.pory"
	.string "Decidueye when leveled up holding a\l"
# 195 "data/maps/Zone13C/scripts.pory"
	.string "Ring Target.$"
# 196 "data/maps/Zone13C/scripts.pory"

# 197 "data/maps/Zone13C/scripts.pory"
Zone13C_EventScript_Scientist1::
# 198 "data/maps/Zone13C/scripts.pory"
	lock
# 199 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Scientist1, MSGBOX_SIGN
# 200 "data/maps/Zone13C/scripts.pory"
	release
# 201 "data/maps/Zone13C/scripts.pory"
	end
# 202 "data/maps/Zone13C/scripts.pory"

# 203 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_Scientist1:
# 204 "data/maps/Zone13C/scripts.pory"
	.string "He's so focused on his work,\n"
# 205 "data/maps/Zone13C/scripts.pory"
	.string "he doesn't even notice you.$"
# 206 "data/maps/Zone13C/scripts.pory"

# 207 "data/maps/Zone13C/scripts.pory"
Zone13C_EventScript_Scientist2::
# 208 "data/maps/Zone13C/scripts.pory"
	lock
# 209 "data/maps/Zone13C/scripts.pory"
	faceplayer
# 210 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Scientist2_WhyMale, MSGBOX_AUTOCLOSE
# 211 "data/maps/Zone13C/scripts.pory"
	delay 48
# 212 "data/maps/Zone13C/scripts.pory"
	msgbox Zone13C_Text_Scientist2_GenderRoles, MSGBOX_AUTOCLOSE
# 213 "data/maps/Zone13C/scripts.pory"
	release
# 214 "data/maps/Zone13C/scripts.pory"
	end
# 215 "data/maps/Zone13C/scripts.pory"

# 216 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_Scientist2_WhyMale:
# 217 "data/maps/Zone13C/scripts.pory"
	.string "Why are all the scientists male,\n"
# 218 "data/maps/Zone13C/scripts.pory"
	.string "you ask?$"
# 219 "data/maps/Zone13C/scripts.pory"

# 220 "data/maps/Zone13C/scripts.pory"
Zone13C_Text_Scientist2_GenderRoles:
# 221 "data/maps/Zone13C/scripts.pory"
	.string "Um... Game Freak existed a while\n"
# 222 "data/maps/Zone13C/scripts.pory"
	.string "ago and helped perpetuate\l"
# 223 "data/maps/Zone13C/scripts.pory"
	.string "traditional gender roles in\l"
# 224 "data/maps/Zone13C/scripts.pory"
	.string "society?\p"
# 225 "data/maps/Zone13C/scripts.pory"
	.string "Never mind. Google it.$"

Zone13C_EventScript_LeviathanBattle_Text_0:
# 14 "data/maps/Zone13C/scripts.pory"
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Nervous about facing me?$"

Zone13C_EventScript_LeviathanBattle_Text_1:
# 19 "data/maps/Zone13C/scripts.pory"
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: My battle style is quite\n"
	.string "ferocious, despite me having only one\l"
	.string "Pokémon!$"

Zone13C_EventScript_LeviathanBattle_Text_2:
# 27 "data/maps/Zone13C/scripts.pory"
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Here, I want you to have this\n"
	.string "item.\p"
	.string "It'll stop your Pokémon's stats from\n"
	.string "being lowered, but it's only single use.$"

Zone13C_EventScript_Fossil_Scientist_Text_0:
# 52 "data/maps/Zone13C/scripts.pory"
	.string "Sorry, I just ran out of fossils.$"

Zone13C_EventScript_Fossil_Scientist_Text_1:
# 66 "data/maps/Zone13C/scripts.pory"
	.string "You get a Fossil!\nYou get a Fossil!\lEverybody gets a Fossil!$"

Zone13C_EventScript_Fossil_VanillaReceived_Text_0:
# 101 "data/maps/Zone13C/scripts.pory"
	.string "Hope you enjoy your Fossil!\nCome back tomorrow for another!$"

Zone13C_EventScript_Fossil_NuzlockeReceived_Text_0:
# 107 "data/maps/Zone13C/scripts.pory"
	.string "Hope you enjoy your Fossil!$"

Zone13C_EventScript_Scientist4_Text_0:
# 116 "data/maps/Zone13C/scripts.pory"
	.string "Sometimes you just need a little bit\n"
	.string "more accuracy for your moves. That's\l"
	.string "where the Zoom Lens comes in!$"

Zone13C_EventScript_Scientist4_Text_1:
# 120 "data/maps/Zone13C/scripts.pory"
	.string "The Zoom Lens boosts accuracy by 20%,\n"
	.string "but only against opponents that have\l"
	.string "already moved that turn.$"

Zone13C_EventScript_Cook_Text_0:
# 129 "data/maps/Zone13C/scripts.pory"
	.string "I already gave you all the evolution\n"
	.string "items I have!$"

Zone13C_EventScript_Cook_Text_1:
# 133 "data/maps/Zone13C/scripts.pory"
	.string "I just love Pokémon that evolve via\n"
	.string "food items!\p"
	.string "Show me an Applin or a Milcery, and I'll\n"
	.string "give you the corresponding evolution\l"
	.string "items!$"

Zone13C_EventScript_Cook_Text_2:
# 142 "data/maps/Zone13C/scripts.pory"
	.string "That's an Applin all right! Well, here you\n"
	.string "go!$"

Zone13C_EventScript_Cook_Text_3:
# 147 "data/maps/Zone13C/scripts.pory"
	.string "I already gave you all the Applin\n"
	.string "evolution items I have!$"

Zone13C_EventScript_Cook_Text_4:
# 151 "data/maps/Zone13C/scripts.pory"
	.string "That's a Milcery all right! Well, here you\n"
	.string "go!$"

Zone13C_EventScript_Cook_Text_5:
# 161 "data/maps/Zone13C/scripts.pory"
	.string "I already gave you all the Milcery\n"
	.string "evolution items I have!$"

Zone13C_EventScript_Cook_Text_6:
# 164 "data/maps/Zone13C/scripts.pory"
	.string "That's not an Applin nor a Milcery!$"

Zone13C_Text_Leviathan11WantBattle::
# 36 "data/maps/Zone13C/scripts.pory"
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: Ah, it's so nice to finally have a\n"
	.string "resting spot from all my traveling.\p"
	.string "What do you want?\p"
	.string "A battle?$"

Zone13C_Text_Leviathan11Defeat::
# 40 "data/maps/Zone13C/scripts.pory"
	.string "You did great, Gyarados!$"

Zone13C_Text_Jenny_PostBattle::
# 44 "data/maps/Zone13C/scripts.pory"
	.string "{COLOR BLUE}Jenny{COLOR DARK_GRAY}: I guess traveling lightly comes\n"
	.string "with downsides, too.\p"
	.string "I sometimes wish I could bring more\n"
	.string "Pokémon on my travels with me.$"
