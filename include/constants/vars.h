#ifndef GUARD_CONSTANTS_VARS_H
#define GUARD_CONSTANTS_VARS_H

#define VARS_START 0x4000

// temporary vars
// The first 0x10 vars are temporary--they are cleared every time a map is loaded.
#define TEMP_VARS_START            0x4000
#define VAR_TEMP_0                 (TEMP_VARS_START + 0x0)
#define VAR_TEMP_1                 (TEMP_VARS_START + 0x1)
#define VAR_TEMP_2                 (TEMP_VARS_START + 0x2)
#define VAR_TEMP_3                 (TEMP_VARS_START + 0x3) // Note: Used when the player checks a TV
#define VAR_TEMP_4                 (TEMP_VARS_START + 0x4)
#define VAR_TEMP_5                 (TEMP_VARS_START + 0x5)
#define VAR_TEMP_6                 (TEMP_VARS_START + 0x6)
#define VAR_TEMP_7                 (TEMP_VARS_START + 0x7)
#define VAR_TEMP_8                 (TEMP_VARS_START + 0x8)
#define VAR_TEMP_9                 (TEMP_VARS_START + 0x9)
#define VAR_TEMP_A                 (TEMP_VARS_START + 0xA)
#define VAR_TEMP_B                 (TEMP_VARS_START + 0xB)
#define VAR_TEMP_C                 (TEMP_VARS_START + 0xC)
#define VAR_TEMP_D                 (TEMP_VARS_START + 0xD)
#define VAR_TEMP_E                 (TEMP_VARS_START + 0xE)
#define VAR_TEMP_F                 (TEMP_VARS_START + 0xF)
#define TEMP_VARS_END              VAR_TEMP_F
#define NUM_TEMP_VARS              (TEMP_VARS_END - TEMP_VARS_START + 1)

// object gfx id vars
// These 0x10 vars are used to dynamically control a map object's sprite.
// For example, the rival's sprite id is dynamically set based on the player's gender.
// See VarGetObjectEventGraphicsId().
#define VAR_OBJ_GFX_ID_0           0x4010
#define VAR_OBJ_GFX_ID_1           0x4011
#define VAR_OBJ_GFX_ID_2           0x4012
#define VAR_OBJ_GFX_ID_3           0x4013
#define VAR_OBJ_GFX_ID_4           0x4014
#define VAR_OBJ_GFX_ID_5           0x4015
#define VAR_OBJ_GFX_ID_6           0x4016
#define VAR_OBJ_GFX_ID_7           0x4017
#define VAR_OBJ_GFX_ID_8           0x4018
#define VAR_OBJ_GFX_ID_9           0x4019
#define VAR_OBJ_GFX_ID_A           0x401A
#define VAR_OBJ_GFX_ID_B           0x401B
#define VAR_OBJ_GFX_ID_C           0x401C
#define VAR_OBJ_GFX_ID_D           0x401D
#define VAR_OBJ_GFX_ID_E           0x401E
#define VAR_OBJ_GFX_ID_F           0x401F

// Custom vars
#define VAR_ZONE                             0x4020
#define VAR_LEVEL_CAP                        0x4021
#define VAR_BATTLE_STARTING_STATUS           0x4022
#define VAR_GENERIC                          0x4023
#define VAR_WILD_MUSIC                       0x4024
#define VAR_TRAINER_MUSIC                    0x4025
#define VAR_LEVIATHAN_MUSIC                  0x4026
#define VAR_SANCTUARY_MUSIC                  0x4027
#define VAR_STARTER_MON                      0x4028 // 0=Grass, 1=Fire, 2=Water
#define VAR_UNUSED_0x4029                    0x4029
#define VAR_DEXNAV_SPECIES                   0x402A // Registered dexnav species
#define VAR_DIFFICULTY                       0x402B
#define VAR_FARM_STOCK                       0x402C
#define VAR_REVISITING_ZONE                  0x402D // functionally unused
#define VAR_GROTTO_NUMBER                    0x402E
#define VAR_GROTTO_SPECIES                   0x402F

// Tracker Vars (Don't manually set)
#define VAR_REPEL_STEP_COUNT                 0x4040
#define VAR_MON_TO_PC                        0x4041
// #define VAR_NUZLOCKE_DEATHS                  0x4042
#define VAR_NEVER_SET                        0x4043

