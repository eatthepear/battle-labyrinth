Zone10B_MapScripts::
	.byte 0


Zone10B_EventScript_Adamina::
# 4 "data/maps/Zone10B/scripts.pory"
	lock
# 5 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 6 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_AdaminaStuff
	return


Zone10B_EventScript_Porygon::
# 10 "data/maps/Zone10B/scripts.pory"
	lock
# 11 "data/maps/Zone10B/scripts.pory"
	compare VAR_ZONE_10_STATE, 2
	goto_if_eq Zone10B_EventScript_Porygon_2
Zone10B_EventScript_Porygon_1:
# 14 "data/maps/Zone10B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 15 "data/maps/Zone10B/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq Zone10B_EventScript_Porygon_5
Zone10B_EventScript_Porygon_4:
# 21 "data/maps/Zone10B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 22 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 23 "data/maps/Zone10B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 24 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 25 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_AdaminaStuff
	return

Zone10B_EventScript_Porygon_2:
# 12 "data/maps/Zone10B/scripts.pory"
	goto EventScript_PorygonExit
	goto Zone10B_EventScript_Porygon_1

Zone10B_EventScript_Porygon_5:
# 16 "data/maps/Zone10B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 17 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 18 "data/maps/Zone10B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 19 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
	goto Zone10B_EventScript_Porygon_4


Zone10B_EventScript_AdaminaStuff::
# 29 "data/maps/Zone10B/scripts.pory"
	compare VAR_ZONE_10_STATE, 2
	goto_if_eq Zone10B_EventScript_AdaminaStuff_2
# 34 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_AdaminaStuff_Text_1
# 35 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_TM20
# 36 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_AdaminaStuff_Text_2, MSGBOX_DEFAULT
# 37 "data/maps/Zone10B/scripts.pory"
	delay 96
# 38 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_AdaminaStuff_Text_3
# 39 "data/maps/Zone10B/scripts.pory"
	setvar VAR_ZONE_10_STATE, 2
# 40 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_AdaminaStuff_2:
# 30 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_AdaminaStuff_Text_0
# 31 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_SideQuestLuckyEgg::
# 44 "data/maps/Zone10B/scripts.pory"
	lock
# 45 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 46 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_LUCKY_EGG, Zone10B_EventScript_SideQuestLuckyEgg_2
Zone10B_EventScript_SideQuestLuckyEgg_1:
# 60 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_2
# 61 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 62 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 63 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_SideQuestLuckyEgg_2:
# 47 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_0
# 48 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_RESULT, GetCaughtSpeciesCount
# 49 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, 49
	goto_if_gt Zone10B_EventScript_SideQuestLuckyEgg_4
# 54 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 55 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_SideQuestLuckyEgg_4:
# 50 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestLuckyEgg_Text_1
# 51 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_LUCKY_EGG
# 52 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
	goto Zone10B_EventScript_SideQuestLuckyEgg_1


Zone10B_EventScript_SideQuestTeleport::
# 67 "data/maps/Zone10B/scripts.pory"
	lock
# 68 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 69 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_TM21, Zone10B_EventScript_SideQuestTeleport_2
Zone10B_EventScript_SideQuestTeleport_1:
# 124 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_3
# 125 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 126 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 127 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_SideQuestTeleport_2:
# 70 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_0
# 71 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JEREMIAH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 72 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HARPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 73 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARTHUR
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 74 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, Zone10B_EventScript_SideQuestTeleport_4
# 75 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PATRICK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 76 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RICHARD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 77 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNABELLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 78 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HERMAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 79 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RALPH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 80 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SANTIAGO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 81 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CHLOE_AND_KAYA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 82 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_LUCIA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 83 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRED
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 84 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNE_AND_JUNE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 85 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_GILBERT
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 86 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MELANIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 87 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONSTANCE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 88 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRANK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 89 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DUDLEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 90 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DAISY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 91 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, Zone10B_EventScript_SideQuestTeleport_4
# 92 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MILLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 93 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAMAL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 94 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PAIGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 95 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SETH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 96 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONNIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 97 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JIMMY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 98 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_EMILIANO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 99 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KAREN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 100 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAYDEN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 101 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NEIL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 102 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_TAMARA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 103 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_COOPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 104 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CARMINE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 105 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KYLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 106 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BELLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 107 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DEWEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 108 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PEARLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 109 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERNEST
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 110 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ALANA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 111 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SUSAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 112 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONRAD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 119 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_TM21
# 120 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_2
# 121 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_TM21
	goto Zone10B_EventScript_SideQuestTeleport_1

