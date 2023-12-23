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
	setvar VAR_MUGSHOT_ID, MUGSHOT_MIA
# 213 "data/maps/Zone17A/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone17A_EventScript_InitiateLeviathanBattle_9
# 213 "data/maps/Zone17A/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone17A_EventScript_InitiateLeviathanBattle_9
# 218 "data/maps/Zone17A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIA_LEVIATHAN_15, Zone15B_Text_Leviathan13Defeat
Zone17A_EventScript_InitiateLeviathanBattle_8:
# 220 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 221 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_4
# 222 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_15
# 223 "data/maps/Zone17A/scripts.pory"
	removeobject 2
# 224 "data/maps/Zone17A/scripts.pory"
	delay 48
# 225 "data/maps/Zone17A/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 226 "data/maps/Zone17A/scripts.pory"
	waitmovement 0
# 227 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 228 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 229 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 230 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_5
# 231 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 30
# 232 "data/maps/Zone17A/scripts.pory"
	delay 16
# 233 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 234 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 235 "data/maps/Zone17A/scripts.pory"
	delay 16
# 236 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 237 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 238 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 239 "data/maps/Zone17A/scripts.pory"
	delay 16
# 240 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 241 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 242 "data/maps/Zone17A/scripts.pory"
	delay 16
# 243 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 244 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 245 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 246 "data/maps/Zone17A/scripts.pory"
	delay 16
# 247 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 248 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 249 "data/maps/Zone17A/scripts.pory"
	delay 16
# 250 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 251 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 252 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 253 "data/maps/Zone17A/scripts.pory"
	delay 16
# 254 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 255 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 256 "data/maps/Zone17A/scripts.pory"
	delay 16
# 257 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 258 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 259 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 260 "data/maps/Zone17A/scripts.pory"
	delay 8
# 261 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 262 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 263 "data/maps/Zone17A/scripts.pory"
	delay 8
# 264 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 265 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 266 "data/maps/Zone17A/scripts.pory"
	delay 8
# 267 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 268 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 269 "data/maps/Zone17A/scripts.pory"
	delay 8
# 270 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 271 "data/maps/Zone17A/scripts.pory"
	addobject 1
# 272 "data/maps/Zone17A/scripts.pory"
	setobjectxy 1, 13, 6
# 273 "data/maps/Zone17A/scripts.pory"
	delay 8
# 274 "data/maps/Zone17A/scripts.pory"
	removeobject 1
# 275 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_HIDE_ZONE17A_HEX_MANIAC
# 276 "data/maps/Zone17A/scripts.pory"
	delay 8
# 277 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_EventScript_InitiateLeviathanBattle_Text_6, MSGBOX_DEFAULT
# 278 "data/maps/Zone17A/scripts.pory"
	giveitem ITEM_TM29
# 279 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_HIDE_ZONE17A_PORYGON
# 280 "data/maps/Zone17A/scripts.pory"
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
# 214 "data/maps/Zone17A/scripts.pory"
	setflag FLAG_DISABLE_PREVIEW
# 215 "data/maps/Zone17A/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL, Zone15B_Text_Leviathan13Defeat
# 216 "data/maps/Zone17A/scripts.pory"
	clearflag FLAG_DISABLE_PREVIEW
	goto Zone17A_EventScript_InitiateLeviathanBattle_8


# 284 "data/maps/Zone17A/scripts.pory"
Zone17A_Movement_Mia:
# 285 "data/maps/Zone17A/scripts.pory"
	slide_right
# 285 "data/maps/Zone17A/scripts.pory"
	slide_right
	step_end

Zone17A_StartSpiritombBattle::
# 289 "data/maps/Zone17A/scripts.pory"
	removeitem ITEM_ODD_KEYSTONE
# 290 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_0, MSGBOX_AUTOCLOSE
# 291 "data/maps/Zone17A/scripts.pory"
	delay 48
# 292 "data/maps/Zone17A/scripts.pory"
	setwildbattle SPECIES_SPIRITOMB, 45, ITEM_NONE
# 293 "data/maps/Zone17A/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, 2
# 294 "data/maps/Zone17A/scripts.pory"
	delay 40
# 295 "data/maps/Zone17A/scripts.pory"
	waitmoncry
# 296 "data/maps/Zone17A/scripts.pory"
	dowildbattle
