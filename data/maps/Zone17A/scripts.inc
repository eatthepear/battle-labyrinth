Zone17A_MapScripts::
# 2 "data/maps/Zone17A/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Zone17A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Zone17A_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Zone17A/scripts.pory"
	map_script_2 VAR_ZONE_17_STATE, 0, Zone17A_EventScript_Intro
	.2byte 0


Zone17A_EventScript_Intro::
# 8 "data/maps/Zone17A/scripts.pory"
	lockall
# 9 "data/maps/Zone17A/scripts.pory"
	delay 48
# 10 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 11 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 12 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 13 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 14 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 15 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 16 "data/maps/Zone17A/scripts.pory"
	delay 32
# 17 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 18 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 19 "data/maps/Zone17A/scripts.pory"
	delay 16
# 20 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 21 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 22 "data/maps/Zone17A/scripts.pory"
	delay 16
# 23 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 24 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 25 "data/maps/Zone17A/scripts.pory"
	delay 16
# 26 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 27 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 28 "data/maps/Zone17A/scripts.pory"
	delay 16
# 29 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 30 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 31 "data/maps/Zone17A/scripts.pory"
	delay 16
# 32 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 33 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 34 "data/maps/Zone17A/scripts.pory"
	delay 16
# 35 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 36 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 37 "data/maps/Zone17A/scripts.pory"
	delay 16
# 38 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 39 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 40 "data/maps/Zone17A/scripts.pory"
	delay 16
# 41 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 42 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 43 "data/maps/Zone17A/scripts.pory"
	delay 48
# 44 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_Intro_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 1
# 46 "data/maps/Zone17A/scripts.pory"
	delay 16
# 47 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 48 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 49 "data/maps/Zone17A/scripts.pory"
	delay 16
# 50 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 51 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 52 "data/maps/Zone17A/scripts.pory"
	delay 16
# 53 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 54 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 55 "data/maps/Zone17A/scripts.pory"
	delay 16
# 56 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 57 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 58 "data/maps/Zone17A/scripts.pory"
	delay 16
# 59 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 60 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 61 "data/maps/Zone17A/scripts.pory"
	delay 16
# 62 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 63 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 64 "data/maps/Zone17A/scripts.pory"
	delay 16
# 65 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 66 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 67 "data/maps/Zone17A/scripts.pory"
	delay 16
# 68 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 69 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 70 "data/maps/Zone17A/scripts.pory"
	delay 8
# 71 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 72 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 73 "data/maps/Zone17A/scripts.pory"
	delay 8
# 74 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 75 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 76 "data/maps/Zone17A/scripts.pory"
	delay 8
# 77 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 78 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 79 "data/maps/Zone17A/scripts.pory"
	delay 8
# 80 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 81 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 82 "data/maps/Zone17A/scripts.pory"
	delay 8
# 83 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 84 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 85 "data/maps/Zone17A/scripts.pory"
	delay 8
# 86 "data/maps/Zone17A/scripts.pory"
	releaseall
	end


Zone17A_EventScript_StopLeave::
# 91 "data/maps/Zone17A/scripts.pory"
	lockall
# 92 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_StopLeave_Text_0
# 93 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 94 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 95 "data/maps/Zone17A/scripts.pory"
	releaseall
	end


Zone17A_EventScript_RiddleSign::
# 100 "data/maps/Zone17A/scripts.pory"
	lock
# 101 "data/maps/Zone17A/scripts.pory"
	checkitem ITEM_ODD_KEYSTONE, 1
# 102 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Zone17A_EventScript_RiddleSign_2
Zone17A_EventScript_RiddleSign_1:
# 108 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 29
	goto_if_eq Zone17A_EventScript_RiddleSign_5
# 111 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_RiddleSign, MSGBOX_SIGN
Zone17A_EventScript_RiddleSign_4:
# 113 "data/maps/Zone17A/scripts.pory"
	release
	end

Zone17A_EventScript_RiddleSign_2:
# 103 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_RiddleSign_Text_0, MSGBOX_YESNO
# 104 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone17A_EventScript_RiddleSign_8
	goto Zone17A_EventScript_RiddleSign_1

Zone17A_EventScript_RiddleSign_5:
# 109 "data/maps/Zone17A/scripts.pory"
	goto Zone17A_EventScript_InitiateLeviathanBattle
	goto Zone17A_EventScript_RiddleSign_4

Zone17A_EventScript_RiddleSign_8:
# 105 "data/maps/Zone17A/scripts.pory"
	goto Zone17A_StartSpiritombBattle
	goto Zone17A_EventScript_RiddleSign_1


