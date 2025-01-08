EventScript_EnterSanctuary::
# 2 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IN_NEW_ZONE
# 3 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE_PC_USED
# 4 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraUp
# 5 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 6 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 7 "data/scripts/battle_labyrinth.pory"
	playse SE_PIN
# 8 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 9 "data/scripts/battle_labyrinth.pory"
	waitse
# 10 "data/scripts/battle_labyrinth.pory"
	call EventScript_MoveCameraDown
# 11 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkDown3
# 12 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 13 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_BADGE
# 14 "data/scripts/battle_labyrinth.pory"
	call EventScript_CompletePBLSubquest
	return


EventScript_CompletePBLSubquest::
# 19 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 20 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_CompletePBLSubquest_2
# 22 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_CompletePBLSubquest_3
# 24 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_CompletePBLSubquest_4
# 26 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_CompletePBLSubquest_5
# 28 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_CompletePBLSubquest_6
# 30 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_CompletePBLSubquest_7
# 32 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_CompletePBLSubquest_8
# 35 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_CompletePBLSubquest_9
# 37 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_CompletePBLSubquest_10
# 39 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_CompletePBLSubquest_11
# 41 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_CompletePBLSubquest_12
# 43 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_CompletePBLSubquest_13
# 46 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_CompletePBLSubquest_14
# 48 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_CompletePBLSubquest_15
# 50 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_CompletePBLSubquest_16
# 52 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_CompletePBLSubquest_17
# 55 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_CompletePBLSubquest_18
# 57 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_CompletePBLSubquest_19
# 59 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_CompletePBLSubquest_20
# 61 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_CompletePBLSubquest_21
# 63 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_CompletePBLSubquest_22
# 66 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_CompletePBLSubquest_23
# 68 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_CompletePBLSubquest_24
# 70 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_CompletePBLSubquest_25
# 72 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_CompletePBLSubquest_26
# 74 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_CompletePBLSubquest_27
# 76 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_CompletePBLSubquest_28
# 78 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_CompletePBLSubquest_29
# 80 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_CompletePBLSubquest_30
# 82 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_CompletePBLSubquest_31
# 84 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_CompletePBLSubquest_32
# 86 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_CompletePBLSubquest_33
# 88 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_CompletePBLSubquest_34
# 90 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_CompletePBLSubquest_35
# 92 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_CompletePBLSubquest_36
# 94 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_CompletePBLSubquest_37
# 96 "data/scripts/battle_labyrinth.pory"
	case 41, EventScript_CompletePBLSubquest_38
# 98 "data/scripts/battle_labyrinth.pory"
	case 42, EventScript_CompletePBLSubquest_39
# 100 "data/scripts/battle_labyrinth.pory"
	case 43, EventScript_CompletePBLSubquest_40
# 102 "data/scripts/battle_labyrinth.pory"
	case 44, EventScript_CompletePBLSubquest_41
# 104 "data/scripts/battle_labyrinth.pory"
	case 45, EventScript_CompletePBLSubquest_42
# 106 "data/scripts/battle_labyrinth.pory"
	case 46, EventScript_CompletePBLSubquest_43
# 108 "data/scripts/battle_labyrinth.pory"
	case 47, EventScript_CompletePBLSubquest_44
# 110 "data/scripts/battle_labyrinth.pory"
	case 48, EventScript_CompletePBLSubquest_45
# 112 "data/scripts/battle_labyrinth.pory"
	case 49, EventScript_CompletePBLSubquest_46
# 114 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_CompletePBLSubquest_47
	return

EventScript_CompletePBLSubquest_2:
# 21 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
	return

EventScript_CompletePBLSubquest_3:
# 23 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
	return

EventScript_CompletePBLSubquest_4:
# 25 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
	return

EventScript_CompletePBLSubquest_5:
# 27 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
	return

EventScript_CompletePBLSubquest_6:
# 29 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
	return

EventScript_CompletePBLSubquest_7:
# 31 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
	return

EventScript_CompletePBLSubquest_8:
# 33 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 34 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
	return

EventScript_CompletePBLSubquest_9:
# 36 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
	return

EventScript_CompletePBLSubquest_10:
# 38 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_10
	return

EventScript_CompletePBLSubquest_11:
# 40 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_11
	return

EventScript_CompletePBLSubquest_12:
# 42 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_12
	return

EventScript_CompletePBLSubquest_13:
# 44 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_13
# 45 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_14
	return

EventScript_CompletePBLSubquest_14:
# 47 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_15
	return

EventScript_CompletePBLSubquest_15:
# 49 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_16
	return

EventScript_CompletePBLSubquest_16:
# 51 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_17
	return

EventScript_CompletePBLSubquest_17:
# 53 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_18
# 54 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_19
	return

EventScript_CompletePBLSubquest_18:
# 56 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_20
	return

EventScript_CompletePBLSubquest_19:
# 58 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_21
	return

EventScript_CompletePBLSubquest_20:
# 60 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_22
	return

EventScript_CompletePBLSubquest_21:
# 62 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_23
	return

EventScript_CompletePBLSubquest_22:
# 64 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_24
# 65 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_25
	return

EventScript_CompletePBLSubquest_23:
# 67 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_26
	return

EventScript_CompletePBLSubquest_24:
# 69 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_27
	return

EventScript_CompletePBLSubquest_25:
# 71 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_28
	return

EventScript_CompletePBLSubquest_26:
# 73 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_29
	return

EventScript_CompletePBLSubquest_27:
# 75 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_30
	return

EventScript_CompletePBLSubquest_28:
# 77 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_31
	return

EventScript_CompletePBLSubquest_29:
# 79 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_32
	return

EventScript_CompletePBLSubquest_30:
# 81 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_33
	return

EventScript_CompletePBLSubquest_31:
# 83 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_34
	return

EventScript_CompletePBLSubquest_32:
# 85 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_35
	return

EventScript_CompletePBLSubquest_33:
# 87 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_36
	return

EventScript_CompletePBLSubquest_34:
# 89 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_37
	return

EventScript_CompletePBLSubquest_35:
# 91 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_38
	return

EventScript_CompletePBLSubquest_36:
# 93 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_39
	return

EventScript_CompletePBLSubquest_37:
# 95 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_40
	return

EventScript_CompletePBLSubquest_38:
# 97 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_41
	return

EventScript_CompletePBLSubquest_39:
# 99 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_42
	return

EventScript_CompletePBLSubquest_40:
# 101 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_43
	return

EventScript_CompletePBLSubquest_41:
# 103 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_44
	return

EventScript_CompletePBLSubquest_42:
# 105 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_45
	return

EventScript_CompletePBLSubquest_43:
# 107 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_46
	return

EventScript_CompletePBLSubquest_44:
# 109 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_47
	return

EventScript_CompletePBLSubquest_45:
# 111 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_48
	return

EventScript_CompletePBLSubquest_46:
# 113 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_49
	return

EventScript_CompletePBLSubquest_47:
# 115 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_50
	return


EventScript_MoveCameraUp::
# 120 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 121 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp3
# 122 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 123 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_MoveCameraDown::
# 128 "data/scripts/battle_labyrinth.pory"
	special SpawnCameraObject
# 129 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown3
# 130 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 131 "data/scripts/battle_labyrinth.pory"
	special RemoveCameraObject
	return


EventScript_RecoverySign::
# 136 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 137 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_MedicineSign::
# 142 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 143 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 148 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 149 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 154 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 155 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 160 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 161 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 166 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 167 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 172 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 173 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


EventScript_ConsumablesSign::
# 178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


	.align 2
# 182 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 183 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

EventScript_Shop_Portentia::
# 187 "data/scripts/battle_labyrinth.pory"
	lock
# 188 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 189 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 193 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 197 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 198 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 199 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 200 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 201 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 202 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 204 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 205 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 206 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 208 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_13
# 209 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 210 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 212 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_14
# 213 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_14
# 214 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 215 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 216 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_14
# 217 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_14
# 218 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_14
# 219 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_14
# 220 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_14
# 221 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_14
# 222 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_14
# 223 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_14
# 224 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_14
# 225 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_14
EventScript_Shop_Portentia_9:
# 228 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 229 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 190 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 191 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 194 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 195 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 193 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 203 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 207 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_2
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 211 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 226 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Portentia_9


	.align 2
# 232 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 233 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 234 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 235 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 238 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 239 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 240 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 241 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 242 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 243 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 244 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 247 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 248 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 249 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 250 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 251 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 252 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 253 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 254 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 255 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 259 "data/scripts/battle_labyrinth.pory"
	lock
# 260 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 261 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 265 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 266 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 267 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 268 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 269 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 270 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 272 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 273 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 275 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 276 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 278 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_9
# 279 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_9
# 281 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_10
# 282 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_10
# 283 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_10
# 284 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_10
# 285 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 286 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 287 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 288 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 289 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 290 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 291 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 292 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 293 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 294 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_10
EventScript_Shop_Tim_4:
# 297 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 298 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 262 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 263 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 271 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 274 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 277 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 280 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
# 295 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Tim_4


	.align 2
