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


Zone10B_EventScript_SideQuestTMScorchingSands::
# 44 "data/maps/Zone10B/scripts.pory"
	lock
# 45 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 46 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_LUCKY_EGG, Zone10B_EventScript_SideQuestTMScorchingSands_2
Zone10B_EventScript_SideQuestTMScorchingSands_1:
# 60 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTMScorchingSands_Text_2
# 61 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 62 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 63 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_SideQuestTMScorchingSands_2:
# 47 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTMScorchingSands_Text_0
# 48 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_RESULT, GetCaughtSpeciesCount
# 49 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, 49
	goto_if_gt Zone10B_EventScript_SideQuestTMScorchingSands_4
# 54 "data/maps/Zone10B/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 55 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 56 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_SideQuestTMScorchingSands_4:
# 50 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTMScorchingSands_Text_1
# 51 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_LUCKY_EGG
# 52 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
	goto Zone10B_EventScript_SideQuestTMScorchingSands_1


Zone10B_EventScript_SideQuestTeleport::
# 67 "data/maps/Zone10B/scripts.pory"
	lock
# 68 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 69 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_ZONE10B_RECEIVED_TM_SCORCHING_SANDS, Zone10B_EventScript_SideQuestTeleport_2
Zone10B_EventScript_SideQuestTeleport_1:
# 159 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_3
# 160 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 161 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 162 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_SideQuestTeleport_2:
# 70 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_0
# 71 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NINA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 72 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MARIAM
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 73 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_OSCAR
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 74 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_1, Zone10B_EventScript_SideQuestTeleport_4
# 75 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_POLLY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 76 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JEREMIAH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 77 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JOSH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 78 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HARPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 79 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARTHUR
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 80 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_2, Zone10B_EventScript_SideQuestTeleport_4
# 81 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JEMMA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 82 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PATRICK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 83 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNABELLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 84 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BORIS
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 85 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RICHARD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 86 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_3, Zone10B_EventScript_SideQuestTeleport_4
# 87 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_HERMAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 88 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RALPH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 89 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SANTIAGO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 90 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CHLOE_AND_KAYA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 91 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRED
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 92 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_LUCIA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 93 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_4, Zone10B_EventScript_SideQuestTeleport_4
# 94 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ANNE_AND_JUNE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 95 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NOVA_AND_CORA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 96 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CLINTON
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 97 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_REBECCA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 98 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_RYAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 99 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CAITLYN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 100 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KENNETH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 101 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KEVIN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 102 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_5, Zone10B_EventScript_SideQuestTeleport_4
# 103 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_GILBERT
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 104 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MELANIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 105 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONSTANCE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 106 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_FRANK
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 107 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DUDLEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 108 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DAISY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 109 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_VIC_AND_DELL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 110 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MINA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 111 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_6, Zone10B_EventScript_SideQuestTeleport_4
# 112 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_MILLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 113 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAMAL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 114 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PAIGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 115 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SETH
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 116 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONNIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 117 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PETER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 118 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_WHITAKER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 119 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_7, Zone10B_EventScript_SideQuestTeleport_4
# 120 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JIMMY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 121 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_EMILIANO
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 122 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BECKHAM
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 123 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KAREN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 124 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JAYDEN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 125 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_NEIL
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 126 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_TAMARA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 127 "data/maps/Zone10B/scripts.pory"
	goto_if_unset FLAG_BEAT_LEVIATHAN_8, Zone10B_EventScript_SideQuestTeleport_4
# 128 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_COOPER
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 129 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CARMINE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 130 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JONATHAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 131 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CALVIN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 132 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_LUIS
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 133 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARI
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_131
Zone10B_EventScript_SideQuestTeleport_130:
# 134 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BERTHA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_135
Zone10B_EventScript_SideQuestTeleport_134:
# 135 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CASSANDRA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_139
Zone10B_EventScript_SideQuestTeleport_138:
# 136 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DOMINIC
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_143
Zone10B_EventScript_SideQuestTeleport_142:
# 137 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERICA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_147
Zone10B_EventScript_SideQuestTeleport_146:
# 138 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ALANA
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 139 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_JACOB
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 140 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DEWEY
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 141 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERNEST
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 142 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_KYLE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 143 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ELIAS
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 144 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_PEARLIE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 145 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_SUSAN
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 146 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CONRAD
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 147 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BRETT
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
# 154 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_ZONE10B_RECEIVED_TM_SCORCHING_SANDS
# 155 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_2
# 156 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_TM_SCORCHING_SANDS
	goto Zone10B_EventScript_SideQuestTeleport_1