Zone17A_EventScript_InitiateLeviathanBattle::
# 130 "data/maps/Zone17A/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 131 "data/maps/Zone17A/scripts.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq Zone17A_EventScript_InitiateLeviathanBattle_2
# 136 "data/maps/Zone17A/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq Zone17A_EventScript_InitiateLeviathanBattle_3
# 141 "data/maps/Zone17A/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq Zone17A_EventScript_InitiateLeviathanBattle_4
Zone17A_EventScript_InitiateLeviathanBattle_1:
# 151 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 152 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 153 "data/maps/Zone17A/scripts.pory"
	delay 48
# 154 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 155 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 156 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 157 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 158 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 159 "data/maps/Zone17A/scripts.pory"
	delay 32
# 160 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 161 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 162 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 163 "data/maps/Zone17A/scripts.pory"
	delay 16
# 164 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 165 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 166 "data/maps/Zone17A/scripts.pory"
	delay 16
# 167 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 168 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 169 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 170 "data/maps/Zone17A/scripts.pory"
	delay 16
# 171 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 172 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 173 "data/maps/Zone17A/scripts.pory"
	delay 16
# 174 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 175 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 176 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 177 "data/maps/Zone17A/scripts.pory"
	delay 16
# 178 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 179 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 180 "data/maps/Zone17A/scripts.pory"
	delay 16
# 181 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 182 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 183 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 184 "data/maps/Zone17A/scripts.pory"
	delay 16
# 185 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_0
# 186 "data/maps/Zone17A/scripts.pory"
	delay 16
# 187 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 188 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 189 "data/maps/Zone17A/scripts.pory"
	delay 48
# 190 "data/maps/Zone17A/scripts.pory"
	fadeoutbgm 1
# 191 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_BEAT_LEVIATHAN_15
# 192 "data/maps/Zone17A/scripts.pory"
	addobject 2
# 193 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 194 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 195 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 196 "data/maps/Zone17A/scripts.pory"
	playse SE_PIN
# 197 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 198 "data/maps/Zone17A/scripts.pory"
	waitse
# 199 "data/maps/Zone17A/scripts.pory"
	delay 48
# 200 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_1
# 201 "data/maps/Zone17A/scripts.pory"
	delay 48
# 202 "data/maps/Zone17A/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 203 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 204 "data/maps/Zone17A/scripts.pory"
	delay 48
# 205 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_2
# 206 "data/maps/Zone17A/scripts.pory"
	delay 48
# 207 "data/maps/Zone17A/scripts.pory"
	applymovement 2, Zone17A_Movement_Mia
# 208 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 209 "data/maps/Zone17A/scripts.pory"
	delay 48
# 210 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_3
# 211 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 212 "data/maps/Zone17A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone17A_EventScript_InitiateLeviathanBattle_9
# 212 "data/maps/Zone17A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone17A_EventScript_InitiateLeviathanBattle_9
# 217 "data/maps/Zone17A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIA_LEVIATHAN_15, Zone15B_Text_Leviathan13Defeat
Zone17A_EventScript_InitiateLeviathanBattle_8:
# 219 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 220 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_4
# 221 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_15
# 222 "data/maps/Zone17A/scripts.pory"
	removeobject 2
# 223 "data/maps/Zone17A/scripts.pory"
	delay 48
# 224 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 225 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 226 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 227 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 228 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 229 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_5
# 230 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 30
# 231 "data/maps/Zone17A/scripts.pory"
	delay 16
# 232 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 233 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 234 "data/maps/Zone17A/scripts.pory"
	delay 16
# 235 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 236 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 237 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 238 "data/maps/Zone17A/scripts.pory"
	delay 16
# 239 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 240 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 241 "data/maps/Zone17A/scripts.pory"
	delay 16
# 242 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 243 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 244 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 245 "data/maps/Zone17A/scripts.pory"
	delay 16
# 246 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 247 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 248 "data/maps/Zone17A/scripts.pory"
	delay 16
# 249 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 250 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 251 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 252 "data/maps/Zone17A/scripts.pory"
	delay 16
# 253 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 254 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 255 "data/maps/Zone17A/scripts.pory"
	delay 16
# 256 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 257 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 258 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 259 "data/maps/Zone17A/scripts.pory"
	delay 8
# 260 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 261 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 262 "data/maps/Zone17A/scripts.pory"
	delay 8
# 263 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 264 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 265 "data/maps/Zone17A/scripts.pory"
	delay 8
# 266 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 267 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 268 "data/maps/Zone17A/scripts.pory"
	delay 8
# 269 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 270 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 271 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 272 "data/maps/Zone17A/scripts.pory"
	delay 8
# 273 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 274 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 275 "data/maps/Zone17A/scripts.pory"
	delay 8
# 276 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_6, MSGBOX_DEFAULT
# 277 "data/maps/Zone17A/scripts.pory"
	giveitem ITEM_TM29
# 278 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_PORYGON
# 279 "data/maps/Zone17A/scripts.pory"
	release
	end

