#ifndef GUARD_CONSTANTS_MAPS_H
#define GUARD_CONSTANTS_MAPS_H

#include "map_groups.h"

enum
{
    // Warps using this map will instead use the warp data stored in gSaveBlock1Ptr->dynamicWarp.
    // Used for warps that need to change destinations, e.g. when stepping off an elevator.
    MAP_DYNAMIC = (0x7F | (0x7F << 8)),

    MAP_UNDEFINED = (0xFF | (0xFF << 8)),
};

#define MAP_GROUP(map) (map >> 8)
#define MAP_NUM(map) (map & 0xFF)

// IDs for dynamic warps. Both are used in the dest_warp_id field for warp events, but they
// are never read in practice. A dest_map of MAP_DYNAMIC is used to indicate that a
// dynamic warp should be used, at which point the warp id is ignored. They can be passed
// as the argument to SetWarpDestinationToDynamicWarp, but this argument is unused.
// As only one dynamic warp is saved at a time there's no need to distinguish between them.
#define WARP_ID_SECRET_BASE 0x7E
#define WARP_ID_DYNAMIC     0x7F

// Used to indicate an invalid warp id, for dummy warps or when a warp should
// use the given coordinates rather than the coordinates of a target warp.
#define WARP_ID_NONE (-1)

// Custom. Required because mapsec is a u8.
#define MAPSEC_ONE_ISLAND              MAPSEC_ZONE_0
#define MAPSEC_TWO_ISLAND              MAPSEC_ZONE_1
#define MAPSEC_THREE_ISLAND            MAPSEC_ZONE_2
#define MAPSEC_FOUR_ISLAND             MAPSEC_ZONE_3
#define MAPSEC_FIVE_ISLAND             MAPSEC_ZONE_4
#define MAPSEC_SEVEN_ISLAND            MAPSEC_ZONE_5
#define MAPSEC_SIX_ISLAND              MAPSEC_ZONE_6
#define MAPSEC_KINDLE_ROAD             MAPSEC_ZONE_7
#define MAPSEC_TREASURE_BEACH          MAPSEC_ZONE_8
#define MAPSEC_CAPE_BRINK              MAPSEC_ZONE_9
#define MAPSEC_BOND_BRIDGE             MAPSEC_ZONE_10
#define MAPSEC_THREE_ISLE_PORT         MAPSEC_ZONE_11
#define MAPSEC_RESORT_GORGEOUS         MAPSEC_ZONE_12
#define MAPSEC_WATER_LABYRINTH         MAPSEC_ZONE_13
#define MAPSEC_FIVE_ISLE_MEADOW        MAPSEC_ZONE_14
#define MAPSEC_MEMORIAL_PILLAR         MAPSEC_ZONE_15
#define MAPSEC_OUTCAST_ISLAND          MAPSEC_ZONE_16
#define MAPSEC_GREEN_PATH              MAPSEC_ZONE_17
#define MAPSEC_WATER_PATH              MAPSEC_ZONE_18
#define MAPSEC_RUIN_VALLEY             MAPSEC_ZONE_19
#define MAPSEC_TRAINER_TOWER           MAPSEC_ZONE_20
#define MAPSEC_CANYON_ENTRANCE         MAPSEC_ZONE_21
#define MAPSEC_SEVAULT_CANYON          MAPSEC_ZONE_22
#define MAPSEC_TANOBY_RUINS            MAPSEC_ZONE_23
#define MAPSEC_SEVII_ISLE_22           MAPSEC_ZONE_24
#define MAPSEC_SEVII_ISLE_23           MAPSEC_ZONE_25
#define MAPSEC_SEVII_ISLE_24           MAPSEC_ZONE_26
#define MAPSEC_NAVEL_ROCK_FRLG         MAPSEC_ZONE_27
#define MAPSEC_MT_EMBER                MAPSEC_ZONE_28
#define MAPSEC_BERRY_FOREST            MAPSEC_ZONE_29
#define MAPSEC_ICEFALL_CAVE            MAPSEC_ZONE_30
#define MAPSEC_ROCKET_WAREHOUSE        MAPSEC_ZONE_31
#define MAPSEC_TRAINER_TOWER_2         MAPSEC_ZONE_32
#define MAPSEC_DOTTED_HOLE             MAPSEC_ZONE_33
#define MAPSEC_LOST_CAVE               MAPSEC_ZONE_34
#define MAPSEC_PATTERN_BUSH            MAPSEC_ZONE_35
#define MAPSEC_ALTERING_CAVE_FRLG      MAPSEC_ZONE_36
#define MAPSEC_TANOBY_CHAMBERS         MAPSEC_ZONE_37
#define MAPSEC_THREE_ISLE_PATH         MAPSEC_ZONE_38
#define MAPSEC_TANOBY_KEY              MAPSEC_ZONE_39
#define MAPSEC_BIRTH_ISLAND_FRLG       MAPSEC_ZONE_40
#define MAPSEC_MONEAN_CHAMBER          MAPSEC_ZONE_41
#define MAPSEC_LIPTOO_CHAMBER          MAPSEC_ZONE_42
#define MAPSEC_WEEPTH_CHAMBER          MAPSEC_ZONE_43
#define MAPSEC_DILFORD_CHAMBER         MAPSEC_ZONE_44
#define MAPSEC_SCUFIB_CHAMBER          MAPSEC_ZONE_45
#define MAPSEC_RIXY_CHAMBER            MAPSEC_ZONE_46
#define MAPSEC_VIAPOIS_CHAMBER         MAPSEC_ZONE_47
#define MAPSEC_EMBER_SPA               MAPSEC_ZONE_48
#define MAPSEC_SPECIAL_AREA            MAPSEC_ZONE_49
#define MAPSEC_AQUA_HIDEOUT            MAPSEC_ZONE_50

#define MAPSEC_MAGMA_HIDEOUT           MAPSEC_ZONE_B1
#define MAPSEC_MIRAGE_TOWER            MAPSEC_QUIET_FIELD
#define MAPSEC_BIRTH_ISLAND            MAPSEC_BREEZY_MEADOW
#define MAPSEC_FARAWAY_ISLAND          MAPSEC_PEACEFUL_GROVE
#define MAPSEC_ARTISAN_CAVE            MAPSEC_WHISPER_CAVE
#define MAPSEC_MARINE_CAVE             MAPSEC_HIDDEN_GROTTO
#define MAPSEC_UNDERWATER_MARINE_CAVE  MAPSEC_HEATED_CAVITY
#define MAPSEC_TERRA_CAVE              MAPSEC_BOREAL_THICKET

// Temporary, may remove the rest.
#define MAPSEC_UNDERWATER_105          MAPSEC_ZONE_S1
#define MAPSEC_ZONE_S2   MAPSEC_ZONE_S1
#define MAPSEC_ZONE_S3   MAPSEC_ZONE_S2
#define MAPSEC_ZONE_S4   MAPSEC_ZONE_S3
#define MAPSEC_ZONE_S5   MAPSEC_ZONE_S4
#define MAPSEC_ZONE_S6   MAPSEC_ZONE_S5
#define MAPSEC_ZONE_S7   MAPSEC_ZONE_S6
#define MAPSEC_ZONE_S8   MAPSEC_ZONE_S7
#define MAPSEC_ZONE_S9   MAPSEC_ZONE_S8
#define MAPSEC_ZONE_S10  MAPSEC_ZONE_S9
#endif  // GUARD_CONSTANTS_MAPS_H