# 301 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 302 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 305 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_2:
# 306 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 307 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 310 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_3:
# 311 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 312 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 313 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 314 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 315 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

	.align 2
# 318 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_4:
# 319 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 320 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 321 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 322 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 323 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 324 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 325 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 329 "data/scripts/battle_labyrinth.pory"
	lock
# 330 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 331 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 344 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 345 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 346 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 347 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 348 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 349 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 351 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 352 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 353 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 355 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 356 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 357 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 359 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 360 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 361 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_9
# 362 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_9
# 364 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_10
# 365 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_10
# 366 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_10
# 367 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_10
# 369 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_11
# 370 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_11
# 371 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_11
# 373 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_12
# 374 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_12
# 376 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_13
EventScript_Shop_Varrick_4:
# 383 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 384 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 332 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 342 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 350 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 354 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 358 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 363 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 368 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 372 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 375 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 377 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_14
# 377 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_14
# 380 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 378 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 387 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 391 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 392 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 397 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 408 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 419 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 427 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 428 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 429 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 434 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 450 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 451 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 452 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 471 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 481 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 482 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 483 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 494 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 519 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 520 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 521 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 525 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 553 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 554 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 555 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 563 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 564 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 565 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 566 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 567 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 568 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 569 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 570 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 571 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 572 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 597 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 600 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 601 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 602 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 603 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 604 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 605 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
# 606 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 607 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 608 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 609 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 610 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 611 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 612 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 613 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 614 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 615 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 616 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 617 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 618 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 621 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 622 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 623 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 625 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 627 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 635 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 636 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 649 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 650 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 651 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 658 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 659 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 660 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 661 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 662 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 668 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 669 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 670 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 671 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 672 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 673 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 674 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 675 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 676 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 677 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 678 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 679 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 680 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 681 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 682 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 683 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 684 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 685 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 686 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 687 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 688 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 689 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 690 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 691 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 692 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 693 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 694 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 695 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 696 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 697 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 698 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 699 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 700 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 701 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 702 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 703 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 704 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 705 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 706 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 707 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 708 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 709 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 713 "data/scripts/battle_labyrinth.pory"
	lock
# 714 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 715 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 721 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 722 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 723 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 724 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 725 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 726 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 728 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 729 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 730 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 731 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 733 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 734 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 736 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_9
# 737 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_9
# 738 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_9
# 739 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_9
# 740 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_9
# 741 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_9
# 742 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_9
# 743 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_9
# 744 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_9
# 745 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_9
# 746 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_9
# 747 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_9
# 748 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_9
# 749 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_9
EventScript_Shop_Julia_4:
# 752 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 753 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 716 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 719 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 727 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 732 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 735 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_3
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_9:
# 750 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 756 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 757 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 760 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 761 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 762 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 763 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 764 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 765 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 766 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 767 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 770 "data/scripts/battle_labyrinth.pory"
Shop_Berries_3:
# 771 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 772 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 773 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 774 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 775 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 776 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 777 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 778 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 782 "data/scripts/battle_labyrinth.pory"
	lock
# 783 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 784 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 793 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 794 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 795 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 785 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 791 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 799 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 800 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 801 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 802 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 803 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 877 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 804 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 809 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 813 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 814 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 815 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 818 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_19
EventScript_Shop_Marie_MainMenu_18:
# 821 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
# 824 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Marie_MainMenu_25
EventScript_Shop_Marie_MainMenu_24:
# 827 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Marie_MainMenu_28
EventScript_Shop_Marie_MainMenu_27:
# 838 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_20, 13
# 839 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 840 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 841 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_31
# 849 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_32
# 857 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_MainMenu_33
# 865 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_MainMenu_34
# 873 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_MainMenu_35
# 874 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_35
	return

EventScript_Shop_Marie_MainMenu_3:
# 878 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_25, MSGBOX_DEFAULT
# 879 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 882 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 806 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 804 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 880 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 810 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 816 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 819 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 1
	goto EventScript_Shop_Marie_MainMenu_18

EventScript_Shop_Marie_MainMenu_22:
# 822 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_9, 2
	goto EventScript_Shop_Marie_MainMenu_21

EventScript_Shop_Marie_MainMenu_25:
# 825 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_10, 3
	goto EventScript_Shop_Marie_MainMenu_24

EventScript_Shop_Marie_MainMenu_28:
# 828 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_11, 4
# 829 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_12, 5
# 830 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_13, 6
# 831 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_14, 7
# 832 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_15, 8
# 833 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_16, 9
# 834 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_17, 10
# 835 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_18, 11
# 836 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_19, 12
	goto EventScript_Shop_Marie_MainMenu_27

EventScript_Shop_Marie_MainMenu_31:
# 842 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 843 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_21, MSGBOX_YESNO
# 844 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_37
EventScript_Shop_Marie_MainMenu_36:
# 847 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_32:
# 850 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 851 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_22, MSGBOX_YESNO
# 852 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_40
EventScript_Shop_Marie_MainMenu_39:
# 855 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_33:
# 858 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 859 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_23, MSGBOX_YESNO
# 860 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_43
EventScript_Shop_Marie_MainMenu_42:
# 863 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_34:
# 866 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 867 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_24, MSGBOX_YESNO
# 868 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_46
EventScript_Shop_Marie_MainMenu_45:
# 871 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_35:
# 875 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_37:
# 845 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_ElementalMonkeyEgg
	goto EventScript_Shop_Marie_MainMenu_36

EventScript_Shop_Marie_MainMenu_40:
# 853 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_RegionalFormEgg
	goto EventScript_Shop_Marie_MainMenu_39

EventScript_Shop_Marie_MainMenu_43:
# 861 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon1Egg
	goto EventScript_Shop_Marie_MainMenu_42

EventScript_Shop_Marie_MainMenu_46:
# 869 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon2Egg
	goto EventScript_Shop_Marie_MainMenu_45


EventScript_Shop_Marie_ElementalMonkeyEgg::
# 887 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 888 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_2
# 893 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 894 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_5
EventScript_Shop_Marie_ElementalMonkeyEgg_4:
# 914 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_ElementalMonkeyEgg_8
EventScript_Shop_Marie_ElementalMonkeyEgg_7:
# 917 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_14
EventScript_Shop_Marie_ElementalMonkeyEgg_13:
# 921 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 922 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 923 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 924 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 925 "data/scripts/battle_labyrinth.pory"
	random 3
# 926 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 927 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_ElementalMonkeyEgg_20
# 929 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_ElementalMonkeyEgg_21
# 931 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_ElementalMonkeyEgg_22
EventScript_Shop_Marie_ElementalMonkeyEgg_18:
# 934 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 935 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 936 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 937 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 938 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 939 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 940 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_2:
# 889 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 890 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_5:
# 895 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 896 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 897 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 898 "data/scripts/battle_labyrinth.pory"
	waitstate
# 899 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 900 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 901 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_11
# 905 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 906 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 907 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 908 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 909 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_16
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_4

EventScript_Shop_Marie_ElementalMonkeyEgg_8:
# 915 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_7

EventScript_Shop_Marie_ElementalMonkeyEgg_11:
# 902 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_14:
# 918 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 919 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_13

EventScript_Shop_Marie_ElementalMonkeyEgg_16:
# 910 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_20:
# 928 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_21:
# 930 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_22:
# 932 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18


EventScript_Shop_Marie_RegionalFormEgg::
# 944 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 945 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_2
# 950 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 951 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_5
EventScript_Shop_Marie_RegionalFormEgg_4:
# 971 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_RegionalFormEgg_8
EventScript_Shop_Marie_RegionalFormEgg_7:
# 974 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_14
EventScript_Shop_Marie_RegionalFormEgg_13:
# 978 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 979 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 980 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 981 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 982 "data/scripts/battle_labyrinth.pory"
	random 4
# 983 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 984 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_RegionalFormEgg_20
# 986 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_RegionalFormEgg_21
# 988 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_RegionalFormEgg_22
# 990 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_RegionalFormEgg_23
EventScript_Shop_Marie_RegionalFormEgg_18:
# 993 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 994 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 995 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 996 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 997 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 998 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 999 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_RegionalFormEgg_2:
# 946 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 947 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_5:
# 952 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 953 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 954 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 955 "data/scripts/battle_labyrinth.pory"
	waitstate
# 956 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 957 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 958 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_11
# 962 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 963 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 964 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 965 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 966 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_16
	goto EventScript_Shop_Marie_RegionalFormEgg_4

EventScript_Shop_Marie_RegionalFormEgg_8:
# 972 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_RegionalFormEgg_7