Zone17A_EventScript_InitiateLeviathanBattle_2:
# 132 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 133 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 134 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 135 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
	goto Zone17A_EventScript_InitiateLeviathanBattle_1

Zone17A_EventScript_InitiateLeviathanBattle_3:
# 137 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 138 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 139 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 140 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
	goto Zone17A_EventScript_InitiateLeviathanBattle_1

Zone17A_EventScript_InitiateLeviathanBattle_4:
# 142 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 143 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 144 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 145 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 146 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 147 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 148 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 149 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
	goto Zone17A_EventScript_InitiateLeviathanBattle_1

Zone17A_EventScript_InitiateLeviathanBattle_9:
# 213 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_DISABLE_PREVIEW
# 214 "data/maps/Zone17A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIA_LEVIATHAN_15_CHALLENGE, Zone15B_Text_Leviathan13Defeat
# 215 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_DISABLE_PREVIEW
	goto Zone17A_EventScript_InitiateLeviathanBattle_8


# 283 "data/maps/Zone17A/scripts.pory"
Zone17A_Movement_Mia:
# 284 "data/maps/Zone17A/scripts.pory"
	slide_right
# 284 "data/maps/Zone17A/scripts.pory"
	slide_right
	step_end

Zone17A_StartSpiritombBattle::
# 288 "data/maps/Zone17A/scripts.pory"
	removeitem ITEM_ODD_KEYSTONE
# 289 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_0, MSGBOX_AUTOCLOSE
# 290 "data/maps/Zone17A/scripts.pory"
	delay 48
# 291 "data/maps/Zone17A/scripts.pory"
	setwildbattle SPECIES_SPIRITOMB, 45, ITEM_NONE
# 292 "data/maps/Zone17A/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, 2
# 293 "data/maps/Zone17A/scripts.pory"
	delay 40
# 294 "data/maps/Zone17A/scripts.pory"
	waitmoncry
# 295 "data/maps/Zone17A/scripts.pory"
	dowildbattle
# 296 "data/maps/Zone17A/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 297 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone17A_StartSpiritombBattle_2
Zone17A_StartSpiritombBattle_1:
# 300 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone17A_StartSpiritombBattle_5
Zone17A_StartSpiritombBattle_4:
# 303 "data/maps/Zone17A/scripts.pory"
	release
	end

Zone17A_StartSpiritombBattle_2:
# 298 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_1
	goto Zone17A_StartSpiritombBattle_1

Zone17A_StartSpiritombBattle_5:
# 301 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_1
	goto Zone17A_StartSpiritombBattle_4


# 307 "data/maps/Zone17A/scripts.pory"

# 308 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign1::
# 309 "data/maps/Zone17A/scripts.pory"
	lock
# 310 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign1, MSGBOX_SIGN
# 311 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 16
# 312 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects16
# 313 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 19
# 314 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects19
# 315 "data/maps/Zone17A/scripts.pory"
	release
# 316 "data/maps/Zone17A/scripts.pory"
	end
# 317 "data/maps/Zone17A/scripts.pory"

# 318 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign2::
# 319 "data/maps/Zone17A/scripts.pory"
	lock
# 320 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign2, MSGBOX_SIGN
# 321 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 24
# 322 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects24
# 323 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 9
# 324 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects9
# 325 "data/maps/Zone17A/scripts.pory"
	release
# 326 "data/maps/Zone17A/scripts.pory"
	end
# 327 "data/maps/Zone17A/scripts.pory"

# 328 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign3::
# 329 "data/maps/Zone17A/scripts.pory"
	lock
# 330 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign3, MSGBOX_SIGN
# 331 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 27
# 332 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects27
# 333 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 15
# 334 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects15
# 335 "data/maps/Zone17A/scripts.pory"
	release
# 336 "data/maps/Zone17A/scripts.pory"
	end
# 337 "data/maps/Zone17A/scripts.pory"

# 338 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign4::
# 339 "data/maps/Zone17A/scripts.pory"
	lock
# 340 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign4, MSGBOX_SIGN
# 341 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 4
# 342 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects4
# 343 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 13
# 344 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects13
# 345 "data/maps/Zone17A/scripts.pory"
	release
# 346 "data/maps/Zone17A/scripts.pory"
	end
# 347 "data/maps/Zone17A/scripts.pory"

# 348 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign5::
# 349 "data/maps/Zone17A/scripts.pory"
	lock
# 350 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign5, MSGBOX_SIGN
# 351 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 7
# 352 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects7
# 353 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 22
# 354 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects22
# 355 "data/maps/Zone17A/scripts.pory"
	release
# 356 "data/maps/Zone17A/scripts.pory"
	end
# 357 "data/maps/Zone17A/scripts.pory"

# 358 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign6::
# 359 "data/maps/Zone17A/scripts.pory"
	lock
