#include "global.h"
#include "battle_main.h"
#include "battle_setup.h"
#include "bg.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "dexnav.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "international_string_util.h"
#include "m4a.h"
#include "map_name_popup.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_summary_screen.h"
#include "random.h"
#include "region_map.h"
#include "scanline_effect.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "sprite.h"
#include "start_menu.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "wild_encounter.h"
#include "window.h"
#include "constants/map_types.h"
#include "constants/species.h"
#include "constants/maps.h"
#include "constants/field_effects.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/abilities.h"
#include "constants/rgb.h"
#include "constants/region_map_sections.h"
#include "constants/weather.h"
#include "gba/m4a_internal.h"

// Defines
enum WindowIds
{
    WINDOW_INFO,
    WINDOW_REGISTERED,
    WINDOW_COUNT,
};

enum Statuses
{
    STATUS_INVALID_SEARCH,
    STATUS_CHOOSE_MON,
    STATUS_LOCKED,
    STATUS_NO_DATA,
    STATUS_INCORRECT_AREA,
};

struct DexNavSearch
{
    u16 species;
    u8 monLevel;
    u8 proximity;
    u8 environment;
    s16 tileX;
    s16 tileY;
    u8 fldEffSpriteId;
    u8 fldEffId;
    u8 movementCount;
    u8 windowId;
    u8 iconSpriteId;
    u8 eyeSpriteId;
    u8 itemSpriteId;
    u8 starSpriteIds[3];
    u8 ownedIconSpriteId;
    u8 exclamationSpriteId;
    u8 hiddenSearch:1;
    u8 isHiddenMon:1;
    u8 unk:6;
    u16 palBuffer[16];
};

struct DexNavGUI
{
    MainCallback savedCallback;
    u8 state;
    u8 cursorSpriteId;
    u16 landSpecies[LAND_WILD_COUNT];
    u16 waterSpecies[WATER_WILD_COUNT];
    u16 hiddenSpecies[SPECIAL_WILD_COUNT];
    u8 cursorRow;
    u8 cursorCol;
    u8 environment;
    u8 potential;
    u8 typeIconSpriteIds[2];
    u8 starSpriteIds[3];
};

// RAM

EWRAM_DATA static struct DexNavSearch *sDexNavSearchDataPtr = NULL;
EWRAM_DATA static struct DexNavGUI *sDexNavUiDataPtr = NULL;
EWRAM_DATA static u8 *sBg1TilemapBuffer = NULL;
EWRAM_DATA bool8 gDexnavBattle = FALSE;

//// Function Declarations
//GUI
static void Task_DexNavWaitFadeIn(u8 taskId);
static void Task_DexNavMain(u8 taskId);
static void PrintCurrentSpeciesInfo(void);
// SEARCH
static bool8 TryStartHiddenMonFieldEffect(u8 environment, u8 xSize, u8 ySize, bool8 smallScan);
static u8 DexNavTryGenerateMonLevel(u16 species, u8 environment);
static u8 GetEncounterLevelFromMapData(u16 species, u8 environment);
static void CreateDexNavWildMon(u16 species, u8 level);
static u8 GetPlayerDistance(s16 x, s16 y);
static u8 DexNavPickTile(u8 environment, u8 xSize, u8 ySize, bool8 smallScan);
static void DexNavProximityUpdate(void);
static void DexNavDrawIcons(void);
static void DexNavUpdateSearchWindow(u8 proximity, u8 searchLevel);
//static void DexNavSightUpdate(u8 index);
static void Task_DexNavSearch(u8 taskId);
static void EndDexNavSearchSetupScript(const u8 *script, u8 taskId);
// HIDDEN MONS
static void DexNavDrawHiddenIcons(void);
static void DrawHiddenSearchWindow(u8 width);

//// Const Data
// gui image data
static const u32 sDexNavGuiTiles[] = INCBIN_U32("graphics/dexnav/gui_tiles.4bpp.lz");
static const u32 sDexNavGuiTilemap[] = INCBIN_U32("graphics/dexnav/gui_tilemap.bin.lz");
static const u32 sDexNavGuiPal[] = INCBIN_U32("graphics/dexnav/gui.gbapal");

static const u32 sSelectionCursorGfx[] = INCBIN_U32("graphics/dexnav/cursor.4bpp.lz");
static const u16 sSelectionCursorPal[] = INCBIN_U16("graphics/dexnav/cursor.gbapal");
static const u32 sCapturedAllMonsTiles[] = INCBIN_U32("graphics/dexnav/captured_all.4bpp.lz");  //uses selection cursor pal

static const u32 sNoDataGfx[] = INCBIN_U32("graphics/dexnav/no_data.4bpp.lz");

// searching image data
static const u32 sPotentialStarGfx[] = INCBIN_U32("graphics/dexnav/star.4bpp.lz");
//static const u32 sEyeGfx[] = INCBIN_U32("graphics/dexnav/vision.4bpp.lz");
static const u32 sHiddenSearchIconGfx[] = INCBIN_U32("graphics/dexnav/hidden_search.4bpp.lz");
static const u32 sOwnedIconGfx[] = INCBIN_U32("graphics/dexnav/owned_icon.4bpp.lz");
static const u32 sHiddenMonIconGfx[] = INCBIN_U32("graphics/dexnav/hidden.4bpp.lz");

// strings
static const u8 sText_DexNav_NoInfo[] = _("--------");
static const u8 sText_DexNav_CaptureToSee[] = _("Capture first!");
static const u8 sText_DexNav_PressRToRegister[] = _("R TO REGISTER!");
static const u8 sText_DexNav_SearchForRegisteredSpecies[] = _("Search {STR_VAR_1}");
static const u8 sText_DexNav_NotFoundHere[] = _("This Pokémon cannot be found here!");
static const u8 sText_ThreeQmarks[] = _("???");
static const u8 sText_SearchLevel[] = _("SEARCH {LV}. {STR_VAR_1}");
static const u8 sText_MonLevel[] = _("{LV}. {STR_VAR_1}");
static const u8 sText_EggMove[] = _("MOVE: {STR_VAR_1}");
static const u8 sText_HeldItem[] = _("{STR_VAR_1}");
static const u8 sText_StartExit[] = _("{START_BUTTON} EXIT");

static const u8 sText_ArrowLeft[] = _("{LEFT_ARROW}");
static const u8 sText_ArrowRight[] = _("{RIGHT_ARROW}");
static const u8 sText_ArrowUp[] = _("{UP_ARROW}");
static const u8 sText_ArrowDown[] = _("{DOWN_ARROW}");

static const struct WindowTemplate sDexNavGuiWindowTemplates[] =
{
    [WINDOW_INFO] =
    {
        .bg = 0,
        .tilemapLeft = 21,
        .tilemapTop = 5,
        .width = 9,
        .height = 15,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    [WINDOW_REGISTERED] =
    {
        .bg = 0,
        .tilemapLeft = 4,
        .tilemapTop = 0,
        .width = 26,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 200,
    },
    DUMMY_WIN_TEMPLATE
};

//gui font
static const u8 sFontColor_Black[3] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY};
static const u8 sFontColor_White[3] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY};
//search window font
static const u8 sSearchFontColor[3] = {0, 15, 13};

static const struct OamData sNoDataIconOam =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 1,
};

static const struct OamData sHeldItemOam =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(8x8),
    .size = SPRITE_SIZE(8x8),
    .priority = 0,
    .paletteNum = 13,
};

static const struct OamData sCapturedAllOam =
{
    .y = 0,
    .affineMode = 1,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = SPRITE_SHAPE(8x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 0, //Highest
    .paletteNum = 12,
    .affineParam = 0,
};

static const struct OamData sSearchIconOam =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0, // above BG layers
    .paletteNum = 13,
    .affineParam = 0
};

static const struct OamData sSelectionCursorOam =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0, // above BG layers
    .paletteNum = 12,
    .affineParam = 0
};

static const struct OamData sSightOam =
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .shape = SPRITE_SHAPE(16x8),
    .size = SPRITE_SIZE(16x8),
    .priority = 0,
};
static const union AnimCmd sAnimCmdSight0[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END
};
static const union AnimCmd sAnimCmdSight1[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_END
};
static const union AnimCmd sAnimCmdSight2[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_END
};
static const union AnimCmd *const sAnimCmdTable_Sight[] =
{
    sAnimCmdSight0,
    sAnimCmdSight1,
    sAnimCmdSight2,
};

