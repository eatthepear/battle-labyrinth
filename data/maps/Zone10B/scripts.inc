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
	giveitem ITEM_TM_BULLDOZE
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


Zone10B_EventScript_Collector::
# 44 "data/maps/Zone10B/scripts.pory"
	lock
# 45 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 46 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_LUCKY_EGG, Zone10B_EventScript_Collector_2
Zone10B_EventScript_Collector_1:
# 65 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_Collector_Text_2
# 66 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 67 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 68 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_Collector_2:
# 47 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_Collector_Text_0
# 48 "data/maps/Zone10B/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_CATCH_50
# 49 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_Collector_5
Zone10B_EventScript_Collector_4:
# 52 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_RESULT, GetCaughtSpeciesCount
# 53 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, 49
	goto_if_gt Zone10B_EventScript_Collector_7
# 59 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 60 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 61 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_Collector_5:
# 50 "data/maps/Zone10B/scripts.pory"
	startquest QUEST_CATCH_50
	goto Zone10B_EventScript_Collector_4

Zone10B_EventScript_Collector_7:
# 54 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_Collector_Text_1
# 55 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_LUCKY_EGG
# 56 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 57 "data/maps/Zone10B/scripts.pory"
	completequest QUEST_CATCH_50
	goto Zone10B_EventScript_Collector_1


Zone10B_EventScript_BirdKeeper::
# 72 "data/maps/Zone10B/scripts.pory"
	lock
# 73 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 74 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_TM_STEEL_WING, Zone10B_EventScript_BirdKeeper_2
Zone10B_EventScript_BirdKeeper_1:
# 169 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BirdKeeper_Text_3
# 170 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 171 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 172 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_BirdKeeper_2:
# 75 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BirdKeeper_Text_0
# 76 "data/maps/Zone10B/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_GAUNTLET_1
# 77 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_BirdKeeper_5
Zone10B_EventScript_BirdKeeper_4:
# 80 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NINA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 81 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MARIAM
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 82 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_OSCAR
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 83 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_1, Zone10B_EventScript_BirdKeeper_7
# 84 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_POLLY
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 85 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JEREMIAH
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 86 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 87 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HARPER
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 88 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARTHUR
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 89 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, Zone10B_EventScript_BirdKeeper_7
# 90 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JEMMA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 91 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PATRICK
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 92 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNABELLE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 93 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BORIS
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 94 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RICHARD
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 95 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_3, Zone10B_EventScript_BirdKeeper_7
# 96 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HERMAN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 97 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RALPH
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 98 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SANTIAGO
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 99 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CHLOE_AND_KAYA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 100 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRED
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 101 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_LUCIA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 102 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_4, Zone10B_EventScript_BirdKeeper_7
# 103 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNE_AND_JUNE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 104 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NOVA_AND_CORA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 105 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CLINTON
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 106 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_REBECCA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 107 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RYAN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 108 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CAITLYN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 109 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KENNETH
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 110 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KEVIN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 111 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_5, Zone10B_EventScript_BirdKeeper_7
# 112 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_GILBERT
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 113 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MELANIE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 114 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONSTANCE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 115 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRANK
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 116 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DUDLEY
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 117 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DAISY
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 118 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_VIC_AND_DELL
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 119 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MINA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 120 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, Zone10B_EventScript_BirdKeeper_7
# 121 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MILLIE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 122 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAMAL
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 123 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PAIGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 124 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SETH
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 125 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONNIE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 126 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PETER
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 127 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_WHITAKER
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 128 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, Zone10B_EventScript_BirdKeeper_7
# 129 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JIMMY
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 130 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_EMILIANO
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 131 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BECKHAM
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 132 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KAREN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 133 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAYDEN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 134 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NEIL
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 135 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_TAMARA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 136 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_8, Zone10B_EventScript_BirdKeeper_7
# 137 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_COOPER
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 138 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CARMINE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 139 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JONATHAN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 140 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CALVIN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 141 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_LUIS
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 142 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARI
	goto_if 0, Zone10B_EventScript_BirdKeeper_134
