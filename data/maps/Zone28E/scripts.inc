Zone28E_MapScripts::
	.byte 0


Zone28E_EventScript_KimonoGirl::
# 4 "data/maps/Zone28E/scripts.pory"
	lockall
# 5 "data/maps/Zone28E/scripts.pory"
	playbgm MUS_HG_KIMONO_GIRL, 0
# 6 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_KIMONO_GIRL_28E, Common_Movement_WalkUp2
# 7 "data/maps/Zone28E/scripts.pory"
	waitmovement 0
# 8 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_KIMONO_GIRL_28E, Common_Movement_ExclamationMark
# 9 "data/maps/Zone28E/scripts.pory"
	playse SE_PIN
# 10 "data/maps/Zone28E/scripts.pory"
	waitmovement 0
# 11 "data/maps/Zone28E/scripts.pory"
	waitse
# 12 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_KIMONO_GIRL_28E, Common_Movement_WalkUp3
# 13 "data/maps/Zone28E/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 14 "data/maps/Zone28E/scripts.pory"
	switch VAR_TEMP_0
# 15 "data/maps/Zone28E/scripts.pory"
	case 2, Zone28E_EventScript_KimonoGirl_3
# 17 "data/maps/Zone28E/scripts.pory"
	case 4, Zone28E_EventScript_KimonoGirl_4
# 19 "data/maps/Zone28E/scripts.pory"
	case 5, Zone28E_EventScript_KimonoGirl_5
Zone28E_EventScript_KimonoGirl_1:
# 22 "data/maps/Zone28E/scripts.pory"
	waitmovement LOCALID_PLAYER
# 23 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 24 "data/maps/Zone28E/scripts.pory"
	waitmovement LOCALID_KIMONO_GIRL_28E
# 25 "data/maps/Zone28E/scripts.pory"
	waitmovement LOCALID_PLAYER
# 26 "data/maps/Zone28E/scripts.pory"
	setspeaker Zone28E_EventScript_KimonoGirl_Text_0
# 27 "data/maps/Zone28E/scripts.pory"
	msgbox Zone28E_EventScript_KimonoGirl_Text_1
# 28 "data/maps/Zone28E/scripts.pory"
	setspeaker SP_NAME_NONE
# 29 "data/maps/Zone28E/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 30 "data/maps/Zone28E/scripts.pory"
	setspeaker Zone28E_EventScript_KimonoGirl_Text_0
# 31 "data/maps/Zone28E/scripts.pory"
	msgbox Zone28E_EventScript_KimonoGirl_Text_2
# 32 "data/maps/Zone28E/scripts.pory"
	closemessage
# 33 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_KIMONO_GIRL_28E, Common_Movement_WalkRight
# 34 "data/maps/Zone28E/scripts.pory"
	waitmovement 0
# 35 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_KIMONO_GIRL_28E, Common_Movement_WalkUp6
# 36 "data/maps/Zone28E/scripts.pory"
	waitmovement 0
# 37 "data/maps/Zone28E/scripts.pory"
	removeobject LOCALID_KIMONO_GIRL_28E
# 38 "data/maps/Zone28E/scripts.pory"
	setflag FLAG_HIDE_ZONE28E_KIMONO_GIRL
# 39 "data/maps/Zone28E/scripts.pory"
	setvar VAR_ZONE_28_STATE, 1
# 40 "data/maps/Zone28E/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/Zone28E/scripts.pory"
	releaseall
	return

Zone28E_EventScript_KimonoGirl_3:
# 16 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Zone28E_EventScript_KimonoGirl_1

Zone28E_EventScript_KimonoGirl_4:
# 18 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Zone28E_EventScript_KimonoGirl_1

Zone28E_EventScript_KimonoGirl_5:
# 20 "data/maps/Zone28E/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
	goto Zone28E_EventScript_KimonoGirl_1


Zone28E_EventScript_Luca::
# 45 "data/maps/Zone28E/scripts.pory"
	trainerbattle_single TRAINER_PBL_LUCA, Zone28E_EventScript_Luca_Text_0, Zone28E_EventScript_Luca_Text_1
# 46 "data/maps/Zone28E/scripts.pory"
	msgbox Zone28E_EventScript_Luca_Text_2, MSGBOX_AUTOCLOSE
	end


Zone28E_EventScript_Izzy::
# 51 "data/maps/Zone28E/scripts.pory"
	trainerbattle_single TRAINER_PBL_IZZY, Zone28E_EventScript_Luca_Text_0, Zone28E_EventScript_Luca_Text_1
# 52 "data/maps/Zone28E/scripts.pory"
	msgbox Zone28E_EventScript_Luca_Text_2, MSGBOX_AUTOCLOSE
	end


Zone28E_EventScript_KimonoGirl_Text_0:
# 26 "data/maps/Zone28E/scripts.pory"
	.string "Kimono Girl$"

Zone28E_EventScript_KimonoGirl_Text_1:
# 27 "data/maps/Zone28E/scripts.pory"
	.string "HELLO! I SAW UR BATTLE, U BATTLE GOOD.\n"
	.string "TAKE THIS ITEM!$"

Zone28E_EventScript_KimonoGirl_Text_2:
# 31 "data/maps/Zone28E/scripts.pory"
	.string "SEE YA!$"

Zone28E_EventScript_Luca_Text_0:
# 45 "data/maps/Zone28E/scripts.pory"
	.string "BATTLE!$"

Zone28E_EventScript_Luca_Text_1:
# 45 "data/maps/Zone28E/scripts.pory"
	.string "DEFEAT!$"

Zone28E_EventScript_Luca_Text_2:
# 46 "data/maps/Zone28E/scripts.pory"
	.string "DEFEATED!$"