// gui sprite templates
static const struct SpriteTemplate sNoDataIconTemplate =
{
    .tileTag = ICON_GFX_TAG,
    .paletteTag = ICON_PAL_TAG,
    .oam = &sNoDataIconOam,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sCaptureAllMonsSpriteTemplate =
{
    .tileTag = CAPTURED_ALL_TAG,
    .paletteTag = 0xFFFF,
    .oam = &sCapturedAllOam,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSelectionCursorSpriteTemplate =
{
    .tileTag = SELECTION_CURSOR_TAG,
    .paletteTag = 0xFFFF,
    .oam = &sSelectionCursorOam,
    .anims =  gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sSearchIconSpriteTemplate =
{
    .tileTag = HIDDEN_SEARCH_TAG,
    .paletteTag = 0xFFFF,   //held item pal
    .oam = &sSearchIconOam,
    .anims =  gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sOwnedIconTemplate = 
{
    .tileTag = OWNED_ICON_TAG,
    .paletteTag = 0xFFFF,   //held item pal
    .oam = &sHeldItemOam,
    .anims =  gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteTemplate sHiddenMonIconTemplate = 
{
    .tileTag = HIDDEN_MON_ICON_TAG,
    .paletteTag = 0xFFFF,   //held item pal
    .oam = &sHeldItemOam,
    .anims =  gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

// gui sprite sheets
static const struct CompressedSpriteSheet sNoDataIconSpriteSheet = {sNoDataGfx, (32 * 32) / 2, ICON_GFX_TAG};
static const struct CompressedSpriteSheet sCapturedAllPokemonSpriteSheet = {sCapturedAllMonsTiles, (8 * 8) / 2, CAPTURED_ALL_TAG};
// search sprite sheets
static const struct CompressedSpriteSheet sOwnedIconSpriteSheet = {sOwnedIconGfx, (8 * 8) / 2, OWNED_ICON_TAG};
static const struct CompressedSpriteSheet sHiddenMonIconSpriteSheet = {sHiddenMonIconGfx, (8 * 8) / 2, HIDDEN_MON_ICON_TAG};

//// functions
///////////////////////
//// DEXNAV SEARCH ////
///////////////////////
static s16 GetSearchWindowY(void)
{
    return (GetWindowAttribute(sDexNavSearchDataPtr->windowId, WINDOW_TILEMAP_TOP) * 8);
}

#define SPECIES_ICON_X 28
static void DrawDexNavSearchMonIcon(u16 species, u8 *dst, bool8 owned)
{
    u8 spriteId;

    LoadMonIconPalette(species);
    spriteId = CreateMonIcon(species, SpriteCB_MonIcon, SPECIES_ICON_X - 6, GetSearchWindowY() + 8, 0, 0xFFFFFFFF);
    gSprites[spriteId].oam.priority = 0;
    *dst = spriteId;
    
    if (owned)
        sDexNavSearchDataPtr->ownedIconSpriteId = CreateSprite(&sOwnedIconTemplate, SPECIES_ICON_X + 6, GetSearchWindowY() + 4, 0);
}

static void AddSearchWindow(u8 width)
{
    struct WindowTemplate template;
    u16 y = 16;
    
    if (sDexNavSearchDataPtr->tileY > (gSaveBlock1Ptr->pos.y + 7))
        y = 1;  //draw at top if chosen tile is below

    LoadDexNavWindowGfx(sDexNavSearchDataPtr->windowId, 0x1d5, 14 * 16);
    
    SetWindowTemplateFields(&template, 0, 1, y, width, 3, 14, 8);
    
    sDexNavSearchDataPtr->windowId = AddWindow(&template);
    FillWindowPixelBuffer(sDexNavSearchDataPtr->windowId, PIXEL_FILL(1));
    PutWindowTilemap(sDexNavSearchDataPtr->windowId);
    CopyWindowToVram(sDexNavSearchDataPtr->windowId, 3);
    
    DrawStdFrameWithCustomTileAndPalette(sDexNavSearchDataPtr->windowId, TRUE, 0x214, 14);
}

#define WINDOW_COL_0        (SPECIES_ICON_X + 4)
#define WINDOW_COL_1        (WINDOW_COL_0 + (GetFontAttribute(sDexNavSearchDataPtr->windowId, FONTATTR_MAX_LETTER_WIDTH) * (POKEMON_NAME_LENGTH)))
#define WINDOW_MOVE_NAME_X  (WINDOW_COL_1 + (GetFontAttribute(sDexNavSearchDataPtr->windowId, FONTATTR_MAX_LETTER_WIDTH) * 6))
#define SEARCH_ARROW_X      (WINDOW_MOVE_NAME_X + 90)
#define SEARCH_ARROW_Y      0
static void AddSearchWindowText(u16 species, u8 proximity, bool8 hidden)
{
    u8 windowId = sDexNavSearchDataPtr->windowId;
    
    //species name - always present
    StringCopy(gStringVar1, GetSpeciesName(species));
    AddTextPrinterParameterized3(sDexNavSearchDataPtr->windowId, 0, WINDOW_COL_0, 0, sSearchFontColor, TEXT_SKIP_DRAW, gStringVar1);
    
    //level - always present
    ConvertIntToDecimalStringN(gStringVar1, sDexNavSearchDataPtr->monLevel, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringExpandPlaceholders(gStringVar4, sText_MonLevel);
    AddTextPrinterParameterized3(sDexNavSearchDataPtr->windowId, 0, WINDOW_COL_1, 0, sSearchFontColor, TEXT_SKIP_DRAW, gStringVar4);
    StringExpandPlaceholders(gStringVar4, sText_StartExit);
    AddTextPrinterParameterized3(windowId, 0, WINDOW_MOVE_NAME_X, 0, sSearchFontColor, TEXT_SKIP_DRAW, gStringVar4);
    if (proximity <= SNEAKING_PROXIMITY)
        PlaySE(SE_POKENAV_ON);
    
    CopyWindowToVram(sDexNavSearchDataPtr->windowId, 2);
}

static void DrawSearchWindow(u16 species)
{   
    AddSearchWindow(28);
    AddSearchWindowText(species, sDexNavSearchDataPtr->proximity, 0);
}

static void RemoveDexNavWindowAndGfx(void)
{
    u32 i;
    
    // try remove sprites
    if (sDexNavSearchDataPtr->iconSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sDexNavSearchDataPtr->iconSpriteId]);
    if (sDexNavSearchDataPtr->itemSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sDexNavSearchDataPtr->itemSpriteId]);
    if (sDexNavSearchDataPtr->eyeSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sDexNavSearchDataPtr->eyeSpriteId]);
    if (sDexNavSearchDataPtr->ownedIconSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sDexNavSearchDataPtr->ownedIconSpriteId]);
    if (sDexNavSearchDataPtr->exclamationSpriteId != MAX_SPRITES)
        DestroySprite(&gSprites[sDexNavSearchDataPtr->exclamationSpriteId]);
    
    for (i = 0; i < NELEMS(sDexNavSearchDataPtr->starSpriteIds); i++)
    {
        if (sDexNavSearchDataPtr->starSpriteIds[i] != MAX_SPRITES)
            DestroySprite(&gSprites[sDexNavSearchDataPtr->starSpriteIds[i]]);
    }
    
    FreeSpriteTilesByTag(HELD_ITEM_TAG);
    FreeSpriteTilesByTag(OWNED_ICON_TAG);
    FreeSpriteTilesByTag(HIDDEN_SEARCH_TAG);
    FreeSpriteTilesByTag(HIDDEN_MON_ICON_TAG);
    FreeSpriteTilesByTag(LIT_STAR_TILE_TAG);
    FreeSpritePaletteByTag(HELD_ITEM_TAG);
    SafeFreeMonIconPalette(sDexNavSearchDataPtr->species);
    
    // remove window
    ClearStdWindowAndFrameToTransparent(sDexNavSearchDataPtr->windowId, FALSE);
    CopyWindowToVram(sDexNavSearchDataPtr->windowId, 3);
    RemoveWindow(sDexNavSearchDataPtr->windowId);
}


//////////////////////
////DEXNAV SEARCH/////
//////////////////////
static u8 GetPlayerDistance(s16 x, s16 y)
{
    u16 deltaX = abs(x - (gSaveBlock1Ptr->pos.x + 7));
    u16 deltaY = abs(y - (gSaveBlock1Ptr->pos.y + 7));
    return deltaX + deltaY;
}

static void DexNavProximityUpdate(void)
{
    sDexNavSearchDataPtr->proximity = GetPlayerDistance(sDexNavSearchDataPtr->tileX, sDexNavSearchDataPtr->tileY);
}

//Pick a specific tile based on environment
static bool8 DexNavPickTile(u8 environment, u8 areaX, u8 areaY, bool8 smallScan)
{
    // area of map to cover starting from camera position {-7, -7}
    s16 topX = gSaveBlock1Ptr->pos.x - SCANSTART_X + (smallScan * 5);
    s16 topY = gSaveBlock1Ptr->pos.y - SCANSTART_Y + (smallScan * 5);
    s16 botX = topX + areaX;
    s16 botY = topY + areaY;
    u8 i;
    bool8 nextIter;
    u8 scale = 0;
    u8 weight = 0;
    u8 currMapType = GetCurrentMapType();
    u8 tileBehaviour;
    u8 tileBuffer = 2;
    
    // loop through every tile in area and evaluate
    while (topY < botY)
    {
        while (topX < botX)
        {
            tileBehaviour = MapGridGetMetatileBehaviorAt(topX, topY);
            
            //gSpecialVar_0x8005 = tileBehaviour;
            
            //Check for objects
            nextIter = FALSE;
            if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE))
                tileBuffer = SNEAKING_PROXIMITY + 3;
            else if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH))
                tileBuffer = SNEAKING_PROXIMITY + 1;
            
            if (GetPlayerDistance(topX, topY) <= tileBuffer)
            {
                // tile too close to player
                topX++;
                continue;
            }
            
            for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
            {
                if (gObjectEvents[i].currentCoords.x == topX && gObjectEvents[i].currentCoords.y == topY)
                {
                    // cannot be on a tile where an object exists
                    nextIter = TRUE;
                    break;
                }
            }
            
            if (nextIter)
            {
                topX++;
                continue;
            }
            
            switch (environment)
            {
            case ENCOUNTER_TYPE_LAND:
                if (MetatileBehavior_IsLandWildEncounter(tileBehaviour))
                {
                    if (currMapType == MAP_TYPE_UNDERGROUND)
                    { // inside (cave)
                        if (IsElevationMismatchAt(gObjectEvents[gPlayerAvatar.spriteId].currentElevation, topX, topY))
                            break; //occurs at same z coord
                        
                        scale = 440 - (smallScan * 200) - (GetPlayerDistance(topX, topY) / 2)  - (2 * (topX + topY));
                        weight = ((Random() % scale) < 1) && !MapGridGetCollisionAt(topX, topY);
                    }
                    else
                    { // outdoors: grass
                        scale = 100 - (GetPlayerDistance(topX, topY) * 2);
                        weight = (Random() % scale <= 5) && !MapGridGetCollisionAt(topX, topY);
                    }
                }
                break;
            case ENCOUNTER_TYPE_WATER:
                if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehaviour))
                {
                    u8 scale = 320 - (smallScan * 200) - (GetPlayerDistance(topX, topY) / 2);
                    if (IsElevationMismatchAt(gObjectEvents[gPlayerAvatar.spriteId].currentElevation, topX, topY))
                        break;

                    weight = (Random() % scale <= 1) && !MapGridGetCollisionAt(topX, topY);
                }
                break;
            default:
                break;
            }
            
            if (weight > 0)
            {
                sDexNavSearchDataPtr->tileX = topX;
                sDexNavSearchDataPtr->tileY = topY;
                return TRUE;
            }
            
            topX++;
        }
        
        topY++;
        topX = gSaveBlock1Ptr->pos.x - SCANSTART_X + (smallScan * 5);
    }

    return FALSE;
}