Zone10B_EventScript_SideQuestTeleport_4:
# 113 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_1
# 114 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 115 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 116 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_BerryExchange::
# 132 "data/maps/Zone10B/scripts.pory"
	lock
# 133 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 134 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_0, MSGBOX_YESNO
# 135 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryExchange_2
# 174 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_8
Zone10B_EventScript_BerryExchange_1:
# 176 "data/maps/Zone10B/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 177 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 178 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_BerryExchange_2:
# 136 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHERI_BERRY, 10
# 137 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_5
# 171 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_7
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_5:
# 138 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHESTO_BERRY, 10
# 139 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_8
# 168 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_6
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_8:
# 140 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_PECHA_BERRY, 10
# 141 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_11
# 165 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_5
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_11:
# 142 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_RAWST_BERRY, 10
# 143 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_14
# 162 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_4
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_14:
# 144 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_ASPEAR_BERRY, 10
# 145 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_17
# 159 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_3
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_17:
# 146 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 10
# 147 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHESTO_BERRY, 10
# 148 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 10
# 149 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 10
# 150 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_ASPEAR_BERRY, 10
# 151 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_1
# 152 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_REVIVE, 5
# 153 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_2
# 154 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 155 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_HIDE_ZONE10B_BERRYMAN
# 156 "data/maps/Zone10B/scripts.pory"
	removeobject 5
# 157 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Zone10B_EventScript_BerryExchange_1


Zone10B_EventScript_FossilScientist::
# 184 "data/maps/Zone10B/scripts.pory"
	lock
# 185 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 186 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_0, MSGBOX_YESNO
# 187 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilScientist_2
Zone10B_EventScript_FossilScientist_1:
# 190 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_1
# 191 "data/maps/Zone10B/scripts.pory"
	chooseitem TREASURES_POCKET
# 192 "data/maps/Zone10B/scripts.pory"
	switch VAR_ITEM_ID
# 193 "data/maps/Zone10B/scripts.pory"
	case ITEM_HELIX_FOSSIL, Zone10B_EventScript_FossilScientist_6
# 200 "data/maps/Zone10B/scripts.pory"
	case ITEM_DOME_FOSSIL, Zone10B_EventScript_FossilScientist_7
# 207 "data/maps/Zone10B/scripts.pory"
	case ITEM_OLD_AMBER, Zone10B_EventScript_FossilScientist_8
# 214 "data/maps/Zone10B/scripts.pory"
	case ITEM_ROOT_FOSSIL, Zone10B_EventScript_FossilScientist_9
# 221 "data/maps/Zone10B/scripts.pory"
	case ITEM_CLAW_FOSSIL, Zone10B_EventScript_FossilScientist_10
# 228 "data/maps/Zone10B/scripts.pory"
	case ITEM_ARMOR_FOSSIL, Zone10B_EventScript_FossilScientist_11
# 235 "data/maps/Zone10B/scripts.pory"
	case ITEM_SKULL_FOSSIL, Zone10B_EventScript_FossilScientist_12
# 242 "data/maps/Zone10B/scripts.pory"
	case ITEM_COVER_FOSSIL, Zone10B_EventScript_FossilScientist_13
# 249 "data/maps/Zone10B/scripts.pory"
	case ITEM_PLUME_FOSSIL, Zone10B_EventScript_FossilScientist_14
# 256 "data/maps/Zone10B/scripts.pory"
	case ITEM_JAW_FOSSIL, Zone10B_EventScript_FossilScientist_15
# 263 "data/maps/Zone10B/scripts.pory"
	case ITEM_SAIL_FOSSIL, Zone10B_EventScript_FossilScientist_16
# 271 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_2
# 272 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 273 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 274 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_FossilScientist_2:
# 188 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_FossilScientist_1

