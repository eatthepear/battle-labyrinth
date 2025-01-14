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


EventScript_ConsumablesSign::
# 136 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ConsumablesSign_Text_0, MSGBOX_SIGN
	end


	.align 2
# 140 "data/scripts/battle_labyrinth.pory"
Shop_Filler:
# 141 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

EventScript_Shop_Portentia::
# 145 "data/scripts/battle_labyrinth.pory"
	lock
# 146 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 147 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_INTRO, EventScript_Shop_Portentia_2
EventScript_Shop_Portentia_1:
# 151 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_Shop_Portentia_6
EventScript_Shop_Portentia_4:
# 155 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Portentia_Text_2
# 156 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 157 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 158 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Portentia_11
# 159 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Portentia_11
# 160 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Portentia_11
# 162 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Portentia_12
# 163 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Portentia_12
# 164 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Portentia_12
# 166 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Portentia_13
# 167 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Portentia_13
# 168 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Portentia_13
# 170 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Portentia_14
# 171 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Portentia_14
# 172 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Portentia_14
# 173 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Portentia_14
# 174 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Portentia_14
# 175 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Portentia_14
# 176 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Portentia_14
# 177 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Portentia_14
# 178 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Portentia_14
# 179 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Portentia_14
# 180 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Portentia_14
# 181 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Portentia_14
# 182 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Portentia_14
# 183 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Portentia_14
EventScript_Shop_Portentia_9:
# 186 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_3, MSGBOX_DEFAULT
# 187 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Portentia_2:
# 148 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_0, MSGBOX_DEFAULT
# 149 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_INTRO
	goto EventScript_Shop_Portentia_1

EventScript_Shop_Portentia_5:
# 152 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Portentia_Text_1, MSGBOX_DEFAULT
# 153 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_PORTENTIA_SUPER_POTION_INTRO
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_6:
# 151 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_PORTENTIA_SUPER_POTION_INTRO, EventScript_Shop_Portentia_5
	goto EventScript_Shop_Portentia_4

EventScript_Shop_Portentia_11:
# 161 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_1
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_12:
# 165 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_2
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_13:
# 169 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Medicine_3
	goto EventScript_Shop_Portentia_9

EventScript_Shop_Portentia_14:
# 184 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Portentia_9


	.align 2
# 190 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_1:
# 191 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 192 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 193 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 196 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_2:
# 197 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 198 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 199 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 200 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 201 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 202 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

	.align 2
# 205 "data/scripts/battle_labyrinth.pory"
Shop_Medicine_3:
# 206 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POTION
# 207 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SUPER_POTION
# 208 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REVIVE
# 209 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ANTIDOTE
# 210 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PARALYZE_HEAL
# 211 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_AWAKENING
# 212 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BURN_HEAL
# 213 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

EventScript_Shop_Tim::
# 217 "data/scripts/battle_labyrinth.pory"
	lock
# 218 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 219 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_TIM_INTRO, EventScript_Shop_Tim_2
EventScript_Shop_Tim_1:
# 223 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Tim_Text_1
# 224 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 225 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 226 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Tim_6
# 227 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Tim_6
# 228 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Tim_6
# 230 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Tim_7
# 231 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Tim_7
# 233 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Tim_8
# 234 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Tim_8
# 236 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Tim_9
# 237 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Tim_9
# 239 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Tim_10
# 240 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Tim_10
# 241 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Tim_10
# 242 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Tim_10
# 243 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Tim_10
# 244 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Tim_10
# 245 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Tim_10
# 246 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Tim_10
# 247 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Tim_10
# 248 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Tim_10
# 249 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Tim_10
# 250 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Tim_10
# 251 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Tim_10
# 252 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Tim_10
EventScript_Shop_Tim_4:
# 255 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_2, MSGBOX_DEFAULT
# 256 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Tim_2:
# 220 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Tim_Text_0, MSGBOX_DEFAULT
# 221 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TIM_INTRO
	goto EventScript_Shop_Tim_1

EventScript_Shop_Tim_6:
# 229 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_1
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_7:
# 232 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_2
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_8:
# 235 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_3
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_9:
# 238 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Pokeballs_4
	goto EventScript_Shop_Tim_4

EventScript_Shop_Tim_10:
# 253 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Tim_4


	.align 2
# 259 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_1:
# 260 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE

	.align 2
# 263 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_2:
# 264 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 265 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 268 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_3:
# 269 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 270 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 271 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 272 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 273 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

	.align 2
# 276 "data/scripts/battle_labyrinth.pory"
Shop_Pokeballs_4:
# 277 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POKE_BALL
# 278 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GREAT_BALL
# 279 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 280 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 281 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 282 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 283 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

EventScript_Shop_Varrick::
# 287 "data/scripts/battle_labyrinth.pory"
	lock
# 288 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 289 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_VARRICK_INTRO, EventScript_Shop_Varrick_2
EventScript_Shop_Varrick_1:
# 302 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Varrick_Text_1
# 303 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 304 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 305 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Varrick_6
# 306 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Varrick_6
# 307 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Varrick_6
# 309 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Varrick_7
# 310 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Varrick_7
# 311 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Varrick_7
# 313 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Varrick_8
# 314 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Varrick_8
# 315 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Varrick_8
# 317 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Varrick_9
# 318 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Varrick_9
# 319 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Varrick_9
# 320 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Varrick_9
# 322 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Varrick_10
# 323 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Varrick_10
# 324 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Varrick_10
# 325 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Varrick_10
# 327 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Varrick_11
# 328 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Varrick_11
# 329 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Varrick_11
# 331 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Varrick_12
# 332 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Varrick_12
# 334 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Varrick_13
EventScript_Shop_Varrick_4:
# 341 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_2, MSGBOX_DEFAULT
# 342 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Varrick_2:
# 290 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Varrick_Text_0, MSGBOX_DEFAULT
# 300 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_VARRICK_INTRO
	goto EventScript_Shop_Varrick_1

EventScript_Shop_Varrick_6:
# 308 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_1
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_7:
# 312 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_2
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_8:
# 316 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Items_3
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_9:
# 321 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_11to15
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_10:
# 326 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_16to20
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_11:
# 330 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_21to23
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_12:
# 333 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_24to25
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_13:
# 335 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Shop_Varrick_14
# 335 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Varrick_14
# 338 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30
	goto EventScript_Shop_Varrick_4

EventScript_Shop_Varrick_14:
# 336 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Unique_Varrick_26to30_Brutal
	goto EventScript_Shop_Varrick_4


	.align 2
# 345 "data/scripts/battle_labyrinth.pory"
Shop_Items_1:
# 346 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 349 "data/scripts/battle_labyrinth.pory"
Shop_Items_2:
# 350 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 351 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 352 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 355 "data/scripts/battle_labyrinth.pory"
Shop_Items_3:
# 356 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 357 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 358 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 359 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 360 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 361 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 362 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 363 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 366 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_4to5:
# 367 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 368 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 369 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 370 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 371 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 372 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 373 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 374 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NONE

	.align 2
# 377 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_6to8:
# 378 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 379 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 380 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 381 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 382 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 383 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 384 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 385 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 386 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 387 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 388 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 389 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_NONE

	.align 2
# 392 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_9to10:
# 393 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 394 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 395 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 396 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 397 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 398 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 399 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 400 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 401 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAL_BALL
# 402 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NET_BALL
# 403 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEST_BALL
# 404 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DIVE_BALL
# 405 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_REPEAT_BALL
# 406 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 407 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 408 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 409 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 410 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 411 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 412 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 413 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 414 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 415 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 416 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 417 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 418 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 419 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 420 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 421 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 422 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 423 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 424 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 425 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 426 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 429 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_11to15:
# 430 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 431 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 432 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 433 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 434 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 435 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 436 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 437 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 438 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 439 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 440 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 441 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 442 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 443 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 444 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 445 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 446 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 447 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 448 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 449 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

	.align 2
# 452 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_16to20:
# 453 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 454 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 455 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 456 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 457 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 458 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 459 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 460 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 461 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 462 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 463 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 464 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 465 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 466 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 467 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 468 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 469 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 470 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 471 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 472 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 473 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 474 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 475 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 476 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 477 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCKY_HELMET
# 478 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 479 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 480 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE

	.align 2
# 483 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_21to23:
# 484 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 485 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 486 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 487 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 488 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 489 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 490 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 491 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 492 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 493 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 494 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 495 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 496 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 497 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 498 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 499 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 500 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 501 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 502 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 503 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 504 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 505 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 506 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 507 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 508 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 509 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 510 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 511 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 512 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 513 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 514 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
# 515 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LIGHT_BALL
# 516 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LEEK
# 517 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_THICK_CLUB
# 518 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
# 521 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_24to25:
# 522 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 523 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 524 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 525 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 526 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 527 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 528 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 529 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 530 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 531 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 532 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 533 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 534 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 535 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 536 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 537 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 538 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 539 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 540 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 541 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 542 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 543 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 544 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 545 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 546 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 547 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 548 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 549 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 550 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 551 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 552 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 555 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30:
# 556 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 557 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MACHO_BRACE
# 558 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_WEIGHT
# 559 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BRACER
# 560 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BELT
# 561 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_LENS
# 562 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_BAND
# 563 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POWER_ANKLET
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
	.2byte ITEM_NORMAL_GEM
# 573 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 574 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 575 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 576 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 577 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 578 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 579 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 580 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 581 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 582 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 583 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 584 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 585 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 586 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 587 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 588 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 589 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 590 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 591 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 592 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 593 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 594 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 595 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 596 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 597 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 598 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 599 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 600 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 601 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 602 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 603 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 604 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 605 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 606 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 607 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 608 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 609 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 610 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 611 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 612 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 613 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

	.align 2
# 616 "data/scripts/battle_labyrinth.pory"
Shop_Unique_Varrick_26to30_Brutal:
# 617 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EXP_SHARE
# 618 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 619 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 620 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 621 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 622 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 623 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 624 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 625 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
# 626 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NORMAL_GEM
# 627 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIRE_GEM
# 628 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WATER_GEM
# 629 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ELECTRIC_GEM
# 630 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GRASS_GEM
# 631 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ICE_GEM
# 632 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FIGHTING_GEM
# 633 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_GEM
# 634 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GROUND_GEM
# 635 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FLYING_GEM
# 636 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PSYCHIC_GEM
# 637 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BUG_GEM
# 638 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ROCK_GEM
# 639 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_GHOST_GEM
# 640 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_GEM
# 641 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DARK_GEM
# 642 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_STEEL_GEM
# 643 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_FAIRY_GEM
# 644 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_EVIOLITE
# 645 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MUSCLE_BAND
# 646 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WISE_GLASSES
# 647 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SCOPE_LENS
# 648 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_WIDE_LENS
# 649 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ZOOM_LENS
# 650 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METRONOME
# 651 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MIRACLE_SEED
# 652 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHARCOAL
# 653 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MYSTIC_WATER
# 654 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILK_SCARF
# 655 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SHARP_BEAK
# 656 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_MAGNET
# 657 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SILVER_POWDER
# 658 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_POISON_BARB
# 659 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TWISTED_SPOON
# 660 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SOFT_SAND
# 661 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_HARD_STONE
# 662 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_GLASSES
# 663 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_BLACK_BELT
# 664 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SPELL_TAG
# 665 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_DRAGON_FANG
# 666 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 667 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_METAL_COAT
	.2byte ITEM_NONE

EventScript_Shop_Julia::
# 671 "data/scripts/battle_labyrinth.pory"
	lock
# 672 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 673 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JULIA_INTRO, EventScript_Shop_Julia_2
EventScript_Shop_Julia_1:
# 679 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Julia_Text_1
# 680 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 681 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 682 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Julia_6
# 683 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Julia_6
# 684 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Julia_6
# 686 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Julia_7
# 687 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Julia_7
# 688 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Julia_7
# 689 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Julia_7
# 691 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Julia_8
# 692 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Julia_8
# 694 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Julia_9
# 695 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Julia_9
# 696 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Julia_9
# 697 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Julia_9
# 698 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Julia_9
# 699 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Julia_9
# 700 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Julia_9
# 701 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Julia_9
# 702 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_Shop_Julia_9
# 703 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_Shop_Julia_9
# 704 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_Shop_Julia_9
# 705 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_Shop_Julia_9
# 706 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_Shop_Julia_9
# 707 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_Shop_Julia_9
EventScript_Shop_Julia_4:
# 710 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_2, MSGBOX_DEFAULT
# 711 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Julia_2:
# 674 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Julia_Text_0, MSGBOX_DEFAULT
# 677 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JULIA_INTRO
	goto EventScript_Shop_Julia_1

EventScript_Shop_Julia_6:
# 685 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_1
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_7:
# 690 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_2
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_8:
# 693 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Berries_3
	goto EventScript_Shop_Julia_4

EventScript_Shop_Julia_9:
# 708 "data/scripts/battle_labyrinth.pory"
	pokemart Shop_Filler
	goto EventScript_Shop_Julia_4


	.align 2
# 714 "data/scripts/battle_labyrinth.pory"
Shop_Berries_1:
# 715 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 718 "data/scripts/battle_labyrinth.pory"
Shop_Berries_2:
# 719 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 720 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 721 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 722 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 723 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 724 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 725 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 728 "data/scripts/battle_labyrinth.pory"
Shop_Berries_3:
# 729 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ORAN_BERRY
# 730 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_SITRUS_BERRY
# 731 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHERI_BERRY
# 732 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_CHESTO_BERRY
# 733 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PECHA_BERRY
# 734 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_RAWST_BERRY
# 735 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_ASPEAR_BERRY
# 736 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

EventScript_Shop_Marie::
# 740 "data/scripts/battle_labyrinth.pory"
	lock
# 741 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 742 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MARIE_INTRO, EventScript_Shop_Marie_2
EventScript_Shop_Marie_1:
# 751 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
# 752 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_1
# 753 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Marie_2:
# 743 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_Text_0, MSGBOX_DEFAULT
# 749 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_INTRO
	goto EventScript_Shop_Marie_1


EventScript_Shop_Marie_MainMenu::
# 757 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_0
# 758 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 759 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Marie_MainMenu_Text_1, EventScript_Shop_Marie_MainMenu_Text_2, EventScript_Shop_Marie_MainMenu_Text_3
# 760 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 761 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_2
# 835 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_3
	return

EventScript_Shop_Marie_MainMenu_2:
# 762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_6
EventScript_Shop_Marie_MainMenu_4:
# 767 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_le EventScript_Shop_Marie_MainMenu_13
# 771 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_MainMenu_Text_6
# 772 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 773 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 5
	goto_if_gt EventScript_Shop_Marie_MainMenu_16
EventScript_Shop_Marie_MainMenu_15:
# 776 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_19
EventScript_Shop_Marie_MainMenu_18:
# 779 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Marie_MainMenu_22
EventScript_Shop_Marie_MainMenu_21:
# 782 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Marie_MainMenu_25
EventScript_Shop_Marie_MainMenu_24:
# 785 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 30
	goto_if_gt EventScript_Shop_Marie_MainMenu_28
EventScript_Shop_Marie_MainMenu_27:
# 796 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_20, 13
# 797 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 798 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 799 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_MainMenu_31
# 807 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_MainMenu_32
# 815 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_MainMenu_33
# 823 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_MainMenu_34
# 831 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Marie_MainMenu_35
# 832 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Marie_MainMenu_35
	return

EventScript_Shop_Marie_MainMenu_3:
# 836 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_25, MSGBOX_DEFAULT
# 837 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_MainMenu_10
EventScript_Shop_Marie_MainMenu_9:
# 840 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_5:
# 764 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_4
	return

EventScript_Shop_Marie_MainMenu_6:
# 762 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_MARIE_NUZLOCKE_RECEIVED, EventScript_Shop_Marie_MainMenu_5
	goto EventScript_Shop_Marie_MainMenu_4

EventScript_Shop_Marie_MainMenu_10:
# 838 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_26, MSGBOX_DEFAULT
	goto EventScript_Shop_Marie_MainMenu_9

EventScript_Shop_Marie_MainMenu_13:
# 768 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_5, MSGBOX_DEFAULT
	return

EventScript_Shop_Marie_MainMenu_16:
# 774 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_7, 0
	goto EventScript_Shop_Marie_MainMenu_15

EventScript_Shop_Marie_MainMenu_19:
# 777 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_8, 1
	goto EventScript_Shop_Marie_MainMenu_18

EventScript_Shop_Marie_MainMenu_22:
# 780 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_9, 2
	goto EventScript_Shop_Marie_MainMenu_21

EventScript_Shop_Marie_MainMenu_25:
# 783 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_10, 3
	goto EventScript_Shop_Marie_MainMenu_24

EventScript_Shop_Marie_MainMenu_28:
# 786 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_11, 4
# 787 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_12, 5
# 788 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_13, 6
# 789 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_14, 7
# 790 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_15, 8
# 791 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_16, 9
# 792 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_17, 10
# 793 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_18, 11
# 794 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_19, 12
	goto EventScript_Shop_Marie_MainMenu_27

EventScript_Shop_Marie_MainMenu_31:
# 800 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 801 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_21, MSGBOX_YESNO
# 802 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_37
EventScript_Shop_Marie_MainMenu_36:
# 805 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_32:
# 808 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 809 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_22, MSGBOX_YESNO
# 810 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_40
EventScript_Shop_Marie_MainMenu_39:
# 813 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_33:
# 816 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 817 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_23, MSGBOX_YESNO
# 818 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_43
EventScript_Shop_Marie_MainMenu_42:
# 821 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_34:
# 824 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0
# 825 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_MainMenu_Text_24, MSGBOX_YESNO
# 826 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Marie_MainMenu_46
EventScript_Shop_Marie_MainMenu_45:
# 829 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_MainMenu_35:
# 833 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_MainMenu
	return

EventScript_Shop_Marie_MainMenu_37:
# 803 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_ElementalMonkeyEgg
	goto EventScript_Shop_Marie_MainMenu_36

EventScript_Shop_Marie_MainMenu_40:
# 811 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_RegionalFormEgg
	goto EventScript_Shop_Marie_MainMenu_39

EventScript_Shop_Marie_MainMenu_43:
# 819 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon1Egg
	goto EventScript_Shop_Marie_MainMenu_42

EventScript_Shop_Marie_MainMenu_46:
# 827 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Marie_BabyPokemon2Egg
	goto EventScript_Shop_Marie_MainMenu_45


EventScript_Shop_Marie_ElementalMonkeyEgg::
# 845 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 846 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_2
# 851 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 852 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_5
EventScript_Shop_Marie_ElementalMonkeyEgg_4:
# 872 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_ElementalMonkeyEgg_8
EventScript_Shop_Marie_ElementalMonkeyEgg_7:
# 875 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_14
EventScript_Shop_Marie_ElementalMonkeyEgg_13:
# 879 "data/scripts/battle_labyrinth.pory"
	removemoney 1000
# 880 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 881 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 882 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 883 "data/scripts/battle_labyrinth.pory"
	random 3
# 884 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 885 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_ElementalMonkeyEgg_20
# 887 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_ElementalMonkeyEgg_21
# 889 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_ElementalMonkeyEgg_22
EventScript_Shop_Marie_ElementalMonkeyEgg_18:
# 892 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 893 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 894 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 895 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 896 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 897 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 898 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_2:
# 847 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 848 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_5:
# 853 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 854 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 855 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 856 "data/scripts/battle_labyrinth.pory"
	waitstate
# 857 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 858 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 859 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_11
# 863 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 864 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 865 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 866 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 867 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_ElementalMonkeyEgg_16
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_4

EventScript_Shop_Marie_ElementalMonkeyEgg_8:
# 873 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_7

EventScript_Shop_Marie_ElementalMonkeyEgg_11:
# 860 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_14:
# 876 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 877 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_13

EventScript_Shop_Marie_ElementalMonkeyEgg_16:
# 868 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_ElementalMonkeyEgg_20:
# 886 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSAGE
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_21:
# 888 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANSEAR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18

EventScript_Shop_Marie_ElementalMonkeyEgg_22:
# 890 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_PANPOUR
	goto EventScript_Shop_Marie_ElementalMonkeyEgg_18


EventScript_Shop_Marie_RegionalFormEgg::
# 902 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 903 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_2
# 908 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 909 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_5
EventScript_Shop_Marie_RegionalFormEgg_4:
# 929 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_RegionalFormEgg_8
EventScript_Shop_Marie_RegionalFormEgg_7:
# 932 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_14
EventScript_Shop_Marie_RegionalFormEgg_13:
# 936 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 937 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 938 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 939 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 940 "data/scripts/battle_labyrinth.pory"
	random 4
# 941 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 942 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_RegionalFormEgg_20
# 944 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_RegionalFormEgg_21
# 946 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_RegionalFormEgg_22
# 948 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_RegionalFormEgg_23
EventScript_Shop_Marie_RegionalFormEgg_18:
# 951 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 952 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 953 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 954 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 955 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 956 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 957 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_RegionalFormEgg_2:
# 904 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 905 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_5:
# 910 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 911 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 912 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 913 "data/scripts/battle_labyrinth.pory"
	waitstate
# 914 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 915 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 916 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_11
# 920 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 921 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 922 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 923 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 924 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_RegionalFormEgg_16
	goto EventScript_Shop_Marie_RegionalFormEgg_4

EventScript_Shop_Marie_RegionalFormEgg_8:
# 930 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_RegionalFormEgg_7

EventScript_Shop_Marie_RegionalFormEgg_11:
# 917 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_14:
# 933 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 934 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_RegionalFormEgg_13