Zone10B_EventScript_SideQuestTeleport_4:
# 148 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SideQuestTeleport_Text_1
# 149 "data/maps/Zone10B/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 150 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 151 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_SideQuestTeleport_131:
# 133 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ARI_CHALLENGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto Zone10B_EventScript_SideQuestTeleport_130

Zone10B_EventScript_SideQuestTeleport_135:
# 134 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_BERTHA_CHALLENGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto Zone10B_EventScript_SideQuestTeleport_134

Zone10B_EventScript_SideQuestTeleport_139:
# 135 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_CASSANDRA_CHALLENGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto Zone10B_EventScript_SideQuestTeleport_138

Zone10B_EventScript_SideQuestTeleport_143:
# 136 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_DOMINIC_CHALLENGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto Zone10B_EventScript_SideQuestTeleport_142

Zone10B_EventScript_SideQuestTeleport_147:
# 137 "data/maps/Zone10B/scripts.pory"
	checktrainerflag TRAINER_PBL_ERICA_CHALLENGE
	goto_if 0, Zone10B_EventScript_SideQuestTeleport_4
	goto Zone10B_EventScript_SideQuestTeleport_146


Zone10B_EventScript_BerryExchange::
# 167 "data/maps/Zone10B/scripts.pory"
	lock
# 168 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 169 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_0, MSGBOX_YESNO
# 170 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_BerryExchange_2
# 209 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_8
Zone10B_EventScript_BerryExchange_1:
# 211 "data/maps/Zone10B/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 212 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 213 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_BerryExchange_2:
# 171 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHERI_BERRY, 10
# 172 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_5
# 206 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_7
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_5:
# 173 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_CHESTO_BERRY, 10
# 174 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_8
# 203 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_6
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_8:
# 175 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_PECHA_BERRY, 10
# 176 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_11
# 200 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_5
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_11:
# 177 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_RAWST_BERRY, 10
# 178 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_14
# 197 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_4
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_14:
# 179 "data/maps/Zone10B/scripts.pory"
	checkitem ITEM_ASPEAR_BERRY, 10
# 180 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone10B_EventScript_BerryExchange_17
# 194 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_3
	goto Zone10B_EventScript_BerryExchange_1

Zone10B_EventScript_BerryExchange_17:
# 181 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 10
# 182 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_CHESTO_BERRY, 10
# 183 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 10
# 184 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 10
# 185 "data/maps/Zone10B/scripts.pory"
	removeitem ITEM_ASPEAR_BERRY, 10
# 186 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_1
# 187 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_REVIVE, 5
# 188 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_BerryExchange_Text_2
# 189 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 190 "data/maps/Zone10B/scripts.pory"
	setflag FLAG_HIDE_ZONE10B_BERRYMAN
# 191 "data/maps/Zone10B/scripts.pory"
	removeobject 5
# 192 "data/maps/Zone10B/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Zone10B_EventScript_BerryExchange_1


Zone10B_EventScript_FossilScientist::
# 219 "data/maps/Zone10B/scripts.pory"
	lock
# 220 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 221 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_0, MSGBOX_YESNO
# 222 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_FossilScientist_2
Zone10B_EventScript_FossilScientist_1:
# 225 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_1
# 226 "data/maps/Zone10B/scripts.pory"
	chooseitem TREASURES_POCKET
# 227 "data/maps/Zone10B/scripts.pory"
	switch VAR_ITEM_ID
# 228 "data/maps/Zone10B/scripts.pory"
	case ITEM_HELIX_FOSSIL, Zone10B_EventScript_FossilScientist_6