# 360 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign6, MSGBOX_SIGN
# 361 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 1
# 362 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects1
# 363 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 17
# 364 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects17
# 365 "data/maps/Zone17A/scripts.pory"
	release
# 366 "data/maps/Zone17A/scripts.pory"
	end
# 367 "data/maps/Zone17A/scripts.pory"

# 368 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign7::
# 369 "data/maps/Zone17A/scripts.pory"
	lock
# 370 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign7, MSGBOX_SIGN
# 371 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 23
# 372 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects23
# 373 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 3
# 374 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects3
# 375 "data/maps/Zone17A/scripts.pory"
	release
# 376 "data/maps/Zone17A/scripts.pory"
	end
# 377 "data/maps/Zone17A/scripts.pory"

# 378 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign8::
# 379 "data/maps/Zone17A/scripts.pory"
	lock
# 380 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign8, MSGBOX_SIGN
# 381 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 5
# 382 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects5
# 383 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 25
# 384 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects25
# 385 "data/maps/Zone17A/scripts.pory"
	release
# 386 "data/maps/Zone17A/scripts.pory"
	end
# 387 "data/maps/Zone17A/scripts.pory"

# 388 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign9::
# 389 "data/maps/Zone17A/scripts.pory"
	lock
# 390 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign9, MSGBOX_SIGN
# 391 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 18
# 392 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects18
# 393 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 2
# 394 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects2
# 395 "data/maps/Zone17A/scripts.pory"
	release
# 396 "data/maps/Zone17A/scripts.pory"
	end
# 397 "data/maps/Zone17A/scripts.pory"

# 398 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign10::
# 399 "data/maps/Zone17A/scripts.pory"
	lock
# 400 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign10, MSGBOX_SIGN
# 401 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 10
# 402 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects10
# 403 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 14
# 404 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects14
# 405 "data/maps/Zone17A/scripts.pory"
	release
# 406 "data/maps/Zone17A/scripts.pory"
	end
# 407 "data/maps/Zone17A/scripts.pory"

# 408 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign11::
# 409 "data/maps/Zone17A/scripts.pory"
	lock
# 410 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign11, MSGBOX_SIGN
# 411 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 28
# 412 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects28
# 413 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 11
# 414 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects11
# 415 "data/maps/Zone17A/scripts.pory"
	release
# 416 "data/maps/Zone17A/scripts.pory"
	end
# 417 "data/maps/Zone17A/scripts.pory"

# 418 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign12::
# 419 "data/maps/Zone17A/scripts.pory"
	lock
# 420 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign12, MSGBOX_SIGN
# 421 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 20
# 422 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects20
# 423 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 6
# 424 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects6
# 425 "data/maps/Zone17A/scripts.pory"
	release
# 426 "data/maps/Zone17A/scripts.pory"
	end
# 427 "data/maps/Zone17A/scripts.pory"

# 428 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign13::
# 429 "data/maps/Zone17A/scripts.pory"
	lock
# 430 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign13, MSGBOX_SIGN
# 431 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 26
# 432 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects26
# 433 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 12
# 434 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects12
# 435 "data/maps/Zone17A/scripts.pory"
	release
# 436 "data/maps/Zone17A/scripts.pory"
	end
# 437 "data/maps/Zone17A/scripts.pory"

# 438 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign14::
# 439 "data/maps/Zone17A/scripts.pory"
	lock
# 440 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign14, MSGBOX_SIGN
# 441 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 8
# 442 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects8
# 443 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 21
# 444 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects21
# 445 "data/maps/Zone17A/scripts.pory"
	release
# 446 "data/maps/Zone17A/scripts.pory"
	end
# 447 "data/maps/Zone17A/scripts.pory"

# 448 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects1:
# 449 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 450 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 451 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects1
# 452 "data/maps/Zone17A/scripts.pory"
	return
# 453 "data/maps/Zone17A/scripts.pory"

# 454 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects1:
# 455 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 456 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 2
# 457 "data/maps/Zone17A/scripts.pory"
	return
# 458 "data/maps/Zone17A/scripts.pory"

# 459 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects2:
# 460 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 461 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 462 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects2
# 463 "data/maps/Zone17A/scripts.pory"
	return
# 464 "data/maps/Zone17A/scripts.pory"

# 465 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects2:
# 466 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 467 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 3
# 468 "data/maps/Zone17A/scripts.pory"
	return
# 469 "data/maps/Zone17A/scripts.pory"

# 470 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects3:
# 471 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 472 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 473 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects3
# 474 "data/maps/Zone17A/scripts.pory"
	return
# 475 "data/maps/Zone17A/scripts.pory"

# 476 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects3:
# 477 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 478 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 4
# 479 "data/maps/Zone17A/scripts.pory"
	return
# 480 "data/maps/Zone17A/scripts.pory"