// Zone State vars
#define VAR_ZONE_0_STATE                     0x4050
#define VAR_ZONE_1_STATE                     0x4051
#define VAR_ZONE_2_STATE                     0x4052
#define VAR_ZONE_3_STATE                     0x4053
#define VAR_ZONE_4_STATE                     0x4054
#define VAR_ZONE_5_STATE                     0x4055
#define VAR_ZONE_6_STATE                     0x4056
#define VAR_ZONE_7_STATE                     0x4057
#define VAR_ZONE_8_STATE                     0x4058
#define VAR_ZONE_9_STATE                     0x4059
#define VAR_ZONE_10_STATE                    0x405A
#define VAR_ZONE_11_STATE                    0x405B
#define VAR_ZONE_12_STATE                    0x405C
#define VAR_ZONE_13_STATE                    0x405D
#define VAR_ZONE_14_STATE                    0x405E
#define VAR_ZONE_15_STATE                    0x405F
#define VAR_ZONE_16_STATE                    0x4060
#define VAR_ZONE_17_STATE                    0x4061
#define VAR_ZONE_18_STATE                    0x4062
#define VAR_ZONE_19_STATE                    0x4063
#define VAR_ZONE_20_STATE                    0x4064
#define VAR_ZONE_21_STATE                    0x4065
#define VAR_ZONE_22_STATE                    0x4066
#define VAR_ZONE_23_STATE                    0x4067
#define VAR_ZONE_24_STATE                    0x4068
#define VAR_ZONE_25_STATE                    0x4069
#define VAR_ZONE_26_STATE                    0x406A
#define VAR_ZONE_27_STATE                    0x406B
#define VAR_ZONE_28_STATE                    0x406C
#define VAR_ZONE_29_STATE                    0x406D
#define VAR_ZONE_30_STATE                    0x406E
#define VAR_ZONE_31_STATE                    0x406F
#define VAR_ZONE_32_STATE                    0x4070
#define VAR_ZONE_33_STATE                    0x4071
#define VAR_ZONE_34_STATE                    0x4072
#define VAR_ZONE_35_STATE                    0x4073
#define VAR_ZONE_36_STATE                    0x4074
#define VAR_ZONE_37_STATE                    0x4075
#define VAR_ZONE_38_STATE                    0x4076
#define VAR_ZONE_39_STATE                    0x4077
#define VAR_ZONE_40_STATE                    0x4078
#define VAR_ZONE_41_STATE                    0x4079
#define VAR_ZONE_42_STATE                    0x407A
#define VAR_ZONE_43_STATE                    0x407B
#define VAR_ZONE_44_STATE                    0x407C
#define VAR_ZONE_45_STATE                    0x407D
#define VAR_ZONE_46_STATE                    0x407E
#define VAR_ZONE_47_STATE                    0x407F
#define VAR_ZONE_48_STATE                    0x4080
#define VAR_ZONE_49_STATE                    0x4081
#define VAR_ZONE_50_STATE                    0x4082
#define VAR_ZONE_B1_STATE                    0x4083
#define VAR_ZONE_B2_STATE                    0x4084
#define VAR_ZONE_B3_STATE                    0x4085
#define VAR_ZONE_B4_STATE                    0x4086
#define VAR_ZONE_B5_STATE                    0x4087

// general purpose vars
#define VAR_RECYCLE_GOODS                                VARS_END
// #define VAR_REPEL_STEP_COUNT                             VARS_END
#define VAR_ICE_STEP_COUNT                               VARS_END
// #define VAR_STARTER_MON                                  VARS_END // 0=Treecko, 1=Torchic, 2=Mudkip
#define VAR_MIRAGE_RND_H                                 VARS_END
#define VAR_MIRAGE_RND_L                                 VARS_END
#define VAR_SECRET_BASE_MAP                              VARS_END
#define VAR_CYCLING_ROAD_RECORD_COLLISIONS               VARS_END
#define VAR_CYCLING_ROAD_RECORD_TIME_L                   VARS_END
#define VAR_CYCLING_ROAD_RECORD_TIME_H                   VARS_END
#define VAR_FRIENDSHIP_STEP_COUNTER                      VARS_END
#define VAR_POISON_STEP_COUNTER                          VARS_END
#define VAR_RESET_RTC_ENABLE                             VARS_END
#define VAR_ENIGMA_BERRY_AVAILABLE                       VARS_END
#define VAR_WONDER_NEWS_STEP_COUNTER                     VARS_END