static bool8 TryStartHiddenMonFieldEffect(u8 environment, u8 xSize, u8 ySize, bool8 smallScan)
{
    u8 currMapType = GetCurrentMapType();
    u8 fldEffId = 0;
    
    if (DexNavPickTile(environment, xSize, ySize, smallScan))
    {
        u8 metatileBehaviour = MapGridGetMetatileBehaviorAt(sDexNavSearchDataPtr->tileX, sDexNavSearchDataPtr->tileY);

        switch (environment)
        {
        case ENCOUNTER_TYPE_LAND:
            if (currMapType == MAP_TYPE_UNDERGROUND)
            {
                fldEffId = FLDEFF_CAVE_DUST;
            }
            else if (IsMapTypeIndoors(currMapType))
            {
                if (MetatileBehavior_IsTallGrass(metatileBehaviour)) //Grass in cave
                    fldEffId = FLDEFF_SHAKING_GRASS;
                else if (MetatileBehavior_IsLongGrass(metatileBehaviour)) //Really tall grass
                    fldEffId = FLDEFF_SHAKING_LONG_GRASS;
                else if (MetatileBehavior_IsSandOrDeepSand(metatileBehaviour))
                    fldEffId = FLDEFF_SAND_HOLE;
                else
                    fldEffId = FLDEFF_CAVE_DUST;
            }
            else //outdoor, underwater
            {
                if (MetatileBehavior_IsTallGrass(metatileBehaviour)) //Regular grass
                    fldEffId = FLDEFF_SHAKING_GRASS;
                else if (MetatileBehavior_IsLongGrass(metatileBehaviour)) //Really tall grass
                    fldEffId = FLDEFF_SHAKING_LONG_GRASS;
                else if (MetatileBehavior_IsSandOrDeepSand(metatileBehaviour)) //Desert Sand
                    fldEffId = FLDEFF_SAND_HOLE;
                else if (MetatileBehavior_IsMountain(metatileBehaviour)) //Rough Terrain
                    fldEffId = FLDEFF_CAVE_DUST;
                else
                    fldEffId = FLDEFF_BERRY_TREE_GROWTH_SPARKLE; //default
            }
            break;
        case ENCOUNTER_TYPE_WATER:
            fldEffId = FLDEFF_WATER_SURFACING;
            break;
        default:
            return FALSE;
        }
        
        if (fldEffId != 0)
        {
            gFieldEffectArguments[0] = sDexNavSearchDataPtr->tileX;
            gFieldEffectArguments[1] = sDexNavSearchDataPtr->tileY;
            gFieldEffectArguments[2] = 0xFF; // subpriority
            gFieldEffectArguments[3] = 2;   //priority
            sDexNavSearchDataPtr->fldEffSpriteId = FieldEffectStart(fldEffId);
            if (sDexNavSearchDataPtr->fldEffSpriteId == MAX_SPRITES)
                return FALSE;
            
            sDexNavSearchDataPtr->fldEffId = fldEffId;
            return TRUE;
        }
    }

    return FALSE;
}

static void LoadSearchIconData(void)
{
    // palettes clash with mon icon, so must load manually
    //LoadCompressedSpriteSheetUsingHeap(&sSightSpriteSheet);   //eye replaced with arrow
    LoadCompressedSpriteSheetUsingHeap(&sOwnedIconSpriteSheet);
    LoadCompressedSpriteSheetUsingHeap(&sHiddenMonIconSpriteSheet);
}

#define tProximity          data[0]
#define tFrameCount         data[1]
#define tSpecies            data[2]
#define tEnvironment        data[3]
#define tRevealed           data[4]
static void Task_SetUpDexNavSearch(u8 taskId)
{
    // init sprites
    sDexNavSearchDataPtr->iconSpriteId = MAX_SPRITES;
    sDexNavSearchDataPtr->itemSpriteId = MAX_SPRITES;
    sDexNavSearchDataPtr->eyeSpriteId = MAX_SPRITES;
    sDexNavSearchDataPtr->starSpriteIds[0] = MAX_SPRITES;
    sDexNavSearchDataPtr->starSpriteIds[1] = MAX_SPRITES;
    sDexNavSearchDataPtr->starSpriteIds[2] = MAX_SPRITES;
    sDexNavSearchDataPtr->ownedIconSpriteId = MAX_SPRITES;
    sDexNavSearchDataPtr->exclamationSpriteId = MAX_SPRITES;    
    
    DexNavProximityUpdate();
    
    LoadSearchIconData();
    if (sDexNavSearchDataPtr->hiddenSearch)
    {
        DexNavDrawHiddenIcons();
    }
    else
    {
        DexNavDrawIcons();
        DexNavUpdateSearchWindow(sDexNavSearchDataPtr->proximity, 0);
    }
    
    FlagSet(FLAG_SYS_DEXNAV_SEARCH);
    gPlayerAvatar.creeping = TRUE;  //initialize as true in case mon appears beside you
    gTasks[taskId].tProximity = gSprites[gPlayerAvatar.spriteId].x;
    gTasks[taskId].tFrameCount = 0;
    gTasks[taskId].func = Task_DexNavSearch;
}

static void Task_InitDexNavSearch(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    u16 species = task->tSpecies;
    u8 environment = task->tEnvironment;
    
    sDexNavSearchDataPtr = AllocZeroed(sizeof(struct DexNavSearch));
    
    // assign non-objects to struct
    sDexNavSearchDataPtr->species = species;
    sDexNavSearchDataPtr->environment = environment;  //updated in DexNavTryGenerateMonLevel if hidden mon
    sDexNavSearchDataPtr->isHiddenMon = (environment == ENCOUNTER_TYPE_HIDDEN) ? TRUE : FALSE;
    sDexNavSearchDataPtr->monLevel = DexNavTryGenerateMonLevel(species, environment);
    
    if (GetFlashLevel() > 0)
    {
        Free(sDexNavSearchDataPtr);
        FreeMonIconPalettes();
        ScriptContext_SetupScript(EventScript_TooDark);
        DestroyTask(taskId);
        return;
    }

    if (GetCurrentWeather() == WEATHER_SNOW)
    {
        Free(sDexNavSearchDataPtr);
        FreeMonIconPalettes();
        ScriptContext_SetupScript(EventScript_SnowInterference);
        DestroyTask(taskId);
        return;
    }

    if (sDexNavSearchDataPtr->monLevel == MON_LEVEL_NONEXISTENT || !TryStartHiddenMonFieldEffect(sDexNavSearchDataPtr->environment, 12, 12, FALSE))
    {
        Free(sDexNavSearchDataPtr);
        FreeMonIconPalettes();
        ScriptContext_SetupScript(EventScript_NotFoundNearby);
        DestroyTask(taskId);
        return;
    }
    
    sDexNavSearchDataPtr->hiddenSearch = FALSE;
    task->tRevealed = TRUE; //search window revealed
    task->func = Task_SetUpDexNavSearch;
}