# 297 "data/maps/Zone17A/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 298 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Zone17A_StartSpiritombBattle_2
Zone17A_StartSpiritombBattle_1:
# 301 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Zone17A_StartSpiritombBattle_5
Zone17A_StartSpiritombBattle_4:
# 304 "data/maps/Zone17A/scripts.pory"
	release
	end

Zone17A_StartSpiritombBattle_2:
# 299 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_1
	goto Zone17A_StartSpiritombBattle_1

Zone17A_StartSpiritombBattle_5:
# 302 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_StartSpiritombBattle_Text_1
	goto Zone17A_StartSpiritombBattle_4


# 308 "data/maps/Zone17A/scripts.pory"

# 309 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign1::
# 310 "data/maps/Zone17A/scripts.pory"
	lock
# 311 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign1, MSGBOX_SIGN
# 312 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 16
# 313 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects16
# 314 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 19
# 315 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects19
# 316 "data/maps/Zone17A/scripts.pory"
	release
# 317 "data/maps/Zone17A/scripts.pory"
	end
# 318 "data/maps/Zone17A/scripts.pory"

# 319 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign2::
# 320 "data/maps/Zone17A/scripts.pory"
	lock
# 321 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign2, MSGBOX_SIGN
# 322 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 24
# 323 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects24
# 324 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 9
# 325 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects9
# 326 "data/maps/Zone17A/scripts.pory"
	release
# 327 "data/maps/Zone17A/scripts.pory"
	end
# 328 "data/maps/Zone17A/scripts.pory"

# 329 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign3::
# 330 "data/maps/Zone17A/scripts.pory"
	lock
# 331 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign3, MSGBOX_SIGN
# 332 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 27
# 333 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects27
# 334 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 15
# 335 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects15
# 336 "data/maps/Zone17A/scripts.pory"
	release
# 337 "data/maps/Zone17A/scripts.pory"
	end
# 338 "data/maps/Zone17A/scripts.pory"

# 339 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign4::
# 340 "data/maps/Zone17A/scripts.pory"
	lock
# 341 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign4, MSGBOX_SIGN
# 342 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 4
# 343 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects4
# 344 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 13
# 345 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects13
# 346 "data/maps/Zone17A/scripts.pory"
	release
# 347 "data/maps/Zone17A/scripts.pory"
	end
# 348 "data/maps/Zone17A/scripts.pory"

# 349 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign5::
# 350 "data/maps/Zone17A/scripts.pory"
	lock
# 351 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign5, MSGBOX_SIGN
# 352 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 7
# 353 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects7
# 354 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 22
# 355 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects22
# 356 "data/maps/Zone17A/scripts.pory"
	release
# 357 "data/maps/Zone17A/scripts.pory"
	end
# 358 "data/maps/Zone17A/scripts.pory"

# 359 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign6::
# 360 "data/maps/Zone17A/scripts.pory"
	lock
# 361 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign6, MSGBOX_SIGN
# 362 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 1
# 363 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects1
# 364 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 17
# 365 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects17
# 366 "data/maps/Zone17A/scripts.pory"
	release
# 367 "data/maps/Zone17A/scripts.pory"
	end
# 368 "data/maps/Zone17A/scripts.pory"

# 369 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign7::
# 370 "data/maps/Zone17A/scripts.pory"
	lock
# 371 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign7, MSGBOX_SIGN
# 372 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 23
# 373 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects23
# 374 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 3
# 375 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects3
# 376 "data/maps/Zone17A/scripts.pory"
	release
# 377 "data/maps/Zone17A/scripts.pory"
	end
# 378 "data/maps/Zone17A/scripts.pory"

# 379 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign8::
# 380 "data/maps/Zone17A/scripts.pory"
	lock
# 381 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign8, MSGBOX_SIGN
# 382 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 5
# 383 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects5
# 384 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 25
# 385 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects25
# 386 "data/maps/Zone17A/scripts.pory"
	release
# 387 "data/maps/Zone17A/scripts.pory"
	end
# 388 "data/maps/Zone17A/scripts.pory"

# 389 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign9::
# 390 "data/maps/Zone17A/scripts.pory"
	lock
# 391 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign9, MSGBOX_SIGN
# 392 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 18
# 393 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects18
# 394 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 2
# 395 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects2
# 396 "data/maps/Zone17A/scripts.pory"
	release