EventScript_Shop_Marie_RegionalFormEgg_16:
# 925 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_RegionalFormEgg_20:
# 943 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MEOWTH_ALOLA
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_21:
# 945 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ZIGZAGOON_GALAR
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_22:
# 947 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_VOLTORB_HISUI
	goto EventScript_Shop_Marie_RegionalFormEgg_18

EventScript_Shop_Marie_RegionalFormEgg_23:
# 949 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_WOOPER_PALDEA
	goto EventScript_Shop_Marie_RegionalFormEgg_18


EventScript_Shop_Marie_BabyPokemon1Egg::
# 961 "data/scripts/battle_labyrinth.pory"
	checkmoney 3000, 0
# 962 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_2
# 967 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 968 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_5
EventScript_Shop_Marie_BabyPokemon1Egg_4:
# 988 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon1Egg_8
EventScript_Shop_Marie_BabyPokemon1Egg_7:
# 991 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_14
EventScript_Shop_Marie_BabyPokemon1Egg_13:
# 995 "data/scripts/battle_labyrinth.pory"
	removemoney 3000
# 996 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 997 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 998 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 999 "data/scripts/battle_labyrinth.pory"
	random 3
# 1000 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1001 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon1Egg_20
# 1003 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon1Egg_21
# 1005 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon1Egg_22
EventScript_Shop_Marie_BabyPokemon1Egg_18:
# 1008 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 1009 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 1010 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 1011 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1012 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 1013 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1014 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon1Egg_2:
# 963 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 964 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_5:
# 969 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 970 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 971 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 972 "data/scripts/battle_labyrinth.pory"
	waitstate
# 973 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 974 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 975 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_11
# 979 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 980 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 981 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 982 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 983 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon1Egg_16
	goto EventScript_Shop_Marie_BabyPokemon1Egg_4

EventScript_Shop_Marie_BabyPokemon1Egg_8:
# 989 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon1Egg_7

EventScript_Shop_Marie_BabyPokemon1Egg_11:
# 976 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_14:
# 992 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 993 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon1Egg_13

EventScript_Shop_Marie_BabyPokemon1Egg_16:
# 984 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon1Egg_20:
# 1002 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_SMOOCHUM
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_21:
# 1004 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_ELEKID
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18

EventScript_Shop_Marie_BabyPokemon1Egg_22:
# 1006 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MAGBY
	goto EventScript_Shop_Marie_BabyPokemon1Egg_18


EventScript_Shop_Marie_BabyPokemon2Egg::
# 1018 "data/scripts/battle_labyrinth.pory"
	checkmoney 10000, 0
# 1019 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_2
# 1024 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_2, CalculatePlayerPartyCount
# 1025 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_5
EventScript_Shop_Marie_BabyPokemon2Egg_4:
# 1045 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Shop_Marie_BabyPokemon2Egg_8
EventScript_Shop_Marie_BabyPokemon2Egg_7:
# 1048 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_2, PARTY_SIZE
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_14
EventScript_Shop_Marie_BabyPokemon2Egg_13:
# 1052 "data/scripts/battle_labyrinth.pory"
	removemoney 10000
# 1053 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1054 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3, MSGBOX_DEFAULT
# 1055 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1056 "data/scripts/battle_labyrinth.pory"
	random 4
# 1057 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1058 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Marie_BabyPokemon2Egg_20
# 1060 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Marie_BabyPokemon2Egg_21
# 1062 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Marie_BabyPokemon2Egg_22
# 1064 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Marie_BabyPokemon2Egg_23
EventScript_Shop_Marie_BabyPokemon2Egg_18:
# 1067 "data/scripts/battle_labyrinth.pory"
	giveegg VAR_TEMP_1
# 1068 "data/scripts/battle_labyrinth.pory"
	setmonmetlocation VAR_TEMP_2, 244
# 1069 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4, MSGBOX_DEFAULT
# 1070 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1071 "data/scripts/battle_labyrinth.pory"
	message EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5
# 1072 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1073 "data/scripts/battle_labyrinth.pory"
	waitfanfare
	return

EventScript_Shop_Marie_BabyPokemon2Egg_2:
# 1020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0
# 1021 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_5:
# 1026 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1, MSGBOX_AUTOCLOSE
# 1027 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 1028 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1029 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1030 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1031 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1032 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_11
# 1036 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_3, ScriptGetPartyMonSpecies
# 1037 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 2, VAR_TEMP_3
# 1038 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_3, VAR_0x8004
# 1039 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2, MSGBOX_YESNO
# 1040 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Marie_BabyPokemon2Egg_16
	goto EventScript_Shop_Marie_BabyPokemon2Egg_4

EventScript_Shop_Marie_BabyPokemon2Egg_8:
# 1046 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MARIE_NUZLOCKE_RECEIVED
	goto EventScript_Shop_Marie_BabyPokemon2Egg_7

EventScript_Shop_Marie_BabyPokemon2Egg_11:
# 1033 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_14:
# 1049 "data/scripts/battle_labyrinth.pory"
	special SendChosenMonToPC
# 1050 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_2, 5
	goto EventScript_Shop_Marie_BabyPokemon2Egg_13

EventScript_Shop_Marie_BabyPokemon2Egg_16:
# 1041 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	return

EventScript_Shop_Marie_BabyPokemon2Egg_20:
# 1059 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_HAPPINY
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_21:
# 1061 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_TOGEPI
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_22:
# 1063 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18

EventScript_Shop_Marie_BabyPokemon2Egg_23:
# 1065 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, SPECIES_RIOLU
	goto EventScript_Shop_Marie_BabyPokemon2Egg_18


EventScript_Shop_Lelouch::
# 1077 "data/scripts/battle_labyrinth.pory"
	lock
# 1078 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1079 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_INTRO, EventScript_Shop_Lelouch_2
EventScript_Shop_Lelouch_1:
# 1085 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 6
	goto_if_lt EventScript_Shop_Lelouch_5
# 1090 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_LELOUCH_SHARDS_INTRO, EventScript_Shop_Lelouch_8
EventScript_Shop_Lelouch_7:
# 1104 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_4, MSGBOX_DEFAULT
# 1105 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Text_5, EventScript_Shop_Lelouch_Text_6, EventScript_Shop_Lelouch_Text_7, EventScript_Shop_Lelouch_Text_8, EventScript_Shop_Marie_MainMenu_Text_3
# 1106 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1107 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_12
# 1109 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_13
# 1111 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_14
# 1113 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_15
EventScript_Shop_Lelouch_10:
# 1116 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_9
# 1117 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Shop_Lelouch_2:
# 1080 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_0
# 1081 "data/scripts/battle_labyrinth.pory"
	delay 16
# 1082 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_1, MSGBOX_DEFAULT
# 1083 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_INTRO
	goto EventScript_Shop_Lelouch_1

EventScript_Shop_Lelouch_5:
# 1086 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_2
# 1087 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Lelouch_8:
# 1091 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Text_3, MSGBOX_DEFAULT
# 1102 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_LELOUCH_SHARDS_INTRO
	goto EventScript_Shop_Lelouch_7

EventScript_Shop_Lelouch_12:
# 1108 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Training
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_13:
# 1110 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Moves
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_14:
# 1112 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Improvement
	goto EventScript_Shop_Lelouch_10

EventScript_Shop_Lelouch_15:
# 1114 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_Other
	goto EventScript_Shop_Lelouch_10


EventScript_Shop_Lelouch_Training::
# 1129 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_RED_SHARD, 1
# 1130 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Training_2
# 1134 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_0, MSGBOX_DEFAULT
# 1135 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_1, 0
# 1136 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Shop_Lelouch_Training_6
EventScript_Shop_Lelouch_Training_4:
# 1139 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 2
# 1140 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1141 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1142 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_13
# 1156 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_14
# 1315 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_15
# 1316 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_15
EventScript_Shop_Lelouch_Training_11:
	return

EventScript_Shop_Lelouch_Training_2:
# 1131 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Training_5:
# 1137 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_Training_Text_2, 1
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_6:
# 1136 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_EFFORTLESS, EventScript_Shop_Lelouch_Training_8
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_8:
# 1136 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 25
	goto_if_gt EventScript_Shop_Lelouch_Training_5
	goto EventScript_Shop_Lelouch_Training_4

EventScript_Shop_Lelouch_Training_13:
# 1143 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_Exp, MSGBOX_YESNO
# 1144 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_16
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_14:
# 1157 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_EV, MSGBOX_YESNO
# 1158 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Shop_Lelouch_Training_18
	goto EventScript_Shop_Lelouch_Training_11

EventScript_Shop_Lelouch_Training_15:
	return

EventScript_Shop_Lelouch_Training_16:
# 1145 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMonForTraining
# 1146 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1147 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 1
	goto_if_eq EventScript_Shop_Lelouch_Training_21
# 1152 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain
EventScript_Shop_Lelouch_Training_20:
	return

EventScript_Shop_Lelouch_Training_18:
# 1159 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1160 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1161 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Training_25
# 1164 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1165 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Training_28
# 1168 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_F, 0
# 1169 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_0, ScriptGetPartyMonSpecies
# 1170 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 1171 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseHPEV, MSGBOX_DEFAULT
# 1172 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1173 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1174 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_33
# 1177 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_34
# 1180 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_35
# 1183 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_36
# 1186 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_37
# 1188 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_38
# 1189 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_38
EventScript_Shop_Lelouch_Training_31:
# 1192 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseAttackEV, MSGBOX_DEFAULT
# 1193 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1194 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1195 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_41
# 1198 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_42
# 1201 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_43
# 1204 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_44
# 1207 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_45
# 1209 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_46
# 1210 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_46
EventScript_Shop_Lelouch_Training_39:
# 1213 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseDefenseEV, MSGBOX_DEFAULT
# 1214 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1215 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1216 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_49
# 1219 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_50
# 1222 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_51
# 1225 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_52
# 1228 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_53
# 1230 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_54
# 1231 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_54
EventScript_Shop_Lelouch_Training_47:
# 1234 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialAttackEV, MSGBOX_DEFAULT
# 1235 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1236 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1237 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_57
# 1240 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_58
# 1243 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_59
# 1246 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_60
# 1249 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_61
# 1251 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_62
# 1252 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_62
EventScript_Shop_Lelouch_Training_55:
# 1255 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpecialDefenseEV, MSGBOX_DEFAULT
# 1256 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1257 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1258 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_65
# 1261 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_66
# 1264 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_67
# 1267 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_68
# 1270 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_69
# 1272 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_70
# 1273 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_70
EventScript_Shop_Lelouch_Training_63:
# 1276 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChooseSpeedEV, MSGBOX_DEFAULT
# 1277 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Training_Text_4, EventScript_Shop_Lelouch_Training_Text_5, EventScript_Shop_Lelouch_Training_Text_6, EventScript_Shop_Lelouch_Training_Text_7, EventScript_Shop_Lelouch_Training_Text_8, EventScript_Shop_Lelouch_Training_Text_9
# 1278 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1279 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Training_73
# 1282 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Training_74
# 1285 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Training_75
# 1288 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Training_76
# 1291 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Training_77
# 1293 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Training_78
# 1294 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Training_78
EventScript_Shop_Lelouch_Training_71:
# 1297 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_F, 510
	goto_if_gt EventScript_Shop_Lelouch_Training_80
# 1301 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_CheckEVs, MSGBOX_YESNO
# 1302 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Training_83
# 1305 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonCute
# 1306 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1307 "data/scripts/battle_labyrinth.pory"
	waitse
# 1308 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedEVs, MSGBOX_DEFAULT
# 1309 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1310 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
EventScript_Shop_Lelouch_Training_24:
	return

EventScript_Shop_Lelouch_Training_21:
# 1148 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ExpTrainingFinished, MSGBOX_DEFAULT
# 1149 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayRed, MSGBOX_DEFAULT
# 1150 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_RED_SHARD, 1
	goto EventScript_Shop_Lelouch_Training_20

EventScript_Shop_Lelouch_Training_25:
# 1162 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_DidNotTrain, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_28:
# 1166 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Training_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_Training_24

EventScript_Shop_Lelouch_Training_33:
# 1175 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 252
# 1176 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_34:
# 1178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 200
# 1179 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_35:
# 1181 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 100
# 1182 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_36:
# 1184 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 4
# 1185 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_37:
# 1187 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_9, 0
	goto EventScript_Shop_Lelouch_Training_31

EventScript_Shop_Lelouch_Training_38:
	return

EventScript_Shop_Lelouch_Training_41:
# 1196 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 252
# 1197 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_42:
# 1199 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 200
# 1200 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_43:
# 1202 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 100
# 1203 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_44:
# 1205 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 4
# 1206 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_45:
# 1208 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_A, 0
	goto EventScript_Shop_Lelouch_Training_39

EventScript_Shop_Lelouch_Training_46:
	return

EventScript_Shop_Lelouch_Training_49:
# 1217 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 252
# 1218 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_50:
# 1220 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 200
# 1221 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_51:
# 1223 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 100
# 1224 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_52:
# 1226 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 4
# 1227 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_53:
# 1229 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_B, 0
	goto EventScript_Shop_Lelouch_Training_47

EventScript_Shop_Lelouch_Training_54:
	return

EventScript_Shop_Lelouch_Training_57:
# 1238 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 252
# 1239 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_58:
# 1241 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 200
# 1242 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_59:
# 1244 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 100
# 1245 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_60:
# 1247 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 4
# 1248 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_61:
# 1250 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_C, 0
	goto EventScript_Shop_Lelouch_Training_55

EventScript_Shop_Lelouch_Training_62:
	return

EventScript_Shop_Lelouch_Training_65:
# 1259 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 252
# 1260 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_66:
# 1262 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 200
# 1263 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_67:
# 1265 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 100
# 1266 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_68:
# 1268 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 4
# 1269 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_69:
# 1271 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_D, 0
	goto EventScript_Shop_Lelouch_Training_63

EventScript_Shop_Lelouch_Training_70:
	return

EventScript_Shop_Lelouch_Training_73:
# 1280 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 252
# 1281 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 252
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_74:
# 1283 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 200
# 1284 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 200
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_75:
# 1286 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 100
# 1287 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 100
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_76:
# 1289 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 4
# 1290 "data/scripts/battle_labyrinth.pory"
	addvar VAR_TEMP_F, 4
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_77:
# 1292 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_E, 0
	goto EventScript_Shop_Lelouch_Training_71

EventScript_Shop_Lelouch_Training_78:
	return

EventScript_Shop_Lelouch_Training_80:
# 1298 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_TooManyEVs, MSGBOX_DEFAULT
	return

EventScript_Shop_Lelouch_Training_83:
	return


EventScript_Shop_Lelouch_Moves::
# 1363 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_BLUE_SHARD, 1
# 1364 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Moves_2
# 1368 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Moves_Text_0, EventScript_Shop_Lelouch_Moves_Text_1, EventScript_Shop_Marie_MainMenu_Text_3
# 1369 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1370 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Moves_5
# 1372 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Moves_6
# 1374 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Moves_7
# 1375 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Moves_7
	return

EventScript_Shop_Lelouch_Moves_2:
# 1365 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Moves_5:
# 1371 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveReminder
	return

EventScript_Shop_Lelouch_Moves_6:
# 1373 "data/scripts/battle_labyrinth.pory"
	call EventScript_Shop_Lelouch_MoveTutor
	return

EventScript_Shop_Lelouch_Moves_7:
	return


EventScript_Shop_Lelouch_MoveReminder::
# 1381 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_0, MSGBOX_YESNO
# 1382 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_2
EventScript_Shop_Lelouch_MoveReminder_5:
# 1386 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_1, MSGBOX_DEFAULT
# 1387 "data/scripts/battle_labyrinth.pory"
	special ChooseMonForMoveRelearner
# 1388 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1389 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 255
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_8
# 1392 "data/scripts/battle_labyrinth.pory"
	special IsSelectedMonEgg
# 1393 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_11
# 1397 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8005, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_14
# 1401 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_4, MSGBOX_DEFAULT
# 1402 "data/scripts/battle_labyrinth.pory"
	special TeachMoveRelearnerMove
# 1403 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1404 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveReminder_17
# 1407 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue
# 1408 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveReminder_2:
	return

EventScript_Shop_Lelouch_MoveReminder_8:
	return

EventScript_Shop_Lelouch_MoveReminder_11:
# 1394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_2, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_14:
# 1398 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveReminder_Text_3, MSGBOX_DEFAULT
	goto EventScript_Shop_Lelouch_MoveReminder_5

EventScript_Shop_Lelouch_MoveReminder_17:
	goto EventScript_Shop_Lelouch_MoveReminder_5


EventScript_Shop_Lelouch_Improvement::
# 1415 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_YELLOW_SHARD, 1
# 1416 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Improvement_2
# 1420 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Improvement_Text_0
	return

EventScript_Shop_Lelouch_Improvement_2:
# 1417 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return


EventScript_Shop_Lelouch_MoveTutor::
EventScript_Shop_Lelouch_MoveTutor_1:
# 1425 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_0, MSGBOX_DEFAULT
# 1426 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 10
	goto_if_gt EventScript_Shop_Lelouch_MoveTutor_4
EventScript_Shop_Lelouch_MoveTutor_3:
# 1462 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 50
# 1463 "data/scripts/battle_labyrinth.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1464 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1465 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_MoveTutor_8
# 1468 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_MoveTutor_9
# 1471 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_MoveTutor_10
# 1474 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_MoveTutor_11
# 1477 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_MoveTutor_12
# 1480 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_MoveTutor_13
# 1483 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_MoveTutor_14
# 1486 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_MoveTutor_15
# 1489 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_MoveTutor_16
# 1492 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_MoveTutor_17
# 1570 "data/scripts/battle_labyrinth.pory"
	case 50, EventScript_Shop_Lelouch_MoveTutor_18
# 1571 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_MoveTutor_18
EventScript_Shop_Lelouch_MoveTutor_6:
# 1574 "data/scripts/battle_labyrinth.pory"
	buffermovename 0, VAR_TEMP_0
# 1575 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_11, MSGBOX_YESNO
# 1576 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_20
# 1579 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_MoveTutor_Text_12, MSGBOX_DEFAULT
# 1580 "data/scripts/battle_labyrinth.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 1581 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Shop_Lelouch_MoveTutor_23
# 1584 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayBlue, MSGBOX_DEFAULT
# 1585 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_BLUE_SHARD
	return

EventScript_Shop_Lelouch_MoveTutor_4:
# 1427 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_1, 1
# 1428 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_2, 2
# 1429 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_3, 3
# 1430 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_4, 4
# 1431 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_5, 5
# 1432 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_6, 6
# 1433 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_7, 7
# 1434 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_8, 8
# 1435 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_9, 9
# 1436 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Lelouch_MoveTutor_Text_10, 10
	goto EventScript_Shop_Lelouch_MoveTutor_3

EventScript_Shop_Lelouch_MoveTutor_8:
# 1466 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICY_WIND
# 1467 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_9:
# 1469 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_GRASS_KNOT
# 1470 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_GRASS_KNOT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_10:
# 1472 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_LOW_KICK
# 1473 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_11:
# 1475 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_FIRE_FANG
# 1476 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_12:
# 1478 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_ICE_FANG
# 1479 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_13:
# 1481 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_THUNDER_FANG
# 1482 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_14:
# 1484 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HEAL_BELL
# 1485 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_15:
# 1487 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_HELPING_HAND
# 1488 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_16:
# 1490 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_SLEEP_TALK
# 1491 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_17:
# 1493 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, MOVE_TAUNT
# 1494 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, MOVE_TAUNT
	goto EventScript_Shop_Lelouch_MoveTutor_6

EventScript_Shop_Lelouch_MoveTutor_18:
	return

EventScript_Shop_Lelouch_MoveTutor_20:
	goto EventScript_Shop_Lelouch_MoveTutor_1

EventScript_Shop_Lelouch_MoveTutor_23:
	goto EventScript_Shop_Lelouch_MoveTutor_1


EventScript_Shop_Lelouch_Other::
# 1592 "data/scripts/battle_labyrinth.pory"
	checkitem ITEM_GREEN_SHARD, 1
# 1593 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Lelouch_Other_2
# 1597 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_0
# 1598 "data/scripts/battle_labyrinth.pory"
	special ChoosePartyMon
# 1599 "data/scripts/battle_labyrinth.pory"
	waitstate
# 1600 "data/scripts/battle_labyrinth.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EventScript_Shop_Lelouch_Other_5
# 1603 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1604 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_Shop_Lelouch_Other_8
# 1607 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_TEMP_1, ScriptGetPartyMonSpecies
# 1608 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_1
# 1609 "data/scripts/battle_labyrinth.pory"
	copyvar VAR_TEMP_1, VAR_0x8004