# 235 "data/maps/Zone10B/scripts.pory"
	case ITEM_DOME_FOSSIL, Zone10B_EventScript_FossilScientist_7
# 242 "data/maps/Zone10B/scripts.pory"
	case ITEM_OLD_AMBER, Zone10B_EventScript_FossilScientist_8
# 249 "data/maps/Zone10B/scripts.pory"
	case ITEM_ROOT_FOSSIL, Zone10B_EventScript_FossilScientist_9
# 256 "data/maps/Zone10B/scripts.pory"
	case ITEM_CLAW_FOSSIL, Zone10B_EventScript_FossilScientist_10
# 263 "data/maps/Zone10B/scripts.pory"
	case ITEM_ARMOR_FOSSIL, Zone10B_EventScript_FossilScientist_11
# 270 "data/maps/Zone10B/scripts.pory"
	case ITEM_SKULL_FOSSIL, Zone10B_EventScript_FossilScientist_12
# 277 "data/maps/Zone10B/scripts.pory"
	case ITEM_COVER_FOSSIL, Zone10B_EventScript_FossilScientist_13
# 284 "data/maps/Zone10B/scripts.pory"
	case ITEM_PLUME_FOSSIL, Zone10B_EventScript_FossilScientist_14
# 291 "data/maps/Zone10B/scripts.pory"
	case ITEM_JAW_FOSSIL, Zone10B_EventScript_FossilScientist_15
# 298 "data/maps/Zone10B/scripts.pory"
	case ITEM_SAIL_FOSSIL, Zone10B_EventScript_FossilScientist_16
# 306 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilScientist_Text_2
# 307 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 308 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 309 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_FossilScientist_2:
# 223 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_FossilScientist_1

Zone10B_EventScript_FossilScientist_4:
# 312 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_FossilScientist_6:
# 229 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_OMANYTE
# 230 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 231 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_OMANYTE, 20, ITEM_NONE
# 232 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 233 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 234 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_7:
# 236 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_KABUTO
# 237 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 238 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_KABUTO, 20, ITEM_NONE
# 239 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 240 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 241 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_8:
# 243 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AERODACTYL
# 244 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 245 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AERODACTYL, 20, ITEM_NONE
# 246 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 247 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 248 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_9:
# 250 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 251 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 252 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_LILEEP, 20, ITEM_NONE
# 253 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LILEEP
# 254 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 255 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_10:
# 257 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 258 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 259 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ANORITH, 20, ITEM_NONE
# 260 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ANORITH
# 261 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 262 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_11:
# 264 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_SHIELDON
# 265 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 266 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_SHIELDON, 20, ITEM_NONE
# 267 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SHIELDON
# 268 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 269 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_12:
# 271 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_CRANIDOS
# 272 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 273 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_CRANIDOS, 20, ITEM_NONE
# 274 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CRANIDOS
# 275 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 276 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_13:
# 278 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TIRTOUGA
# 279 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 280 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TIRTOUGA, 20, ITEM_NONE
# 281 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TIRTOUGA
# 282 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 283 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_14:
# 285 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_ARCHEN
# 286 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 287 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_ARCHEN, 20, ITEM_NONE
# 288 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ARCHEN
# 289 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 290 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_15:
# 292 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_TYRUNT
# 293 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 294 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_TYRUNT, 20, ITEM_NONE
# 295 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TYRUNT
# 296 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 297 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4

Zone10B_EventScript_FossilScientist_16:
# 299 "data/maps/Zone10B/scripts.pory"
	bufferspeciesname 1, SPECIES_AMAURA
# 300 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_CommonFossilIntro
# 301 "data/maps/Zone10B/scripts.pory"
	givemon SPECIES_AMAURA, 20, ITEM_NONE
# 302 "data/maps/Zone10B/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AMAURA
# 303 "data/maps/Zone10B/scripts.pory"
	call Zone10B_EventScript_ReceivedFossilMonFanfare
# 304 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_SendFossilMonParty
	goto Zone10B_EventScript_FossilScientist_4


