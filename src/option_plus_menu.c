#include "global.h"
#include "option_plus_menu.h"
#include "main.h"
#include "menu.h"
#include "scanline_effect.h"
#include "palette.h"
#include "sprite.h"
#include "task.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "menu_helpers.h"
#include "decompress.h"
#include "difficulty.h"
#include "event_data.h"

enum
{
    MENU_GENERAL,
    MENU_QOL,
    MENU_SOUND,
    MENU_COUNT,
};

// General
enum
{
    MENUITEM_GENERAL_DIFFICULTY,
    MENUITEM_GENERAL_TEXTSPEED,
    MENUITEM_GENERAL_BATTLESCENE,
    MENUITEM_GENERAL_BATTLESTYLE,
    MENUITEM_GENERAL_BUTTONMODE,
    MENUITEM_GENERAL_FRAMETYPE,
    MENUITEM_GENERAL_CANCEL,
    MENUITEM_GENERAL_COUNT,
};

// QOL
enum
{
    MENUITEM_QOL_SAVEPROMPTS,
    MENUITEM_QOL_CANCEL,
    MENUITEM_QOL_COUNT,
};

// Sound
enum
{
    MENUITEM_SOUND_SOUND,
    MENUITEM_SOUND_CANCEL,
    MENUITEM_SOUND_COUNT,
};

// Window Ids
enum
{
    WIN_TOPBAR,
    WIN_OPTIONS,
    WIN_DESCRIPTION
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {//WIN_TOPBAR
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {//WIN_OPTIONS
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 10,
        .paletteNum = 1,
        .baseBlock = 62
    },
    {//WIN_DESCRIPTION
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 1,
        .baseBlock = 500
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
    },
    {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
    },
    {
       .bg = 2,
       .charBaseIndex = 0,
       .mapBaseIndex = 29,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
    },
    {
       .bg = 3,
       .charBaseIndex = 3,
       .mapBaseIndex = 27,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 2,
    },
};

struct OptionMenu
{
    u8 submenu;
    u8 sel_general[MENUITEM_GENERAL_COUNT];
    u8 sel_qol[MENUITEM_QOL_COUNT];
    u8 sel_sound[MENUITEM_SOUND_COUNT];
    int menuCursor[MENU_COUNT];
    int visibleCursor[MENU_COUNT];
    u8 arrowTaskId;
    u8 gfxLoadState;
};

#define Y_DIFF 16 // Difference in pixels between items.
#define OPTIONS_ON_SCREEN 5
#define NUM_OPTIONS_FROM_BORDER 1

// local functions
static void MainCB2(void);
static void VBlankCB(void);
static void DrawTopBarText(void); //top Option text
static void DrawLeftSideOptionText(int selection, int y);
static void DrawRightSideChoiceText(const u8 *str, int x, int y, bool8 choosen, bool8 active);
static void DrawOptionMenuTexts(void); //left side text;
static void DrawChoices(u32 id, int y); //right side draw function
static void HighlightOptionMenuItem(void);
static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void ScrollMenu(int direction);
static void ScrollAll(int direction); // to bottom or top
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3);
static int XOptions_ProcessInput(int x, int selection);
static int ProcessInput_Options_Two(int selection);
static int ProcessInput_Options_Three(int selection);
static int ProcessInput_Options_Four(int selection);
static int ProcessInput_Options_Eleven(int selection);
static int ProcessInput_Sound(int selection);
static int ProcessInput_FrameType(int selection);
static const u8 *const OptionTextDescription(void);
static const u8 *const OptionTextRight(u8 menuItem);
static u8 MenuItemCount(void);
static u8 MenuItemCancel(void);
static void DrawDescriptionText(void);
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active);
static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active);
static void ReDrawAll(void);
static void DrawChoices_Difficulty(int selection, int y);
static void DrawChoices_TextSpeed(int selection, int y);
static void DrawChoices_BattleScene(int selection, int y);
static void DrawChoices_BattleStyle(int selection, int y);
static void DrawChoices_Sound(int selection, int y);
static void DrawChoices_ButtonMode(int selection, int y);
static void DrawChoices_BarSpeed(int selection, int y); //HP and EXP
static void DrawChoices_UnitSystem(int selection, int y);
static void DrawChoices_Font(int selection, int y);
static void DrawChoices_FrameType(int selection, int y);
static void DrawChoices_MatchCall(int selection, int y);
static void DrawBgWindowFrames(void);
static void DrawChoices_SavePrompts(int selection, int y);

// EWRAM vars
EWRAM_DATA static struct OptionMenu *sOptions = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg3TilemapBuffer = NULL;

// const data
static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};
static const u16 sOptionMenuText_Pal[] = INCGFX_U16("graphics/ui_options_plus/option_menu_text_custom.pal", ".gbapal");

static const u32 sOptionsPlusTiles[] = INCGFX_U32("graphics/ui_options_plus/options_plus_tiles.png", ".4bpp.lz");
static const u16 sOptionsPlusPalette[] = INCGFX_U16("graphics/ui_options_plus/options_plus_tiles.pal", ".gbapal");
static const u32 sOptionsPlusTilemap[] = INCGFX_U32("graphics/ui_options_plus/options_plus_tiles.bin", ".lz");

// Scrolling Background
static const u32 sScrollBgTiles[] = INCGFX_U32("graphics/ui_options_plus/scroll_tiles.png", ".4bpp.lz");
static const u32 sScrollBgTilemap[] = INCGFX_U32("graphics/ui_options_plus/scroll_tiles.bin", ".lz");
static const u16 sScrollBgPalette[] = INCGFX_U16("graphics/ui_options_plus/scroll_tiles.png", ".gbapal");

#define TEXT_COLOR_OPTIONS_WHITE                1
#define TEXT_COLOR_OPTIONS_GRAY_FG              2
#define TEXT_COLOR_OPTIONS_GRAY_SHADOW          3
#define TEXT_COLOR_OPTIONS_GRAY_LIGHT_FG        4
#define TEXT_COLOR_OPTIONS_ORANGE_FG            5
#define TEXT_COLOR_OPTIONS_ORANGE_SHADOW        6
#define TEXT_COLOR_OPTIONS_RED_FG               7
#define TEXT_COLOR_OPTIONS_RED_SHADOW           8
#define TEXT_COLOR_OPTIONS_GREEN_FG             9
#define TEXT_COLOR_OPTIONS_GREEN_SHADOW         10
#define TEXT_COLOR_OPTIONS_GREEN_DARK_FG        11
#define TEXT_COLOR_OPTIONS_GREEN_DARK_SHADOW    12
#define TEXT_COLOR_OPTIONS_RED_DARK_FG          13
#define TEXT_COLOR_OPTIONS_RED_DARK_SHADOW      14

