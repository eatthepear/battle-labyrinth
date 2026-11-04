#include "constants/global.h"
#include "constants/event_objects.h"

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL     OBJ_EVENT_GFX_LINK_RS_BRENDAN
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_USUAL_GREEN] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        .name = COMPOUND_STRING("USUAL GREEN"),

        //! DESC: outfit's description
        .desc = COMPOUND_STRING("The usual, but basic OUTFIT."),

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = {
            [MALE] =   TRAINER_PIC_BRENDAN,
            [FEMALE] = TRAINER_PIC_MAY,
        },

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY_UNDERWATER
           },
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY_FIELD_MOVE
            },
        },
    },
    [OUTFIT_JOHTO] = {
        .isHidden = FALSE,
        .name = COMPOUND_STRING("Johto"),
        .desc = COMPOUND_STRING("Avatars from the Johto games."),
        .trainerPics = {
            [MALE]   = TRAINER_PIC_RS_BRENDAN,
            [FEMALE] = TRAINER_PIC_KRIS,
        },
        .avatarGfxIds = {
           [MALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER
           },
           [FEMALE] = {
               [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_KRIS_NORMAL,
               [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_KRIS_ACRO_BIKE,
               [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_KRIS_SURFING,
               [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_KRIS_UNDERWATER
           },
        },
        .animGfxIds = {
            [MALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE
            },
            [FEMALE] = {
                [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_KRIS_FISHING,
                [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
                [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_KRIS_FIELD_MOVE
            },
        }
    },
};