# 481 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects4:
# 482 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 483 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 484 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects4
# 485 "data/maps/Zone17A/scripts.pory"
	return
# 486 "data/maps/Zone17A/scripts.pory"

# 487 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects4:
# 488 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 489 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 5
# 490 "data/maps/Zone17A/scripts.pory"
	return
# 491 "data/maps/Zone17A/scripts.pory"

# 492 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects5:
# 493 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 494 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 495 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects5
# 496 "data/maps/Zone17A/scripts.pory"
	return
# 497 "data/maps/Zone17A/scripts.pory"

# 498 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects5:
# 499 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 500 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 6
# 501 "data/maps/Zone17A/scripts.pory"
	return
# 502 "data/maps/Zone17A/scripts.pory"

# 503 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects6:
# 504 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 505 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 506 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects6
# 507 "data/maps/Zone17A/scripts.pory"
	return
# 508 "data/maps/Zone17A/scripts.pory"

# 509 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects6:
# 510 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 511 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 7
# 512 "data/maps/Zone17A/scripts.pory"
	return
# 513 "data/maps/Zone17A/scripts.pory"

# 514 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects7:
# 515 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 516 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 517 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects7
# 518 "data/maps/Zone17A/scripts.pory"
	return
# 519 "data/maps/Zone17A/scripts.pory"

# 520 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects7:
# 521 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 522 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 8
# 523 "data/maps/Zone17A/scripts.pory"
	return
# 524 "data/maps/Zone17A/scripts.pory"

# 525 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects8:
# 526 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 527 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 528 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects8
# 529 "data/maps/Zone17A/scripts.pory"
	return
# 530 "data/maps/Zone17A/scripts.pory"

# 531 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects8:
# 532 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 533 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 9
# 534 "data/maps/Zone17A/scripts.pory"
	return
# 535 "data/maps/Zone17A/scripts.pory"

# 536 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects9:
# 537 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 538 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 539 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects9
# 540 "data/maps/Zone17A/scripts.pory"
	return
# 541 "data/maps/Zone17A/scripts.pory"

# 542 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects9:
# 543 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 544 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 10
# 545 "data/maps/Zone17A/scripts.pory"
	return
# 546 "data/maps/Zone17A/scripts.pory"

# 547 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects10:
# 548 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 549 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 550 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects10
# 551 "data/maps/Zone17A/scripts.pory"
	return
# 552 "data/maps/Zone17A/scripts.pory"

# 553 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects10:
# 554 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 555 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 11
# 556 "data/maps/Zone17A/scripts.pory"
	return
# 557 "data/maps/Zone17A/scripts.pory"

# 558 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects11:
# 559 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 560 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 561 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects11
# 562 "data/maps/Zone17A/scripts.pory"
	return
# 563 "data/maps/Zone17A/scripts.pory"

# 564 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects11:
# 565 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 566 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 12
# 567 "data/maps/Zone17A/scripts.pory"
	return
# 568 "data/maps/Zone17A/scripts.pory"

# 569 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects12:
# 570 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 571 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 572 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects12
# 573 "data/maps/Zone17A/scripts.pory"
	return
# 574 "data/maps/Zone17A/scripts.pory"

# 575 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects12:
# 576 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 577 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 13
# 578 "data/maps/Zone17A/scripts.pory"
	return
# 579 "data/maps/Zone17A/scripts.pory"

# 580 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects13:
# 581 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 582 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 583 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects13
# 584 "data/maps/Zone17A/scripts.pory"
	return
# 585 "data/maps/Zone17A/scripts.pory"

# 586 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects13:
# 587 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 588 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 14
# 589 "data/maps/Zone17A/scripts.pory"
	return
# 590 "data/maps/Zone17A/scripts.pory"

# 591 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects14:
# 592 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 593 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 594 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects14
# 595 "data/maps/Zone17A/scripts.pory"
	return
# 596 "data/maps/Zone17A/scripts.pory"

# 597 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects14:
# 598 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 599 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 15
# 600 "data/maps/Zone17A/scripts.pory"
	return
# 601 "data/maps/Zone17A/scripts.pory"

# 602 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects15:
# 603 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 604 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 605 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects15
# 606 "data/maps/Zone17A/scripts.pory"
	return
# 607 "data/maps/Zone17A/scripts.pory"

# 608 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects15:
# 609 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 610 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 16
# 611 "data/maps/Zone17A/scripts.pory"
	return
# 612 "data/maps/Zone17A/scripts.pory"

# 613 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects16:
# 614 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 615 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 616 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects16
# 617 "data/maps/Zone17A/scripts.pory"
	return
# 618 "data/maps/Zone17A/scripts.pory"

