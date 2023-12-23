Zone7B_MapScripts::
	.byte 0


Zone7B_EventScript_LeviathanBattle::
# 4 "data/maps/Zone7B/scripts.pory"
	lock
# 5 "data/maps/Zone7B/scripts.pory"
	faceplayer
# 6 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_BEAT_LEVIATHAN_7, Zone7B_EventScript_LeviathanBattle_2
# 11 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_Leviathan7WantBattle, MSGBOX_YESNO
# 12 "data/maps/Zone7B/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Zone7B_EventScript_LeviathanBattle_5
# 17 "data/maps/Zone7B/scripts.pory"
	fadeoutbgm 1
# 18 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_EventScript_LeviathanBattle_Text_1, MSGBOX_DEFAULT
# 19 "data/maps/Zone7B/scripts.pory"
	setflag FLAG_FORCE_BATTLE_ANIM_ON
# 20 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone7B_EventScript_LeviathanBattle_8
# 20 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_CHALLENGE, Zone7B_EventScript_LeviathanBattle_8
# 24 "data/maps/Zone7B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
# 25 "data/maps/Zone7B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BETTY_LEVIATHAN_7, Zone7B_Text_Leviathan7Defeat
Zone7B_EventScript_LeviathanBattle_7:
# 27 "data/maps/Zone7B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 28 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 29 "data/maps/Zone7B/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 30 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_LeviathanPost
# 31 "data/maps/Zone7B/scripts.pory"
	closemessage
# 32 "data/maps/Zone7B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_7
# 33 "data/maps/Zone7B/scripts.pory"
	release
	end

Zone7B_EventScript_LeviathanBattle_2:
# 7 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_LeviathanPost
# 8 "data/maps/Zone7B/scripts.pory"
	release
	end

Zone7B_EventScript_LeviathanBattle_5:
# 13 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_EventScript_LeviathanBattle_Text_0
# 14 "data/maps/Zone7B/scripts.pory"
	release
	end

Zone7B_EventScript_LeviathanBattle_8:
# 21 "data/maps/Zone7B/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BETTY
# 22 "data/maps/Zone7B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL, Zone7B_Text_Leviathan7Defeat
	goto Zone7B_EventScript_LeviathanBattle_7


# 50 "data/maps/Zone7B/scripts.pory"

# 51 "data/maps/Zone7B/scripts.pory"

# 52 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_Lady::
# 53 "data/maps/Zone7B/scripts.pory"
	lock
# 54 "data/maps/Zone7B/scripts.pory"
	faceplayer
# 55 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone7B_EventScript_AlreadyHealed
# 56 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone7B_EventScript_AlreadyHealed
# 57 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_ZONE7B_HEAL_USED, Zone7B_EventScript_AlreadyHealed
# 58 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_WantToHeal, MSGBOX_YESNO
# 59 "data/maps/Zone7B/scripts.pory"
	compare VAR_RESULT, YES
# 60 "data/maps/Zone7B/scripts.pory"
	goto_if_eq Zone7B_EventScript_Heal
# 61 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_ComeBack, MSGBOX_AUTOCLOSE
# 62 "data/maps/Zone7B/scripts.pory"
	release
# 63 "data/maps/Zone7B/scripts.pory"
	end
# 64 "data/maps/Zone7B/scripts.pory"

# 65 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_AlreadyHealed:
# 66 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_GoodLuck, MSGBOX_AUTOCLOSE
# 67 "data/maps/Zone7B/scripts.pory"
	release
# 68 "data/maps/Zone7B/scripts.pory"
	end
# 69 "data/maps/Zone7B/scripts.pory"

# 70 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_Heal:
# 71 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_RestWell, MSGBOX_AUTOCLOSE
# 72 "data/maps/Zone7B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/Zone7B/scripts.pory"
	playfanfare MUS_HEAL
# 74 "data/maps/Zone7B/scripts.pory"
	waitfanfare
# 75 "data/maps/Zone7B/scripts.pory"
	special HealPlayerParty
# 76 "data/maps/Zone7B/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/Zone7B/scripts.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 78 "data/maps/Zone7B/scripts.pory"
	goto Zone7B_EventScript_AlreadyHealed
# 79 "data/maps/Zone7B/scripts.pory"
	end
# 80 "data/maps/Zone7B/scripts.pory"

# 81 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_WantToHeal:
# 82 "data/maps/Zone7B/scripts.pory"
	.string "Greetings, child.\n"
# 83 "data/maps/Zone7B/scripts.pory"
	.string "To ease your journey, you may rest\l"
# 84 "data/maps/Zone7B/scripts.pory"
	.string "at my humble home.\p"
# 85 "data/maps/Zone7B/scripts.pory"
	.string "I only have enough medicine to\n"
# 86 "data/maps/Zone7B/scripts.pory"
	.string "heal your Pokémon once though.\p"
# 87 "data/maps/Zone7B/scripts.pory"
	.string "Would you like to rest, child?$"
# 88 "data/maps/Zone7B/scripts.pory"

# 89 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_RestWell:
# 90 "data/maps/Zone7B/scripts.pory"
	.string "Rest well, child.$"
# 91 "data/maps/Zone7B/scripts.pory"

# 92 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_GoodLuck:
# 93 "data/maps/Zone7B/scripts.pory"
	.string "Best of luck on your journey, child.$"
# 94 "data/maps/Zone7B/scripts.pory"

# 95 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_ComeBack:
# 96 "data/maps/Zone7B/scripts.pory"
	.string "Come back when you need to rest, child.$"

Zone7B_EventScript_LeviathanBattle_Text_0:
# 13 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Well, I will be here, if you change\n"
	.string "your mind.$"

Zone7B_EventScript_LeviathanBattle_Text_1:
# 18 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: {COLOR BLUE}Leviathan Betty{COLOR DARK_GRAY} will show you\n"
	.string "how to behave in the prim and proper\l"
	.string "way!$"

Zone7B_EventScript_LeviathanBattle_Text_2:
# 28 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Your battling skills are\n"
	.string "certainly up to par. Excellent form.\p"
	.string "Aside from that, I'd like to give you\n"
	.string "these Berries.\p"
	.string "Very, very expensive, or so my butler\n"
	.string "tells me.$"

Zone7B_Text_Leviathan7WantBattle::
# 37 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Your clothes are all covered in\n"
	.string "dirt.\p"
	.string "I think you could use a lesson in proper\n"
	.string "etiquette, what do you say?$"

Zone7B_Text_Leviathan7Defeat::
# 41 "data/maps/Zone7B/scripts.pory"
	.string "It seems I was the one who ended\n"
	.string "up being humbled…$"

Zone7B_Text_LeviathanPost::
# 46 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: I've been staying here at my\n"
	.string "friend's house while our new mansion\l"
	.string "gets renovated.\p"
	.string "Isn't that exciting?$"