// Menu draw and input functions
struct // MENU_GENERAL
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsGeneral[MENUITEM_GENERAL_COUNT] =
{
    [MENUITEM_GENERAL_DIFFICULTY]   = {DrawChoices_Difficulty,  ProcessInput_Options_Four},
    [MENUITEM_GENERAL_TEXTSPEED]    = {DrawChoices_TextSpeed,   ProcessInput_Options_Four},
    [MENUITEM_GENERAL_BATTLESTYLE]  = {DrawChoices_BattleStyle, ProcessInput_Options_Two},
    [MENUITEM_GENERAL_BATTLESCENE]  = {DrawChoices_BattleScene, ProcessInput_Options_Two},
    [MENUITEM_GENERAL_BUTTONMODE]   = {DrawChoices_ButtonMode,  ProcessInput_Options_Three},
    // [MENUITEM_GENERAL_UNIT_SYSTEM]  = {DrawChoices_UnitSystem,  ProcessInput_Options_Two},
    [MENUITEM_GENERAL_FRAMETYPE]    = {DrawChoices_FrameType,   ProcessInput_FrameType},
    [MENUITEM_GENERAL_CANCEL]       = {NULL, NULL},
};

struct // MENU_QOL
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsQOL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_SAVEPROMPTS]  = {DrawChoices_SavePrompts, ProcessInput_Options_Two},
    // [MENUITEM_QOL_HP_BAR]       = {DrawChoices_BarSpeed,    ProcessInput_Options_Eleven},
    // [MENUITEM_QOL_EXP_BAR]      = {DrawChoices_BarSpeed,    ProcessInput_Options_Eleven},
    // [MENUITEM_QOL_FONT]         = {DrawChoices_Font,        ProcessInput_Options_Two}, 
    // [MENUITEM_QOL_MATCHCALL]    = {DrawChoices_MatchCall,   ProcessInput_Options_Two},
    [MENUITEM_QOL_CANCEL]       = {NULL, NULL},
};

struct // MENU_SOUND
{
    void (*drawChoices)(int selection, int y);
    int (*processInput)(int selection);
} static const sItemFunctionsSound[MENUITEM_SOUND_COUNT] =
{
    [MENUITEM_SOUND_SOUND]        = {DrawChoices_Sound,       ProcessInput_Options_Two},
    [MENUITEM_SOUND_CANCEL]       = {NULL, NULL},
};

// Menu left side option names text
static const u8 *const sOptionMenuItemsNamesGeneral[MENUITEM_GENERAL_COUNT] =
{
    [MENUITEM_GENERAL_DIFFICULTY]  = COMPOUND_STRING("Difficulty"),
    [MENUITEM_GENERAL_TEXTSPEED]   = COMPOUND_STRING("Speed"),
    [MENUITEM_GENERAL_BATTLESCENE] = COMPOUND_STRING("Battle Scene"),
    [MENUITEM_GENERAL_BATTLESTYLE] = COMPOUND_STRING("Battle Style"),
    [MENUITEM_GENERAL_BUTTONMODE]  = COMPOUND_STRING("Button Mode"),
    // [MENUITEM_GENERAL_UNIT_SYSTEM] = sText_UnitSystem,
    [MENUITEM_GENERAL_FRAMETYPE]   = COMPOUND_STRING("Frame"),
    [MENUITEM_GENERAL_CANCEL]      = COMPOUND_STRING("Save"),
};

static const u8 *const sOptionMenuItemsNamesQOL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_SAVEPROMPTS] = COMPOUND_STRING("Save Prompts"),
    // [MENUITEM_QOL_EXP_BAR]     = sText_ExpBar,
    // [MENUITEM_QOL_FONT]        = gText_Font,
    // [MENUITEM_QOL_MATCHCALL]   = gText_OptionMatchCalls,
    [MENUITEM_QOL_CANCEL]      = COMPOUND_STRING("Save"),
};

static const u8 *const sOptionMenuItemsNamesSound[MENUITEM_SOUND_COUNT] =
{
    [MENUITEM_SOUND_SOUND]       = COMPOUND_STRING("Sound"),
    // [MENUITEM_SOUND_EXP_BAR]     = sText_ExpBar,
    // [MENUITEM_SOUND_FONT]        = gText_Font,
    // [MENUITEM_SOUND_MATCHCALL]   = gText_OptionMatchCalls,
    [MENUITEM_SOUND_CANCEL]      = COMPOUND_STRING("Save"),
};

static const u8 *const OptionTextRight(u8 menuItem)
{
    switch (sOptions->submenu)
    {
    case MENU_GENERAL:
    default:
        return sOptionMenuItemsNamesGeneral[menuItem];
    case MENU_QOL:
        return sOptionMenuItemsNamesQOL[menuItem];
    case MENU_SOUND:
        return sOptionMenuItemsNamesSound[menuItem];
    }
}

// Menu left side text conditions
static bool8 CheckConditions(int selection)
{
    switch (sOptions->submenu)
    {
    case MENU_GENERAL:
    default:
        switch(selection)
        {
        default:                            return FALSE;
        case MENUITEM_GENERAL_DIFFICULTY:      return TRUE;
        case MENUITEM_GENERAL_TEXTSPEED:       return TRUE;
        case MENUITEM_GENERAL_BATTLESCENE:     return TRUE;
        case MENUITEM_GENERAL_BATTLESTYLE:
            if (sOptions->sel_general[MENUITEM_GENERAL_DIFFICULTY] >= DIFFICULTY_HARD)
                return FALSE;
            return TRUE;
        case MENUITEM_GENERAL_BUTTONMODE:      return TRUE;
        // case MENUITEM_GENERAL_UNIT_SYSTEM:     return TRUE;
        case MENUITEM_GENERAL_FRAMETYPE:       return TRUE;
        case MENUITEM_GENERAL_CANCEL:          return TRUE;
        case MENUITEM_GENERAL_COUNT:           return TRUE;
        }
    case MENU_QOL:
        switch(selection)
        {
        default:                            return FALSE;
        case MENUITEM_QOL_SAVEPROMPTS:     return TRUE;
        // case MENUITEM_QOL_HP_BAR:          return TRUE;
        // case MENUITEM_QOL_EXP_BAR:         return TRUE;
        // case MENUITEM_QOL_FONT:            return TRUE;
        // case MENUITEM_QOL_MATCHCALL:       return TRUE;
        case MENUITEM_QOL_CANCEL:          return TRUE;
        case MENUITEM_QOL_COUNT:           return TRUE;
        }
    case MENU_SOUND:
        switch(selection)
        {
        default:                            return FALSE;
        case MENUITEM_SOUND_SOUND:           return TRUE;
        case MENUITEM_SOUND_CANCEL:          return TRUE;
        case MENUITEM_SOUND_COUNT:           return TRUE;
        }
    }
}