# 619 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects16:
# 620 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 621 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 17
# 622 "data/maps/Zone17A/scripts.pory"
	return
# 623 "data/maps/Zone17A/scripts.pory"

# 624 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects17:
# 625 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 626 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 627 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects17
# 628 "data/maps/Zone17A/scripts.pory"
	return
# 629 "data/maps/Zone17A/scripts.pory"

# 630 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects17:
# 631 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 632 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 18
# 633 "data/maps/Zone17A/scripts.pory"
	return
# 634 "data/maps/Zone17A/scripts.pory"

# 635 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects18:
# 636 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 637 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 638 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects18
# 639 "data/maps/Zone17A/scripts.pory"
	return
# 640 "data/maps/Zone17A/scripts.pory"

# 641 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects18:
# 642 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 643 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 19
# 644 "data/maps/Zone17A/scripts.pory"
	return
# 645 "data/maps/Zone17A/scripts.pory"

# 646 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects19:
# 647 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 648 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 649 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects19
# 650 "data/maps/Zone17A/scripts.pory"
	return
# 651 "data/maps/Zone17A/scripts.pory"

# 652 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects19:
# 653 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 654 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 20
# 655 "data/maps/Zone17A/scripts.pory"
	return
# 656 "data/maps/Zone17A/scripts.pory"

# 657 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects20:
# 658 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 659 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 660 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects20
# 661 "data/maps/Zone17A/scripts.pory"
	return
# 662 "data/maps/Zone17A/scripts.pory"

# 663 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects20:
# 664 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 665 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 21
# 666 "data/maps/Zone17A/scripts.pory"
	return
# 667 "data/maps/Zone17A/scripts.pory"

# 668 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects21:
# 669 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 670 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 671 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects21
# 672 "data/maps/Zone17A/scripts.pory"
	return
# 673 "data/maps/Zone17A/scripts.pory"

# 674 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects21:
# 675 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 676 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 22
# 677 "data/maps/Zone17A/scripts.pory"
	return
# 678 "data/maps/Zone17A/scripts.pory"

# 679 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects22:
# 680 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 681 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 682 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects22
# 683 "data/maps/Zone17A/scripts.pory"
	return
# 684 "data/maps/Zone17A/scripts.pory"

# 685 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects22:
# 686 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 687 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 23
# 688 "data/maps/Zone17A/scripts.pory"
	return
# 689 "data/maps/Zone17A/scripts.pory"

# 690 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects23:
# 691 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 692 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 693 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects23
# 694 "data/maps/Zone17A/scripts.pory"
	return
# 695 "data/maps/Zone17A/scripts.pory"

# 696 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects23:
# 697 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 698 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 24
# 699 "data/maps/Zone17A/scripts.pory"
	return
# 700 "data/maps/Zone17A/scripts.pory"

# 701 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects24:
# 702 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 703 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 704 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects24
# 705 "data/maps/Zone17A/scripts.pory"
	return
# 706 "data/maps/Zone17A/scripts.pory"

# 707 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects24:
# 708 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 709 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 25
# 710 "data/maps/Zone17A/scripts.pory"
	return
# 711 "data/maps/Zone17A/scripts.pory"

# 712 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects25:
# 713 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 714 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 715 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects25
# 716 "data/maps/Zone17A/scripts.pory"
	return
# 717 "data/maps/Zone17A/scripts.pory"

# 718 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects25:
# 719 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 720 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 26
# 721 "data/maps/Zone17A/scripts.pory"
	return
# 722 "data/maps/Zone17A/scripts.pory"

# 723 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects26:
# 724 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 725 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 726 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects26
# 727 "data/maps/Zone17A/scripts.pory"
	return
# 728 "data/maps/Zone17A/scripts.pory"

# 729 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects26:
# 730 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 731 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 27
# 732 "data/maps/Zone17A/scripts.pory"
	return
# 733 "data/maps/Zone17A/scripts.pory"

# 734 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects27:
# 735 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 736 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 737 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects27
# 738 "data/maps/Zone17A/scripts.pory"
	return
# 739 "data/maps/Zone17A/scripts.pory"

# 740 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects27:
# 741 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 742 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 28
# 743 "data/maps/Zone17A/scripts.pory"
	return
# 744 "data/maps/Zone17A/scripts.pory"

# 745 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects28:
# 746 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 747 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 748 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects28
# 749 "data/maps/Zone17A/scripts.pory"
	return
# 750 "data/maps/Zone17A/scripts.pory"

# 751 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects28:
# 752 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 753 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 29
# 754 "data/maps/Zone17A/scripts.pory"
	return
# 755 "data/maps/Zone17A/scripts.pory"

# 756 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_PayRespects:
# 757 "data/maps/Zone17A/scripts.pory"
	.string "Would you like to pay respects?$"
