Zone28C_MapScripts::
	.byte 0


Zone28C_EventScript_Michael::
# 4 "data/maps/Zone28C/scripts.pory"
	trainerbattle_single TRAINER_PBL_MICHAEL, Zone28C_EventScript_Michael_Text_0, Zone28C_EventScript_Michael_Text_1
# 5 "data/maps/Zone28C/scripts.pory"
	msgbox Zone28C_EventScript_Michael_Text_2, MSGBOX_AUTOCLOSE
	end


Zone28C_EventScript_Greta::
# 10 "data/maps/Zone28C/scripts.pory"
	trainerbattle_single TRAINER_PBL_GRETA, Zone28C_EventScript_Michael_Text_0, Zone28C_EventScript_Michael_Text_1
# 11 "data/maps/Zone28C/scripts.pory"
	msgbox Zone28C_EventScript_Michael_Text_2, MSGBOX_AUTOCLOSE
	end


Zone28C_EventScript_Michael_Text_0:
# 4 "data/maps/Zone28C/scripts.pory"
	.string "BATTLE!$"

Zone28C_EventScript_Michael_Text_1:
# 4 "data/maps/Zone28C/scripts.pory"
	.string "DEFEAT!$"

Zone28C_EventScript_Michael_Text_2:
# 5 "data/maps/Zone28C/scripts.pory"
	.string "DEFEATED!$"