// General
static const u8 sText_Empty[]                   = _("");
static const u8 sText_Desc_Save[]               = _("Save your settings.");
static const u8 sText_Desc_DifficultyEasy[]     = _("Suited for casual players.\nCheck the Notebook for more info.");
static const u8 sText_Desc_DifficultyNormal[]   = _("Suited for first playthroughs.\nCheck the Notebook for more info.");
static const u8 sText_Desc_DifficultyHard[]     = _("Suited for experienced players.\nCheck the Notebook for more info.");
static const u8 sText_Desc_DifficultyBrutal[]   = _("Suited for hardcore players.\nCheck the Notebook for more info.");
static const u8 sText_Desc_TextSpeed[]          = _("Choose one of the four text-display\nspeeds.");
static const u8 sText_Desc_BattleScene_On[]     = _("Show the POKéMON battle animations.");
static const u8 sText_Desc_BattleScene_Off[]    = _("Skip the POKéMON battle animations.");
static const u8 sText_Desc_BattleStyle_Shift[]  = _("Get the option to switch your\nPOKéMON after the enemies faints.");
static const u8 sText_Desc_BattleStyle_Set[]    = _("No free switch after fainting the\nenemies POKéMON.");
static const u8 sText_Desc_SoundMono[]          = _("Sound is the same in all speakers.\nRecommended for original hardware.");
static const u8 sText_Desc_SoundStereo[]        = _("Play the left and right audio channel\nseperatly. Great with headphones.");
static const u8 sText_Desc_ButtonMode[]         = _("All buttons work as normal.");
static const u8 sText_Desc_ButtonMode_LR[]      = _("On some screens the L and R buttons\nact as left and right.");
static const u8 sText_Desc_ButtonMode_LA[]      = _("The L button acts as another A\nbutton for one-handed play.");
static const u8 sText_Desc_UnitSystemImperial[] = _("Display BERRY and POKéMON weight\nand size in pounds and inches.");
static const u8 sText_Desc_UnitSystemMetric[]   = _("Display BERRY and POKéMON weight\nand size in kilograms and meters.");
static const u8 sText_Desc_FrameType[]          = _("Choose the frame surrounding the\nwindows.");
static const u8 *const sOptionMenuItemDescriptionsGeneral[MENUITEM_GENERAL_COUNT][4] =
{
    [MENUITEM_GENERAL_DIFFICULTY]  = {sText_Desc_DifficultyEasy,       sText_Desc_DifficultyNormal,  sText_Desc_DifficultyHard, sText_Desc_DifficultyBrutal},
    [MENUITEM_GENERAL_TEXTSPEED]   = {sText_Desc_TextSpeed,            sText_Empty,                sText_Empty, sText_Empty},
    [MENUITEM_GENERAL_BATTLESCENE] = {sText_Desc_BattleScene_On,       sText_Desc_BattleScene_Off, sText_Empty, sText_Empty},
    [MENUITEM_GENERAL_BATTLESTYLE] = {sText_Desc_BattleStyle_Shift,    sText_Desc_BattleStyle_Set, sText_Empty, sText_Empty},
    [MENUITEM_GENERAL_BUTTONMODE]  = {sText_Desc_ButtonMode,           sText_Desc_ButtonMode_LR,   sText_Desc_ButtonMode_LA, sText_Empty},
    // [MENUITEM_GENERAL_UNIT_SYSTEM] = {sText_Desc_UnitSystemImperial,   sText_Desc_UnitSystemMetric,sText_Empty},
    [MENUITEM_GENERAL_FRAMETYPE]   = {sText_Desc_FrameType,            sText_Empty,                sText_Empty, sText_Empty},
    [MENUITEM_GENERAL_CANCEL]      = {sText_Desc_Save,                 sText_Empty,                sText_Empty, sText_Empty},
};

// QOL
static const u8 sText_Desc_BattleHPBar[]        = _("Choose how fast the HP BAR will get\ndrained in battles.");
static const u8 sText_Desc_BattleExpBar[]       = _("Choose how fast the EXP BAR will get\nfilled in battles.");
static const u8 sText_Desc_SurfOff[]            = _("Disables the SURF theme when\nusing SURF.");
static const u8 sText_Desc_SurfOn[]             = _("Enables the SURF theme\nwhen using SURF.");
static const u8 sText_Desc_BikeOff[]            = _("Disables the BIKE theme when\nusing the BIKE.");
static const u8 sText_Desc_BikeOn[]             = _("Enables the BIKE theme when\nusing the BIKE.");
static const u8 sText_Desc_FontType[]           = _("Choose the font design.");
static const u8 sText_Desc_OverworldCallsOn[]   = _("TRAINERs will be able to call you,\noffering rematches and info.");
static const u8 sText_Desc_OverworldCallsOff[]  = _("You will not receive calls.\nSpecial events will still occur.");
static const u8 sText_Desc_SavePromptsOn[]      = _("You will be prompted to save\nyour game.");
static const u8 sText_Desc_SavePromptsOff[]     = _("You will not be prompted to save\nyour game.");
static const u8 *const sOptionMenuItemDescriptionsQOL[MENUITEM_QOL_COUNT][2] =
{
    [MENUITEM_QOL_SAVEPROMPTS] = {sText_Desc_SavePromptsOff,        sText_Desc_SavePromptsOn},
    // [MENUITEM_QOL_HP_BAR]      = {sText_Desc_BattleHPBar,        sText_Empty},
    // [MENUITEM_QOL_EXP_BAR]     = {sText_Desc_BattleExpBar,       sText_Empty},
    // [MENUITEM_QOL_FONT]        = {sText_Desc_FontType,           sText_Desc_FontType},
    // [MENUITEM_QOL_MATCHCALL]   = {sText_Desc_OverworldCallsOn,   sText_Desc_OverworldCallsOff},
    [MENUITEM_QOL_CANCEL]      = {sText_Desc_Save,               sText_Empty},
};

