BorealThicket_MapScripts::
# 2 "data/maps/BorealThicket/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BorealThicket_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BorealThicket_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BorealThicket/scripts.pory"
	goto_if_set FLAG_ITEM_BOREAL_THICKET_TM_ICY_WIND, BorealThicket_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 6 "data/maps/BorealThicket/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST
	return

BorealThicket_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 4 "data/maps/BorealThicket/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
	return


BorealThicket_EventScript_BirdKeeperFlyingTaxi::
# 12 "data/maps/BorealThicket/scripts.pory"
	lock
# 13 "data/maps/BorealThicket/scripts.pory"
	faceplayer
# 14 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_0, MSGBOX_YESNO
# 15 "data/maps/BorealThicket/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BorealThicket_EventScript_BirdKeeperFlyingTaxi_2
# 20 "data/maps/BorealThicket/scripts.pory"
	applymovement LOCALID_BIRD_KEEPER_BOREAL_THICKET, Common_Movement_FaceRight
# 21 "data/maps/BorealThicket/scripts.pory"
	waitmovement 0
# 22 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_2
# 23 "data/maps/BorealThicket/scripts.pory"
	setspeaker BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_3
# 24 "data/maps/BorealThicket/scripts.pory"
	playmoncry SPECIES_DELIBIRD, CRY_MODE_NORMAL
# 25 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_4
# 26 "data/maps/BorealThicket/scripts.pory"
	warp MAP_ZONE_SANCTUARY_BREEZY_MEADOW, 255, 21, 8
# 27 "data/maps/BorealThicket/scripts.pory"
	waitstate
	end

BorealThicket_EventScript_BirdKeeperFlyingTaxi_2:
# 16 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_1
# 17 "data/maps/BorealThicket/scripts.pory"
	release
	end


BorealThicket_EventScript_TMIcyWind::
# 32 "data/maps/BorealThicket/scripts.pory"
	lock
# 33 "data/maps/BorealThicket/scripts.pory"
	goto_if_set FLAG_ITEM_BOREAL_THICKET_TM_ICY_WIND, BorealThicket_EventScript_TMIcyWind_2
# 38 "data/maps/BorealThicket/scripts.pory"
	waitse
# 39 "data/maps/BorealThicket/scripts.pory"
	removeobject VAR_LAST_TALKED
# 40 "data/maps/BorealThicket/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_TM_CHEST_OPEN
# 41 "data/maps/BorealThicket/scripts.pory"
	setflag FLAG_ITEM_BOREAL_THICKET_TM_ICY_WIND
# 42 "data/maps/BorealThicket/scripts.pory"
	addobject VAR_LAST_TALKED
# 43 "data/maps/BorealThicket/scripts.pory"
	finditem ITEM_TM_ICY_WIND
# 44 "data/maps/BorealThicket/scripts.pory"
	release
	end

BorealThicket_EventScript_TMIcyWind_2:
# 34 "data/maps/BorealThicket/scripts.pory"
	msgbox gText_ItemChestIsEmpty
# 35 "data/maps/BorealThicket/scripts.pory"
	release
	end


BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_0:
# 14 "data/maps/BorealThicket/scripts.pory"
	.string "Flying Taxi at your service! Express\n"
	.string "flight to Breezy Meadow! All aboard?$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_1:
# 16 "data/maps/BorealThicket/scripts.pory"
	.string "Alrighty, we'll be here, awaiting our\n"
	.string "next passenger!$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_2:
# 22 "data/maps/BorealThicket/scripts.pory"
	.string "Delibird! Use Fly!$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_3:
# 23 "data/maps/BorealThicket/scripts.pory"
	.string "Delibird$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_4:
# 25 "data/maps/BorealThicket/scripts.pory"
	.string "Deliii!$"