Zone10B_EventScript_BirdKeeper_133:
# 143 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BERTHA
	goto_if 0, Zone10B_EventScript_BirdKeeper_138
Zone10B_EventScript_BirdKeeper_137:
# 144 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CASSANDRA
	goto_if 0, Zone10B_EventScript_BirdKeeper_142
Zone10B_EventScript_BirdKeeper_141:
# 145 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DOMINIC
	goto_if 0, Zone10B_EventScript_BirdKeeper_146
Zone10B_EventScript_BirdKeeper_145:
# 146 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERICA
	goto_if 0, Zone10B_EventScript_BirdKeeper_150
Zone10B_EventScript_BirdKeeper_149:
# 147 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ALANA
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 148 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JACOB
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 149 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DEWEY
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 150 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERNEST
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 151 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KYLE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 152 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ELIAS
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 153 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PEARLIE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 154 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SUSAN
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 155 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONRAD
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 156 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BRETT
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
# 163 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_TM_STEEL_WING
# 164 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BirdKeeper_Text_2
# 165 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 166 "data/maps/Zone10B/scripts.pory"
	completequest QUEST_GAUNTLET_1
	goto Zone10B_EventScript_BirdKeeper_1

Zone10B_EventScript_BirdKeeper_5:
# 78 "data/maps/Zone10B/scripts.pory"
	startquest QUEST_GAUNTLET_1
	goto Zone10B_EventScript_BirdKeeper_4

Zone10B_EventScript_BirdKeeper_7:
# 157 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BirdKeeper_Text_1
# 158 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 159 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 160 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_BirdKeeper_134:
# 142 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARI_CHALLENGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
	goto Zone10B_EventScript_BirdKeeper_133

Zone10B_EventScript_BirdKeeper_138:
# 143 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BERTHA_CHALLENGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
	goto Zone10B_EventScript_BirdKeeper_137

Zone10B_EventScript_BirdKeeper_142:
# 144 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CASSANDRA_CHALLENGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
	goto Zone10B_EventScript_BirdKeeper_141

Zone10B_EventScript_BirdKeeper_146:
# 145 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DOMINIC_CHALLENGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
	goto Zone10B_EventScript_BirdKeeper_145

Zone10B_EventScript_BirdKeeper_150:
# 146 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERICA_CHALLENGE
	goto_if 0, Zone10B_EventScript_BirdKeeper_7
	goto Zone10B_EventScript_BirdKeeper_149


Zone10B_EventScript_BerryExchange::
# 177 "data/maps/Zone10B/scripts.pory"
	lock
# 178 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 179 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_0
# 180 "data/maps/Zone10B/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_BERRIES
# 181 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_BerryExchange_2
Zone10B_EventScript_BerryExchange_1:
# 184 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHERI_BERRY, 5
# 185 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_5
# 225 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_9
Zone10B_EventScript_BerryExchange_4:
# 227 "data/maps/Zone10B/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 228 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 229 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_BerryExchange_2:
# 182 "data/maps/Zone10B/scripts.pory"
	startquest QUEST_BERRIES
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_5:
# 186 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHESTO_BERRY, 5
# 187 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_8
# 222 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_8
	goto Zone10B_EventScript_BerryExchange_4

Zone10B_EventScript_BerryExchange_8:
# 188 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_PECHA_BERRY, 5
# 189 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_11
# 219 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_7
	goto Zone10B_EventScript_BerryExchange_4

Zone10B_EventScript_BerryExchange_11:
# 190 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_RAWST_BERRY, 5
# 191 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_14
# 216 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_6
	goto Zone10B_EventScript_BerryExchange_4

Zone10B_EventScript_BerryExchange_14:
# 192 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_ASPEAR_BERRY, 5
# 193 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_17
# 213 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_5
	goto Zone10B_EventScript_BerryExchange_4