static void DexNavUpdateDirectionArrow(void)
{
    u16 tileX = sDexNavSearchDataPtr->tileX;
    u16 tileY = sDexNavSearchDataPtr->tileY;
    u16 playerX = gSaveBlock1Ptr->pos.x + 7;
    u16 playerY = gSaveBlock1Ptr->pos.y + 7;
    u16 deltaX = abs(tileX - playerX);
    u16 deltaY = abs(tileY - playerY);
    const u8 *str;
    u8 windowId = sDexNavSearchDataPtr->windowId;
    
    FillWindowPixelRect(windowId, PIXEL_FILL(1), SEARCH_ARROW_X, SEARCH_ARROW_Y, 12, 12);
    if (deltaX <= 1 && deltaY <= 1)
    {
        str = gText_EmptyString2;
    }
    else if (deltaX > deltaY)
    {
        if (playerX > tileX)
            str = sText_ArrowLeft;  //player to right
        else
            str = sText_ArrowRight; //player to left
    }
    else //greater Y diff
    {
        if (playerY > tileY)
            str = sText_ArrowUp;    //player below
        else
            str = sText_ArrowDown;  //player above
    }
    
    AddTextPrinterParameterized3(windowId, 1, SEARCH_ARROW_X, SEARCH_ARROW_Y, sSearchFontColor, TEXT_SKIP_DRAW, str);
    CopyWindowToVram(windowId, 2);
}

static void DexNavDrawIcons(void)
{
    u16 species = sDexNavSearchDataPtr->species;
    
    // init sprite ids
    /*sDexNavSearchDataPtr->iconSpriteId = 0xFF;
    sDexNavSearchDataPtr->itemSpriteId = 0xFF;
    for (i = 0; i < NELEMS(sDexNavSearchDataPtr->starSpriteIds); i++)
        sDexNavSearchDataPtr->starSpriteIds[i] = 0xFF;*/
    
    DrawSearchWindow(species);
    DrawDexNavSearchMonIcon(species, &sDexNavSearchDataPtr->iconSpriteId, GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT));
    DexNavUpdateDirectionArrow();
    //DexNavDrawSight(sDexNavSearchDataPtr->proximity, &sDexNavSearchDataPtr->eyeSpriteId);
}

/////////////////////
//// SEARCH TASK ////
/////////////////////
bool8 TryStartDexnavSearch(void)
{
    u8 taskId;
    u16 val = VarGet(VAR_DEXNAV_SPECIES);
    
    if (FlagGet(FLAG_SYS_DEXNAV_SEARCH) || (val & MASK_SPECIES) == SPECIES_NONE)
        return FALSE;
    
    HideMapNamePopUpWindow();
    ChangeBgY_ScreenOff(0, 0, 0);
    taskId = CreateTask(Task_InitDexNavSearch, 0);
    gTasks[taskId].tSpecies = val & MASK_SPECIES;
    gTasks[taskId].tEnvironment = val >> 14;
    PlaySE(SE_DEX_SEARCH);
    return FALSE;   //we dont actually want to enable the script context
}

void EndDexNavSearch(u8 taskId)
{
    FlagClear(FLAG_SYS_DEXNAV_SEARCH);
    DestroyTask(taskId);
    RemoveDexNavWindowAndGfx();
    FieldEffectStop(&gSprites[sDexNavSearchDataPtr->fldEffSpriteId], sDexNavSearchDataPtr->fldEffId);
    Free(sDexNavSearchDataPtr);
}

static void EndDexNavSearchSetupScript(const u8 *script, u8 taskId)
{
    EndDexNavSearch(taskId);
    ScriptContext_SetupScript(script);
}

static u8 GetMovementProximityBySearchLevel(void)
{
    return 2;
}

static void Task_RevealHiddenMon(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    u16 species = sDexNavSearchDataPtr->species;
    
    // remove owned icon if it exists
    if (sDexNavSearchDataPtr->ownedIconSpriteId != MAX_SPRITES)
    {
        DestroySprite(&gSprites[sDexNavSearchDataPtr->ownedIconSpriteId]);
        sDexNavSearchDataPtr->ownedIconSpriteId = MAX_SPRITES;
    }
    
    // remove exclamation if it exists
    if (sDexNavSearchDataPtr->exclamationSpriteId != MAX_SPRITES)
    {
        DestroySprite(&gSprites[sDexNavSearchDataPtr->exclamationSpriteId]);
        sDexNavSearchDataPtr->exclamationSpriteId = MAX_SPRITES;
    }
    
    
    if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_SEEN))
    {
        u8 index;
        
        //if not seen, hide name and whiteout mon
        DrawSearchWindow(species);
        DrawDexNavSearchMonIcon(species, &sDexNavSearchDataPtr->iconSpriteId, FALSE);
        // whiteout icon
        index = IndexOfSpritePaletteTag(gSprites[sDexNavSearchDataPtr->iconSpriteId].template->paletteTag);
        CpuCopy16(&gPlttBufferUnfaded[0x100 + index * 16], sDexNavSearchDataPtr->palBuffer, 32);
        TintPalette_CustomTone(sDexNavSearchDataPtr->palBuffer, 16, 510, 510, 510);
        LoadPalette(sDexNavSearchDataPtr->palBuffer, 0x100 + index * 16, 32);
    }
    else
    {
        DrawSearchWindow(species);
        DrawDexNavSearchMonIcon(species, &sDexNavSearchDataPtr->iconSpriteId, GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT));
    }
    
    DexNavUpdateDirectionArrow();
    task->func = Task_DexNavSearch;
    task->tFrameCount = 0;  //restart search clock
}

static void Task_DexNavSearch(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    
    if (sDexNavSearchDataPtr->proximity > MAX_PROXIMITY)
    { // out of range
        if (sDexNavSearchDataPtr->hiddenSearch && !task->tRevealed)
            EndDexNavSearch(taskId);
        else
            EndDexNavSearchSetupScript(EventScript_LostSignal, taskId);
        return;
    }
    
    if (sDexNavSearchDataPtr->proximity <= CREEPING_PROXIMITY && !gPlayerAvatar.creeping && task->tFrameCount > 60)
    { //should be creeping but player walks normally
        if (sDexNavSearchDataPtr->hiddenSearch && !task->tRevealed)
            EndDexNavSearch(taskId);
        else
            EndDexNavSearchSetupScript(EventScript_MovedTooFast, taskId);
        return;
    }
    
    if (sDexNavSearchDataPtr->proximity <= SNEAKING_PROXIMITY && TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH | PLAYER_AVATAR_FLAG_BIKE)) 
    { // running/biking too close
        //always do event script, even if player hasn't revealed a hidden mon. It's assumed they would be creeping towards it
        EndDexNavSearchSetupScript(EventScript_MovedTooFast, taskId);
        return;
    }
    
    if (ArePlayerFieldControlsLocked() == TRUE)
    { // check if script just executed
        EndDexNavSearch(taskId);
        return;
    }
    
    if (gTasks[taskId].tFrameCount > DEXNAV_TIMEOUT * 60)
    { // player took too long
        if (sDexNavSearchDataPtr->hiddenSearch && !task->tRevealed)
            EndDexNavSearch(taskId);
        else
            EndDexNavSearchSetupScript(EventScript_PokemonGotAway, taskId);
        return;
    }
    
    if (sDexNavSearchDataPtr->proximity < 1)
    {
        CreateDexNavWildMon(sDexNavSearchDataPtr->species, sDexNavSearchDataPtr->monLevel);
        
        FlagClear(FLAG_SYS_DEXNAV_SEARCH);
        gDexnavBattle = TRUE;        
        ScriptContext_SetupScript(EventScript_StartDexNavBattle);
        Free(sDexNavSearchDataPtr);
        DestroyTask(taskId);
        return;
    }
    
    if (sDexNavSearchDataPtr->hiddenSearch && !task->tRevealed &&
        (JOY_NEW(R_BUTTON) || (sDexNavSearchDataPtr->proximity < CREEPING_PROXIMITY)))
    {
        PlaySE(SE_DEX_SEARCH);
        ClearStdWindowAndFrameToTransparent(sDexNavSearchDataPtr->windowId, FALSE);
        CopyWindowToVram(sDexNavSearchDataPtr->windowId, 3);
        RemoveWindow(sDexNavSearchDataPtr->windowId);
        DestroySprite(&gSprites[sDexNavSearchDataPtr->iconSpriteId]);
        task->tRevealed = TRUE; //regular dexnav search
        //sDexNavSearchDataPtr->hiddenSearch = FALSE; //now its a regular dexnav search
        task->func = Task_RevealHiddenMon;
        return;
    }

    //Caves and water the pokemon moves around
    if ((sDexNavSearchDataPtr->environment == ENCOUNTER_TYPE_WATER || GetCurrentMapType() == MAP_TYPE_UNDERGROUND)
        && sDexNavSearchDataPtr->proximity < GetMovementProximityBySearchLevel() && sDexNavSearchDataPtr->movementCount < 2
        && task->tRevealed)
    {   
        FieldEffectStop(&gSprites[sDexNavSearchDataPtr->fldEffSpriteId], sDexNavSearchDataPtr->fldEffId);
        while (1) {
            if (TryStartHiddenMonFieldEffect(sDexNavSearchDataPtr->environment, 10, 10, TRUE))
                break;
        }
        
        sDexNavSearchDataPtr->movementCount++;
    }

    DexNavProximityUpdate();
    if (task->tProximity != sDexNavSearchDataPtr->proximity)
    {
        //player has moved
        if (task->tRevealed)    //update search window info only if hidden mon has been revealed (always true for search mode)
            DexNavUpdateSearchWindow(sDexNavSearchDataPtr->proximity, 0);
        
        task->tProximity = sDexNavSearchDataPtr->proximity;
    }
    
    task->tFrameCount++;
}