# 1610 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_2, MSGBOX_DEFAULT
# 1611 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, EventScript_Shop_Lelouch_Other_Text_3, EventScript_Shop_Lelouch_Other_Text_4, EventScript_Shop_Lelouch_Other_Text_5, EventScript_Shop_Lelouch_Other_Text_6, EventScript_Shop_Lelouch_Other_Text_7, EventScript_Shop_Lelouch_Other_Text_8, EventScript_Shop_Lelouch_Other_Text_9, EventScript_Shop_Lelouch_Other_Text_10, EventScript_Shop_Lelouch_Other_Text_11, EventScript_Shop_Lelouch_Other_Text_12, EventScript_Shop_Lelouch_Other_Text_13, EventScript_Shop_Lelouch_Other_Text_14, EventScript_Shop_Lelouch_Other_Text_15, EventScript_Shop_Lelouch_Other_Text_16, EventScript_Shop_Lelouch_Other_Text_17, EventScript_Shop_Lelouch_Other_Text_18, EventScript_Shop_Lelouch_Other_Text_19, EventScript_Shop_Lelouch_Other_Text_20, EventScript_Shop_Lelouch_Other_Text_21, EventScript_Shop_Lelouch_Other_Text_22, EventScript_Shop_Lelouch_Other_Text_23
# 1612 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 1613 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Shop_Lelouch_Other_13
# 1619 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Shop_Lelouch_Other_14
# 1625 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Shop_Lelouch_Other_15
# 1631 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Shop_Lelouch_Other_16
# 1637 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Shop_Lelouch_Other_17
# 1643 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Shop_Lelouch_Other_18
# 1649 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Shop_Lelouch_Other_19
# 1655 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Shop_Lelouch_Other_20
# 1661 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Shop_Lelouch_Other_21
# 1667 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Shop_Lelouch_Other_22
# 1673 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Shop_Lelouch_Other_23
# 1679 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Shop_Lelouch_Other_24
# 1685 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Shop_Lelouch_Other_25
# 1691 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Shop_Lelouch_Other_26
# 1697 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Shop_Lelouch_Other_27
# 1703 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Shop_Lelouch_Other_28
# 1709 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Shop_Lelouch_Other_29
# 1715 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Shop_Lelouch_Other_30
# 1721 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Shop_Lelouch_Other_31
# 1727 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_Shop_Lelouch_Other_32
# 1733 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_Shop_Lelouch_Other_33
# 1739 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Shop_Lelouch_Other_34
EventScript_Shop_Lelouch_Other_11:
# 1742 "data/scripts/battle_labyrinth.pory"
	playse SE_EXP_MAX
# 1743 "data/scripts/battle_labyrinth.pory"
	waitse
# 1744 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_ChangedNature
# 1745 "data/scripts/battle_labyrinth.pory"
	special CheckLeadMonSmart
# 1746 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_PayGreen
# 1747 "data/scripts/battle_labyrinth.pory"
	removeitem ITEM_GREEN_SHARD, 1
EventScript_Shop_Lelouch_Other_4:
	return

EventScript_Shop_Lelouch_Other_2:
# 1594 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Lelouch_NotEnoughColor
	return

EventScript_Shop_Lelouch_Other_5:
	return

EventScript_Shop_Lelouch_Other_8:
# 1605 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_1
	goto EventScript_Shop_Lelouch_Other_4

EventScript_Shop_Lelouch_Other_13:
# 1614 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 1615 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_24, MSGBOX_YESNO
# 1616 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_35
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_14:
# 1620 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
# 1621 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_25, MSGBOX_YESNO
# 1622 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_37
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_15:
# 1626 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
# 1627 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_26, MSGBOX_YESNO
# 1628 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_39
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_16:
# 1632 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
# 1633 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_27, MSGBOX_YESNO
# 1634 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_41
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_17:
# 1638 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 1639 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_28, MSGBOX_YESNO
# 1640 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_43
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_18:
# 1644 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
# 1645 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_29, MSGBOX_YESNO
# 1646 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_45
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_19:
# 1650 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
# 1651 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_30, MSGBOX_YESNO
# 1652 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_47
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_20:
# 1656 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
# 1657 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_31, MSGBOX_YESNO
# 1658 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_49
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_21:
# 1662 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
# 1663 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_32, MSGBOX_YESNO
# 1664 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_51
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_22:
# 1668 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
# 1669 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_33, MSGBOX_YESNO
# 1670 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_53
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_23:
# 1674 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 19
# 1675 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_34, MSGBOX_YESNO
# 1676 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_55
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_24:
# 1680 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
# 1681 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_35, MSGBOX_YESNO
# 1682 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_57
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_25:
# 1686 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 20
# 1687 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_36, MSGBOX_YESNO
# 1688 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_59
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_26:
# 1692 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 21
# 1693 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_37, MSGBOX_YESNO
# 1694 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_61
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_27:
# 1698 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 23
# 1699 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_38, MSGBOX_YESNO
# 1700 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_63
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_28:
# 1704 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 22
# 1705 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_39, MSGBOX_YESNO
# 1706 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_65
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_29:
# 1710 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
# 1711 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_40, MSGBOX_YESNO
# 1712 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_67
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_30:
# 1716 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
# 1717 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_41, MSGBOX_YESNO
# 1718 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_69
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_31:
# 1722 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 1723 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_42, MSGBOX_YESNO
# 1724 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_71
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_32:
# 1728 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 1729 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_43, MSGBOX_YESNO
# 1730 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Lelouch_Other_73
	goto EventScript_Shop_Lelouch_Other_11

EventScript_Shop_Lelouch_Other_33:
# 1734 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
# 1735 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Lelouch_Other_Text_44, MSGBOX_YESNO
# 1736 "data/scripts/battle_labyrinth.pory"
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
# 1758 "data/scripts/battle_labyrinth.pory"
	lock
# 1759 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1760 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_JOY_INTRO, EventScript_Shop_Joy_2
EventScript_Shop_Joy_1:
# 1764 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_5
# 1767 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_2, MSGBOX_DEFAULT
EventScript_Shop_Joy_4:
# 1769 "data/scripts/battle_labyrinth.pory"
	showmoneybox 0, 0, 0
# 1770 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_3, MSGBOX_YESNO
# 1771 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Shop_Joy_9
# 1775 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_JOY_UPGRADED, EventScript_Shop_Joy_12
# 1793 "data/scripts/battle_labyrinth.pory"
	checkmoney 1000, 0
# 1794 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_18
# 1798 "data/scripts/battle_labyrinth.pory"
	removemoney 1000, 0
# 1799 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1800 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_7
# 1801 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1802 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1803 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1804 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1805 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1806 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_8, MSGBOX_DEFAULT
# 1807 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
EventScript_Shop_Joy_8:
# 1811 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_9
# 1812 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_Shop_Joy_2:
# 1761 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_JOY_INTRO
# 1762 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_0, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_1

EventScript_Shop_Joy_5:
# 1765 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_1, MSGBOX_DEFAULT
	goto EventScript_Shop_Joy_4

EventScript_Shop_Joy_9:
# 1772 "data/scripts/battle_labyrinth.pory"
	closemessage
# 1773 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_12:
# 1776 "data/scripts/battle_labyrinth.pory"
	checkmoney 2000, 0
# 1777 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_Shop_Joy_15
# 1781 "data/scripts/battle_labyrinth.pory"
	removemoney 2000, 0
# 1782 "data/scripts/battle_labyrinth.pory"
	updatemoneybox
# 1783 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_5
# 1784 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1785 "data/scripts/battle_labyrinth.pory"
	playfanfare MUS_HEAL
# 1786 "data/scripts/battle_labyrinth.pory"
	waitfanfare
# 1787 "data/scripts/battle_labyrinth.pory"
	special HealPlayerParty
# 1788 "data/scripts/battle_labyrinth.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1789 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_6, MSGBOX_DEFAULT
# 1790 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_15:
# 1778 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1779 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8

EventScript_Shop_Joy_18:
# 1795 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Shop_Joy_Text_4
# 1796 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
	goto EventScript_Shop_Joy_8


EventScript_Shop_Alexander::
# 1817 "data/scripts/battle_labyrinth.pory"
	lock
# 1818 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1819 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_Shop_Gordon::
# 1823 "data/scripts/battle_labyrinth.pory"
	lock
# 1824 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1825 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_MandatoryCheck::
# 1829 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_MandatoryCheck_2
# 1829 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_MandatoryCheck_2
EventScript_MandatoryCheck_1:
	return

EventScript_MandatoryCheck_2:
# 1830 "data/scripts/battle_labyrinth.pory"
	specialvar VAR_NUM_TRAINERS_REMAINING, GetNumTrainersRemaining
# 1831 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUM_TRAINERS_REMAINING, 0
	goto_if_gt EventScript_MandatoryCheck_6
	goto EventScript_MandatoryCheck_1

EventScript_MandatoryCheck_6:
# 1832 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1833 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0, MSGBOX_DEFAULT
# 1834 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1835 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MandatoryCheck_10
# 1838 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_MandatoryCheck_8:
# 1840 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_MandatoryCheck_10:
# 1836 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_MandatoryCheck_8


EventScript_BrutalExitNotSatisfied::
# 1848 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_NUM_TRAINERS_REMAINING
# 1849 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MandatoryCheck_Text_0
# 1850 "data/scripts/battle_labyrinth.pory"
	switch VAR_NUM_TRAINERS_REMAINING
# 1851 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_BrutalExitNotSatisfied_3
# 1854 "data/scripts/battle_labyrinth.pory"
	msgbox gText_MultipleOpponentsRemaining
EventScript_BrutalExitNotSatisfied_1:
# 1856 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_BrutalExitNotSatisfied_3:
# 1852 "data/scripts/battle_labyrinth.pory"
	msgbox gText_OneOpponentRemaining
	goto EventScript_BrutalExitNotSatisfied_1


EventScript_Max::
# 1860 "data/scripts/battle_labyrinth.pory"
	lock
# 1861 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 1862 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_MAX_INTRO, EventScript_Max_2
EventScript_Max_1:
# 1867 "data/scripts/battle_labyrinth.pory"
	message EventScript_Max_Text_2
# 1868 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 1869 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1870 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Max_6
# 1872 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Max_7
# 1874 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Max_8
# 1876 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_Max_9
EventScript_Max_4:
# 1879 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_3, MSGBOX_AUTOCLOSE
# 1880 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_Max_2:
# 1863 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_0, MSGBOX_DEFAULT
# 1864 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Max_Text_1, MSGBOX_DEFAULT
# 1865 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_MAX_INTRO
	goto EventScript_Max_1

EventScript_Max_6:
# 1871 "data/scripts/battle_labyrinth.pory"
	pokemart Zone2A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_7:
# 1873 "data/scripts/battle_labyrinth.pory"
	pokemart Zone6A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_8:
# 1875 "data/scripts/battle_labyrinth.pory"
	pokemart Zone10A_Shop_TMShop
	goto EventScript_Max_4

EventScript_Max_9:
# 1877 "data/scripts/battle_labyrinth.pory"
	pokemart Zone18A_Shop_TMShop
	goto EventScript_Max_4


	.align 2
# 1883 "data/scripts/battle_labyrinth.pory"
Zone2A_Shop_TMShop:
# 1884 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_NONE

	.align 2
# 1887 "data/scripts/battle_labyrinth.pory"
Zone6A_Shop_TMShop:
# 1888 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_TRAILBLAZE
# 1889 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_FLAME_CHARGE
# 1890 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 1891 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

	.align 2
# 1894 "data/scripts/battle_labyrinth.pory"
Zone10A_Shop_TMShop:
# 1895 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_IRON_DEFENSE
# 1896 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AGILITY
# 1897 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM_AMNESIA
	.2byte ITEM_NONE

	.align 2
# 1900 "data/scripts/battle_labyrinth.pory"
Zone18A_Shop_TMShop:
# 1901 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM31
# 1902 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM32
# 1903 "data/scripts/battle_labyrinth.pory"
	.2byte ITEM_TM33
	.2byte ITEM_NONE

EventScript_LeavingSetup::
# 1907 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_IN_NEW_ZONE
# 1908 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_LeavingSetup_Text_0, MSGBOX_AUTOCLOSE
# 1909 "data/scripts/battle_labyrinth.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1910 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq EventScript_LeavingSetup_2
EventScript_LeavingSetup_1:
# 1917 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq EventScript_LeavingSetup_5
EventScript_LeavingSetup_4:
# 1924 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 39
	goto_if_eq EventScript_LeavingSetup_8
EventScript_LeavingSetup_7:
# 1931 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1932 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1933 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 1934 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_LeavingSetup_12
# 1936 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_LeavingSetup_13
# 1938 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_LeavingSetup_14
# 1940 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_LeavingSetup_15
# 1942 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_LeavingSetup_16
# 1944 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_LeavingSetup_17
# 1946 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_LeavingSetup_18
# 1948 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_LeavingSetup_19
# 1950 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_LeavingSetup_20
# 1952 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_LeavingSetup_21
# 1954 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_LeavingSetup_22
# 1956 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_LeavingSetup_23
# 1958 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_LeavingSetup_24
# 1960 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_LeavingSetup_25
# 1962 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_LeavingSetup_26
# 1964 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_LeavingSetup_27
# 1966 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_LeavingSetup_28
# 1968 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_LeavingSetup_29
# 1970 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_LeavingSetup_30
# 1972 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_LeavingSetup_31
# 1974 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_LeavingSetup_32
# 1976 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_LeavingSetup_33
EventScript_LeavingSetup_10:
	return

EventScript_LeavingSetup_2:
# 1911 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkRight
# 1912 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1913 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1914 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceLeft
# 1915 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_1

EventScript_LeavingSetup_5:
# 1918 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1919 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1920 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1921 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1922 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_4

EventScript_LeavingSetup_8:
# 1925 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_WalkLeft
# 1926 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1927 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 1928 "data/scripts/battle_labyrinth.pory"
	applymovement 1, Common_Movement_FaceRight
# 1929 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
	goto EventScript_LeavingSetup_7

EventScript_LeavingSetup_12:
# 1935 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_13:
# 1937 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_14:
# 1939 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_15:
# 1941 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_16:
# 1943 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_17:
# 1945 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_18:
# 1947 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_19:
# 1949 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_20:
# 1951 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 23
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_21:
# 1953 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 24
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_22:
# 1955 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 26
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_23:
# 1957 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 30
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_24:
# 1959 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 32
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_25:
# 1961 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 33
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_26:
# 1963 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 34
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_27:
# 1965 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 37
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_28:
# 1967 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 39
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_29:
# 1969 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 41
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_30:
# 1971 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 43
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_31:
# 1973 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 45
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_32:
# 1975 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 48
	goto EventScript_LeavingSetup_10

EventScript_LeavingSetup_33:
# 1977 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 49
	goto EventScript_LeavingSetup_10


EventScript_WhenUReady::
# 1983 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 7
	goto_if_eq EventScript_WhenUReady_1
# 1986 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 13
	goto_if_eq EventScript_WhenUReady_2
# 1989 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 18
	goto_if_eq EventScript_WhenUReady_3
# 1992 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 24
	goto_if_eq EventScript_WhenUReady_4
# 1996 "data/scripts/battle_labyrinth.pory"
	buffernumberstring 0, VAR_ZONE
# 1997 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_WhenUReady, MSGBOX_AUTOCLOSE
# 1998 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_1:
# 1984 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6Sanctuary_Text_Colress_WhenUReady
# 1985 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_2:
# 1987 "data/scripts/battle_labyrinth.pory"
	msgbox Zone12Sanctuary_Text_Colress_WhenUReady
# 1988 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_3:
# 1990 "data/scripts/battle_labyrinth.pory"
	msgbox Zone17Sanctuary_Text_Colress_WhenUReady
# 1991 "data/scripts/battle_labyrinth.pory"
	release
	return

EventScript_WhenUReady_4:
# 1993 "data/scripts/battle_labyrinth.pory"
	msgbox Zone23Sanctuary_Text_Colress_WhenUReady
# 1994 "data/scripts/battle_labyrinth.pory"
	release
	return


EventScript_SanctuaryToZone0::
# 2003 "data/scripts/battle_labyrinth.pory"
	lockall
# 2004 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 2005 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
# 2006 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SanctuaryToZone0_Text_0, MSGBOX_YESNO
# 2007 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_SanctuaryToZone0_2
# 2012 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2013 "data/scripts/battle_labyrinth.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 2014 "data/scripts/battle_labyrinth.pory"
	waitmovement 0
EventScript_SanctuaryToZone0_1:
# 2016 "data/scripts/battle_labyrinth.pory"
	releaseall
	return

EventScript_SanctuaryToZone0_2:
# 2008 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2009 "data/scripts/battle_labyrinth.pory"
	warpdoor MAP_ZONE0A, 255, 17, 10
# 2010 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_SanctuaryToZone0_1


EventScript_Documentation::
# 2020 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Documentation_Text_0, MSGBOX_DEFAULT
# 2021 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	return


EventScript_Settings::
EventScript_Settings_1:
# 2059 "data/scripts/battle_labyrinth.pory"
	message EventScript_Settings_Text_0
# 2060 "data/scripts/battle_labyrinth.pory"
	waitmessage
# 2061 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_4
# 2063 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_5
EventScript_Settings_3:
# 2066 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_9
# 2068 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_10
EventScript_Settings_8:
# 2071 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_14
# 2073 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_15
EventScript_Settings_13:
# 2076 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_19
# 2078 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_20
EventScript_Settings_18:
# 2081 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_24
# 2084 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_10, 4
EventScript_Settings_23:
# 2086 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_28
# 2089 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_12, 5
EventScript_Settings_27:
# 2091 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_13, 6
# 2092 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_32
# 2092 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_32
# 2095 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_15, 7
EventScript_Settings_31:
# 2097 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_38
# 2097 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_38
# 2100 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_17, 8
EventScript_Settings_37:
# 2102 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_44
# 2102 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_44
# 2105 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_19, 9
EventScript_Settings_43:
# 2107 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_50
# 2107 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_50
# 2110 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_21, 10
EventScript_Settings_49:
# 2112 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_56
# 2112 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_56
# 2115 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_23, 11
EventScript_Settings_55:
# 2117 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_62
# 2117 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_62
# 2120 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_25, 12
EventScript_Settings_61:
# 2122 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_68
# 2122 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_68
# 2125 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_27, 13
EventScript_Settings_67:
# 2127 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_74
# 2127 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_74
# 2130 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_29, 14
EventScript_Settings_73:
# 2132 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_80
# 2132 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_80
# 2135 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_31, 15
EventScript_Settings_79:
# 2137 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_86
# 2137 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_86
# 2140 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_33, 16
EventScript_Settings_85:
# 2142 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Shop_Marie_MainMenu_Text_3, 17
# 2143 "data/scripts/battle_labyrinth.pory"
	dynmultistack 21, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2144 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2145 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_Settings_92
# 2174 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_Settings_93
# 2210 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_Settings_94
# 2239 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_Settings_95
# 2303 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_Settings_96
# 2332 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_Settings_97
# 2351 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_Settings_98
# 2353 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_Settings_99
# 2378 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_Settings_100
# 2403 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_Settings_101
# 2428 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_Settings_102
# 2453 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_Settings_103
# 2478 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_Settings_104
# 2507 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_Settings_105
# 2532 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_Settings_106
# 2557 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_Settings_107
# 2582 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_Settings_108
# 2608 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_Settings_109
# 2609 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_Settings_109
	goto EventScript_Settings_1

EventScript_Settings_4:
# 2062 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_1, 0
	goto EventScript_Settings_3

EventScript_Settings_5:
# 2064 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_2, 0
	goto EventScript_Settings_3

EventScript_Settings_9:
# 2067 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_3, 1
	goto EventScript_Settings_8

EventScript_Settings_10:
# 2069 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_4, 1
	goto EventScript_Settings_8

EventScript_Settings_14:
# 2072 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_5, 2
	goto EventScript_Settings_13

EventScript_Settings_15:
# 2074 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_6, 2
	goto EventScript_Settings_13

EventScript_Settings_19:
# 2077 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_7, 3
	goto EventScript_Settings_18

EventScript_Settings_20:
# 2079 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_8, 3
	goto EventScript_Settings_18

EventScript_Settings_24:
# 2082 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_9, 4
	goto EventScript_Settings_23

EventScript_Settings_28:
# 2087 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_11, 5
	goto EventScript_Settings_27

EventScript_Settings_32:
# 2093 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_14, 7
	goto EventScript_Settings_31

EventScript_Settings_38:
# 2098 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_16, 8
	goto EventScript_Settings_37

EventScript_Settings_44:
# 2103 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_18, 9
	goto EventScript_Settings_43

EventScript_Settings_50:
# 2108 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_20, 10
	goto EventScript_Settings_49

EventScript_Settings_56:
# 2113 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_22, 11
	goto EventScript_Settings_55

EventScript_Settings_62:
# 2118 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_24, 12
	goto EventScript_Settings_61

EventScript_Settings_68:
# 2123 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_26, 13
	goto EventScript_Settings_67

EventScript_Settings_74:
# 2128 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_28, 14
	goto EventScript_Settings_73

EventScript_Settings_80:
# 2133 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_30, 15
	goto EventScript_Settings_79

EventScript_Settings_86:
# 2138 "data/scripts/battle_labyrinth.pory"
	dynmultipush EventScript_Settings_Text_32, 16
	goto EventScript_Settings_85

EventScript_Settings_92:
# 2146 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_BrutalExplained, MSGBOX_DEFAULT
# 2147 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_110
# 2159 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_183
# 2162 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_37, MSGBOX_YESNO
# 2163 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_266
	goto EventScript_Settings_1

EventScript_Settings_93:
# 2175 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_NuzlockeExplained, MSGBOX_DEFAULT
# 2176 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_114
EventScript_Settings_113:
# 2186 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_Settings_186
# 2199 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_46, MSGBOX_YESNO
# 2200 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_270
	goto EventScript_Settings_1

EventScript_Settings_94:
# 2211 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_RandomizerExplanation, MSGBOX_DEFAULT
# 2212 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RANDOMIZER, EventScript_Settings_116
# 2228 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_53, MSGBOX_YESNO
# 2229 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_197
	goto EventScript_Settings_1

