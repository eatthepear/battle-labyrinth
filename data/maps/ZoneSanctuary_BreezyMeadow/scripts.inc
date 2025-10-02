ZoneSanctuary_BreezyMeadow_MapScripts::
	.byte 0


ZoneSanctuary_BreezyMeadow_EventScript_SchoolKidM::
# 4 "data/maps/ZoneSanctuary_BreezyMeadow/scripts.pory"
	lock
# 5 "data/maps/ZoneSanctuary_BreezyMeadow/scripts.pory"
	faceplayer
# 6 "data/maps/ZoneSanctuary_BreezyMeadow/scripts.pory"
	msgbox ZoneSanctuary_BreezyMeadow_EventScript_SchoolKidM_Text_0
# 7 "data/maps/ZoneSanctuary_BreezyMeadow/scripts.pory"
	release
	return


ZoneSanctuary_BreezyMeadow_EventScript_SchoolKidM_Text_0:
# 6 "data/maps/ZoneSanctuary_BreezyMeadow/scripts.pory"
	.string "I've tried to knock out wild Pokémon to\n"
	.string "gain experience, but they don't give\l"
	.string "any!\p"
	.string "Maybe it's time for me to switch to Easy\n"
	.string "difficulty…$"