Zone10B_EventScript_FossilScientist_4:
# 277 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_FossilScientist_6:
# 194 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_OMANYTE
# 195 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 196 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_OMANYTE, 20, ITEM_NONE
# 197 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 198 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 199 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_7:
# 201 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_KABUTO
# 202 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 203 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_KABUTO, 20, ITEM_NONE
# 204 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 205 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 206 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_8:
# 208 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AERODACTYL
# 209 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 210 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AERODACTYL, 20, ITEM_NONE
# 211 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 212 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 213 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_9:
# 215 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 216 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 217 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_LILEEP, 20, ITEM_NONE
# 218 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LILEEP
# 219 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 220 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_10:
# 222 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 223 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 224 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ANORITH, 20, ITEM_NONE
# 225 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ANORITH
# 226 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 227 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_11:
# 229 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_SHIELDON
# 230 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 231 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_SHIELDON, 20, ITEM_NONE
# 232 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SHIELDON
# 233 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 234 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_12:
# 236 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_CRANIDOS
# 237 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 238 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_CRANIDOS, 20, ITEM_NONE
# 239 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CRANIDOS
# 240 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 241 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_13:
# 243 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TIRTOUGA
# 244 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 245 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TIRTOUGA, 20, ITEM_NONE
# 246 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TIRTOUGA
# 247 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 248 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_14:
# 250 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ARCHEN
# 251 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 252 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ARCHEN, 20, ITEM_NONE
# 253 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARCHEN
# 254 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 255 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_15:
# 257 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TYRUNT
# 258 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 259 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TYRUNT, 20, ITEM_NONE
# 260 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TYRUNT
# 261 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 262 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_16:
# 264 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AMAURA
# 265 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 266 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AMAURA, 20, ITEM_NONE
# 267 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AMAURA
# 268 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 269 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4


Zone10B_EventScript_SendFossilMonParty::
# 281 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SendFossilMonParty_Text_0, MSGBOX_YESNO
# 282 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_SendFossilMonParty_2
Zone10B_EventScript_SendFossilMonParty_1:
# 286 "data/maps/Zone10B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 247
# 287 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_SendFossilMonParty_2:
# 283 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 284 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone10B_EventScript_SendFossilMonParty_1


Zone10B_EventScript_ReceivedFossilMonFanfare::
# 291 "data/maps/Zone10B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 292 "data/maps/Zone10B/scripts.pory"
	message Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0
# 293 "data/maps/Zone10B/scripts.pory"
	waitmessage
# 294 "data/maps/Zone10B/scripts.pory"
	waitfanfare
	return


Zone10B_EventScript_CommonFossilIntro::
# 299 "data/maps/Zone10B/scripts.pory"
	bufferitemname 0, VAR_ITEM_ID
# 300 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_0, MSGBOX_YESNO
# 301 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_2
Zone10B_EventScript_CommonFossilIntro_1:
# 304 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 305 "data/maps/Zone10B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_5
# 312 "data/maps/Zone10B/scripts.pory"
	removeitem VAR_ITEM_ID
# 313 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_2
# 314 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 315 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 316 "data/maps/Zone10B/scripts.pory"
	delay 192
# 317 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 318 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_3
	return

Zone10B_EventScript_CommonFossilIntro_2:
# 302 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_CommonFossilIntro_1

Zone10B_EventScript_CommonFossilIntro_5:
# 306 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_1
# 307 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 308 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 309 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_FossilDone::
# 323 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilDone_Text_0
# 324 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 325 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 326 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_WaterMerchant::
# 331 "data/maps/Zone10B/scripts.pory"
	lock
# 332 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 333 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10B_EventScript_WaterMerchant_2
# 333 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone10B_EventScript_WaterMerchant_2
# 338 "data/maps/Zone10B/scripts.pory"
	showmoneybox 0, 0, 0
# 339 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_1, MSGBOX_DEFAULT
# 340 "data/maps/Zone10B/scripts.pory"
	dynmultichoice 0, 12, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Zone10B_EventScript_WaterMerchant_Text_2, Zone10B_EventScript_WaterMerchant_Text_3, Zone10B_EventScript_WaterMerchant_Text_4
# 341 "data/maps/Zone10B/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/Zone10B/scripts.pory"
	case 0, Zone10B_EventScript_WaterMerchant_8
# 355 "data/maps/Zone10B/scripts.pory"
	case 1, Zone10B_EventScript_WaterMerchant_9