# 397 "data/maps/Zone17A/scripts.pory"
	end
# 398 "data/maps/Zone17A/scripts.pory"

# 399 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign10::
# 400 "data/maps/Zone17A/scripts.pory"
	lock
# 401 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign10, MSGBOX_SIGN
# 402 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 10
# 403 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects10
# 404 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 14
# 405 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects14
# 406 "data/maps/Zone17A/scripts.pory"
	release
# 407 "data/maps/Zone17A/scripts.pory"
	end
# 408 "data/maps/Zone17A/scripts.pory"

# 409 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign11::
# 410 "data/maps/Zone17A/scripts.pory"
	lock
# 411 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign11, MSGBOX_SIGN
# 412 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 28
# 413 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects28
# 414 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 11
# 415 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects11
# 416 "data/maps/Zone17A/scripts.pory"
	release
# 417 "data/maps/Zone17A/scripts.pory"
	end
# 418 "data/maps/Zone17A/scripts.pory"

# 419 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign12::
# 420 "data/maps/Zone17A/scripts.pory"
	lock
# 421 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign12, MSGBOX_SIGN
# 422 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 20
# 423 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects20
# 424 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 6
# 425 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects6
# 426 "data/maps/Zone17A/scripts.pory"
	release
# 427 "data/maps/Zone17A/scripts.pory"
	end
# 428 "data/maps/Zone17A/scripts.pory"

# 429 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign13::
# 430 "data/maps/Zone17A/scripts.pory"
	lock
# 431 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign13, MSGBOX_SIGN
# 432 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 26
# 433 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects26
# 434 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 12
# 435 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects12
# 436 "data/maps/Zone17A/scripts.pory"
	release
# 437 "data/maps/Zone17A/scripts.pory"
	end
# 438 "data/maps/Zone17A/scripts.pory"

# 439 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Sign14::
# 440 "data/maps/Zone17A/scripts.pory"
	lock
# 441 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_Sign14, MSGBOX_SIGN
# 442 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 8
# 443 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects8
# 444 "data/maps/Zone17A/scripts.pory"
	compare VAR_ZONE_17_STATE, 21
# 445 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PayRespects21
# 446 "data/maps/Zone17A/scripts.pory"
	release
# 447 "data/maps/Zone17A/scripts.pory"
	end
# 448 "data/maps/Zone17A/scripts.pory"

# 449 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects1:
# 450 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 451 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 452 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects1
# 453 "data/maps/Zone17A/scripts.pory"
	return
# 454 "data/maps/Zone17A/scripts.pory"

# 455 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects1:
# 456 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 457 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 2
# 458 "data/maps/Zone17A/scripts.pory"
	return
# 459 "data/maps/Zone17A/scripts.pory"

# 460 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects2:
# 461 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 462 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 463 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects2
# 464 "data/maps/Zone17A/scripts.pory"
	return
# 465 "data/maps/Zone17A/scripts.pory"

# 466 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects2:
# 467 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 468 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 3
# 469 "data/maps/Zone17A/scripts.pory"
	return
# 470 "data/maps/Zone17A/scripts.pory"

# 471 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects3:
# 472 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 473 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 474 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects3
# 475 "data/maps/Zone17A/scripts.pory"
	return
# 476 "data/maps/Zone17A/scripts.pory"

# 477 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects3:
# 478 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 479 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 4
# 480 "data/maps/Zone17A/scripts.pory"
	return
# 481 "data/maps/Zone17A/scripts.pory"

# 482 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects4:
# 483 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 484 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 485 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects4
# 486 "data/maps/Zone17A/scripts.pory"
	return
# 487 "data/maps/Zone17A/scripts.pory"

# 488 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects4:
# 489 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 490 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 5
# 491 "data/maps/Zone17A/scripts.pory"
	return
# 492 "data/maps/Zone17A/scripts.pory"

# 493 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects5:
# 494 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 495 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 496 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects5
# 497 "data/maps/Zone17A/scripts.pory"
	return
# 498 "data/maps/Zone17A/scripts.pory"

# 499 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects5:
# 500 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 501 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 6
# 502 "data/maps/Zone17A/scripts.pory"
	return
# 503 "data/maps/Zone17A/scripts.pory"

# 504 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects6:
# 505 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 506 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 507 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects6
# 508 "data/maps/Zone17A/scripts.pory"
	return
