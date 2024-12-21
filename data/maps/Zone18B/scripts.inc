Zone18B_MapScripts::
# 2 "data/maps/Zone18B/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Zone18B_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Zone18B_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 1
# 4 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_JOHN, Zone18B_EventScript_OpenNormalRoomDoors
# 5 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_GLENN, Zone18B_EventScript_OpenRockRoomDoors
# 6 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_JAY, Zone18B_EventScript_OpenIceRoomDoors
# 7 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_TYLER, Zone18B_EventScript_OpenDarkRoomDoors
# 8 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_TERRENCE, Zone18B_EventScript_OpenFlyingRoomDoors
# 9 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_MARTY, Zone18B_EventScript_OpenPsychicRoomDoors
# 10 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_KARI, Zone18B_EventScript_OpenFightingRoomDoors
# 11 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_ABRAHAM, Zone18B_EventScript_OpenDragonRoomDoors
# 12 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_MELINDA, Zone18B_EventScript_OpenFairyRoomDoors
# 13 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_EMILIO, Zone18B_EventScript_OpenGroundRoomDoors
# 14 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_REX, Zone18B_EventScript_OpenBugRoomDoors
# 15 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_LOUIS, Zone18B_EventScript_OpenSteelRoomDoors
# 16 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_LEROY, Zone18B_EventScript_OpenPoisonRoomDoors
# 17 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_ELTON, Zone18B_EventScript_OpenElectricRoomDoors
# 18 "data/maps/Zone18B/scripts.pory"
	call_if_defeated TRAINER_PBL_WILLIE, Zone18B_EventScript_OpenFireRoomDoors
	return


Zone18B_EventScript_DoorLocked::
# 23 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_DoorLocked_Text_0, MSGBOX_DEFAULT
# 24 "data/maps/Zone18B/scripts.pory"
	releaseall
	end


Zone18B_EventScript_RockRoomDoor::
# 29 "data/maps/Zone18B/scripts.pory"
	lockall
# 30 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_JOHN, Zone18B_EventScript_DoorLocked
# 31 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_RockRoomDoor_Text_0, MSGBOX_YESNO
# 32 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RockRoomDoor_2
Zone18B_EventScript_RockRoomDoor_1:
# 38 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RockRoomDoor_2:
# 33 "data/maps/Zone18B/scripts.pory"
	closemessage
# 34 "data/maps/Zone18B/scripts.pory"
	delay 30
# 35 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 5, 7, 189
# 36 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RockRoomDoor_1


Zone18B_EventScript_IceRoomDoor::
# 43 "data/maps/Zone18B/scripts.pory"
	lockall
# 44 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_JOHN, Zone18B_EventScript_DoorLocked
# 45 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_IceRoomDoor_Text_0, MSGBOX_YESNO
# 46 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_IceRoomDoor_2
Zone18B_EventScript_IceRoomDoor_1:
# 52 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_IceRoomDoor_2:
# 47 "data/maps/Zone18B/scripts.pory"
	closemessage
# 48 "data/maps/Zone18B/scripts.pory"
	delay 30
# 49 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 6, 1, 176
# 50 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_IceRoomDoor_1


Zone18B_EventScript_DarkRoomDoor::
# 57 "data/maps/Zone18B/scripts.pory"
	lockall
# 58 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_GLENN, Zone18B_EventScript_DoorLocked
# 59 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_DarkRoomDoor_Text_0, MSGBOX_YESNO
# 60 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_DarkRoomDoor_2
Zone18B_EventScript_DarkRoomDoor_1:
# 66 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_DarkRoomDoor_2:
# 61 "data/maps/Zone18B/scripts.pory"
	closemessage
# 62 "data/maps/Zone18B/scripts.pory"
	delay 30
# 63 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 13, 7, 163
# 64 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_DarkRoomDoor_1


Zone18B_EventScript_LeftFlyingRoomDoor::
# 71 "data/maps/Zone18B/scripts.pory"
	lockall
# 72 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_GLENN, Zone18B_EventScript_DoorLocked
# 73 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFlyingRoomDoor_Text_0, MSGBOX_YESNO
# 74 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFlyingRoomDoor_2
Zone18B_EventScript_LeftFlyingRoomDoor_1:
# 80 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftFlyingRoomDoor_2:
# 75 "data/maps/Zone18B/scripts.pory"
	closemessage
# 76 "data/maps/Zone18B/scripts.pory"
	delay 30
# 77 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 14, 1, 150
# 78 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftFlyingRoomDoor_1


Zone18B_EventScript_RightFlyingRoomDoor::
# 85 "data/maps/Zone18B/scripts.pory"
	lockall
# 86 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_JAY, Zone18B_EventScript_DoorLocked
# 87 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFlyingRoomDoor_Text_0, MSGBOX_YESNO
# 88 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFlyingRoomDoor_2
Zone18B_EventScript_RightFlyingRoomDoor_1:
# 94 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightFlyingRoomDoor_2:
# 89 "data/maps/Zone18B/scripts.pory"
	closemessage
# 90 "data/maps/Zone18B/scripts.pory"
	delay 30
# 91 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 17, 7, 150
# 92 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightFlyingRoomDoor_1


Zone18B_EventScript_PsychicRoomDoor::
# 99 "data/maps/Zone18B/scripts.pory"
	lockall
# 100 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_JAY, Zone18B_EventScript_DoorLocked
# 101 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_PsychicRoomDoor_Text_0, MSGBOX_YESNO
# 102 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_PsychicRoomDoor_2
Zone18B_EventScript_PsychicRoomDoor_1:
# 108 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_PsychicRoomDoor_2:
# 103 "data/maps/Zone18B/scripts.pory"
	closemessage
# 104 "data/maps/Zone18B/scripts.pory"
	delay 30
# 105 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 18, 1, 137
# 106 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_PsychicRoomDoor_1


Zone18B_EventScript_FightingRoomDoor::
# 113 "data/maps/Zone18B/scripts.pory"
	lockall
# 114 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_TYLER, Zone18B_EventScript_DoorLocked
# 115 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_FightingRoomDoor_Text_0, MSGBOX_YESNO
# 116 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_FightingRoomDoor_2
Zone18B_EventScript_FightingRoomDoor_1:
# 122 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_FightingRoomDoor_2:
# 117 "data/maps/Zone18B/scripts.pory"
	closemessage
# 118 "data/maps/Zone18B/scripts.pory"
	delay 30
# 119 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 27, 7, 124
# 120 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_FightingRoomDoor_1


Zone18B_EventScript_LeftDragonRoomDoor::
# 127 "data/maps/Zone18B/scripts.pory"
	lockall
# 128 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_TYLER, Zone18B_EventScript_DoorLocked
# 129 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftDragonRoomDoor_Text_0, MSGBOX_YESNO
# 130 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftDragonRoomDoor_2
Zone18B_EventScript_LeftDragonRoomDoor_1:
# 136 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftDragonRoomDoor_2:
# 131 "data/maps/Zone18B/scripts.pory"
	closemessage
# 132 "data/maps/Zone18B/scripts.pory"
	delay 30
# 133 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 28, 1, 111
# 134 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftDragonRoomDoor_1


Zone18B_EventScript_RightDragonRoomDoor::
# 141 "data/maps/Zone18B/scripts.pory"
	lockall
# 142 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_TERRENCE, Zone18B_EventScript_DoorLocked
# 143 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftDragonRoomDoor_Text_0, MSGBOX_YESNO
# 144 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightDragonRoomDoor_2
Zone18B_EventScript_RightDragonRoomDoor_1:
# 150 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightDragonRoomDoor_2:
# 145 "data/maps/Zone18B/scripts.pory"
	closemessage
# 146 "data/maps/Zone18B/scripts.pory"
	delay 30
# 147 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 31, 7, 111
# 148 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightDragonRoomDoor_1


Zone18B_EventScript_LeftFairyRoomDoor::
# 155 "data/maps/Zone18B/scripts.pory"
	lockall