EventScript_Settings_95:
# 2240 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_InfiniteExplained, MSGBOX_DEFAULT
# 2241 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INFINITE, EventScript_Settings_119
# 2288 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_202
# 2291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_62, MSGBOX_YESNO
# 2292 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_280
	goto EventScript_Settings_1

EventScript_Settings_96:
# 2304 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_65, MSGBOX_DEFAULT
# 2305 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_FULL_INFO, EventScript_Settings_122
# 2319 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_69, MSGBOX_DEFAULT
# 2320 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_70, MSGBOX_YESNO
# 2321 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_207
	goto EventScript_Settings_1

EventScript_Settings_97:
# 2333 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_72, MSGBOX_DEFAULT
# 2334 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EXP_ALL, EventScript_Settings_125
# 2343 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_75, MSGBOX_YESNO
# 2344 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_211
	goto EventScript_Settings_1

EventScript_Settings_98:
# 2352 "data/scripts/battle_labyrinth.pory"
	call EventScript_MusicMenu
	goto EventScript_Settings_1

EventScript_Settings_99:
# 2354 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_77, MSGBOX_DEFAULT
# 2355 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, EventScript_Settings_128
# 2355 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_128
# 2369 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_81, MSGBOX_DEFAULT
# 2370 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_82, MSGBOX_YESNO
# 2371 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_216
	goto EventScript_Settings_1

EventScript_Settings_100:
# 2379 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_84, MSGBOX_DEFAULT
# 2380 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_GAUNTLET, EventScript_Settings_133
# 2380 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_133
# 2394 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_88, MSGBOX_DEFAULT
# 2395 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_89, MSGBOX_YESNO
# 2396 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_221
	goto EventScript_Settings_1

EventScript_Settings_101:
# 2404 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_91, MSGBOX_DEFAULT
# 2405 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIDOCTOR, EventScript_Settings_138
# 2405 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_138
# 2419 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_95, MSGBOX_DEFAULT
# 2420 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_96, MSGBOX_YESNO
# 2421 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_226
	goto EventScript_Settings_1

EventScript_Settings_102:
# 2429 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_98, MSGBOX_DEFAULT
# 2430 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_CLUMSY, EventScript_Settings_143
# 2430 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_143
# 2444 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_102, MSGBOX_DEFAULT
# 2445 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_103, MSGBOX_YESNO
# 2446 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_231
	goto EventScript_Settings_1

EventScript_Settings_103:
# 2454 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_105, MSGBOX_DEFAULT
# 2455 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_EFFORTLESS, EventScript_Settings_148
# 2455 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_148
# 2469 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_109, MSGBOX_DEFAULT
# 2470 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_110, MSGBOX_YESNO
# 2471 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_236
	goto EventScript_Settings_1

EventScript_Settings_104:
# 2479 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_112, MSGBOX_DEFAULT
# 2480 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_RED_THUMB, EventScript_Settings_153
# 2480 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_153
# 2494 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_116, MSGBOX_DEFAULT
# 2495 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_INFINITE, EventScript_Settings_241
# 2504 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_105:
# 2508 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_119, MSGBOX_DEFAULT
# 2509 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_ANTIGRIND, EventScript_Settings_158
# 2509 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_158
# 2523 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_123, MSGBOX_DEFAULT
# 2524 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_124, MSGBOX_YESNO
# 2525 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_247
	goto EventScript_Settings_1

EventScript_Settings_106:
# 2533 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_126, MSGBOX_DEFAULT
# 2534 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_SINGLE_USE, EventScript_Settings_163
# 2534 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_163
# 2548 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_130, MSGBOX_DEFAULT
# 2549 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_131, MSGBOX_YESNO
# 2550 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_252
	goto EventScript_Settings_1

EventScript_Settings_107:
# 2558 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_133, MSGBOX_DEFAULT
# 2559 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_POOR, EventScript_Settings_168
# 2559 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_168
# 2573 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_137, MSGBOX_DEFAULT
# 2574 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_138, MSGBOX_YESNO
# 2575 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_257
	goto EventScript_Settings_1

EventScript_Settings_108:
# 2583 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_140, MSGBOX_DEFAULT
# 2584 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, EventScript_Settings_173
# 2584 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, EventScript_Settings_173
# 2598 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_144, MSGBOX_DEFAULT
# 2599 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_145, MSGBOX_YESNO
# 2600 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_262
	goto EventScript_Settings_1

EventScript_Settings_109:
# 2610 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EventScript_Settings_178
# 2613 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WhenUReady
	goto EventScript_Settings_1

EventScript_Settings_110:
# 2148 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_34, MSGBOX_YESNO
# 2149 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_181
	goto EventScript_Settings_1

EventScript_Settings_114:
# 2177 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 0
	goto_if_eq EventScript_Settings_189
# 2179 "data/scripts/battle_labyrinth.pory"
	compare VAR_NUZLOCKE_DEATHS, 1
	goto_if_eq EventScript_Settings_190
# 2182 "data/scripts/battle_labyrinth.pory"
	buffernumberstring STR_VAR_1, VAR_NUZLOCKE_DEATHS
# 2183 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_42, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_116:
# 2213 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_194
# 2216 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_50, MSGBOX_YESNO
# 2217 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_272
	goto EventScript_Settings_1

EventScript_Settings_119:
# 2242 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq EventScript_Settings_199
# 2276 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_59, MSGBOX_YESNO
# 2277 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_278
	goto EventScript_Settings_1

EventScript_Settings_122:
# 2306 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_66, MSGBOX_DEFAULT
# 2307 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_67, MSGBOX_YESNO
# 2308 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_205
	goto EventScript_Settings_1

EventScript_Settings_125:
# 2335 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_73, MSGBOX_YESNO
# 2336 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_209
	goto EventScript_Settings_1

EventScript_Settings_128:
# 2356 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_78, MSGBOX_DEFAULT
# 2357 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_213
# 2366 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_133:
# 2381 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_85, MSGBOX_DEFAULT
# 2382 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_218
# 2391 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_138:
# 2406 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_92, MSGBOX_DEFAULT
# 2407 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_223
# 2416 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_143:
# 2431 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_99, MSGBOX_DEFAULT
# 2432 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_228
# 2441 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_148:
# 2456 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_106, MSGBOX_DEFAULT
# 2457 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_233
# 2466 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_153:
# 2481 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_113, MSGBOX_DEFAULT
# 2482 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_238
# 2491 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_158:
# 2510 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_120, MSGBOX_DEFAULT
# 2511 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_244
# 2520 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_163:
# 2535 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_127, MSGBOX_DEFAULT
# 2536 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_249
# 2545 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_168:
# 2560 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_134, MSGBOX_DEFAULT
# 2561 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_254
# 2570 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_173:
# 2585 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_141, MSGBOX_DEFAULT
# 2586 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_Settings_259
# 2595 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_178:
	return

EventScript_Settings_181:
# 2150 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_35, MSGBOX_YESNO
# 2151 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_264
	goto EventScript_Settings_1

EventScript_Settings_183:
# 2160 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingInfinite, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_186:
# 2187 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_43, MSGBOX_YESNO
# 2188 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_268
	goto EventScript_Settings_1

EventScript_Settings_189:
# 2178 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_40, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_190:
# 2180 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_41, MSGBOX_DEFAULT
	goto EventScript_Settings_113

EventScript_Settings_194:
# 2214 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_49, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_197:
# 2230 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_54, MSGBOX_YESNO
# 2231 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_274
	goto EventScript_Settings_1

EventScript_Settings_199:
# 2243 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_56, MSGBOX_DEFAULT
# 2244 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_57, MSGBOX_YESNO
# 2245 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_276
	goto EventScript_Settings_1

EventScript_Settings_202:
# 2289 "data/scripts/battle_labyrinth.pory"
	msgbox gText_Colress_CannotChangeSettingBrutal, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_205:
# 2309 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2310 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_68, MSGBOX_DEFAULT
# 2311 "data/scripts/battle_labyrinth.pory"
	waitse
# 2312 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_FULL_INFO
# 2313 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_282
	goto EventScript_Settings_1

EventScript_Settings_207:
# 2322 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2323 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_71, MSGBOX_DEFAULT
# 2324 "data/scripts/battle_labyrinth.pory"
	waitse
# 2325 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_FULL_INFO
# 2326 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 3
	goto_if_lt EventScript_Settings_284
	goto EventScript_Settings_1

EventScript_Settings_209:
# 2337 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2338 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_74, MSGBOX_DEFAULT
# 2339 "data/scripts/battle_labyrinth.pory"
	waitse
# 2340 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_211:
# 2345 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2346 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_76, MSGBOX_DEFAULT
# 2347 "data/scripts/battle_labyrinth.pory"
	waitse
# 2348 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EXP_ALL
	goto EventScript_Settings_1

EventScript_Settings_213:
# 2358 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_79, MSGBOX_YESNO
# 2359 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_286
	goto EventScript_Settings_1

EventScript_Settings_216:
# 2372 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2373 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_83, MSGBOX_DEFAULT
# 2374 "data/scripts/battle_labyrinth.pory"
	waitse
# 2375 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_218:
# 2383 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_86, MSGBOX_YESNO
# 2384 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_288
	goto EventScript_Settings_1

EventScript_Settings_221:
# 2397 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2398 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_90, MSGBOX_DEFAULT
# 2399 "data/scripts/battle_labyrinth.pory"
	waitse
# 2400 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_223:
# 2408 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_93, MSGBOX_YESNO
# 2409 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_290
	goto EventScript_Settings_1

EventScript_Settings_226:
# 2422 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2423 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_97, MSGBOX_DEFAULT
# 2424 "data/scripts/battle_labyrinth.pory"
	waitse
# 2425 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_228:
# 2433 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_100, MSGBOX_YESNO
# 2434 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_292
	goto EventScript_Settings_1

EventScript_Settings_231:
# 2447 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2448 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_104, MSGBOX_DEFAULT
# 2449 "data/scripts/battle_labyrinth.pory"
	waitse
# 2450 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_233:
# 2458 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_107, MSGBOX_YESNO
# 2459 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_294
	goto EventScript_Settings_1

EventScript_Settings_236:
# 2472 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2473 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_111, MSGBOX_DEFAULT
# 2474 "data/scripts/battle_labyrinth.pory"
	waitse
# 2475 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_238:
# 2483 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_114, MSGBOX_YESNO
# 2484 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_296
	goto EventScript_Settings_1

EventScript_Settings_241:
# 2496 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_117, MSGBOX_YESNO
# 2497 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_298
	goto EventScript_Settings_1

EventScript_Settings_244:
# 2512 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_121, MSGBOX_YESNO
# 2513 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_300
	goto EventScript_Settings_1

EventScript_Settings_247:
# 2526 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2527 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_125, MSGBOX_DEFAULT
# 2528 "data/scripts/battle_labyrinth.pory"
	waitse
# 2529 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_249:
# 2537 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_128, MSGBOX_YESNO
# 2538 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_302
	goto EventScript_Settings_1

EventScript_Settings_252:
# 2551 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2552 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_132, MSGBOX_DEFAULT
# 2553 "data/scripts/battle_labyrinth.pory"
	waitse
# 2554 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_254:
# 2562 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_135, MSGBOX_YESNO
# 2563 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_304
	goto EventScript_Settings_1

EventScript_Settings_257:
# 2576 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2577 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_139, MSGBOX_DEFAULT
# 2578 "data/scripts/battle_labyrinth.pory"
	waitse
# 2579 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_259:
# 2587 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_142, MSGBOX_YESNO
# 2588 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_306
	goto EventScript_Settings_1

EventScript_Settings_262:
# 2601 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2602 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_146, MSGBOX_DEFAULT
# 2603 "data/scripts/battle_labyrinth.pory"
	waitse
# 2604 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_264:
# 2152 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2153 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_36, MSGBOX_DEFAULT
# 2154 "data/scripts/battle_labyrinth.pory"
	waitse
# 2155 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_266:
# 2164 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_38, MSGBOX_YESNO
# 2165 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_308
	goto EventScript_Settings_1

EventScript_Settings_268:
# 2189 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_44, MSGBOX_YESNO
# 2190 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_310
	goto EventScript_Settings_1

EventScript_Settings_270:
# 2201 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_47, MSGBOX_YESNO
# 2202 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_312
	goto EventScript_Settings_1

EventScript_Settings_272:
# 2218 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_51, MSGBOX_YESNO
# 2219 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_314
	goto EventScript_Settings_1

EventScript_Settings_274:
# 2232 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2233 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_55, MSGBOX_DEFAULT
# 2234 "data/scripts/battle_labyrinth.pory"
	waitse
# 2235 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_276:
# 2246 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2247 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2248 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2249 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2250 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2251 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2252 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2253 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2254 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_RESTORE, 100
# 2255 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2256 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2257 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2258 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2259 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2260 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2261 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2262 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2263 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_ELIXIR, 100
# 2264 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2265 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2266 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2267 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2268 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2269 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2270 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2271 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2272 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAX_REPEL, 100
# 2273 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_58, MSGBOX_DEFAULT
	goto EventScript_Settings_1

EventScript_Settings_278:
# 2278 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_60, MSGBOX_YESNO
# 2279 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_316
	goto EventScript_Settings_1

EventScript_Settings_280:
# 2293 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_63, MSGBOX_YESNO
# 2294 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Settings_318
	goto EventScript_Settings_1

EventScript_Settings_282:
# 2314 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DEXNAV_GET
# 2315 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_284:
# 2327 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 2328 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	goto EventScript_Settings_1

EventScript_Settings_286:
# 2360 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2361 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_80, MSGBOX_DEFAULT
# 2362 "data/scripts/battle_labyrinth.pory"
	waitse
# 2363 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CHALLENGE
	goto EventScript_Settings_1

EventScript_Settings_288:
# 2385 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2386 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_87, MSGBOX_DEFAULT
# 2387 "data/scripts/battle_labyrinth.pory"
	waitse
# 2388 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_GAUNTLET
	goto EventScript_Settings_1

EventScript_Settings_290:
# 2410 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2411 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_94, MSGBOX_DEFAULT
# 2412 "data/scripts/battle_labyrinth.pory"
	waitse
# 2413 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIDOCTOR
	goto EventScript_Settings_1

EventScript_Settings_292:
# 2435 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2436 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_101, MSGBOX_DEFAULT
# 2437 "data/scripts/battle_labyrinth.pory"
	waitse
# 2438 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_CLUMSY
	goto EventScript_Settings_1

EventScript_Settings_294:
# 2460 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2461 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_108, MSGBOX_DEFAULT
# 2462 "data/scripts/battle_labyrinth.pory"
	waitse
# 2463 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_EFFORTLESS
	goto EventScript_Settings_1

EventScript_Settings_296:
# 2485 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2486 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_115, MSGBOX_DEFAULT
# 2487 "data/scripts/battle_labyrinth.pory"
	waitse
# 2488 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_298:
# 2498 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2499 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_118, MSGBOX_DEFAULT
# 2500 "data/scripts/battle_labyrinth.pory"
	waitse
# 2501 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_RED_THUMB
	goto EventScript_Settings_1

EventScript_Settings_300:
# 2514 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2515 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_122, MSGBOX_DEFAULT
# 2516 "data/scripts/battle_labyrinth.pory"
	waitse
# 2517 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_ANTIGRIND
	goto EventScript_Settings_1

EventScript_Settings_302:
# 2539 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2540 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_129, MSGBOX_DEFAULT
# 2541 "data/scripts/battle_labyrinth.pory"
	waitse
# 2542 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_SINGLE_USE
	goto EventScript_Settings_1

EventScript_Settings_304:
# 2564 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2565 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_136, MSGBOX_DEFAULT
# 2566 "data/scripts/battle_labyrinth.pory"
	waitse
# 2567 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_POOR
	goto EventScript_Settings_1

EventScript_Settings_306:
# 2589 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2590 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_143, MSGBOX_DEFAULT
# 2591 "data/scripts/battle_labyrinth.pory"
	waitse
# 2592 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INDEPENDENT
	goto EventScript_Settings_1

EventScript_Settings_308:
# 2166 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2167 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_39, MSGBOX_DEFAULT
# 2168 "data/scripts/battle_labyrinth.pory"
	waitse
# 2169 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_BRUTAL
	goto EventScript_Settings_1

EventScript_Settings_310:
# 2191 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2192 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_45, MSGBOX_DEFAULT
# 2193 "data/scripts/battle_labyrinth.pory"
	waitse
# 2194 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_NUZLOCKE
# 2195 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED
	goto EventScript_Settings_1

EventScript_Settings_312:
# 2203 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2204 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_48, MSGBOX_DEFAULT
# 2205 "data/scripts/battle_labyrinth.pory"
	waitse
# 2206 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_NUZLOCKE
	goto EventScript_Settings_1

EventScript_Settings_314:
# 2220 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2221 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_52, MSGBOX_DEFAULT
# 2222 "data/scripts/battle_labyrinth.pory"
	waitse
# 2223 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_RANDOMIZER
	goto EventScript_Settings_1

EventScript_Settings_316:
# 2280 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_OFF
# 2281 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_61, MSGBOX_DEFAULT
# 2282 "data/scripts/battle_labyrinth.pory"
	waitse
# 2283 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1

EventScript_Settings_318:
# 2295 "data/scripts/battle_labyrinth.pory"
	playse SE_PC_ON
# 2296 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_Settings_Text_64, MSGBOX_DEFAULT
# 2297 "data/scripts/battle_labyrinth.pory"
	waitse
# 2298 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SETTINGS_INFINITE
	goto EventScript_Settings_1


EventScript_MusicMenu::
EventScript_MusicMenu_1:
# 2621 "data/scripts/battle_labyrinth.pory"
	fadedefaultbgm
# 2622 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_0
# 2623 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_1, EventScript_MusicMenu_Text_2, EventScript_MusicMenu_Text_3, EventScript_Shop_Marie_MainMenu_Text_20
# 2624 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2625 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_4
# 2667 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_5
# 2709 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_6
# 2751 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_7
# 2752 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_7
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_4:
# 2626 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_8:
# 2627 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_9
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_5:
# 2668 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_11:
# 2669 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_12
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_6:
# 2710 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
EventScript_MusicMenu_14:
# 2711 "data/scripts/battle_labyrinth.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EventScript_MusicMenu_15
	goto EventScript_MusicMenu_1

EventScript_MusicMenu_7:
	return

EventScript_MusicMenu_9:
# 2628 "data/scripts/battle_labyrinth.pory"
	switch VAR_WILD_MUSIC
# 2629 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_19
# 2632 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_20
# 2635 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_21
# 2638 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_22
# 2641 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_23
# 2644 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_24
EventScript_MusicMenu_17:
# 2648 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2649 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2650 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_42
# 2652 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_43
# 2654 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_44
# 2656 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_45
# 2658 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_46
# 2660 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_47
# 2663 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_48
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_12:
# 2670 "data/scripts/battle_labyrinth.pory"
	switch VAR_TRAINER_MUSIC
# 2671 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_27
# 2674 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_28
# 2677 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_29
# 2680 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_30
# 2683 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_31
# 2686 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_32
EventScript_MusicMenu_25:
# 2690 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2691 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2692 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_50
# 2694 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_51
# 2696 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_52
# 2698 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_53
# 2700 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_54
# 2702 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_55
# 2705 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_56
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_15:
# 2712 "data/scripts/battle_labyrinth.pory"
	switch VAR_LEVIATHAN_MUSIC
# 2713 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_35
# 2716 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_36
# 2719 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_37
# 2722 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_38
# 2725 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_39
# 2728 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_40
EventScript_MusicMenu_33:
# 2732 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EventScript_MusicMenu_Text_10, EventScript_MusicMenu_Text_11, EventScript_MusicMenu_Text_12, EventScript_MusicMenu_Text_13, EventScript_MusicMenu_Text_14, EventScript_MusicMenu_Text_15
# 2733 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 2734 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_MusicMenu_58
# 2736 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_MusicMenu_59
# 2738 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_MusicMenu_60
# 2740 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_MusicMenu_61
# 2742 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_MusicMenu_62
# 2744 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_MusicMenu_63
# 2747 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, EventScript_MusicMenu_64
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_19:
# 2630 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_WILD, FALSE
# 2631 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_4
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_20:
# 2633 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_WILD, FALSE
# 2634 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_5
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_21:
# 2636 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_WILD, FALSE
# 2637 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_6
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_22:
# 2639 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD, FALSE
# 2640 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_7
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_23:
# 2642 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_WILD_KANTO, FALSE
# 2643 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_8
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_24:
# 2646 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_9
	goto EventScript_MusicMenu_17

EventScript_MusicMenu_27:
# 2672 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_TRAINER, FALSE
# 2673 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_17
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_28:
# 2675 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_TRAINER, FALSE
# 2676 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_18
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_29:
# 2678 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_TRAINER, FALSE
# 2679 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_19
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_30:
# 2681 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER, FALSE
# 2682 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_20
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_31:
# 2684 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_TRAINER_KANTO, FALSE
# 2685 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_21
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_32:
# 2688 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_22
	goto EventScript_MusicMenu_25

EventScript_MusicMenu_35:
# 2714 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_VS_GYM_LEADER, FALSE
# 2715 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_24
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_36:
# 2717 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
# 2718 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_25
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_37:
# 2720 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_DP_VS_GYM_LEADER, FALSE
# 2721 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_26
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_38:
# 2723 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER, FALSE
# 2724 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_27
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_39:
# 2726 "data/scripts/battle_labyrinth.pory"
	playbgm MUS_HG_VS_GYM_LEADER_KANTO, FALSE