# 509 "data/maps/Zone17A/scripts.pory"

# 510 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects6:
# 511 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 512 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 7
# 513 "data/maps/Zone17A/scripts.pory"
	return
# 514 "data/maps/Zone17A/scripts.pory"

# 515 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects7:
# 516 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 517 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 518 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects7
# 519 "data/maps/Zone17A/scripts.pory"
	return
# 520 "data/maps/Zone17A/scripts.pory"

# 521 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects7:
# 522 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 523 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 8
# 524 "data/maps/Zone17A/scripts.pory"
	return
# 525 "data/maps/Zone17A/scripts.pory"

# 526 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects8:
# 527 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 528 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 529 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects8
# 530 "data/maps/Zone17A/scripts.pory"
	return
# 531 "data/maps/Zone17A/scripts.pory"

# 532 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects8:
# 533 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 534 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 9
# 535 "data/maps/Zone17A/scripts.pory"
	return
# 536 "data/maps/Zone17A/scripts.pory"

# 537 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects9:
# 538 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 539 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 540 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects9
# 541 "data/maps/Zone17A/scripts.pory"
	return
# 542 "data/maps/Zone17A/scripts.pory"

# 543 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects9:
# 544 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 545 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 10
# 546 "data/maps/Zone17A/scripts.pory"
	return
# 547 "data/maps/Zone17A/scripts.pory"

# 548 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects10:
# 549 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 550 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 551 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects10
# 552 "data/maps/Zone17A/scripts.pory"
	return
# 553 "data/maps/Zone17A/scripts.pory"

# 554 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects10:
# 555 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 556 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 11
# 557 "data/maps/Zone17A/scripts.pory"
	return
# 558 "data/maps/Zone17A/scripts.pory"

# 559 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects11:
# 560 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 561 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 562 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects11
# 563 "data/maps/Zone17A/scripts.pory"
	return
# 564 "data/maps/Zone17A/scripts.pory"

# 565 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects11:
# 566 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 567 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 12
# 568 "data/maps/Zone17A/scripts.pory"
	return
# 569 "data/maps/Zone17A/scripts.pory"

# 570 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects12:
# 571 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 572 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 573 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects12
# 574 "data/maps/Zone17A/scripts.pory"
	return
# 575 "data/maps/Zone17A/scripts.pory"

# 576 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects12:
# 577 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 578 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 13
# 579 "data/maps/Zone17A/scripts.pory"
	return
# 580 "data/maps/Zone17A/scripts.pory"

# 581 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects13:
# 582 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 583 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 584 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects13
# 585 "data/maps/Zone17A/scripts.pory"
	return
# 586 "data/maps/Zone17A/scripts.pory"

# 587 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects13:
# 588 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 589 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 14
# 590 "data/maps/Zone17A/scripts.pory"
	return
# 591 "data/maps/Zone17A/scripts.pory"

# 592 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects14:
# 593 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 594 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 595 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects14
# 596 "data/maps/Zone17A/scripts.pory"
	return
# 597 "data/maps/Zone17A/scripts.pory"

# 598 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects14:
# 599 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 600 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 15
# 601 "data/maps/Zone17A/scripts.pory"
	return
# 602 "data/maps/Zone17A/scripts.pory"

# 603 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects15:
# 604 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 605 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 606 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects15
# 607 "data/maps/Zone17A/scripts.pory"
	return
# 608 "data/maps/Zone17A/scripts.pory"

# 609 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects15:
# 610 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 611 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 16
# 612 "data/maps/Zone17A/scripts.pory"
	return
# 613 "data/maps/Zone17A/scripts.pory"

# 614 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects16:
# 615 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 616 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 617 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects16
# 618 "data/maps/Zone17A/scripts.pory"
	return
# 619 "data/maps/Zone17A/scripts.pory"

# 620 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects16:
# 621 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 622 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 17
# 623 "data/maps/Zone17A/scripts.pory"
	return
# 624 "data/maps/Zone17A/scripts.pory"

# 625 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects17:
# 626 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 627 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 628 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects17
# 629 "data/maps/Zone17A/scripts.pory"
	return
# 630 "data/maps/Zone17A/scripts.pory"

