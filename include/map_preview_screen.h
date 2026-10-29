#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

enum MapPreviewScreenId
{
    MPS_VIRIDIAN_FOREST = 0u,
    MPS_MT_MOON,
    MPS_DIGLETTS_CAVE,
    MPS_ROCK_TUNNEL,
    MPS_POKEMON_TOWER,
    MPS_SAFARI_ZONE,
    MPS_SEAFOAM_ISLANDS,
    MPS_POKEMON_MANSION,
    MPS_ROCKET_HIDEOUT,
    MPS_SILPH_CO,
    MPS_VICTORY_ROAD,
    MPS_CERULEAN_CAVE,
    MPS_POWER_PLANT,
    MPS_MT_EMBER,
    MPS_ROCKET_WAREHOUSE,
    MPS_MONEAN_CHAMBER,
    MPS_DOTTED_HOLE,
    MPS_BERRY_FOREST,
    MPS_ICEFALL_CAVE,
    MPS_LOST_CAVE,
    MPS_ALTERING_CAVE,
    MPS_PATTERN_BUSH,
    MPS_LIPTOO_CHAMBER,
    MPS_WEEPTH_CHAMBER,
    MPS_TDILFORD_CHAMBER,
    MPS_SCUFIB_CHAMBER,
    MPS_RIXY_CHAMBER,
    MPS_VIAPOIS_CHAMBER,
    MPS_ZONE0,
    MPS_ZONE1,
    MPS_ZONE2,
    MPS_ZONE3,
    MPS_ZONE4,
    MPS_ZONE5,
    MPS_ZONE6,
    MPS_ZONE7,
    MPS_ZONE8,
    MPS_ZONE9,
    MPS_ZONE10,
    MPS_ZONE11,
    MPS_ZONE12,
    MPS_ZONE13,
    MPS_ZONE14,
    MPS_ZONE15,
    MPS_ZONE16,
    MPS_ZONE17,
    MPS_ZONE18,
    MPS_ZONE19,
    MPS_ZONE20,
    MPS_ZONE21,
    MPS_ZONE22,
    MPS_ZONE23,
    MPS_ZONE24,
    MPS_ZONE25,
    MPS_ZONE26,
    MPS_ZONE27,
    MPS_ZONE28,
    MPS_ZONE29,
    MPS_ZONE30,
    MPS_ZONE31,
    MPS_ZONE32,
    MPS_ZONE33,
    MPS_ZONE34,
    MPS_ZONE35,
    MPS_COUNT
};

enum MapPreviewScreenType
{
    MPS_TYPE_CAVE,
    MPS_TYPE_FADE_IN,
    MPS_TYPE_BASIC,
    MPS_TYPE_ANY
};

#define MPS_FLAG_NULL   0

struct MapPreviewScreen
{
    mapsec_u8_t mapsec;
    enum MapPreviewScreenType type:2;
    u8 usesAllPalettes:1;
    u8 nameDisabled:1;
    u8 padding:4;
    u16 flagId;
    const void *tilesptr;
    const void *tilemapptr;
    const void *palptr;
};

bool32 ShouldRunMapPreview(void);
u16 MapPreview_CreateMapNameWindow(mapsec_u8_t mapsec);
u16 MapPreview_GetDuration(mapsec_u8_t mapsec);
bool32 CurrentMapHasPreviewScreen(enum MapPreviewScreenType type);
bool32 FadeInMapPreviewScreenIsRunning(void);
void MapPreview_InitBgs(void);
void MapPreview_LoadGfx(mapsec_u8_t mapsec);
bool32 MapPreview_IsGfxLoadFinished(void);
void MapPreview_Unload(s32 windowId);
void RunMapPreviewScreenNonFade(u8 mapSecId);
void RunMapPreviewScreenFadeIn(mapsec_u8_t mapsec);
void Task_MapPreviewScreen_NonFade(u8 taskId);
void MapPreview_SetFlag(u16 flagId);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