static void DexNavUpdateSearchWindow(u8 proximity, u8 searchLevel)
{
    FillWindowPixelBuffer(sDexNavSearchDataPtr->windowId, PIXEL_FILL(1));   //clear window
    AddSearchWindowText(sDexNavSearchDataPtr->species, proximity, searchLevel);
    
    DexNavUpdateDirectionArrow();
    
    //init hidden sprites
    if (sDexNavSearchDataPtr->itemSpriteId != MAX_SPRITES)
        gSprites[sDexNavSearchDataPtr->itemSpriteId].invisible = TRUE;
    if (sDexNavSearchDataPtr->starSpriteIds[0] != MAX_SPRITES)
        gSprites[sDexNavSearchDataPtr->starSpriteIds[0]].invisible = TRUE;
    if (sDexNavSearchDataPtr->starSpriteIds[1] != MAX_SPRITES)
        gSprites[sDexNavSearchDataPtr->starSpriteIds[1]].invisible = TRUE;
    if (sDexNavSearchDataPtr->starSpriteIds[2] != MAX_SPRITES)
        gSprites[sDexNavSearchDataPtr->starSpriteIds[2]].invisible = TRUE;
}

//////////////////////////////
//// DEXNAV MON GENERATOR ////
//////////////////////////////
static void CreateDexNavWildMon(u16 species, u8 level)
{
    CreateWildMon(species, level);
}

// gets a random level of the species based on map data.
//if it was a hidden encounter, updates the environment it is to be found from the wildheader encounterRate
static u8 DexNavTryGenerateMonLevel(u16 species, u8 environment)
{
    return GetEncounterLevelFromMapData(species, environment);
}

static u8 GetEncounterLevelFromMapData(u16 species, u8 environment)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();
    const struct WildPokemonInfo *landMonsInfo = gWildMonHeaders[headerId].landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;
    const struct WildPokemonInfo *specialMonsInfo = gWildMonHeaders[headerId].specialMonsInfo;
    u8 min = 100;
    u8 max = 0;
    u8 rand;
    u8 range;
    u8 i;
    
    switch (environment)
    {
    case ENCOUNTER_TYPE_LAND:    // grass
        if (landMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT; //Hidden pokemon should only appear on walkable tiles or surf tiles

        for (i = 0; i < LAND_WILD_COUNT; i++)
        {
            if (landMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < landMonsInfo->wildPokemon[i].minLevel) ? min : landMonsInfo->wildPokemon[i].minLevel;
                max = (max > landMonsInfo->wildPokemon[i].maxLevel) ? max : landMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        break;
    case ENCOUNTER_TYPE_WATER:    //water
        if (waterMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT; //Hidden pokemon should only appear on walkable tiles or surf tiles

        for (i = 0; i < WATER_WILD_COUNT; i++)
        {
            if (waterMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < waterMonsInfo->wildPokemon[i].minLevel) ? min : waterMonsInfo->wildPokemon[i].minLevel;
                max = (max > waterMonsInfo->wildPokemon[i].maxLevel) ? max : waterMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        break;
    case ENCOUNTER_TYPE_HIDDEN:
        if (specialMonsInfo == NULL)
            return MON_LEVEL_NONEXISTENT;
        
        for (i = 0; i < SPECIAL_WILD_COUNT; i++)
        {
            if (specialMonsInfo->wildPokemon[i].species == species)
            {
                min = (min < specialMonsInfo->wildPokemon[i].minLevel) ? min : specialMonsInfo->wildPokemon[i].minLevel;
                max = (max > specialMonsInfo->wildPokemon[i].maxLevel) ? max : specialMonsInfo->wildPokemon[i].maxLevel;
            }
        }
        
        // use encounter rate to signify is hidden pokemon are on land or in water
        if (specialMonsInfo->encounterRate == 1)
            sDexNavSearchDataPtr->environment = ENCOUNTER_TYPE_WATER;
        else
            sDexNavSearchDataPtr->environment = ENCOUNTER_TYPE_LAND;
        break;
    default:
        return MON_LEVEL_NONEXISTENT;
    }

    if (max == 0)
        return MON_LEVEL_NONEXISTENT;

    range = max - min + 1;
    rand = Random() % range;
    return min + rand;
}


///////////
/// GUI ///
///////////
static const struct BgTemplate sDexNavMenuBgTemplates[2] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    }, 
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 1
    }
};

static void DexNav_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void DexNav_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static bool8 DexNav_InitBgs(void)
{
    ResetVramOamAndBgCntRegs();
    ResetAllBgsCoordinates();
    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;
    
    memset(sBg1TilemapBuffer, 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sDexNavMenuBgTemplates, NELEMS(sDexNavMenuBgTemplates));
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT , 0);
    ShowBg(0);
    ShowBg(1);
    return TRUE;
}

static bool8 DexNav_LoadGraphics(void)
{
    switch (sDexNavUiDataPtr->state)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sDexNavGuiTiles, 0, 0, 0);
        sDexNavUiDataPtr->state++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sDexNavGuiTilemap, sBg1TilemapBuffer);
            sDexNavUiDataPtr->state++;
        }
        break;
    case 2:
        LoadPalette(sDexNavGuiPal, 0, 32);
        sDexNavUiDataPtr->state++;
        break;
    default:
        sDexNavUiDataPtr->state = 0;
        return TRUE;
    }
    
    return FALSE;
}

static void UpdateCursorPosition(void)
{
    u16 x, y;
    
    switch (sDexNavUiDataPtr->cursorRow)
    {
    case ROW_WATER:
        x = ROW_WATER_ICON_X + (24 * sDexNavUiDataPtr->cursorCol);
        y = ROW_WATER_ICON_Y;
        sDexNavUiDataPtr->environment = ENCOUNTER_TYPE_WATER;
        break;
    case ROW_LAND_TOP: //land 1
        x = ROW_LAND_ICON_X + (24 * sDexNavUiDataPtr->cursorCol);
        y = ROW_LAND_TOP_ICON_Y;
        sDexNavUiDataPtr->environment = ENCOUNTER_TYPE_LAND;
        break;
    case ROW_LAND_BOT: //land 2
        x = ROW_LAND_ICON_X + (24 * sDexNavUiDataPtr->cursorCol);
        y = ROW_LAND_BOT_ICON_Y;
        sDexNavUiDataPtr->environment = ENCOUNTER_TYPE_LAND;
        break;
    case ROW_HIDDEN:
        x = ROW_HIDDEN_ICON_X + (24 * sDexNavUiDataPtr->cursorCol);
        y = ROW_HIDDEN_ICON_Y;
        sDexNavUiDataPtr->environment = ENCOUNTER_TYPE_HIDDEN;
        break;
    default:
        return;
    }
    
    gSprites[sDexNavUiDataPtr->cursorSpriteId].x = x;
    gSprites[sDexNavUiDataPtr->cursorSpriteId].y = y;
    
    PrintCurrentSpeciesInfo();
}

static void CreateSelectionCursor(void)
{
    u8 spriteId;
    struct CompressedSpriteSheet spriteSheet;
    
    spriteSheet.data = sSelectionCursorGfx;
    spriteSheet.size = 0x200;
    spriteSheet.tag = SELECTION_CURSOR_TAG;
    LoadCompressedSpriteSheet(&spriteSheet);
    
    LoadPalette(sSelectionCursorPal, (16 * sSelectionCursorOam.paletteNum) + 0x100, 32);
    
    spriteId = CreateSprite(&sSelectionCursorSpriteTemplate, 12, 32, 0);  
    //gSprites[spriteId].data[1] = -1;
    
    sDexNavUiDataPtr->cursorSpriteId = spriteId;
    UpdateCursorPosition();
}