#define VAR_FRONTIER_MANIAC_FACILITY                     VARS_END
#define VAR_FRONTIER_GAMBLER_CHALLENGE                   VARS_END
#define VAR_FRONTIER_GAMBLER_SET_CHALLENGE               VARS_END
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET                  VARS_END
#define VAR_FRONTIER_GAMBLER_STATE                       VARS_END

#define VAR_DEOXYS_ROCK_STEP_COUNT                       VARS_END
#define VAR_DEOXYS_ROCK_LEVEL                            VARS_END
#define VAR_PC_BOX_TO_SEND_MON                           VARS_END
#define VAR_ABNORMAL_WEATHER_LOCATION                    VARS_END
#define VAR_ABNORMAL_WEATHER_STEP_COUNTER                VARS_END
#define VAR_SHOULD_END_ABNORMAL_WEATHER                  VARS_END
#define VAR_FARAWAY_ISLAND_STEP_COUNTER                  VARS_END
#define VAR_REGICE_STEPS_1                               VARS_END
#define VAR_REGICE_STEPS_2                               VARS_END
#define VAR_REGICE_STEPS_3                               VARS_END
#define VAR_ALTERING_CAVE_WILD_SET                       VARS_END
#define VAR_DISTRIBUTE_EON_TICKET                        VARS_END // This var is read and written, but is always zero. The only way to obtain the Eon Ticket in Emerald is via Record Mixing
#define VAR_DAYS                                         VARS_END
#define VAR_FANCLUB_FAN_COUNTER                          VARS_END
#define VAR_FANCLUB_LOSE_FAN_TIMER                       VARS_END
#define VAR_DEPT_STORE_FLOOR                             VARS_END
#define VAR_TRICK_HOUSE_LEVEL                            VARS_END
#define VAR_POKELOT_PRIZE_ITEM                           VARS_END
#define VAR_NATIONAL_DEX                                 VARS_END
#define VAR_SEEDOT_SIZE_RECORD                           VARS_END
#define VAR_ASH_GATHER_COUNT                             VARS_END
#define VAR_BIRCH_STATE                                  VARS_END
#define VAR_CRUISE_STEP_COUNT                            VARS_END
#define VAR_POKELOT_RND1                                 VARS_END
#define VAR_POKELOT_RND2                                 VARS_END
#define VAR_POKELOT_PRIZE_PLACE                          VARS_END
#define VAR_UNUSED_0x404E                                VARS_END // Unused Var
#define VAR_LOTAD_SIZE_RECORD                            VARS_END
#define VAR_LITTLEROOT_TOWN_STATE                        VARS_END
#define VAR_OLDALE_TOWN_STATE                            VARS_END
#define VAR_DEWFORD_TOWN_STATE                           VARS_END // Unused Var
#define VAR_LAVARIDGE_TOWN_STATE                         VARS_END
#define VAR_CURRENT_SECRET_BASE                          VARS_END // was probably allocated for VAR_FALLARBOR_TOWN_STATE at one point
#define VAR_VERDANTURF_TOWN_STATE                        VARS_END // Unused Var
#define VAR_PACIFIDLOG_TOWN_STATE                        VARS_END // Unused Var
#define VAR_PETALBURG_CITY_STATE                         VARS_END
#define VAR_SLATEPORT_CITY_STATE                         VARS_END
#define VAR_MAUVILLE_CITY_STATE                          VARS_END // Unused Var
#define VAR_RUSTBORO_CITY_STATE                          VARS_END
#define VAR_FORTREE_CITY_STATE                           VARS_END // Unused Var
#define VAR_LILYCOVE_CITY_STATE                          VARS_END // Unused Var
#define VAR_MOSSDEEP_CITY_STATE                          VARS_END
#define VAR_SOOTOPOLIS_CITY_STATE                        VARS_END
#define VAR_EVER_GRANDE_CITY_STATE                       VARS_END // Unused Var
#define VAR_ROUTE101_STATE                               VARS_END
#define VAR_ROUTE102_STATE                               VARS_END // Unused Var
#define VAR_ROUTE103_STATE                               VARS_END // Unused Var
#define VAR_ROUTE104_STATE                               VARS_END
#define VAR_ROUTE105_STATE                               VARS_END // Unused Var
#define VAR_ROUTE106_STATE                               VARS_END // Unused Var
#define VAR_ROUTE107_STATE                               VARS_END // Unused Var
#define VAR_ROUTE108_STATE                               VARS_END // Unused Var
#define VAR_ROUTE109_STATE                               VARS_END // Unused Var
#define VAR_ROUTE110_STATE                               VARS_END
#define VAR_ROUTE111_STATE                               VARS_END // Unused Var
#define VAR_ROUTE112_STATE                               VARS_END // Unused Var
#define VAR_ROUTE113_STATE                               VARS_END // Unused Var
#define VAR_ROUTE114_STATE                               VARS_END // Unused Var
#define VAR_ROUTE115_STATE                               VARS_END // Unused Var
#define VAR_ROUTE116_STATE                               VARS_END
#define VAR_ROUTE117_STATE                               VARS_END // Unused Var
#define VAR_ROUTE118_STATE                               VARS_END
#define VAR_ROUTE119_STATE                               VARS_END
#define VAR_ROUTE120_STATE                               VARS_END // Unused Var
#define VAR_ROUTE121_STATE                               VARS_END
#define VAR_ROUTE122_STATE                               VARS_END // Unused Var
#define VAR_ROUTE123_STATE                               VARS_END // Unused Var
#define VAR_ROUTE124_STATE                               VARS_END // Unused Var
#define VAR_ROUTE125_STATE                               VARS_END // Unused Var
#define VAR_ROUTE126_STATE                               VARS_END // Unused Var
#define VAR_ROUTE127_STATE                               VARS_END // Unused Var
#define VAR_ROUTE128_STATE                               VARS_END
#define VAR_ROUTE129_STATE                               VARS_END // Unused Var
#define VAR_ROUTE130_STATE                               VARS_END // Unused Var
#define VAR_ROUTE131_STATE                               VARS_END // Unused Var
#define VAR_ROUTE132_STATE                               VARS_END // Unused Var
#define VAR_ROUTE133_STATE                               VARS_END // Unused Var
#define VAR_ROUTE134_STATE                               VARS_END // Unused Var
#define VAR_LITTLEROOT_HOUSES_STATE_MAY                  VARS_END
#define VAR_UNUSED_0x4083                                VARS_END // Unused Var
#define VAR_BIRCH_LAB_STATE                              VARS_END
#define VAR_PETALBURG_GYM_STATE                          VARS_END // 0-1: Wally tutorial, 2-6: 0-4 badges, 7: Defeated Norman, 8: Rematch Norman
#define VAR_CONTEST_HALL_STATE                           VARS_END
#define VAR_CABLE_CLUB_STATE                             VARS_END
#define VAR_CONTEST_TYPE                                 VARS_END
#define VAR_SECRET_BASE_INITIALIZED                      VARS_END
#define VAR_CONTEST_PRIZE_PICKUP                         VARS_END
#define VAR_UNUSED_0x408B                                VARS_END // Unused Var
#define VAR_LITTLEROOT_HOUSES_STATE_BRENDAN              VARS_END
#define VAR_LITTLEROOT_RIVAL_STATE                       VARS_END
#define VAR_BOARD_BRINEY_BOAT_STATE                      VARS_END
#define VAR_DEVON_CORP_3F_STATE                          VARS_END
#define VAR_BRINEY_HOUSE_STATE                           VARS_END
#define VAR_UNUSED_0x4091                                VARS_END // Unused Var
#define VAR_LITTLEROOT_INTRO_STATE                       VARS_END
#define VAR_MAUVILLE_GYM_STATE                           VARS_END
#define VAR_LILYCOVE_MUSEUM_2F_STATE                     VARS_END
#define VAR_LILYCOVE_FAN_CLUB_STATE                      VARS_END
#define VAR_BRINEY_LOCATION                              VARS_END
#define VAR_INIT_SECRET_BASE                             VARS_END
#define VAR_PETALBURG_WOODS_STATE                        VARS_END
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE                 VARS_END
#define VAR_RUSTURF_TUNNEL_STATE                         VARS_END
#define VAR_UNUSED_0x409B                                VARS_END // Unused Var
#define VAR_ELITE_4_STATE                                VARS_END
#define VAR_UNUSED_0x409D                                VARS_END // Unused Var
#define VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE      VARS_END
#define VAR_MOSSDEEP_SPACE_CENTER_STATE                  VARS_END
#define VAR_SLATEPORT_HARBOR_STATE                       VARS_END
#define VAR_UNUSED_0x40A1                                VARS_END // Unused var
#define VAR_SEAFLOOR_CAVERN_STATE                        VARS_END
#define VAR_CABLE_CAR_STATION_STATE                      VARS_END
#define VAR_SAFARI_ZONE_STATE                            VARS_END  // 0: In or out of SZ, 1: Player exiting SZ, 2: Player entering SZ
#define VAR_TRICK_HOUSE_BEING_WATCHED_STATE              VARS_END
#define VAR_TRICK_HOUSE_FOUND_TRICK_MASTER               VARS_END
#define VAR_TRICK_HOUSE_ENTRANCE_STATE                   VARS_END
#define VAR_UNUSED_0x40A8                                VARS_END // Unused Var
#define VAR_CYCLING_CHALLENGE_STATE                      VARS_END
#define VAR_SLATEPORT_MUSEUM_1F_STATE                    VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_1_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_2_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_3_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_4_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_5_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_6_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE                   VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_8_STATE                   VARS_END
#define VAR_WEATHER_INSTITUTE_STATE                      VARS_END
#define VAR_SS_TIDAL_STATE                               VARS_END
#define VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR              VARS_END
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE_2                 VARS_END // Leftover from RS, never set
#define VAR_SLATEPORT_FAN_CLUB_STATE                     VARS_END
#define VAR_UNUSED_0x40B8                                VARS_END // Unused Var
#define VAR_MT_PYRE_STATE                                VARS_END
#define VAR_NEW_MAUVILLE_STATE                           VARS_END
#define VAR_UNUSED_0x40BB                                VARS_END // Unused Var
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON                VARS_END
#define VAR_JAGGED_PASS_ASH_WEATHER                      VARS_END
#define VAR_GLASS_WORKSHOP_STATE                         VARS_END
#define VAR_METEOR_FALLS_STATE                           VARS_END
#define VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE              VARS_END
#define VAR_TRICK_HOUSE_PRIZE_PICKUP                     VARS_END
#define VAR_PACIFIDLOG_TM_RECEIVED_DAY                   VARS_END
#define VAR_VICTORY_ROAD_1F_STATE                        VARS_END
#define VAR_FOSSIL_RESURRECTION_STATE                    VARS_END
#define VAR_WHICH_FOSSIL_REVIVED                         VARS_END
#define VAR_STEVENS_HOUSE_STATE                          VARS_END
#define VAR_OLDALE_RIVAL_STATE                           VARS_END
#define VAR_JAGGED_PASS_STATE                            VARS_END
#define VAR_SCOTT_PETALBURG_ENCOUNTER                    VARS_END
#define VAR_SKY_PILLAR_STATE                             VARS_END
#define VAR_MIRAGE_TOWER_STATE                           VARS_END
#define VAR_FOSSIL_MANIAC_STATE                          VARS_END
#define VAR_CABLE_CLUB_TUTORIAL_STATE                    VARS_END
#define VAR_FRONTIER_BATTLE_MODE                         VARS_END
#define VAR_FRONTIER_FACILITY                            VARS_END
#define VAR_HAS_ENTERED_BATTLE_FRONTIER                  VARS_END // Var is used like a flag.
#define VAR_SCOTT_STATE                                  VARS_END
#define VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE               VARS_END
#define VAR_DEX_UPGRADE_JOHTO_STARTER_STATE              VARS_END
#define VAR_SS_TIDAL_SCOTT_STATE                         VARS_END // Always equal to FLAG_MET_SCOTT_ON_SS_TIDAL
#define VAR_ROAMER_POKEMON                               VARS_END // 0 = Latias, 1 = Latios
#define VAR_TRAINER_HILL_IS_ACTIVE                       VARS_END
#define VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE                 VARS_END
#define VAR_SOOTOPOLIS_WALLACE_STATE                     VARS_END
#define VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT VARS_END
#define VAR_REGISTER_BIRCH_STATE                         VARS_END
#define VAR_UNUSED_0x40DB                                VARS_END // Unused Var
#define VAR_UNUSED_0x40DC                                VARS_END // Unused Var
#define VAR_GIFT_PICHU_SLOT                              VARS_END
#define VAR_GIFT_UNUSED_1                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_2                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_3                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_4                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_5                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_6                                VARS_END // Var is written to, but never read
#define VAR_GIFT_UNUSED_7                                VARS_END // var is written to, but never read
#define VAR_UNUSED_0x40E5                                VARS_END // Unused Var
#define VAR_DAILY_SLOTS                                  VARS_END
#define VAR_DAILY_WILDS                                  VARS_END
#define VAR_DAILY_BLENDER                                VARS_END
#define VAR_DAILY_PLANTED_BERRIES                        VARS_END
#define VAR_DAILY_PICKED_BERRIES                         VARS_END
#define VAR_DAILY_ROULETTE                               VARS_END
#define VAR_SECRET_BASE_STEP_COUNTER                     VARS_END // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LAST_ITEM_USED                   VARS_END // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LOW_TV_FLAGS                     VARS_END // Used by Secret Base TV programs
#define VAR_SECRET_BASE_HIGH_TV_FLAGS                    VARS_END // Used by Secret Base TV programs
#define VAR_SECRET_BASE_IS_NOT_LOCAL                     VARS_END // Set to TRUE while in another player's secret base.
#define VAR_DAILY_BP                                     VARS_END
#define VAR_WALLY_CALL_STEP_COUNTER                      VARS_END
#define VAR_SCOTT_FORTREE_CALL_STEP_COUNTER              VARS_END
#define VAR_ROXANNE_CALL_STEP_COUNTER                    VARS_END
#define VAR_SCOTT_BF_CALL_STEP_COUNTER                   VARS_END
#define VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER             VARS_END
#define VAR_UNUSED_0x40F7                                VARS_END // Unused Var
#define VAR_UNUSED_0x40F8                                VARS_END // Unused Var
#define VAR_UNUSED_0x40F9                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FA                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FB                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FC                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FD                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FE                                VARS_END // Unused Var
#define VAR_UNUSED_0x40FF                                VARS_END // Unused Var