static const u8 *const sOptionMenuItemDescriptionsSound[MENUITEM_SOUND_COUNT][2] =
{
    [MENUITEM_SOUND_SOUND]       = {sText_Desc_SoundMono,            sText_Desc_SoundStereo},
    // [MENUITEM_SOUND_HP_BAR]      = {sText_Desc_BattleHPBar,        sText_Empty},
    // [MENUITEM_SOUND_EXP_BAR]     = {sText_Desc_BattleExpBar,       sText_Empty},
    // [MENUITEM_SOUND_FONT]        = {sText_Desc_FontType,           sText_Desc_FontType},
    // [MENUITEM_SOUND_MATCHCALL]   = {sText_Desc_OverworldCallsOn,   sText_Desc_OverworldCallsOff},
    [MENUITEM_SOUND_CANCEL]      = {sText_Desc_Save,               sText_Empty},
};

// Disabled Descriptions
static const u8 sText_Desc_Disabled_Textspeed[]     = _("Only active if xyz.");
static const u8 *const sOptionMenuItemDescriptionsDisabledGeneral[MENUITEM_GENERAL_COUNT] =
{
    [MENUITEM_GENERAL_DIFFICULTY]  = sText_Empty,
    [MENUITEM_GENERAL_TEXTSPEED]   = sText_Desc_Disabled_Textspeed,
    [MENUITEM_GENERAL_BATTLESCENE] = sText_Empty,
    [MENUITEM_GENERAL_BATTLESTYLE] = COMPOUND_STRING("This option is ignored because the\ndifficulty is set to Hard or Brutal."),
    [MENUITEM_GENERAL_BUTTONMODE]  = sText_Empty,
    // [MENUITEM_GENERAL_UNIT_SYSTEM] = sText_Empty,
    [MENUITEM_GENERAL_FRAMETYPE]   = sText_Empty,
    [MENUITEM_GENERAL_CANCEL]      = sText_Empty,
};

// Disabled QOL
static const u8 sText_Desc_Disabled_BattleHPBar[]   = _("Only active if xyz.");
static const u8 *const sOptionMenuItemDescriptionsDisabledQOL[MENUITEM_QOL_COUNT] =
{
    [MENUITEM_QOL_SAVEPROMPTS] = sText_Empty,
    // [MENUITEM_QOL_HP_BAR]      = sText_Desc_Disabled_BattleHPBar,
    // [MENUITEM_QOL_EXP_BAR]     = sText_Empty,
    // [MENUITEM_QOL_FONT]        = sText_Empty,
    // [MENUITEM_QOL_MATCHCALL]   = sText_Empty,
    [MENUITEM_QOL_CANCEL]      = sText_Empty,
};

// Disabled SOUND
static const u8 *const sOptionMenuItemDescriptionsDisabledSound[MENUITEM_SOUND_COUNT] =
{
    [MENUITEM_SOUND_SOUND]       = sText_Empty,
    // [MENUITEM_SOUND_HP_BAR]      = sText_Desc_Disabled_BattleHPBar,
    // [MENUITEM_SOUND_EXP_BAR]     = sText_Empty,
    // [MENUITEM_SOUND_FONT]        = sText_Empty,
    // [MENUITEM_SOUND_MATCHCALL]   = sText_Empty,
    [MENUITEM_SOUND_CANCEL]      = sText_Empty,
};

static const u8 *const OptionTextDescription(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu];
    u8 selection;

    switch (sOptions->submenu)
    {
    case MENU_GENERAL:
    default:
        if (menuItem >= MENUITEM_GENERAL_COUNT || !CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledGeneral[menuItem];
        selection = sOptions->sel_general[menuItem];
        if (menuItem == MENUITEM_GENERAL_TEXTSPEED || menuItem == MENUITEM_GENERAL_FRAMETYPE)
            selection = 0;
        return sOptionMenuItemDescriptionsGeneral[menuItem][selection];
    case MENU_QOL:
        if (menuItem >= MENUITEM_QOL_COUNT || !CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledQOL[menuItem];
        selection = sOptions->sel_qol[menuItem];
        // if (menuItem == MENUITEM_QOL_HP_BAR || menuItem == MENUITEM_QOL_EXP_BAR)
        //     selection = 0;
        return sOptionMenuItemDescriptionsQOL[menuItem][selection];
    case MENU_SOUND:
        if (menuItem >= MENUITEM_SOUND_COUNT || !CheckConditions(menuItem))
            return sOptionMenuItemDescriptionsDisabledSound[menuItem];
        selection = sOptions->sel_sound[menuItem];
        // if (menuItem == MENUITEM_SOUND_HP_BAR || menuItem == MENUITEM_SOUND_EXP_BAR)
        //     selection = 0;
        return sOptionMenuItemDescriptionsSound[menuItem][selection];
    }
}

static u8 MenuItemCount(void)
{
    switch (sOptions->submenu)
    {
    case MENU_GENERAL:
    default:
        return MENUITEM_GENERAL_COUNT;
    case MENU_QOL:
        return MENUITEM_QOL_COUNT;
    case MENU_SOUND:
        return MENUITEM_SOUND_COUNT;
    }
}

static u8 MenuItemCancel(void)
{
    switch (sOptions->submenu)
    {
    case MENU_GENERAL:
    default:
        return MENUITEM_GENERAL_CANCEL;
    case MENU_QOL:
        return MENUITEM_QOL_CANCEL;
    case MENU_SOUND:
        return MENUITEM_SOUND_CANCEL;
    }
}

// Main code
static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgY(3, 96, BG_COORD_ADD);
}

