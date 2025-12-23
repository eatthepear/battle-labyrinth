#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"
#include "constants/rematches.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // When set, follower pokemon won't be spawned
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

// Beat Leviathan Flags
#define FLAG_BEAT_LEVIATHAN_1                          0x21
#define FLAG_BEAT_LEVIATHAN_2                          0x22
#define FLAG_BEAT_LEVIATHAN_3                          0x23
#define FLAG_BEAT_LEVIATHAN_4                          0x24
#define FLAG_BEAT_LEVIATHAN_5                          0x25
#define FLAG_BEAT_LEVIATHAN_6                          0x26
#define FLAG_BEAT_LEVIATHAN_7                          0x27
#define FLAG_BEAT_LEVIATHAN_8                          0x28
#define FLAG_BEAT_LEVIATHAN_9                          0x29
#define FLAG_BEAT_LEVIATHAN_10                         0x2A
#define FLAG_BEAT_LEVIATHAN_11                         0x2B
#define FLAG_BEAT_LEVIATHAN_12                         0x2C
#define FLAG_BEAT_LEVIATHAN_13                         0x2D
#define FLAG_BEAT_LEVIATHAN_14                         0x2E
#define FLAG_BEAT_LEVIATHAN_15                         0x2F
#define FLAG_BEAT_LEVIATHAN_16                         0x30
#define FLAG_BEAT_LEVIATHAN_17                         0x31
#define FLAG_BEAT_LEVIATHAN_18                         0x32
#define FLAG_BEAT_LEVIATHAN_19                         0x33
#define FLAG_BEAT_LEVIATHAN_20                         0x34
#define FLAG_BEAT_LEVIATHAN_21                         0x35
#define FLAG_BEAT_LEVIATHAN_22                         0x36
#define FLAG_BEAT_LEVIATHAN_23                         0x37
#define FLAG_BEAT_LEVIATHAN_24                         0x38
#define FLAG_BEAT_LEVIATHAN_25                         0x39
#define FLAG_BEAT_LEVIATHAN_26                         0x3A
#define FLAG_BEAT_LEVIATHAN_27                         0x3B
#define FLAG_BEAT_LEVIATHAN_28                         0x3C
#define FLAG_BEAT_LEVIATHAN_29                         0x3D
#define FLAG_BEAT_LEVIATHAN_30                         0x3E
#define FLAG_BEAT_LEVIATHAN_31                         0x3F
#define FLAG_BEAT_LEVIATHAN_32                         0x40
#define FLAG_BEAT_LEVIATHAN_33                         0x41
#define FLAG_BEAT_LEVIATHAN_34                         0x42
#define FLAG_BEAT_LEVIATHAN_35                         0x43
#define FLAG_BEAT_LEVIATHAN_36                         0x44
#define FLAG_BEAT_LEVIATHAN_37                         0x45
#define FLAG_BEAT_LEVIATHAN_38                         0x46
#define FLAG_BEAT_LEVIATHAN_39                         0x47
#define FLAG_BEAT_LEVIATHAN_40                         0x48
#define FLAG_BEAT_LEVIATHAN_41                         0x49
#define FLAG_BEAT_LEVIATHAN_42                         0x4A
#define FLAG_BEAT_LEVIATHAN_43                         0x4B
#define FLAG_BEAT_LEVIATHAN_44                         0x4C
#define FLAG_BEAT_LEVIATHAN_45                         0x4D
#define FLAG_BEAT_LEVIATHAN_46                         0x4E
#define FLAG_BEAT_LEVIATHAN_47                         0x4F
#define FLAG_BEAT_LEVIATHAN_48                         0x50
#define FLAG_BEAT_LEVIATHAN_49                         0x51
#define FLAG_BEAT_LEVIATHAN_50                         0x52
#define FLAG_BEAT_LEVIATHAN_51                         0x53
#define FLAG_BEAT_LEVIATHAN_52                         0x54
#define FLAG_BEAT_LEVIATHAN_53                         0x55
#define FLAG_BEAT_LEVIATHAN_54                         0x56
#define FLAG_BEAT_LEVIATHAN_55                         0x57
#define FLAG_BEAT_LEVIATHAN_56                         0x58
#define FLAG_BEAT_LEVIATHAN_57                         0x59
#define FLAG_BEAT_LEVIATHAN_58                         0x5A
#define FLAG_BEAT_LEVIATHAN_59                         0x5B
#define FLAG_BEAT_LEVIATHAN_60                         0x5C
#define FLAG_BEAT_LEVIATHAN_61                         0x5D
#define FLAG_BEAT_LEVIATHAN_62                         0x5E
#define FLAG_BEAT_LEVIATHAN_63                         0x5F
#define FLAG_BEAT_LEVIATHAN_64                         0x60
#define FLAG_BEAT_LEVIATHAN_65                         0x61
#define FLAG_BEAT_LEVIATHAN_66                         0x62
#define FLAG_BEAT_LEVIATHAN_67                         0x63
#define FLAG_BEAT_LEVIATHAN_68                         0x64
#define FLAG_BEAT_LEVIATHAN_69                         0x65
#define FLAG_BEAT_LEVIATHAN_70                         0x66
#define FLAG_BEAT_LEVIATHAN_71                         0x67
#define FLAG_BEAT_LEVIATHAN_72                         0x68
#define FLAG_BEAT_LEVIATHAN_73                         0x69
#define FLAG_BEAT_LEVIATHAN_74                         0x6A
#define FLAG_BEAT_LEVIATHAN_75                         0x6B
#define FLAG_BEAT_LEVIATHAN_76                         0x6C
#define FLAG_BEAT_LEVIATHAN_77                         0x6D
#define FLAG_BEAT_LEVIATHAN_78                         0x6E
#define FLAG_BEAT_LEVIATHAN_79                         0x6F
#define FLAG_BEAT_LEVIATHAN_80                         0x70
#define FLAG_BEAT_LEVIATHAN_81                         0x71
#define FLAG_BEAT_LEVIATHAN_82                         0x72
#define FLAG_BEAT_LEVIATHAN_83                         0x73
#define FLAG_BEAT_LEVIATHAN_84                         0x74
#define FLAG_BEAT_LEVIATHAN_85                         0x75
#define FLAG_BEAT_LEVIATHAN_86                         0x76
#define FLAG_BEAT_LEVIATHAN_87                         0x77
#define FLAG_BEAT_LEVIATHAN_88                         0x78
#define FLAG_BEAT_LEVIATHAN_89                         0x79
#define FLAG_BEAT_LEVIATHAN_90                         0x7A
#define FLAG_BEAT_LEVIATHAN_91                         0x7B
#define FLAG_BEAT_LEVIATHAN_92                         0x7C
#define FLAG_BEAT_LEVIATHAN_93                         0x7D
#define FLAG_BEAT_LEVIATHAN_94                         0x7E
#define FLAG_BEAT_LEVIATHAN_95                         0x7F

// Configs / Major Flags
#define FLAG_SETTINGS_NUZLOCKE                      0xA1
#define FLAG_SYS_ALL_WILD_MONS                      0xA2
#define FLAG_SYS_EXP_SHARE                          0xA3
#define FLAG_SYS_DEBUG                              0xB0
#define FLAG_SYS_NO_COLLISION                       0xB1
#define FLAG_SYS_NO_ENCOUNTER                       0xB2
#define FLAG_SYS_NO_TRAINER_SEE                     0xB3
#define FLAG_SYS_NO_BAG_USE_IN_BATTLE               0xB4
#define FLAG_SYS_NO_CATCHING                        0xB5
#define FLAG_SYS_FORCE_DOUBLE_WILD                  0xB6
#define FLAG_SYS_SMART_WILD_AI_ON                   0xB7
#define FLAG_SYS_NO_RUNNING                         0xB8
#define FLAG_FORCE_BATTLE_ANIM_ON                   0xC0
#define FLAG_FORCE_BATTLE_ANIM_OFF                  0xC1
#define FLAG_SYS_DEXNAV_GET                         0xC2
#define FLAG_SYS_INVERSE_BATTLE                     0xC5
#define FLAG_DISABLE_PREVIEW                        0xC6
#define FLAG_SYS_ENABLE_WATERFALL                   0xC8
#define FLAG_SYS_FOLLOWER_HEAL                      0xC9
#define FLAG_SYS_FOLLOWER_WILD                      0xCA
#define FLAG_SYS_DOWSING_MACHINE_ACTIVE             0xCB

// Tracker Flags (Don't manually set)
#define FLAG_IS_REVISITING_ZONE                     0xE0
#define FLAG_IN_NEW_ZONE                            0xE1
#define FLAG_USE_PC_MACHINE                         0xE2 // Used for differentiating between Start Menu PC and Machine PC
#define FLAG_SYS_DEXNAV_SEARCH                      0xE3
#define FLAG_ZONE_PC_USED                           0xE5
#define FLAG_USED_TERA                              0xE6
#define FLAG_AUTORUN_TOGGLE                         0xE8
#define FLAG_NEVER_SET                              0xE9
#define FLAG_ALWAYS_SET                             0xEA