#define VARS_END                                         0x40FF
#define VARS_COUNT                                       (VARS_END - VARS_START + 1)

#define SPECIAL_VARS_START            0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                    0x8000
#define VAR_0x8001                    0x8001
#define VAR_0x8002                    0x8002
#define VAR_0x8003                    0x8003
#define VAR_0x8004                    0x8004
#define VAR_0x8005                    0x8005
#define VAR_0x8006                    0x8006
#define VAR_0x8007                    0x8007
#define VAR_0x8008                    0x8008
#define VAR_0x8009                    0x8009
#define VAR_0x800A                    0x800A
#define VAR_0x800B                    0x800B
#define VAR_FACING                    0x800C
#define VAR_RESULT                    0x800D
#define VAR_ITEM_ID                   0x800E
#define VAR_LAST_TALKED               0x800F
#define VAR_CONTEST_RANK              0x8010
#define VAR_CONTEST_CATEGORY          0x8011
#define VAR_MON_BOX_ID                0x8012
#define VAR_MON_BOX_POS               0x8013
#define VAR_UNUSED_0x8014             0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of TRAINER_BATTLE_PARAM.opponentA

#define SPECIAL_VARS_END              0x8015

// If an overworld trigger uses this pseudo-variable as the trigger check,
// then the script will be run using RunScriptImmediately instead of in the
// global script context. This means it will run faster, but cannot do any
// cutscenes nor call a wait command. Used for weather effects in vanilla.
#define TRIGGER_RUN_IMMEDIATELY   0