# 2727 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_28
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_40:
# 2730 "data/scripts/battle_labyrinth.pory"
	message EventScript_MusicMenu_Text_29
	goto EventScript_MusicMenu_33

EventScript_MusicMenu_42:
# 2651 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_43:
# 2653 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_44:
# 2655 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_45:
# 2657 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_46:
# 2659 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_47:
# 2662 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_16, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_48:
# 2664 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_8

EventScript_MusicMenu_50:
# 2693 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_51:
# 2695 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_52:
# 2697 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_53:
# 2699 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_54:
# 2701 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_55:
# 2704 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_23, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_56:
# 2706 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_11

EventScript_MusicMenu_58:
# 2735 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_59:
# 2737 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_60:
# 2739 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_61:
# 2741 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_62:
# 2743 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_63:
# 2746 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MusicMenu_Text_30, MSGBOX_DEFAULT
	goto EventScript_MusicMenu_14

EventScript_MusicMenu_64:
# 2748 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
	goto EventScript_MusicMenu_14


EventScript_SignsQuestGirl::
# 2759 "data/scripts/battle_labyrinth.pory"
	lock
# 2760 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2761 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SIGNS
# 2762 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SignsQuestGirl_2
EventScript_SignsQuestGirl_1:
# 2766 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_1
# 2767 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SignsQuestGirl_2:
# 2763 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SignsQuestGirl_Text_0
# 2764 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SIGNS
	goto EventScript_SignsQuestGirl_1


EventScript_SavesQuestBoy::
# 2772 "data/scripts/battle_labyrinth.pory"
	lock
# 2773 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2774 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_SAVES
# 2775 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SavesQuestBoy_2
EventScript_SavesQuestBoy_1:
# 2779 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_1
# 2780 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_SavesQuestBoy_2:
# 2776 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_SavesQuestBoy_Text_0
# 2777 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_SAVES
	goto EventScript_SavesQuestBoy_1


EventScript_PokedexQuestScientist::
# 2785 "data/scripts/battle_labyrinth.pory"
	lock
# 2786 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 2787 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED, QUEST_POKEDEX
# 2788 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_PokedexQuestScientist_2
EventScript_PokedexQuestScientist_1:
# 2792 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_1
# 2793 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PokedexQuestScientist_2:
# 2789 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokedexQuestScientist_Text_0
# 2790 "data/scripts/battle_labyrinth.pory"
	startquest QUEST_POKEDEX
	goto EventScript_PokedexQuestScientist_1


EventScript_WarpZone0::
# 2798 "data/scripts/battle_labyrinth.pory"
	closemessage
# 2799 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 2800 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 2801 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_IS_REVISITING_ZONE
# 2802 "data/scripts/battle_labyrinth.pory"
	setvar VAR_REVISITING_ZONE, 0
# 2803 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0A, 1, 255, 255
# 2804 "data/scripts/battle_labyrinth.pory"
	releaseall
	end


EventScript_NuzlockeVerifyBuy::
# 3057 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyBuy_2
EventScript_NuzlockeVerifyBuy_1:
	return

EventScript_NuzlockeVerifyBuy_2:
# 3058 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3059 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyBuy_4
	goto EventScript_NuzlockeVerifyBuy_1

EventScript_NuzlockeVerifyBuy_4:
# 3060 "data/scripts/battle_labyrinth.pory"
	hidemoneybox
# 3061 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_NuzlockeVerifyGift::
# 3069 "data/scripts/battle_labyrinth.pory"
	goto_if_set FLAG_SETTINGS_NUZLOCKE, EventScript_NuzlockeVerifyGift_2
EventScript_NuzlockeVerifyGift_1:
	return

EventScript_NuzlockeVerifyGift_2:
# 3070 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_NuzlockeVerifyBuy_Text_0, MSGBOX_YESNO
# 3071 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_NuzlockeVerifyGift_4
	goto EventScript_NuzlockeVerifyGift_1

EventScript_NuzlockeVerifyGift_4:
# 3072 "data/scripts/battle_labyrinth.pory"
	release
	end


EventScript_PorygonExit::
# 3080 "data/scripts/battle_labyrinth.pory"
	lock
# 3081 "data/scripts/battle_labyrinth.pory"
	faceplayer
# 3082 "data/scripts/battle_labyrinth.pory"
	compare VAR_REVISITING_ZONE, 0
	goto_if_ne EventScript_PorygonExit_2
EventScript_PorygonExit_1:
# 3085 "data/scripts/battle_labyrinth.pory"
	call EventScript_MandatoryCheck
# 3086 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PorygonExit_Text_0, MSGBOX_YESNO
# 3087 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_PorygonExit_5
EventScript_PorygonExit_4:
# 3157 "data/scripts/battle_labyrinth.pory"
	release
	end

EventScript_PorygonExit_2:
# 3083 "data/scripts/battle_labyrinth.pory"
	goto EventScript_WarpZone0
	goto EventScript_PorygonExit_1

EventScript_PorygonExit_5:
# 3088 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3089 "data/scripts/battle_labyrinth.pory"
	playmoncry SPECIES_PORYGON, 0
# 3090 "data/scripts/battle_labyrinth.pory"
	waitmoncry
# 3091 "data/scripts/battle_labyrinth.pory"
	switch VAR_ZONE
# 3092 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_PorygonExit_8
# 3095 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_PorygonExit_9
# 3098 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_PorygonExit_10
# 3102 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_PorygonExit_11
# 3105 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_PorygonExit_12
# 3108 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_PorygonExit_13
# 3112 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_PorygonExit_14
# 3116 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_PorygonExit_15
# 3119 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_PorygonExit_16
# 3123 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_PorygonExit_17
# 3126 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_PorygonExit_18
# 3131 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_PorygonExit_19
# 3134 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_PorygonExit_20
# 3137 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_PorygonExit_21
# 3140 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_PorygonExit_22
# 3143 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_PorygonExit_23
# 3147 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_PorygonExit_24
# 3148 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_PorygonExit_24
# 3149 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_PorygonExit_24
# 3150 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_PorygonExit_24
# 3151 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_PorygonExit_24
# 3152 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_PorygonExit_24
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_8:
# 3093 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3094 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_9:
# 3096 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3097 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_10:
# 3099 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE2A_MAX
# 3100 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3101 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_11:
# 3103 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3104 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_12:
# 3106 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3107 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_13:
# 3109 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE6A_MAX
# 3110 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3111 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_14:
# 3113 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 3114 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3115 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_15:
# 3117 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 3118 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_16:
# 3120 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE10A_MAX
# 3121 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE10SANCTUARY, 255, 38, 11
# 3122 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_17:
# 3124 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE11SANCTUARY, 255, 38, 11
# 3125 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_18:
# 3127 "data/scripts/battle_labyrinth.pory"
	clearflag FLAG_SYS_NO_BAG_START_MENU
# 3128 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE12A_NURSE
# 3129 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE12SANCTUARY, 255, 38, 11
# 3130 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_19:
# 3132 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE14SANCTUARY, 255, 38, 11
# 3133 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_20:
# 3135 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE15SANCTUARY, 255, 38, 11
# 3136 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_21:
# 3138 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE16SANCTUARY, 255, 38, 11
# 3139 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_22:
# 3141 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE17SANCTUARY, 255, 38, 11
# 3142 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_23:
# 3144 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_HIDE_ZONE18A_MAX
# 3145 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE19SANCTUARY, 255, 38, 11
# 3146 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4

EventScript_PorygonExit_24:
# 3153 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3154 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_PorygonExit_4


# 3161 "data/scripts/battle_labyrinth.pory"

# 3162 "data/scripts/battle_labyrinth.pory"
EventScript_ExitSign::
# 3163 "data/scripts/battle_labyrinth.pory"
	msgbox gText_ExitSign, MSGBOX_SIGN
# 3164 "data/scripts/battle_labyrinth.pory"
	end

EventScript_ShakeTree::
# 3168 "data/scripts/battle_labyrinth.pory"
	lockall
# 3169 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_0, MSGBOX_YESNO
# 3170 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ShakeTree_2
# 3175 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_1, MSGBOX_DEFAULT
# 3176 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3177 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8004, 1
# 3178 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8005, 1
# 3179 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8006, 8
# 3180 "data/scripts/battle_labyrinth.pory"
	setvar VAR_0x8007, 5
# 3181 "data/scripts/battle_labyrinth.pory"
	special ShakeCamera
# 3182 "data/scripts/battle_labyrinth.pory"
	playse SE_M_BIND
# 3183 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3184 "data/scripts/battle_labyrinth.pory"
	waitse
# 3185 "data/scripts/battle_labyrinth.pory"
	special HeadbuttWildEncounter
# 3186 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_ShakeTree_5
# 3188 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_BRUTAL, EventScript_ShakeTree_7
EventScript_ShakeTree_4:
# 3264 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_2:
# 3171 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3172 "data/scripts/battle_labyrinth.pory"
	releaseall
	end

EventScript_ShakeTree_5:
# 3187 "data/scripts/battle_labyrinth.pory"
	waitstate
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_6:
# 3189 "data/scripts/battle_labyrinth.pory"
	random 70
# 3190 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3191 "data/scripts/battle_labyrinth.pory"
	case 0, EventScript_ShakeTree_12
# 3192 "data/scripts/battle_labyrinth.pory"
	case 1, EventScript_ShakeTree_12
# 3193 "data/scripts/battle_labyrinth.pory"
	case 2, EventScript_ShakeTree_12
# 3194 "data/scripts/battle_labyrinth.pory"
	case 3, EventScript_ShakeTree_12
# 3195 "data/scripts/battle_labyrinth.pory"
	case 4, EventScript_ShakeTree_12
# 3196 "data/scripts/battle_labyrinth.pory"
	case 5, EventScript_ShakeTree_12
# 3197 "data/scripts/battle_labyrinth.pory"
	case 6, EventScript_ShakeTree_12
# 3198 "data/scripts/battle_labyrinth.pory"
	case 7, EventScript_ShakeTree_12
# 3199 "data/scripts/battle_labyrinth.pory"
	case 8, EventScript_ShakeTree_12
# 3200 "data/scripts/battle_labyrinth.pory"
	case 9, EventScript_ShakeTree_12
# 3201 "data/scripts/battle_labyrinth.pory"
	case 10, EventScript_ShakeTree_12
# 3202 "data/scripts/battle_labyrinth.pory"
	case 11, EventScript_ShakeTree_12
# 3203 "data/scripts/battle_labyrinth.pory"
	case 12, EventScript_ShakeTree_12
# 3204 "data/scripts/battle_labyrinth.pory"
	case 13, EventScript_ShakeTree_12
# 3205 "data/scripts/battle_labyrinth.pory"
	case 14, EventScript_ShakeTree_12
# 3206 "data/scripts/battle_labyrinth.pory"
	case 15, EventScript_ShakeTree_12
# 3207 "data/scripts/battle_labyrinth.pory"
	case 16, EventScript_ShakeTree_12
# 3208 "data/scripts/battle_labyrinth.pory"
	case 17, EventScript_ShakeTree_12
# 3209 "data/scripts/battle_labyrinth.pory"
	case 18, EventScript_ShakeTree_12
# 3210 "data/scripts/battle_labyrinth.pory"
	case 19, EventScript_ShakeTree_12
# 3213 "data/scripts/battle_labyrinth.pory"
	case 20, EventScript_ShakeTree_13
# 3214 "data/scripts/battle_labyrinth.pory"
	case 21, EventScript_ShakeTree_13
# 3215 "data/scripts/battle_labyrinth.pory"
	case 22, EventScript_ShakeTree_13
# 3220 "data/scripts/battle_labyrinth.pory"
	case 23, EventScript_ShakeTree_14
# 3221 "data/scripts/battle_labyrinth.pory"
	case 24, EventScript_ShakeTree_14
# 3222 "data/scripts/battle_labyrinth.pory"
	case 25, EventScript_ShakeTree_14
# 3227 "data/scripts/battle_labyrinth.pory"
	case 26, EventScript_ShakeTree_15
# 3228 "data/scripts/battle_labyrinth.pory"
	case 27, EventScript_ShakeTree_15
# 3229 "data/scripts/battle_labyrinth.pory"
	case 28, EventScript_ShakeTree_15
# 3234 "data/scripts/battle_labyrinth.pory"
	case 29, EventScript_ShakeTree_16
# 3235 "data/scripts/battle_labyrinth.pory"
	case 30, EventScript_ShakeTree_16
# 3236 "data/scripts/battle_labyrinth.pory"
	case 31, EventScript_ShakeTree_16
# 3241 "data/scripts/battle_labyrinth.pory"
	case 32, EventScript_ShakeTree_17
# 3242 "data/scripts/battle_labyrinth.pory"
	case 33, EventScript_ShakeTree_17
# 3243 "data/scripts/battle_labyrinth.pory"
	case 34, EventScript_ShakeTree_17
# 3248 "data/scripts/battle_labyrinth.pory"
	case 35, EventScript_ShakeTree_18
# 3249 "data/scripts/battle_labyrinth.pory"
	case 36, EventScript_ShakeTree_18
# 3250 "data/scripts/battle_labyrinth.pory"
	case 37, EventScript_ShakeTree_18
# 3251 "data/scripts/battle_labyrinth.pory"
	case 38, EventScript_ShakeTree_18
# 3252 "data/scripts/battle_labyrinth.pory"
	case 39, EventScript_ShakeTree_18
# 3257 "data/scripts/battle_labyrinth.pory"
	case 40, EventScript_ShakeTree_19
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_7:
# 3188 "data/scripts/battle_labyrinth.pory"
	goto_if_unset FLAG_SETTINGS_RED_THUMB, EventScript_ShakeTree_6
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_12:
# 3211 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3212 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ORAN_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_13:
# 3216 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_20
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_14:
# 3223 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_22
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_15:
# 3230 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_24
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_16:
# 3237 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_26
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_17:
# 3244 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 2
	goto_if_gt EventScript_ShakeTree_28
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_18:
# 3253 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 8
	goto_if_gt EventScript_ShakeTree_30
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_19:
# 3258 "data/scripts/battle_labyrinth.pory"
	compare VAR_ZONE, 20
	goto_if_gt EventScript_ShakeTree_32
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_20:
# 3217 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3218 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHERI_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_22:
# 3224 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3225 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_CHESTO_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_24:
# 3231 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3232 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PECHA_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_26:
# 3238 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3239 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_ASPEAR_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_28:
# 3245 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3246 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_PERSIM_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_30:
# 3254 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3255 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_SITRUS_BERRY, 1
	goto EventScript_ShakeTree_4

EventScript_ShakeTree_32:
# 3259 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ShakeTree_Text_2
# 3260 "data/scripts/battle_labyrinth.pory"
	finditem ITEM_LUM_BERRY, 1
	goto EventScript_ShakeTree_4


EventScript_HandleFlashlight::
	checkitem ITEM_FLASHLIGHT
# 0 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_HandleFlashlight_2
# 3272 "data/scripts/battle_labyrinth.pory"
	setflashlevel 6
EventScript_HandleFlashlight_1:
	return

EventScript_HandleFlashlight_2:
# 3270 "data/scripts/battle_labyrinth.pory"
	setflashlevel 2
	goto EventScript_HandleFlashlight_1


EventScript_RecoverySign::
# 3278 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3279 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_RecoverySign_Text_0, MSGBOX_SIGN
	end


EventScript_MedicineSign::
# 3284 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3285 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_MedicineSign_Text_0, MSGBOX_SIGN
	end


EventScript_PokeballSign::
# 3290 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3291 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_PokeballSign_Text_0, MSGBOX_SIGN
	end


EventScript_ItemsSign::
# 3296 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3297 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ItemsSign_Text_0, MSGBOX_SIGN
	end


EventScript_BerriesSign::
# 3302 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3303 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_BerriesSign_Text_0, MSGBOX_SIGN
	end


EventScript_EggsSign::
# 3308 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3309 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_EggsSign_Text_0, MSGBOX_SIGN
	end


EventScript_ServicesSign::
# 3314 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3315 "data/scripts/battle_labyrinth.pory"
	msgbox EventScript_ServicesSign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_TPISign::
# 3320 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3321 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_TPISign_Text_0, MSGBOX_SIGN
	end


Zone0A_EventScript_DayCareSign::
# 3326 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3327 "data/scripts/battle_labyrinth.pory"
	msgbox Zone0A_EventScript_DayCareSign_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_Sign_GoldenTree::
# 3332 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3333 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_GoldenTree_Text_0, MSGBOX_SIGN
	end


Zone1A_EventScript_PorygonSign::
# 3338 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3339 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_PorygonSign_Text_0, MSGBOX_DEFAULT
# 3340 "data/scripts/battle_labyrinth.pory"
	showmonpic SPECIES_PORYGON, 10, 3
# 3341 "data/scripts/battle_labyrinth.pory"
	setseenmon SPECIES_PORYGON
# 3342 "data/scripts/battle_labyrinth.pory"
	waitbuttonpress
# 3343 "data/scripts/battle_labyrinth.pory"
	hidemonpic
# 3344 "data/scripts/battle_labyrinth.pory"
	release
	end


Zone1A_EventScript_Sign_RunningShoes::
# 3349 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3350 "data/scripts/battle_labyrinth.pory"
	msgbox Zone1A_EventScript_Sign_RunningShoes_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_Sign::
# 3355 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3356 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_ExpShareSign::
# 3361 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3362 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_ExpShareSign_Text_0, MSGBOX_SIGN
	end


Zone2A_EventScript_CautionSign::
# 3367 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3368 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_CautionSign::
# 3373 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3374 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2A_EventScript_CautionSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_PartySelectSign::
# 3379 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3380 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_PartySelectSign_Text_0, MSGBOX_SIGN
	end


Zone2B_EventScript_OptionalLeviathan::
# 3385 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3386 "data/scripts/battle_labyrinth.pory"
	msgbox Zone2B_EventScript_OptionalLeviathan_Text_0, MSGBOX_SIGN
	end


Zone3A_EventScript_Surveil::
# 3391 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3392 "data/scripts/battle_labyrinth.pory"
	msgbox Zone3A_EventScript_Surveil_Text_0, MSGBOX_SIGN
	end


Zone4A_EventScript_Sign::
# 3397 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3398 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4B_EventScript_Sign::
# 3403 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3404 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4B_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4C_EventScript_Sign::
# 3409 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3410 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4C_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4D_EventScript_Sign::
# 3415 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3416 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4D_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone4E_EventScript_Sign::
# 3421 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3422 "data/scripts/battle_labyrinth.pory"
	msgbox Zone4E_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone6A_EventScript_Sign::
# 3427 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3428 "data/scripts/battle_labyrinth.pory"
	msgbox Zone6A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_Sign::
# 3433 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3434 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone7A_EventScript_HealSign::
# 3439 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3440 "data/scripts/battle_labyrinth.pory"
	msgbox Zone7A_EventScript_HealSign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_Sign::
# 3445 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3446 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Zone9A_EventScript_HerbalSign::
# 3451 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3452 "data/scripts/battle_labyrinth.pory"
	msgbox Zone9A_EventScript_HerbalSign_Text_0, MSGBOX_SIGN
	end


Debug_CheatStart_PBL::
# 3458 "data/scripts/battle_labyrinth.pory"
	random 5
# 3459 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3460 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_3
# 3462 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_4
# 3464 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_5
# 3466 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_6
# 3468 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_7
Debug_CheatStart_PBL_1:
# 3471 "data/scripts/battle_labyrinth.pory"
	random 5
# 3472 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3473 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_10
# 3475 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_11
# 3477 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_12
# 3479 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_13
# 3481 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_14
Debug_CheatStart_PBL_8:
# 3484 "data/scripts/battle_labyrinth.pory"
	random 5
# 3485 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3486 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_17
# 3488 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_18
# 3490 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_19
# 3492 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_20
# 3494 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_21
Debug_CheatStart_PBL_15:
# 3497 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RARE_CANDY, 900
# 3498 "data/scripts/battle_labyrinth.pory"
	removemoney 2000
# 3499 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 6
# 3500 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3501 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3502 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE_0_STATE, 2
# 3503 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE0B_RECEIVED_EEVEE
# 3504 "data/scripts/battle_labyrinth.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE
# 3506 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WAILMER_PAIL
# 3507 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 2
# 3508 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SIGNS
# 3509 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SAVES
# 3510 "data/scripts/battle_labyrinth.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_POKEDEX
# 3511 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_1
# 3512 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_2
# 3513 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_3
# 3514 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_4
# 3515 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_5
# 3516 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_6
# 3517 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_7
# 3518 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_8
# 3519 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_9
# 3521 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 0
# 3522 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_Text_0, MSGBOX_YESNO
# 3523 "data/scripts/battle_labyrinth.pory"
	compare VAR_RESULT, NO
	goto_if_eq Debug_CheatStart_PBL_23
Debug_CheatStart_PBL_22:
# 3526 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 3
# 3527 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3529 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_1
# 3530 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3531 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3532 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_27
# 3534 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_28
# 3537 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_29
Debug_CheatStart_PBL_25:
# 3545 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3547 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_4
# 3548 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_5, Debug_CheatStart_PBL_Text_6
# 3549 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3550 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_32
# 3564 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_33
# 3578 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_34
Debug_CheatStart_PBL_30:
# 3593 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3594 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3595 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE1A_RECEIVED_FWG
# 3596 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_1
# 3598 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_CLAW
# 3599 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EXP_SHARE
# 3600 "data/scripts/battle_labyrinth.pory"
	additem ITEM_INFINITE_REPEL