Zone10B_EventScript_WaterMerchant_6:
# 369 "data/maps/Zone10B/scripts.pory"
	closemessage
# 370 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 371 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_6
# 372 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_WaterMerchant_2:
# 334 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_0
# 335 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_8:
# 343 "data/maps/Zone10B/scripts.pory"
	checkmoney 200, 0
# 344 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_10
# 347 "data/maps/Zone10B/scripts.pory"
	removemoney 200, 0
# 348 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 349 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 350 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 351 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 352 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_9:
# 356 "data/maps/Zone10B/scripts.pory"
	checkmoney 2000, 0
# 357 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_13
# 360 "data/maps/Zone10B/scripts.pory"
	removemoney 2000, 0
# 361 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 362 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 363 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 10
# 364 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 365 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_10:
# 345 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6

Zone10B_EventScript_WaterMerchant_13:
# 358 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6


Zone10B_EventScript_WaterNotEnough::
# 376 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterNotEnough_Text_0
# 377 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 378 "data/maps/Zone10B/scripts.pory"
	releaseall
	end


Zone10B_EventScript_AdaminaStuff_Text_0:
# 30 "data/maps/Zone10B/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: You'll find some people here\n"
	.string "are looking to trade or provide service\l"
	.string "in exchange for goods.\p"
	.string "Perhaps they'll be helpful in your\n"
	.string "travels.$"

Zone10B_EventScript_AdaminaStuff_Text_1:
# 34 "data/maps/Zone10B/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: You…\n…\pLook.\nI said some harsh words earlier.\lConsider this part of my apology.$"

Zone10B_EventScript_AdaminaStuff_Text_2:
# 36 "data/maps/Zone10B/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: This is my tavern.\nIt's my safe space.\pAll the people from around here\ngather for shelter from the\lsandstorm.\pI just… feel defensive around\noutsiders. Because it feels like\lfamily here, you know?$"

Zone10B_EventScript_AdaminaStuff_Text_3:
# 38 "data/maps/Zone10B/scripts.pory"
	.string "{COLOR BLUE}Adamina{COLOR DARK_GRAY}: Tell you what, you can\nstay as long as you like to chat\lwith the people here.\pIt's kind of nice to just spend time\nwith other people, isn't it?$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_0:
# 47 "data/maps/Zone10B/scripts.pory"
	.string "You know what would make a\nCollector like me happy? Meeting\lsomeone who has caught 50 different\lspecies of Pokémon. Now, that\lperson is someone I'd like to meet!$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_1:
# 50 "data/maps/Zone10B/scripts.pory"
	.string "Whoah, you've caught 50 species of\nPokémon? That's amazing.\pI aspire to be like you. Here, I\nwant you to have this.$"

Zone10B_EventScript_SideQuestLuckyEgg_Text_2:
# 60 "data/maps/Zone10B/scripts.pory"
	.string "Maybe I can catch 50 species of\nPokémon someday too.$"

Zone10B_EventScript_SideQuestTeleport_Text_0:
# 70 "data/maps/Zone10B/scripts.pory"
	.string "Greetings, young one. In my\npossession, I hold a useful TM for\lyour Pokémon, but only if you have\lproven yourself in battle.\pYou must have defeated all\nTrainers available thus far.$"

Zone10B_EventScript_SideQuestTeleport_Text_1:
# 113 "data/maps/Zone10B/scripts.pory"
	.string "You still have trainers to defeat.$"

Zone10B_EventScript_SideQuestTeleport_Text_2:
# 120 "data/maps/Zone10B/scripts.pory"
	.string "Impressive, young one. I see you\nhave defeated all those trainers.\pHere is the TM21 - Teleport.$"

Zone10B_EventScript_SideQuestTeleport_Text_3:
# 124 "data/maps/Zone10B/scripts.pory"
	.string "The move Teleport can help you\neasily bring in frail Pokémon\lwithout risking big damage.$"

Zone10B_EventScript_BerryExchange_Text_0:
# 134 "data/maps/Zone10B/scripts.pory"
	.string "Listen, you know how some berries\ncan treat status conditions?\pWell, I'm looking to start a Berry\nfarm. If you have 10 of each of\lthose Berries, I'll trade them\lfor 5 Revives. How about it?$"

