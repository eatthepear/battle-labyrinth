BorealThicket_MapScripts::
	.byte 0


BorealThicket_EventScript_BirdKeeperFlyingTaxi::
# 4 "data/maps/BorealThicket/scripts.pory"
	lock
# 5 "data/maps/BorealThicket/scripts.pory"
	faceplayer
# 6 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_0, MSGBOX_YESNO
# 7 "data/maps/BorealThicket/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BorealThicket_EventScript_BirdKeeperFlyingTaxi_2
# 12 "data/maps/BorealThicket/scripts.pory"
	applymovement LOCALID_BIRD_KEEPER_BOREAL_THICKET, Common_Movement_FaceRight
# 13 "data/maps/BorealThicket/scripts.pory"
	waitmovement 0
# 14 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_2
# 15 "data/maps/BorealThicket/scripts.pory"
	setspeaker BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_3
# 16 "data/maps/BorealThicket/scripts.pory"
	playmoncry SPECIES_DELIBIRD, CRY_MODE_NORMAL
# 17 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_4
# 18 "data/maps/BorealThicket/scripts.pory"
	warp MAP_ZONE_SANCTUARY_BREEZY_MEADOW, 255, 21, 8
# 19 "data/maps/BorealThicket/scripts.pory"
	waitstate
	end

BorealThicket_EventScript_BirdKeeperFlyingTaxi_2:
# 8 "data/maps/BorealThicket/scripts.pory"
	msgbox BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_1
# 9 "data/maps/BorealThicket/scripts.pory"
	release
	end


BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_0:
# 6 "data/maps/BorealThicket/scripts.pory"
	.string "Flying Taxi at your service! Express\n"
	.string "flight to Breezy Meadow! All aboard?$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_1:
# 8 "data/maps/BorealThicket/scripts.pory"
	.string "Alrighty, we'll be here, awaiting our\n"
	.string "next passenger!$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_2:
# 14 "data/maps/BorealThicket/scripts.pory"
	.string "Delibird! Use Fly!$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_3:
# 15 "data/maps/BorealThicket/scripts.pory"
	.string "Delibird$"

BorealThicket_EventScript_BirdKeeperFlyingTaxi_Text_4:
# 17 "data/maps/BorealThicket/scripts.pory"
	.string "Deliii!$"