# 3601 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_10
# 3602 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_11
# 3603 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_12
# 3605 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_7
# 3606 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_8, Debug_CheatStart_PBL_Text_9, Debug_CheatStart_PBL_Text_10
# 3607 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3608 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_37
# 3610 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_38
# 3612 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_39
# 3614 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_40
Debug_CheatStart_PBL_35:
# 3622 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 5
# 3623 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3625 "data/scripts/battle_labyrinth.pory"
	random 10
# 3626 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3627 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_61
# 3629 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_62
# 3631 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_63
# 3633 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_64
# 3635 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_65
# 3637 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_66
# 3639 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_67
# 3641 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_68
# 3643 "data/scripts/battle_labyrinth.pory"
	case 8, Debug_CheatStart_PBL_69
# 3645 "data/scripts/battle_labyrinth.pory"
	case 9, Debug_CheatStart_PBL_70
Debug_CheatStart_PBL_59:
# 3648 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 6
# 3649 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3650 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE2B_NUZLOCKE_BOUGHT_BUG
# 3651 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_2
# 3653 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILK_SCARF
# 3654 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_BUG_BITE
# 3655 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ORAN_BERRY, 5
# 3656 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHERI_BERRY, 2
# 3657 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHESTO_BERRY, 2
# 3658 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RAWST_BERRY, 2
# 3659 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ASPEAR_BERRY, 2
# 3660 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PECHA_BERRY, 2
# 3661 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 3662 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_DEXNAV_SEARCH
# 3663 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_13
# 3664 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_14
# 3665 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_15
# 3666 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_16
# 3667 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_17
# 3669 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_11
# 3670 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3671 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3672 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_73
# 3674 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_74
# 3677 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_75
Debug_CheatStart_PBL_71:
# 3685 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 7
# 3686 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3687 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_3
# 3689 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GOOD_ROD
# 3690 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_18
# 3692 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_12
# 3693 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15, Debug_CheatStart_PBL_Text_16, Debug_CheatStart_PBL_Text_17
# 3694 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3695 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_78
# 3697 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_79
# 3699 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_80
# 3701 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_81
# 3703 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_82
# 3705 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_83
Debug_CheatStart_PBL_76:
# 3713 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 9
# 3714 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3715 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_4
# 3717 "data/scripts/battle_labyrinth.pory"
	random 8
# 3718 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3719 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_86
# 3721 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_87
# 3723 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_88
# 3725 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_89
# 3727 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_90
# 3729 "data/scripts/battle_labyrinth.pory"
	case 5, Debug_CheatStart_PBL_91
# 3731 "data/scripts/battle_labyrinth.pory"
	case 6, Debug_CheatStart_PBL_92
# 3733 "data/scripts/battle_labyrinth.pory"
	case 7, Debug_CheatStart_PBL_93
Debug_CheatStart_PBL_84:
# 3736 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE4A_RECEIVED_GEM
# 3738 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SILVER_POWDER
# 3739 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MUSCLE_BAND
# 3740 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WISE_GLASSES
# 3741 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TWISTED_SPOON
# 3742 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POISON_BARB
# 3743 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_SNARL
# 3744 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_SYS_START_MENU_PC_GET
# 3745 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BURN_HEAL, 2
# 3746 "data/scripts/battle_labyrinth.pory"
	additem ITEM_AWAKENING, 2
# 3747 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_19
# 3748 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_20
# 3749 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_21
# 3750 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_22
# 3751 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_23
# 3753 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_18
# 3754 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_19, Debug_CheatStart_PBL_Text_20
# 3755 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3756 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_96
# 3758 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_97
# 3760 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_98
Debug_CheatStart_PBL_94:
# 3768 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 11
# 3769 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3771 "data/scripts/battle_labyrinth.pory"
	random 5
# 3772 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3773 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_101
# 3775 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_102
# 3777 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_103
# 3779 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_104
# 3781 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_105
Debug_CheatStart_PBL_99:
# 3784 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 12
# 3785 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3786 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE5B_NUZLOCKE_BOUGHT_PIKACLONE
# 3787 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_5
# 3789 "data/scripts/battle_labyrinth.pory"
	additem ITEM_LAX_MINT
# 3790 "data/scripts/battle_labyrinth.pory"
	additem ITEM_QUICK_BALL
# 3791 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MIRACLE_SEED
# 3792 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NORMAL_GEM
# 3793 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BUG_GEM
# 3794 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
# 3795 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GENTLE_MINT
# 3796 "data/scripts/battle_labyrinth.pory"
	additem ITEM_EVIOLITE
# 3797 "data/scripts/battle_labyrinth.pory"
	additem ITEM_RED_SHARD, 5
# 3799 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_21
# 3800 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3801 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3802 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_108
# 3804 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_109
# 3807 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_110
Debug_CheatStart_PBL_106:
# 3815 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 13
# 3816 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3817 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_6
# 3819 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NEST_BALL
# 3820 "data/scripts/battle_labyrinth.pory"
	additem ITEM_NET_BALL
# 3821 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_DRAINING_KISS
# 3822 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
# 3823 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FLYING_GEM
# 3824 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
# 3825 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SLEDGEHAMMER
# 3826 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 1
# 3827 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_24
# 3829 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_22
# 3830 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_3
# 3831 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3832 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_113
# 3834 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_114
# 3837 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_115
Debug_CheatStart_PBL_111:
# 3845 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 15
# 3846 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3848 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_23
# 3849 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_13, Debug_CheatStart_PBL_Text_14, Debug_CheatStart_PBL_Text_15
# 3850 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3851 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_118
# 3853 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_119
# 3855 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_120
Debug_CheatStart_PBL_116:
# 3858 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 16
# 3859 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3860 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_7
# 3861 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_8
# 3863 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SHARP_BEAK
# 3864 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ROCK_GEM
# 3865 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIGHTING_GEM
# 3866 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
# 3867 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SERIOUS_MINT
# 3868 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BLACK_BELT
# 3869 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SITRUS_BERRY, 5
# 3870 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MAGNET
# 3871 "data/scripts/battle_labyrinth.pory"
	additem ITEM_HARD_STONE
# 3872 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DUSK_BALL
# 3873 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FULL_HEAL
# 3874 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_THIEF
# 3875 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_ROCK_TOMB
# 3876 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PARALYZE_HEAL, 2
# 3877 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ANTIDOTE, 2
# 3878 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GREAT_BALL
# 3879 "data/scripts/battle_labyrinth.pory"
	additem ITEM_POTION, 5
# 3880 "data/scripts/battle_labyrinth.pory"
	additem ITEM_SUPER_POTION, 2
# 3881 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MACHETE
# 3882 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_HIDDEN_POWER
# 3883 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_25
# 3884 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_26
# 3886 "data/scripts/battle_labyrinth.pory"
	message Debug_CheatStart_PBL_Text_24
# 3887 "data/scripts/battle_labyrinth.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, Debug_CheatStart_PBL_Text_2, Debug_CheatStart_PBL_Text_6
# 3888 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3889 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_123
# 3891 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_124
# 3894 "data/scripts/battle_labyrinth.pory"
	case MULTI_B_PRESSED, Debug_CheatStart_PBL_125
Debug_CheatStart_PBL_121:
# 3902 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 18
# 3903 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GenerateMon
# 3904 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_PBL, SUB_QUEST_9
# 3906 "data/scripts/battle_labyrinth.pory"
	additem ITEM_BIG_ROOT
# 3907 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_PLUCK
# 3908 "data/scripts/battle_labyrinth.pory"
	additem ITEM_MYSTIC_WATER
# 3909 "data/scripts/battle_labyrinth.pory"
	additem ITEM_CHARCOAL
# 3910 "data/scripts/battle_labyrinth.pory"
	additem ITEM_TM_RETALIATE
# 3911 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_27
# 3912 "data/scripts/battle_labyrinth.pory"
	completesubquest QUEST_SIGNS, SUB_QUEST_28
# 3914 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SQUAWKABILLY
# 3915 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_1, 20
# 3916 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
# 3917 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_ZONE9E_RECEIVED_SQUAWKABILLY
# 3919 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 10
# 3920 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 21
# 3921 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE9SANCTUARY, 255, 38, 11
# 3922 "data/scripts/battle_labyrinth.pory"
	waitstate
# 3923 "data/scripts/battle_labyrinth.pory"
	closemessage
	return

Debug_CheatStart_PBL_3:
# 3461 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 0
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_4:
# 3463 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 1
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_5:
# 3465 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 2
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_6:
# 3467 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 3
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_7:
# 3469 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TRAINER_MUSIC, 4
	goto Debug_CheatStart_PBL_1

Debug_CheatStart_PBL_10:
# 3474 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 0
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_11:
# 3476 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 1
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_12:
# 3478 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 2
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_13:
# 3480 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 3
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_14:
# 3482 "data/scripts/battle_labyrinth.pory"
	setvar VAR_WILD_MUSIC, 4
	goto Debug_CheatStart_PBL_8

Debug_CheatStart_PBL_17:
# 3487 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 0
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_18:
# 3489 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 1
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_19:
# 3491 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 2
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_20:
# 3493 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 3
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_21:
# 3495 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVIATHAN_MUSIC, 4
	goto Debug_CheatStart_PBL_15

Debug_CheatStart_PBL_23:
# 3524 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_22

Debug_CheatStart_PBL_27:
# 3533 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_28:
# 3535 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 1
# 3536 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_25

Debug_CheatStart_PBL_29:
# 3538 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3539 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 1
# 3540 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 7
# 3541 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE0SANCTUARY, 255, 38, 11
# 3542 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_32:
# 3551 "data/scripts/battle_labyrinth.pory"
	random 5
# 3552 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3553 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_42
# 3555 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_43
# 3557 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_44
# 3559 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_45
# 3561 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_46
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_33:
# 3565 "data/scripts/battle_labyrinth.pory"
	random 5
# 3566 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3567 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_48
# 3569 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_49
# 3571 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_50
# 3573 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_51
# 3575 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_52
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_34:
# 3579 "data/scripts/battle_labyrinth.pory"
	random 5
# 3580 "data/scripts/battle_labyrinth.pory"
	switch VAR_RESULT
# 3581 "data/scripts/battle_labyrinth.pory"
	case 0, Debug_CheatStart_PBL_54
# 3583 "data/scripts/battle_labyrinth.pory"
	case 1, Debug_CheatStart_PBL_55
# 3585 "data/scripts/battle_labyrinth.pory"
	case 2, Debug_CheatStart_PBL_56
# 3587 "data/scripts/battle_labyrinth.pory"
	case 3, Debug_CheatStart_PBL_57
# 3589 "data/scripts/battle_labyrinth.pory"
	case 4, Debug_CheatStart_PBL_58
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_37:
# 3609 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 2
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_38:
# 3611 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 4
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_39:
# 3613 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 3
	goto Debug_CheatStart_PBL_35

Debug_CheatStart_PBL_40:
# 3615 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3616 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 2
# 3617 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 9
# 3618 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE1SANCTUARY, 255, 38, 11
# 3619 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_42:
# 3554 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSAGE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_43:
# 3556 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_HOPPIP
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_44:
# 3558 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SUNKERN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_45:
# 3560 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SMOLIV
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_46:
# 3562 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BOUNSWEET
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_48:
# 3568 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANSEAR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_49:
# 3570 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SLUGMA
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_50:
# 3572 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SALANDIT
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_51:
# 3574 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VULPIX
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_52:
# 3576 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SIZZLIPEDE
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_54:
# 3582 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PANPOUR
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_55:
# 3584 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_BARBOACH
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_56:
# 3586 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_FINNEON
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_57:
# 3588 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEEL
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_58:
# 3590 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_GOLDEEN
	goto Debug_CheatStart_PBL_30

Debug_CheatStart_PBL_61:
# 3628 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SEWADDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_62:
# 3630 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_63:
# 3632 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_LEDYBA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_64:
# 3634 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_VENIPEDE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_65:
# 3636 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_NINCADA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_66:
# 3638 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_CATERPIE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_67:
# 3640 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_WEEDLE
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_68:
# 3642 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_TAROUNTULA
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_69:
# 3644 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_KRICKETOT
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_70:
# 3646 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PARAS
	goto Debug_CheatStart_PBL_59

Debug_CheatStart_PBL_73:
# 3673 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_74:
# 3675 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 5
# 3676 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_71

Debug_CheatStart_PBL_75:
# 3678 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3679 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 3
# 3680 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 11
# 3681 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE2SANCTUARY, 255, 38, 11
# 3682 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_78:
# 3696 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 6
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_79:
# 3698 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 7
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_80:
# 3700 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 8
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_81:
# 3702 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 9
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_82:
# 3704 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 10
	goto Debug_CheatStart_PBL_76

Debug_CheatStart_PBL_83:
# 3706 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3707 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 4
# 3708 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3709 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE3SANCTUARY, 255, 38, 11
# 3710 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_86:
# 3720 "data/scripts/battle_labyrinth.pory"
	additem ITEM_WATER_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_87:
# 3722 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ELECTRIC_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_88:
# 3724 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FIRE_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_89:
# 3726 "data/scripts/battle_labyrinth.pory"
	additem ITEM_PSYCHIC_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_90:
# 3728 "data/scripts/battle_labyrinth.pory"
	additem ITEM_DARK_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_91:
# 3730 "data/scripts/battle_labyrinth.pory"
	additem ITEM_GRASS_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_92:
# 3732 "data/scripts/battle_labyrinth.pory"
	additem ITEM_ICE_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_93:
# 3734 "data/scripts/battle_labyrinth.pory"
	additem ITEM_FAIRY_GEM
	goto Debug_CheatStart_PBL_84

Debug_CheatStart_PBL_96:
# 3757 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 11
	goto Debug_CheatStart_PBL_94

Debug_CheatStart_PBL_97:
# 3759 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 12
	goto Debug_CheatStart_PBL_94

Debug_CheatStart_PBL_98:
# 3761 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3762 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 5
# 3763 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 13
# 3764 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE4SANCTUARY, 255, 38, 11
# 3765 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_101:
# 3774 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PACHIRISU
	goto Debug_CheatStart_PBL_99

Debug_CheatStart_PBL_102:
# 3776 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_DEDENNE
	goto Debug_CheatStart_PBL_99

Debug_CheatStart_PBL_103:
# 3778 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MORPEKO
	goto Debug_CheatStart_PBL_99

Debug_CheatStart_PBL_104:
# 3780 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_PLUSLE
	goto Debug_CheatStart_PBL_99

Debug_CheatStart_PBL_105:
# 3782 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, SPECIES_MINUN
	goto Debug_CheatStart_PBL_99

Debug_CheatStart_PBL_108:
# 3803 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_109:
# 3805 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 13
# 3806 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_106

Debug_CheatStart_PBL_110:
# 3808 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3809 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 6
# 3810 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 15
# 3811 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE5SANCTUARY, 255, 38, 11
# 3812 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_113:
# 3833 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_114:
# 3835 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 14
# 3836 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_111

Debug_CheatStart_PBL_115:
# 3838 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3839 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 7
# 3840 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 17
# 3841 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE6SANCTUARY, 255, 38, 11
# 3842 "data/scripts/battle_labyrinth.pory"
	waitstate
	end

Debug_CheatStart_PBL_118:
# 3852 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 15
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_119:
# 3854 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 16
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_120:
# 3856 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 17
	goto Debug_CheatStart_PBL_116

Debug_CheatStart_PBL_123:
# 3890 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
	goto Debug_CheatStart_PBL_121

Debug_CheatStart_PBL_124:
# 3892 "data/scripts/battle_labyrinth.pory"
	setvar VAR_TEMP_0, 18
# 3893 "data/scripts/battle_labyrinth.pory"
	setflag FLAG_TEMP_1
	goto Debug_CheatStart_PBL_121

Debug_CheatStart_PBL_125:
# 3895 "data/scripts/battle_labyrinth.pory"
	closemessage
# 3896 "data/scripts/battle_labyrinth.pory"
	setvar VAR_ZONE, 9
# 3897 "data/scripts/battle_labyrinth.pory"
	setvar VAR_LEVEL_CAP, 20
# 3898 "data/scripts/battle_labyrinth.pory"
	warp MAP_ZONE8SANCTUARY, 255, 38, 11
# 3899 "data/scripts/battle_labyrinth.pory"
	waitstate
	end


Debug_CheatStart_PBL_GenerateMon::
# 3927 "data/scripts/battle_labyrinth.pory"
	callnative DebugCheatStartGenerateMon
# 3928 "data/scripts/battle_labyrinth.pory"
	call Debug_CheatStart_PBL_GiveMon
	return


Debug_CheatStart_PBL_GiveMon::
# 3932 "data/scripts/battle_labyrinth.pory"
	givemon VAR_TEMP_0, VAR_TEMP_1, ITEM_NONE
# 3933 "data/scripts/battle_labyrinth.pory"
	bufferspeciesname 0, VAR_TEMP_0
# 3934 "data/scripts/battle_labyrinth.pory"
	msgbox Debug_CheatStart_PBL_GiveMon_Text_0
	return


EventScript_ConsumablesSign_Text_0:
# 136 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Items\nA Fine Collection!$"

EventScript_Shop_Portentia_Text_0:
# 148 "data/scripts/battle_labyrinth.pory"
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
# 152 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: It's good to see you again. I\n"
	.string "have a new discount option available in\l"
	.string "my shop.\p"
	.string "If you buy 10 Potions, you will receive a\n"
	.string "free Super Potion.\p"
	.string "I hope that is a most compelling deal.$"

EventScript_Shop_Portentia_Text_2:
# 155 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Welcome, {PLAYER}. What\n"
	.string "are you looking for?$"

EventScript_Shop_Portentia_Text_3:
# 186 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Portentia{COLOR DARK_GRAY}: Travel safe.$"

EventScript_Shop_Tim_Text_0:
# 220 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hey there! The name's Tim Johnson.\p"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: I run this store, sponsored by\n"
	.string "Pokémart Incorporated.\p"
	.string "You can find all variants of Pokéballs\n"
	.string "for your travels.$"

EventScript_Shop_Tim_Text_1:
# 223 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Welcome to Tim's. Can I get you\n"
	.string "anything?$"

EventScript_Shop_Tim_Text_2:
# 255 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Tim{COLOR DARK_GRAY}: Have a nice day!$"

EventScript_Shop_Varrick_Text_0:
# 290 "data/scripts/battle_labyrinth.pory"
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
# 302 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: Salutations! Welcome to\n"
	.string "Varrick's Extravagant Emporium!$"

EventScript_Shop_Varrick_Text_2:
# 341 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Varrick{COLOR DARK_GRAY}: A big thank you from me!$"

EventScript_Shop_Julia_Text_0:
# 674 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hi there! I'm Julia.\p"
	.string "I sell delicious berries for your\n"
	.string "Pokémon.\p"
	.string "They smell and taste amazing, and\n"
	.string "they're healthy too!$"

EventScript_Shop_Julia_Text_1:
# 679 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Greetings! Want to get some\n"
	.string "Berries for your Pokémon?$"

EventScript_Shop_Julia_Text_2:
# 710 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Julia{COLOR DARK_GRAY}: Eat well, and stay healthy!$"

EventScript_Shop_Marie_Text_0:
# 743 "data/scripts/battle_labyrinth.pory"
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
# 752 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Au revoir!$"

EventScript_Shop_Marie_MainMenu_Text_0:
# 757 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Hi. Are you ready to meet your\n"
	.string "next friend?$"

EventScript_Shop_Marie_MainMenu_Text_1:
# 759 "data/scripts/battle_labyrinth.pory"
	.string "Eggs$"

EventScript_Shop_Marie_MainMenu_Text_2:
# 759 "data/scripts/battle_labyrinth.pory"
	.string "Info$"

EventScript_Shop_Marie_MainMenu_Text_3:
# 759 "data/scripts/battle_labyrinth.pory"
	.string "Exit$"

EventScript_Shop_Marie_MainMenu_Text_4:
# 764 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You've already received an Egg\n"
	.string "from our services. On Nuzlocke mode,\l"
	.string "you can only get one Egg.$"

EventScript_Shop_Marie_MainMenu_Text_5:
# 768 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: I actually don't have any Eggs at\n"
	.string "the moment.\p"
	.string "Come back again another time!$"

EventScript_Shop_Marie_MainMenu_Text_6:
# 771 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Which type of Egg would you like?$"

EventScript_Shop_Marie_MainMenu_Text_7:
# 774 "data/scripts/battle_labyrinth.pory"
	.string "Elemental Monkey - ¥1000$"

EventScript_Shop_Marie_MainMenu_Text_8:
# 777 "data/scripts/battle_labyrinth.pory"
	.string "Regional Form - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_9:
# 780 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 1 - ¥3000$"

EventScript_Shop_Marie_MainMenu_Text_10:
# 783 "data/scripts/battle_labyrinth.pory"
	.string "Baby Pokémon 2 - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_11:
# 786 "data/scripts/battle_labyrinth.pory"
	.string "Kanto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_12:
# 787 "data/scripts/battle_labyrinth.pory"
	.string "Johto Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_13:
# 788 "data/scripts/battle_labyrinth.pory"
	.string "Hoenn Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_14:
# 789 "data/scripts/battle_labyrinth.pory"
	.string "Sinnoh Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_15:
# 790 "data/scripts/battle_labyrinth.pory"
	.string "Unova Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_16:
