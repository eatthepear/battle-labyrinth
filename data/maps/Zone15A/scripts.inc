Zone15A_MapScripts::
# 2 "data/maps/Zone15A/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_SNOWBALL_3, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 6 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 8 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_TIMER_BALL, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 13 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_ICE_STONE, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 16 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 18 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_QUICK_BALL, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_REVIVE, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_18
# 26 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 28 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_DAWN_STONE, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_22
# 31 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_21:
# 33 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_TM26, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_26
# 36 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_TM_CHEST
Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_25:
# 38 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_GLALITITE, Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_29
# 41 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_ITEM_CHEST
	return

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_1

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 9 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_5

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 14 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_9

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 19 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_13

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_18:
# 24 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_17

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_22:
# 29 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_21

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_26:
# 34 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_TM_CHEST_OPEN
	goto Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_25

Zone15A_MapScripts_MAP_SCRIPT_ON_RESUME_29:
# 39 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
	return


Zone15A_EventScript_Snowball3::
# 47 "data/maps/Zone15A/scripts.pory"
	lock
# 48 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_SNOWBALL_3, Zone15A_EventScript_Snowball3_2
# 53 "data/maps/Zone15A/scripts.pory"
	waitse
# 54 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 55 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 56 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_SNOWBALL_3
# 57 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 58 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_SNOWBALL, 3
# 59 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_Snowball3_2:
# 49 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 50 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_TimerBall::
# 64 "data/maps/Zone15A/scripts.pory"
	lock
# 65 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_TIMER_BALL, Zone15A_EventScript_TimerBall_2
# 70 "data/maps/Zone15A/scripts.pory"
	waitse
# 71 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 72 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 73 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_TIMER_BALL
# 74 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 75 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_TIMER_BALL, 1
# 76 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_TimerBall_2:
# 66 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 67 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_IceStone::
# 81 "data/maps/Zone15A/scripts.pory"
	lock
# 82 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_ICE_STONE, Zone15A_EventScript_IceStone_2
# 87 "data/maps/Zone15A/scripts.pory"
	waitse
# 88 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 89 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 90 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_ICE_STONE
# 91 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 92 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_ICE_STONE, 1
# 93 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_IceStone_2:
# 83 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 84 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_QuickBall::
# 98 "data/maps/Zone15A/scripts.pory"
	lock
# 99 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_QUICK_BALL, Zone15A_EventScript_QuickBall_2
# 104 "data/maps/Zone15A/scripts.pory"
	waitse
# 105 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 106 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 107 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_QUICK_BALL
# 108 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 109 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_QUICK_BALL, 1
# 110 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_QuickBall_2:
# 100 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 101 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_Revive::
# 115 "data/maps/Zone15A/scripts.pory"
	lock
# 116 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_REVIVE, Zone15A_EventScript_Revive_2
# 121 "data/maps/Zone15A/scripts.pory"
	waitse
# 122 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 123 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 124 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_REVIVE
# 125 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 126 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_REVIVE, 1
# 127 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_Revive_2:
# 117 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 118 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_DawnStone::
# 132 "data/maps/Zone15A/scripts.pory"
	lock
# 133 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_DAWN_STONE, Zone15A_EventScript_DawnStone_2
# 138 "data/maps/Zone15A/scripts.pory"
	waitse
# 139 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 140 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 141 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_DAWN_STONE
# 142 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 143 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_DAWN_STONE, 1
# 144 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_DawnStone_2:
# 134 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 135 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_TM26::
# 149 "data/maps/Zone15A/scripts.pory"
	lock
# 150 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_TM26, Zone15A_EventScript_TM26_2
# 155 "data/maps/Zone15A/scripts.pory"
	waitse
# 156 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 157 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 158 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_TM26
# 159 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 160 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_TM26, 1
# 161 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_TM26_2:
# 151 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 152 "data/maps/Zone15A/scripts.pory"
	release
	end


Zone15A_EventScript_Glalitite::
# 166 "data/maps/Zone15A/scripts.pory"
	lock
# 167 "data/maps/Zone15A/scripts.pory"
	goto_if_set FLAG_ITEM_ZONE15A_GLALITITE, Zone15A_EventScript_Glalitite_2
# 172 "data/maps/Zone15A/scripts.pory"
	waitse
# 173 "data/maps/Zone15A/scripts.pory"
	removeobject VAR_LAST_TALKED
# 174 "data/maps/Zone15A/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_ITEM_CHEST_OPEN
# 175 "data/maps/Zone15A/scripts.pory"
	setflag FLAG_ITEM_ZONE15A_GLALITITE
# 176 "data/maps/Zone15A/scripts.pory"
	addobject VAR_LAST_TALKED
# 177 "data/maps/Zone15A/scripts.pory"
	finditem ITEM_GLALITITE, 1
# 178 "data/maps/Zone15A/scripts.pory"
	release
	end

Zone15A_EventScript_Glalitite_2:
# 168 "data/maps/Zone15A/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 169 "data/maps/Zone15A/scripts.pory"
	release
	end

