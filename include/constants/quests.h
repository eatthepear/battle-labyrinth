#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

enum {
    QUEST_PBL,
    QUEST_SIGNS,
    QUEST_SAVES,
    QUEST_POKEDEX,
    QUEST_CATCH_50,
    QUEST_GAUNTLET_1,
    QUEST_BERRIES,
    QUEST_FIND_100_HIDDEN,
    QUEST_9,
    QUEST_10,
    QUEST_11,
    QUEST_12,
    QUEST_13,
    QUEST_14,
    QUEST_15,
    QUEST_16,
    QUEST_17,
    QUEST_18,
    QUEST_19,
    QUEST_20,
    QUEST_21,
    QUEST_22,
    QUEST_23,
    QUEST_24,
    QUEST_25,
    QUEST_26,
    QUEST_27,
    QUEST_28,
    QUEST_29,
    QUEST_30,
    QUEST_31,
    QUEST_32,
    QUEST_33,
    QUEST_34,
    QUEST_35,
    QUEST_36,
    QUEST_37,
    QUEST_38,
    QUEST_39,
    QUEST_40,
    QUEST_41,
    QUEST_42,
    QUEST_43,
    QUEST_44,
    QUEST_45,
    QUEST_46,
    QUEST_47,
    QUEST_48,
    QUEST_49,
    QUEST_50,
    QUEST_51,
    QUEST_52,
    QUEST_53,
    QUEST_54,
    QUEST_55,
    QUEST_56,
    QUEST_57,
    QUEST_58,
    QUEST_59,
    QUEST_60,
    QUEST_61,
    QUEST_62,
    QUEST_63,
    QUEST_64,
    QUEST_COUNT
};

enum {
    SUB_QUEST_1,
    SUB_QUEST_2,
    SUB_QUEST_3,
    SUB_QUEST_4,
    SUB_QUEST_5,
    SUB_QUEST_6,
    SUB_QUEST_7,
    SUB_QUEST_8,
    SUB_QUEST_9,
    SUB_QUEST_10,
    SUB_QUEST_11,
    SUB_QUEST_12,
    SUB_QUEST_13,
    SUB_QUEST_14,
    SUB_QUEST_15,
    SUB_QUEST_16,
    SUB_QUEST_17,
    SUB_QUEST_18,
    SUB_QUEST_19,
    SUB_QUEST_20,
    SUB_QUEST_21,
    SUB_QUEST_22,
    SUB_QUEST_23,
    SUB_QUEST_24,
    SUB_QUEST_25,
    SUB_QUEST_26,
    SUB_QUEST_27,
    SUB_QUEST_28,
    SUB_QUEST_29,
    SUB_QUEST_30,
    SUB_QUEST_31,
    SUB_QUEST_32,
    SUB_QUEST_33,
    SUB_QUEST_34,
    SUB_QUEST_35,
    SUB_QUEST_36,
    SUB_QUEST_37,
    SUB_QUEST_38,
    SUB_QUEST_39,
    SUB_QUEST_40,
    SUB_QUEST_41,
    SUB_QUEST_42,
    SUB_QUEST_43,
    SUB_QUEST_44,
    SUB_QUEST_45,
    SUB_QUEST_46,
    SUB_QUEST_47,
    SUB_QUEST_48,
    SUB_QUEST_49,
    SUB_QUEST_50
};

#define QUEST_PBL_SUB_COUNT 50
#define QUEST_SIGNS_SUB_COUNT 50

#define SUB_QUEST_COUNT 160

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