static void DrawTopBarText(void)
{
    const u8 color[3] = { 0, TEXT_COLOR_WHITE, TEXT_COLOR_OPTIONS_GRAY_FG };

    FillWindowPixelBuffer(WIN_TOPBAR, PIXEL_FILL(0));
    switch (sOptions->submenu)
    {
        case MENU_GENERAL:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, COMPOUND_STRING("GENERAL"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 190, 1, color, 0, COMPOUND_STRING("{R_BUTTON} QOL"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, COMPOUND_STRING("{L_BUTTON} SOUND"));
            break;
        case MENU_QOL:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, COMPOUND_STRING("QOL"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, COMPOUND_STRING("{L_BUTTON} GENERAL"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 190, 1, color, 0, COMPOUND_STRING("{R_BUTTON} SOUND"));
            break;
        case MENU_SOUND:
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 105, 1, color, 0, COMPOUND_STRING("SOUND"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 2, 1, color, 0, COMPOUND_STRING("{L_BUTTON} QOL"));
            AddTextPrinterParameterized3(WIN_TOPBAR, FONT_SMALL, 190, 1, color, 0, COMPOUND_STRING("{R_BUTTON} GENERAL"));
            break;
    }
    PutWindowTilemap(WIN_TOPBAR);
    CopyWindowToVram(WIN_TOPBAR, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(void) //left side text
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(0));
    for (i = 0; i < MenuItemCount(); i++)
        DrawLeftSideOptionText(i, (i * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void DrawDescriptionText(void)
{
    u8 color_gray[3];
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;
        
    FillWindowPixelBuffer(WIN_DESCRIPTION, PIXEL_FILL(1));
    AddTextPrinterParameterized4(WIN_DESCRIPTION, FONT_NORMAL, 6, 1, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextDescription());
    CopyWindowToVram(WIN_DESCRIPTION, COPYWIN_FULL);
}

static void DrawLeftSideOptionText(int selection, int y)
{
    u8 color_yellow[3];
    u8 color_gray[3];

    color_yellow[0] = TEXT_COLOR_TRANSPARENT;
    color_yellow[1] = TEXT_COLOR_WHITE;
    color_yellow[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    color_gray[0] = TEXT_COLOR_TRANSPARENT;
    color_gray[1] = TEXT_COLOR_WHITE;
    color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_SHADOW;

    if (CheckConditions(selection))
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_yellow, TEXT_SKIP_DRAW, OptionTextRight(selection));
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, 8, y, 0, 0, color_gray, TEXT_SKIP_DRAW, OptionTextRight(selection));
}

static void DrawRightSideChoiceText(const u8 *text, int x, int y, bool8 choosen, bool8 active)
{
    u8 color_red[3];
    u8 color_gray[3];

    if (active)
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_ORANGE_FG;
        color_red[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    }
    else
    {
        color_red[0] = TEXT_COLOR_TRANSPARENT;
        color_red[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_red[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
        color_gray[0] = TEXT_COLOR_TRANSPARENT;
        color_gray[1] = TEXT_COLOR_OPTIONS_WHITE;
        color_gray[2] = TEXT_COLOR_OPTIONS_GRAY_FG;
    }


    if (choosen)
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_red, TEXT_SKIP_DRAW, text);
    else
        AddTextPrinterParameterized4(WIN_OPTIONS, FONT_NORMAL, x, y, 0, 0, color_gray, TEXT_SKIP_DRAW, text);
}

static void DrawChoices(u32 id, int y) //right side draw function
{
    switch (sOptions->submenu)
    {
        case MENU_GENERAL:
            if (sItemFunctionsGeneral[id].drawChoices != NULL)
                sItemFunctionsGeneral[id].drawChoices(sOptions->sel_general[id], y);
            break;
        case MENU_QOL:
            if (sItemFunctionsQOL[id].drawChoices != NULL)
                sItemFunctionsQOL[id].drawChoices(sOptions->sel_qol[id], y);
            break;
        case MENU_SOUND:
            if (sItemFunctionsSound[id].drawChoices != NULL)
                sItemFunctionsSound[id].drawChoices(sOptions->sel_sound[id], y);
            break;
    }
}

static void HighlightOptionMenuItem(void)
{
    int cursor = sOptions->visibleCursor[sOptions->submenu];

    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(8, 232));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(cursor * Y_DIFF + 24, cursor * Y_DIFF + 40));
}

static bool8 OptionsMenu_LoadGraphics(void) // Load all the tilesets, tilemaps, spritesheets, and palettes
{
    switch (sOptions->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(2, sOptionsPlusTiles, 0, 0, 0);
        sOptions->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sOptionsPlusTilemap, sBg2TilemapBuffer);
            sOptions->gfxLoadState++;
        }
        break;
    case 2:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(3, sScrollBgTiles, 0, 0, 0);
        sOptions->gfxLoadState++;
        break;
    case 3:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sScrollBgTilemap, sBg3TilemapBuffer);
            sOptions->gfxLoadState++;
        }
        break;
    case 4:
        LoadPalette(sOptionsPlusPalette, 64, 32);
        LoadPalette(sScrollBgPalette, 32, 32);
        sOptions->gfxLoadState++;
        break;
    default:
        sOptions->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

void CB2_InitOptionPlusMenu(void)
{
    u32 i, taskId;
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        sOptions = AllocZeroed(sizeof(*sOptions));
        FreeAllSpritePalettes();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        ResetBgsAndClearDma3BusyFlags(0);
        ResetBgPositions();
        
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG2);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON);
        
        ResetAllBgsCoordinates();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, NELEMS(sOptionMenuBgTemplates));
        InitWindows(sOptionMenuWinTemplates);

        sBg2TilemapBuffer = Alloc(0x800);
        memset(sBg2TilemapBuffer, 0, 0x800);
        SetBgTilemapBuffer(2, sBg2TilemapBuffer);
        ScheduleBgCopyTilemapToVram(2);

        sBg3TilemapBuffer = Alloc(0x800);
        memset(sBg3TilemapBuffer, 0, 0x800);
        SetBgTilemapBuffer(3, sBg3TilemapBuffer);
        ScheduleBgCopyTilemapToVram(3);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        gMain.state++;
        sOptions->gfxLoadState = 0;
        break;
    case 3:
        if (OptionsMenu_LoadGraphics() == TRUE)
        {
            gMain.state++;
            LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1A2);
        }
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, 0, sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 0x70, 0x20);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, 16, sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        sOptions->sel_general[MENUITEM_GENERAL_DIFFICULTY]  = GetCurrentDifficultyLevel();
        sOptions->sel_general[MENUITEM_GENERAL_TEXTSPEED]   = gSaveBlock2Ptr->optionsTextSpeed;
        sOptions->sel_general[MENUITEM_GENERAL_BATTLESCENE] = gSaveBlock2Ptr->optionsBattleSceneOff;
        sOptions->sel_general[MENUITEM_GENERAL_BATTLESTYLE] = gSaveBlock2Ptr->optionsBattleStyle;
        sOptions->sel_general[MENUITEM_GENERAL_BUTTONMODE]  = gSaveBlock2Ptr->optionsButtonMode;
        // sOptions->sel_general[MENUITEM_GENERAL_UNIT_SYSTEM] = gSaveBlock2Ptr->optionsUnitSystem;
        sOptions->sel_general[MENUITEM_GENERAL_FRAMETYPE]   = gSaveBlock2Ptr->optionsWindowFrameType;
        
        sOptions->sel_qol[MENUITEM_QOL_SAVEPROMPTS] = FlagGet(FLAG_SAVE_PROMPT);
        // sOptions->sel_qol[MENUITEM_QOL_HP_BAR]      = gSaveBlock2Ptr->optionsHpBarSpeed;
        // sOptions->sel_qol[MENUITEM_QOL_EXP_BAR]     = gSaveBlock2Ptr->optionsExpBarSpeed;
        // sOptions->sel_qol[MENUITEM_QOL_FONT]        = gSaveBlock2Ptr->optionsCurrentFont;
        // sOptions->sel_qol[MENUITEM_QOL_MATCHCALL]   = gSaveBlock2Ptr->optionsDisableMatchCall;

        sOptions->sel_sound[MENUITEM_SOUND_SOUND]       = gSaveBlock2Ptr->optionsSound;

        sOptions->submenu = MENU_GENERAL;

        gMain.state++;
        break;
    case 7:
        PutWindowTilemap(WIN_TOPBAR);
        DrawTopBarText();
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_DESCRIPTION);
        DrawDescriptionText();
        gMain.state++;
        break;
    case 9:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts();
        gMain.state++;
        break;
    case 10:
        taskId = CreateTask(Task_OptionMenuFadeIn, 0);
        
        sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MENUITEM_GENERAL_COUNT - 1, 110, 110, 0);

        for (i = 0; i < min(OPTIONS_ON_SCREEN, MenuItemCount()); i++)
            DrawChoices(i, i * Y_DIFF);

        HighlightOptionMenuItem();

        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
        gMain.state++;
        break;
    case 11:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 12:
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_OptionMenuProcessInput;
        SetGpuReg(REG_OFFSET_WIN0H, 0); // Idk man Im just trying to stop this stupid graphical bug from happening dont judge me
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG2);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        HighlightOptionMenuItem();
        return;
    }
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    int i = 0;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN , MenuItemCount());
    if (JOY_NEW(A_BUTTON))
    {
        if (sOptions->menuCursor[sOptions->submenu] == MenuItemCancel())
            gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == NUM_OPTIONS_FROM_BORDER) // don't advance visible cursor until scrolled to the bottom
        {
            if (--sOptions->menuCursor[sOptions->submenu] == 0)
                sOptions->visibleCursor[sOptions->submenu]--;
            else
                ScrollMenu(1);
        }
        else
        {
            if (--sOptions->menuCursor[sOptions->submenu] < 0) // Scroll all the way to the bottom.
            {
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = optionsToDraw-2;
                ScrollAll(0);
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-1;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - 1;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]--;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sOptions->visibleCursor[sOptions->submenu] == optionsToDraw-2) // don't advance visible cursor until scrolled to the bottom
        {
            if (++sOptions->menuCursor[sOptions->submenu] == MenuItemCount() - 1)
                sOptions->visibleCursor[sOptions->submenu]++;
            else
                ScrollMenu(0);
        }
        else
        {
            if (++sOptions->menuCursor[sOptions->submenu] >= MenuItemCount()-1) // Scroll all the way to the top.
            {
                sOptions->visibleCursor[sOptions->submenu] = optionsToDraw-2;
                sOptions->menuCursor[sOptions->submenu] = MenuItemCount() - optionsToDraw-1;
                ScrollAll(1);
                sOptions->visibleCursor[sOptions->submenu] = sOptions->menuCursor[sOptions->submenu] = 0;
            }
            else
            {
                sOptions->visibleCursor[sOptions->submenu]++;
            }
        }
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        if (sOptions->submenu == MENU_GENERAL)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_general[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsGeneral[cursor].processInput != NULL)
                {
                    sOptions->sel_general[cursor] = sItemFunctionsGeneral[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_general[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
        else if (sOptions->submenu == MENU_QOL)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_qol[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsQOL[cursor].processInput != NULL)
                {
                    sOptions->sel_qol[cursor] = sItemFunctionsQOL[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_qol[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
        else if (sOptions->submenu == MENU_SOUND)
        {
            int cursor = sOptions->menuCursor[sOptions->submenu];
            u8 previousOption = sOptions->sel_sound[cursor];
            if (CheckConditions(cursor))
            {
                if (sItemFunctionsSound[cursor].processInput != NULL)
                {
                    sOptions->sel_sound[cursor] = sItemFunctionsSound[cursor].processInput(previousOption);
                    ReDrawAll();
                    DrawDescriptionText();
                }

                if (previousOption != sOptions->sel_sound[cursor])
                    DrawChoices(cursor, sOptions->visibleCursor[sOptions->submenu] * Y_DIFF);
            }
        }
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if (sOptions->submenu != MENU_SOUND)
            sOptions->submenu++;
        else
            sOptions->submenu = 0;

        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
    else if (JOY_NEW(L_BUTTON))
    {
        if (sOptions->submenu != 0)
            sOptions->submenu--;
        else
            sOptions->submenu = MENU_SOUND;
        
        DrawTopBarText();
        ReDrawAll();
        HighlightOptionMenuItem();
        DrawDescriptionText();
    }
}

static void Task_OptionMenuSave(u8 taskId)
{
    SetCurrentDifficultyLevel(sOptions->sel_general[MENUITEM_GENERAL_DIFFICULTY]);
    gSaveBlock2Ptr->optionsTextSpeed        = sOptions->sel_general[MENUITEM_GENERAL_TEXTSPEED];
    gSaveBlock2Ptr->optionsBattleSceneOff   = sOptions->sel_general[MENUITEM_GENERAL_BATTLESCENE];
    gSaveBlock2Ptr->optionsBattleStyle      = sOptions->sel_general[MENUITEM_GENERAL_BATTLESTYLE];
    gSaveBlock2Ptr->optionsButtonMode       = sOptions->sel_general[MENUITEM_GENERAL_BUTTONMODE];
    // gSaveBlock2Ptr->optionsUnitSystem       = sOptions->sel_general[MENUITEM_GENERAL_UNIT_SYSTEM];
    gSaveBlock2Ptr->optionsWindowFrameType  = sOptions->sel_general[MENUITEM_GENERAL_FRAMETYPE];

    if (sOptions->sel_qol[MENUITEM_QOL_SAVEPROMPTS])
        FlagSet(FLAG_SAVE_PROMPT);
    else
        FlagClear(FLAG_SAVE_PROMPT);
    // gSaveBlock2Ptr->optionsHpBarSpeed       = sOptions->sel_qol[MENUITEM_QOL_HP_BAR];
    // gSaveBlock2Ptr->optionsExpBarSpeed      = sOptions->sel_qol[MENUITEM_QOL_EXP_BAR];
    // gSaveBlock2Ptr->optionsCurrentFont      = sOptions->sel_qol[MENUITEM_QOL_FONT];
    // gSaveBlock2Ptr->optionsDisableMatchCall = sOptions->sel_qol[MENUITEM_QOL_MATCHCALL];
    gSaveBlock2Ptr->optionsSound            = sOptions->sel_sound[MENUITEM_SOUND_SOUND];

    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sOptions);
        try_free(sBg2TilemapBuffer);
        try_free(sBg3TilemapBuffer);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        HideBg(2);
        HideBg(3);
        SetMainCallback2(gMain.savedCallback);
    }
}

static void ScrollMenu(int direction)
{
    int menuItem, pos;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (direction == 0) // scroll down
        menuItem = sOptions->menuCursor[sOptions->submenu] + NUM_OPTIONS_FROM_BORDER, pos = optionsToDraw - 1;
    else
        menuItem = sOptions->menuCursor[sOptions->submenu] - NUM_OPTIONS_FROM_BORDER, pos = 0;

    // Hide one
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF, PIXEL_FILL(0));
    // Show one
    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(0), 0, Y_DIFF * pos, 26 * 8, Y_DIFF);
    // Print
    DrawChoices(menuItem, pos * Y_DIFF);
    DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}
static void ScrollAll(int direction) // to bottom or top
{
    int i, y, menuItem, pos;
    int scrollCount;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    scrollCount = MenuItemCount() - optionsToDraw;

    // Move items up/down
    ScrollWindow(WIN_OPTIONS, direction, Y_DIFF * scrollCount, PIXEL_FILL(1));

    // Clear moved items
    if (direction == 0)
    {
        y = optionsToDraw - scrollCount;
        if (y < 0)
            y = optionsToDraw;
        y *= Y_DIFF;
    }
    else
    {
        y = 0;
    }

    FillWindowPixelRect(WIN_OPTIONS, PIXEL_FILL(0), 0, y, 26 * 8, Y_DIFF * scrollCount);
    // Print new texts
    for (i = 0; i < scrollCount; i++)
    {
        if (direction == 0) // From top to bottom
            menuItem = MenuItemCount() - 1 - i, pos = optionsToDraw - 1 - i;
        else // From bottom to top
            menuItem = i, pos = i;
        DrawChoices(menuItem, pos * Y_DIFF);
        DrawLeftSideOptionText(menuItem, (pos * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Process Input functions ****GENERIC****
static int GetMiddleX(const u8 *txt1, const u8 *txt2, const u8 *txt3)
{
    int xMid;
    int widthLeft = GetStringWidth(1, txt1, 0);
    int widthMid = GetStringWidth(1, txt2, 0);
    int widthRight = GetStringWidth(1, txt3, 0);

    widthMid -= (198 - 104);
    xMid = (widthLeft - widthMid - widthRight) / 2 + 104;
    return xMid;
}

static int XOptions_ProcessInput(int x, int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (++selection > (x - 1))
            selection = 0;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (--selection < 0)
            selection = (x - 1);
    }
    return selection;
}

static int ProcessInput_Options_Two(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
        selection ^= 1;

    return selection;
}

static int ProcessInput_Options_Three(int selection)
{
    return XOptions_ProcessInput(3, selection);
}

static int ProcessInput_Options_Four(int selection)
{
    return XOptions_ProcessInput(4, selection);
}

static int ProcessInput_Options_Eleven(int selection)
{
    return XOptions_ProcessInput(11, selection);
}

// Process Input functions ****SPECIFIC****
static int ProcessInput_Sound(int selection)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        selection ^= 1;
        SetPokemonCryStereo(selection);
    }

    return selection;
}

static int ProcessInput_FrameType(int selection)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (selection < WINDOW_FRAMES_COUNT - 1)
            selection++;
        else
            selection = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (selection != 0)
            selection--;
        else
            selection = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(selection)->tiles, 0x120, 0x1A2);
        LoadPalette(GetWindowFrameTilesPal(selection)->pal, 0x70, 0x20);
    }
    return selection;
}