# 791 "data/scripts/battle_labyrinth.pory"
	.string "Kalos Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_17:
# 792 "data/scripts/battle_labyrinth.pory"
	.string "Alola Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_18:
# 793 "data/scripts/battle_labyrinth.pory"
	.string "Galar Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_19:
# 794 "data/scripts/battle_labyrinth.pory"
	.string "Paldea Starter - ¥10000$"

EventScript_Shop_Marie_MainMenu_Text_20:
# 796 "data/scripts/battle_labyrinth.pory"
	.string "Back$"

EventScript_Shop_Marie_MainMenu_Text_21:
# 801 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Pansage, Pansear,\n"
	.string "or Panpour will cost ¥1000.$"

EventScript_Shop_Marie_MainMenu_Text_22:
# 809 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Alolan Meowth,\n"
	.string "Galarian Zigzagoon, Hisuian Voltorb, or\l"
	.string "Paldean Wooper will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_23:
# 817 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Smoochum, Elekid,\n"
	.string "or Magby will cost ¥3000.$"

EventScript_Shop_Marie_MainMenu_Text_24:
# 825 "data/scripts/battle_labyrinth.pory"
	.string "An egg that contains Happiny, Togepi,\n"
	.string "Munchlax, or Riolu will cost ¥10000.$"

EventScript_Shop_Marie_MainMenu_Text_25:
# 836 "data/scripts/battle_labyrinth.pory"
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
# 838 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: On Nuzlocke mode, you can only\n"
	.string "obtain one Egg in total.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_0:
# 847 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_1:
# 853 "data/scripts/battle_labyrinth.pory"
	.string "Your party is full. Choose a Pokémon to\n"
	.string "send to the PC.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_2:
# 866 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you want to send your\n"
	.string "{STR_VAR_3} to the PC?$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_3:
# 881 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Thank you very much…$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_4:
# 894 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Marie{COLOR DARK_GRAY}: Here's your Egg.$"

EventScript_Shop_Marie_ElementalMonkeyEgg_Text_5:
# 896 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} received the Egg!$"

EventScript_Shop_Lelouch_Text_0:
# 1080 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You… What is your name?\p{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}? Curious…\nThat's a funny name…$"

EventScript_Shop_Lelouch_Text_1:
# 1082 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: You may call me Lelouch.\p{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I provide a variety of\nservices to improve one's Pokémon.$"

EventScript_Shop_Lelouch_Text_2:
# 1086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I demand a special price\nfor my services, one that I see you\lcannot pay. Leave.$"

EventScript_Shop_Lelouch_Text_3:
# 1091 "data/scripts/battle_labyrinth.pory"
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
# 1104 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: For the right price…\nWelcome to Lelouch's Special Services.$"

EventScript_Shop_Lelouch_Text_5:
# 1105 "data/scripts/battle_labyrinth.pory"
	.string "Training - Red$"

EventScript_Shop_Lelouch_Text_6:
# 1105 "data/scripts/battle_labyrinth.pory"
	.string "Moves - Blue$"

EventScript_Shop_Lelouch_Text_7:
# 1105 "data/scripts/battle_labyrinth.pory"
	.string "Improvement - Yellow$"

EventScript_Shop_Lelouch_Text_8:
# 1105 "data/scripts/battle_labyrinth.pory"
	.string "Other - Green$"

EventScript_Shop_Lelouch_Text_9:
# 1116 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

EventScript_Shop_Lelouch_Training_Text_0:
# 1134 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Choose which training\nregiment you would like.$"

EventScript_Shop_Lelouch_Training_Text_1:
# 1135 "data/scripts/battle_labyrinth.pory"
	.string "Experience Training$"

EventScript_Shop_Lelouch_Training_Text_2:
# 1137 "data/scripts/battle_labyrinth.pory"
	.string "EV Training$"

EventScript_Shop_Lelouch_Training_Text_3:
# 1166 "data/scripts/battle_labyrinth.pory"
	.string "I can't train an Egg!$"

EventScript_Shop_Lelouch_Training_Text_4:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "252$"

EventScript_Shop_Lelouch_Training_Text_5:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "200$"

EventScript_Shop_Lelouch_Training_Text_6:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "100$"

EventScript_Shop_Lelouch_Training_Text_7:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "4$"

EventScript_Shop_Lelouch_Training_Text_8:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "0$"

EventScript_Shop_Lelouch_Training_Text_9:
# 1172 "data/scripts/battle_labyrinth.pory"
	.string "Cancel$"

EventScript_Shop_Lelouch_Moves_Text_0:
# 1368 "data/scripts/battle_labyrinth.pory"
	.string "Move Tutor$"

EventScript_Shop_Lelouch_Moves_Text_1:
# 1368 "data/scripts/battle_labyrinth.pory"
	.string "Move Reminder$"

EventScript_Shop_Lelouch_MoveReminder_Text_0:
# 1381 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Reminder services cost\n"
	.string "one Blue Shard.\p"
	.string "Would you like me to teach a forgotten\n"
	.string "move to your Pokémon?$"

EventScript_Shop_Lelouch_MoveReminder_Text_1:
# 1386 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should\nrelearn a move?$"

EventScript_Shop_Lelouch_MoveReminder_Text_2:
# 1394 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That is an Egg.$"

EventScript_Shop_Lelouch_MoveReminder_Text_3:
# 1398 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: That Pokémon cannot\nrelearn any moves.$"

EventScript_Shop_Lelouch_MoveReminder_Text_4:
# 1401 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which move should it\nrelearn?$"

EventScript_Shop_Lelouch_Improvement_Text_0:
# 1420 "data/scripts/battle_labyrinth.pory"
	.string "Filler text for EventScript_Shop_Lelouch_Improvement$"

EventScript_Shop_Lelouch_MoveTutor_Text_0:
# 1425 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Move Tutor services cost Blue\n"
	.string "Shards. Which move would you like to\l"
	.string "tutor?$"

EventScript_Shop_Lelouch_MoveTutor_Text_1:
# 1427 "data/scripts/battle_labyrinth.pory"
	.string "Icy Wind$"

EventScript_Shop_Lelouch_MoveTutor_Text_2:
# 1428 "data/scripts/battle_labyrinth.pory"
	.string "Grass Knot$"

EventScript_Shop_Lelouch_MoveTutor_Text_3:
# 1429 "data/scripts/battle_labyrinth.pory"
	.string "Low Kick$"

EventScript_Shop_Lelouch_MoveTutor_Text_4:
# 1430 "data/scripts/battle_labyrinth.pory"
	.string "Fire Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_5:
# 1431 "data/scripts/battle_labyrinth.pory"
	.string "Ice Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_6:
# 1432 "data/scripts/battle_labyrinth.pory"
	.string "Thunder Fang$"

EventScript_Shop_Lelouch_MoveTutor_Text_7:
# 1433 "data/scripts/battle_labyrinth.pory"
	.string "Heal Bell$"

EventScript_Shop_Lelouch_MoveTutor_Text_8:
# 1434 "data/scripts/battle_labyrinth.pory"
	.string "Helping Hand$"

EventScript_Shop_Lelouch_MoveTutor_Text_9:
# 1435 "data/scripts/battle_labyrinth.pory"
	.string "Sleep Talk$"

EventScript_Shop_Lelouch_MoveTutor_Text_10:
# 1436 "data/scripts/battle_labyrinth.pory"
	.string "Taunt$"

EventScript_Shop_Lelouch_MoveTutor_Text_11:
# 1575 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You want to teach the move\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_MoveTutor_Text_12:
# 1579 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which Pokémon should learn\n{STR_VAR_1}?$"

EventScript_Shop_Lelouch_Other_Text_0:
# 1597 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I offer nature changing\n"
	.string "services at the cost of one Green\l"
	.string "Shard.\p"
	.string "First, choose a Pokémon.$"

EventScript_Shop_Lelouch_Other_Text_1:
# 1605 "data/scripts/battle_labyrinth.pory"
	.string "No eggs!$"

EventScript_Shop_Lelouch_Other_Text_2:
# 1610 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Which nature would you like\n"
	.string "your {STR_VAR_1} to have?$"

EventScript_Shop_Lelouch_Other_Text_3:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Lonely$"

EventScript_Shop_Lelouch_Other_Text_4:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Adamant$"

EventScript_Shop_Lelouch_Other_Text_5:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Naughty$"

EventScript_Shop_Lelouch_Other_Text_6:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Brave$"

EventScript_Shop_Lelouch_Other_Text_7:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Bold$"

EventScript_Shop_Lelouch_Other_Text_8:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Impish$"

EventScript_Shop_Lelouch_Other_Text_9:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Lax$"

EventScript_Shop_Lelouch_Other_Text_10:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Relaxed$"

EventScript_Shop_Lelouch_Other_Text_11:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Modest$"

EventScript_Shop_Lelouch_Other_Text_12:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Mild$"

EventScript_Shop_Lelouch_Other_Text_13:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Rash$"

EventScript_Shop_Lelouch_Other_Text_14:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Quiet$"

EventScript_Shop_Lelouch_Other_Text_15:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Calm$"

EventScript_Shop_Lelouch_Other_Text_16:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Gentle$"

EventScript_Shop_Lelouch_Other_Text_17:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Careful$"

EventScript_Shop_Lelouch_Other_Text_18:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Sassy$"

EventScript_Shop_Lelouch_Other_Text_19:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Timid$"

EventScript_Shop_Lelouch_Other_Text_20:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Hasty$"

EventScript_Shop_Lelouch_Other_Text_21:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Jolly$"

EventScript_Shop_Lelouch_Other_Text_22:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Naive$"

EventScript_Shop_Lelouch_Other_Text_23:
# 1611 "data/scripts/battle_labyrinth.pory"
	.string "Serious$"

EventScript_Shop_Lelouch_Other_Text_24:
# 1615 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lonely, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_25:
# 1621 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Adamant, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_26:
# 1627 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naughty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_27:
# 1633 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Brave, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_28:
# 1639 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Bold, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_29:
# 1645 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Impish, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_30:
# 1651 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Lax, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_31:
# 1657 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Relaxed, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_32:
# 1663 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Modest, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_33:
# 1669 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Mild, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_34:
# 1675 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Rash, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_35:
# 1681 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Quiet, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_36:
# 1687 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Calm, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_37:
# 1693 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Gentle, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_38:
# 1699 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Careful, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_39:
# 1705 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Sassy, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_40:
# 1711 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Timid, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_41:
# 1717 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Hasty, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_42:
# 1723 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Jolly, it will\l"
	.string "cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_43:
# 1729 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Naive, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Lelouch_Other_Text_44:
# 1735 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: If you'd like to change your\n"
	.string "{STR_VAR_1}'s nature to Serious, it\l"
	.string "will cost one Green Shard.$"

EventScript_Shop_Joy_Text_0:
# 1762 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: Welcome to the Pokémon… Ugh.\n"
	.string "Never mind.\p"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: My name is Joy. Just Joy.\p"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: I used to work at the Pokémon\n"
	.string "Center, but they gave terrible pay.\p"
	.string "So now, this shop, Joy's Center of\n"
	.string "Restoration, is my own!$"

EventScript_Shop_Joy_Text_1:
# 1765 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party and PC for a\n"
	.string "flat ¥2000 fee.$"

EventScript_Shop_Joy_Text_2:
# 1767 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Welcome to Joy's Center of\n"
	.string "Restoration.\p"
	.string "We heal your entire party for a flat\n"
	.string "¥1000 fee.$"

EventScript_Shop_Joy_Text_3:
# 1770 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Should I heal your Pokémon?$"

EventScript_Shop_Joy_Text_4:
# 1778 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: You don't have enough money.$"

EventScript_Shop_Joy_Text_5:
# 1783 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥2000, thank you…$"

EventScript_Shop_Joy_Text_6:
# 1789 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: All of your Pokémon have been\n"
	.string "restored.$"

EventScript_Shop_Joy_Text_7:
# 1800 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: That will be ¥1000, thank you…$"

EventScript_Shop_Joy_Text_8:
# 1806 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: Your party has been restored.$"

EventScript_Shop_Joy_Text_9:
# 1811 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Joy{COLOR DARK_GRAY}: See you next time.$"

EventScript_MandatoryCheck_Text_0:
# 1833 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}You haven't defeated all the opponents\n"
	.string "in the area yet.$"

EventScript_Max_Text_0:
# 1863 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}???{COLOR DARK_GRAY}: By my calculations, you should be\n"
	.string "{PLAYER}!\p"
	.string "Hi, {PLAYER}! My name is {COLOR BLUE}Max{COLOR DARK_GRAY}.$"

EventScript_Max_Text_1:
# 1864 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: I am a traveling merchant, selling\n"
	.string "special Technical Machines for you to\l"
	.string "use!\p"
	.string "I travel a lot, never going to the same\n"
	.string "place again.\p"
	.string "I'll have different wares every time you\n"
	.string "see me, so be sure to buy whatever TMs\l"
	.string "you deem important!$"

EventScript_Max_Text_2:
# 1867 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Hi {PLAYER}! Long time no see!\p"
	.string "Welcome to my TM shop!$"

EventScript_Max_Text_3:
# 1879 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Max{COLOR DARK_GRAY}: Goodbye!$"

EventScript_LeavingSetup_Text_0:
# 1908 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Colress{COLOR DARK_GRAY}: Bring out the strength of you\n"
	.string "and your Pokémon!$"

EventScript_SanctuaryToZone0_Text_0:
# 2006 "data/scripts/battle_labyrinth.pory"
	.string "Go to Zone 0?$"

EventScript_Documentation_Text_0:
# 2020 "data/scripts/battle_labyrinth.pory"
	.string "This is version 1.4.0 of the Pokémon\n"
	.string "Battle Labyrinth.\p"
	.string "Make sure you're playing the most up to\n"
	.string "date version!$"

EventScript_Settings_Text_0:
# 2059 "data/scripts/battle_labyrinth.pory"
	.string "Choose a setting to adjust.\n{COLOR RED}Red{COLOR DARK_GRAY} means enabled.$"

EventScript_Settings_Text_1:
# 2062 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal$"

EventScript_Settings_Text_2:
# 2064 "data/scripts/battle_labyrinth.pory"
	.string "Brutal$"

EventScript_Settings_Text_3:
# 2067 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke$"

EventScript_Settings_Text_4:
# 2069 "data/scripts/battle_labyrinth.pory"
	.string "Nuzlocke$"

EventScript_Settings_Text_5:
# 2072 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer$"

EventScript_Settings_Text_6:
# 2074 "data/scripts/battle_labyrinth.pory"
	.string "Randomizer$"

EventScript_Settings_Text_7:
# 2077 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite$"

EventScript_Settings_Text_8:
# 2079 "data/scripts/battle_labyrinth.pory"
	.string "Infinite$"

EventScript_Settings_Text_9:
# 2082 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info$"

EventScript_Settings_Text_10:
# 2084 "data/scripts/battle_labyrinth.pory"
	.string "Full Info$"

EventScript_Settings_Text_11:
# 2087 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Exp. All$"

EventScript_Settings_Text_12:
# 2089 "data/scripts/battle_labyrinth.pory"
	.string "Exp. All$"

EventScript_Settings_Text_13:
# 2091 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Music$"

EventScript_Settings_Text_14:
# 2093 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge$"

EventScript_Settings_Text_15:
# 2095 "data/scripts/battle_labyrinth.pory"
	.string "Challenge$"

EventScript_Settings_Text_16:
# 2098 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet$"

EventScript_Settings_Text_17:
# 2100 "data/scripts/battle_labyrinth.pory"
	.string "Gauntlet$"

EventScript_Settings_Text_18:
# 2103 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor$"

EventScript_Settings_Text_19:
# 2105 "data/scripts/battle_labyrinth.pory"
	.string "Antidoctor$"

EventScript_Settings_Text_20:
# 2108 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy$"

EventScript_Settings_Text_21:
# 2110 "data/scripts/battle_labyrinth.pory"
	.string "Clumsy$"

EventScript_Settings_Text_22:
# 2113 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless$"

EventScript_Settings_Text_23:
# 2115 "data/scripts/battle_labyrinth.pory"
	.string "Effortless$"

EventScript_Settings_Text_24:
# 2118 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb$"

EventScript_Settings_Text_25:
# 2120 "data/scripts/battle_labyrinth.pory"
	.string "Red Thumb$"

EventScript_Settings_Text_26:
# 2123 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind$"

EventScript_Settings_Text_27:
# 2125 "data/scripts/battle_labyrinth.pory"
	.string "Antigrind$"

EventScript_Settings_Text_28:
# 2128 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use$"

EventScript_Settings_Text_29:
# 2130 "data/scripts/battle_labyrinth.pory"
	.string "Single-Use$"

EventScript_Settings_Text_30:
# 2133 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor$"

EventScript_Settings_Text_31:
# 2135 "data/scripts/battle_labyrinth.pory"
	.string "Poor$"

EventScript_Settings_Text_32:
# 2138 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent$"

EventScript_Settings_Text_33:
# 2140 "data/scripts/battle_labyrinth.pory"
	.string "Independent$"

EventScript_Settings_Text_34:
# 2148 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_35:
# 2150 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_36:
# 2153 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_37:
# 2162 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_38:
# 2164 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_39:
# 2167 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Brutal{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_40:
# 2178 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been 0 deaths.$"

EventScript_Settings_Text_41:
# 2180 "data/scripts/battle_labyrinth.pory"
	.string "So far there has been 1 death.$"

EventScript_Settings_Text_42:
# 2183 "data/scripts/battle_labyrinth.pory"
	.string "So far there have been {STR_VAR_1} deaths.$"

EventScript_Settings_Text_43:
# 2187 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_44:
# 2189 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_45:
# 2192 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_46:
# 2199 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Nuzlocke{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_47:
# 2201 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_48:
# 2204 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Nuzlocke{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_49:
# 2214 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Randomizer{COLOR DARK_GRAY} mode\n"
	.string "once set.$"

EventScript_Settings_Text_50:
# 2216 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_51:
# 2218 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_52:
# 2221 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_53:
# 2228 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Randomizer{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_54:
# 2230 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_55:
# 2233 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_56:
# 2243 "data/scripts/battle_labyrinth.pory"
	.string "You cannot turn off {COLOR RED}Infinite{COLOR DARK_GRAY} mode once\n"
	.string "set.$"

EventScript_Settings_Text_57:
# 2244 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to restock your supply\n"
	.string "of Full Restores, Max Elixirs, and Max\l"
	.string "Repels?$"

EventScript_Settings_Text_58:
# 2273 "data/scripts/battle_labyrinth.pory"
	.string "Items restocked.$"

EventScript_Settings_Text_59:
# 2276 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn off {COLOR RED}Infinite{COLOR DARK_GRAY}\n"
	.string "mode?$"

EventScript_Settings_Text_60:
# 2278 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn off\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_61:
# 2281 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned off.$"

EventScript_Settings_Text_62:
# 2291 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn on {COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_63:
# 2293 "data/scripts/battle_labyrinth.pory"
	.string "Are you sure you would like to turn on\n"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode?$"

EventScript_Settings_Text_64:
# 2296 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode turned on.$"

EventScript_Settings_Text_65:
# 2304 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting enables you to\n"
	.string "see more information that is not visible\l"
	.string "otherwise, such as full info about\l"
	.string "enemy Pokémon through the {COLOR RED}Surveil{COLOR DARK_GRAY}\l"
	.string "option in battle, or the {COLOR RED}DexNav{COLOR DARK_GRAY} to see\l"
	.string "potential encounterable Pokémon.$"

EventScript_Settings_Text_66:
# 2306 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_67:
# 2307 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_68:
# 2310 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_69:
# 2319 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Full Info{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_70:
# 2320 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Full Info{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_71:
# 2323 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Full Info{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_72:
# 2333 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} setting, if turned on, gives\n"
	.string "members of your party that don't\l"
	.string "participate in battle 25% experience.\p"
	.string "The game's experience curve is balanced\n"
	.string "around the Exp. All being turned on,\l"
	.string "though you may turn it off if you\l"
	.string "choose.$"

EventScript_Settings_Text_73:
# 2335 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently on. Would you\n"
	.string "like to turn it off?$"

EventScript_Settings_Text_74:
# 2338 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} off.$"

EventScript_Settings_Text_75:
# 2343 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Exp. All{COLOR DARK_GRAY} is currently off. Would you\n"
	.string "like to turn it on?$"

EventScript_Settings_Text_76:
# 2346 "data/scripts/battle_labyrinth.pory"
	.string "Turned the {COLOR RED}Exp. All{COLOR DARK_GRAY} on.$"

EventScript_Settings_Text_77:
# 2354 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting makes battles\n"
	.string "more difficult.\p"
	.string "Special trainers have harder fights and\n"
	.string "the player is limited in their usage of\l"
	.string "powerful moves.\p"
	.string "The AI cannot be PP stalled.$"

EventScript_Settings_Text_78:
# 2356 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_79:
# 2358 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_80:
# 2361 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_81:
# 2369 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Challenge{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_82:
# 2370 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Challenge{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_83:
# 2373 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Challenge{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_84:
# 2379 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting makes all trainers\n"
	.string "mandatory before leaving a Zone.$"

EventScript_Settings_Text_85:
# 2381 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_86:
# 2383 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_87:
# 2386 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_88:
# 2394 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Gauntlet{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_89:
# 2395 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Gauntlet{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_90:
# 2398 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Gauntlet{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_91:
# 2404 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting prevents\n"
	.string "in-battle items from being used during\l"
	.string "trainer battles.\p"
	.string "Pokémon Battle Labyrinth does not have\n"
	.string "opponents use any items.$"