Zone10B_EventScript_BerryExchange_17:
# 194 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_1, MSGBOX_YESNO
# 195 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryExchange_20
# 210 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_4
	goto Zone10B_EventScript_BerryExchange_4

Zone10B_EventScript_BerryExchange_20:
# 196 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 5
# 197 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHESTO_BERRY, 5
# 198 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 5
# 199 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 5
# 200 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_ASPEAR_BERRY, 5
# 201 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_2
# 202 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_REVIVE, 5
# 203 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_3
# 204 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 205 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_HIDE_ZONE10B_BERRYMAN
# 206 "data/maps/Zone10B/scripts.pory"
	removeobject 5
# 207 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 208 "data/maps/Zone10B/scripts.pory"
	completequest QUEST_BERRIES
	goto Zone10B_EventScript_BerryExchange_4


Zone10B_EventScript_FossilScientist::
# 234 "data/maps/Zone10B/scripts.pory"
	lock
# 235 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 236 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_0, MSGBOX_YESNO
# 237 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilScientist_2
Zone10B_EventScript_FossilScientist_1:
# 240 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_1
# 241 "data/maps/Zone10B/scripts.pory"
	chooseitem TREASURES_POCKET
# 242 "data/maps/Zone10B/scripts.pory"
	switch VAR_ITEM_ID
# 243 "data/maps/Zone10B/scripts.pory"
	case ITEM_HELIX_FOSSIL, Zone10B_EventScript_FossilScientist_6
# 250 "data/maps/Zone10B/scripts.pory"
	case ITEM_DOME_FOSSIL, Zone10B_EventScript_FossilScientist_7
# 257 "data/maps/Zone10B/scripts.pory"
	case ITEM_OLD_AMBER, Zone10B_EventScript_FossilScientist_8
# 264 "data/maps/Zone10B/scripts.pory"
	case ITEM_ROOT_FOSSIL, Zone10B_EventScript_FossilScientist_9
# 271 "data/maps/Zone10B/scripts.pory"
	case ITEM_CLAW_FOSSIL, Zone10B_EventScript_FossilScientist_10
# 278 "data/maps/Zone10B/scripts.pory"
	case ITEM_ARMOR_FOSSIL, Zone10B_EventScript_FossilScientist_11
# 285 "data/maps/Zone10B/scripts.pory"
	case ITEM_SKULL_FOSSIL, Zone10B_EventScript_FossilScientist_12
# 292 "data/maps/Zone10B/scripts.pory"
	case ITEM_COVER_FOSSIL, Zone10B_EventScript_FossilScientist_13
# 299 "data/maps/Zone10B/scripts.pory"
	case ITEM_PLUME_FOSSIL, Zone10B_EventScript_FossilScientist_14
# 306 "data/maps/Zone10B/scripts.pory"
	case ITEM_JAW_FOSSIL, Zone10B_EventScript_FossilScientist_15
# 313 "data/maps/Zone10B/scripts.pory"
	case ITEM_SAIL_FOSSIL, Zone10B_EventScript_FossilScientist_16
# 321 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_2
# 322 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 323 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 324 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_FossilScientist_2:
# 238 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_FossilScientist_1

