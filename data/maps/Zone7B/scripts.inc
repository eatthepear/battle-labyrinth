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
# 23 "data/maps/Zone7B/scripts.pory"
	trainerbattle_no_intro TRAINER_PBL_BETTY_LEVIATHAN_7, Zone7B_Text_Leviathan7Defeat
Zone7B_EventScript_LeviathanBattle_7:
# 25 "data/maps/Zone7B/scripts.pory"
	clearflag FLAG_FORCE_BATTLE_ANIM_ON
# 26 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_EventScript_LeviathanBattle_Text_2, MSGBOX_DEFAULT
# 27 "data/maps/Zone7B/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 28 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_LeviathanPost
# 29 "data/maps/Zone7B/scripts.pory"
	closemessage
# 30 "data/maps/Zone7B/scripts.pory"
	setflag FLAG_BEAT_LEVIATHAN_7
# 31 "data/maps/Zone7B/scripts.pory"
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
	trainerbattle_no_intro TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL, Zone7B_Text_Leviathan7Defeat
	goto Zone7B_EventScript_LeviathanBattle_7


# 48 "data/maps/Zone7B/scripts.pory"

# 49 "data/maps/Zone7B/scripts.pory"

# 50 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_Lady::
# 51 "data/maps/Zone7B/scripts.pory"
	lock
# 52 "data/maps/Zone7B/scripts.pory"
	faceplayer
# 53 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_BRUTAL, Zone7B_EventScript_AlreadyHealed
# 54 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_SETTINGS_INDEPENDENT, Zone7B_EventScript_AlreadyHealed
# 55 "data/maps/Zone7B/scripts.pory"
	goto_if_set FLAG_ZONE7B_HEAL_USED, Zone7B_EventScript_AlreadyHealed
# 56 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_WantToHeal, MSGBOX_YESNO
# 57 "data/maps/Zone7B/scripts.pory"
	compare VAR_RESULT, YES
# 58 "data/maps/Zone7B/scripts.pory"
	goto_if_eq Zone7B_EventScript_Heal
# 59 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_ComeBack, MSGBOX_AUTOCLOSE
# 60 "data/maps/Zone7B/scripts.pory"
	release
# 61 "data/maps/Zone7B/scripts.pory"
	end
# 62 "data/maps/Zone7B/scripts.pory"

# 63 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_AlreadyHealed:
# 64 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_GoodLuck, MSGBOX_AUTOCLOSE
# 65 "data/maps/Zone7B/scripts.pory"
	release
# 66 "data/maps/Zone7B/scripts.pory"
	end
# 67 "data/maps/Zone7B/scripts.pory"

# 68 "data/maps/Zone7B/scripts.pory"
Zone7B_EventScript_Heal:
# 69 "data/maps/Zone7B/scripts.pory"
	msgbox Zone7B_Text_RestWell, MSGBOX_AUTOCLOSE
# 70 "data/maps/Zone7B/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Zone7B/scripts.pory"
	playfanfare MUS_HEAL
# 72 "data/maps/Zone7B/scripts.pory"
	waitfanfare
# 73 "data/maps/Zone7B/scripts.pory"
	special HealPlayerParty
# 74 "data/maps/Zone7B/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/Zone7B/scripts.pory"
	setflag FLAG_ZONE7B_HEAL_USED
# 76 "data/maps/Zone7B/scripts.pory"
	goto Zone7B_EventScript_AlreadyHealed
# 77 "data/maps/Zone7B/scripts.pory"
	end
# 78 "data/maps/Zone7B/scripts.pory"

# 79 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_WantToHeal:
# 80 "data/maps/Zone7B/scripts.pory"
	.string "Greetings, child.\n"
# 81 "data/maps/Zone7B/scripts.pory"
	.string "To ease your journey, you may rest\l"
# 82 "data/maps/Zone7B/scripts.pory"
	.string "at my humble home.\p"
# 83 "data/maps/Zone7B/scripts.pory"
	.string "I only have enough medicine to\n"
# 84 "data/maps/Zone7B/scripts.pory"
	.string "heal your Pokémon once though.\p"
# 85 "data/maps/Zone7B/scripts.pory"
	.string "Would you like to rest, child?$"
# 86 "data/maps/Zone7B/scripts.pory"

# 87 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_RestWell:
# 88 "data/maps/Zone7B/scripts.pory"
	.string "Rest well, child.$"
# 89 "data/maps/Zone7B/scripts.pory"

# 90 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_GoodLuck:
# 91 "data/maps/Zone7B/scripts.pory"
	.string "Best of luck on your journey, child.$"
# 92 "data/maps/Zone7B/scripts.pory"

# 93 "data/maps/Zone7B/scripts.pory"
Zone7B_Text_ComeBack:
# 94 "data/maps/Zone7B/scripts.pory"
	.string "Come back when you need to rest, child.$"

Zone7B_EventScript_LeviathanBattle_Text_0:
# 13 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Well, I will be here, if you change\n"
	.string "your mind.$"

Zone7B_EventScript_LeviathanBattle_Text_1:
# 18 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: I'll will show you how to behave\n"
	.string "in the prim and proper way!$"

Zone7B_EventScript_LeviathanBattle_Text_2:
# 26 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Your battling skills are\n"
	.string "certainly up to par. Excellent form.\p"
	.string "Aside from that, I'd like to give you\n"
	.string "these Berries.\p"
	.string "Very, very expensive, or so my butler\n"
	.string "tells me.$"

Zone7B_Text_Leviathan7WantBattle::
# 35 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: Your clothes are all covered in\n"
	.string "dirt.\p"
	.string "I think you could use a lesson in proper\n"
	.string "etiquette, what do you say?$"

Zone7B_Text_Leviathan7Defeat::
# 39 "data/maps/Zone7B/scripts.pory"
	.string "It seems I was the one who ended\n"
	.string "up being humbled…$"

Zone7B_Text_LeviathanPost::
# 44 "data/maps/Zone7B/scripts.pory"
	.string "{COLOR BLUE}Betty{COLOR DARK_GRAY}: I've been staying here at my\n"
	.string "friend's house while our new mansion\l"
	.string "gets renovated.\p"
	.string "Isn't that exciting?$"