# 631 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects17:
# 632 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 633 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 18
# 634 "data/maps/Zone17A/scripts.pory"
	return
# 635 "data/maps/Zone17A/scripts.pory"

# 636 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects18:
# 637 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 638 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 639 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects18
# 640 "data/maps/Zone17A/scripts.pory"
	return
# 641 "data/maps/Zone17A/scripts.pory"

# 642 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects18:
# 643 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 644 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 19
# 645 "data/maps/Zone17A/scripts.pory"
	return
# 646 "data/maps/Zone17A/scripts.pory"

# 647 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects19:
# 648 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 649 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 650 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects19
# 651 "data/maps/Zone17A/scripts.pory"
	return
# 652 "data/maps/Zone17A/scripts.pory"

# 653 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects19:
# 654 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 655 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 20
# 656 "data/maps/Zone17A/scripts.pory"
	return
# 657 "data/maps/Zone17A/scripts.pory"

# 658 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects20:
# 659 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 660 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 661 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects20
# 662 "data/maps/Zone17A/scripts.pory"
	return
# 663 "data/maps/Zone17A/scripts.pory"

# 664 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects20:
# 665 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 666 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 21
# 667 "data/maps/Zone17A/scripts.pory"
	return
# 668 "data/maps/Zone17A/scripts.pory"

# 669 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects21:
# 670 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 671 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 672 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects21
# 673 "data/maps/Zone17A/scripts.pory"
	return
# 674 "data/maps/Zone17A/scripts.pory"

# 675 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects21:
# 676 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 677 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 22
# 678 "data/maps/Zone17A/scripts.pory"
	return
# 679 "data/maps/Zone17A/scripts.pory"

# 680 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects22:
# 681 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 682 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 683 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects22
# 684 "data/maps/Zone17A/scripts.pory"
	return
# 685 "data/maps/Zone17A/scripts.pory"

# 686 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects22:
# 687 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 688 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 23
# 689 "data/maps/Zone17A/scripts.pory"
	return
# 690 "data/maps/Zone17A/scripts.pory"

# 691 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects23:
# 692 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 693 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 694 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects23
# 695 "data/maps/Zone17A/scripts.pory"
	return
# 696 "data/maps/Zone17A/scripts.pory"

# 697 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects23:
# 698 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 699 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 24
# 700 "data/maps/Zone17A/scripts.pory"
	return
# 701 "data/maps/Zone17A/scripts.pory"

# 702 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects24:
# 703 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 704 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 705 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects24
# 706 "data/maps/Zone17A/scripts.pory"
	return
# 707 "data/maps/Zone17A/scripts.pory"

# 708 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects24:
# 709 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 710 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 25
# 711 "data/maps/Zone17A/scripts.pory"
	return
# 712 "data/maps/Zone17A/scripts.pory"

# 713 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects25:
# 714 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 715 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 716 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects25
# 717 "data/maps/Zone17A/scripts.pory"
	return
# 718 "data/maps/Zone17A/scripts.pory"

# 719 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects25:
# 720 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 721 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 26
# 722 "data/maps/Zone17A/scripts.pory"
	return
# 723 "data/maps/Zone17A/scripts.pory"

# 724 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects26:
# 725 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 726 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 727 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects26
# 728 "data/maps/Zone17A/scripts.pory"
	return
# 729 "data/maps/Zone17A/scripts.pory"

# 730 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects26:
# 731 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 732 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 27
# 733 "data/maps/Zone17A/scripts.pory"
	return
# 734 "data/maps/Zone17A/scripts.pory"

# 735 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects27:
# 736 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 737 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 738 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects27
# 739 "data/maps/Zone17A/scripts.pory"
	return
# 740 "data/maps/Zone17A/scripts.pory"

# 741 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects27:
# 742 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 743 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 28
# 744 "data/maps/Zone17A/scripts.pory"
	return
# 745 "data/maps/Zone17A/scripts.pory"

# 746 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PayRespects28:
# 747 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PayRespects, MSGBOX_YESNO
# 748 "data/maps/Zone17A/scripts.pory"
	compare VAR_RESULT, YES
# 749 "data/maps/Zone17A/scripts.pory"
	call_if_eq Zone17A_EventScript_PaidRespects28
# 750 "data/maps/Zone17A/scripts.pory"
	return
# 751 "data/maps/Zone17A/scripts.pory"