// Custom Flags Scripts
#define FLAG_TRUE_BRUTAL                                  0x100 // keeps track if you actually started on Brutal difficulty and stayed there the whole time
#define FLAG_TIM_INTRO                                    0x101
#define FLAG_VARRICK_INTRO                                0x102
#define FLAG_UNUSED_0x103                                  0x103
#define FLAG_LELOUCH_INTRO                                0x104
#define FLAG_UNUSED_0x105                                  0x105
#define FLAG_JOY_INTRO                                    0x106
#define FLAG_LELOUCH_SHARDS_INTRO                         0x107
#define FLAG_MARIE_NUZLOCKE_RECEIVED                      0x108
#define FLAG_ZONE0A_SAFARI_INTRO                          0x109
#define FLAG_ZONE0B_SHOWN_POKEDEX_ENTRIES                 0x10A
#define FLAG_ZONE0B_RECEIVED_EEVEE                        0x10B
#define FLAG_ZONE1A_RECEIVED_FWG                          0x10C
#define FLAG_UNUSED_0x10D                                 0x10D
#define FLAG_HIDE_ZONE2A_MAX                              0x10E
#define FLAG_ZONE2A_NUZLOCKE_BOUGHT_BUG                   0x10F
#define FLAG_HIDE_ZONE3A_REMI                             0x110
#define FLAG_HIDE_ZONE3A_PHILLIPA                         0x111
#define FLAG_ZONE3A_MOVE_TUTOR_TAUGHT      0x112
#define FLAG_ITEM_HEATED_CAVITY_TM_ROCK_TOMB                   0x113
#define FLAG_ZONE3A_RECEIVED_SILVER_POWDER               0x114
#define FLAG_ZONE3B_TRADED_ZIGZAGOON                      0x115
#define FLAG_HIDE_ZONE4A_KIMONO_GIRL                      0x116
#define FLAG_ZONE4A_MOVE_TUTOR_TAUGHT_STRUGGLE_BUG        0x117
#define FLAG_ZONE5A_NUZLOCKE_BOUGHT_PIKACLONE             0x118
#define FLAG_ZONE5A_MOVE_TUTOR_TAUGHT_NEVER_MISS          0x119
#define FLAG_HIDE_ZONE6A_MAX                              0x11A
#define FLAG_ZONE6A_TRADED_DELIBIRD                       0x11B
#define FLAG_ZONE7A_RECEIVED_WHIPPED_DREAM                0x11C
#define FLAG_ZONE7A_RECEIVED_SACHET                       0x11D
#define FLAG_ZONE7A_MOVE_TUTOR_TAUGHT_FANG                0x11E
#define FLAG_ZONE7B_HEAL_USED                             0x11F
#define FLAG_ZONE8B_NUZLOCKE_BOUGHT_FIGHTING                        0x120
#define FLAG_HIDE_ZONE9A_ARI_WINSTRATE                    0x121
#define FLAG_HIDE_ZONE9A_BERTHA_WINSTRATE                 0x122
#define FLAG_HIDE_ZONE9A_CASSANDRA_WINSTRATE              0x123
#define FLAG_HIDE_ZONE9A_DOMINIC_WINSTRATE                0x124
#define FLAG_HIDE_ZONE9A_ERICA_WINSTRATE                  0x125
#define FLAG_ZONE9D_RECEIVED_MYSTIC_WATER                 0x126
#define FLAG_ZONE9E_RECEIVED_SQUAWKABILLY                 0x127
#define FLAG_ZONE10A_RECEIVED_SAFETY_GOGGLES              0x128
#define FLAG_HIDE_ZONE10A_MAX                             0x129
#define FLAG_HIDE_ZONE10B_BERRYMAN                        0x12A
#define FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_1             0x12B
#define FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_2             0x12C
#define FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_3             0x12D
#define FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_4             0x12E
#define FLAG_HIDDEN_ITEM_ZONE10A_BLUE_SHARD_5             0x12F
#define FLAG_ZONE10B_RECEIVED_TM_STEEL_WING               0x1C0
#define FLAG_ZONE10B_RECEIVED_DRUDDIGON                   0x1C1
#define FLAG_ZONE10B_RECEIVED_LUCKY_EGG                   0x132
#define FLAG_ZONE11A_NUZLOCKE_BOUGHT_RUIN                 0x133
#define FLAG_HIDE_ZONE12A_CAMPER_PICNICKER                0x134
#define FLAG_HIDE_ZONE12A_NURSE                           0x135
#define FLAG_ZONE13A_RECEIVED_UTILITY_UMBRELLA            0x136
#define FLAG_ZONE13B_RECEIVED_FLASHLIGHT                  0x137
#define FLAG_ZONE13C_NUZLOCKE_FOSSIL_RECEIVED             0x138
#define FLAG_ZONE13C_RECEIVED_ZOOM_LENS                   0x139
#define FLAG_ZONE13C_RECEIVED_APPLES                      0x13A
#define FLAG_ZONE13C_RECEIVED_SWEETS                      0x13B
#define FLAG_HIDE_ZONE17A_HEX_MANIAC                      0x13C
#define FLAG_HIDE_ZONE17A_PORYGON                         0x13D
#define FLAG_HIDE_ZONE18A_PORYGON                         0x13E
#define FLAG_HIDE_ZONE18A_ZOE                             0x13F
#define FLAG_HIDE_ZONE18A_ELI                             0x140
#define FLAG_HIDE_ZONE18A_DOLL                            0x141
#define FLAG_HIDE_ZONE18A_PIRATES                         0x142
#define FLAG_HIDE_ZONE18A_BOAT                            0x143
#define FLAG_HIDE_ZONE18A_MAX                             0x144
#define FLAG_HIDE_ZONE18B_ZOE                             0x145
#define FLAG_HIDE_ZONE18B_ELI                             0x146
#define FLAG_HIDE_ZONE19D_PIRATES                         0x147
#define FLAG_HIDE_ZONE20B_WORKERS                         0x148
#define FLAG_RECEIVED_ZONE21A_TM29                        0x149
#define FLAG_RECEIVED_ZONE21C_HAPPINY                     0x14A
#define FLAG_HIDE_CAM_AND_PAM                             0x14B
#define FLAG_RECEIVED_ZONE23A_TM31                        0x14C
#define FLAG_RECEIVED_ZONE24A_TM34                        0x14D
#define FLAG_RECEIVED_ZONE24B_TM35                        0x14E
#define FLAG_HIDE_ZONE25L_COLRESS                         0x14F
#define FLAG_PORTENTIA_SUPER_POTION_INTRO                 0x150
#define FLAG_ZONE_B1_PORYGON_1                            0x151
#define FLAG_ZONE_B1_PORYGON_2                            0x152
#define FLAG_ZONE_B1_PORYGON_3                            0x153
#define FLAG_ZONE_B1_PORYGON_4                            0x154
#define FLAG_ZONE_B1_PORYGON_5                            0x155
#define FLAG_RECEIVED_PORYGON                             0x156
#define FLAG_GUITARIST_INTRO                              0x157
#define FLAG_COWGIRL_INTRO                                0x158
#define FLAG_HIDE_ZONE10A_KIMONO_GIRL                                 0x159
#define FLAG_TESTING_FLAG                                 0x15A

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x200
// Custom
#define FLAG_HIDDEN_ITEM_ZONE2A_CHERI_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ZONE2A_PECHA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ZONE2A_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ZONE3A_PECHA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ZONE3A_CHERI_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ZONE4A_ORAN_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_ZONE4A_PECHA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_ZONE4C_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_ZONE4C_RAWST_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_ZONE4E_CHERI_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_ZONE5A_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_ZONE5A_PERSIM_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_ZONE5A_Old_ORAN_BERRY                  0x200
#define FLAG_HIDDEN_ITEM_ZONE5A_Old_PECHA_BERRY                 0x200
#define FLAG_HIDDEN_ITEM_ZONE5A_Old_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_ZONE5B_Old_ORAN_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_ZONE5B_Old_RAWST_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_ZONE5B_Old_CHERI_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_ZONE6A_RED_SHARD_1                 (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_ZONE6A_RED_SHARD_2                 (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_ZONE6A_RAWST_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_ZONE6A_PERSIM_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_ZONE6A_CHESTO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_ZONE7A_ASPEAR_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_ZONE7A_PERSIM_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_ZONE7A_RAWST_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_ZONE7A_SITRUS_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_ZONE8A_RED_SHARD                   (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_ZONE8B_RED_SHARD                   (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_ZONE8C_RED_SHARD                   (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_ZONE9A_LEPPA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ZONE9A_SITRUS_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ZONE10A_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ZONE11A_SITRUS_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ZONE11A_CHERI_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_ZONE11A_RAWST_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_ZONE11A_PECHA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ZONE12A_LEPPA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_ZONE12A_LUM_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ZONE12A_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ZONE12A_BLUE_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ZONE13A_LUM_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ZONE14A_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_ZONE14B_BLUE_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ZONE14B_YELLOW_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ZONE16A_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ZONE18A_SITRUS_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ZONE19B_BLUE_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_ZONE19B_STARDUST                   (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_ZONE19B_PEARL                      (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ZONE19B_YELLOW_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ZONE19B_BIG_PEARL                  (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ZONE19B_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ZONE19B_STAR_PIECE                 (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ZONE20A_RED_SHARD1                 (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ZONE20A_RED_SHARD2                 (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ZONE20A_RED_SHARD3                 (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ZONE20A_BLUE_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_ZONE20A_YELLOW_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_ZONE21A_RED_SHARD1                 (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_ZONE21B_RED_SHARD                  (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_ZONE21A_RED_SHARD2                 (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ZONE21A_LUM_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHESTO_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ZONE21A_SITRUS_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHILAN_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ZONE21A_OCCA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ZONE21A_PASSHO_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ZONE21A_WACAN_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ZONE21A_RINDO_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ZONE21A_YACHE_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHOPLE_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ZONE21A_KEBIA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ZONE21A_SHUCA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ZONE21A_COBA_BERRY                 (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_ZONE21A_PAYAPA_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_ZONE21A_TANGA_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_ZONE21A_CHARTI_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_ZONE21A_KASIB_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_ZONE21A_HABAN_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_ZONE21A_COLBUR_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_ZONE21A_BABIRI_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_ZONE21A_ROSELI_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_ZONE22A_SITRUS_BERRY_1             (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ZONE22A_SITRUS_BERRY_2             (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ZONE22A_ASPEAR_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ZONE22A_LUM_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_1                (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_2                (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_3                (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_4                (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_5                (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ZONE22A_RED_SHARD_6                (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ZONE23A_SITRUS_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ZONE23A_CHESTO_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_ZONE23A_PERSIM_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ZONE23A_LUM_BERRY                  (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ZONE23A_CHERI_BERRY                (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ZONE23A_ASPEAR_BERRY               (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_1                (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_2                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_3                (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_4                (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_5                (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ZONE24A_RED_SHARD_6                (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_ZONE24A_BLUE_SHARD                 (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_ZONE24A_YELLOW_SHARD               (FLAG_HIDDEN_ITEMS_START + 0x6A)