// Draw Choices functions ****GENERIC****
static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style, bool8 active)
{
    bool8 choosen = FALSE;
    if (style != 0)
        choosen = TRUE;

    DrawRightSideChoiceText(text, x, y+1, choosen, active);
}

static void DrawChoices_Options_Four(const u8 *const *const strings, int selection, int y, bool8 active)
{
    static const u8 choiceOrders[][3] =
    {
        {0, 1, 2},
        {0, 1, 2},
        {1, 2, 3},
        {1, 2, 3},
    };
    u8 styles[4] = {0};
    int xMid;
    const u8 *order = choiceOrders[selection];

    styles[selection] = 1;
    xMid = GetMiddleX(strings[order[0]], strings[order[1]], strings[order[2]]);

    DrawOptionMenuChoice(strings[order[0]], 104, y, styles[order[0]], active);
    DrawOptionMenuChoice(strings[order[1]], xMid, y, styles[order[1]], active);
    DrawOptionMenuChoice(strings[order[2]], GetStringRightAlignXOffset(1, strings[order[2]], 198), y, styles[order[2]], active);
}

static void ReDrawAll(void)
{
    u8 menuItem = sOptions->menuCursor[sOptions->submenu] - sOptions->visibleCursor[sOptions->submenu];
    u8 i;
    u8 optionsToDraw = min(OPTIONS_ON_SCREEN, MenuItemCount());

    if (MenuItemCount() <= OPTIONS_ON_SCREEN) // Draw or delete the scrolling arrows based on options in the menu
    {
        if (sOptions->arrowTaskId != TASK_NONE)
        {
            RemoveScrollIndicatorArrowPair(sOptions->arrowTaskId);
            sOptions->arrowTaskId = TASK_NONE;
        }
    }
    else
    {
        if (sOptions->arrowTaskId == TASK_NONE)
            sOptions->arrowTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP, 240 / 2, 20, 110, MenuItemCount() - 1, 110, 110, 0);

    }

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(0));
    for (i = 0; i < optionsToDraw; i++)
    {
        DrawChoices(menuItem+i, i * Y_DIFF);
        DrawLeftSideOptionText(menuItem+i, (i * Y_DIFF) + 1);
    }
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
}