# 752 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_PaidRespects28:
# 753 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_PaidRespects, MSGBOX_AUTOCLOSE
# 754 "data/maps/Zone17A/scripts.pory"
	setvar VAR_ZONE_17_STATE, 29
# 755 "data/maps/Zone17A/scripts.pory"
	return
# 756 "data/maps/Zone17A/scripts.pory"

# 757 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_PayRespects:
# 758 "data/maps/Zone17A/scripts.pory"
	.string "Would you like to pay respects?$"
# 759 "data/maps/Zone17A/scripts.pory"

# 760 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_PaidRespects:
# 761 "data/maps/Zone17A/scripts.pory"
	.string "{PLAYER} paid respects to the dead.$"
# 762 "data/maps/Zone17A/scripts.pory"

# 763 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign1:
# 764 "data/maps/Zone17A/scripts.pory"
	.string "July 27, '40 - September 14, '02\n"
# 765 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 766 "data/maps/Zone17A/scripts.pory"

# 767 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign2:
# 768 "data/maps/Zone17A/scripts.pory"
	.string "November 9, '03 - May 24, '95\n"
# 769 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 770 "data/maps/Zone17A/scripts.pory"

# 771 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign3:
# 772 "data/maps/Zone17A/scripts.pory"
	.string "December 13, '66 - July 5, '20\n"
# 773 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 774 "data/maps/Zone17A/scripts.pory"

# 775 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign4:
# 776 "data/maps/Zone17A/scripts.pory"
	.string "February 25, '47 - June 22, '15\n"
# 777 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 778 "data/maps/Zone17A/scripts.pory"

# 779 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign5:
# 780 "data/maps/Zone17A/scripts.pory"
	.string "April 28, '50 - October 1, '03\n"
# 781 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 782 "data/maps/Zone17A/scripts.pory"

# 783 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign6:
# 784 "data/maps/Zone17A/scripts.pory"
	.string "January 4, '60 - August 10, '19\n"
# 785 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 786 "data/maps/Zone17A/scripts.pory"

# 787 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign7:
# 788 "data/maps/Zone17A/scripts.pory"
	.string "October 11, '44 - February 16, '08\n"
# 789 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 790 "data/maps/Zone17A/scripts.pory"

# 791 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign8:
# 792 "data/maps/Zone17A/scripts.pory"
	.string "March 2, '45 - November 21, '04\n"
# 793 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 794 "data/maps/Zone17A/scripts.pory"

# 795 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign9:
# 796 "data/maps/Zone17A/scripts.pory"
	.string "August 20, '39 - January 6, '98\n"
# 797 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 798 "data/maps/Zone17A/scripts.pory"

# 799 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign10:
# 800 "data/maps/Zone17A/scripts.pory"
	.string "June 7, '48 - June 23, '15\n"
# 801 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 802 "data/maps/Zone17A/scripts.pory"

# 803 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign11:
# 804 "data/maps/Zone17A/scripts.pory"
	.string "December 29, '36 - June 17, '94\n"
# 805 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 806 "data/maps/Zone17A/scripts.pory"

# 807 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign12:
# 808 "data/maps/Zone17A/scripts.pory"
	.string "September 19, '49 - March 15, '00\n"
# 809 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 810 "data/maps/Zone17A/scripts.pory"

# 811 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign13:
# 812 "data/maps/Zone17A/scripts.pory"
	.string "December 3, '33 - June 18, '89\n"
# 813 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 814 "data/maps/Zone17A/scripts.pory"

# 815 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_Sign14:
# 816 "data/maps/Zone17A/scripts.pory"
	.string "May 12, '62 - September 26, '17\n"
# 817 "data/maps/Zone17A/scripts.pory"
	.string "The name has been eroded off…$"
# 818 "data/maps/Zone17A/scripts.pory"

# 819 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Axle::
# 820 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_AXLE, Zone17A_Text_AxleIntro, Zone17A_Text_AxleDefeat
# 821 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 822 "data/maps/Zone17A/scripts.pory"
	end
# 823 "data/maps/Zone17A/scripts.pory"

# 824 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxleIntro:
# 825 "data/maps/Zone17A/scripts.pory"
	.string "Leave me alone!$"
# 826 "data/maps/Zone17A/scripts.pory"

# 827 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxleDefeat:
# 828 "data/maps/Zone17A/scripts.pory"
	.string "I… I…$"