# 758 "data/maps/Zone17A/scripts.pory"

# 759 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_PaidRespects:
# 760 "data/maps/Zone17A/scripts.pory"
	.string "{PLAYER} paid respects to the dead.$"
# 761 "data/maps/Zone17A/scripts.pory"

# 762 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign1:
# 763 "data/maps/Zone17A/scripts.pory"
	.string "July 27, '40 - September 14, '02\n"
# 764 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 765 "data/maps/Zone17A/scripts.pory"

# 766 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign2:
# 767 "data/maps/Zone17A/scripts.pory"
	.string "November 9, '03 - May 24, '95\n"
# 768 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 769 "data/maps/Zone17A/scripts.pory"

# 770 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign3:
# 771 "data/maps/Zone17A/scripts.pory"
	.string "December 13, '66 - July 5, '20\n"
# 772 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 773 "data/maps/Zone17A/scripts.pory"

# 774 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign4:
# 775 "data/maps/Zone17A/scripts.pory"
	.string "February 25, '47 - June 22, '15\n"
# 776 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 777 "data/maps/Zone17A/scripts.pory"

# 778 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign5:
# 779 "data/maps/Zone17A/scripts.pory"
	.string "April 28, '50 - October 1, '03\n"
# 780 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 781 "data/maps/Zone17A/scripts.pory"

# 782 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign6:
# 783 "data/maps/Zone17A/scripts.pory"
	.string "January 4, '60 - August 10, '19\n"
# 784 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 785 "data/maps/Zone17A/scripts.pory"

# 786 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign7:
# 787 "data/maps/Zone17A/scripts.pory"
	.string "October 11, '44 - February 16, '08\n"
# 788 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 789 "data/maps/Zone17A/scripts.pory"

# 790 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign8:
# 791 "data/maps/Zone17A/scripts.pory"
	.string "March 2, '45 - November 21, '04\n"
# 792 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 793 "data/maps/Zone17A/scripts.pory"

# 794 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign9:
# 795 "data/maps/Zone17A/scripts.pory"
	.string "August 20, '39 - January 6, '98\n"
# 796 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 797 "data/maps/Zone17A/scripts.pory"

# 798 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign10:
# 799 "data/maps/Zone17A/scripts.pory"
	.string "June 7, '48 - June 23, '15\n"
# 800 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 801 "data/maps/Zone17A/scripts.pory"

# 802 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign11:
# 803 "data/maps/Zone17A/scripts.pory"
	.string "December 29, '36 - June 17, '94\n"
# 804 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 805 "data/maps/Zone17A/scripts.pory"

# 806 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign12:
# 807 "data/maps/Zone17A/scripts.pory"
	.string "September 19, '49 - March 15, '00\n"
# 808 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 809 "data/maps/Zone17A/scripts.pory"

# 810 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign13:
# 811 "data/maps/Zone17A/scripts.pory"
	.string "December 3, '33 - June 18, '89\n"
# 812 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 813 "data/maps/Zone17A/scripts.pory"

# 814 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign14:
# 815 "data/maps/Zone17A/scripts.pory"
	.string "May 12, '62 - September 26, '17\n"
# 816 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 817 "data/maps/Zone17A/scripts.pory"

# 818 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Axle::
# 819 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_AXLE, Zone17A_Text_AxleIntro, Zone17A_Text_AxleDefeat
# 820 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 821 "data/maps/Zone17A/scripts.pory"
	end
# 822 "data/maps/Zone17A/scripts.pory"

# 823 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxleIntro:
# 824 "data/maps/Zone17A/scripts.pory"
	.string "Leave me alone!$"
# 825 "data/maps/Zone17A/scripts.pory"

# 826 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxleDefeat:
# 827 "data/maps/Zone17A/scripts.pory"
	.string "I… I…$"
# 828 "data/maps/Zone17A/scripts.pory"

# 829 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxlePostBattle:
# 830 "data/maps/Zone17A/scripts.pory"
	.string "He was my friend.\p"
# 831 "data/maps/Zone17A/scripts.pory"
	.string "I come here on the day it happened\n"
# 832 "data/maps/Zone17A/scripts.pory"
	.string "every year.$"
# 833 "data/maps/Zone17A/scripts.pory"

# 834 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Rafael::
# 835 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RAFAEL, Zone17A_Text_RafaelIntro, Zone17A_Text_RafaelDefeat
# 836 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_RafaelPostBattle, MSGBOX_AUTOCLOSE
# 837 "data/maps/Zone17A/scripts.pory"
	end
# 838 "data/maps/Zone17A/scripts.pory"

# 839 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelIntro:
# 840 "data/maps/Zone17A/scripts.pory"
	.string "Dear child, it can be hard to\n"
# 841 "data/maps/Zone17A/scripts.pory"
	.string "handle grief sometimes.\p"