static void CreateNoDataIcon(s16 x, s16 y)
{
    CreateSprite(&sNoDataIconTemplate, x, y, 0);
}

static bool8 CapturedAllLandMons(u16 headerId)
{
    u16 i, species;
    int count = 0;
    const struct WildPokemonInfo* landMonsInfo = gWildMonHeaders[headerId].landMonsInfo;
        
    if (landMonsInfo != NULL)
    {        
        for (i = 0; i < LAND_WILD_COUNT; ++i)
        {
            species = landMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE)
            {
                if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
                    break;
                
                count++;
            }
        }

        if (i >= LAND_WILD_COUNT && count > 0) //All land mons caught
            return TRUE;
    }
    else
    {
        return TRUE;    //technically, no mon data means you caught them all
    }

    return FALSE;
}

//Checks if all Pokemon that can be encountered while surfing have been capture
static bool8 CapturedAllWaterMons(u16 headerId)
{
    u32 i;
    u16 species;
    u8 count = 0;
    const struct WildPokemonInfo* waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;

    if (waterMonsInfo != NULL)
    {
        for (i = 0; i < WATER_WILD_COUNT; ++i)
        {
            species = waterMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE)
            {
                count++;
                if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
                    break;
            }
        }

        if (i >= WATER_WILD_COUNT && count > 0)
            return TRUE;
    }
    else
    {
        return TRUE;    //technically, no mon data means you caught them all
    }

    return FALSE;
}

static bool8 CapturedAllHiddenMons(u16 headerId)
{
    u32 i;
    u16 species;
    u8 count = 0;
    const struct WildPokemonInfo* specialMonsInfo = gWildMonHeaders[headerId].specialMonsInfo;
    
    if (specialMonsInfo != NULL)
    {
        for (i = 0; i < SPECIAL_WILD_COUNT; ++i)
        {
            species = specialMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE)
            {
                count++;
                if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
                    break;
            }
        }

        if (i >= SPECIAL_WILD_COUNT && count > 0)
            return TRUE;
    }
    else
    {
        return TRUE;    //technically, no mon data means you caught them all
    }

    return FALSE;
}

static void DexNavLoadCapturedAllSymbols(void)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();
    
    LoadCompressedSpriteSheetUsingHeap(&sCapturedAllPokemonSpriteSheet);

    if (CapturedAllLandMons(headerId))
        CreateSprite(&sCaptureAllMonsSpriteTemplate, 152, 58, 0);

    if (CapturedAllWaterMons(headerId))
        CreateSprite(&sCaptureAllMonsSpriteTemplate, 145, 17, 0);
    
    if (CapturedAllHiddenMons(headerId))
        CreateSprite(&sCaptureAllMonsSpriteTemplate, 145, 123, 0);
}

//#define WIN_DETAILS_TILE        0x3a3
static void DexNav_InitWindows(void)
{
    InitWindows(sDexNavGuiWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
}

static void DexNavGuiFreeResources(void)
{
    Free(sDexNavUiDataPtr);
    Free(sBg1TilemapBuffer);
    FreeAllWindowBuffers();
}

static void CB1_InitDexNavSearch(void)
{
    u8 taskId;
    
    if (!gPaletteFade.active && !ArePlayerFieldControlsLocked() && gMain.callback2 == CB2_Overworld)
    {
        SetMainCallback1(CB1_Overworld);
        taskId = CreateTask(Task_InitDexNavSearch, 0);
        gTasks[taskId].tSpecies = gSpecialVar_0x8000;
        gTasks[taskId].tEnvironment = gSpecialVar_0x8001;
    }
}

static void CB1_DexNavSearchCallback(void)
{
    CB1_InitDexNavSearch();
}

static void Task_DexNavExitAndSearch(u8 taskId)
{
    DexNavGuiFreeResources();
    DestroyTask(taskId);
    SetMainCallback1(CB1_DexNavSearchCallback);
    SetMainCallback2(CB2_ReturnToField);
}

static void Task_DexNavFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sDexNavUiDataPtr->savedCallback);
        DexNavGuiFreeResources();
        DestroyTask(taskId);
    }
}

static void DexNavFadeAndExit(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_DexNavFadeAndExit, 0);
    SetVBlankCallback(DexNav_VBlankCB);
    SetMainCallback2(DexNav_MainCB);
}

static bool8 SpeciesInArray(u16 species, u8 section)
{
    u32 i;
    u16 dexNum = SpeciesToNationalPokedexNum(species);
    
    switch (section)
    {
    case 0: //land
        for (i = 0; i < LAND_WILD_COUNT; i++)
        {
            if (SpeciesToNationalPokedexNum(sDexNavUiDataPtr->landSpecies[i]) == dexNum)
                return TRUE;
        }
        break;
    case 1: //water
        for (i = 0; i < WATER_WILD_COUNT; i++)
        {
            if (SpeciesToNationalPokedexNum(sDexNavUiDataPtr->waterSpecies[i]) == dexNum)
                return TRUE;
        }
        break;
    case 2: //hidden
        for (i = 0; i < SPECIAL_WILD_COUNT; i++)
        {
            if (SpeciesToNationalPokedexNum(sDexNavUiDataPtr->hiddenSpecies[i]) == dexNum)
                return TRUE;
        }
        break;
    default:
        break;
    }
    
    return FALSE;
}

// get unique wild encounters on current map
static void DexNavLoadEncounterData(void)
{
    u8 grassIndex = 0;
    u8 waterIndex = 0;
    u8 hiddenIndex = 0;
    u16 species;
    u32 i;
    u16 headerId = GetCurrentMapWildMonHeaderId();
    const struct WildPokemonInfo* landMonsInfo = gWildMonHeaders[headerId].landMonsInfo;
    const struct WildPokemonInfo* waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;
    const struct WildPokemonInfo* specialMonsInfo = gWildMonHeaders[headerId].specialMonsInfo;
    
    // nop struct data
    memset(sDexNavUiDataPtr->landSpecies, 0, sizeof(sDexNavUiDataPtr->landSpecies));
    memset(sDexNavUiDataPtr->waterSpecies, 0, sizeof(sDexNavUiDataPtr->waterSpecies));
    memset(sDexNavUiDataPtr->hiddenSpecies, 0, sizeof(sDexNavUiDataPtr->hiddenSpecies));
    
    // land mons
    if (landMonsInfo != NULL && landMonsInfo->encounterRate != 0)
    {
        for (i = 0; i < LAND_WILD_COUNT; i++)
        {
            species = landMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE && !SpeciesInArray(species, 0))
                sDexNavUiDataPtr->landSpecies[grassIndex++] = landMonsInfo->wildPokemon[i].species;
        }
    }

    // water mons
    if (waterMonsInfo != NULL && waterMonsInfo->encounterRate != 0)
    {
        for (i = 0; i < WATER_WILD_COUNT; i++)
        {
            species = waterMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE && !SpeciesInArray(species, 1))
                sDexNavUiDataPtr->waterSpecies[waterIndex++] = waterMonsInfo->wildPokemon[i].species;
        }
    }
    
    // hidden mons
    if (specialMonsInfo != NULL) // no encounter rate check since 0 means land, 1 means water encounters
    {
        for (i = 0; i < SPECIAL_WILD_COUNT; i++)
        {
            species = specialMonsInfo->wildPokemon[i].species;
            if (species != SPECIES_NONE && !SpeciesInArray(species, 2))
                sDexNavUiDataPtr->hiddenSpecies[hiddenIndex++] = specialMonsInfo->wildPokemon[i].species;
        }
    }
}

static void TryDrawIconInSlot(u16 species, s16 x, s16 y)
{
    if (species == SPECIES_NONE || species > NUM_SPECIES)
        CreateNoDataIcon(x, y);   //'X' in slot
    else if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_SEEN) && !FlagGet(FLAG_SETTINGS_FULL_INFO))
        CreateMonIcon(SPECIES_NONE, SpriteCB_MonIcon, x, y, 0, 0xFFFFFFFF); //question mark
    else
        CreateMonIcon(species, SpriteCB_MonIcon, x, y, 0, 0xFFFFFFFF);
}