# 156 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_TERRENCE, Zone18B_EventScript_DoorLocked
# 157 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFairyRoomDoor_Text_0, MSGBOX_YESNO
# 158 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFairyRoomDoor_2
Zone18B_EventScript_LeftFairyRoomDoor_1:
# 164 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftFairyRoomDoor_2:
# 159 "data/maps/Zone18B/scripts.pory"
	closemessage
# 160 "data/maps/Zone18B/scripts.pory"
	delay 30
# 161 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 32, 1, 98
# 162 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftFairyRoomDoor_1


Zone18B_EventScript_RightFairyRoomDoor::
# 169 "data/maps/Zone18B/scripts.pory"
	lockall
# 170 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_MARTY, Zone18B_EventScript_DoorLocked
# 171 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFairyRoomDoor_Text_0, MSGBOX_YESNO
# 172 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFairyRoomDoor_2
Zone18B_EventScript_RightFairyRoomDoor_1:
# 178 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightFairyRoomDoor_2:
# 173 "data/maps/Zone18B/scripts.pory"
	closemessage
# 174 "data/maps/Zone18B/scripts.pory"
	delay 30
# 175 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 35, 7, 98
# 176 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightFairyRoomDoor_1


Zone18B_EventScript_GroundRoomDoor::
# 183 "data/maps/Zone18B/scripts.pory"
	lockall
# 184 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_MARTY, Zone18B_EventScript_DoorLocked
# 185 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_GroundRoomDoor_Text_0, MSGBOX_YESNO
# 186 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_GroundRoomDoor_2
Zone18B_EventScript_GroundRoomDoor_1:
# 192 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_GroundRoomDoor_2:
# 187 "data/maps/Zone18B/scripts.pory"
	closemessage
# 188 "data/maps/Zone18B/scripts.pory"
	delay 30
# 189 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 36, 1, 85
# 190 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_GroundRoomDoor_1


Zone18B_EventScript_LeftBugRoomDoor::
# 197 "data/maps/Zone18B/scripts.pory"
	lockall
# 198 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_KARI, Zone18B_EventScript_DoorLocked
# 199 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftBugRoomDoor_Text_0, MSGBOX_YESNO
# 200 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftBugRoomDoor_2
Zone18B_EventScript_LeftBugRoomDoor_1:
# 206 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftBugRoomDoor_2:
# 201 "data/maps/Zone18B/scripts.pory"
	closemessage
# 202 "data/maps/Zone18B/scripts.pory"
	delay 30
# 203 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 44, 1, 72
# 204 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftBugRoomDoor_1


Zone18B_EventScript_RightBugRoomDoor::
# 211 "data/maps/Zone18B/scripts.pory"
	lockall
# 212 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_ABRAHAM, Zone18B_EventScript_DoorLocked
# 213 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftBugRoomDoor_Text_0, MSGBOX_YESNO
# 214 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightBugRoomDoor_2
Zone18B_EventScript_RightBugRoomDoor_1:
# 220 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightBugRoomDoor_2:
# 215 "data/maps/Zone18B/scripts.pory"
	closemessage
# 216 "data/maps/Zone18B/scripts.pory"
	delay 30
# 217 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 47, 7, 72
# 218 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightBugRoomDoor_1


Zone18B_EventScript_LeftSteelRoomDoor::
# 225 "data/maps/Zone18B/scripts.pory"
	lockall
# 226 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_ABRAHAM, Zone18B_EventScript_DoorLocked
# 227 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftSteelRoomDoor_Text_0, MSGBOX_YESNO
# 228 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftSteelRoomDoor_2
Zone18B_EventScript_LeftSteelRoomDoor_1:
# 234 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftSteelRoomDoor_2:
# 229 "data/maps/Zone18B/scripts.pory"
	closemessage
# 230 "data/maps/Zone18B/scripts.pory"
	delay 30
# 231 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 48, 1, 59
# 232 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftSteelRoomDoor_1


Zone18B_EventScript_RightSteelRoomDoor::
# 239 "data/maps/Zone18B/scripts.pory"
	lockall
# 240 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_MELINDA, Zone18B_EventScript_DoorLocked
# 241 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftSteelRoomDoor_Text_0, MSGBOX_YESNO
# 242 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightSteelRoomDoor_2
Zone18B_EventScript_RightSteelRoomDoor_1:
# 248 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightSteelRoomDoor_2:
# 243 "data/maps/Zone18B/scripts.pory"
	closemessage
# 244 "data/maps/Zone18B/scripts.pory"
	delay 30
# 245 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 50, 7, 59
# 246 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightSteelRoomDoor_1


Zone18B_EventScript_LeftPoisonRoomDoor::
# 253 "data/maps/Zone18B/scripts.pory"
	lockall
# 254 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_MELINDA, Zone18B_EventScript_DoorLocked
# 255 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftPoisonRoomDoor_Text_0, MSGBOX_YESNO
# 256 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftPoisonRoomDoor_2
Zone18B_EventScript_LeftPoisonRoomDoor_1:
# 262 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftPoisonRoomDoor_2:
# 257 "data/maps/Zone18B/scripts.pory"
	closemessage
# 258 "data/maps/Zone18B/scripts.pory"
	delay 30
# 259 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 52, 1, 46
# 260 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftPoisonRoomDoor_1


Zone18B_EventScript_RightPoisonRoomDoor::
# 267 "data/maps/Zone18B/scripts.pory"
	lockall
# 268 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_EMILIO, Zone18B_EventScript_DoorLocked
# 269 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftPoisonRoomDoor_Text_0, MSGBOX_YESNO
# 270 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightPoisonRoomDoor_2
Zone18B_EventScript_RightPoisonRoomDoor_1:
# 276 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightPoisonRoomDoor_2:
# 271 "data/maps/Zone18B/scripts.pory"
	closemessage
# 272 "data/maps/Zone18B/scripts.pory"
	delay 30
# 273 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 54, 7, 46
# 274 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightPoisonRoomDoor_1


Zone18B_EventScript_LeftElectricRoomDoor::
# 281 "data/maps/Zone18B/scripts.pory"
	lockall
# 282 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_REX, Zone18B_EventScript_DoorLocked
# 283 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftElectricRoomDoor_Text_0, MSGBOX_YESNO
# 284 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftElectricRoomDoor_2
Zone18B_EventScript_LeftElectricRoomDoor_1:
# 290 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftElectricRoomDoor_2:
# 285 "data/maps/Zone18B/scripts.pory"
	closemessage
# 286 "data/maps/Zone18B/scripts.pory"
	delay 30
# 287 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 60, 1, 33
# 288 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftElectricRoomDoor_1


Zone18B_EventScript_RightElectricRoomDoor::
# 295 "data/maps/Zone18B/scripts.pory"
	lockall
# 296 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_LOUIS, Zone18B_EventScript_DoorLocked
# 297 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftElectricRoomDoor_Text_0, MSGBOX_YESNO
# 298 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightElectricRoomDoor_2
Zone18B_EventScript_RightElectricRoomDoor_1:
# 304 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightElectricRoomDoor_2:
# 299 "data/maps/Zone18B/scripts.pory"
	closemessage
# 300 "data/maps/Zone18B/scripts.pory"
	delay 30
# 301 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 63, 7, 33
# 302 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightElectricRoomDoor_1


Zone18B_EventScript_LeftFireRoomDoor::
# 309 "data/maps/Zone18B/scripts.pory"
	lockall
# 310 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_LOUIS, Zone18B_EventScript_DoorLocked
# 311 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFireRoomDoor_Text_0, MSGBOX_YESNO
# 312 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftFireRoomDoor_2
Zone18B_EventScript_LeftFireRoomDoor_1:
# 318 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftFireRoomDoor_2:
# 313 "data/maps/Zone18B/scripts.pory"
	closemessage
# 314 "data/maps/Zone18B/scripts.pory"
	delay 30
