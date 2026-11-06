#include "constants/global.h"
#include "constants/event_objects.h"

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_BRENDAN] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        .name = COMPOUND_STRING("Brendan"),

        //! DESC: outfit's description
        .desc = COMPOUND_STRING("Avatar from the Hoenn games,\nwith a purple twist!"),

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = TRAINER_PIC_BRENDAN,

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_BRENDAN_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_BRENDAN_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_BRENDAN_UNDERWATER
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_BRENDAN_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_BRENDAN_WATERING,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_BRENDAN_DECORATING,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
        },
    },
    [OUTFIT_MAY] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        .name = COMPOUND_STRING("May"),

        //! DESC: outfit's description
        .desc = COMPOUND_STRING("Avatar from the Hoenn games,\nwith a purple twist!"),

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = TRAINER_PIC_MAY,

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_MAY_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_MAY_ACRO_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_MAY_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_MAY_UNDERWATER
        },

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_MAY_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_MAY_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_MAY_WATERING,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_MAY_DECORATING,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_MAY_FIELD_MOVE
        },
    },
    [OUTFIT_KRIS] = {
        .isHidden = FALSE,
        .name = COMPOUND_STRING("Kris"),
        .desc = COMPOUND_STRING("Avatars from the Johto games."),
        .trainerPics = TRAINER_PIC_KRIS,
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_KRIS_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_KRIS_ACRO_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_KRIS_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_KRIS_UNDERWATER
        },
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_KRIS_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_KRIS_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_KRIS_FIELD_MOVE
        }
    },
    [OUTFIT_ETHAN] = {
        .isHidden = FALSE,
        .name = COMPOUND_STRING("Ethan"),
        .desc = COMPOUND_STRING("Avatars from the Johto games."),
        .trainerPics = TRAINER_PIC_ETHAN,
        .avatarGfxIds = {
            [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ETHAN_NORMAL,
            [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ETHAN_ACRO_BIKE,
            [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ETHAN_SURFING,
            [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ETHAN_UNDERWATER
        },
        .animGfxIds = {
            [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ETHAN_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ETHAN_FISHING,
            [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ETHAN_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ETHAN_FIELD_MOVE,
            [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_ETHAN_FIELD_MOVE
        }
    },
};