Zone10B_EventScript_SendFossilMonParty::
# 316 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_SendFossilMonParty_Text_0, MSGBOX_YESNO
# 317 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone10B_EventScript_SendFossilMonParty_2
Zone10B_EventScript_SendFossilMonParty_1:
# 321 "data/maps/Zone10B/scripts.pory"
	setmonmetlocation VAR_TEMP_2, 247
# 322 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	return

Zone10B_EventScript_SendFossilMonParty_2:
# 318 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 319 "data/maps/Zone10B/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Zone10B_EventScript_SendFossilMonParty_1


Zone10B_EventScript_ReceivedFossilMonFanfare::
# 326 "data/maps/Zone10B/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 327 "data/maps/Zone10B/scripts.pory"
	message Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0
# 328 "data/maps/Zone10B/scripts.pory"
	waitmessage
# 329 "data/maps/Zone10B/scripts.pory"
	waitfanfare
	return


Zone10B_EventScript_CommonFossilIntro::
# 334 "data/maps/Zone10B/scripts.pory"
	bufferitemname 0, VAR_ITEM_ID
# 335 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_0, MSGBOX_YESNO
# 336 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_2
Zone10B_EventScript_CommonFossilIntro_1:
# 339 "data/maps/Zone10B/scripts.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 340 "data/maps/Zone10B/scripts.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq Zone10B_EventScript_CommonFossilIntro_5
# 347 "data/maps/Zone10B/scripts.pory"
	removeitem VAR_ITEM_ID
# 348 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_2
# 349 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 350 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 351 "data/maps/Zone10B/scripts.pory"
	delay 192
# 352 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 353 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_3
	return

Zone10B_EventScript_CommonFossilIntro_2:
# 337 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_FossilDone
	goto Zone10B_EventScript_CommonFossilIntro_1

Zone10B_EventScript_CommonFossilIntro_5:
# 341 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_CommonFossilIntro_Text_1
# 342 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 343 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 344 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_FossilDone::
# 358 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_FossilDone_Text_0
# 359 "data/maps/Zone10B/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 360 "data/maps/Zone10B/scripts.pory"
	waitmovement 0
# 361 "data/maps/Zone10B/scripts.pory"
	release
	end


Zone10B_EventScript_WaterMerchant::
# 366 "data/maps/Zone10B/scripts.pory"
	lock
# 367 "data/maps/Zone10B/scripts.pory"
	faceplayer
# 368 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone10B_EventScript_WaterMerchant_2
# 368 "data/maps/Zone10B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone10B_EventScript_WaterMerchant_2
# 373 "data/maps/Zone10B/scripts.pory"
	showmoneybox 0, 0, 0
# 374 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_1, MSGBOX_DEFAULT
# 375 "data/maps/Zone10B/scripts.pory"
	dynmultichoice 0, 12, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Zone10B_EventScript_WaterMerchant_Text_2, Zone10B_EventScript_WaterMerchant_Text_3, Zone10B_EventScript_WaterMerchant_Text_4
# 376 "data/maps/Zone10B/scripts.pory"
	switch VAR_RESULT
# 377 "data/maps/Zone10B/scripts.pory"
	case 0, Zone10B_EventScript_WaterMerchant_8
# 390 "data/maps/Zone10B/scripts.pory"
	case 1, Zone10B_EventScript_WaterMerchant_9
Zone10B_EventScript_WaterMerchant_6:
# 404 "data/maps/Zone10B/scripts.pory"
	closemessage
# 405 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 406 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_6
# 407 "data/maps/Zone10B/scripts.pory"
	release
	return

Zone10B_EventScript_WaterMerchant_2:
# 369 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_0
# 370 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_8:
# 378 "data/maps/Zone10B/scripts.pory"
	checkmoney 200, 0
# 379 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_10
# 382 "data/maps/Zone10B/scripts.pory"
	removemoney 200, 0
# 383 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 384 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 385 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 386 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 387 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_9:
# 391 "data/maps/Zone10B/scripts.pory"
	checkmoney 2000, 0