# 315 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 64, 1, 20
# 316 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftFireRoomDoor_1


Zone18B_EventScript_RightFireRoomDoor::
# 323 "data/maps/Zone18B/scripts.pory"
	lockall
# 324 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_LEROY, Zone18B_EventScript_DoorLocked
# 325 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftFireRoomDoor_Text_0, MSGBOX_YESNO
# 326 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightFireRoomDoor_2
Zone18B_EventScript_RightFireRoomDoor_1:
# 332 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightFireRoomDoor_2:
# 327 "data/maps/Zone18B/scripts.pory"
	closemessage
# 328 "data/maps/Zone18B/scripts.pory"
	delay 30
# 329 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 67, 7, 20
# 330 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightFireRoomDoor_1


Zone18B_EventScript_LeftLeviathanRoomDoor::
# 337 "data/maps/Zone18B/scripts.pory"
	lockall
# 338 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_ELTON, Zone18B_EventScript_DoorLocked
# 339 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0, MSGBOX_YESNO
# 340 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_LeftLeviathanRoomDoor_2
Zone18B_EventScript_LeftLeviathanRoomDoor_1:
# 349 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_LeftLeviathanRoomDoor_2:
# 341 "data/maps/Zone18B/scripts.pory"
	closemessage
# 342 "data/maps/Zone18B/scripts.pory"
	delay 30
# 343 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_LeftLeviathanRoomDoor_5
Zone18B_EventScript_LeftLeviathanRoomDoor_4:
# 346 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 71, 1, 7
# 347 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_LeftLeviathanRoomDoor_1

Zone18B_EventScript_LeftLeviathanRoomDoor_5:
# 344 "data/maps/Zone18B/scripts.pory"
	setvar VAR_ZONE_18_STATE, 1
	goto Zone18B_EventScript_LeftLeviathanRoomDoor_4


Zone18B_EventScript_RightLeviathanRoomDoor::
# 354 "data/maps/Zone18B/scripts.pory"
	lockall
# 355 "data/maps/Zone18B/scripts.pory"
	goto_if_not_defeated TRAINER_PBL_WILLIE, Zone18B_EventScript_DoorLocked
# 356 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0, MSGBOX_YESNO
# 357 "data/maps/Zone18B/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zone18B_EventScript_RightLeviathanRoomDoor_2
Zone18B_EventScript_RightLeviathanRoomDoor_1:
# 366 "data/maps/Zone18B/scripts.pory"
	releaseall
	end

Zone18B_EventScript_RightLeviathanRoomDoor_2:
# 358 "data/maps/Zone18B/scripts.pory"
	closemessage
# 359 "data/maps/Zone18B/scripts.pory"
	delay 30
# 360 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_RightLeviathanRoomDoor_5
Zone18B_EventScript_RightLeviathanRoomDoor_4:
# 363 "data/maps/Zone18B/scripts.pory"
	warpdoor MAP_ZONE18B, 72, 7, 7
# 364 "data/maps/Zone18B/scripts.pory"
	waitstate
	goto Zone18B_EventScript_RightLeviathanRoomDoor_1

Zone18B_EventScript_RightLeviathanRoomDoor_5:
# 361 "data/maps/Zone18B/scripts.pory"
	setvar VAR_ZONE_18_STATE, 2
	goto Zone18B_EventScript_RightLeviathanRoomDoor_4


Zone18B_EventScript_SlideOpenNormalRoomDoors::
# 371 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 372 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenNormalRoomDoors
# 373 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 374 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenRockRoomDoors::
# 379 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 380 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenRockRoomDoors
# 381 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 382 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenIceRoomDoors::
# 387 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 388 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenIceRoomDoors
# 389 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 390 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenDarkRoomDoors::
# 395 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 396 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenDarkRoomDoors
# 397 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 398 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenFlyingRoomDoors::
# 403 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 404 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenFlyingRoomDoors
# 405 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 406 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenPsychicRoomDoors::
# 411 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 412 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenPsychicRoomDoors
# 413 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 414 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenFightingRoomDoors::
# 419 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 420 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenFightingRoomDoors
# 421 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 422 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenDragonRoomDoors::
# 427 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 428 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenDragonRoomDoors
# 429 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 430 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenFairyRoomDoors::
# 435 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 436 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenFairyRoomDoors
# 437 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 438 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenGroundRoomDoors::
# 443 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 444 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenGroundRoomDoors
# 445 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 446 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenBugRoomDoors::
# 451 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 452 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenBugRoomDoors
# 453 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 454 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenSteelRoomDoors::
# 459 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 460 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenSteelRoomDoors
# 461 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 462 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenPoisonRoomDoors::
# 467 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 468 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenPoisonRoomDoors
# 469 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 470 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenElectricRoomDoors::
# 475 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 476 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenElectricRoomDoors
# 477 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 478 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_SlideOpenFireRoomDoors::
# 483 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8005, 0
# 484 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_OpenFireRoomDoors
# 485 "data/maps/Zone18B/scripts.pory"
	special DrawWholeMapView
# 486 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_OpenNormalRoomDoors::
# 493 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 1
# 494 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenNormalRoomDoors_2
# 496 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenNormalRoomDoors_3
Zone18B_EventScript_OpenNormalRoomDoors_1:
# 499 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetNormalRoomDoorMetatiles
	return

Zone18B_EventScript_OpenNormalRoomDoors_2:
# 495 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenNormalRoomDoors_1

Zone18B_EventScript_OpenNormalRoomDoors_3:
# 497 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenNormalRoomDoors_1


Zone18B_EventScript_OpenRockRoomDoors::
# 504 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 2
# 505 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenRockRoomDoors_2
# 507 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenRockRoomDoors_3
Zone18B_EventScript_OpenRockRoomDoors_1:
# 510 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetRockRoomDoorMetatiles
	return

Zone18B_EventScript_OpenRockRoomDoors_2:
# 506 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenRockRoomDoors_1

Zone18B_EventScript_OpenRockRoomDoors_3:
# 508 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenRockRoomDoors_1


Zone18B_EventScript_OpenIceRoomDoors::
# 515 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 3
# 516 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenIceRoomDoors_2
# 518 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenIceRoomDoors_3
Zone18B_EventScript_OpenIceRoomDoors_1:
# 521 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetIceRoomDoorMetatiles
	return

Zone18B_EventScript_OpenIceRoomDoors_2:
# 517 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenIceRoomDoors_1

Zone18B_EventScript_OpenIceRoomDoors_3:
# 519 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenIceRoomDoors_1


Zone18B_EventScript_OpenDarkRoomDoors::
# 526 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 4
# 527 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenDarkRoomDoors_2
# 529 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenDarkRoomDoors_3
Zone18B_EventScript_OpenDarkRoomDoors_1:
# 532 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetDarkRoomDoorMetatiles
	return

Zone18B_EventScript_OpenDarkRoomDoors_2:
# 528 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenDarkRoomDoors_1

Zone18B_EventScript_OpenDarkRoomDoors_3:
# 530 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenDarkRoomDoors_1


Zone18B_EventScript_OpenFlyingRoomDoors::
# 537 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 5
# 538 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFlyingRoomDoors_2
# 540 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFlyingRoomDoors_3
Zone18B_EventScript_OpenFlyingRoomDoors_1:
# 543 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetFlyingRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFlyingRoomDoors_2:
# 539 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFlyingRoomDoors_1

Zone18B_EventScript_OpenFlyingRoomDoors_3:
# 541 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFlyingRoomDoors_1


Zone18B_EventScript_OpenPsychicRoomDoors::
# 548 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 6
# 549 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenPsychicRoomDoors_2
# 551 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenPsychicRoomDoors_3
Zone18B_EventScript_OpenPsychicRoomDoors_1:
# 554 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetPsychicRoomDoorMetatiles
	return

Zone18B_EventScript_OpenPsychicRoomDoors_2:
# 550 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenPsychicRoomDoors_1