#define FLAG_HIDDEN_ITEM_END                                (FLAG_HIDDEN_ITEMS_START + 0xFF)

// Custom Flags Items
#define FLAG_ITEM_ZONE1A_RANDOM_1                  0x300
#define FLAG_ITEM_ZONE1A_QUICK_CLAW                0x301
#define FLAG_ITEM_ZONE2A_RANDOM_1                  0x302
#define FLAG_ITEM_ZONE2A_RANDOM_2                  0x303
#define FLAG_ITEM_ZONE2A_TM_BUG_BITE               0x304
#define FLAG_ITEM_ZONE2A_SILK_SCARF                0x305
#define FLAG_ITEM_ZONE3A_RANDOM_1                  0x306
#define FLAG_ITEM_ZONE3A_RANDOM_2                  0x307
#define FLAG_ITEM_ZONE3A_RANDOM_3                  0x308
#define FLAG_ITEM_ZONE3A_HYPER_POTION              0x309
#define FLAG_ITEM_ZONE4A_SILVER_POWDER             0x30A
#define FLAG_ITEM_ZONE4A_RANDOM_1                  0x30B
#define FLAG_ITEM_ZONE4B_RANDOM_1                  0x30C
#define FLAG_ITEM_ZONE4C_MUSCLE_BAND               0x30D
#define FLAG_ITEM_ZONE4C_TWISTED_SPOON             0x30E
#define FLAG_ITEM_ZONE4D_WISE_GLASSES              0x30F
#define FLAG_ITEM_ZONE4D_TM_HIDDEN_POWER           0x310
#define FLAG_ITEM_ZONE4E_RANDOM_1                  0x311
#define FLAG_ITEM_ZONE4E_POISON_BARB               0x312
#define FLAG_ITEM_ZONE5A_MIRACLE_SEED              0x313
#define FLAG_ITEM_ZONE5A_RANDOM_1                  0x314
#define FLAG_ITEM_ZONE5A_TM_THIEF                  0x315
#define FLAG_ITEM_BOREAL_THICKET_TM_ICY_WIND                  0x316
#define FLAG_ITEM_ZONE5A_Old_MIRACLE_SEED              FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5A_Old_RANDOM_1                  FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5A_Old_QUICK_BALL                FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5A_Old_METRONOME                 FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5A_Old_RANDOM_2                  FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5B_Old_RANDOM_1                  FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5B_Old_RANDOM_2                  FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5B_Old_GEMS                      FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE5B_Old_RANDOM_3                  FLAG_ITEM_ZONE5A_TM_THIEF
#define FLAG_ITEM_ZONE6A_TM_BULLDOZE          0x31C
#define FLAG_ITEM_ZONE6A_NET_BALL                  0x31D
#define FLAG_ITEM_ZONE6A_NEST_BALL                 0x31E
#define FLAG_ITEM_ZONE6A_RANDOM_1                      0x31F
#define FLAG_ITEM_ZONE7A_SHARP_BEAK                0x320
#define FLAG_ITEM_ZONE7A_RANDOM_1                  0x321
// #define FLAG_ITEM_ZONE7A_RANDOM_5                      0x322
#define FLAG_ITEM_ZONE7A_BLACK_BELT                0x323
#define FLAG_ITEM_ZONE7A_RANDOM_2                  0x324
// #define FLAG_ITEM_ZONE7A_RANDOM_3                  0x325
// #define FLAG_ITEM_ZONE7A_RANDOM_4                  0x326
#define FLAG_ITEM_ZONE8A_MAGNET                    0x327
#define FLAG_ITEM_ZONE8A_RANDOM_1                  0x328
#define FLAG_ITEM_ZONE8A_RANDOM_2                  0x329
#define FLAG_ITEM_ZONE8B_HARD_STONE                0x32A
// #define FLAG_ITEM_ZONE8B_DUSK_BALL                 0x32B
// #define FLAG_ITEM_ZONE8B_RANDOM_1                  0x32C
// #define FLAG_ITEM_ZONE8C_RANDOM_2                  0x32D
// #define FLAG_ITEM_ZONE8C_FULL_HEAL                 0x32E
#define FLAG_ITEM_ZONE8C_RANDOM_1                  0x32F
#define FLAG_ITEM_ZONE9A_RANDOM_1                      0x330
#define FLAG_ITEM_ZONE9A_BIG_ROOT                  0x331
#define FLAG_ITEM_ZONE9A_TM_PLUCK                  0x332
#define FLAG_ITEM_ZONE9G_CHARCOAL                  0x333
#define FLAG_ITEM_ZONE10A_TM_SCORCHING_SANDS       0x334
// #define FLAG_ITEM_ZONE10A_GEMS                     0x335
#define FLAG_ITEM_ZONE10A_SOFT_SAND                0x336
#define FLAG_ITEM_ZONE10A_RANDOM_1                 0x337
#define FLAG_ITEM_ZONE10A_BLACK_GLASSES            0x338
// #define FLAG_ITEM_ZONE10A_HEAVY_DUTY_BOOTS         0x339
#define FLAG_ITEM_ZONE11A_TM_TAUNT                 0x33A
#define FLAG_ITEM_ZONE11A_MOON_STONE               0x33B
#define FLAG_ITEM_ZONE11A_SPELL_TAG                0x33C
#define FLAG_ITEM_ZONE11A_GEMS                     0x33D
#define FLAG_ITEM_ZONE11A_FAIRY_FEATHER            0x33E
#define FLAG_ITEM_ZONE11A_RANDOM_1                 0x33F
#define FLAG_ITEM_ZONE11A_RANDOM_2                 0x340
#define FLAG_ITEM_ZONE12A_TM_BRICK_BREAK           0x341
#define FLAG_ITEM_ZONE12A_THUNDER_STONE            0x342
#define FLAG_ITEM_ZONE12A_FIRE_STONE               0x343
#define FLAG_ITEM_ZONE12A_WATER_STONE              0x344
#define FLAG_ITEM_ZONE12A_LEAF_STONE               0x345
#define FLAG_ITEM_ZONE13A_LEAF_STONE               0x346
#define FLAG_ITEM_ZONE13A_SHINY_STONE              0x347
#define FLAG_ITEM_ZONE14A_FULL_HEAL                0x348
#define FLAG_ITEM_ZONE14B_HYPER_POTION             0x349
#define FLAG_ITEM_ZONE14C_DUSK_STONE               0x34A
#define FLAG_ITEM_ZONE15A_SNOWBALL_3               0x34B
#define FLAG_ITEM_ZONE15A_TIMER_BALL               0x34C
#define FLAG_ITEM_ZONE15A_ICE_STONE                0x34D
#define FLAG_ITEM_ZONE15A_QUICK_BALL               0x34E
#define FLAG_ITEM_ZONE15A_REVIVE                   0x34F
#define FLAG_ITEM_ZONE15A_DAWN_STONE               0x350
#define FLAG_ITEM_ZONE15A_TM26                     0x351
#define FLAG_ITEM_ZONE15A_GLALITITE                0x352
#define FLAG_ITEM_ZONE16A_TM27                     0x353
#define FLAG_ITEM_ZONE16A_WATER_STONE              0x354
#define FLAG_ITEM_ZONE16A_DIVE_BALL                0x355
#define FLAG_ITEM_ZONE16A_TIMER_BALL               0x356
#define FLAG_ITEM_ZONE18A_SUPER_POTION_2           0x357
#define FLAG_ITEM_ZONE18A_SUPER_REPEL              0x358
#define FLAG_ITEM_ZONE20A_HYPER_POTION             0x359
#define FLAG_ITEM_ZONE20A_FULL_HEAL                0x35A
#define FLAG_ITEM_ZONE20A_CELL_BATTERY_3           0x35B
#define FLAG_ITEM_ZONE20A_ULTRA_BALL               0x35C
#define FLAG_ITEM_ZONE20A_REVIVE                   0x35D
#define FLAG_ITEM_ZONE20A_SUPER_REPEL              0x35E
#define FLAG_ITEM_ZONE21A_QUICK_BALL               0x35F
#define FLAG_ITEM_ZONE21A_ULTRA_BALL               0x360
#define FLAG_ITEM_ZONE21A_HEAT_ROCK                0x361
#define FLAG_ITEM_ZONE21A_SUPER_REPEL              0x362
#define FLAG_ITEM_ZONE21A_EVERSTONE                0x363
#define FLAG_ITEM_ZONE21A_TM28                     0x364
#define FLAG_ITEM_ZONE21B_SABLENITE                0x365
#define FLAG_ITEM_ZONE22A_ETHER                    0x366
#define FLAG_ITEM_ZONE22A_ICY_ROCK                 0x367
#define FLAG_ITEM_ZONE22A_METAL_COAT               0x368
#define FLAG_ITEM_ZONE22A_DESTINY_KNOT             0x369
#define FLAG_ITEM_ZONE22A_3000                     0x36A
#define FLAG_ITEM_ZONE23A_LEAF_STONE               0x36B
#define FLAG_ITEM_ZONE23A_HYPER_POTION             0x36C
#define FLAG_ITEM_ZONE23A_SUPER_REPEL              0x36D
#define FLAG_ITEM_ZONE23A_QUICK_BALL               0x36E
#define FLAG_ITEM_ZONE23A_TIMER_BALL               0x36F
#define FLAG_ITEM_ZONE23A_DUSK_BALL                0x370
#define FLAG_ITEM_ZONE24A_FIRE_STONE               0x371
#define FLAG_ITEM_ZONE24A_SUN_STONE                0x372
#define FLAG_ITEM_ZONE24A_DRAGON_FANG              0x373
#define FLAG_ITEM_ZONE24A_SMOOTH_ROCK              0x374
#define FLAG_ITEM_ZONE24A_ULTRA_BALL               0x375
#define FLAG_ITEM_ZONE24A_HYPER_POTION             0x376
#define FLAG_ITEM_ZONE25B_DUSK_BALL                0x377
#define FLAG_ITEM_ZONE25C_TM36                     0x378
#define FLAG_ITEM_ZONE25E_FULL_HEAL                0x379
#define FLAG_ITEM_ZONE25F_SHINY_STONE              0x37A
#define FLAG_ITEM_ZONE25G_KINGS_ROCK               0x37B
#define FLAG_ITEM_ZONE25G_4000                     0x37C
#define FLAG_ITEM_ZONE25I_DAWN_STONE               0x37D
#define FLAG_ITEM_ZONE25J_DUSK_STONE               0x37E
#define FLAG_ITEM_ZONE25K_TM37                     0x37F
#define FLAG_ITEM_ZONE26A_BANETTITE                0x380