// Process Input functions ****SPECIFIC****
static const u8 *const sDifficultyStrings[] = {COMPOUND_STRING("Easy"), COMPOUND_STRING("Normal"), COMPOUND_STRING("Hard"), COMPOUND_STRING("Brutal")};
static void DrawChoices_Difficulty(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_GENERAL_DIFFICULTY);
    DrawChoices_Options_Four(sDifficultyStrings, selection, y, active);
}

static const u8 sText_Faster[] = _("FASTER");
static const u8 sText_Instant[] = _("INSTANT");
static const u8 *const sTextSpeedStrings[] = {COMPOUND_STRING("Slow"), COMPOUND_STRING("Medium"), COMPOUND_STRING("Fast"), sText_Faster};
static void DrawChoices_TextSpeed(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_GENERAL_TEXTSPEED);
    DrawChoices_Options_Four(sTextSpeedStrings, selection, y, active);
}

static void DrawChoices_BattleScene(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_GENERAL_BATTLESCENE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(COMPOUND_STRING("On"), 104, y, styles[0], active);
    DrawOptionMenuChoice(COMPOUND_STRING("Off"), GetStringRightAlignXOffset(FONT_NORMAL, COMPOUND_STRING("Off"), 198), y, styles[1], active);
}

static void DrawChoices_SavePrompts(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_QOL_SAVEPROMPTS);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(COMPOUND_STRING("Off"), 104, y, styles[0], active);
    DrawOptionMenuChoice(COMPOUND_STRING("On"), GetStringRightAlignXOffset(FONT_NORMAL, COMPOUND_STRING("Off"), 198), y, styles[1], active);
}