Zone18B_EventScript_OpenPsychicRoomDoors_3:
# 552 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenPsychicRoomDoors_1


Zone18B_EventScript_OpenFightingRoomDoors::
# 559 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 7
# 560 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFightingRoomDoors_2
# 562 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFightingRoomDoors_3
Zone18B_EventScript_OpenFightingRoomDoors_1:
# 565 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetFightingRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFightingRoomDoors_2:
# 561 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFightingRoomDoors_1

Zone18B_EventScript_OpenFightingRoomDoors_3:
# 563 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFightingRoomDoors_1


Zone18B_EventScript_OpenDragonRoomDoors::
# 570 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 8
# 571 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenDragonRoomDoors_2
# 573 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenDragonRoomDoors_3
Zone18B_EventScript_OpenDragonRoomDoors_1:
# 576 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetDragonRoomDoorMetatiles
	return

Zone18B_EventScript_OpenDragonRoomDoors_2:
# 572 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenDragonRoomDoors_1

Zone18B_EventScript_OpenDragonRoomDoors_3:
# 574 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenDragonRoomDoors_1


Zone18B_EventScript_OpenFairyRoomDoors::
# 581 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 9
# 582 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFairyRoomDoors_2
# 584 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFairyRoomDoors_3
Zone18B_EventScript_OpenFairyRoomDoors_1:
# 587 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetFairyRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFairyRoomDoors_2:
# 583 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFairyRoomDoors_1

Zone18B_EventScript_OpenFairyRoomDoors_3:
# 585 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFairyRoomDoors_1


Zone18B_EventScript_OpenGroundRoomDoors::
# 592 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 10
# 593 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenGroundRoomDoors_2
# 595 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenGroundRoomDoors_3
Zone18B_EventScript_OpenGroundRoomDoors_1:
# 598 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetGroundRoomDoorMetatiles
	return

Zone18B_EventScript_OpenGroundRoomDoors_2:
# 594 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenGroundRoomDoors_1

Zone18B_EventScript_OpenGroundRoomDoors_3:
# 596 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenGroundRoomDoors_1


Zone18B_EventScript_OpenBugRoomDoors::
# 603 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 11
# 604 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenBugRoomDoors_2
# 606 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenBugRoomDoors_3
Zone18B_EventScript_OpenBugRoomDoors_1:
# 609 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetBugRoomDoorMetatiles
	return

Zone18B_EventScript_OpenBugRoomDoors_2:
# 605 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenBugRoomDoors_1

Zone18B_EventScript_OpenBugRoomDoors_3:
# 607 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenBugRoomDoors_1


Zone18B_EventScript_OpenSteelRoomDoors::
# 614 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 12
# 615 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenSteelRoomDoors_2
# 617 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenSteelRoomDoors_3
Zone18B_EventScript_OpenSteelRoomDoors_1:
# 620 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetSteelRoomDoorMetatiles
	return

Zone18B_EventScript_OpenSteelRoomDoors_2:
# 616 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenSteelRoomDoors_1

Zone18B_EventScript_OpenSteelRoomDoors_3:
# 618 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenSteelRoomDoors_1


Zone18B_EventScript_OpenPoisonRoomDoors::
# 625 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 13
# 626 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenPoisonRoomDoors_2
# 628 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenPoisonRoomDoors_3
Zone18B_EventScript_OpenPoisonRoomDoors_1:
# 631 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetPoisonRoomDoorMetatiles
	return

Zone18B_EventScript_OpenPoisonRoomDoors_2:
# 627 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenPoisonRoomDoors_1

Zone18B_EventScript_OpenPoisonRoomDoors_3:
# 629 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenPoisonRoomDoors_1


Zone18B_EventScript_OpenElectricRoomDoors::
# 636 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 14
# 637 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenElectricRoomDoors_2
# 639 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenElectricRoomDoors_3
Zone18B_EventScript_OpenElectricRoomDoors_1:
# 642 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetElectricRoomDoorMetatiles
	return

Zone18B_EventScript_OpenElectricRoomDoors_2:
# 638 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenElectricRoomDoors_1

Zone18B_EventScript_OpenElectricRoomDoors_3:
# 640 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenElectricRoomDoors_1


Zone18B_EventScript_OpenFireRoomDoors::
# 647 "data/maps/Zone18B/scripts.pory"
	setvar VAR_0x8004, 15
# 648 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Zone18B_EventScript_OpenFireRoomDoors_2
# 650 "data/maps/Zone18B/scripts.pory"
	compare VAR_0x8005, 1
	goto_if_eq Zone18B_EventScript_OpenFireRoomDoors_3
Zone18B_EventScript_OpenFireRoomDoors_1:
# 653 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SetFireRoomDoorMetatiles
	return

Zone18B_EventScript_OpenFireRoomDoors_2:
# 649 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_SlideOpenRoomDoors
	goto Zone18B_EventScript_OpenFireRoomDoors_1

Zone18B_EventScript_OpenFireRoomDoors_3:
# 651 "data/maps/Zone18B/scripts.pory"
	call Zone18B_EventScript_UnlockRoomDoors
	goto Zone18B_EventScript_OpenFireRoomDoors_1


Zone18B_EventScript_SetNormalRoomDoorMetatiles::
# 658 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 189, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 659 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 189, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 660 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 176, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 661 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 176, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetRockRoomDoorMetatiles::
# 666 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 163, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 667 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 163, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 668 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 669 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetIceRoomDoorMetatiles::
# 674 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 150, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 675 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 150, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 676 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 137, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 677 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 137, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetDarkRoomDoorMetatiles::
# 682 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 124, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 683 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 124, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 684 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 685 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFlyingRoomDoorMetatiles::
# 690 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 111, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 691 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 111, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 692 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 693 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetPsychicRoomDoorMetatiles::
# 698 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 699 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 700 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 85, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 701 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 85, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFightingRoomDoorMetatiles::
# 706 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 707 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetDragonRoomDoorMetatiles::
# 712 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 713 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 714 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 715 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFairyRoomDoorMetatiles::
# 720 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 721 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 722 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 723 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetGroundRoomDoorMetatiles::
# 728 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 729 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetBugRoomDoorMetatiles::
# 734 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 735 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetSteelRoomDoorMetatiles::
# 740 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 741 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 742 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 743 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetPoisonRoomDoorMetatiles::
# 748 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 749 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetElectricRoomDoorMetatiles::
# 754 "data/maps/Zone18B/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 755 "data/maps/Zone18B/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SetFireRoomDoorMetatiles::
# 760 "data/maps/Zone18B/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 761 "data/maps/Zone18B/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
	return


Zone18B_EventScript_SlideOpenRoomDoors::
# 766 "data/maps/Zone18B/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 767 "data/maps/Zone18B/scripts.pory"
	waitstate
	return


Zone18B_EventScript_UnlockRoomDoors::
# 772 "data/maps/Zone18B/scripts.pory"
	special PetalburgGymUnlockRoomDoors
	return


Zone18B_EventScript_Statue::
# 777 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_Statue_Text_0, MSGBOX_SIGN
	end


# 781 "data/maps/Zone18B/scripts.pory"

# 782 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_John::
# 783 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_JOHN, Zone18B_Text_JohnIntro, Zone18B_Text_JohnDefeat, Zone18B_EventScript_SlideOpenNormalRoomDoors
# 784 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_JohnPostBattle
# 785 "data/maps/Zone18B/scripts.pory"
	end
# 786 "data/maps/Zone18B/scripts.pory"

# 787 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JohnIntro:
# 788 "data/maps/Zone18B/scripts.pory"
	.string "Welcome to the Trainer's Dojo!\p"
# 789 "data/maps/Zone18B/scripts.pory"
	.string "Uh… what else is in this script…\p"
# 790 "data/maps/Zone18B/scripts.pory"
	.string "Oh! Each room has a particular type\n"
# 791 "data/maps/Zone18B/scripts.pory"
	.string "associated with it.\p"
# 792 "data/maps/Zone18B/scripts.pory"
	.string "You can pick and choose which room to\n"