EventScript_Shop_Marie_RegionalFormEgg_11:
# 959 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_14:
# 975 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 976 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_RegionalFormEgg_13

EventScript_Shop_Marie_RegionalFormEgg_16:
# 967 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_20:
# 985 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MEOWTH_ALOLA
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_21:
# 987 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ZIGZAGOON_GALAR
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_22:
# 989 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VOLTORB_HISUI
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_23:
# 991 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WOOPER_PALDEA
	goto EventScript_Shop_Marie_RegionalFormEgg_18


EventScript_Shop_Marie_BabyPokemon1Egg::
# 1003 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 1004 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_2
# 1009 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 1010 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_5
EventScript_Shop_Marie_BabyPokemon1Egg_4:
# 1030 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon1Egg_8
EventScript_Shop_Marie_BabyPokemon1Egg_7:
# 1033 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_14
EventScript_Shop_Marie_BabyPokemon1Egg_13:
# 1037 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 1038 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1039 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 1040 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1041 "data/scripts/battle_labyrinth.pory"
	random 3
# 1042 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1043 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon1Egg_20
# 1045 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon1Egg_21
# 1047 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon1Egg_22
EventScript_Shop_Marie_BabyPokemon1Egg_18:
# 1050 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 1051 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 1052 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 1053 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1054 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 1055 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1056 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon1Egg_2:
# 1005 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 1006 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_5:
# 1011 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 1012 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1013 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1014 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1015 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1016 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1017 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_11
# 1021 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 1022 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 1023 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 1024 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 1025 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_16
	goto EventScript_Shop_Marie_BabyPokemon1Egg_4

EventScript_Shop_Marie_BabyPokemon1Egg_8:
# 1031 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon1Egg_7

EventScript_Shop_Marie_BabyPokemon1Egg_11:
# 1018 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_14:
# 1034 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 1035 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon1Egg_13

EventScript_Shop_Marie_BabyPokemon1Egg_16:
# 1026 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_20:
# 1044 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOOCHUM
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_21:
# 1046 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ELEKID
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_22:
# 1048 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MAGBY
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18


EventScript_Shop_Marie_BabyPokemon2Egg::
# 1060 "data/scripts/battle_labyrinth.pory"
	checkmoney 10000, 0
# 1061 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_2
# 1066 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 1067 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_5
EventScript_Shop_Marie_BabyPokemon2Egg_4:
# 1087 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon2Egg_8
EventScript_Shop_Marie_BabyPokemon2Egg_7:
# 1090 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_14
EventScript_Shop_Marie_BabyPokemon2Egg_13:
# 1094 "data/scripts/battle_labyrinth.pory"
	removemoney 10000
# 1095 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1096 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 1097 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1098 "data/scripts/battle_labyrinth.pory"
	random 4
# 1099 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1100 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon2Egg_20
# 1102 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon2Egg_21
# 1104 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon2Egg_22
# 1106 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_BabyPokemon2Egg_23
EventScript_Shop_Marie_BabyPokemon2Egg_18:
# 1109 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 1110 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 1111 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 1112 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1113 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 1114 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1115 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon2Egg_2:
# 1062 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 1063 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_5:
# 1068 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 1069 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1070 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1071 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1072 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1073 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1074 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_11
# 1078 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 1079 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 1080 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 1081 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 1082 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_16
	goto EventScript_Shop_Marie_BabyPokemon2Egg_4

EventScript_Shop_Marie_BabyPokemon2Egg_8:
# 1088 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon2Egg_7

EventScript_Shop_Marie_BabyPokemon2Egg_11:
# 1075 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_14:
# 1091 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 1092 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon2Egg_13

EventScript_Shop_Marie_BabyPokemon2Egg_16:
# 1083 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_20:
# 1101 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_21:
# 1103 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_TOGEPI
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_22:
# 1105 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_23:
# 1107 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_RIOLU
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18


EventScript_Shop_Lelouch::
# 1119 "data/scripts/battle_labyrinth.pory"
	lock
# 1120 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1121 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 1127 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 1132 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 1146 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 1147 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 1148 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1149 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 1151 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 1153 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 1155 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 1158 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 1159 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 1122 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 1123 "data/scripts/battle_labyrinth.pory"
	delay 16
# 1124 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 1125 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 1128 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 1129 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 1133 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 1144 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 1150 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 1152 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 1154 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 1156 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 1171 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 1172 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 1176 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 1177 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 1178 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 1181 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 1182 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1183 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1184 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 1198 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1357 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1358 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 1173 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 1179 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 1178 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 1178 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 1185 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 1186 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 1199 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 1200 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 1187 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 1188 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1189 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 1194 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 1201 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1202 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1203 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 1206 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1207 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 1210 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 1211 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 1212 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 1213 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 1214 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1215 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1216 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 1219 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 1222 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 1225 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 1228 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 1230 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 1231 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 1234 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 1235 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1236 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1237 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 1240 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 1243 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 1246 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 1249 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 1251 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 1252 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 1255 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 1256 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1257 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1258 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 1261 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 1264 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 1267 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 1270 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 1272 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 1273 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 1276 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 1277 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1278 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1279 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 1282 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 1285 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1288 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1291 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1293 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1294 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1297 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1298 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1299 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1300 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1303 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1306 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1309 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1312 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1314 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1315 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1318 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1319 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1320 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1321 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1324 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1327 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1330 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1333 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1335 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1336 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1339 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1343 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1344 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1347 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1348 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1349 "data/scripts/battle_labyrinth.pory"
	waitse
# 1350 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1351 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1352 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 1190 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 1191 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1192 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 1204 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 1208 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 1217 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 1218 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 1220 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 1221 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 1223 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 1224 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 1226 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 1227 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 1229 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 1238 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 1239 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 1241 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 1242 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 1244 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 1245 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 1247 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 1248 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 1250 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 1259 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 1260 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 1262 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 1263 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 1265 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 1266 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 1268 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 1269 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 1271 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 1280 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 1281 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 1283 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 1284 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1286 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1287 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1289 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1290 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1292 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1301 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1302 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1304 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1305 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1307 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1308 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1310 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1311 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1313 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1322 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1323 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1325 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1326 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1328 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1329 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1331 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1332 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1334 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1340 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1405 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1406 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1410 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_0, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Marie_MainMenu_Text_3
# 1411 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1412 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1414 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1416 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1417 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1407 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1413 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1415 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1423 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1424 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1428 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1429 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1430 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1431 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1434 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1435 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1439 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1443 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1444 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1445 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1446 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1449 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1450 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1436 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1440 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1457 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1458 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1462 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1459 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1467 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1468 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1504 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1505 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1506 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1507 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_8
# 1510 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_9
# 1513 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_10
# 1516 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_11
# 1519 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_12
# 1522 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_13
# 1525 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_14
# 1528 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_15
# 1531 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_16
# 1534 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_17
# 1612 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1613 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1616 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1617 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1618 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1621 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1622 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1623 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1626 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1627 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1469 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 1
# 1470 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 2
# 1471 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 3
# 1472 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 4
# 1473 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 5
# 1474 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 6
# 1475 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 7
# 1476 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 8
# 1477 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 9
# 1478 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 10
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1508 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1509 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1511 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1512 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1514 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1515 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1517 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1518 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1520 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1521 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1523 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1524 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1526 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1527 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1529 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1530 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1532 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1535 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1536 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1634 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1635 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1639 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1640 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1641 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1642 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1645 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1646 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1649 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1650 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1651 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1652 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1653 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1654 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1655 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1661 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1667 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1673 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1679 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1685 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1691 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1697 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1703 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1709 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1715 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1721 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1727 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1733 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1739 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1745 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1751 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1757 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1763 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1769 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1775 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1781 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1784 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1785 "data/scripts/battle_labyrinth.pory"
	waitse
# 1786 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1787 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1788 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1789 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1636 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1647 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1656 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1657 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1658 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1662 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1663 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1664 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1668 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1669 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1670 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1674 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1675 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1676 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1680 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1681 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1682 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1686 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1687 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1688 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1692 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1693 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1694 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1698 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1699 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1700 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1704 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1705 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1706 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1710 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1711 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1712 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1716 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1717 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1718 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1722 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1723 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1724 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1728 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1729 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1730 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1734 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1735 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1736 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1740 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1741 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1742 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1746 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1747 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1748 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1752 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1753 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1754 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1758 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1759 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1760 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1764 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1765 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1766 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1770 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1771 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1772 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1776 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1777 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1778 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_75
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_34:
	return

EventScript_Shop_Lelouch_Other_35:
	return

EventScript_Shop_Lelouch_Other_37:
	return

EventScript_Shop_Lelouch_Other_39:
	return

EventScript_Shop_Lelouch_Other_41:
	return

EventScript_Shop_Lelouch_Other_43:
	return