EventScript_Settings_Text_92:
# 2406 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_93:
# 2408 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_94:
# 2411 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_95:
# 2419 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antidoctor{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_96:
# 2420 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antidoctor{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_97:
# 2423 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antidoctor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_98:
# 2429 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting enforces Set mode.$"

EventScript_Settings_Text_99:
# 2431 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_100:
# 2433 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_101:
# 2436 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_102:
# 2444 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Clumsy{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_103:
# 2445 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Clumsy{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_104:
# 2448 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Clumsy{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_105:
# 2454 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting prevents\n"
	.string "Pokémon from gaining EVs.$"

EventScript_Settings_Text_106:
# 2456 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_107:
# 2458 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_108:
# 2461 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_109:
# 2469 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Effortless{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_110:
# 2470 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Effortless{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_111:
# 2473 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Effortless{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_112:
# 2479 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "farm items and money by growing\l"
	.string "Berries, Thief, and other means.\p"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting disables these\n"
	.string "ways of infinitely obtaining items.$"

EventScript_Settings_Text_113:
# 2481 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_114:
# 2483 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_115:
# 2486 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_116:
# 2494 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Red Thumb{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_117:
# 2496 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Red Thumb{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_118:
# 2499 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Red Thumb{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_119:
# 2508 "data/scripts/battle_labyrinth.pory"
	.string "In most Pokémon games, players can\n"
	.string "'grind' experience by defeating wild\l"
	.string "Pokémon.\p"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting prevents players\n"
	.string "from grinding by disabling experience\l"
	.string "gain from wild Pokémon.$"

EventScript_Settings_Text_120:
# 2510 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_121:
# 2512 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_122:
# 2515 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_123:
# 2523 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Antigrind{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_124:
# 2524 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Antigrind{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_125:
# 2527 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Antigrind{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_126:
# 2533 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting makes all TMs\n"
	.string "single-use.$"

EventScript_Settings_Text_127:
# 2535 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_128:
# 2537 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_129:
# 2540 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_130:
# 2548 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Single-Use{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_131:
# 2549 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Single-Use{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_132:
# 2552 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Single-Use{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_133:
# 2558 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting halves the reward\n"
	.string "money from trainers.$"

EventScript_Settings_Text_134:
# 2560 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently on.$"

EventScript_Settings_Text_135:
# 2562 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "off?$"

EventScript_Settings_Text_136:
# 2565 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_137:
# 2573 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Poor{COLOR DARK_GRAY} setting is currently off.$"

EventScript_Settings_Text_138:
# 2574 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Poor{COLOR DARK_GRAY} setting\n"
	.string "on?$"

EventScript_Settings_Text_139:
# 2577 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Poor{COLOR DARK_GRAY} setting turned on.$"

EventScript_Settings_Text_140:
# 2583 "data/scripts/battle_labyrinth.pory"
	.string "In many Zones, there are hidden items,\n"
	.string "NPC shops, or free heals you can find.\p"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting disables many\n"
	.string "of these free sources of help.$"

EventScript_Settings_Text_141:
# 2585 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "on.$"

EventScript_Settings_Text_142:
# 2587 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting off?$"

EventScript_Settings_Text_143:
# 2590 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned off.$"

EventScript_Settings_Text_144:
# 2598 "data/scripts/battle_labyrinth.pory"
	.string "The {COLOR RED}Independent{COLOR DARK_GRAY} setting is currently\n"
	.string "off.$"

EventScript_Settings_Text_145:
# 2599 "data/scripts/battle_labyrinth.pory"
	.string "Would you like to turn the {COLOR RED}Independent{COLOR DARK_GRAY}\n"
	.string "setting on?$"

EventScript_Settings_Text_146:
# 2602 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Independent{COLOR DARK_GRAY} setting turned on.$"

EventScript_MusicMenu_Text_0:
# 2622 "data/scripts/battle_labyrinth.pory"
	.string "Please select a music setting.$"

EventScript_MusicMenu_Text_1:
# 2623 "data/scripts/battle_labyrinth.pory"
	.string "Wild Battle$"

EventScript_MusicMenu_Text_2:
# 2623 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Battle$"

EventScript_MusicMenu_Text_3:
# 2623 "data/scripts/battle_labyrinth.pory"
	.string "Leviathan Battle$"

EventScript_MusicMenu_Text_4:
# 2631 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_5:
# 2634 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_6:
# 2637 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_7:
# 2640 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_8:
# 2643 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_9:
# 2646 "data/scripts/battle_labyrinth.pory"
	.string "The Wild Pokémon music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_10:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "RSE$"

EventScript_MusicMenu_Text_11:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "FRLG$"

EventScript_MusicMenu_Text_12:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "DPPt$"

EventScript_MusicMenu_Text_13:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Johto$"

EventScript_MusicMenu_Text_14:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "HGSS Kanto$"

EventScript_MusicMenu_Text_15:
# 2648 "data/scripts/battle_labyrinth.pory"
	.string "BW$"

EventScript_MusicMenu_Text_16:
# 2662 "data/scripts/battle_labyrinth.pory"
	.string "The BW Wild Pokémon music is not\nfinished.$"

EventScript_MusicMenu_Text_17:
# 2673 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_18:
# 2676 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_19:
# 2679 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_20:
# 2682 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_21:
# 2685 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_22:
# 2688 "data/scripts/battle_labyrinth.pory"
	.string "The Trainer music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_23:
# 2704 "data/scripts/battle_labyrinth.pory"
	.string "The BW Trainer music is not\nfinished.$"

EventScript_MusicMenu_Text_24:
# 2715 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to RSE.$"

EventScript_MusicMenu_Text_25:
# 2718 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to FRLG.$"

EventScript_MusicMenu_Text_26:
# 2721 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to DPPt.$"

EventScript_MusicMenu_Text_27:
# 2724 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Johto).$"

EventScript_MusicMenu_Text_28:
# 2727 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to HGSS (Kanto).$"

EventScript_MusicMenu_Text_29:
# 2730 "data/scripts/battle_labyrinth.pory"
	.string "The Leviathan music is\ncurrently set to BW.$"

EventScript_MusicMenu_Text_30:
# 2746 "data/scripts/battle_labyrinth.pory"
	.string "The BW Leviathan music is not\nfinished.$"

EventScript_SignsQuestGirl_Text_0:
# 2763 "data/scripts/battle_labyrinth.pory"
	.string "Hiya! I'm improving on my reading skills!\p"
	.string "You should work on your reading skills\n"
	.string "too!\p"
	.string "If you read all the signs in the Pokémon\n"
	.string "Battle Labyrinth, I'll give you a nice\l"
	.string "reward!$"

EventScript_SignsQuestGirl_Text_1:
# 2766 "data/scripts/battle_labyrinth.pory"
	.string "Signs have lots of useful info about\n"
	.string "unique mechanics to the Pokémon Battle\l"
	.string "Labyrinth!\p"
	.string "You can improve your reading skills\n"
	.string "while learning more about the\l"
	.string "challenges at hand!$"

EventScript_SavesQuestBoy_Text_0:
# 2776 "data/scripts/battle_labyrinth.pory"
	.string "Saving your progress is important while\n"
	.string "playing games.\p"
	.string "I learned that the hard way!\p"
	.string "Don't be like me!\p"
	.string "I'll give you something if you can save\n"
	.string "the game 50 times!$"

EventScript_SavesQuestBoy_Text_1:
# 2779 "data/scripts/battle_labyrinth.pory"
	.string "Don't forget to save your game!$"

EventScript_PokedexQuestScientist_Text_0:
# 2789 "data/scripts/battle_labyrinth.pory"
	.string "Kids these days are always neglecting\n"
	.string "filling their Pokédex!\p"
	.string "If you can show me a Pokédex that's\n"
	.string "seen all the Pokémon in existence, I'll\l"
	.string "reward you!$"

EventScript_PokedexQuestScientist_Text_1:
# 2792 "data/scripts/battle_labyrinth.pory"
	.string "Seeing all the Pokémon is tough enough.\p"
	.string "Imagine capturing them all!$"

EventScript_NuzlockeVerifyBuy_Text_0:
# 3058 "data/scripts/battle_labyrinth.pory"
	.string "On Nuzlocke mode, you will randomly\n"
	.string "receive one of the possible Pokémon.\p"
	.string "Is this ok?$"

EventScript_PorygonExit_Text_0:
# 3086 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR GREEN}Proceed to the Sanctuary?$"

EventScript_ShakeTree_Text_0:
# 3169 "data/scripts/battle_labyrinth.pory"
	.string "There's a sweet aroma in the air…\nWould you like to shake the tree?$"

EventScript_ShakeTree_Text_1:
# 3175 "data/scripts/battle_labyrinth.pory"
	.string "{PLAYER} shook the tree!$"

EventScript_ShakeTree_Text_2:
# 3211 "data/scripts/battle_labyrinth.pory"
	.string "A Berry fell from the tree!$"

EventScript_RecoverySign_Text_0:
# 3279 "data/scripts/battle_labyrinth.pory"
	.string "Joy's Center of Restoration\nA meeting place for everyone!$"

EventScript_MedicineSign_Text_0:
# 3285 "data/scripts/battle_labyrinth.pory"
	.string "Portentia's Potions\nCurated Medicines!$"

EventScript_PokeballSign_Text_0:
# 3291 "data/scripts/battle_labyrinth.pory"
	.string "Tim's Pokéball Shop\nSponsored by Pokémart Inc.$"

EventScript_ItemsSign_Text_0:
# 3297 "data/scripts/battle_labyrinth.pory"
	.string "Varrick's Extravagant Emporium\nA Fine Collection!$"

EventScript_BerriesSign_Text_0:
# 3303 "data/scripts/battle_labyrinth.pory"
	.string "Julia's Berries\nOnly the Berry best!$"

EventScript_EggsSign_Text_0:
# 3309 "data/scripts/battle_labyrinth.pory"
	.string "Marie's Egg Delivery Service\nCome meet your next friend!$"

EventScript_ServicesSign_Text_0:
# 3315 "data/scripts/battle_labyrinth.pory"
	.string "Lelouch's Services Shop\nAnything for the right price…$"

Zone0A_EventScript_TPISign_Text_0:
# 3321 "data/scripts/battle_labyrinth.pory"
	.string "Teleport Institute\n"
	.string "Getting around, easy peasy.$"

Zone0A_EventScript_DayCareSign_Text_0:
# 3327 "data/scripts/battle_labyrinth.pory"
	.string "Pokémon Day Care\n"
	.string "9 Generations and counting!$"

Zone1A_EventScript_Sign_GoldenTree_Text_0:
# 3333 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Shaking a Golden Tree might drop\n"
	.string "berries, though occasionally you'll\l"
	.string "disturb the wild Pokémon living in the\l"
	.string "tree!$"

Zone1A_EventScript_PorygonSign_Text_0:
# 3339 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Every Zone has its own challenges.\n"
	.string "In order to reach the Sanctuary and\l"
	.string "clear a Zone, you must find {COLOR RED}Porygon{COLOR DARK_GRAY}.$"

Zone1A_EventScript_Sign_RunningShoes_Text_0:
# 3350 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Press {L_BUTTON} to enable or disable Auto Run.$"

Zone2A_EventScript_Sign_Text_0:
# 3356 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You may find hidden items by checking\n"
	.string "certain tiles with {A_BUTTON}.\p"
	.string "However, you won't find any hidden\n"
	.string "items on Brutal or Independent.$"

Zone2A_EventScript_ExpShareSign_Text_0:
# 3362 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Exp. All only gives Pokémon who\n"
	.string "didn't participate in battle 25%\l"
	.string "experience.\p"
	.string "If you want to train up a particular\n"
	.string "Pokémon, you can give them the held\l"
	.string "item Exp. Share so they get full\l"
	.string "experience!$"

Zone2A_EventScript_CautionSign_Text_0:
# 3368 "data/scripts/battle_labyrinth.pory"
	.string "Caution!\p"
	.string "Diglett have been found living inside\n"
	.string "the tunnel.\p"
	.string "Repels recommended!$"

Zone2B_EventScript_PartySelectSign_Text_0:
# 3380 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can switch the order of your party\n"
	.string "around in your party menu faster by\l"
	.string "pressing {SELECT_BUTTON}.$"

Zone2B_EventScript_OptionalLeviathan_Text_0:
# 3386 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In some Zones, Leviathans are optional\n"
	.string "to battle, but may give good rewards\l"
	.string "when defeated!$"

Zone3A_EventScript_Surveil_Text_0:
# 3392 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "In battle, you can use Surveil to see\n"
	.string "the opponent's team.\p"
	.string "If you want to see full team\n"
	.string "information, you can turn on the Full\l"
	.string "Info setting by speaking to Colress.$"

Zone4A_EventScript_Sign_Text_0:
# 3398 "data/scripts/battle_labyrinth.pory"
	.string "These woods are enchanted…\n"
	.string "Don't get lost!$"

Zone4B_EventScript_Sign_Text_0:
# 3404 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can see detailed information about\n"
	.string "a Pokémon species in its Pokédex entry\l"
	.string "after capturing it, such as what moves\l"
	.string "it learns or how to evolve it.$"

Zone4C_EventScript_Sign_Text_0:
# 3410 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Starting from now, there is a 20%\n"
	.string "chance to encounter wild Pokémon in a\l"
	.string "Double Battle.$"

Zone4D_EventScript_Sign_Text_0:
# 3416 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "Some areas require backtracking later\n"
	.string "on in order to access them.$"

Zone4E_EventScript_Sign_Text_0:
# 3422 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "The Pokémon you encounter in different\n"
	.string "areas of the same zone may have slight\l"
	.string "differences!$"

Zone6A_EventScript_Sign_Text_0:
# 3428 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can sort items in the Bag using {START_BUTTON}.$"

Zone7A_EventScript_Sign_Text_0:
# 3434 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "You can change the music you hear in\n"
	.string "battle by speaking to Colress!$"

Zone7A_EventScript_HealSign_Text_0:
# 3440 "data/scripts/battle_labyrinth.pory"
	.string "A stop for weary travelers.$"

Zone9A_EventScript_Sign_Text_0:
# 3446 "data/scripts/battle_labyrinth.pory"
	.string "Trainer Tips\p"
	.string "While you are on the Pokémon stats\n"
	.string "screen, you can press {A_BUTTON} to switch\l"
	.string "between stats, IVs, or EVs.$"

Zone9A_EventScript_HerbalSign_Text_0:
# 3452 "data/scripts/battle_labyrinth.pory"
	.string "Herbal and Incense Shop$"

Debug_CheatStart_PBL_Text_0:
# 3522 "data/scripts/battle_labyrinth.pory"
	.string "Zone 0 grass?$"

Debug_CheatStart_PBL_Text_1:
# 3529 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 options$"

Debug_CheatStart_PBL_Text_2:
# 3530 "data/scripts/battle_labyrinth.pory"
	.string "Grass$"

Debug_CheatStart_PBL_Text_3:
# 3530 "data/scripts/battle_labyrinth.pory"
	.string "Tree$"

Debug_CheatStart_PBL_Text_4:
# 3547 "data/scripts/battle_labyrinth.pory"
	.string "Zone 1 gwf$"

Debug_CheatStart_PBL_Text_5:
# 3548 "data/scripts/battle_labyrinth.pory"
	.string "Fire$"

Debug_CheatStart_PBL_Text_6:
# 3548 "data/scripts/battle_labyrinth.pory"
	.string "Water$"

Debug_CheatStart_PBL_Text_7:
# 3605 "data/scripts/battle_labyrinth.pory"
	.string "Zone 2 options$"

Debug_CheatStart_PBL_Text_8:
# 3606 "data/scripts/battle_labyrinth.pory"
	.string "Grass A$"

Debug_CheatStart_PBL_Text_9:
# 3606 "data/scripts/battle_labyrinth.pory"
	.string "Tunnel$"

Debug_CheatStart_PBL_Text_10:
# 3606 "data/scripts/battle_labyrinth.pory"
	.string "Grass B$"

Debug_CheatStart_PBL_Text_11:
# 3669 "data/scripts/battle_labyrinth.pory"
	.string "Zone 3 options$"

Debug_CheatStart_PBL_Text_12:
# 3692 "data/scripts/battle_labyrinth.pory"
	.string "Zone 4 options$"

Debug_CheatStart_PBL_Text_13:
# 3693 "data/scripts/battle_labyrinth.pory"
	.string "A$"

Debug_CheatStart_PBL_Text_14:
# 3693 "data/scripts/battle_labyrinth.pory"
	.string "B$"

Debug_CheatStart_PBL_Text_15:
# 3693 "data/scripts/battle_labyrinth.pory"
	.string "C$"

Debug_CheatStart_PBL_Text_16:
# 3693 "data/scripts/battle_labyrinth.pory"
	.string "D$"

Debug_CheatStart_PBL_Text_17:
# 3693 "data/scripts/battle_labyrinth.pory"
	.string "E$"

Debug_CheatStart_PBL_Text_18:
# 3753 "data/scripts/battle_labyrinth.pory"
	.string "Zone 5 options$"

Debug_CheatStart_PBL_Text_19:
# 3754 "data/scripts/battle_labyrinth.pory"
	.string "Forest$"

Debug_CheatStart_PBL_Text_20:
# 3754 "data/scripts/battle_labyrinth.pory"
	.string "Grassland$"

Debug_CheatStart_PBL_Text_21:
# 3799 "data/scripts/battle_labyrinth.pory"
	.string "Zone 6 options$"

Debug_CheatStart_PBL_Text_22:
# 3829 "data/scripts/battle_labyrinth.pory"
	.string "Zone 7 options$"

Debug_CheatStart_PBL_Text_23:
# 3848 "data/scripts/battle_labyrinth.pory"
	.string "Zone 8 options$"

Debug_CheatStart_PBL_Text_24:
# 3886 "data/scripts/battle_labyrinth.pory"
	.string "Zone 9 options$"

Debug_CheatStart_PBL_GiveMon_Text_0:
# 3934 "data/scripts/battle_labyrinth.pory"
	.string "Obtained {STR_VAR_1}!$"

gText_Lelouch_NotEnoughColor::
# 1120 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You don't have any Shards\nof that color.$"

gText_Lelouch_Leave::
# 1124 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Farewell.$"

gText_Lelouch_EV::
# 1322 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: With EV Training, you can set\n"
	.string "one Pokémon's EVs at the cost of one\l"
	.string "Red Shard.\p"
	.string "Would you like to start an EV Training\n"
	.string "session?$"

gText_Lelouch_ChooseHPEV::
# 1326 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s HP EV to be?$"

gText_Lelouch_ChooseAttackEV::
# 1330 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Attack EV to be?$"

gText_Lelouch_ChooseDefenseEV::
# 1334 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Defense EV to be?$"

gText_Lelouch_ChooseSpecialAttackEV::
# 1338 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Atk EV to be?$"

gText_Lelouch_ChooseSpecialDefenseEV::
# 1342 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Sp. Def EV to be?$"

gText_Lelouch_ChooseSpeedEV::
# 1346 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: What would you like your\n"
	.string "{STR_VAR_1}'s Speed EV to be?$"

gText_Lelouch_TooManyEVs::
# 1350 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: You've selected a total of EVs\n"
	.string "greater than 510. Pokémon can have at\l"
	.string "maximum 510 EVs.$"

gText_Lelouch_CheckEVs::
# 1354 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: Are you sure you wish to set\n"
	.string "{STR_VAR_1}'s EVs to these values?$"

gText_Lelouch_ChangedEVs::
# 1358 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s EVs to your requested\l"
	.string "values.$"

gText_Lelouch_ChangedNature::
# 1753 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR BLUE}Lelouch{COLOR DARK_GRAY}: I've changed your\n"
	.string "{STR_VAR_1}'s nature to the\l"
	.string "requested nature.$"

gText_Colress_BrutalExplained::
# 2024 "data/scripts/battle_labyrinth.pory"
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
# 2030 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode randomizes wild\n"
	.string "encounters and gift Pokémon, including\l"
	.string "your starter.\p"
	.string "Trainer Pokémon are left unchanged.\p"
	.string "{COLOR RED}Randomizer{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_NuzlockeExplained::
# 2036 "data/scripts/battle_labyrinth.pory"
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
# 2043 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode gives you access to\n"
	.string "unlimited resources that can normally\l"
	.string "be obtained by grinding.\p"
	.string "This is not the intended game mode, as\n"
	.string "resource management was designed to\l"
	.string "be part of the game.\p"
	.string "{COLOR RED}Infinite{COLOR DARK_GRAY} mode can only be altered at\n"
	.string "the beginning of the game.$"

gText_Colress_CannotChangeSettingBrutal::
# 2049 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Brutal mode.$"

gText_Colress_CannotChangeSettingInfinite::
# 2053 "data/scripts/battle_labyrinth.pory"
	.string "You cannot change this setting\n"
	.string "because you are playing on Infinite\l"
	.string "mode.$"

gText_ItemChestIsEmpty::
# 2808 "data/scripts/battle_labyrinth.pory"
	.string "The item chest is empty.$"

gText_OneOpponentRemaining::
# 3048 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There is 1 opponent remaining in this\n"
	.string "area.$"

gText_MultipleOpponentsRemaining::
# 3052 "data/scripts/battle_labyrinth.pory"
	.string "{COLOR RED}There are still {STR_VAR_1} opponents\nremaining in the area.$"