#define FLAG_ITEM_ZONE3A_RARE_CANDY                0x401
#define FLAG_ITEM_ZONE5A_RARE_CANDY                0x402

#define FLAG_UNUSED_0x020    0x4FA // Unused Flag
#define FLAG_UNUSED_0x021    0x4FA // Unused Flag
#define FLAG_UNUSED_0x022    0x4FA // Unused Flag
#define FLAG_UNUSED_0x023    0x4FA // Unused Flag
#define FLAG_UNUSED_0x024    0x4FA // Unused Flag
#define FLAG_UNUSED_0x025    0x4FA // Unused Flag
#define FLAG_UNUSED_0x026    0x4FA // Unused Flag
#define FLAG_UNUSED_0x027    0x4FA // Unused Flag
#define FLAG_UNUSED_0x028    0x4FA // Unused Flag
#define FLAG_UNUSED_0x029    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02A    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02B    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02C    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02D    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02E    0x4FA // Unused Flag
#define FLAG_UNUSED_0x02F    0x4FA // Unused Flag
#define FLAG_UNUSED_0x030    0x4FA // Unused Flag
#define FLAG_UNUSED_0x031    0x4FA // Unused Flag
#define FLAG_UNUSED_0x032    0x4FA // Unused Flag
#define FLAG_UNUSED_0x033    0x4FA // Unused Flag
#define FLAG_UNUSED_0x034    0x4FA // Unused Flag
#define FLAG_UNUSED_0x035    0x4FA // Unused Flag
#define FLAG_UNUSED_0x036    0x4FA // Unused Flag
#define FLAG_UNUSED_0x037    0x4FA // Unused Flag
#define FLAG_UNUSED_0x038    0x4FA // Unused Flag
#define FLAG_UNUSED_0x039    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03A    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03B    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03C    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03D    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03E    0x4FA // Unused Flag
#define FLAG_UNUSED_0x03F    0x4FA // Unused Flag
#define FLAG_UNUSED_0x040    0x4FA // Unused Flag
#define FLAG_UNUSED_0x041    0x4FA // Unused Flag
#define FLAG_UNUSED_0x042    0x4FA // Unused Flag
#define FLAG_UNUSED_0x043    0x4FA // Unused Flag
#define FLAG_UNUSED_0x044    0x4FA // Unused Flag
#define FLAG_UNUSED_0x045    0x4FA // Unused Flag
#define FLAG_UNUSED_0x046    0x4FA // Unused Flag
#define FLAG_UNUSED_0x047    0x4FA // Unused Flag
#define FLAG_UNUSED_0x048    0x4FA // Unused Flag
#define FLAG_UNUSED_0x049    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04A    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04B    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04C    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04D    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04E    0x4FA // Unused Flag
#define FLAG_UNUSED_0x04F    0x4FA // Unused Flag

// Scripts
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL  0x4FA
#define FLAG_SET_WALL_CLOCK                      0x4FA
#define FLAG_RESCUED_BIRCH                       0x4FA
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS           0x4FA

#define FLAG_UNUSED_0x054                    0x4FA  // Unused Flag
#define FLAG_UNUSED_0x055                    0x4FA  // Unused Flag

#define FLAG_HIDE_CONTEST_POKE_BALL          0x4FA  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   0x4FA
#define FLAG_BIRCH_AIDE_MET                  0x4FA
#define FLAG_DECLINED_BIKE                   0x4FA
#define FLAG_RECEIVED_BIKE                   0x4FA
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x4FA
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x4FA
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x4FA // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x4FA
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x4FA
#define FLAG_RECEIVED_SECRET_POWER           0x4FA
#define FLAG_MET_TEAM_AQUA_HARBOR            0x4FA
#define FLAG_TV_EXPLAINED                    0x4FA
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x4FA
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x4FA // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x4FA //
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x4FA //
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x4FA //

#define FLAG_UNUSED_0x068                    0x4FA  // Unused Flag

#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x4FA
#define FLAG_RECEIVED_HM_STRENGTH            0x4FA
#define FLAG_RECEIVED_HM_ROCK_SMASH          0x4FA
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x4FA // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM_FLASH               0x4FA
#define FLAG_RECEIVED_HM_FLY                 0x4FA
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x4FA
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x4FA
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x4FA // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x4FA // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x4FA
#define FLAG_ADVENTURE_STARTED               0x4FA // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x4FA // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x4FA

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x4FA