# 793 "data/maps/Zone18B/scripts.pory"
	.string "challenge.\p"
# 794 "data/maps/Zone18B/scripts.pory"
	.string "Hmm… Looks like I'm supposed to\n"
# 795 "data/maps/Zone18B/scripts.pory"
	.string "battle you now.\p"
# 796 "data/maps/Zone18B/scripts.pory"
	.string "Well, good luck to you, facing my\n"
# 797 "data/maps/Zone18B/scripts.pory"
	.string "Normal-types in battle!$"
# 798 "data/maps/Zone18B/scripts.pory"

# 799 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JohnDefeat:
# 800 "data/maps/Zone18B/scripts.pory"
	.string "You got me! How typical.$"
# 801 "data/maps/Zone18B/scripts.pory"

# 802 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JohnPostBattle:
# 803 "data/maps/Zone18B/scripts.pory"
	.string "You can pick between the Rock room\n"
# 804 "data/maps/Zone18B/scripts.pory"
	.string "and the Ice room.\p"
# 805 "data/maps/Zone18B/scripts.pory"
	.string "Oh, and in case it wasn't obvious,\n"
# 806 "data/maps/Zone18B/scripts.pory"
	.string "everyone here battles in\l"
# 807 "data/maps/Zone18B/scripts.pory"
	.string "Double Battles.$"
# 808 "data/maps/Zone18B/scripts.pory"

# 809 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Glenn::
# 810 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_GLENN, Zone18B_Text_GlennIntro, Zone18B_Text_GlennDefeat, Zone18B_EventScript_SlideOpenRockRoomDoors
# 811 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_GlennPostBattle
# 812 "data/maps/Zone18B/scripts.pory"
	end
# 813 "data/maps/Zone18B/scripts.pory"

# 814 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_GlennIntro:
# 815 "data/maps/Zone18B/scripts.pory"
	.string "Rock 'em, sock em!$"
# 816 "data/maps/Zone18B/scripts.pory"

# 817 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_GlennDefeat:
# 818 "data/maps/Zone18B/scripts.pory"
	.string "You rocked!$"
# 819 "data/maps/Zone18B/scripts.pory"

# 820 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_GlennPostBattle:
# 821 "data/maps/Zone18B/scripts.pory"
	.string "How many weaknesses do Rock-types\n"
# 822 "data/maps/Zone18B/scripts.pory"
	.string "have?\p"
# 823 "data/maps/Zone18B/scripts.pory"
	.string "I'll tell you: none, if you're\n"
# 824 "data/maps/Zone18B/scripts.pory"
	.string "careful about type matchups!$"
# 825 "data/maps/Zone18B/scripts.pory"

# 826 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Jay::
# 827 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_JAY, Zone18B_Text_JayIntro, Zone18B_Text_JayDefeat, Zone18B_EventScript_SlideOpenIceRoomDoors
# 828 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_JayPostBattle
# 829 "data/maps/Zone18B/scripts.pory"
	end
# 830 "data/maps/Zone18B/scripts.pory"

# 831 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JayIntro:
# 832 "data/maps/Zone18B/scripts.pory"
	.string "Welcome to the Cool Room.\n"
# 833 "data/maps/Zone18B/scripts.pory"
	.string "Speaking of cool, have you\l"
# 834 "data/maps/Zone18B/scripts.pory"
	.string "ever read the Great Gatsby?$"
# 835 "data/maps/Zone18B/scripts.pory"

# 836 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JayDefeat:
# 837 "data/maps/Zone18B/scripts.pory"
	.string "I'm not Gatsby!$"
# 838 "data/maps/Zone18B/scripts.pory"

# 839 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_JayPostBattle:
# 840 "data/maps/Zone18B/scripts.pory"
	.string "I just think he's a pretty chill\n"
# 841 "data/maps/Zone18B/scripts.pory"
	.string "dude.$"
# 842 "data/maps/Zone18B/scripts.pory"

# 843 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Tyler::
# 844 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_TYLER, Zone18B_Text_TylerIntro, Zone18B_Text_TylerDefeat, Zone18B_EventScript_SlideOpenDarkRoomDoors
# 845 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_TylerPostBattle
# 846 "data/maps/Zone18B/scripts.pory"
	end
# 847 "data/maps/Zone18B/scripts.pory"

# 848 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TylerIntro:
# 849 "data/maps/Zone18B/scripts.pory"
	.string "You look tough, kid.\p"
# 850 "data/maps/Zone18B/scripts.pory"
	.string "Can you beat the toughest\n"
# 851 "data/maps/Zone18B/scripts.pory"
	.string "Dark-types around?$"
# 852 "data/maps/Zone18B/scripts.pory"

# 853 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TylerDefeat:
# 854 "data/maps/Zone18B/scripts.pory"
	.string "I guess you can!$"
# 855 "data/maps/Zone18B/scripts.pory"

# 856 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TylerPostBattle:
# 857 "data/maps/Zone18B/scripts.pory"
	.string "I know I'm tough because my momma\n"
# 858 "data/maps/Zone18B/scripts.pory"
	.string "said so!$"
# 859 "data/maps/Zone18B/scripts.pory"

# 860 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Terrence::
# 861 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_TERRENCE, Zone18B_Text_TerrenceIntro, Zone18B_Text_TerrenceDefeat, Zone18B_EventScript_SlideOpenFlyingRoomDoors
# 862 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_TerrencePostBattle
# 863 "data/maps/Zone18B/scripts.pory"
	end
# 864 "data/maps/Zone18B/scripts.pory"

# 865 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TerrenceIntro:
# 866 "data/maps/Zone18B/scripts.pory"
	.string "Take flight, my Pokémon,\n"
# 867 "data/maps/Zone18B/scripts.pory"
	.string "and defeat this Trainer!$"
# 868 "data/maps/Zone18B/scripts.pory"

# 869 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TerrenceDefeat:
# 870 "data/maps/Zone18B/scripts.pory"
	.string "Our wings are clipped and our\n"
# 871 "data/maps/Zone18B/scripts.pory"
	.string "flight path broken!$"
# 872 "data/maps/Zone18B/scripts.pory"

# 873 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_TerrencePostBattle:
# 874 "data/maps/Zone18B/scripts.pory"
	.string "My favorite board game is Wingspan.\n"
# 875 "data/maps/Zone18B/scripts.pory"
	.string "You should try it sometime!$"
# 876 "data/maps/Zone18B/scripts.pory"

# 877 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Marty::
# 878 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_MARTY, Zone18B_Text_MartyIntro, Zone18B_Text_MartyDefeat, Zone18B_EventScript_SlideOpenPsychicRoomDoors
# 879 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_MartyPostBattle
# 880 "data/maps/Zone18B/scripts.pory"
	end
# 881 "data/maps/Zone18B/scripts.pory"

# 882 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MartyIntro:
# 883 "data/maps/Zone18B/scripts.pory"
	.string "Through my powers, I see a\n"
# 884 "data/maps/Zone18B/scripts.pory"
	.string "great battle ahead of us…$"
# 885 "data/maps/Zone18B/scripts.pory"

# 886 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MartyDefeat:
# 887 "data/maps/Zone18B/scripts.pory"
	.string "It wasn't a great battle because\n"
# 888 "data/maps/Zone18B/scripts.pory"
	.string "I lost!$"
# 889 "data/maps/Zone18B/scripts.pory"

# 890 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MartyPostBattle:
# 891 "data/maps/Zone18B/scripts.pory"
	.string "Why don't my visions ever show me\n"
# 892 "data/maps/Zone18B/scripts.pory"
	.string "winning?$"
# 893 "data/maps/Zone18B/scripts.pory"

# 894 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Kari::
# 895 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_KARI, Zone18B_Text_KariIntro, Zone18B_Text_KariDefeat, Zone18B_EventScript_SlideOpenFightingRoomDoors
# 896 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_KariPostBattle
# 897 "data/maps/Zone18B/scripts.pory"
	end