Zone10B_EventScript_FossilScientist_4:
# 327 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_FossilScientist_6:
# 244 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_OMANYTE
# 245 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 246 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_OMANYTE, 20, ITEM_NONE
# 247 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 248 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 249 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_7:
# 251 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_KABUTO
# 252 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 253 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_KABUTO, 20, ITEM_NONE
# 254 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 255 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 256 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_8:
# 258 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AERODACTYL
# 259 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 260 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AERODACTYL, 20, ITEM_NONE
# 261 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 262 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 263 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_9:
# 265 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 266 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 267 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_LILEEP, 20, ITEM_NONE
# 268 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LILEEP
# 269 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 270 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_10:
# 272 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 273 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 274 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ANORITH, 20, ITEM_NONE
# 275 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ANORITH
# 276 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 277 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_11:
# 279 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_SHIELDON
# 280 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 281 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_SHIELDON, 20, ITEM_NONE
# 282 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SHIELDON
# 283 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 284 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_12:
# 286 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_CRANIDOS
# 287 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 288 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_CRANIDOS, 20, ITEM_NONE
# 289 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CRANIDOS
# 290 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 291 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_13:
# 293 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TIRTOUGA
# 294 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 295 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TIRTOUGA, 20, ITEM_NONE
# 296 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TIRTOUGA
# 297 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 298 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_14:
# 300 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ARCHEN
# 301 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 302 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ARCHEN, 20, ITEM_NONE
# 303 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARCHEN
# 304 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 305 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_15:
# 307 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TYRUNT
# 308 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 309 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TYRUNT, 20, ITEM_NONE
# 310 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TYRUNT
# 311 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 312 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_16:
# 314 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AMAURA
# 315 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 316 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AMAURA, 20, ITEM_NONE
# 317 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AMAURA
# 318 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 319 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4


Zone10B_EventScript_SendFossilMonParty::
# 331 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SendFossilMonParty_Text_0, MSGBOX_YESNO
# 332 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_SendFossilMonParty_2
Zone10B_EventScript_SendFossilMonParty_1:
# 336 "data/maps/Zone10B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 247
# 337 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_SendFossilMonParty_2:
# 333 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 334 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone10B_EventScript_SendFossilMonParty_1


Zone10B_EventScript_ReceivedFossilMonFanfare::
# 341 "data/maps/Zone10B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 342 "data/maps/Zone10B/scripts.pory"
	message Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0
# 343 "data/maps/Zone10B/scripts.pory"
	waitmessage
# 344 "data/maps/Zone10B/scripts.pory"
	waitfanfare
	return


Zone10B_EventScript_CommonFossilIntro::
# 349 "data/maps/Zone10B/scripts.pory"
	bufferitemname 0, VAR_ITEM_ID
# 350 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_0, MSGBOX_YESNO
# 351 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_2
Zone10B_EventScript_CommonFossilIntro_1:
# 354 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 355 "data/maps/Zone10B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_5
# 362 "data/maps/Zone10B/scripts.pory"
	removeitem VAR_ITEM_ID
# 363 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_2
# 364 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 365 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 366 "data/maps/Zone10B/scripts.pory"
	delay 192
# 367 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 368 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_3
	return

Zone10B_EventScript_CommonFossilIntro_2:
# 352 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_CommonFossilIntro_1

Zone10B_EventScript_CommonFossilIntro_5:
# 356 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_1
# 357 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 358 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 359 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_FossilDone::
# 373 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilDone_Text_0
# 374 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 375 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 376 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_WaterMerchant::
# 381 "data/maps/Zone10B/scripts.pory"
	lock
# 382 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 383 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10B_EventScript_WaterMerchant_2
# 383 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone10B_EventScript_WaterMerchant_2
# 388 "data/maps/Zone10B/scripts.pory"
	showmoneybox 0, 0, 0
# 389 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_1, MSGBOX_DEFAULT
# 390 "data/maps/Zone10B/scripts.pory"
	dynmultichoice 0, 12, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Zone10B_EventScript_WaterMerchant_Text_2, Zone10B_EventScript_WaterMerchant_Text_3, Zone10B_EventScript_WaterMerchant_Text_4
# 391 "data/maps/Zone10B/scripts.pory"
	switch VAR_RESULT
# 392 "data/maps/Zone10B/scripts.pory"
	case 0, Zone10B_EventScript_WaterMerchant_8
# 405 "data/maps/Zone10B/scripts.pory"
	case 1, Zone10B_EventScript_WaterMerchant_9