#define FLAG_LANDMARK_MIRAGE_TOWER           0x4FA
#define FLAG_RECEIVED_TM_BRICK_BREAK         0x4FA
#define FLAG_RECEIVED_HM_SURF                0x4FA
#define FLAG_RECEIVED_HM_DIVE                0x4FA
#define FLAG_REGISTER_RIVAL_POKENAV          0x4FA
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x4FA
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x4FA
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x4FA
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x4FA // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x4FA
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x4FA
#define FLAG_RECEIVED_DOLL_LANETTE           0x4FA
#define FLAG_RECEIVED_POTION_OLDALE          0x4FA
#define FLAG_RECEIVED_AMULET_COIN            0x4FA
#define FLAG_PENDING_DAYCARE_EGG             0x4FA
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x4FA
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x4FA // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM_CUT                 0x4FA
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x4FA // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x4FA
#define FLAG_RECEIVED_6_SODA_POP             0x4FA
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x4FA
#define FLAG_DEVON_GOODS_STOLEN              0x4FA
#define FLAG_RECOVERED_DEVON_GOODS           0x4FA
#define FLAG_RETURNED_DEVON_GOODS            0x4FA
#define FLAG_CAUGHT_LUGIA                    0x4FA
#define FLAG_CAUGHT_HO_OH                    0x4FA
#define FLAG_MR_BRINEY_SAILING_INTRO         0x4FA
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x4FA
#define FLAG_DELIVERED_DEVON_GOODS           0x4FA
#define FLAG_RECEIVED_CONTEST_PASS           0x4FA // Unused, leftover from R/S
#define FLAG_RECEIVED_CASTFORM               0x4FA
#define FLAG_RECEIVED_SUPER_ROD              0x4FA
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x4FA
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x4FA
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x4FA
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x4FA
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x4FA
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x4FA
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x4FA
#define FLAG_COOL_PAINTING_MADE              0x4FA
#define FLAG_BEAUTY_PAINTING_MADE            0x4FA
#define FLAG_CUTE_PAINTING_MADE              0x4FA
#define FLAG_SMART_PAINTING_MADE             0x4FA
#define FLAG_TOUGH_PAINTING_MADE             0x4FA
#define FLAG_RECEIVED_TM_ROCK_TOMB           0x4FA
#define FLAG_RECEIVED_TM_BULK_UP             0x4FA
#define FLAG_RECEIVED_TM_SHOCK_WAVE          0x4FA
#define FLAG_RECEIVED_TM_OVERHEAT            0x4FA
#define FLAG_RECEIVED_TM_FACADE              0x4FA
#define FLAG_RECEIVED_TM_AERIAL_ACE          0x4FA
#define FLAG_RECEIVED_TM_CALM_MIND           0x4FA
#define FLAG_RECEIVED_TM_WATER_PULSE         0x4FA
#define FLAG_HIDE_SECRET_BASE_TRAINER        0x4FA
#define FLAG_DECORATION_1                    0x4FA
#define FLAG_DECORATION_2                    0x4FA
#define FLAG_DECORATION_3                    0x4FA
#define FLAG_DECORATION_4                    0x4FA
#define FLAG_DECORATION_5                    0x4FA
#define FLAG_DECORATION_6                    0x4FA
#define FLAG_DECORATION_7                    0x4FA
#define FLAG_DECORATION_8                    0x4FA
#define FLAG_DECORATION_9                    0x4FA
#define FLAG_DECORATION_10                   0x4FA
#define FLAG_DECORATION_11                   0x4FA
#define FLAG_DECORATION_12                   0x4FA
#define FLAG_DECORATION_13                   0x4FA
#define FLAG_DECORATION_14                   0x4FA
#define FLAG_RECEIVED_POKENAV                0x4FA
#define FLAG_DELIVERED_STEVEN_LETTER         0x4FA
#define FLAG_DEFEATED_WALLY_MAUVILLE         0x4FA
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0x4FA
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0x4FA
#define FLAG_WALLY_SPEECH                    0x4FA
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0x4FA // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0x4FA //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0x4FA //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0x4FA //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0x4FA //
#define FLAG_RUSTURF_TUNNEL_OPENED           0x4FA
#define FLAG_RECEIVED_RED_SCARF              0x4FA
#define FLAG_RECEIVED_BLUE_SCARF             0x4FA
#define FLAG_RECEIVED_PINK_SCARF             0x4FA
#define FLAG_RECEIVED_GREEN_SCARF            0x4FA
#define FLAG_RECEIVED_YELLOW_SCARF           0x4FA
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0x4FA
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0x4FA
#define FLAG_MET_ARCHIE_METEOR_FALLS         0x4FA
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0x4FA
#define FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON 0x4FA
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0x4FA // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0x4FA
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0x4FA
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0x4FA
#define FLAG_ENABLE_WALLY_MATCH_CALL         0x4FA
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0x4FA
#define FLAG_ENABLE_MOM_MATCH_CALL           0x4FA
#define FLAG_MET_DIVING_TREASURE_HUNTER      0x4FA
#define FLAG_MET_WAILMER_TRAINER             0x4FA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0x4FA

#define FLAG_NEVER_SET_0x0DC                 0x4FA // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0x4FA
#define FLAG_WINGULL_SENT_ON_ERRAND          0x4FA
#define FLAG_RECEIVED_MENTAL_HERB            0x4FA
#define FLAG_WINGULL_DELIVERED_MAIL          0x4FA
#define FLAG_RECEIVED_20_COINS               0x4FA
#define FLAG_RECEIVED_STARTER_DOLL           0x4FA
#define FLAG_RECEIVED_GOOD_ROD               0x4FA
#define FLAG_REGI_DOORS_OPENED               0x4FA
#define FLAG_RECEIVED_TM_RETURN              0x4FA
#define FLAG_RECEIVED_TM_SLUDGE_BOMB         0x4FA
#define FLAG_RECEIVED_TM_ROAR                0x4FA
#define FLAG_RECEIVED_TM_GIGA_DRAIN          0x4FA

#define FLAG_UNUSED_0x0E9                    0x4FA // Unused Flag

#define FLAG_RECEIVED_TM_REST                0x4FA
#define FLAG_RECEIVED_TM_ATTRACT             0x4FA
#define FLAG_RECEIVED_GLASS_ORNAMENT         0x4FA
#define FLAG_RECEIVED_SILVER_SHIELD          0x4FA
#define FLAG_RECEIVED_GOLD_SHIELD            0x4FA
#define FLAG_USED_STORAGE_KEY                0x4FA
#define FLAG_USED_ROOM_1_KEY                 0x4FA
#define FLAG_USED_ROOM_2_KEY                 0x4FA
#define FLAG_USED_ROOM_4_KEY                 0x4FA
#define FLAG_USED_ROOM_6_KEY                 0x4FA
#define FLAG_MET_PROF_COZMO                  0x4FA
#define FLAG_RECEIVED_WAILMER_DOLL           0x4FA
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0x4FA
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0x4FA
#define FLAG_RECEIVED_SPELON_BERRY           0x4FA
#define FLAG_RECEIVED_PAMTRE_BERRY           0x4FA
#define FLAG_RECEIVED_WATMEL_BERRY           0x4FA
#define FLAG_RECEIVED_DURIN_BERRY            0x4FA
#define FLAG_RECEIVED_BELUE_BERRY            0x4FA
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0x4FA
#define FLAG_RECEIVED_CHARCOAL               0x4FA
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0x4FA
#define FLAG_RECEIVED_REPEAT_BALL            0x4FA
#define FLAG_RECEIVED_OLD_ROD                0x4FA
#define FLAG_RECEIVED_COIN_CASE              0x4FA
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x4FA
#define FLAG_RECEIVED_TM_SNATCH              0x4FA
#define FLAG_RECEIVED_TM_DIG                 0x4FA
#define FLAG_RECEIVED_TM_BULLET_SEED         0x4FA
#define FLAG_ENTERED_ELITE_FOUR              0x4FA
#define FLAG_RECEIVED_TM_HIDDEN_POWER        0x4FA
#define FLAG_RECEIVED_TM_TORMENT             0x4FA
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x4FA
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x4FA
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x4FA
#define FLAG_RECEIVED_TM_THIEF               0x4FA
#define FLAG_CONTEST_SKETCH_CREATED          0x4FA  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x4FA
#define FLAG_RECEIVED_EXP_SHARE              0x4FA
#define FLAG_POKERUS_EXPLAINED               0x4FA
#define FLAG_RECEIVED_RUNNING_SHOES          0x4FA
#define FLAG_RECEIVED_QUICK_CLAW             0x4FA
#define FLAG_RECEIVED_KINGS_ROCK             0x4FA
#define FLAG_RECEIVED_MACHO_BRACE            0x4FA
#define FLAG_RECEIVED_SOOTHE_BELL            0x4FA
#define FLAG_RECEIVED_WHITE_HERB             0x4FA
#define FLAG_RECEIVED_SOFT_SAND              0x4FA
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x4FA
#define FLAG_RECEIVED_CLEANSE_TAG            0x4FA
#define FLAG_RECEIVED_FOCUS_BAND             0x4FA
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x4FA
#define FLAG_RECEIVED_DEVON_SCOPE            0x4FA
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x4FA
#define FLAG_MET_DEVON_EMPLOYEE              0x4FA
#define FLAG_MET_RIVAL_RUSTBORO              0x4FA
#define FLAG_RECEIVED_SILK_SCARF             0x4FA
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x4FA
#define FLAG_RECEIVED_SS_TICKET              0x4FA
#define FLAG_MET_RIVAL_LILYCOVE              0x4FA
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x4FA
#define FLAG_EXCHANGED_SCANNER               0x4FA
#define FLAG_KECLEON_FLED_FORTREE            0x4FA
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x4FA
#define FLAG_RECEIVED_MIRACLE_SEED           0x4FA
#define FLAG_RECEIVED_BELDUM                 0x4FA
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x4FA
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x4FA
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x4FA
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x4FA
#define FLAG_HAS_MATCH_CALL                  0x4FA
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x4FA
#define FLAG_REGISTERED_STEVEN_POKENAV       0x4FA
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x4FA
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x4FA // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x4FA
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x4FA
#define FLAG_MET_SCOTT_RUSTBORO              0x4FA
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x4FA // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM_WATERFALL           0x4FA
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x4FA
#define FLAG_RECEIVED_AURORA_TICKET          0x4FA
#define FLAG_RECEIVED_MYSTIC_TICKET          0x4FA
#define FLAG_RECEIVED_OLD_SEA_MAP            0x4FA
#define FLAG_WONDER_CARD_UNUSED_1            0x4FA // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x4FA
#define FLAG_WONDER_CARD_UNUSED_3            0x4FA
#define FLAG_WONDER_CARD_UNUSED_4            0x4FA
#define FLAG_WONDER_CARD_UNUSED_5            0x4FA
#define FLAG_WONDER_CARD_UNUSED_6            0x4FA
#define FLAG_WONDER_CARD_UNUSED_7            0x4FA
#define FLAG_WONDER_CARD_UNUSED_8            0x4FA
#define FLAG_WONDER_CARD_UNUSED_9            0x4FA
#define FLAG_WONDER_CARD_UNUSED_10           0x4FA
#define FLAG_WONDER_CARD_UNUSED_11           0x4FA
#define FLAG_WONDER_CARD_UNUSED_12           0x4FA
#define FLAG_WONDER_CARD_UNUSED_13           0x4FA
#define FLAG_WONDER_CARD_UNUSED_14           0x4FA
#define FLAG_WONDER_CARD_UNUSED_15           0x4FA
#define FLAG_WONDER_CARD_UNUSED_16           0x4FA
#define FLAG_WONDER_CARD_UNUSED_17           0x4FA
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x4FA
#define FLAG_CHOSE_ROOT_FOSSIL               0x4FA
#define FLAG_CHOSE_CLAW_FOSSIL               0x4FA
#define FLAG_RECEIVED_POWDER_JAR             0x4FA

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x4FA

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x4FA
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x4FA
#define FLAG_ENTERED_CONTEST                 0x4FA
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x4FA
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x4FA
#define FLAG_ENABLE_MR_STONE_POKENAV         0x4FA
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x4FA
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x4FA
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x4FA