# 829 "data/maps/Zone17A/scripts.pory"

# 830 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_AxlePostBattle:
# 831 "data/maps/Zone17A/scripts.pory"
	.string "He was my friend.\p"
# 832 "data/maps/Zone17A/scripts.pory"
	.string "I come here on the day it happened\n"
# 833 "data/maps/Zone17A/scripts.pory"
	.string "every year.$"
# 834 "data/maps/Zone17A/scripts.pory"

# 835 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Rafael::
# 836 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_RAFAEL, Zone17A_Text_RafaelIntro, Zone17A_Text_RafaelDefeat
# 837 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_RafaelPostBattle, MSGBOX_AUTOCLOSE
# 838 "data/maps/Zone17A/scripts.pory"
	end
# 839 "data/maps/Zone17A/scripts.pory"

# 840 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelIntro:
# 841 "data/maps/Zone17A/scripts.pory"
	.string "Dear child, it can be hard to\n"
# 842 "data/maps/Zone17A/scripts.pory"
	.string "handle grief sometimes.\p"
# 843 "data/maps/Zone17A/scripts.pory"
	.string "May we have this battle to get my\n"
# 844 "data/maps/Zone17A/scripts.pory"
	.string "mind off of things?$"
# 845 "data/maps/Zone17A/scripts.pory"

# 846 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelDefeat:
# 847 "data/maps/Zone17A/scripts.pory"
	.string "Thank you, my friend.$"
# 848 "data/maps/Zone17A/scripts.pory"

# 849 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_RafaelPostBattle:
# 850 "data/maps/Zone17A/scripts.pory"
	.string "I come here a few times a year,\n"
# 851 "data/maps/Zone17A/scripts.pory"
	.string "to celebrate birthdays as well as\l"
# 852 "data/maps/Zone17A/scripts.pory"
	.string "the day of passing.$"
# 853 "data/maps/Zone17A/scripts.pory"

# 854 "data/maps/Zone17A/scripts.pory"
Zone17A_EventScript_Georgina::
# 855 "data/maps/Zone17A/scripts.pory"
	trainerbattle_single TRAINER_PBL_GEORGINA, Zone17A_Text_GeorginaIntro, Zone17A_Text_GeorginaDefeat
# 856 "data/maps/Zone17A/scripts.pory"
	msgbox Zone17A_Text_GeorginaPostBattle, MSGBOX_AUTOCLOSE
# 857 "data/maps/Zone17A/scripts.pory"
	end
# 858 "data/maps/Zone17A/scripts.pory"

# 859 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaIntro:
# 860 "data/maps/Zone17A/scripts.pory"
	.string "I can sense the souls of the passed…\n"
# 861 "data/maps/Zone17A/scripts.pory"
	.string "But there's something else, lurking…$"
# 862 "data/maps/Zone17A/scripts.pory"

# 863 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaDefeat:
# 864 "data/maps/Zone17A/scripts.pory"
	.string "There's fourteen… no…\n"
# 865 "data/maps/Zone17A/scripts.pory"
	.string "No… fifteen?$"
# 866 "data/maps/Zone17A/scripts.pory"

# 867 "data/maps/Zone17A/scripts.pory"
Zone17A_Text_GeorginaPostBattle:
# 868 "data/maps/Zone17A/scripts.pory"
	.string "The fourteen souls must be paid\n"
# 869 "data/maps/Zone17A/scripts.pory"
	.string "respects…\p"
# 870 "data/maps/Zone17A/scripts.pory"
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
# 221 "data/maps/Zone17A/scripts.pory"
	.string "{COLOR BLUE}Mia{COLOR DARK_GRAY}: AH!!!!!$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_5:
# 230 "data/maps/Zone17A/scripts.pory"
	.string "Thank you…\nThe demon is vanquished…\lFinally, we may know peace…$"

Zone17A_EventScript_InitiateLeviathanBattle_Text_6:
# 277 "data/maps/Zone17A/scripts.pory"
	.string "There's something shimmering on the\nground by your feet!$"

Zone17A_StartSpiritombBattle_Text_0:
# 290 "data/maps/Zone17A/scripts.pory"
	.string "{PLAYER} placed the Odd Keystone.$"

Zone17A_StartSpiritombBattle_Text_1:
# 299 "data/maps/Zone17A/scripts.pory"
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