Zone10B_EventScript_BerryExchange_Text_1:
# 151 "data/maps/Zone10B/scripts.pory"
	.string "Alright…{PAUSE_UNTIL_PRESS} Here we go…{PAUSE_UNTIL_PRESS}\nAnd bam! 5 Revives!$"

Zone10B_EventScript_BerryExchange_Text_2:
# 153 "data/maps/Zone10B/scripts.pory"
	.string "Thank you.\nI'll be seeing you around!$"

Zone10B_EventScript_BerryExchange_Text_3:
# 159 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nAspear Berries.$"

Zone10B_EventScript_BerryExchange_Text_4:
# 162 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nRawst Berries.$"

Zone10B_EventScript_BerryExchange_Text_5:
# 165 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nPecha Berries.$"

Zone10B_EventScript_BerryExchange_Text_6:
# 168 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nChesto Berries.$"

Zone10B_EventScript_BerryExchange_Text_7:
# 171 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nCheri Berries.$"

Zone10B_EventScript_BerryExchange_Text_8:
# 174 "data/maps/Zone10B/scripts.pory"
	.string "Aw, that's too bad.\nIt's a good offer though!$"

Zone10B_EventScript_FossilScientist_Text_0:
# 186 "data/maps/Zone10B/scripts.pory"
	.string "Oh. Another traveler looking to employ\n"
	.string "my fossil reviving services, eh?\p"
	.string "So, how about it? Do you have a fossil\n"
	.string "you'd like to revive?$"

Zone10B_EventScript_FossilScientist_Text_1:
# 190 "data/maps/Zone10B/scripts.pory"
	.string "Which fossil would you like me to\n"
	.string "revive?$"

Zone10B_EventScript_FossilScientist_Text_2:
# 271 "data/maps/Zone10B/scripts.pory"
	.string "That ain't no fossil! Kids these days!$"

Zone10B_EventScript_SendFossilMonParty_Text_0:
# 281 "data/maps/Zone10B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0:
# 292 "data/maps/Zone10B/scripts.pory"
	.string "Received the Fossil Pokémon\n{STR_VAR_2}!$"

Zone10B_EventScript_CommonFossilIntro_Text_0:
# 300 "data/maps/Zone10B/scripts.pory"
	.string "You want me to turn that\n{STR_VAR_1} back into a Pokémon?$"

Zone10B_EventScript_CommonFossilIntro_Text_1:
# 306 "data/maps/Zone10B/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone10B_EventScript_CommonFossilIntro_Text_2:
# 313 "data/maps/Zone10B/scripts.pory"
	.string "Alright. Gimme a moment…$"

Zone10B_EventScript_CommonFossilIntro_Text_3:
# 318 "data/maps/Zone10B/scripts.pory"
	.string "There. Here's your Pokémon.$"

Zone10B_EventScript_FossilDone_Text_0:
# 323 "data/maps/Zone10B/scripts.pory"
	.string "Ok, back to my drink.$"

Zone10B_EventScript_WaterMerchant_Text_0:
# 334 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and demand.\n"
	.string "And the demand is water.\p"
	.string "The Fresh Water I usually sell is in such\n"
	.string "high demand that I am out of stock.$"

Zone10B_EventScript_WaterMerchant_Text_1:
# 339 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and\ndemand. And the demand is water.\p¥200 for Fresh Water.\nRestores 30 HP each.$"

Zone10B_EventScript_WaterMerchant_Text_2:
# 340 "data/maps/Zone10B/scripts.pory"
	.string "One Fresh Water - ¥200$"

Zone10B_EventScript_WaterMerchant_Text_3:
# 340 "data/maps/Zone10B/scripts.pory"
	.string "Ten Fresh Water - ¥2000$"

Zone10B_EventScript_WaterMerchant_Text_4:
# 340 "data/maps/Zone10B/scripts.pory"
	.string "Exit$"

Zone10B_EventScript_WaterMerchant_Text_5:
# 349 "data/maps/Zone10B/scripts.pory"
	.string "Here you go.$"

Zone10B_EventScript_WaterMerchant_Text_6:
# 371 "data/maps/Zone10B/scripts.pory"
	.string "Ah, fine.$"

Zone10B_EventScript_WaterNotEnough_Text_0:
# 376 "data/maps/Zone10B/scripts.pory"
	.string "You don't have enough money.$"