static void DrawSpeciesIcons(void)
{
    s16 x, y;
    u32 i;
    u16 species;
    
    LoadCompressedSpriteSheetUsingHeap(&sNoDataIconSpriteSheet);
    for (i = 0; i < LAND_WILD_COUNT; i++)
    {
        species = sDexNavUiDataPtr->landSpecies[i];
        x = ROW_LAND_ICON_X + (24 * (i % 6));
        y = ROW_LAND_TOP_ICON_Y + (i > 5 ? 28 : 0);
        TryDrawIconInSlot(species, x, y);
    }
    
    for (i = 0; i < WATER_WILD_COUNT; i++)
    {
        species = sDexNavUiDataPtr->waterSpecies[i];
        x = ROW_WATER_ICON_X + 24 * i;
        y = ROW_WATER_ICON_Y;
        TryDrawIconInSlot(species, x, y);
    }
    
    for (i = 0; i < SPECIAL_WILD_COUNT; i++)
    {
        species = sDexNavUiDataPtr->hiddenSpecies[i];
        x = ROW_HIDDEN_ICON_X + 24 * i;
        y = ROW_HIDDEN_ICON_Y;
        if (FlagGet(FLAG_SYS_DETECTOR_MODE))
            TryDrawIconInSlot(species, x, y);
       else if (species == SPECIES_NONE || species > NUM_SPECIES)
            CreateNoDataIcon(x, y);
        else
            CreateMonIcon(SPECIES_NONE, SpriteCB_MonIcon, x, y, 0, 0xFFFFFFFF); //question mark if detector mode inactive
    }
}

static u16 DexNavGetSpecies(void)
{
    u16 species;
    
    switch (sDexNavUiDataPtr->cursorRow)
    {
    case ROW_WATER:
        species = sDexNavUiDataPtr->waterSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    case ROW_LAND_TOP:
        species = sDexNavUiDataPtr->landSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    case ROW_LAND_BOT:
        species = sDexNavUiDataPtr->landSpecies[sDexNavUiDataPtr->cursorCol + COL_LAND_COUNT];
        break;
    case ROW_HIDDEN:
        if (!FlagGet(FLAG_SYS_DETECTOR_MODE))
            species = SPECIES_NONE;
        else
            species = sDexNavUiDataPtr->hiddenSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    default:
        return SPECIES_NONE;
    }
    
    if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_SEEN))
        return SPECIES_NONE;
    
    return species;
}

static void SetSpriteInvisibility(u8 spriteArrayId, bool8 invisible)
{
    gSprites[sDexNavUiDataPtr->typeIconSpriteIds[spriteArrayId]].invisible = invisible;
}

// different from pokemon_summary_screen
#define TYPE_ICON_PAL_NUM_0     13
#define TYPE_ICON_PAL_NUM_1     14
#define TYPE_ICON_PAL_NUM_2     15
static const u8 sMoveTypeToOamPaletteNum[NUMBER_OF_MON_TYPES] =
{
    [TYPE_NORMAL] = TYPE_ICON_PAL_NUM_0,
    [TYPE_FIGHTING] = TYPE_ICON_PAL_NUM_0,
    [TYPE_FLYING] = TYPE_ICON_PAL_NUM_0,
    [TYPE_POISON] = TYPE_ICON_PAL_NUM_0,
    [TYPE_GROUND] = TYPE_ICON_PAL_NUM_0,
    [TYPE_ROCK] = TYPE_ICON_PAL_NUM_0,
    [TYPE_BUG] = TYPE_ICON_PAL_NUM_1,
    [TYPE_GHOST] = TYPE_ICON_PAL_NUM_1,
    [TYPE_STEEL] = TYPE_ICON_PAL_NUM_1,
    [TYPE_MYSTERY] = TYPE_ICON_PAL_NUM_1,
    [TYPE_FIRE] = TYPE_ICON_PAL_NUM_1,
    [TYPE_WATER] = TYPE_ICON_PAL_NUM_1,
    [TYPE_GRASS] = TYPE_ICON_PAL_NUM_1,
    [TYPE_ELECTRIC] = TYPE_ICON_PAL_NUM_2,
    [TYPE_PSYCHIC] = TYPE_ICON_PAL_NUM_2,
    [TYPE_ICE] = TYPE_ICON_PAL_NUM_2,
    [TYPE_DRAGON] = TYPE_ICON_PAL_NUM_2,
    [TYPE_DARK] = TYPE_ICON_PAL_NUM_2,
    [TYPE_FAIRY] = TYPE_ICON_PAL_NUM_2,
};
static void SetTypeIconPosAndPal(u8 typeId, u8 x, u8 y, u8 spriteArrayId)
{
    struct Sprite *sprite;
        
    sprite = &gSprites[sDexNavUiDataPtr->typeIconSpriteIds[spriteArrayId]];
    StartSpriteAnim(sprite, typeId);
    sprite->oam.paletteNum = sMoveTypeToOamPaletteNum[typeId];
    sprite->x = x + 16;
    sprite->y = y + 8;
    SetSpriteInvisibility(spriteArrayId, FALSE);
}

static void PrintCurrentSpeciesInfo(void)
{
    u16 species;
    
    switch (sDexNavUiDataPtr->cursorRow)
    {
    case ROW_WATER:
        species = sDexNavUiDataPtr->waterSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    case ROW_LAND_TOP:
        species = sDexNavUiDataPtr->landSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    case ROW_LAND_BOT:
        species = sDexNavUiDataPtr->landSpecies[sDexNavUiDataPtr->cursorCol + COL_LAND_COUNT];
        break;
    case ROW_HIDDEN:
        if (!FlagGet(FLAG_SYS_DETECTOR_MODE))
            species = SPECIES_NONE;
        else
            species = sDexNavUiDataPtr->hiddenSpecies[sDexNavUiDataPtr->cursorCol];
        break;
    default:
        species = SPECIES_NONE;
    }

    u16 dexNum = SpeciesToNationalPokedexNum(species);
    u8 type1, type2;
    
    if (!GetSetPokedexFlag(dexNum, FLAG_GET_SEEN))
        species = SPECIES_NONE;

    // clear windows
    FillWindowPixelBuffer(WINDOW_INFO, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    
    //species name
    if (species == SPECIES_NONE)
        AddTextPrinterParameterized3(WINDOW_INFO, 0, 0, SPECIES_INFO_Y, sFontColor_Black, 0, sText_DexNav_NoInfo);
    else
        AddTextPrinterParameterized3(WINDOW_INFO, 0, 0, SPECIES_INFO_Y, sFontColor_Black, 0, GetSpeciesName(species));
    
    //type icon(s)
    type1 = gSpeciesInfo[species].types[0];
    type2 = gSpeciesInfo[species].types[1];
    if (species == SPECIES_NONE)
        type1 = type2 = TYPE_MYSTERY;
    
    if (type1 == type2)
    {
        SetTypeIconPosAndPal(type1, 186, 69, 0);
        SetSpriteInvisibility(1, TRUE);
    }
    else
    {
        SetTypeIconPosAndPal(type1, 168, 69, 0);
        SetTypeIconPosAndPal(type2, 168 + 33, 69, 1);
    }
    
    CopyWindowToVram(WINDOW_INFO, 3);
    PutWindowTilemap(WINDOW_INFO);
}

static void PrintMapName(void)
{
    GetMapName(gStringVar3, GetCurrentRegionMapSectionId(), 0);
    AddTextPrinterParameterized3(WINDOW_REGISTERED, 1, 108 +
      GetStringRightAlignXOffset(1, gStringVar3, MAP_NAME_LENGTH * GetFontAttribute(1, FONTATTR_MAX_LETTER_WIDTH)), 0, sFontColor_White, 0, gStringVar3);
    CopyWindowToVram(WINDOW_REGISTERED, 3);
}

static void PrintSearchableSpecies(u16 species)
{
    FillWindowPixelBuffer(WINDOW_REGISTERED, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_REGISTERED);
    if (species == SPECIES_NONE)
    {
        AddTextPrinterParameterized3(WINDOW_REGISTERED, 1, 0, 0, sFontColor_White, TEXT_SKIP_DRAW, sText_DexNav_PressRToRegister);
    }
    else
    {
        StringCopy(gStringVar1, GetSpeciesName(species));
        StringExpandPlaceholders(gStringVar4, sText_DexNav_SearchForRegisteredSpecies);
        AddTextPrinterParameterized3(WINDOW_REGISTERED, 1, 0, 0, sFontColor_White, TEXT_SKIP_DRAW, gStringVar4);
    }
    
    PrintMapName();
}

static void CreateTypeIconSprites(void)
{
    u8 i;

    LoadCompressedSpriteSheet(&gSpriteSheet_MoveTypes);
    LoadCompressedPalette(gMoveTypes_Pal, 0x1D0, 0x60);
    for (i = 0; i < 2; i++)
    {
        if (sDexNavUiDataPtr->typeIconSpriteIds[i] == 0xFF)
            sDexNavUiDataPtr->typeIconSpriteIds[i] = CreateSprite(&gSpriteTemplate_MoveTypes, 10, 10, 2);    
    
        SetSpriteInvisibility(i, TRUE);
    }
}

static bool8 DexNav_DoGfxSetup(void)
{
    u8 taskId;
    
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 4:
        if (DexNav_InitBgs())
        {
            sDexNavUiDataPtr->state = 0;
            gMain.state++;
        }
        else
        {
            DexNavFadeAndExit();
            return TRUE;
        }
        break;
    case 5:
        if (DexNav_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 6:
        DexNav_InitWindows();
        sDexNavUiDataPtr->cursorRow = ROW_LAND_TOP;
        sDexNavUiDataPtr->cursorCol = 0;
        sDexNavUiDataPtr->environment = ENCOUNTER_TYPE_LAND;
        gMain.state++;
        break;
    case 7:
        PrintSearchableSpecies(VarGet(VAR_DEXNAV_SPECIES) & MASK_SPECIES);
        DexNavLoadEncounterData();
        gMain.state++;
        break;
    case 8:
        taskId = CreateTask(Task_DexNavWaitFadeIn, 0);
        gTasks[taskId].tSpecies = 0;
        gTasks[taskId].tEnvironment = sDexNavUiDataPtr->environment;
        gMain.state++;
        break;
    case 9:
        sDexNavUiDataPtr->typeIconSpriteIds[0] = 0xFF;
        sDexNavUiDataPtr->typeIconSpriteIds[1] = 0xFF;
        CreateTypeIconSprites();
        gMain.state++;
        break;
    case 10:
        LoadMonIconPalettes();
        DrawSpeciesIcons();
        CreateSelectionCursor();
        DexNavLoadCapturedAllSymbols();
        gMain.state++;
        break;
    case 11:
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 12:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(DexNav_VBlankCB);
        SetMainCallback2(DexNav_MainCB);
        return TRUE;
    }
    
    return FALSE;
}

static void DexNav_RunSetup(void)
{
    while (!DexNav_DoGfxSetup()) {}
}

static void DexNavGuiInit(MainCallback callback)
{
    if ((sDexNavUiDataPtr = AllocZeroed(sizeof(struct DexNavGUI))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    sDexNavUiDataPtr->state = 0;
    sDexNavUiDataPtr->savedCallback = callback;
    SetMainCallback2(DexNav_RunSetup);
}

void Task_OpenDexNavFromStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        DexNavGuiInit(CB2_ReturnToFullScreenStartMenu);
        DestroyTask(taskId);
    }
}

static void Task_DexNavWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_DexNavMain;
}