EventScript_Shop_Lelouch_Other_45:
	return

EventScript_Shop_Lelouch_Other_47:
	return

EventScript_Shop_Lelouch_Other_49:
	return

EventScript_Shop_Lelouch_Other_51:
	return

EventScript_Shop_Lelouch_Other_53:
	return

EventScript_Shop_Lelouch_Other_55:
	return

EventScript_Shop_Lelouch_Other_57:
	return

EventScript_Shop_Lelouch_Other_59:
	return

EventScript_Shop_Lelouch_Other_61:
	return

EventScript_Shop_Lelouch_Other_63:
	return

EventScript_Shop_Lelouch_Other_65:
	return

EventScript_Shop_Lelouch_Other_67:
	return

EventScript_Shop_Lelouch_Other_69:
	return

EventScript_Shop_Lelouch_Other_71:
	return

EventScript_Shop_Lelouch_Other_73:
	return

EventScript_Shop_Lelouch_Other_75:
	return


EventScript_Shop_Joy::
# 1800 "data/scripts/battle_labyrinth.pory"
	lock
# 1801 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1802 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1806 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_5
# 1809 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_DEFAULT
EventScript_Shop_Joy_4:
# 1811 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1812 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3, MSGBOX_YESNO
# 1813 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_9
# 1817 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_12
# 1835 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1836 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_18
# 1840 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1841 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1842 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_7
# 1843 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1844 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1845 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1846 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1847 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1848 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_8, MSGBOX_DEFAULT
# 1849 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_8:
# 1853 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_9
# 1854 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1803 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1804 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1807 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_9:
# 1814 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1815 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_12:
# 1818 "data/scripts/battle_labyrinth.pory"
	checkmoney 2000, 0
# 1819 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_15
# 1823 "data/scripts/battle_labyrinth.pory"
	removemoney 2000, 0
# 1824 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1825 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1826 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1827 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1828 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1829 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1830 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1831 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6, MSGBOX_DEFAULT
# 1832 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_15:
# 1820 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1821 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_18:
# 1837 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1838 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8


EventScript_Shop_Alexander::
# 1859 "data/scripts/battle_labyrinth.pory"
	lock
# 1860 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1861 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1865 "data/scripts/battle_labyrinth.pory"
	lock
# 1866 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1867 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1871 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1871 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1872 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1873 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1874 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1875 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1876 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1877 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1880 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1882 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1878 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1890 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1891 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1892 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1893 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1896 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1898 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1894 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1902 "data/scripts/battle_labyrinth.pory"
	lock
# 1903 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1904 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1909 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1910 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1911 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1912 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Max_6
# 1914 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1916 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Max_8
# 1918 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_9
# 1920 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_10
EventScript_Max_4:
# 1923 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3, MSGBOX_AUTOCLOSE
# 1924 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1905 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1906 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1907 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1913 "data/scripts/battle_labyrinth.pory"
	pokemart Zone2A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1915 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1917 "data/scripts/battle_labyrinth.pory"
	pokemart Zone7A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1919 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_10:
# 1921 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1927 "data/scripts/battle_labyrinth.pory"
Zone2A_Shop_TMShop:
# 1928 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

	.align 2
# 1931 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1932 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_TRAILBLAZE
# 1933 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_FLAME_CHARGE
# 1934 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 1935 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

	.align 2
# 1938 "data/scripts/battle_labyrinth.pory"
Zone7A_Shop_TMShop:
# 1939 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM09
# 1940 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM10
# 1941 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM11
# 1942 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM12
	.2byte ITEM_NONE

	.align 2
# 1945 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1946 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM17
# 1947 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM18
# 1948 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

	.align 2
# 1951 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1952 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1953 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1954 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1958 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1959 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0, MSGBOX_AUTOCLOSE
# 1960 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1961 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1968 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1975 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1982 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1983 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1984 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1985 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_LeavingSetup_12
# 1987 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_LeavingSetup_13
# 1989 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_LeavingSetup_14
# 1991 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_LeavingSetup_15
# 1993 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_LeavingSetup_16
# 1995 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_LeavingSetup_17
# 1997 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_LeavingSetup_18
# 1999 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_LeavingSetup_19
# 2001 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_LeavingSetup_20
# 2003 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_LeavingSetup_21
# 2005 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_LeavingSetup_22
# 2007 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_LeavingSetup_23
# 2009 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_LeavingSetup_24
# 2011 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_LeavingSetup_25
# 2013 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_LeavingSetup_26
# 2015 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_LeavingSetup_27
# 2017 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_LeavingSetup_28
# 2019 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_LeavingSetup_29
# 2021 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_LeavingSetup_30
# 2023 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_LeavingSetup_31
# 2025 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_LeavingSetup_32
# 2027 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_LeavingSetup_33
EventScript_LeavingSetup_10:
	return

EventScript_LeavingSetup_2:
# 1962 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1963 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1964 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1965 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1966 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1969 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1970 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1971 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1972 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1973 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1976 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1977 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1978 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1979 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1980 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7

EventScript_LeavingSetup_12:
# 1986 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_13:
# 1988 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_14:
# 1990 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_15:
# 1992 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_16:
# 1994 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_17:
# 1996 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_18:
# 1998 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_19:
# 2000 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_20:
# 2002 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_21:
# 2004 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 24
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_22:
# 2006 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 26
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_23:
# 2008 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 30
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_24:
# 2010 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 32
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_25:
# 2012 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 33
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_26:
# 2014 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 34
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_27:
# 2016 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 37
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_28:
# 2018 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 39
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_29:
# 2020 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 41
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_30:
# 2022 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 43
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_31:
# 2024 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 45
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_32:
# 2026 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 48
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_33:
# 2028 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 49
	goto EventScript_LeavingSetup_10


EventScript_WhenUReady::
# 2034 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 2037 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 2040 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 2043 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 2047 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 2048 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 2049 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 2035 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 2036 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 2038 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 2039 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 2041 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 2042 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 2044 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 2045 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 2054 "data/scripts/battle_labyrinth.pory"
	lockall
# 2055 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 2056 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 2057 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 2058 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 2063 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2064 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 2065 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 2067 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 2059 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2060 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 2061 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 2071 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 2072 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 2110 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 2111 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 2112 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 2114 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 2117 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 2119 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 2122 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 2124 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 2127 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 2129 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 2132 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_24
# 2135 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 2137 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 2140 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 2142 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 2143 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 2143 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 2146 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 2148 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 2148 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 2151 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 2153 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 2153 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 2156 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 2158 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 2158 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 2161 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 2163 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 2163 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 2166 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 2168 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 2168 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 2171 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 2173 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 2173 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
# 2176 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 2178 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 2178 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 2181 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 2183 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 2183 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 2186 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 2188 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 2188 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 2191 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 2193 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 2194 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2195 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2196 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 2225 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 2261 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 2290 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2354 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2383 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2402 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2404 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2429 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2454 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2479 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2504 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2529 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2558 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2583 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2608 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2633 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2659 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2660 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 2113 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 2115 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 2118 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 2120 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 2123 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 2125 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 2128 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 2130 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 2133 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 2138 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 2144 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 2149 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 2154 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 2159 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 2164 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 2169 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 2174 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 2179 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 2184 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 2189 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 2197 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 2198 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 2210 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 2213 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 2214 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 2226 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 2227 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 2237 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 2250 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 2251 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 2262 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 2263 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 2279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 2280 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 2291 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 2292 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2339 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2342 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2343 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2355 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2356 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_122
# 2370 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2371 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2372 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2384 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2385 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_YESNO
# 2395 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2403 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2405 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2406 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2406 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2420 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2421 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_YESNO
# 2422 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2430 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2431 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2431 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2445 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2446 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_YESNO
# 2447 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2455 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2456 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2456 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2470 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2471 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_YESNO
# 2472 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2480 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2481 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2481 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2495 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2496 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_YESNO
# 2497 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2505 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2506 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2506 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2520 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2521 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_YESNO
# 2522 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2530 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2531 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2531 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2545 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2546 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2555 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2559 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2560 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2560 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2574 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2575 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_YESNO
# 2576 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2584 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2585 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2585 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2599 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2600 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_YESNO
# 2601 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2609 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2610 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2610 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2624 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2625 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_YESNO
# 2626 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2634 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2635 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2635 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2649 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2650 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_YESNO
# 2651 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2661 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2664 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2199 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 2200 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2228 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 2230 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 2233 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 2234 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 2264 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 2267 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 2268 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 2293 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 2327 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2328 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2357 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2358 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2359 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2386 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2387 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2407 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2408 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2417 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2432 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2433 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2442 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2457 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2458 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2467 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2482 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2483 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2492 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2507 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2508 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2517 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2532 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2533 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2542 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2561 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2562 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2571 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2586 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2587 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2596 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2611 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2612 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2621 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2636 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2637 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2646 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 2201 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 2202 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 2211 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 2238 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 2239 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 2229 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 2231 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 2265 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 2281 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 2282 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 2294 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 2295 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 2296 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2340 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2360 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2361 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2362 "data/scripts/battle_labyrinth.pory"
	waitse