Zone10B_EventScript_WaterMerchant_6:
# 419 "data/maps/Zone10B/scripts.pory"
	closemessage
# 420 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 421 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_6
# 422 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_WaterMerchant_2:
# 384 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_0
# 385 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_8:
# 393 "data/maps/Zone10B/scripts.pory"
	checkmoney 200, 0
# 394 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_10
# 397 "data/maps/Zone10B/scripts.pory"
	removemoney 200, 0
# 398 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 399 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 400 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 401 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 402 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_9:
# 406 "data/maps/Zone10B/scripts.pory"
	checkmoney 2000, 0
# 407 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_13
# 410 "data/maps/Zone10B/scripts.pory"
	removemoney 2000, 0
# 411 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 412 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 413 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 10
# 414 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 415 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_10:
# 395 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6

Zone10B_EventScript_WaterMerchant_13:
# 408 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6


Zone10B_EventScript_WaterNotEnough::
# 426 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterNotEnough_Text_0
# 427 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 428 "data/maps/Zone10B/scripts.pory"
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

Zone10B_EventScript_Collector_Text_0:
# 47 "data/maps/Zone10B/scripts.pory"
	.string "You know what would make a Collector\n"
	.string "like me happy?\p"
	.string "Meeting someone who has caught 50\n"
	.string "different species of Pokémon.\p"
	.string "Now, that person is someone I'd like to\n"
	.string "meet!$"

Zone10B_EventScript_Collector_Text_1:
# 54 "data/maps/Zone10B/scripts.pory"
	.string "Whoah, you've caught 50 species of\n"
	.string "Pokémon? That's amazing.\p"
	.string "I aspire to be like you.\p"
	.string "Here, I want you to have this.$"

Zone10B_EventScript_Collector_Text_2:
# 65 "data/maps/Zone10B/scripts.pory"
	.string "Maybe I can catch 50 species of\n"
	.string "Pokémon someday too.$"

Zone10B_EventScript_BirdKeeper_Text_0:
# 75 "data/maps/Zone10B/scripts.pory"
	.string "Bird Pokémon sometimes can need some\n"
	.string "coverage moves!\p"
	.string "If you can show me you've beaten all\n"
	.string "the trainers thus far, I'll reward you\l"
	.string "with a special TM!$"

Zone10B_EventScript_BirdKeeper_Text_1:
# 157 "data/maps/Zone10B/scripts.pory"
	.string "You still have trainers to defeat.$"

Zone10B_EventScript_BirdKeeper_Text_2:
# 164 "data/maps/Zone10B/scripts.pory"
	.string "Wow! You really did beat all those\n"
	.string "trainers.\p"
	.string "Here's the TM for Steel Wing!$"

Zone10B_EventScript_BirdKeeper_Text_3:
# 169 "data/maps/Zone10B/scripts.pory"
	.string "The move Steel Wing can help Flying\n"
	.string "Pokémon cover for their Rock weakness,\l"
	.string "by giving Steel coverage to them!$"

Zone10B_EventScript_BerryExchange_Text_0:
# 179 "data/maps/Zone10B/scripts.pory"
	.string "Listen, you know how some berries\ncan treat status conditions?\pWell, I'm looking to start a Berry\nfarm. If you have 5 of each of\lthose Berries, I'll trade them\lfor 5 Revives.$"

Zone10B_EventScript_BerryExchange_Text_1:
# 194 "data/maps/Zone10B/scripts.pory"
	.string "Looks like you do have the Berries I'm\n"
	.string "looking for. What do you say?$"

Zone10B_EventScript_BerryExchange_Text_2:
# 201 "data/maps/Zone10B/scripts.pory"
	.string "Alright…{PAUSE_UNTIL_PRESS} Here we go…{PAUSE_UNTIL_PRESS}\nAnd bam! 5 Revives!$"

Zone10B_EventScript_BerryExchange_Text_3:
# 203 "data/maps/Zone10B/scripts.pory"
	.string "Thank you.\nI'll be seeing you around!$"