# 842 "data/maps/Zone17A/scripts.pory"
	.string "May we have this battle to get my\n"
# 843 "data/maps/Zone17A/scripts.pory"
	.string "mind off of things?$"
# 844 "data/maps/Zone17A/scripts.pory"

# 845 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelDefeat:
# 846 "data/maps/Zone17A/scripts.pory"
	.string "Thank you, my friend.$"
# 847 "data/maps/Zone17A/scripts.pory"

# 848 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelPostBattle:
# 849 "data/maps/Zone17A/scripts.pory"
	.string "I come here a few times a year,\n"
# 850 "data/maps/Zone17A/scripts.pory"
	.string "to celebrate birthdays as well as\l"
# 851 "data/maps/Zone17A/scripts.pory"
	.string "the day of passing.$"
# 852 "data/maps/Zone17A/scripts.pory"

# 853 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Georgina::
# 854 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GEORGINA, Zone17A_Text_GeorginaIntro, Zone17A_Text_GeorginaDefeat
# 855 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_GeorginaPostBattle, MSGBOX_AUTOCLOSE
# 856 "data/maps/Zone17A/scripts.pory"
	end
# 857 "data/maps/Zone17A/scripts.pory"

# 858 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaIntro:
# 859 "data/maps/Zone17A/scripts.pory"
	.string "I can sense the souls of the passed…\n"
# 860 "data/maps/Zone17A/scripts.pory"
	.string "But there's something else, lurking…$"
# 861 "data/maps/Zone17A/scripts.pory"

# 862 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaDefeat:
# 863 "data/maps/Zone17A/scripts.pory"
	.string "There's fourteen… no…\n"
# 864 "data/maps/Zone17A/scripts.pory"
	.string "No… fifteen?$"
# 865 "data/maps/Zone17A/scripts.pory"

# 866 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaPostBattle:
# 867 "data/maps/Zone17A/scripts.pory"
	.string "The fourteen souls must be paid\n"
# 868 "data/maps/Zone17A/scripts.pory"
	.string "respects…\p"
# 869 "data/maps/Zone17A/scripts.pory"
	.string "The fifteenth soul must be calmed…$"

Zone17A_EventScript_Intro_Text_0:
# 44 "data/maps/Zone17A/scripts.pory"
	.string "Release us… Please…\pFourteen souls…\nTrapped here…\pInscripted in the stones…$"

Zone17A_EventScript_StopLeave_Text_0:
# 92 "data/maps/Zone17A/scripts.pory"
	.string "The woods ahead are too thick to\n"
	.string "traverse…$"

Zone17A_EventScript_RiddleSign_Text_0:
# 103 "data/maps/Zone17A/scripts.pory"
	.string "There is a spot that looks like it\ncan fit the Odd Keystone.\pWould you like to place the\nOdd Keystone?$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_0:
# 185 "data/maps/Zone17A/scripts.pory"
	.string "Save us from the demon, please…$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_1:
# 200 "data/maps/Zone17A/scripts.pory"
	.string "{COLOR BLUE}Mia{COLOR DARK_GRAY}: There's no one left to play with\n"
	.string "anymore…$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_2:
# 205 "data/maps/Zone17A/scripts.pory"
	.string "{COLOR BLUE}Mia{COLOR DARK_GRAY}: Oh… another toy to play with?$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_3:
# 210 "data/maps/Zone17A/scripts.pory"
	.string "{COLOR BLUE}Mia{COLOR DARK_GRAY}: You'll join my COLLECTION OF SOULS\n"
	.string "TO PLAY WITH, WON'T YOU?$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_4:
# 220 "data/maps/Zone17A/scripts.pory"
	.string "{COLOR BLUE}Mia{COLOR DARK_GRAY}: AH!!!!!$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_5:
# 229 "data/maps/Zone17A/scripts.pory"
	.string "Thank you…\nThe demon is vanquished…\lFinally, we may know peace…$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_6:
# 276 "data/maps/Zone17A/scripts.pory"
	.string "There's something shimmering on the\nground by your feet!$"

Zone17A_StartSpiritombBattle_Text_0:
# 289 "data/maps/Zone17A/scripts.pory"
	.string "{PLAYER} placed the Odd Keystone.$"

Zone17A_StartSpiritombBattle_Text_1:
# 298 "data/maps/Zone17A/scripts.pory"
	.string "Spiritomb disappeared…$"

Zone17A_Text_RiddleSign::
# 118 "data/maps/Zone17A/scripts.pory"
	.string "We celebrate the day of life\n"
	.string "With boundless splurge and wonder,\p"
	.string "We celebrate the day of death\n"
	.string "With rain, lightning, and thunder,\p"
	.string "Bring peace to those who still\n"
	.string "remember every cherished date,\p"
	.string "Another year of special days,\n"
	.string "They number twenty-eight.$"