# 2363 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_INFO
# 2364 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2373 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2374 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2375 "data/scripts/battle_labyrinth.pory"
	waitse
# 2376 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_INFO
# 2377 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2388 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2389 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2390 "data/scripts/battle_labyrinth.pory"
	waitse
# 2391 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2396 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2397 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2398 "data/scripts/battle_labyrinth.pory"
	waitse
# 2399 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2409 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2410 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2423 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2424 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2425 "data/scripts/battle_labyrinth.pory"
	waitse
# 2426 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2434 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2435 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2448 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2449 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2450 "data/scripts/battle_labyrinth.pory"
	waitse
# 2451 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2459 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2460 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2473 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2474 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2475 "data/scripts/battle_labyrinth.pory"
	waitse
# 2476 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2484 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2485 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2498 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2499 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2500 "data/scripts/battle_labyrinth.pory"
	waitse
# 2501 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2509 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2510 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2523 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2524 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2525 "data/scripts/battle_labyrinth.pory"
	waitse
# 2526 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2534 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2535 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2547 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_YESNO
# 2548 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2563 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2564 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2577 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2578 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2579 "data/scripts/battle_labyrinth.pory"
	waitse
# 2580 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2588 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2589 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2602 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2603 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2604 "data/scripts/battle_labyrinth.pory"
	waitse
# 2605 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2613 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2614 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2627 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2628 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2629 "data/scripts/battle_labyrinth.pory"
	waitse
# 2630 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2638 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2639 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2652 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2653 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
# 2654 "data/scripts/battle_labyrinth.pory"
	waitse
# 2655 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2203 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2204 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 2205 "data/scripts/battle_labyrinth.pory"
	waitse
# 2206 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2215 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 2216 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_268:
# 2240 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 2241 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_270:
# 2252 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 2253 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_272:
# 2269 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 2270 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2283 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2284 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 2285 "data/scripts/battle_labyrinth.pory"
	waitse
# 2286 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 2297 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2298 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2299 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2300 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2301 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2302 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2303 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2304 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2305 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2306 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2307 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2308 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2309 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2310 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2311 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2312 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2313 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2314 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2315 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2316 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2317 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2318 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2319 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2320 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2321 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2322 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2323 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2324 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 2329 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 2330 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2344 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2345 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_282:
# 2365 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DEXNAV_GET
# 2366 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 2378 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 2379 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_286:
# 2411 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2412 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2413 "data/scripts/battle_labyrinth.pory"
	waitse
# 2414 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_288:
# 2436 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2437 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2438 "data/scripts/battle_labyrinth.pory"
	waitse
# 2439 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2461 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2462 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2463 "data/scripts/battle_labyrinth.pory"
	waitse
# 2464 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2486 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2487 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2488 "data/scripts/battle_labyrinth.pory"
	waitse
# 2489 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2511 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2512 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2513 "data/scripts/battle_labyrinth.pory"
	waitse
# 2514 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2536 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2537 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2538 "data/scripts/battle_labyrinth.pory"
	waitse
# 2539 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2549 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2550 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2551 "data/scripts/battle_labyrinth.pory"
	waitse
# 2552 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2565 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2566 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2567 "data/scripts/battle_labyrinth.pory"
	waitse
# 2568 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2590 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2591 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2592 "data/scripts/battle_labyrinth.pory"
	waitse
# 2593 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2615 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2616 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2617 "data/scripts/battle_labyrinth.pory"
	waitse
# 2618 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2640 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2641 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2642 "data/scripts/battle_labyrinth.pory"
	waitse
# 2643 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2217 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 2219 "data/scripts/battle_labyrinth.pory"
	waitse
# 2220 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2242 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 2244 "data/scripts/battle_labyrinth.pory"
	waitse
# 2245 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 2246 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2254 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2255 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 2256 "data/scripts/battle_labyrinth.pory"
	waitse
# 2257 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2271 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2272 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 2273 "data/scripts/battle_labyrinth.pory"
	waitse
# 2274 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2331 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2332 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2333 "data/scripts/battle_labyrinth.pory"
	waitse
# 2334 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_318:
# 2346 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2347 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2348 "data/scripts/battle_labyrinth.pory"
	waitse
# 2349 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2672 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2673 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2674 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_20
# 2675 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2676 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2718 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2760 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2802 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2803 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2677 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2678 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2719 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2720 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2761 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2762 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2679 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2680 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2683 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2686 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2689 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2692 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2695 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2699 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2700 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2701 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2703 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2705 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2707 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2709 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2711 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2714 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2721 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2722 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2725 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2728 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2731 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2734 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2737 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2741 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2742 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2743 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2745 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2747 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2749 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2751 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2753 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2756 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2763 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2764 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2767 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2770 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2773 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2776 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2779 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2783 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2784 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2785 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2787 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2789 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2791 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2793 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2795 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2798 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2681 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2682 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2684 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2685 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2687 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2688 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2690 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2691 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2693 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2694 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2697 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2723 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2724 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2726 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2727 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2729 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2730 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2732 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2733 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2735 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2736 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2739 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2765 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2766 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2768 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2769 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2771 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2772 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2774 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2775 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2777 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2778 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2781 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2702 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2704 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2706 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2708 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2710 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2713 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2715 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2744 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2746 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2748 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2750 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2752 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2755 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2757 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2786 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2788 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2790 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2792 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2794 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2797 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2799 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_SignsQuestGirl::
# 2810 "data/scripts/battle_labyrinth.pory"
	lock
# 2811 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2812 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SIGNS
# 2813 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SignsQuestGirl_2
EventScript_SignsQuestGirl_1:
# 2817 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_1
# 2818 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SignsQuestGirl_2:
# 2814 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_0
# 2815 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SIGNS
	goto EventScript_SignsQuestGirl_1


EventScript_WarpZone0::
# 2823 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2824 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2825 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2826 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2827 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2828 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2829 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 3082 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 3083 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3084 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 3085 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 3086 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 3094 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 3095 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3096 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 3097 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 3105 "data/scripts/battle_labyrinth.pory"
	lock
# 3106 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 3107 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 3110 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 3111 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 3112 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 3182 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 3108 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 3113 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3114 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 3115 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 3116 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 3117 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 3120 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 3123 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 3127 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 3130 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 3133 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 3137 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 3141 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 3144 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 3148 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 3151 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 3156 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 3159 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 3162 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 3165 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 3168 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 3172 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 3173 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 3174 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 3175 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 3176 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 3177 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 3118 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3119 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 3121 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3122 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 3124 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 3125 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3126 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 3128 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3129 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 3131 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3132 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 3134 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 3135 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3136 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 3138 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 3139 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3140 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 3142 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 3143 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 3145 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 3146 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 3147 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 3149 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 3150 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 3152 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 3153 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 3154 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 3155 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 3157 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 3158 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 3160 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 3161 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 3163 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 3164 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 3166 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 3167 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 3169 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 3170 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 3171 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 3178 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3179 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 3186 "data/scripts/battle_labyrinth.pory"

# 3187 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 3188 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 3189 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 3193 "data/scripts/battle_labyrinth.pory"
	lockall
# 3194 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 3195 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 3200 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 3201 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 3203 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 3204 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 3205 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 3206 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 3207 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 3208 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3209 "data/scripts/battle_labyrinth.pory"
	waitse
# 3210 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 3211 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 3213 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 3289 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 3196 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3197 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 3212 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 3214 "data/scripts/battle_labyrinth.pory"
	random 70
# 3215 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3216 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 3217 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 3218 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 3219 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 3220 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 3221 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 3222 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 3223 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 3224 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 3225 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 3226 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 3227 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 3228 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 3229 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 3230 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 3231 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 3232 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 3233 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 3234 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 3235 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 3238 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 3239 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 3240 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 3245 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 3246 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 3247 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 3252 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 3253 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 3254 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 3259 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 3260 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 3261 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 3266 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 3267 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 3268 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 3273 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 3274 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 3275 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 3276 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 3277 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 3282 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 3213 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 3236 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3237 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 3241 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 3248 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 3255 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 3262 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 3269 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 3278 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 3283 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 3242 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3243 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 3249 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3250 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 3256 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3257 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 3263 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3264 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 3270 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3271 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 3279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3280 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 3284 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3285 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_HandleFlashlight::
	checkitem ITEM_FLASHLIGHT
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 3297 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 3295 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


Debug_CheatStart_PBL::
# 3304 "data/scripts/battle_labyrinth.pory"
	random 5