# 898 "data/maps/Zone18B/scripts.pory"

# 899 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_KariIntro:
# 900 "data/maps/Zone18B/scripts.pory"
	.string "Fight me!$"
# 901 "data/maps/Zone18B/scripts.pory"

# 902 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_KariDefeat:
# 903 "data/maps/Zone18B/scripts.pory"
	.string "The taste of defeat is bitter!$"
# 904 "data/maps/Zone18B/scripts.pory"

# 905 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_KariPostBattle:
# 906 "data/maps/Zone18B/scripts.pory"
	.string "I'll have to train more for next\n"
# 907 "data/maps/Zone18B/scripts.pory"
	.string "time!$"
# 908 "data/maps/Zone18B/scripts.pory"

# 909 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Abraham::
# 910 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ABRAHAM, Zone18B_Text_AbrahamIntro, Zone18B_Text_AbrahamDefeat, Zone18B_EventScript_SlideOpenDragonRoomDoors
# 911 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_AbrahamPostBattle
# 912 "data/maps/Zone18B/scripts.pory"
	end
# 913 "data/maps/Zone18B/scripts.pory"

# 914 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_AbrahamIntro:
# 915 "data/maps/Zone18B/scripts.pory"
	.string "Dragons can inspire fear or\n"
# 916 "data/maps/Zone18B/scripts.pory"
	.string "reverence in different cultures.\p"
# 917 "data/maps/Zone18B/scripts.pory"
	.string "Which one is it for you?$"
# 918 "data/maps/Zone18B/scripts.pory"

# 919 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_AbrahamDefeat:
# 920 "data/maps/Zone18B/scripts.pory"
	.string "Personally, I fear them.\n"
# 921 "data/maps/Zone18B/scripts.pory"
	.string "Well, when they evolve more.$"
# 922 "data/maps/Zone18B/scripts.pory"

# 923 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_AbrahamPostBattle:
# 924 "data/maps/Zone18B/scripts.pory"
	.string "Evolution won't be for a while,\n"
# 925 "data/maps/Zone18B/scripts.pory"
	.string "though!$"
# 926 "data/maps/Zone18B/scripts.pory"

# 927 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Melinda::
# 928 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_MELINDA, Zone18B_Text_MelindaIntro, Zone18B_Text_MelindaDefeat, Zone18B_EventScript_SlideOpenFairyRoomDoors
# 929 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_MelindaPostBattle
# 930 "data/maps/Zone18B/scripts.pory"
	end
# 931 "data/maps/Zone18B/scripts.pory"

# 932 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MelindaIntro:
# 933 "data/maps/Zone18B/scripts.pory"
	.string "Momma… where are you?$"
# 934 "data/maps/Zone18B/scripts.pory"

# 935 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MelindaDefeat:
# 936 "data/maps/Zone18B/scripts.pory"
	.string "She'll be with me soon…$"
# 937 "data/maps/Zone18B/scripts.pory"

# 938 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_MelindaPostBattle:
# 939 "data/maps/Zone18B/scripts.pory"
	.string "We'll be together again,\n"
# 940 "data/maps/Zone18B/scripts.pory"
	.string "like we were meant to be…$"
# 941 "data/maps/Zone18B/scripts.pory"

# 942 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Emilio::
# 943 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_EMILIO, Zone18B_Text_EmilioIntro, Zone18B_Text_EmilioDefeat, Zone18B_EventScript_SlideOpenGroundRoomDoors
# 944 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_EmilioPostBattle
# 945 "data/maps/Zone18B/scripts.pory"
	end
# 946 "data/maps/Zone18B/scripts.pory"

# 947 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EmilioIntro:
# 948 "data/maps/Zone18B/scripts.pory"
	.string "Rock 'em, sock 'em!$"
# 949 "data/maps/Zone18B/scripts.pory"

# 950 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EmilioDefeat:
# 951 "data/maps/Zone18B/scripts.pory"
	.string "Our boulders have been reduced to\n"
# 952 "data/maps/Zone18B/scripts.pory"
	.string "pebbles!$"
# 953 "data/maps/Zone18B/scripts.pory"

# 954 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EmilioPostBattle:
# 955 "data/maps/Zone18B/scripts.pory"
	.string "We gotta be more solid next time.$"
# 956 "data/maps/Zone18B/scripts.pory"

# 957 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Rex::
# 958 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_REX, Zone18B_Text_RexIntro, Zone18B_Text_RexDefeat, Zone18B_EventScript_SlideOpenBugRoomDoors
# 959 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_RexPostBattle
# 960 "data/maps/Zone18B/scripts.pory"
	end
# 961 "data/maps/Zone18B/scripts.pory"

# 962 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_RexIntro:
# 963 "data/maps/Zone18B/scripts.pory"
	.string "Bugs, Bugs, I love Bugs.\n"
# 964 "data/maps/Zone18B/scripts.pory"
	.string "Don't you?$"
# 965 "data/maps/Zone18B/scripts.pory"

# 966 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_RexDefeat:
# 967 "data/maps/Zone18B/scripts.pory"
	.string "Ah! My poor Bugs!$"
# 968 "data/maps/Zone18B/scripts.pory"

# 969 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_RexPostBattle:
# 970 "data/maps/Zone18B/scripts.pory"
	.string "My sweet, lovely, creepy-crawlies,\n"
# 971 "data/maps/Zone18B/scripts.pory"
	.string "I'll work harder for you next time!$"
# 972 "data/maps/Zone18B/scripts.pory"

# 973 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Louis::
# 974 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_LOUIS, Zone18B_Text_LouisIntro, Zone18B_Text_LouisDefeat, Zone18B_EventScript_SlideOpenSteelRoomDoors
# 975 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_LouisPostBattle
# 976 "data/maps/Zone18B/scripts.pory"
	end
# 977 "data/maps/Zone18B/scripts.pory"

# 978 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LouisIntro:
# 979 "data/maps/Zone18B/scripts.pory"
	.string "I'm a researcher studying rare\n"
# 980 "data/maps/Zone18B/scripts.pory"
	.string "metal artifacts. Do you have any?$"
# 981 "data/maps/Zone18B/scripts.pory"

# 982 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LouisDefeat:
# 983 "data/maps/Zone18B/scripts.pory"
	.string "Perhaps I should study Pokémon\n"
# 984 "data/maps/Zone18B/scripts.pory"
	.string "battling as well.$"
# 985 "data/maps/Zone18B/scripts.pory"

# 986 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LouisPostBattle:
# 987 "data/maps/Zone18B/scripts.pory"
	.string "I've heard there is a great ruin\n"
# 988 "data/maps/Zone18B/scripts.pory"
	.string "in a dense jungle somewhere, and\l"
# 989 "data/maps/Zone18B/scripts.pory"
	.string "deep within lies a powerful item.$"
# 990 "data/maps/Zone18B/scripts.pory"

# 991 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Leroy::
# 992 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_LEROY, Zone18B_Text_LeroyIntro, Zone18B_Text_LeroyDefeat, Zone18B_EventScript_SlideOpenPoisonRoomDoors
# 993 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_LeroyPostBattle
# 994 "data/maps/Zone18B/scripts.pory"
	end
# 995 "data/maps/Zone18B/scripts.pory"

# 996 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LeroyIntro:
# 997 "data/maps/Zone18B/scripts.pory"
	.string "Sneak attack! Poison Powder!$"
# 998 "data/maps/Zone18B/scripts.pory"

# 999 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LeroyDefeat:
# 1000 "data/maps/Zone18B/scripts.pory"
	.string "I forgot about the powder!$"
# 1001 "data/maps/Zone18B/scripts.pory"

# 1002 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_LeroyPostBattle:
# 1003 "data/maps/Zone18B/scripts.pory"
	.string "I didn't really sneak up on you\n"
# 1004 "data/maps/Zone18B/scripts.pory"
	.string "either, did I.$"
# 1005 "data/maps/Zone18B/scripts.pory"