static void DrawChoices_BattleStyle(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_GENERAL_BATTLESTYLE);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(COMPOUND_STRING("Shift"), 104, y, styles[0], active);
    DrawOptionMenuChoice(COMPOUND_STRING("Set"), GetStringRightAlignXOffset(FONT_NORMAL, COMPOUND_STRING("Set"), 198), y, styles[1], active);
}

static void DrawChoices_Sound(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_SOUND_SOUND);
    u8 styles[2] = {0};
    styles[selection] = 1;

    DrawOptionMenuChoice(COMPOUND_STRING("Mono"), 104, y, styles[0], active);
    DrawOptionMenuChoice(COMPOUND_STRING("Stereo"), GetStringRightAlignXOffset(FONT_NORMAL, COMPOUND_STRING("Stereo"), 198), y, styles[1], active);
}

static void DrawChoices_ButtonMode(int selection, int y)
{
    bool8 active = CheckConditions(MENUITEM_GENERAL_BUTTONMODE);
    u8 styles[3] = {0};
    int xMid = GetMiddleX(COMPOUND_STRING("Normal"), COMPOUND_STRING("LR"), COMPOUND_STRING("L=A"));
    styles[selection] = 1;

    DrawOptionMenuChoice(COMPOUND_STRING("Normal"), 104, y, styles[0], active);
    DrawOptionMenuChoice(COMPOUND_STRING("LR"), xMid, y, styles[1], active);
    DrawOptionMenuChoice(COMPOUND_STRING("L=A"), GetStringRightAlignXOffset(1, COMPOUND_STRING("L=A"), 198), y, styles[2], active);
}

static const u8 sText_Normal[] = _("NORMAL");
static void DrawChoices_BarSpeed(int selection, int y) //HP and EXP
{
    // bool8 active = CheckConditions(MENUITEM_QOL_EXP_BAR);

    // if (selection == 0)
    //      DrawOptionMenuChoice(sText_Normal, 104, y, 1, active);
    // else if (selection < 10)
    // {
    //     u8 textPlus[] = _("+1{0x77}{0x77}{0x77}{0x77}{0x77}"); // 0x77 is to clear INSTANT text
    //     textPlus[1] = CHAR_0 + selection;
    //     DrawOptionMenuChoice(textPlus, 104, y, 1, active);
    // }
    // else
    //     DrawOptionMenuChoice(sText_Instant, 104, y, 1, active);
}

static void DrawChoices_UnitSystem(int selection, int y)
{
    // bool8 active = CheckConditions(MENUITEM_GENERAL_UNIT_SYSTEM);
    // u8 styles[2] = {0};
    // styles[selection] = 1;

    // DrawOptionMenuChoice(gText_UnitSystemImperial, 104, y, styles[0], active);
    // DrawOptionMenuChoice(gText_UnitSystemMetric, GetStringRightAlignXOffset(1, gText_UnitSystemMetric, 198), y, styles[1], active);
}

static void DrawChoices_FrameType(int selection, int y)
{
    // bool8 active = CheckConditions(MENUITEM_GENERAL_FRAMETYPE);
    // u8 text[16];
    // u8 n = selection + 1;
    // u16 i;

    // for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
    //     text[i] = gText_FrameTypeNumber[i];

    // // Convert a number to decimal string
    // if (n / 10 != 0)
    // {
    //     text[i] = n / 10 + CHAR_0;
    //     i++;
    //     text[i] = n % 10 + CHAR_0;
    //     i++;
    // }
    // else
    // {
    //     text[i] = n % 10 + CHAR_0;
    //     i++;
    //     text[i] = 0x77;
    //     i++;
    // }

    // text[i] = EOS;

    // DrawOptionMenuChoice(COMPOUND_STRING("TYPE"), 104, y, 0, active);
    // DrawOptionMenuChoice(text, 128, y, 1, active);
}

static void DrawChoices_Font(int selection, int y)
{
    // bool8 active = CheckConditions(MENUITEM_QOL_FONT);
    // u8 styles[2] = {0};
    // styles[selection] = 1;

    // DrawOptionMenuChoice(gText_OptionFontEmerald, 104, y, styles[0], active);
    // DrawOptionMenuChoice(gText_OptionFontFireRed, GetStringRightAlignXOffset(1, gText_OptionFontFireRed, 198), y, styles[1], active);
}

static void DrawChoices_MatchCall(int selection, int y)
{
    // bool8 active = CheckConditions(MENUITEM_QOL_MATCHCALL);
    // u8 styles[2] = {0};
    // styles[selection] = 1;

    // DrawOptionMenuChoice(gText_BattleSceneOn, 104, y, styles[0], active);
    // DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(1, gText_BattleSceneOff, 198), y, styles[1], active);
}


// Background tilemap
#define TILE_TOP_CORNER_L 0x1A2 // 418
#define TILE_TOP_EDGE     0x1A3 // 419
#define TILE_TOP_CORNER_R 0x1A4 // 420
#define TILE_LEFT_EDGE    0x1A5 // 421
#define TILE_RIGHT_EDGE   0x1A7 // 423
#define TILE_BOT_CORNER_L 0x1A8 // 424
#define TILE_BOT_EDGE     0x1A9 // 425
#define TILE_BOT_CORNER_R 0x1AA // 426

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Option Texts window
    //FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  2,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  2, 26,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  2,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  3,  1, 16,  7);
    //FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  3,  1, 16,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 13,  1,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 13, 26,  1,  7);
    //FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 13,  1,  1,  7);

    // Description window
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2, 14, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28, 14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1, 15,  1,  4,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28, 15,  1,  4,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}