# 3305 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3306 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_3
# 3308 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_4
# 3310 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_5
# 3312 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_6
# 3314 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_7
Debug_CheatStart_PBL_1:
# 3317 "data/scripts/battle_labyrinth.pory"
	random 5
# 3318 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3319 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_10
# 3321 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_11
# 3323 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_12
# 3325 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_13
# 3327 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_14
Debug_CheatStart_PBL_8:
# 3330 "data/scripts/battle_labyrinth.pory"
	random 5
# 3331 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3332 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_17
# 3334 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_18
# 3336 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_19
# 3338 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_20
# 3340 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_21
Debug_CheatStart_PBL_15:
# 3343 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RARE_CANDY, 900
# 3344 "data/scripts/battle_labyrinth.pory"
	removemoney 2000
# 3345 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 6
# 3346 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3347 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3348 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
# 3349 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 3350 "data/scripts/battle_labyrinth.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 3352 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WAILMER_PAIL
# 3353 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 2
# 3354 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SIGNS
# 3355 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3356 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3357 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3358 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3359 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3360 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3361 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3362 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3363 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3365 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
# 3366 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_0, MSGBOX_YESNO
# 3367 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_23
Debug_CheatStart_PBL_22:
# 3370 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 3371 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3373 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_1
# 3374 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3375 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3376 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_27
# 3378 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_28
# 3381 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_29
Debug_CheatStart_PBL_25:
# 3389 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3391 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_4
# 3392 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_5, Debug_CheatStart_PBL_Text_6
# 3393 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3394 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_32
# 3408 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_33
# 3422 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_34
Debug_CheatStart_PBL_30:
# 3437 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3438 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3439 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 3440 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 3442 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_CLAW
# 3443 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EXP_SHARE
# 3444 "data/scripts/battle_labyrinth.pory"
	additem ITEM_INFINITE_REPEL
# 3445 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3446 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3447 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3449 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_7
# 3450 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_8, Debug_CheatStart_PBL_Text_9, Debug_CheatStart_PBL_Text_10
# 3451 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3452 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_37
# 3454 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_38
# 3456 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_39
# 3458 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_40
Debug_CheatStart_PBL_35:
# 3466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3467 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3469 "data/scripts/battle_labyrinth.pory"
	random 10
# 3470 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3471 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_61
# 3473 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_62
# 3475 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_63
# 3477 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_64
# 3479 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_65
# 3481 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_66
# 3483 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_67
# 3485 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_68
# 3487 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_69
# 3489 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_70
Debug_CheatStart_PBL_59:
# 3492 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 6
# 3493 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3494 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
# 3495 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 3497 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILK_SCARF
# 3498 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BUG_BITE
# 3499 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 5
# 3500 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHERI_BERRY, 2
# 3501 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHESTO_BERRY, 2
# 3502 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RAWST_BERRY, 2
# 3503 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ASPEAR_BERRY, 2
# 3504 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PECHA_BERRY, 2
# 3505 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 3506 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_SEARCH
# 3507 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3508 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3509 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3510 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3511 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3513 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_11
# 3514 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3515 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3516 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_73
# 3518 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_74
# 3521 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_75
Debug_CheatStart_PBL_71:
# 3529 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 7
# 3530 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3531 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 3533 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GOOD_ROD
# 3534 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3536 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_12
# 3537 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17
# 3538 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3539 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_78
# 3541 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_79
# 3543 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_80
# 3545 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_81
# 3547 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_82
# 3549 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_83
Debug_CheatStart_PBL_76:
# 3557 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 9
# 3558 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3559 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 3561 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SQUAWKABILLY
# 3562 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 3563 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3564 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE4A_RECEIVED_SQUAWKABILLY
# 3566 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILVER_POWDER
# 3567 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MUSCLE_BAND
# 3568 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WISE_GLASSES
# 3569 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TWISTED_SPOON
# 3570 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_BARB
# 3571 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SNARL
# 3572 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 3573 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BURN_HEAL, 2
# 3574 "data/scripts/battle_labyrinth.pory"
	additem ITEM_AWAKENING, 2
# 3575 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3576 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3577 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3578 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3579 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3581 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_18
# 3582 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_19, Debug_CheatStart_PBL_Text_20
# 3583 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3584 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_86
# 3586 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_87
# 3588 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_88
Debug_CheatStart_PBL_84:
# 3596 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 11
# 3597 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3599 "data/scripts/battle_labyrinth.pory"
	random 5
# 3600 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3601 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_91
# 3603 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_92
# 3605 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_93
# 3607 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_94
# 3609 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_95
Debug_CheatStart_PBL_89:
# 3612 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 3613 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3614 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
# 3615 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 3617 "data/scripts/battle_labyrinth.pory"
	additem ITEM_LAX_MINT
# 3618 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_BALL
# 3619 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MIRACLE_SEED
# 3620 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NORMAL_GEM
# 3621 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BUG_GEM
# 3622 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
# 3623 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GENTLE_MINT
# 3624 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVIOLITE
# 3625 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RED_SHARD, 5
# 3627 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_21
# 3628 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3629 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3630 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_98
# 3632 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_99
# 3635 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_100
Debug_CheatStart_PBL_96:
# 3643 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 13
# 3644 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3645 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 3647 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEST_BALL
# 3648 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NET_BALL
# 3649 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_DRAINING_KISS
# 3650 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
# 3651 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FLYING_GEM
# 3652 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
# 3653 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SLEDGEHAMMER
# 3654 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 1
# 3655 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3657 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_22
# 3658 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3659 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3660 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_103
# 3662 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_104
# 3665 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_105
Debug_CheatStart_PBL_101:
# 3673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 15
# 3674 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3676 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_23
# 3677 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15
# 3678 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3679 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_108
# 3681 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_109
# 3683 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_110
Debug_CheatStart_PBL_106:
# 3686 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 16
# 3687 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3688 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 3689 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 3691 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SHARP_BEAK
# 3692 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ROCK_GEM
# 3693 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIGHTING_GEM
# 3694 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
# 3695 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SERIOUS_MINT
# 3696 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_BELT
# 3697 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SITRUS_BERRY, 5
# 3698 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAGNET
# 3699 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HARD_STONE
# 3700 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DUSK_BALL
# 3701 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_HEAL
# 3702 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_THIEF
# 3703 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_ROCK_TOMB
# 3704 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3705 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3706 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GREAT_BALL
# 3707 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 5
# 3708 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 3709 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MACHETE
# 3710 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_HIDDEN_POWER
# 3711 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3712 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3714 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_24
# 3715 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3716 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3717 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_113
# 3719 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_114
# 3722 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_115
Debug_CheatStart_PBL_111:
# 3730 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 18
# 3731 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3732 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 3734 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BIG_ROOT
# 3735 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_PLUCK
# 3736 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MYSTIC_WATER
# 3737 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHARCOAL
# 3738 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_RETALIATE
# 3739 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3740 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3742 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 10
# 3743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
# 3744 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 3745 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3746 "data/scripts/battle_labyrinth.pory"
	closemessage
	return

Debug_CheatStart_PBL_3:
# 3307 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_4:
# 3309 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_5:
# 3311 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_6:
# 3313 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_7:
# 3315 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_10:
# 3320 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_11:
# 3322 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_12:
# 3324 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_13:
# 3326 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_14:
# 3328 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_17:
# 3333 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_18:
# 3335 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_19:
# 3337 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_20:
# 3339 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_21:
# 3341 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_23:
# 3368 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_22

Debug_CheatStart_PBL_27:
# 3377 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_28:
# 3379 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 3380 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_29:
# 3382 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3383 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 1
# 3384 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
# 3385 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0SANCTUARY, 255, 38, 11
# 3386 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_32:
# 3395 "data/scripts/battle_labyrinth.pory"
	random 5
# 3396 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3397 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_42
# 3399 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_43
# 3401 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_44
# 3403 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_45
# 3405 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_46
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_33:
# 3409 "data/scripts/battle_labyrinth.pory"
	random 5
# 3410 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3411 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_48
# 3413 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_49
# 3415 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_50
# 3417 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_51
# 3419 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_52
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_34:
# 3423 "data/scripts/battle_labyrinth.pory"
	random 5