# 1006 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Elton::
# 1007 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_ELTON, Zone18B_Text_EltonIntro, Zone18B_Text_EltonDefeat, Zone18B_EventScript_SlideOpenElectricRoomDoors
# 1008 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_EltonPostBattle
# 1009 "data/maps/Zone18B/scripts.pory"
	end
# 1010 "data/maps/Zone18B/scripts.pory"

# 1011 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EltonIntro:
# 1012 "data/maps/Zone18B/scripts.pory"
	.string "My music will shock you!$"
# 1013 "data/maps/Zone18B/scripts.pory"

# 1014 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EltonDefeat:
# 1015 "data/maps/Zone18B/scripts.pory"
	.string "You don't like Electric beats?$"
# 1016 "data/maps/Zone18B/scripts.pory"

# 1017 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_EltonPostBattle:
# 1018 "data/maps/Zone18B/scripts.pory"
	.string "I just like the smooth current!$"
# 1019 "data/maps/Zone18B/scripts.pory"

# 1020 "data/maps/Zone18B/scripts.pory"
Zone18B_EventScript_Willie::
# 1021 "data/maps/Zone18B/scripts.pory"
	trainerbattle_single TRAINER_PBL_WILLIE, Zone18B_Text_WillieIntro, Zone18B_Text_WillieDefeat, Zone18B_EventScript_SlideOpenFireRoomDoors
# 1022 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_Text_WilliePostBattle
# 1023 "data/maps/Zone18B/scripts.pory"
	end
# 1024 "data/maps/Zone18B/scripts.pory"

# 1025 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_WillieIntro:
# 1026 "data/maps/Zone18B/scripts.pory"
	.string "Hot, hot hot hot!$"
# 1027 "data/maps/Zone18B/scripts.pory"

# 1028 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_WillieDefeat:
# 1029 "data/maps/Zone18B/scripts.pory"
	.string "Sorry, I had a hot potato in my hands.$"
# 1030 "data/maps/Zone18B/scripts.pory"

# 1031 "data/maps/Zone18B/scripts.pory"
Zone18B_Text_WilliePostBattle:
# 1032 "data/maps/Zone18B/scripts.pory"
	.string "You should be careful while\n"
# 1033 "data/maps/Zone18B/scripts.pory"
	.string "cooking something hot!$"

Zone18B_EventScript_EliZoe::
# 1038 "data/maps/Zone18B/scripts.pory"
	lock
# 1039 "data/maps/Zone18B/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1040 "data/maps/Zone18B/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq Zone18B_EventScript_EliZoe_2
# 1047 "data/maps/Zone18B/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq Zone18B_EventScript_EliZoe_3
Zone18B_EventScript_EliZoe_1:
# 1053 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 3
	goto_if_lt Zone18B_EventScript_EliZoe_6
# 1055 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 5
	goto_if_eq Zone18B_EventScript_EliZoe_7
# 1068 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_6, MSGBOX_DEFAULT
# 1069 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_5, MSGBOX_DEFAULT
# 1070 "data/maps/Zone18B/scripts.pory"
	release
	end

Zone18B_EventScript_EliZoe_2:
# 1041 "data/maps/Zone18B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1042 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1043 "data/maps/Zone18B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 1044 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1045 "data/maps/Zone18B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1046 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
	goto Zone18B_EventScript_EliZoe_1

Zone18B_EventScript_EliZoe_3:
# 1048 "data/maps/Zone18B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 1049 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1050 "data/maps/Zone18B/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1051 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
	goto Zone18B_EventScript_EliZoe_1

Zone18B_EventScript_EliZoe_6:
# 1054 "data/maps/Zone18B/scripts.pory"
	goto Zone18B_EventScript_LeviathanBattle
	return

Zone18B_EventScript_EliZoe_7:
# 1056 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_0, MSGBOX_DEFAULT
# 1057 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_1, MSGBOX_DEFAULT
# 1058 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_2, MSGBOX_DEFAULT
# 1059 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_3, MSGBOX_DEFAULT
# 1060 "data/maps/Zone18B/scripts.pory"
	delay 40
# 1061 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_4, MSGBOX_DEFAULT
# 1062 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_EliZoe_Text_5, MSGBOX_DEFAULT
# 1063 "data/maps/Zone18B/scripts.pory"
	setvar VAR_ZONE_18_STATE, 6
# 1064 "data/maps/Zone18B/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_PORYGON
# 1065 "data/maps/Zone18B/scripts.pory"
	release
	end


Zone18B_EventScript_LeviathanBattle::
# 1076 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 1077 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1078 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_0, MSGBOX_DEFAULT
# 1079 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 1080 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1081 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_1
# 1082 "data/maps/Zone18B/scripts.pory"
	fadeoutbgm 1
# 1083 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 1084 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 1085 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1086 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 1087 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_3, MSGBOX_DEFAULT
# 1088 "data/maps/Zone18B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 1089 "data/maps/Zone18B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone18B_EventScript_LeviathanBattle_2
# 1089 "data/maps/Zone18B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone18B_EventScript_LeviathanBattle_2
# 1097 "data/maps/Zone18B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16, Zone18B_Text_Leviathan16Defeat
Zone18B_EventScript_LeviathanBattle_1:
# 1099 "data/maps/Zone18B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 1100 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 1101 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 1102 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1103 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_5, MSGBOX_DEFAULT
# 1104 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_6, MSGBOX_DEFAULT
# 1105 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_7, MSGBOX_DEFAULT
# 1106 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 1107 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 1108 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1109 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_8, MSGBOX_DEFAULT
# 1110 "data/maps/Zone18B/scripts.pory"
	giveitem ITEM_TM35
# 1111 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 1112 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1113 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_9, MSGBOX_DEFAULT
# 1114 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 1115 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
# 1116 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_10, MSGBOX_DEFAULT
# 1117 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_11, MSGBOX_DEFAULT
# 1118 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_12
# 1119 "data/maps/Zone18B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_16
# 1120 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 1
	goto_if_eq Zone18B_EventScript_LeviathanBattle_8
# 1124 "data/maps/Zone18B/scripts.pory"
	compare VAR_ZONE_18_STATE, 2
	goto_if_eq Zone18B_EventScript_LeviathanBattle_9
Zone18B_EventScript_LeviathanBattle_7:
# 1129 "data/maps/Zone18B/scripts.pory"
	playse SE_DOOR
# 1130 "data/maps/Zone18B/scripts.pory"
	delay 10
# 1131 "data/maps/Zone18B/scripts.pory"
	removeobject 1
# 1132 "data/maps/Zone18B/scripts.pory"
	removeobject 2
# 1133 "data/maps/Zone18B/scripts.pory"
	setflag FLAG_HIDE_ZONE18B_ELI
# 1134 "data/maps/Zone18B/scripts.pory"
	setflag FLAG_HIDE_ZONE18B_ZOE
# 1135 "data/maps/Zone18B/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_ELI
# 1136 "data/maps/Zone18B/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_ZOE
# 1137 "data/maps/Zone18B/scripts.pory"
	clearflag FLAG_HIDE_ZONE18A_BOAT
# 1138 "data/maps/Zone18B/scripts.pory"
	setvar VAR_ZONE_18_STATE, 3
# 1139 "data/maps/Zone18B/scripts.pory"
	release
	end

Zone18B_EventScript_LeviathanBattle_2:
# 1090 "data/maps/Zone18B/scripts.pory"
	setweather WEATHER_RAIN
# 1091 "data/maps/Zone18B/scripts.pory"
	doweather
# 1092 "data/maps/Zone18B/scripts.pory"
	msgbox Zone18B_EventScript_LeviathanBattle_Text_4, MSGBOX_DEFAULT
# 1093 "data/maps/Zone18B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL, Zone18B_Text_Leviathan16Defeat
# 1094 "data/maps/Zone18B/scripts.pory"
	resetweather
# 1095 "data/maps/Zone18B/scripts.pory"
	doweather
	goto Zone18B_EventScript_LeviathanBattle_1