// Flags for whether a rematchable trainer has been registered in the player's Match Call.
// Most are used implicitly by adding their REMATCH_* id to TRAINER_REGISTERED_FLAGS_START.
// Some Match Call entries (like those for gym leaders, Wally, and all non-trainer NPCs like Prof. Birch)
// have their own separate flag that needs to be set to be enabled; see src/pokenav_match_call_data.c
#define TRAINER_REGISTERED_FLAGS_START       0x4FA
#define FLAG_REGISTERED_ROSE                 0x4FA
#define FLAG_REGISTERED_ANDRES               0x4FA
#define FLAG_REGISTERED_DUSTY                0x4FA
#define FLAG_REGISTERED_LOLA                 0x4FA
#define FLAG_REGISTERED_RICKY                0x4FA
#define FLAG_REGISTERED_LILA_AND_ROY         0x4FA
#define FLAG_REGISTERED_CRISTIN              0x4FA
#define FLAG_REGISTERED_BROOKE               0x4FA
#define FLAG_REGISTERED_WILTON               0x4FA
#define FLAG_REGISTERED_VALERIE              0x4FA
#define FLAG_REGISTERED_CINDY                0x4FA
#define FLAG_REGISTERED_THALIA               0x4FA
#define FLAG_REGISTERED_JESSICA              0x4FA
#define FLAG_REGISTERED_WINSTON              0x4FA
#define FLAG_REGISTERED_STEVE                0x4FA
#define FLAG_REGISTERED_TONY                 0x4FA
#define FLAG_REGISTERED_NOB                  0x4FA
#define FLAG_REGISTERED_KOJI                 0x4FA
#define FLAG_REGISTERED_FERNANDO             0x4FA
#define FLAG_REGISTERED_DALTON               0x4FA
#define FLAG_REGISTERED_BERNIE               0x4FA
#define FLAG_REGISTERED_ETHAN                0x4FA
#define FLAG_REGISTERED_JOHN_AND_JAY         0x4FA
#define FLAG_REGISTERED_JEFFREY              0x4FA
#define FLAG_REGISTERED_CAMERON              0x4FA
#define FLAG_REGISTERED_JACKI                0x4FA
#define FLAG_REGISTERED_WALTER               0x4FA
#define FLAG_REGISTERED_KAREN                0x4FA
#define FLAG_REGISTERED_JERRY                0x4FA
#define FLAG_REGISTERED_ANNA_AND_MEG         0x4FA
#define FLAG_REGISTERED_ISABEL               0x4FA
#define FLAG_REGISTERED_MIGUEL               0x4FA
#define FLAG_REGISTERED_TIMOTHY              0x4FA
#define FLAG_REGISTERED_SHELBY               0x4FA
#define FLAG_REGISTERED_CALVIN               0x4FA
#define FLAG_REGISTERED_ELLIOT               0x4FA
#define FLAG_REGISTERED_ISAIAH               0x4FA
#define FLAG_REGISTERED_MARIA                0x4FA
#define FLAG_REGISTERED_ABIGAIL              0x4FA
#define FLAG_REGISTERED_DYLAN                0x4FA
#define FLAG_REGISTERED_KATELYN              0x4FA
#define FLAG_REGISTERED_BENJAMIN             0x4FA
#define FLAG_REGISTERED_PABLO                0x4FA
#define FLAG_REGISTERED_NICOLAS              0x4FA
#define FLAG_REGISTERED_ROBERT               0x4FA
#define FLAG_REGISTERED_LAO                  0x4FA
#define FLAG_REGISTERED_CYNDY                0x4FA
#define FLAG_REGISTERED_MADELINE             0x4FA
#define FLAG_REGISTERED_JENNY                0x4FA
#define FLAG_REGISTERED_DIANA                0x4FA
#define FLAG_REGISTERED_AMY_AND_LIV          0x4FA
#define FLAG_REGISTERED_ERNEST               0x4FA
#define FLAG_REGISTERED_CORY                 0x4FA
#define FLAG_REGISTERED_EDWIN                0x4FA
#define FLAG_REGISTERED_LYDIA                0x4FA
#define FLAG_REGISTERED_ISAAC                0x4FA
#define FLAG_REGISTERED_GABRIELLE            0x4FA
#define FLAG_REGISTERED_CATHERINE            0x4FA
#define FLAG_REGISTERED_JACKSON              0x4FA
#define FLAG_REGISTERED_HALEY                0x4FA
#define FLAG_REGISTERED_JAMES                0x4FA
#define FLAG_REGISTERED_TRENT                0x4FA
#define FLAG_REGISTERED_SAWYER               0x4FA
#define FLAG_REGISTERED_KIRA_AND_DAN         0x4FA
#define FLAG_REGISTERED_WALLY                0x4FA
#define FLAG_REGISTERED_ROXANNE              0x4FA
#define FLAG_REGISTERED_BRAWLY               0x4FA
#define FLAG_REGISTERED_WATTSON              0x4FA
#define FLAG_REGISTERED_FLANNERY             0x4FA
#define FLAG_REGISTERED_NORMAN               0x4FA
#define FLAG_REGISTERED_WINONA               0x4FA
#define FLAG_REGISTERED_TATE_AND_LIZA        0x4FA
#define FLAG_REGISTERED_JUAN                 0x4FA
#define FLAG_REGISTERED_SIDNEY               0x4FA
#define FLAG_REGISTERED_PHOEBE               0x4FA
#define FLAG_REGISTERED_GLACIA               0x4FA
#define FLAG_REGISTERED_DRAKE                0x4FA
#define FLAG_REGISTERED_WALLACE              0x4FA

#define FLAG_UNUSED_0x1AA                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1AB                    0x4FA // Unused Flag

#define FLAG_DEFEATED_DEOXYS                 0x4FA
#define FLAG_BATTLED_DEOXYS                  0x4FA
#define FLAG_SHOWN_EON_TICKET                0x4FA
#define FLAG_SHOWN_AURORA_TICKET             0x4FA
#define FLAG_SHOWN_OLD_SEA_MAP               0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x4FA
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x4FA
#define FLAG_DEFEATED_REGIROCK               0x4FA
#define FLAG_DEFEATED_REGICE                 0x4FA
#define FLAG_DEFEATED_REGISTEEL              0x4FA
#define FLAG_DEFEATED_KYOGRE                 0x4FA
#define FLAG_DEFEATED_GROUDON                0x4FA
#define FLAG_DEFEATED_RAYQUAZA               0x4FA
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x4FA
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x4FA
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x4FA
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x4FA
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x4FA
#define FLAG_DEFEATED_SUDOWOODO              0x4FA
#define FLAG_DEFEATED_MEW                    0x4FA
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x4FA
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x4FA
#define FLAG_CAUGHT_MEW                      0x4FA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x4FA
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x4FA
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x4FA
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x4FA
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x4FA
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x4FA
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x4FA
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x4FA
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x4FA
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x4FA
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x4FA
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x4FA
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x4FA
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x4FA
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x4FA