# 3424 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3425 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_54
# 3427 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_55
# 3429 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_56
# 3431 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_57
# 3433 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_58
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_37:
# 3453 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_38:
# 3455 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_39:
# 3457 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_40:
# 3459 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3460 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 2
# 3461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
# 3462 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3463 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_42:
# 3398 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_43:
# 3400 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_HOPPIP
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_44:
# 3402 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_45:
# 3404 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SMOLIV
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_46:
# 3406 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BOUNSWEET
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_48:
# 3412 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSEAR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_49:
# 3414 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SLUGMA
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_50:
# 3416 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SALANDIT
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_51:
# 3418 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_52:
# 3420 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SIZZLIPEDE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_54:
# 3426 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANPOUR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_55:
# 3428 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BARBOACH
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_56:
# 3430 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_FINNEON
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_57:
# 3432 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEEL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_58:
# 3434 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOLDEEN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_61:
# 3472 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_62:
# 3474 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_63:
# 3476 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_64:
# 3478 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VENIPEDE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_65:
# 3480 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_NINCADA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_66:
# 3482 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_67:
# 3484 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_68:
# 3486 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_TAROUNTULA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_69:
# 3488 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_KRICKETOT
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_70:
# 3490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PARAS
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_73:
# 3517 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_74:
# 3519 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 3520 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_75:
# 3522 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3523 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 3
# 3524 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
# 3525 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3526 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_78:
# 3540 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 6
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_79:
# 3542 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_80:
# 3544 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_81:
# 3546 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_82:
# 3548 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_83:
# 3550 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3551 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 4
# 3552 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3553 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3554 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_86:
# 3585 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_87:
# 3587 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_88:
# 3589 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3590 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 5
# 3591 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3592 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3593 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_91:
# 3602 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PACHIRISU
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_92:
# 3604 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_DEDENNE
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_93:
# 3606 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MORPEKO
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_94:
# 3608 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PLUSLE
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_95:
# 3610 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MINUN
	goto Debug_CheatStart_PBL_89

Debug_CheatStart_PBL_98:
# 3631 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_99:
# 3633 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 3634 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_96

Debug_CheatStart_PBL_100:
# 3636 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3637 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 6
# 3638 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
# 3639 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3640 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_103:
# 3661 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_104:
# 3663 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 3664 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_101

Debug_CheatStart_PBL_105:
# 3666 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3667 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 7
# 3668 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
# 3669 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3670 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_108:
# 3680 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_109:
# 3682 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_110:
# 3684 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_113:
# 3718 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_114:
# 3720 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
# 3721 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_115:
# 3723 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3724 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 9
# 3725 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
# 3726 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3727 "data/scripts/battle_labyrinth.pory"
	waitstate
	end


Debug_CheatStart_PBL_GenerateMon::
# 3750 "data/scripts/battle_labyrinth.pory"
	callnative DebugCheatStartGenerateMon
# 3751 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
	return


Debug_CheatStart_PBL_GiveMon::
# 3755 "data/scripts/battle_labyrinth.pory"
	givemon VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE
# 3756 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 3757 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_GiveMon_Text_0
	return


EventScript_RecoverySign_Text_0:
# 137 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_MedicineSign_Text_0:
# 143 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 149 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 155 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 161 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 167 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 173 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

EventScript_ConsumablesSign_Text_0:
# 178 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Items\nA Fine Collection!$"

EventScript_Shop_Portentia_Text_0:
# 190 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hello, lovely. Your name is…\n"
	.string "{PLAYER}?\p"
	.string "I see! Well then, {PLAYER}, would you\n"
	.string "care to try some of my special brews?\p"
	.string "Ahem! I realize I should introduce\n"
	.string "myself.\p"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: I am Portentia, and I craft\n"
	.string "the finest medicines for your Pokémon.\p"
	.string "My skills are unparalleled and my prices\n"
	.string "can't be beat.$"

EventScript_Shop_Portentia_Text_1:
# 194 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 197 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 228 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 262 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 265 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 297 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 332 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wowza! Yeetastic! Blamo!\p"
	.string "My name is Varrick,\n"
	.string "entrepreneur extraordinaire!\p"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: I pitched this idea a couple\n"
	.string "year's back, and now it's become a\l"
	.string "reality!\p"
	.string "All the items you can or can't find in\n"
	.string "the world, you'll find here!\p"
	.string "Fantastic evolution stones!\p"
	.string "Powerful held items!\p"
	.string "Trinkets and bobs!\p"
	.string "Witness the finest item collection\n"
	.string "you've ever seen!\p"
	.string "Please, enjoy my shop!$"

EventScript_Shop_Varrick_Text_1:
# 344 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 383 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 716 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 721 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 752 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 785 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi. My name is Marie, and welcome to\n"
	.string "my shop.\p"
	.string "You're probably wondering what this\n"
	.string "shop is even for.\p"
	.string "Let me explain: lots of trainers leave\n"
	.string "extra eggs at the Daycare.\p"
	.string "Some trainers mix up which egg has\n"
	.string "which species of Pokémon.\p"
	.string "It's my job to help match these eggs\n"
	.string "with the right trainer.\p"
	.string "Maybe you'll be able to make your next\n"
	.string "friend here!$"

EventScript_Shop_Marie_Text_1:
# 794 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 799 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 801 "data/scripts/battle_labyrinth.pory"
	.string "Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 801 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 801 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 806 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 810 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any Eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 813 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which type of Egg would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 816 "data/scripts/battle_labyrinth.pory"
	.string "Elemental Monkey - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 819 "data/scripts/battle_labyrinth.pory"
	.string "Regional Form - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 822 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 1 - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 825 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 2 - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_11:
# 828 "data/scripts/battle_labyrinth.pory"
	.string "Kanto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_12:
# 829 "data/scripts/battle_labyrinth.pory"
	.string "Johto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_13:
# 830 "data/scripts/battle_labyrinth.pory"
	.string "Hoenn Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_14:
# 831 "data/scripts/battle_labyrinth.pory"
	.string "Sinnoh Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_15:
# 832 "data/scripts/battle_labyrinth.pory"
	.string "Unova Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_16:
# 833 "data/scripts/battle_labyrinth.pory"
	.string "Kalos Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_17:
# 834 "data/scripts/battle_labyrinth.pory"
	.string "Alola Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_18:
# 835 "data/scripts/battle_labyrinth.pory"
	.string "Galar Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_19:
# 836 "data/scripts/battle_labyrinth.pory"
	.string "Paldea Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_20:
# 838 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_21:
# 843 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Pansage, Pansear,\n"
	.string "or Panpour will cost ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_22:
# 851 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Alolan Meowth,\n"
	.string "Galarian Zigzagoon, Hisuian Voltorb, or\l"
	.string "Paldean Wooper will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_23:
# 859 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Smoochum, Elekid,\n"
	.string "or Magby will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_24:
# 867 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Happiny, Togepi,\n"
	.string "Munchlax, or Riolu will cost ¥10000.$"

EventScript_Shop_Marie_MainMenu_Text_25:
# 878 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here at Marie's Egg Delivery\n"
	.string "Service, we pair trainers with mixed up\l"
	.string "Pokémon Eggs.\p"
	.string "Each set of eggs contains a limited\n"
	.string "number of possible species of Pokémon.\p"
	.string "You'll know the possibilities of what\n"
	.string "the egg will hatch into, but you won't\l"
	.string "know what Pokémon you have until it\l"
	.string "hatches.$"

EventScript_Shop_Marie_MainMenu_Text_26:
# 880 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0:
# 889 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1:
# 895 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2:
# 908 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3:
# 923 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4:
# 936 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5:
# 938 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 1122 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 1124 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 1128 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 1133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I sense…\n"
	.string "The aura of Shards.\p"
	.string "There are four types of Shards:\n"
	.string "Red, Blue, Yellow, and Green,\l"
	.string "ranked by least to most rare.\p"
	.string "Each can be exchanged for a certain\n"
	.string "type of service I provide.\p"
	.string "Pokémon training costs Red Shards.\p"
	.string "Move Relearning and Move Tutoring cost\n"
	.string "Blue Shards.\p"
	.string "Pokémon improvements such as Nature,\n"
	.string "Ability, and IV changing cost Yellow\l"
	.string "Shards.\p"
	.string "Other services cost Green Shards.\p"
	.string "I hope they serve you well…$"

EventScript_Shop_Lelouch_Text_4:
# 1146 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 1147 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 1147 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 1147 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 1147 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 1158 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 1176 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 1177 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 1179 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 1208 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 1214 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1410 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1410 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1423 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1428 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1436 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1440 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1443 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1462 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1467 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1469 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1470 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1471 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1472 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1473 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1474 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1475 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1476 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1477 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1478 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1617 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1621 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1639 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1647 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1652 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1653 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1657 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1663 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1675 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1681 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1687 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1693 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1699 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1705 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1711 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1723 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1729 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1735 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1741 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1747 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1753 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1759 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1765 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1771 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1777 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1804 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Center of\n"
	.string "Restoration, is my own!$"

EventScript_Shop_Joy_Text_1:
# 1807 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party and PC for a\n"
	.string "flat ¥2000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1809 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party for a flat\n"
	.string "¥1000 fee.$"

EventScript_Shop_Joy_Text_3:
# 1812 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_4:
# 1820 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_5:
# 1825 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥2000, thank you…$"

EventScript_Shop_Joy_Text_6:
# 1831 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: All of your Pokémon have been\n"
	.string "restored.$"