Zone10B_EventScript_BerryExchange_Text_4:
# 210 "data/maps/Zone10B/scripts.pory"
	.string "Aw, that's too bad.\nIt's a good offer though!$"

Zone10B_EventScript_BerryExchange_Text_5:
# 213 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nAspear Berries.$"

Zone10B_EventScript_BerryExchange_Text_6:
# 216 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nRawst Berries.$"

Zone10B_EventScript_BerryExchange_Text_7:
# 219 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nPecha Berries.$"

Zone10B_EventScript_BerryExchange_Text_8:
# 222 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nChesto Berries.$"

Zone10B_EventScript_BerryExchange_Text_9:
# 225 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nCheri Berries.$"

Zone10B_EventScript_FossilScientist_Text_0:
# 236 "data/maps/Zone10B/scripts.pory"
	.string "Oh. Another traveler looking to employ\n"
	.string "my fossil reviving services, eh?\p"
	.string "So, how about it? Do you have a fossil\n"
	.string "you'd like to revive?$"

Zone10B_EventScript_FossilScientist_Text_1:
# 240 "data/maps/Zone10B/scripts.pory"
	.string "Which fossil would you like me to\n"
	.string "revive?$"

Zone10B_EventScript_FossilScientist_Text_2:
# 321 "data/maps/Zone10B/scripts.pory"
	.string "That ain't no fossil! Kids these days!$"

Zone10B_EventScript_SendFossilMonParty_Text_0:
# 331 "data/maps/Zone10B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0:
# 342 "data/maps/Zone10B/scripts.pory"
	.string "Received the Fossil Pokémon\n{STR_VAR_2}!$"

Zone10B_EventScript_CommonFossilIntro_Text_0:
# 350 "data/maps/Zone10B/scripts.pory"
	.string "You want me to turn that\n{STR_VAR_1} back into a Pokémon?$"

Zone10B_EventScript_CommonFossilIntro_Text_1:
# 356 "data/maps/Zone10B/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone10B_EventScript_CommonFossilIntro_Text_2:
# 363 "data/maps/Zone10B/scripts.pory"
	.string "Alright. Gimme a moment…$"

Zone10B_EventScript_CommonFossilIntro_Text_3:
# 368 "data/maps/Zone10B/scripts.pory"
	.string "There. Here's your Pokémon.$"

Zone10B_EventScript_FossilDone_Text_0:
# 373 "data/maps/Zone10B/scripts.pory"
	.string "Ok, back to my drink.$"

Zone10B_EventScript_WaterMerchant_Text_0:
# 384 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and demand.\n"
	.string "And the demand is water.\p"
	.string "The Fresh Water I usually sell is in such\n"
	.string "high demand that I am out of stock.$"

Zone10B_EventScript_WaterMerchant_Text_1:
# 389 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and\ndemand. And the demand is water.\p¥200 for Fresh Water.\nRestores 30 HP each.$"

Zone10B_EventScript_WaterMerchant_Text_2:
# 390 "data/maps/Zone10B/scripts.pory"
	.string "One Fresh Water - ¥200$"

Zone10B_EventScript_WaterMerchant_Text_3:
# 390 "data/maps/Zone10B/scripts.pory"
	.string "Ten Fresh Water - ¥2000$"

Zone10B_EventScript_WaterMerchant_Text_4:
# 390 "data/maps/Zone10B/scripts.pory"
	.string "Exit$"

Zone10B_EventScript_WaterMerchant_Text_5:
# 399 "data/maps/Zone10B/scripts.pory"
	.string "Here you go.$"

Zone10B_EventScript_WaterMerchant_Text_6:
# 421 "data/maps/Zone10B/scripts.pory"
	.string "Ah, fine.$"

Zone10B_EventScript_WaterNotEnough_Text_0:
# 426 "data/maps/Zone10B/scripts.pory"
	.string "You don't have enough money.$"