# 392 "data/maps/Zone10B/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Zone10B_EventScript_WaterMerchant_13
# 395 "data/maps/Zone10B/scripts.pory"
	removemoney 2000, 0
# 396 "data/maps/Zone10B/scripts.pory"
	updatemoneybox
# 397 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterMerchant_Text_5
# 398 "data/maps/Zone10B/scripts.pory"
	giveitem ITEM_FRESH_WATER, 10
# 399 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 400 "data/maps/Zone10B/scripts.pory"
	release
	end

Zone10B_EventScript_WaterMerchant_10:
# 380 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6

Zone10B_EventScript_WaterMerchant_13:
# 393 "data/maps/Zone10B/scripts.pory"
	goto Zone10B_EventScript_WaterNotEnough
	goto Zone10B_EventScript_WaterMerchant_6


Zone10B_EventScript_WaterNotEnough::
# 411 "data/maps/Zone10B/scripts.pory"
	msgbox Zone10B_EventScript_WaterNotEnough_Text_0
# 412 "data/maps/Zone10B/scripts.pory"
	hidemoneybox
# 413 "data/maps/Zone10B/scripts.pory"
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

Zone10B_EventScript_SideQuestTMScorchingSands_Text_0:
# 47 "data/maps/Zone10B/scripts.pory"
	.string "You know what would make a\nCollector like me happy? Meeting\lsomeone who has caught 50 different\lspecies of Pokémon. Now, that\lperson is someone I'd like to meet!$"

Zone10B_EventScript_SideQuestTMScorchingSands_Text_1:
# 50 "data/maps/Zone10B/scripts.pory"
	.string "Whoah, you've caught 50 species of\nPokémon? That's amazing.\pI aspire to be like you. Here, I\nwant you to have this.$"

Zone10B_EventScript_SideQuestTMScorchingSands_Text_2:
# 60 "data/maps/Zone10B/scripts.pory"
	.string "Maybe I can catch 50 species of\nPokémon someday too.$"

Zone10B_EventScript_SideQuestTeleport_Text_0:
# 70 "data/maps/Zone10B/scripts.pory"
	.string "Greetings, young one. In my\npossession, I hold a useful TM for\lyour Pokémon, but only if you have\lproven yourself in battle.\pYou must have defeated all\nTrainers available thus far.$"

Zone10B_EventScript_SideQuestTeleport_Text_1:
# 148 "data/maps/Zone10B/scripts.pory"
	.string "You still have trainers to defeat.$"

Zone10B_EventScript_SideQuestTeleport_Text_2:
# 155 "data/maps/Zone10B/scripts.pory"
	.string "Impressive, young one. I see you have\n"
	.string "defeated all those trainers.\p"
	.string "Here is TM54 - Scorching Sands.$"

Zone10B_EventScript_SideQuestTeleport_Text_3:
# 159 "data/maps/Zone10B/scripts.pory"
	.string "The move Scorching Sands deals damage\n"
	.string "and can potentially burn an opponent.\p"
	.string "It's quite the neat move.$"

Zone10B_EventScript_BerryExchange_Text_0:
# 169 "data/maps/Zone10B/scripts.pory"
	.string "Listen, you know how some berries\ncan treat status conditions?\pWell, I'm looking to start a Berry\nfarm. If you have 10 of each of\lthose Berries, I'll trade them\lfor 5 Revives. How about it?$"

Zone10B_EventScript_BerryExchange_Text_1:
# 186 "data/maps/Zone10B/scripts.pory"
	.string "Alright…{PAUSE_UNTIL_PRESS} Here we go…{PAUSE_UNTIL_PRESS}\nAnd bam! 5 Revives!$"

Zone10B_EventScript_BerryExchange_Text_2:
# 188 "data/maps/Zone10B/scripts.pory"
	.string "Thank you.\nI'll be seeing you around!$"

Zone10B_EventScript_BerryExchange_Text_3:
# 194 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nAspear Berries.$"

Zone10B_EventScript_BerryExchange_Text_4:
# 197 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nRawst Berries.$"