// Temp var aliases
#define VAR_TEMP_CHALLENGE_STATUS  VAR_TEMP_0

#define VAR_TEMP_MIXED_RECORDS         VAR_TEMP_0
#define VAR_TEMP_RECORD_MIX_GIFT_ITEM  VAR_TEMP_1

#define VAR_TEMP_PLAYING_PYRAMID_MUSIC  VAR_TEMP_E

#define VAR_TEMP_FRONTIER_TUTOR_SELECTION  VAR_TEMP_D
#define VAR_TEMP_FRONTIER_TUTOR_ID         VAR_TEMP_E

#define VAR_TEMP_TRANSFERRED_SPECIES  VAR_TEMP_1

#if TESTING
#define TESTING_VARS_START                  0x9000
#define TESTING_VAR_DIFFICULTY              (TESTING_VARS_START + 0x0)
#define TESTING_VAR_STARTING_STATUS         (TESTING_VARS_START + 0x1)
#define TESTING_VAR_STARTING_STATUS_TIMER   (TESTING_VARS_START + 0x2)
#define TESTING_VAR_UNUSED_3                (TESTING_VARS_START + 0x3)
#define TESTING_VAR_UNUSED_4                (TESTING_VARS_START + 0x4)
#define TESTING_VAR_UNUSED_5                (TESTING_VARS_START + 0x5)
#define TESTING_VAR_UNUSED_6                (TESTING_VARS_START + 0x6)
#define TESTING_VAR_UNUSED_7                (TESTING_VARS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_VARS_H