static void Task_DexNavMain(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    u16 species;
    
    if (IsSEPlaying())
        return;
    
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_POKENAV_OFF);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        task->func = Task_DexNavFadeAndExit;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sDexNavUiDataPtr->cursorRow == ROW_WATER)
        {
            sDexNavUiDataPtr->cursorRow = ROW_HIDDEN;
            if (sDexNavUiDataPtr->cursorCol >= COL_HIDDEN_COUNT)
                sDexNavUiDataPtr->cursorCol = COL_HIDDEN_MAX;
        }
        else
        {
            if (sDexNavUiDataPtr->cursorRow == ROW_LAND_TOP && sDexNavUiDataPtr->cursorCol == COL_LAND_MAX)
                sDexNavUiDataPtr->cursorCol = COL_WATER_MAX;
            
            sDexNavUiDataPtr->cursorRow--;
        }
        
        PlaySE(SE_RG_BAG_CURSOR);
        UpdateCursorPosition();
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sDexNavUiDataPtr->cursorRow == ROW_HIDDEN)
        {
            sDexNavUiDataPtr->cursorRow = ROW_WATER;
        }
        else if (sDexNavUiDataPtr->cursorRow == ROW_LAND_BOT)
        {
            if (sDexNavUiDataPtr->cursorCol >= COL_HIDDEN_COUNT)
                sDexNavUiDataPtr->cursorCol = COL_HIDDEN_MAX;
            
            sDexNavUiDataPtr->cursorRow++;
        }
        else
        {
            sDexNavUiDataPtr->cursorRow++;
        }
        
        PlaySE(SE_RG_BAG_CURSOR);
        UpdateCursorPosition();
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        if (sDexNavUiDataPtr->cursorCol == 0)
        {
            switch (sDexNavUiDataPtr->cursorRow)
            {
            case ROW_WATER:
                sDexNavUiDataPtr->cursorCol = COL_WATER_MAX;
                break;
            case ROW_HIDDEN:
                sDexNavUiDataPtr->cursorCol = COL_HIDDEN_MAX;
                break;
            default:
                sDexNavUiDataPtr->cursorCol = COL_LAND_MAX;
                break;
            }
        }
        else
        {
            sDexNavUiDataPtr->cursorCol--;
        }
        
        PlaySE(SE_RG_BAG_CURSOR);
        UpdateCursorPosition();
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        switch (sDexNavUiDataPtr->cursorRow)
        {
        case ROW_WATER:
            if (sDexNavUiDataPtr->cursorCol == COL_WATER_MAX)
                sDexNavUiDataPtr->cursorCol = 0;
            else
                sDexNavUiDataPtr->cursorCol++;
            break;
        case ROW_HIDDEN:
            if (sDexNavUiDataPtr->cursorCol == COL_HIDDEN_MAX)
                sDexNavUiDataPtr->cursorCol = 0;
            else
                sDexNavUiDataPtr->cursorCol++;
            break;
        default:
            if (sDexNavUiDataPtr->cursorCol == COL_LAND_MAX)
                sDexNavUiDataPtr->cursorCol = 0;
            else
                sDexNavUiDataPtr->cursorCol++;
            break;
        }
        
        PlaySE(SE_RG_BAG_CURSOR);
        UpdateCursorPosition();
    }
    else if (JOY_NEW(R_BUTTON))
    {
        // check selection is valid. Play sound if invalid
        species = DexNavGetSpecies();
        
        if (species != SPECIES_NONE)
        {
            PrintSearchableSpecies(species);
            //PlaySE(SE_DEX_SEARCH);
            PlayCry_Script(species, 0);
            
            // create value to store in a var
            VarSet(VAR_DEXNAV_SPECIES, ((sDexNavUiDataPtr->environment << 14) | species));
        }
        else
        {
            PlaySE(SE_FAILURE);
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        species = DexNavGetSpecies();
        if (species == SPECIES_NONE)
        {
            PlaySE(SE_FAILURE);
        }
        else
        {
            gSpecialVar_0x8000 = species;
            gSpecialVar_0x8001 = sDexNavUiDataPtr->environment;
            gSpecialVar_0x8002 = (sDexNavUiDataPtr->cursorRow == ROW_HIDDEN) ? TRUE : FALSE;
            PlaySE(SE_DEX_SEARCH);
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
            task->func = Task_DexNavExitAndSearch;
        }
    }
}

static void DrawSearchIcon(void)
{
    struct CompressedSpriteSheet spriteSheet;       
    
    spriteSheet.data = sHiddenSearchIconGfx;
    spriteSheet.size = 0x200;
    spriteSheet.tag = SELECTION_CURSOR_TAG;
    LoadCompressedSpriteSheet(&spriteSheet);
    sDexNavSearchDataPtr->iconSpriteId = CreateSprite(&sSearchIconSpriteTemplate, 18, GetSearchWindowY() + 12, 0);
}

// the initial hidden icon window ONLY shows search icon, ??? instead of name (and pokeball icon if owned)
//  if the player presses R or moves close enough, the full search window will be created
//  this way, if the player is not interested in hidden pokemon it will not be too intrusive
static void DrawHiddenSearchWindow(u8 width)
{
    AddSearchWindow(width);
    AddTextPrinterParameterized3(sDexNavSearchDataPtr->windowId, 0, SPECIES_ICON_X + 4, 0, sSearchFontColor, TEXT_SKIP_DRAW, sText_ThreeQmarks);
    
    ConvertIntToDecimalStringN(gStringVar1, 0, STR_CONV_MODE_LEFT_ALIGN, 2);
    StringExpandPlaceholders(gStringVar4, sText_SearchLevel);
    AddTextPrinterParameterized3(sDexNavSearchDataPtr->windowId, 0, SPECIES_ICON_X + 4, 12, sSearchFontColor, TEXT_SKIP_DRAW, gStringVar4);
    CopyWindowToVram(sDexNavSearchDataPtr->windowId, 2);
}

static void DexNavDrawHiddenIcons(void)
{
    u16 species = sDexNavSearchDataPtr->species;
    
    DrawHiddenSearchWindow(12);
    DrawSearchIcon();
    
    if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
        sDexNavSearchDataPtr->ownedIconSpriteId = CreateSprite(&sOwnedIconTemplate, SPECIES_ICON_X + 6, GetSearchWindowY() + 2, 0);
    
    if (sDexNavSearchDataPtr->isHiddenMon)
        sDexNavSearchDataPtr->exclamationSpriteId = CreateSprite(&sHiddenMonIconTemplate, SPECIES_ICON_X + 34, GetSearchWindowY() + 8, 0);
}

/////////////////////////
//// GENERAL UTILITY ////
/////////////////////////

void ResetDexNavSearch(void)
{
    VarSet(VAR_DEXNAV_STEP_COUNTER, 0); //reset hidden pokemon step counter
    if (FlagGet(FLAG_SYS_DEXNAV_SEARCH))
        EndDexNavSearch(FindTaskIdByFunc(Task_DexNavSearch));   //moving to new map ends dexnav search
}