Zone10B_EventScript_BerryExchange_Text_5:
# 200 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nPecha Berries.$"

Zone10B_EventScript_BerryExchange_Text_6:
# 203 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nChesto Berries.$"

Zone10B_EventScript_BerryExchange_Text_7:
# 206 "data/maps/Zone10B/scripts.pory"
	.string "It looks like you don't have enough\nCheri Berries.$"

Zone10B_EventScript_BerryExchange_Text_8:
# 209 "data/maps/Zone10B/scripts.pory"
	.string "Aw, that's too bad.\nIt's a good offer though!$"

Zone10B_EventScript_FossilScientist_Text_0:
# 221 "data/maps/Zone10B/scripts.pory"
	.string "Oh. Another traveler looking to employ\n"
	.string "my fossil reviving services, eh?\p"
	.string "So, how about it? Do you have a fossil\n"
	.string "you'd like to revive?$"

Zone10B_EventScript_FossilScientist_Text_1:
# 225 "data/maps/Zone10B/scripts.pory"
	.string "Which fossil would you like me to\n"
	.string "revive?$"

Zone10B_EventScript_FossilScientist_Text_2:
# 306 "data/maps/Zone10B/scripts.pory"
	.string "That ain't no fossil! Kids these days!$"

Zone10B_EventScript_SendFossilMonParty_Text_0:
# 316 "data/maps/Zone10B/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

Zone10B_EventScript_ReceivedFossilMonFanfare_Text_0:
# 327 "data/maps/Zone10B/scripts.pory"
	.string "Received the Fossil Pokémon\n{STR_VAR_2}!$"

Zone10B_EventScript_CommonFossilIntro_Text_0:
# 335 "data/maps/Zone10B/scripts.pory"
	.string "You want me to turn that\n{STR_VAR_1} back into a Pokémon?$"

Zone10B_EventScript_CommonFossilIntro_Text_1:
# 341 "data/maps/Zone10B/scripts.pory"
	.string "Your party is full. Clear a party slot,\n"
	.string "then come back.$"

Zone10B_EventScript_CommonFossilIntro_Text_2:
# 348 "data/maps/Zone10B/scripts.pory"
	.string "Alright. Gimme a moment…$"

Zone10B_EventScript_CommonFossilIntro_Text_3:
# 353 "data/maps/Zone10B/scripts.pory"
	.string "There. Here's your Pokémon.$"

Zone10B_EventScript_FossilDone_Text_0:
# 358 "data/maps/Zone10B/scripts.pory"
	.string "Ok, back to my drink.$"

Zone10B_EventScript_WaterMerchant_Text_0:
# 369 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and demand.\n"
	.string "And the demand is water.\p"
	.string "The Fresh Water I usually sell is in such\n"
	.string "high demand that I am out of stock.$"

Zone10B_EventScript_WaterMerchant_Text_1:
# 374 "data/maps/Zone10B/scripts.pory"
	.string "In the desert, it's supply and\ndemand. And the demand is water.\p¥200 for Fresh Water.\nRestores 30 HP each.$"

Zone10B_EventScript_WaterMerchant_Text_2:
# 375 "data/maps/Zone10B/scripts.pory"
	.string "One Fresh Water - ¥200$"

Zone10B_EventScript_WaterMerchant_Text_3:
# 375 "data/maps/Zone10B/scripts.pory"
	.string "Ten Fresh Water - ¥2000$"

Zone10B_EventScript_WaterMerchant_Text_4:
# 375 "data/maps/Zone10B/scripts.pory"
	.string "Exit$"

Zone10B_EventScript_WaterMerchant_Text_5:
# 384 "data/maps/Zone10B/scripts.pory"
	.string "Here you go.$"

Zone10B_EventScript_WaterMerchant_Text_6:
# 406 "data/maps/Zone10B/scripts.pory"
	.string "Ah, fine.$"

Zone10B_EventScript_WaterNotEnough_Text_0:
# 411 "data/maps/Zone10B/scripts.pory"
	.string "You don't have enough money.$"