EventScript_Shop_Joy_Text_7:
# 1842 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_8:
# 1848 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_9:
# 1853 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1875 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1905 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1906 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1909 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1923 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1959 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 2057 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 2071 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 2110 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 2113 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 2115 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 2118 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 2120 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 2123 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 2125 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 2128 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 2130 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 2133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info$"

EventScript_Settings_Text_10:
# 2135 "data/scripts/battle_labyrinth.pory"
	.string "Full Info$"

EventScript_Settings_Text_11:
# 2138 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 2140 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 2142 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 2144 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 2146 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 2149 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 2151 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 2154 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 2156 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 2159 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 2161 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 2166 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 2169 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 2171 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 2174 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 2176 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

EventScript_Settings_Text_28:
# 2179 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 2181 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 2184 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 2186 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 2191 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 2199 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 2201 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 2204 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 2213 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 2215 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 2218 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 2229 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 2231 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 2234 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 2238 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 2240 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 2243 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 2250 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 2252 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 2255 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 2265 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 2267 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 2269 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 2272 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 2279 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 2281 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 2284 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 2294 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 2295 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 2324 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 2327 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 2329 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 2332 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2342 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2344 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2347 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2355 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting enables you to\n"
	.string "see more information that is not visible\l"
	.string "otherwise, such as full info about\l"
	.string "enemy Pokémon through the {COLOR RED}Surveil{COLOR DARK_GRAY}\l"
	.string "option in battle, or the {COLOR RED}DexNav{COLOR DARK_GRAY} to see\l"
	.string "potential encounterable Pokémon.$"

EventScript_Settings_Text_66:
# 2357 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_67:
# 2358 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_68:
# 2361 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_69:
# 2370 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_70:
# 2371 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_71:
# 2374 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_72:
# 2384 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_73:
# 2386 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_74:
# 2389 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_75:
# 2394 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_76:
# 2397 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_77:
# 2405 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_78:
# 2407 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_79:
# 2409 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_80:
# 2412 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_81:
# 2420 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_82:
# 2421 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_83:
# 2424 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_84:
# 2430 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_85:
# 2432 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_86:
# 2434 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_87:
# 2437 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_88:
# 2445 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_89:
# 2446 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_90:
# 2449 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_91:
# 2455 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_92:
# 2457 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_93:
# 2459 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_94:
# 2462 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_95:
# 2470 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_96:
# 2471 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_97:
# 2474 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_98:
# 2480 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_99:
# 2482 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_100:
# 2484 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_101:
# 2487 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_102:
# 2495 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_103:
# 2496 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_104:
# 2499 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_105:
# 2505 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_106:
# 2507 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_107:
# 2509 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_108:
# 2512 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_109:
# 2520 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_110:
# 2521 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_111:
# 2524 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_112:
# 2530 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_113:
# 2532 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_114:
# 2534 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_115:
# 2537 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_116:
# 2545 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_117:
# 2547 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_118:
# 2550 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_119:
# 2559 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_120:
# 2561 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_121:
# 2563 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_122:
# 2566 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_123:
# 2574 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_124:
# 2575 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_125:
# 2578 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_126:
# 2584 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_127:
# 2586 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_128:
# 2588 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_129:
# 2591 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_130:
# 2599 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_131:
# 2600 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_132:
# 2603 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_133:
# 2609 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_134:
# 2611 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_135:
# 2613 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_136:
# 2616 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_137:
# 2624 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_138:
# 2625 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_139:
# 2628 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_140:
# 2634 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_141:
# 2636 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_142:
# 2638 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_143:
# 2641 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_144:
# 2649 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_145:
# 2650 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_146:
# 2653 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2673 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2674 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2674 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2674 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2682 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2685 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2688 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2691 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2694 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2697 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2699 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2713 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2724 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2727 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2730 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2733 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2736 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2739 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2755 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2766 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2769 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2772 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2775 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2778 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2781 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2797 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_SignsQuestGirl_Text_0:
# 2814 "data/scripts/battle_labyrinth.pory"
	.string "Hiya! I'm improving on my reading skills!\p"
	.string "You should work on your reading skills\n"
	.string "too!\p"
	.string "If you read all the signs in the Pokémon\n"
	.string "Battle Labyrinth, I'll give you a nice\l"
	.string "reward!$"

EventScript_SignsQuestGirl_Text_1:
# 2817 "data/scripts/battle_labyrinth.pory"
	.string "Signs have lots of useful info about\n"
	.string "unique mechanics to the Pokémon Battle\l"
	.string "Labyrinth!\p"
	.string "You can improve your reading skills\n"
	.string "while learning more about the\l"
	.string "challenges at hand!$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 3083 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 3111 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

EventScript_ShakeTree_Text_0:
# 3194 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 3200 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 3236 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

Debug_CheatStart_PBL_Text_0:
# 3366 "data/scripts/battle_labyrinth.pory"
	.string "Zone 0 grass?$"

Debug_CheatStart_PBL_Text_1:
# 3373 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 options$"

Debug_CheatStart_PBL_Text_2:
# 3374 "data/scripts/battle_labyrinth.pory"
	.string "Grass$"

Debug_CheatStart_PBL_Text_3:
# 3374 "data/scripts/battle_labyrinth.pory"
	.string "Tree$"

Debug_CheatStart_PBL_Text_4:
# 3391 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 gwf$"

Debug_CheatStart_PBL_Text_5:
# 3392 "data/scripts/battle_labyrinth.pory"
	.string "Fire$"

Debug_CheatStart_PBL_Text_6:
# 3392 "data/scripts/battle_labyrinth.pory"
	.string "Water$"

Debug_CheatStart_PBL_Text_7:
# 3449 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2 options$"

Debug_CheatStart_PBL_Text_8:
# 3450 "data/scripts/battle_labyrinth.pory"
	.string "Grass A$"

Debug_CheatStart_PBL_Text_9:
# 3450 "data/scripts/battle_labyrinth.pory"
	.string "Tunnel$"

Debug_CheatStart_PBL_Text_10:
# 3450 "data/scripts/battle_labyrinth.pory"
	.string "Grass B$"

Debug_CheatStart_PBL_Text_11:
# 3513 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3 options$"

Debug_CheatStart_PBL_Text_12:
# 3536 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4 options$"

Debug_CheatStart_PBL_Text_13:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "A$"

Debug_CheatStart_PBL_Text_14:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "B$"

Debug_CheatStart_PBL_Text_15:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "C$"

Debug_CheatStart_PBL_Text_16:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "D$"

Debug_CheatStart_PBL_Text_17:
# 3537 "data/scripts/battle_labyrinth.pory"
	.string "E$"

Debug_CheatStart_PBL_Text_18:
# 3581 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5 options$"

Debug_CheatStart_PBL_Text_19:
# 3582 "data/scripts/battle_labyrinth.pory"
	.string "Forest$"

Debug_CheatStart_PBL_Text_20:
# 3582 "data/scripts/battle_labyrinth.pory"
	.string "Grassland$"

Debug_CheatStart_PBL_Text_21:
# 3627 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6 options$"

Debug_CheatStart_PBL_Text_22:
# 3657 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 options$"

Debug_CheatStart_PBL_Text_23:
# 3676 "data/scripts/battle_labyrinth.pory"
	.string "Zone 8 options$"

Debug_CheatStart_PBL_Text_24:
# 3714 "data/scripts/battle_labyrinth.pory"
	.string "Zone 9 options$"

Debug_CheatStart_PBL_GiveMon_Text_0:
# 3757 "data/scripts/battle_labyrinth.pory"
	.string "Obtained {STR_VAR_1}!$"

gText_Lelouch_NotEnoughColor::
# 1162 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 1166 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1364 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1368 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1372 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1376 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1380 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1384 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1388 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1392 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1396 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1400 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1795 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 2075 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode enables all of the\n"
	.string "increased difficulty modes at the same\l"
	.string "time.\p"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode can only be enabled at the\n"
	.string "beginning of the game, but can be\l"
	.string "disabled at any point.\p"
	.string "It is not recommended to play on {COLOR RED}Brutal{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "{COLOR RED}Pokémon Battle Labyrinth{COLOR DARK_GRAY} already.$"

gText_Colress_RandomizerExplanation::
# 2081 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 2087 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode completely implements all\n"
	.string "standard Nuzlocke rules, such as\l"
	.string "permanent death and capture\l"
	.string "restrictions.\p"
	.string "It comes with Species Clause, Shiny\n"
	.string "Clause, and Gift Clause.\p"
	.string "It is not recommended to play {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode unless you are familiar with\l"
	.string "Nuzlockes already.\p"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode can only be enabled at\n"
	.string "the beginning of the game, but can be\l"
	.string "disabled at any point.$"

gText_Colress_InfiniteExplained::
# 2094 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 2100 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 2104 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2833 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 3073 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 3077 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