Zone18B_EventScript_LeviathanBattle_8:
# 1121 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Zone18B_Movement_Eli_RunOutLeft
# 1122 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Zone18B_Movement_Zoe_RunOutLeft
# 1123 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
	goto Zone18B_EventScript_LeviathanBattle_7

Zone18B_EventScript_LeviathanBattle_9:
# 1125 "data/maps/Zone18B/scripts.pory"
	applymovement 2, Zone18B_Movement_Zoe_RunOutRight
# 1126 "data/maps/Zone18B/scripts.pory"
	applymovement 1, Zone18B_Movement_Eli_RunOutRight
# 1127 "data/maps/Zone18B/scripts.pory"
	waitmovement 0
	goto Zone18B_EventScript_LeviathanBattle_7


# 1147 "data/maps/Zone18B/scripts.pory"
Zone18B_Movement_Eli_RunOutLeft:
# 1148 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1149 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1149 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1149 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1150 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1150 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1151 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1151 "data/maps/Zone18B/scripts.pory"
	walk_down
	step_end

# 1154 "data/maps/Zone18B/scripts.pory"
Zone18B_Movement_Eli_RunOutRight:
# 1155 "data/maps/Zone18B/scripts.pory"
	walk_right
# 1156 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1156 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1156 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1157 "data/maps/Zone18B/scripts.pory"
	walk_right
# 1158 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1158 "data/maps/Zone18B/scripts.pory"
	walk_down
	step_end

# 1161 "data/maps/Zone18B/scripts.pory"
Zone18B_Movement_Zoe_RunOutLeft:
# 1162 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1162 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1163 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1163 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1163 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1164 "data/maps/Zone18B/scripts.pory"
	walk_left
# 1165 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1165 "data/maps/Zone18B/scripts.pory"
	walk_down
	step_end

# 1168 "data/maps/Zone18B/scripts.pory"
Zone18B_Movement_Zoe_RunOutRight:
# 1169 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1169 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1169 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1170 "data/maps/Zone18B/scripts.pory"
	walk_right
# 1170 "data/maps/Zone18B/scripts.pory"
	walk_right
# 1171 "data/maps/Zone18B/scripts.pory"
	walk_down
# 1171 "data/maps/Zone18B/scripts.pory"
	walk_down
	step_end

Zone18B_EventScript_DoorLocked_Text_0:
# 23 "data/maps/Zone18B/scripts.pory"
	.string "This door appears to be locked\nright now…$"

Zone18B_EventScript_RockRoomDoor_Text_0:
# 31 "data/maps/Zone18B/scripts.pory"
	.string "“Rock Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_IceRoomDoor_Text_0:
# 45 "data/maps/Zone18B/scripts.pory"
	.string "“Ice Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_DarkRoomDoor_Text_0:
# 59 "data/maps/Zone18B/scripts.pory"
	.string "“Dark Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFlyingRoomDoor_Text_0:
# 73 "data/maps/Zone18B/scripts.pory"
	.string "“Flying Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_PsychicRoomDoor_Text_0:
# 101 "data/maps/Zone18B/scripts.pory"
	.string "“Psychic Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_FightingRoomDoor_Text_0:
# 115 "data/maps/Zone18B/scripts.pory"
	.string "“Fighting Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftDragonRoomDoor_Text_0:
# 129 "data/maps/Zone18B/scripts.pory"
	.string "“Dragon Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFairyRoomDoor_Text_0:
# 157 "data/maps/Zone18B/scripts.pory"
	.string "“Fairy Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_GroundRoomDoor_Text_0:
# 185 "data/maps/Zone18B/scripts.pory"
	.string "“Ground Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftBugRoomDoor_Text_0:
# 199 "data/maps/Zone18B/scripts.pory"
	.string "“Bug Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftSteelRoomDoor_Text_0:
# 227 "data/maps/Zone18B/scripts.pory"
	.string "“Steel Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftPoisonRoomDoor_Text_0:
# 255 "data/maps/Zone18B/scripts.pory"
	.string "“Poison Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftElectricRoomDoor_Text_0:
# 283 "data/maps/Zone18B/scripts.pory"
	.string "“Electric Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftFireRoomDoor_Text_0:
# 311 "data/maps/Zone18B/scripts.pory"
	.string "“Fire Room,” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_LeftLeviathanRoomDoor_Text_0:
# 339 "data/maps/Zone18B/scripts.pory"
	.string "“Leviathan's Room,”\p“See for yourself what Pokémon await\nyou!” the sign says.\pDo you want to go through?$"

Zone18B_EventScript_Statue_Text_0:
# 777 "data/maps/Zone18B/scripts.pory"
	.string "Trainer's Dojo\nEstablished 2021$"

Zone18B_EventScript_EliZoe_Text_0:
# 1056 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: You really got it back for me?$"

Zone18B_EventScript_EliZoe_Text_1:
# 1057 "data/maps/Zone18B/scripts.pory"
	.string "{PLAYER} returned the Azurill doll to\n"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}.$"

Zone18B_EventScript_EliZoe_Text_2:
# 1058 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Wow! Thank you so much!$"

Zone18B_EventScript_EliZoe_Text_3:
# 1059 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Seriously, thank you so much.\p"
	.string "My brother loves that doll, so we are\n"
	.string "sincerely in your debt.$"

Zone18B_EventScript_EliZoe_Text_4:
# 1061 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: We don't have much in the way of a\n"
	.string "reward, but maybe you can just keep\l"
	.string "that Diving Gear we lent you. Thank you\l"
	.string "again for your help.$"

Zone18B_EventScript_EliZoe_Text_5:
# 1062 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah, thank you thank you thank\n"
	.string "you!$"

Zone18B_EventScript_EliZoe_Text_6:
# 1068 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Thank you again for your help.$"

Zone18B_EventScript_LeviathanBattle_Text_0:
# 1078 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Is this the challenger you were\n"
	.string "telling me about?$"

Zone18B_EventScript_LeviathanBattle_Text_1:
# 1081 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah! They've been beating all\n"
	.string "the other Trainers!$"

Zone18B_EventScript_LeviathanBattle_Text_2:
# 1086 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: To truly clear the Trainer's Dojo,\n"
	.string "you must defeat the two of us in a\l"
	.string "Double Battle!$"

Zone18B_EventScript_LeviathanBattle_Text_3:
# 1087 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Taste our power!$"

Zone18B_EventScript_LeviathanBattle_Text_4:
# 1092 "data/maps/Zone18B/scripts.pory"
	.string "It suddenly began to rain!$"

Zone18B_EventScript_LeviathanBattle_Text_5:
# 1103 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Aww! We lost, sis!$"

Zone18B_EventScript_LeviathanBattle_Text_6:
# 1104 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: That's ok, Eli. We'll learn from this,\n"
	.string "yeah?$"

Zone18B_EventScript_LeviathanBattle_Text_7:
# 1105 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Yeah yeah! And we gotta give\n"
	.string "{PLAYER} the reward!$"

Zone18B_EventScript_LeviathanBattle_Text_8:
# 1109 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Right! Here's our little gift for\n"
	.string "clearing the Trainer's Dojo.$"

Zone18B_EventScript_LeviathanBattle_Text_9:
# 1113 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: Ah! I just remembered!$"

Zone18B_EventScript_LeviathanBattle_Text_10:
# 1116 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: What? What is it?$"

Zone18B_EventScript_LeviathanBattle_Text_11:
# 1117 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Eli{COLOR DARK_GRAY}: I left my Azurill doll at the beach!\p"
	.string "I gotta go get it!$"

Zone18B_EventScript_LeviathanBattle_Text_12:
# 1118 "data/maps/Zone18B/scripts.pory"
	.string "{COLOR BLUE}Zoe{COLOR DARK_GRAY}: Oh! I'll come with you, I guess.$"

Zone18B_Text_Leviathan16Defeat::
# 1143 "data/maps/Zone18B/scripts.pory"
	.string "Eli: Darn it!\p"
	.string "Zoe: It seems you've defeated us.$"