#define FLAG_UNUSED_0x1DA                    0x4FA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x4FA
#define FLAG_DEFEATED_HO_OH                  0x4FA
#define FLAG_DEFEATED_LUGIA                  0x4FA

#define FLAG_UNUSED_0x1DE                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x4FA // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x4FA // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x4FA
#define FLAG_MYSTERY_GIFT_1                  0x4FA
#define FLAG_MYSTERY_GIFT_2                  0x4FA
#define FLAG_MYSTERY_GIFT_3                  0x4FA
#define FLAG_MYSTERY_GIFT_4                  0x4FA
#define FLAG_MYSTERY_GIFT_5                  0x4FA
#define FLAG_MYSTERY_GIFT_6                  0x4FA
#define FLAG_MYSTERY_GIFT_7                  0x4FA
#define FLAG_MYSTERY_GIFT_8                  0x4FA
#define FLAG_MYSTERY_GIFT_9                  0x4FA
#define FLAG_MYSTERY_GIFT_10                 0x4FA
#define FLAG_MYSTERY_GIFT_11                 0x4FA
#define FLAG_MYSTERY_GIFT_12                 0x4FA
#define FLAG_MYSTERY_GIFT_13                 0x4FA
#define FLAG_MYSTERY_GIFT_14                 0x4FA
#define FLAG_MYSTERY_GIFT_15                 0x4FA

// Hidden Items
// #define FLAG_HIDDEN_ITEMS_START                                                         0x4FB
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL             0x4FB
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                  0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                     0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                   0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL               0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS               0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD          0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD           0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1        0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE          0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL           0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST             0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                 0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE           0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE          0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN              0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                0x4FB
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE           0x4FB
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET               0x4FB
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL         0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM_DOUBLE_TEAM            0x4FB
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             0x4FB
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             0x4FB
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             0x4FB
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             0x4FB
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS       0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM              0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                    0x4FB
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2        0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                     0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE                    0x4FB
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION              0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION              0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               0x4FB
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        0x4FB
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                0x4FB
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              0x4FB
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     0x4FB
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     0x4FB
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              0x4FB
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             0x4FB
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              0x4FB
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               0x4FB
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          0x4FB
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 0x4FB
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           0x4FB
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          0x4FB
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             0x4FB
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             0x4FB
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                0x4FB
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            0x4FB
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               0x4FB
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            0x4FB
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               0x4FB
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE 0x4FB
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   0x4FB
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         0x4FB
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        0x4FB
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                0x4FB
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 0x4FB

#define FLAG_UNUSED_0x264  0x4FC // Unused Flag
#define FLAG_UNUSED_0x265  0x4FC // Unused Flag
#define FLAG_UNUSED_0x266  0x4FC // Unused Flag
#define FLAG_UNUSED_0x267  0x4FC // Unused Flag
#define FLAG_UNUSED_0x268  0x4FC // Unused Flag
#define FLAG_UNUSED_0x269  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26A  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26B  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26C  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26D  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26E  0x4FC // Unused Flag
#define FLAG_UNUSED_0x26F  0x4FC // Unused Flag
#define FLAG_UNUSED_0x270  0x4FC // Unused Flag
#define FLAG_UNUSED_0x271  0x4FC // Unused Flag
#define FLAG_UNUSED_0x272  0x4FC // Unused Flag
#define FLAG_UNUSED_0x273  0x4FC // Unused Flag
#define FLAG_UNUSED_0x274  0x4FC // Unused Flag
#define FLAG_UNUSED_0x275  0x4FC // Unused Flag
#define FLAG_UNUSED_0x276  0x4FC // Unused Flag
#define FLAG_UNUSED_0x277  0x4FC // Unused Flag
#define FLAG_UNUSED_0x278  0x4FC // Unused Flag
#define FLAG_UNUSED_0x279  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27A  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27B  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27C  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27D  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27E  0x4FC // Unused Flag
#define FLAG_UNUSED_0x27F  0x4FC // Unused Flag
#define FLAG_UNUSED_0x280  0x4FC // Unused Flag
#define FLAG_UNUSED_0x281  0x4FC // Unused Flag
#define FLAG_UNUSED_0x282  0x4FC // Unused Flag
#define FLAG_UNUSED_0x283  0x4FC // Unused Flag
#define FLAG_UNUSED_0x284  0x4FC // Unused Flag
#define FLAG_UNUSED_0x285  0x4FC // Unused Flag
#define FLAG_UNUSED_0x286  0x4FC // Unused Flag
#define FLAG_UNUSED_0x287  0x4FC // Unused Flag
#define FLAG_UNUSED_0x288  0x4FC // Unused Flag
#define FLAG_UNUSED_0x289  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28A  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28B  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28C  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28D  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28E  0x4FC // Unused Flag
#define FLAG_UNUSED_0x28F  0x4FC // Unused Flag
#define FLAG_UNUSED_0x290  0x4FC // Unused Flag
#define FLAG_UNUSED_0x291  0x4FC // Unused Flag
#define FLAG_UNUSED_0x292  0x4FC // Unused Flag
#define FLAG_UNUSED_0x293  0x4FC // Unused Flag
#define FLAG_UNUSED_0x294  0x4FC // Unused Flag
#define FLAG_UNUSED_0x295  0x4FC // Unused Flag
#define FLAG_UNUSED_0x296  0x4FC // Unused Flag
#define FLAG_UNUSED_0x297  0x4FC // Unused Flag
#define FLAG_UNUSED_0x298  0x4FC // Unused Flag
#define FLAG_UNUSED_0x299  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29A  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29B  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29C  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29D  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29E  0x4FC // Unused Flag
#define FLAG_UNUSED_0x29F  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A0  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A1  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A2  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A3  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A4  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A5  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A6  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A7  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A8  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2A9  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AA  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AB  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AC  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AE  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2AF  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B0  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B1  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B2  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B3  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B4  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B5  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B6  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B7  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B8  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2B9  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2BA  0x4FC // Unused Flag
#define FLAG_UNUSED_0x2BB  0x4FC // Unused Flag

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x4FC
#define FLAG_HIDE_APPRENTICE                                        0x4FC
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x4FC
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x4FC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x4FC
#define FLAG_HIDE_MEW                                               0x4FC
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x4FC
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x4FC
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x4FC
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x4FC
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x4FC
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x4FC
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x4FC

#define FLAG_UNUSED_0x2D9                                           0x4FC // Unused Flag

#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x4FC
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x4FC
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x4FC
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x4FC
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x4FC
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x4FC
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x4FC
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x4FC
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x4FC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x4FC
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x4FC
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x4FC
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x4FC
#define FLAG_HIDE_DEOXYS                                            0x4FC
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x4FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x4FC
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x4FC
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x4FC
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x4FC
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x4FC
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x4FC
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x4FC
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x4FC
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x4FC
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x4FC
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x4FC
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x4FC
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x4FC
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x4FC
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x4FC
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x4FC
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x4FC
#define FLAG_HIDE_FANCLUB_BOY                                       0x4FC
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x4FC
#define FLAG_HIDE_FANCLUB_LADY                                      0x4FC
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x4FC
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x4FC
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x4FC
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x4FC
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x4FC
#define FLAG_HIDE_LUGIA                                             0x4FC
#define FLAG_HIDE_HO_OH                                             0x4FC
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x4FC
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x4FC
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x4FC
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x4FC
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x4FC
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x4FC
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x4FC
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x4FC
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x4FC
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x4FC
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x4FC
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x4FC // Unused, leftover from R/S
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x4FC
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x4FC
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x4FC
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x4FC
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x4FC
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x4FC
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x4FC
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x4FC
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x4FC
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x4FC
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x4FC
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x4FC
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x4FC
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x4FC
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x4FC
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x4FC
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x4FC
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x4FC
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x4FC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x4FC
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x4FC
#define FLAG_UNKNOWN_0x363                                          0x4FC // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x4FC
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x4FC
#define FLAG_HIDE_FALLARBOR_POKEMON_CENTER_LANETTE                  0x4FC
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x4FC
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x4FC
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x4FC
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x4FC
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x4FC
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x4FC
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x4FC
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x4FC
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x4FC
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x4FC
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x4FC
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x4FC
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x4FC
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x4FC
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x4FC
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x4FC
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x4FC
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x4FC
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x4FC
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x4FC
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x4FC
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x4FC
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x4FC
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x4FC
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x4FC
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x4FC
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x4FC
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x4FC
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x4FC
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x4FC
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x4FC
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x4FC
#define FLAG_UNKNOWN_0x393                                          0x4FC // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x4FC
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x4FC
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x4FC
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x4FC
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x4FC
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x4FC
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x4FC
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x4FC
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x4FC
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x4FC
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x4FC
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x4FC
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x4FC
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x4FC
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x4FC
#define FLAG_HIDE_REGIROCK                                          0x4FC
#define FLAG_HIDE_REGICE                                            0x4FC
#define FLAG_HIDE_REGISTEEL                                         0x4FC
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x4FC
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x4FC
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x4FC
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x4FC
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x4FC
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x4FC
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x4FC
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x4FC
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x4FC
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x4FC
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x4FC
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x4FC
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x4FC
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x4FC
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x4FC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x4FC
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x4FC
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x4FC
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x4FC
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x4FC
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x4FC
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x4FC
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x4FC
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x4FC
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x4FC
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x4FC
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x4FC
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x4FC
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x4FC
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x4FC
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x4FC
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x4FC
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x4FC
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x4FC
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x4FC
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x4FC
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x4FC
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x4FC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x4FC
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x4FC
#define FLAG_HIDE_ROUTE_101_BOY                                     0x4FC
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x4FC
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x4FC
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x4FC
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x4FC
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x4FC
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x4FC

// Item Ball Flags
#define FLAG_ITEM_ROUTE_102_POTION                                  0x4FC
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                               0x4FC
#define FLAG_ITEM_ROUTE_104_PP_UP                                   0x4FC
#define FLAG_ITEM_ROUTE_105_IRON                                    0x4FC
#define FLAG_ITEM_ROUTE_106_PROTEIN                                 0x4FC
#define FLAG_ITEM_ROUTE_109_PP_UP                                   0x4FC
#define FLAG_ITEM_ROUTE_110_RARE_CANDY                              0x4FC
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                0x4FC
#define FLAG_ITEM_ROUTE_111_TM_SANDSTORM                            0x4FC
#define FLAG_ITEM_ROUTE_111_STARDUST                                0x4FC
#define FLAG_ITEM_ROUTE_111_HP_UP                                   0x4FC
#define FLAG_ITEM_ROUTE_112_NUGGET                                  0x4FC
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               0x4FC
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             0x4FC
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                              0x4FC
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 0x4FC
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            0x4FC
#define FLAG_ITEM_ROUTE_115_TM_FOCUS_PUNCH                          0x4FC
#define FLAG_ITEM_ROUTE_115_IRON                                    0x4FC
#define FLAG_ITEM_ROUTE_116_ETHER                                   0x4FC
#define FLAG_ITEM_ROUTE_116_REPEL                                   0x4FC
#define FLAG_ITEM_ROUTE_116_HP_UP                                   0x4FC
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              0x4FC
#define FLAG_ITEM_ROUTE_117_REVIVE                                  0x4FC
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                             0x4FC
#define FLAG_ITEM_ROUTE_119_ZINC                                    0x4FC
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                0x4FC
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                              0x4FC
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              0x4FC
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                          0x4FC
#define FLAG_ITEM_ROUTE_120_NUGGET                                  0x4FC
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               0x4FC
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 0x4FC
#define FLAG_ITEM_ROUTE_123_RARE_CANDY                              0x4FC // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_ROUTE_127_ZINC                                    0x4FC
#define FLAG_ITEM_ROUTE_127_CARBOS                                  0x4FC
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              0x4FC
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               0x4FC
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              0x4FC
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         0x4FC
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              0x4FC
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                            0x4FC
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                           0x4FC
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                            0x4FC
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM_IRON_TAIL                   0x4FC
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                      0x4FC
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                     0x4FC
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                          0x4FC
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                          0x4FC
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                          0x4FC
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       0x4FC
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        0x4FC
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            0x4FC
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            0x4FC
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       0x4FC
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          0x4FC
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        0x4FC
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               0x4FC
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                    0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    0x4FC
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  0x4FC
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    0x4FC
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             0x4FC
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       0x4FC
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        0x4FC
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       0x4FC
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_SKILL_SWAP                    0x4FC
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           0x4FC
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER        0x4FC
#define FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY                        0x4FC
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_DRAGON_CLAW                0x4FC
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     0x4FC
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  0x4FC
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   0x4FC
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x4FC
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             0x4FC
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_PSYCHIC                       0x4FC
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     0x4FC
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        0x4FC
#define FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL                         0x4FC
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_EARTHQUAKE              0x4FC
#define FLAG_ITEM_FIERY_PATH_TM_TOXIC                               0x4FC
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               0x4FC
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              0x4FC
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_SOLAR_BEAM              0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_ICE_BEAM              0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    0x4FC
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_RAIN_DANCE  0x4FC
#define FLAG_ITEM_ROUTE_121_CARBOS                                  0x4FC
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              0x4FC
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             0x4FC
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          0x4FC
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            0x4FC
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               0x4FC
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  0x4FC
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        0x4FC
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             0x4FC
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_HAIL                       0x4FC
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x4FC
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x4FC
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x4FC
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x4FC
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                     0x4FC
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x4FC
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x4FC
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x4FC
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x4FC
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x4FC
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x4FC
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x4FC
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL                 0x4FC // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR                  0x4FC // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL                   0x4FC // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_UNUSED_0x468                                           0x4FC // Unused Flag
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x4FC
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x4FC
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x4FC
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x4FC
#define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08                       0x4FC // Unused Flag, leftover from R/S. HM08 is given to the player directly in Emerald
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x4FC
#define FLAG_ITEM_ROUTE_104_POTION                                  0x4FC
#define FLAG_UNUSED_0x470                                           0x4FC // Unused Flag
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x4FC
#define FLAG_UNUSED_0x472                                           0x4FC // Unused Flag
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x4FC
#define FLAG_ITEM_ROUTE_109_POTION                                  0x4FC
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x4FC
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x4FC
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x4FC
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x4FC
#define FLAG_UNUSED_0x479                                           0x4FC // Unused Flag
#define FLAG_ITEM_ROUTE_116_POTION                                  0x4FC
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x4FC
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x4FC
#define FLAG_ITEM_ROUTE_121_REVIVE                                  0x4FC
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x4FC
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x4FC
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x4FC
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x4FC
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x4FC
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x4FC
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x4FC
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x4FC
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x4FC
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x4FC
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x4FC
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x4FC
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x4FC
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x4FC
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x4FC
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x4FC

#define FLAG_UNUSED_0x493                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x494                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x495                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x496                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x497                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x498                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x499                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49A                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49B                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49C                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49D                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49E                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x49F                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A0                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A1                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A2                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A3                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A4                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A5                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A6                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A7                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A8                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4A9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AA                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AB                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AC                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AD                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AE                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4AF                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B0                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B1                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B2                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B3                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B4                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B5                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B6                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B7                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B8                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4B9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BA                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BB                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BC                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BD                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BE                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4BF                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C0                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C1                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C2                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C3                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C4                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C5                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C6                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C7                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C8                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4C9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CA                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CB                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CC                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CD                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CE                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4CF                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D0                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D1                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D2                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D3                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D4                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D5                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D6                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D7                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D8                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4D9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4DF                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E0                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E1                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E2                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E3                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E4                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E5                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4EA                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4EB                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4EC                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4ED                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4EE                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4EF                                           0x4FC // Unused Flag

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4FC
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4FC
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4FC
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4FC
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4FC
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4FC
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4FC
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4FC
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4FC

#define FLAG_UNUSED_0x4F9                                           0x4FC // Unused Flag
#define FLAG_UNUSED_0x4FA                                           0x4FC // Unused Flag

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FC
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FC
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FC

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_START_MENU_PC_GET                   (SYSTEM_FLAGS + 0x3)
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_UNUSED_0x881                           (SYSTEM_FLAGS + 0x21) // Unused Flag
#define FLAG_UNUSED_0x882                           (SYSTEM_FLAGS + 0x22) // Unused Flag
#define FLAG_UNUSED_0x883                           (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
// Sets abnormal weather on maps that check for it
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_0x88E                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_UNUSED_0x8E5                           (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_UNUSED_0x8E6                           (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_UNUSED_0x8E7                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_UNUSED_0x8E8                           (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_UNUSED_0x8E9                           (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_UNUSED_0x8EA                           (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_UNUSED_0x8EB                           (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_FOSSIL_RECEIVED                  (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_DAILY_ZONE13B_POKEBALL_RECEIVED        (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT             (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
                                                                            // Also, scripted movements on the player will move follower(s), too
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW          FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED         FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED          FLAG_TEMP_3
#define FLAG_TEMP_HIDE_FOLLOWER                 FLAG_TEMP_E
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE FLAG_TEMP_11

#if TESTING
#define TESTING_FLAGS_START                     0x5000
#define TESTING_FLAG_SLEEP_CLAUSE               (TESTING_FLAGS_START + 0x0)
#define TESTING_FLAG_INVERSE_BATTLE             (TESTING_FLAGS_START + 0x1)
#define TESTING_FLAG_UNUSED_2                   (TESTING_FLAGS_START + 0x2)
#define TESTING_FLAG_UNUSED_3                   (TESTING_FLAGS_START + 0x3)
#define TESTING_FLAG_UNUSED_4                   (TESTING_FLAGS_START + 0x4)
#define TESTING_FLAG_UNUSED_5                   (TESTING_FLAGS_START + 0x5)
#define TESTING_FLAG_UNUSED_6                   (TESTING_FLAGS_START + 0x6)
#define TESTING_FLAG_UNUSED_7                   (TESTING_FLAGS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_FLAGS_H
