//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 75
    [TRAINER_NONE] =
    {
#line 76
        .trainerName = _("Testing"),
#line 77
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 78
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 79
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 81
        .doubleBattle = FALSE,
#line 80
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 82
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 83
        .randomLead = TRUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 85
            .species = SPECIES_ALOMOMOLA,
#line 85
            .gender = TRAINER_MON_FEMALE,
#line 85
            .heldItem = ITEM_CHOICE_SPECS,
#line 90
            .evs = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
#line 92
            .ivs = TRAINER_PARTY_IVS(31, 0, 31, 0, 31, 31),
#line 86
            .ability = ABILITY_HYDRATION,
#line 87
            .lvl = 67,
#line 91
            .nature = NATURE_NAUGHTY,
#line 88
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 89
            .teraType = TYPE_FAIRY,
            .moves = {
#line 93
                MOVE_ALLURING_VOICE,
                MOVE_AQUA_JET,
                MOVE_BATON_PASS,
                MOVE_ACROBATICS,
            },
            },
        },
    },
#line 98
    [TRAINER_PBL_NINA] =
    {
#line 99
        .trainerName = _("Nina"),
#line 100
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 101
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 102
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 104
        .doubleBattle = FALSE,
#line 103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 105
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 107
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 110
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 109
            .ability = ABILITY_RUN_AWAY,
#line 108
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 111
            .species = SPECIES_YAMPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 114
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 113
            .ability = ABILITY_BALL_FETCH,
#line 112
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 115
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 118
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 117
            .ability = ABILITY_VITAL_SPIRIT,
#line 116
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 119
    [TRAINER_PBL_MARIAM] =
    {
#line 120
        .trainerName = _("Mariam"),
#line 121
        .trainerClass = TRAINER_CLASS_LASS,
#line 122
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 123
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 125
        .doubleBattle = FALSE,
#line 124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 126
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 128
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 131
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 130
            .ability = ABILITY_RUN_AWAY,
#line 129
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 132
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 135
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .ability = ABILITY_BIG_PECKS,
#line 133
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 136
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 139
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 138
            .ability = ABILITY_CHLOROPHYLL,
#line 137
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [TRAINER_PBL_OSCAR] =
    {
#line 141
        .trainerName = _("Oscar"),
#line 142
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 143
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 146
        .doubleBattle = FALSE,
#line 145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 147
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 152
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 151
            .ability = ABILITY_GLUTTONY,
#line 150
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 153
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 156
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 155
            .ability = ABILITY_DAMP,
#line 154
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 157
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 160
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 159
            .ability = ABILITY_KEEN_EYE,
#line 158
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 161
    [TRAINER_PBL_COREY_LEVIATHAN_1] =
    {
#line 162
        .trainerName = _("Corey"),
#line 163
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 164
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 165
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 167
        .doubleBattle = FALSE,
#line 166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 168
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 169
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 171
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 174
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 173
            .ability = ABILITY_GLUTTONY,
#line 172
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 174
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 177
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 180
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 179
            .ability = ABILITY_GLUTTONY,
#line 178
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 180
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 183
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 186
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .ability = ABILITY_GLUTTONY,
#line 184
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 186
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 189
    [TRAINER_PBL_COREY_LEVIATHAN_1_BRUTAL] =
    {
#line 190
        .trainerName = _("Corey"),
#line 191
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 192
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 193
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 195
        .doubleBattle = FALSE,
#line 194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 196
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 197
        .randomLead = TRUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 199
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 201
            .ability = ABILITY_OVERGROW,
#line 200
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 202
                MOVE_LEAFAGE,
                MOVE_SCRATCH,
            },
            },
            {
#line 205
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 208
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 207
            .ability = ABILITY_BLAZE,
#line 206
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 208
                MOVE_EMBER,
                MOVE_SCRATCH,
            },
            },
            {
#line 211
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 214
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 213
            .ability = ABILITY_TORRENT,
#line 212
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 214
                MOVE_WATER_GUN,
                MOVE_SCRATCH,
            },
            },
        },
    },
#line 217
    [TRAINER_PBL_POLLY] =
    {
#line 218
        .trainerName = _("STEVEN"),
#line 219
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 220
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 222
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 224
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 228
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 227
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 226
            .lvl = 42,
#line 225
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 229
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 234
    [TRAINER_PBL_JEREMIAH] =
    {
#line 235
        .trainerName = _("STEVEN"),
#line 236
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 237
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 239
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 241
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 244
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .lvl = 42,
#line 242
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 246
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 251
    [TRAINER_PBL_HARPER] =
    {
#line 252
        .trainerName = _("STEVEN"),
#line 253
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 254
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 256
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 258
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 262
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 261
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 260
            .lvl = 42,
#line 259
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 263
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 268
    [TRAINER_PBL_ARTHUR] =
    {
#line 269
        .trainerName = _("STEVEN"),
#line 270
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 271
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 273
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 275
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 279
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 278
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 277
            .lvl = 42,
#line 276
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 280
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 285
    [TRAINER_PBL_JOEY_LEVIATHAN_2] =
    {
#line 286
        .trainerName = _("STEVEN"),
#line 287
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 288
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 290
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 292
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 296
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 295
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 294
            .lvl = 42,
#line 293
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 297
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 302
    [TRAINER_PBL_JOEY_LEVIATHAN_2_BRUTAL] =
    {
#line 303
        .trainerName = _("STEVEN"),
#line 304
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 305
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 307
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 309
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 312
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 311
            .lvl = 42,
#line 310
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 314
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 319
    [TRAINER_PBL_JEMMA] =
    {
#line 320
        .trainerName = _("STEVEN"),
#line 321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 322
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 324
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 326
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 330
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 329
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 328
            .lvl = 42,
#line 327
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 331
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 336
    [TRAINER_PBL_PATRICK] =
    {
#line 337
        .trainerName = _("STEVEN"),
#line 338
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 339
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 341
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 343
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 347
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 346
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 345
            .lvl = 42,
#line 344
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 348
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 353
    [TRAINER_PBL_ANNABELLE] =
    {
#line 354
        .trainerName = _("STEVEN"),
#line 355
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 356
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 358
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 360
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 363
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 362
            .lvl = 42,
#line 361
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 365
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 370
    [TRAINER_PBL_BORIS] =
    {
#line 371
        .trainerName = _("STEVEN"),
#line 372
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 373
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 375
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 377
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 381
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 380
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 379
            .lvl = 42,
#line 378
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 382
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 387
    [TRAINER_PBL_RICHARD] =
    {
#line 388
        .trainerName = _("STEVEN"),
#line 389
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 390
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 392
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 394
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 398
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 397
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 396
            .lvl = 42,
#line 395
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 399
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 404
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 405
        .trainerName = _("STEVEN"),
#line 406
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 407
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 409
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 411
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 414
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 413
            .lvl = 42,
#line 412
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 416
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 421
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
#line 422
        .trainerName = _("STEVEN"),
#line 423
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 424
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 426
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 428
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 432
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 431
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 430
            .lvl = 42,
#line 429
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 433
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 438
    [TRAINER_PBL_HERMAN] =
    {
#line 439
        .trainerName = _("STEVEN"),
#line 440
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 441
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 443
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 445
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 449
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 448
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 447
            .lvl = 42,
#line 446
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 450
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 455
    [TRAINER_PBL_RALPH] =
    {
#line 456
        .trainerName = _("STEVEN"),
#line 457
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 458
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 460
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 462
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 466
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 465
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 464
            .lvl = 42,
#line 463
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 467
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 472
    [TRAINER_PBL_SANTIAGO] =
    {
#line 473
        .trainerName = _("STEVEN"),
#line 474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 475
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 477
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 479
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 483
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 482
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 481
            .lvl = 42,
#line 480
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 484
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 489
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 490
        .trainerName = _("STEVEN"),
#line 491
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 492
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 494
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 496
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 499
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 498
            .lvl = 42,
#line 497
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 501
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 506
    [TRAINER_PBL_FRED] =
    {
#line 507
        .trainerName = _("STEVEN"),
#line 508
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 509
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 511
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 513
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 516
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 515
            .lvl = 42,
#line 514
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 518
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 523
    [TRAINER_PBL_LUCIA] =
    {
#line 524
        .trainerName = _("STEVEN"),
#line 525
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 526
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 528
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 530
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 534
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 533
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 532
            .lvl = 42,
#line 531
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 535
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 540
    [TRAINER_PBL_RITA_LEVIATHAN_4] =
    {
#line 541
        .trainerName = _("STEVEN"),
#line 542
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 543
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 545
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 547
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 551
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 550
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 549
            .lvl = 42,
#line 548
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 552
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 557
    [TRAINER_PBL_RITA_LEVIATHAN_4_BRUTAL] =
    {
#line 558
        .trainerName = _("STEVEN"),
#line 559
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 560
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 562
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 564
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 567
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 566
            .lvl = 42,
#line 565
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 569
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 574
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 575
        .trainerName = _("STEVEN"),
#line 576
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 577
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 579
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 581
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 584
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 583
            .lvl = 42,
#line 582
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 586
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 591
    [TRAINER_PBL_GILBERT] =
    {
#line 592
        .trainerName = _("STEVEN"),
#line 593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 594
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 596
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 598
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 602
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 601
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 600
            .lvl = 42,
#line 599
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 603
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 608
    [TRAINER_PBL_CLINTON] =
    {
#line 609
        .trainerName = _("STEVEN"),
#line 610
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 611
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 613
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 615
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 618
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 617
            .lvl = 42,
#line 616
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 620
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 625
    [TRAINER_PBL_REBECCA] =
    {
#line 626
        .trainerName = _("STEVEN"),
#line 627
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 628
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 630
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 632
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 636
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 635
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 634
            .lvl = 42,
#line 633
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 637
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 642
    [TRAINER_PBL_RYAN] =
    {
#line 643
        .trainerName = _("STEVEN"),
#line 644
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 645
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 647
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 649
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 652
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 651
            .lvl = 42,
#line 650
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 654
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 659
    [TRAINER_PBL_CAITLYN] =
    {
#line 660
        .trainerName = _("STEVEN"),
#line 661
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 662
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 664
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 666
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 670
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 669
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 668
            .lvl = 42,
#line 667
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 671
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 676
    [TRAINER_PBL_KENNETH] =
    {
#line 677
        .trainerName = _("STEVEN"),
#line 678
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 679
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 681
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 683
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 687
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 686
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 685
            .lvl = 42,
#line 684
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 688
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 693
    [TRAINER_PBL_KEVIN] =
    {
#line 694
        .trainerName = _("STEVEN"),
#line 695
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 696
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 698
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 700
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 704
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 703
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 702
            .lvl = 42,
#line 701
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 705
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 710
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
    {
#line 711
        .trainerName = _("STEVEN"),
#line 712
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 713
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 715
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 717
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 721
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 720
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 719
            .lvl = 42,
#line 718
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 722
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 727
    [TRAINER_PBL_ZACK] =
    {
#line 728
        .trainerName = _("STEVEN"),
#line 729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 730
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 732
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 734
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 737
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 736
            .lvl = 42,
#line 735
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 739
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 744
    [TRAINER_PBL_MELANIE] =
    {
#line 745
        .trainerName = _("STEVEN"),
#line 746
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 747
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 749
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 751
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 754
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 753
            .lvl = 42,
#line 752
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 756
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 761
    [TRAINER_PBL_CONSTANCE] =
    {
#line 762
        .trainerName = _("STEVEN"),
#line 763
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 764
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 766
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 768
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 772
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 771
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 770
            .lvl = 42,
#line 769
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 773
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 778
    [TRAINER_PBL_FRANK] =
    {
#line 779
        .trainerName = _("STEVEN"),
#line 780
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 781
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 783
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 785
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 788
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 787
            .lvl = 42,
#line 786
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 790
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 795
    [TRAINER_PBL_DUDLEY] =
    {
#line 796
        .trainerName = _("STEVEN"),
#line 797
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 798
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 800
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 802
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 806
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 805
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 804
            .lvl = 42,
#line 803
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 807
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 812
    [TRAINER_PBL_DAISY] =
    {
#line 813
        .trainerName = _("STEVEN"),
#line 814
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 815
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 817
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 819
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 823
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 822
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 821
            .lvl = 42,
#line 820
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 824
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 829
    [TRAINER_PBL_MINA_LEVIATHAN_6] =
    {
#line 830
        .trainerName = _("STEVEN"),
#line 831
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 832
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 834
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 836
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 840
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 839
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 838
            .lvl = 42,
#line 837
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 841
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 846
    [TRAINER_PBL_MILLIE] =
    {
#line 847
        .trainerName = _("STEVEN"),
#line 848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 849
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 851
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 853
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 857
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 856
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 855
            .lvl = 42,
#line 854
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 858
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 863
    [TRAINER_PBL_JAMAL] =
    {
#line 864
        .trainerName = _("STEVEN"),
#line 865
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 866
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 868
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 870
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 874
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 873
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 872
            .lvl = 42,
#line 871
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 875
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 880
    [TRAINER_PBL_PAIGE] =
    {
#line 881
        .trainerName = _("STEVEN"),
#line 882
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 883
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 885
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 887
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 891
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 890
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 889
            .lvl = 42,
#line 888
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 892
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 897
    [TRAINER_PBL_SETH] =
    {
#line 898
        .trainerName = _("STEVEN"),
#line 899
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 900
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 902
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 904
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 908
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 907
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 906
            .lvl = 42,
#line 905
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 909
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 914
    [TRAINER_PBL_CONNIE] =
    {
#line 915
        .trainerName = _("STEVEN"),
#line 916
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 917
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 919
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 921
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 925
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 924
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 923
            .lvl = 42,
#line 922
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 926
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 931
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 932
        .trainerName = _("STEVEN"),
#line 933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 934
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 936
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 938
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 942
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 941
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 940
            .lvl = 42,
#line 939
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 943
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 948
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 949
        .trainerName = _("STEVEN"),
#line 950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 951
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 953
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 955
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 959
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 958
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 957
            .lvl = 42,
#line 956
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 960
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 965
    [TRAINER_PBL_JIMMY] =
    {
#line 966
        .trainerName = _("STEVEN"),
#line 967
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 968
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 970
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 972
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 976
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 975
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 974
            .lvl = 42,
#line 973
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 977
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 982
    [TRAINER_PBL_EMILIANO] =
    {
#line 983
        .trainerName = _("STEVEN"),
#line 984
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 985
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 987
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 989
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 993
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 992
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 991
            .lvl = 42,
#line 990
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 994
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 999
    [TRAINER_PBL_KAREN] =
    {
#line 1000
        .trainerName = _("STEVEN"),
#line 1001
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1002
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1004
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1006
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1010
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1009
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1008
            .lvl = 42,
#line 1007
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1011
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1016
    [TRAINER_PBL_JAYDEN] =
    {
#line 1017
        .trainerName = _("STEVEN"),
#line 1018
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1019
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1021
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1023
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1027
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1026
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1025
            .lvl = 42,
#line 1024
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1028
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1033
    [TRAINER_PBL_NEIL] =
    {
#line 1034
        .trainerName = _("STEVEN"),
#line 1035
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1036
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1038
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1040
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1044
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1043
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1042
            .lvl = 42,
#line 1041
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1045
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1050
    [TRAINER_PBL_TAMARA] =
    {
#line 1051
        .trainerName = _("STEVEN"),
#line 1052
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1053
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1055
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1057
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1060
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1059
            .lvl = 42,
#line 1058
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1062
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1067
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8] =
    {
#line 1068
        .trainerName = _("STEVEN"),
#line 1069
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1070
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1072
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1074
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1078
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1077
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1076
            .lvl = 42,
#line 1075
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1079
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1084
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8_BRUTAL] =
    {
#line 1085
        .trainerName = _("STEVEN"),
#line 1086
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1087
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1089
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1091
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1095
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1094
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1093
            .lvl = 42,
#line 1092
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1096
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1101
    [TRAINER_PBL_WALLY_ZONE8D] =
    {
#line 1102
        .trainerName = _("STEVEN"),
#line 1103
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1104
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1106
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1108
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1111
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1110
            .lvl = 42,
#line 1109
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1118
    [TRAINER_PBL_COOPER] =
    {
#line 1119
        .trainerName = _("STEVEN"),
#line 1120
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1121
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1123
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1125
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1129
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1128
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1127
            .lvl = 42,
#line 1126
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1130
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1135
    [TRAINER_PBL_CARMINE] =
    {
#line 1136
        .trainerName = _("STEVEN"),
#line 1137
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1138
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1140
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1142
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1145
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1144
            .lvl = 42,
#line 1143
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1147
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1152
    [TRAINER_PBL_ARI] =
    {
#line 1153
        .trainerName = _("STEVEN"),
#line 1154
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1155
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1157
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1159
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1163
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1162
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1161
            .lvl = 42,
#line 1160
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1164
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1169
    [TRAINER_PBL_BERTHA] =
    {
#line 1170
        .trainerName = _("STEVEN"),
#line 1171
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1172
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1174
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1176
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1180
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1179
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1178
            .lvl = 42,
#line 1177
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1181
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1186
    [TRAINER_PBL_CASSANDRA] =
    {
#line 1187
        .trainerName = _("STEVEN"),
#line 1188
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1189
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1191
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1193
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1196
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1195
            .lvl = 42,
#line 1194
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1198
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1203
    [TRAINER_PBL_DOMINIC] =
    {
#line 1204
        .trainerName = _("STEVEN"),
#line 1205
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1206
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1208
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1210
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1213
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1212
            .lvl = 42,
#line 1211
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1215
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1220
    [TRAINER_PBL_ERICA] =
    {
#line 1221
        .trainerName = _("STEVEN"),
#line 1222
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1223
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1225
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1227
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1231
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1230
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1229
            .lvl = 42,
#line 1228
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1232
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1237
    [TRAINER_PBL_KYLE] =
    {
#line 1238
        .trainerName = _("STEVEN"),
#line 1239
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1240
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1242
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1244
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1247
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1246
            .lvl = 42,
#line 1245
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1249
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1254
    [TRAINER_PBL_BELLE] =
    {
#line 1255
        .trainerName = _("STEVEN"),
#line 1256
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1257
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1259
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1261
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1265
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1264
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1263
            .lvl = 42,
#line 1262
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1266
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1271
    [TRAINER_PBL_DEWEY] =
    {
#line 1272
        .trainerName = _("STEVEN"),
#line 1273
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1274
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1276
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1278
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1281
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1280
            .lvl = 42,
#line 1279
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1283
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1288
    [TRAINER_PBL_PEARLIE] =
    {
#line 1289
        .trainerName = _("STEVEN"),
#line 1290
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1291
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1293
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1295
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1299
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1298
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1297
            .lvl = 42,
#line 1296
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1300
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1305
    [TRAINER_PBL_ERNEST] =
    {
#line 1306
        .trainerName = _("STEVEN"),
#line 1307
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1308
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1310
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1312
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1316
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1315
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1314
            .lvl = 42,
#line 1313
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1317
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1322
    [TRAINER_PBL_ALANA] =
    {
#line 1323
        .trainerName = _("STEVEN"),
#line 1324
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1325
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1327
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1329
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1332
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1331
            .lvl = 42,
#line 1330
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1334
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1339
    [TRAINER_PBL_SUSAN] =
    {
#line 1340
        .trainerName = _("STEVEN"),
#line 1341
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1342
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1344
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1346
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1349
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1348
            .lvl = 42,
#line 1347
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1351
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1356
    [TRAINER_PBL_CONRAD] =
    {
#line 1357
        .trainerName = _("STEVEN"),
#line 1358
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1359
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1361
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1363
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1367
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1366
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1365
            .lvl = 42,
#line 1364
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1368
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1373
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 1374
        .trainerName = _("STEVEN"),
#line 1375
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1376
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1378
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1380
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1384
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1383
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1382
            .lvl = 42,
#line 1381
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1385
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1390
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 1391
        .trainerName = _("STEVEN"),
#line 1392
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1393
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1395
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1397
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1401
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1400
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1399
            .lvl = 42,
#line 1398
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1402
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1407
    [TRAINER_PBL_JEANETTE] =
    {
#line 1408
        .trainerName = _("STEVEN"),
#line 1409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1410
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1412
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1414
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1417
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1416
            .lvl = 42,
#line 1415
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1419
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1424
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 1425
        .trainerName = _("STEVEN"),
#line 1426
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1427
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1429
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1431
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1434
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1433
            .lvl = 42,
#line 1432
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1436
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1441
    [TRAINER_PBL_JOEL] =
    {
#line 1442
        .trainerName = _("STEVEN"),
#line 1443
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1444
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1446
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1448
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1452
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1451
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1450
            .lvl = 42,
#line 1449
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1453
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1458
    [TRAINER_PBL_MARION] =
    {
#line 1459
        .trainerName = _("STEVEN"),
#line 1460
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1461
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1463
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1465
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1468
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1467
            .lvl = 42,
#line 1466
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1470
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1475
    [TRAINER_PBL_REGINA] =
    {
#line 1476
        .trainerName = _("STEVEN"),
#line 1477
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1478
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1480
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1482
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1486
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1485
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1484
            .lvl = 42,
#line 1483
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1487
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1492
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 1493
        .trainerName = _("STEVEN"),
#line 1494
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1495
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1497
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1499
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1503
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1502
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1501
            .lvl = 42,
#line 1500
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1504
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1509
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 1510
        .trainerName = _("STEVEN"),
#line 1511
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1512
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1514
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1516
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1519
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1518
            .lvl = 42,
#line 1517
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1521
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1526
    [TRAINER_PBL_ESSENCE] =
    {
#line 1527
        .trainerName = _("STEVEN"),
#line 1528
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1529
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1531
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1533
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1537
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1536
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1535
            .lvl = 42,
#line 1534
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1538
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1543
    [TRAINER_PBL_DOLORES] =
    {
#line 1544
        .trainerName = _("STEVEN"),
#line 1545
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1546
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1548
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1550
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1554
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1553
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1552
            .lvl = 42,
#line 1551
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1555
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1560
    [TRAINER_PBL_JULIE] =
    {
#line 1561
        .trainerName = _("STEVEN"),
#line 1562
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1563
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1565
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1567
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1571
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1570
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1569
            .lvl = 42,
#line 1568
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1572
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1577
    [TRAINER_PBL_ROMULUS] =
    {
#line 1578
        .trainerName = _("STEVEN"),
#line 1579
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1580
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1582
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1584
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1588
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1587
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1586
            .lvl = 42,
#line 1585
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1589
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1594
    [TRAINER_PBL_TREVOR] =
    {
#line 1595
        .trainerName = _("STEVEN"),
#line 1596
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1597
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1599
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1601
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1605
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1604
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1603
            .lvl = 42,
#line 1602
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1606
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1611
    [TRAINER_PBL_FEDERICO] =
    {
#line 1612
        .trainerName = _("STEVEN"),
#line 1613
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1614
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1616
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1618
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1622
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1621
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1620
            .lvl = 42,
#line 1619
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1623
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1628
    [TRAINER_PBL_GENIE] =
    {
#line 1629
        .trainerName = _("STEVEN"),
#line 1630
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1631
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1633
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1635
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1639
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1638
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1637
            .lvl = 42,
#line 1636
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1640
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1645
    [TRAINER_PBL_HILDA] =
    {
#line 1646
        .trainerName = _("STEVEN"),
#line 1647
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1648
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1650
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1652
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1656
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1655
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1654
            .lvl = 42,
#line 1653
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1657
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1662
    [TRAINER_PBL_KINLEY] =
    {
#line 1663
        .trainerName = _("STEVEN"),
#line 1664
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1665
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1667
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1669
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1673
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1672
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1671
            .lvl = 42,
#line 1670
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1674
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1679
    [TRAINER_PBL_VIOLET] =
    {
#line 1680
        .trainerName = _("STEVEN"),
#line 1681
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1682
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1684
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1686
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1689
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1688
            .lvl = 42,
#line 1687
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1691
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1696
    [TRAINER_PBL_WANDA] =
    {
#line 1697
        .trainerName = _("STEVEN"),
#line 1698
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1699
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1701
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1703
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1706
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1705
            .lvl = 42,
#line 1704
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1708
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1713
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 1714
        .trainerName = _("STEVEN"),
#line 1715
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1716
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1718
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1720
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1724
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1723
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1722
            .lvl = 42,
#line 1721
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1725
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1730
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 1731
        .trainerName = _("STEVEN"),
#line 1732
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1733
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1735
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1737
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1741
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1740
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1739
            .lvl = 42,
#line 1738
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1742
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1747
    [TRAINER_PBL_STEVE] =
    {
#line 1748
        .trainerName = _("STEVEN"),
#line 1749
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1750
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1752
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1754
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1757
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1756
            .lvl = 42,
#line 1755
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1759
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1764
    [TRAINER_PBL_GOULD] =
    {
#line 1765
        .trainerName = _("STEVEN"),
#line 1766
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1767
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1769
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1771
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1775
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1774
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1773
            .lvl = 42,
#line 1772
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1776
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1781
    [TRAINER_PBL_MENDEL] =
    {
#line 1782
        .trainerName = _("STEVEN"),
#line 1783
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1784
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1786
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1788
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1792
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1791
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1790
            .lvl = 42,
#line 1789
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1793
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1798
    [TRAINER_PBL_DARWIN] =
    {
#line 1799
        .trainerName = _("STEVEN"),
#line 1800
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1801
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1803
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1805
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1809
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1808
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1807
            .lvl = 42,
#line 1806
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1810
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1815
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 1816
        .trainerName = _("STEVEN"),
#line 1817
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1818
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1820
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1822
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1826
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1825
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1824
            .lvl = 42,
#line 1823
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1827
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1832
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 1833
        .trainerName = _("STEVEN"),
#line 1834
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1835
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1837
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1839
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1843
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1842
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1841
            .lvl = 42,
#line 1840
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1844
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1849
    [TRAINER_PBL_BART] =
    {
#line 1850
        .trainerName = _("STEVEN"),
#line 1851
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1852
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1854
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1856
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1860
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1859
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1858
            .lvl = 42,
#line 1857
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1861
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1866
    [TRAINER_PBL_NIGEL] =
    {
#line 1867
        .trainerName = _("STEVEN"),
#line 1868
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1869
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1871
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1873
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1876
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1875
            .lvl = 42,
#line 1874
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1878
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1883
    [TRAINER_PBL_LOLA] =
    {
#line 1884
        .trainerName = _("STEVEN"),
#line 1885
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1886
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1888
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1890
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1894
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1893
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1892
            .lvl = 42,
#line 1891
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1895
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1900
    [TRAINER_PBL_CHARLIE] =
    {
#line 1901
        .trainerName = _("STEVEN"),
#line 1902
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1903
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1905
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1907
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1911
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1910
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1909
            .lvl = 42,
#line 1908
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1912
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1917
    [TRAINER_PBL_RANDOLPH] =
    {
#line 1918
        .trainerName = _("STEVEN"),
#line 1919
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1920
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1922
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1924
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1928
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1927
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1926
            .lvl = 42,
#line 1925
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1929
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1934
    [TRAINER_PBL_TODD] =
    {
#line 1935
        .trainerName = _("STEVEN"),
#line 1936
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1937
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1939
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1941
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1945
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1944
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1943
            .lvl = 42,
#line 1942
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1946
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1951
    [TRAINER_PBL_RUSSELL] =
    {
#line 1952
        .trainerName = _("STEVEN"),
#line 1953
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1954
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1956
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1958
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1962
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1961
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1960
            .lvl = 42,
#line 1959
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1963
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1968
    [TRAINER_PBL_OTIS] =
    {
#line 1969
        .trainerName = _("STEVEN"),
#line 1970
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1971
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1973
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1975
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1979
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1978
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1977
            .lvl = 42,
#line 1976
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1980
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1985
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 1986
        .trainerName = _("STEVEN"),
#line 1987
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1988
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1990
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1992
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1996
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1995
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1994
            .lvl = 42,
#line 1993
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1997
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2002
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 2003
        .trainerName = _("STEVEN"),
#line 2004
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2005
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2007
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2009
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2012
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2011
            .lvl = 42,
#line 2010
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2014
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2019
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 2020
        .trainerName = _("STEVEN"),
#line 2021
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2022
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2024
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2026
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2030
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2029
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2028
            .lvl = 42,
#line 2027
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2031
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2036
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 2037
        .trainerName = _("STEVEN"),
#line 2038
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2039
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2041
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2043
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2047
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2046
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2045
            .lvl = 42,
#line 2044
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2048
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2053
    [TRAINER_PBL_IONA] =
    {
#line 2054
        .trainerName = _("STEVEN"),
#line 2055
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2056
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2058
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2060
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2064
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2063
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2062
            .lvl = 42,
#line 2061
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2065
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2070
    [TRAINER_PBL_BERKE] =
    {
#line 2071
        .trainerName = _("STEVEN"),
#line 2072
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2073
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2075
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2077
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2081
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2080
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2079
            .lvl = 42,
#line 2078
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2082
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2087
    [TRAINER_PBL_TANISHA] =
    {
#line 2088
        .trainerName = _("STEVEN"),
#line 2089
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2090
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2092
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2094
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2098
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2097
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2096
            .lvl = 42,
#line 2095
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2099
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2104
    [TRAINER_PBL_ROBERT] =
    {
#line 2105
        .trainerName = _("STEVEN"),
#line 2106
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2107
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2109
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2111
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2114
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2113
            .lvl = 42,
#line 2112
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2116
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2121
    [TRAINER_PBL_CHRIS] =
    {
#line 2122
        .trainerName = _("STEVEN"),
#line 2123
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2124
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2126
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2128
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2131
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2130
            .lvl = 42,
#line 2129
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2133
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2138
    [TRAINER_PBL_ANGUS] =
    {
#line 2139
        .trainerName = _("STEVEN"),
#line 2140
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2141
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2143
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2145
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2149
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2148
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2147
            .lvl = 42,
#line 2146
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2150
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2155
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 2156
        .trainerName = _("STEVEN"),
#line 2157
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2158
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2160
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2162
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2166
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2165
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2164
            .lvl = 42,
#line 2163
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2167
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2172
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 2173
        .trainerName = _("STEVEN"),
#line 2174
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2175
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2177
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2179
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2183
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2182
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2181
            .lvl = 42,
#line 2180
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2184
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2189
    [TRAINER_PBL_AXLE] =
    {
#line 2190
        .trainerName = _("STEVEN"),
#line 2191
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2192
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2194
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2196
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2200
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2199
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2198
            .lvl = 42,
#line 2197
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2201
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2206
    [TRAINER_PBL_RAFAEL] =
    {
#line 2207
        .trainerName = _("STEVEN"),
#line 2208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2209
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2211
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2213
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2217
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2216
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2215
            .lvl = 42,
#line 2214
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2218
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2223
    [TRAINER_PBL_GEORGINA] =
    {
#line 2224
        .trainerName = _("STEVEN"),
#line 2225
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2226
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2228
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2234
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2233
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2232
            .lvl = 42,
#line 2231
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2235
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2240
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 2241
        .trainerName = _("STEVEN"),
#line 2242
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2243
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2245
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2247
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2251
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2250
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2249
            .lvl = 42,
#line 2248
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2252
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2257
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 2258
        .trainerName = _("STEVEN"),
#line 2259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2260
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2262
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2264
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2268
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2267
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2266
            .lvl = 42,
#line 2265
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2269
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2274
    [TRAINER_PBL_DORIS] =
    {
#line 2275
        .trainerName = _("STEVEN"),
#line 2276
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2277
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2279
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2281
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2285
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2284
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2283
            .lvl = 42,
#line 2282
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2286
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2291
    [TRAINER_PBL_HOMER] =
    {
#line 2292
        .trainerName = _("STEVEN"),
#line 2293
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2294
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2296
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2298
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2301
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2300
            .lvl = 42,
#line 2299
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2303
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2308
    [TRAINER_PBL_JOHN] =
    {
#line 2309
        .trainerName = _("STEVEN"),
#line 2310
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2311
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2313
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2315
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2319
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2318
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2317
            .lvl = 42,
#line 2316
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2320
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2325
    [TRAINER_PBL_GLENN] =
    {
#line 2326
        .trainerName = _("STEVEN"),
#line 2327
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2328
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2330
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2332
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2336
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2335
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2334
            .lvl = 42,
#line 2333
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2337
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2342
    [TRAINER_PBL_JAY] =
    {
#line 2343
        .trainerName = _("STEVEN"),
#line 2344
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2345
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2347
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2349
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2353
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2352
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2351
            .lvl = 42,
#line 2350
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2354
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2359
    [TRAINER_PBL_TYLER] =
    {
#line 2360
        .trainerName = _("STEVEN"),
#line 2361
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2362
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2364
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2366
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2370
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2369
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2368
            .lvl = 42,
#line 2367
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2371
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2376
    [TRAINER_PBL_TERRENCE] =
    {
#line 2377
        .trainerName = _("STEVEN"),
#line 2378
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2379
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2381
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2387
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2386
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2385
            .lvl = 42,
#line 2384
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2388
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2393
    [TRAINER_PBL_MARTY] =
    {
#line 2394
        .trainerName = _("STEVEN"),
#line 2395
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2396
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2398
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2400
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2404
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2403
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2402
            .lvl = 42,
#line 2401
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2405
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2410
    [TRAINER_PBL_KARI] =
    {
#line 2411
        .trainerName = _("STEVEN"),
#line 2412
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2413
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2415
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2417
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2421
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2420
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2419
            .lvl = 42,
#line 2418
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2422
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2427
    [TRAINER_PBL_ABRAHAM] =
    {
#line 2428
        .trainerName = _("STEVEN"),
#line 2429
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2430
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2432
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2434
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2438
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2437
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2436
            .lvl = 42,
#line 2435
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2439
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2444
    [TRAINER_PBL_MELINDA] =
    {
#line 2445
        .trainerName = _("STEVEN"),
#line 2446
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2447
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2449
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2451
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2455
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2454
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2453
            .lvl = 42,
#line 2452
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2456
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2461
    [TRAINER_PBL_EMILIO] =
    {
#line 2462
        .trainerName = _("STEVEN"),
#line 2463
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2464
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2466
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2468
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2472
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2471
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2470
            .lvl = 42,
#line 2469
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2473
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2478
    [TRAINER_PBL_REX] =
    {
#line 2479
        .trainerName = _("STEVEN"),
#line 2480
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2481
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2483
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2485
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2489
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2488
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2487
            .lvl = 42,
#line 2486
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2490
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2495
    [TRAINER_PBL_LOUIS] =
    {
#line 2496
        .trainerName = _("STEVEN"),
#line 2497
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2498
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2500
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2502
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2506
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2505
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2504
            .lvl = 42,
#line 2503
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2507
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2512
    [TRAINER_PBL_LEROY] =
    {
#line 2513
        .trainerName = _("STEVEN"),
#line 2514
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2515
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2517
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2519
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2523
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2522
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2521
            .lvl = 42,
#line 2520
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2524
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2529
    [TRAINER_PBL_ELTON] =
    {
#line 2530
        .trainerName = _("STEVEN"),
#line 2531
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2532
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2534
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2536
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2540
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2539
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2538
            .lvl = 42,
#line 2537
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2541
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2546
    [TRAINER_PBL_WILLIE] =
    {
#line 2547
        .trainerName = _("STEVEN"),
#line 2548
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2549
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2551
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2553
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2557
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2556
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2555
            .lvl = 42,
#line 2554
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2558
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2563
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 2564
        .trainerName = _("STEVEN"),
#line 2565
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2566
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2568
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2570
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2574
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2573
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2572
            .lvl = 42,
#line 2571
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2575
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2580
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 2581
        .trainerName = _("STEVEN"),
#line 2582
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2583
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2585
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2587
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2591
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2590
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2589
            .lvl = 42,
#line 2588
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2592
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2597
    [TRAINER_PBL_PIRATE_1] =
    {
#line 2598
        .trainerName = _("STEVEN"),
#line 2599
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2600
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2602
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2604
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2608
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2607
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2606
            .lvl = 42,
#line 2605
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2609
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2614
    [TRAINER_PBL_PIRATE_2] =
    {
#line 2615
        .trainerName = _("STEVEN"),
#line 2616
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2617
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2619
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2621
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2625
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2624
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2623
            .lvl = 42,
#line 2622
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2626
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2631
    [TRAINER_PBL_PIRATE_3] =
    {
#line 2632
        .trainerName = _("STEVEN"),
#line 2633
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2634
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2636
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2638
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2642
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2641
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2640
            .lvl = 42,
#line 2639
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2643
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2648
    [TRAINER_PBL_PIRATE_4] =
    {
#line 2649
        .trainerName = _("STEVEN"),
#line 2650
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2651
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2653
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2655
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2659
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2658
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2657
            .lvl = 42,
#line 2656
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2660
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2665
    [TRAINER_PBL_SHAWN] =
    {
#line 2666
        .trainerName = _("STEVEN"),
#line 2667
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2668
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2670
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2672
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2676
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2675
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2674
            .lvl = 42,
#line 2673
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2677
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2682
    [TRAINER_PBL_FERNANDO] =
    {
#line 2683
        .trainerName = _("STEVEN"),
#line 2684
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2685
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2687
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2689
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2693
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2692
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2691
            .lvl = 42,
#line 2690
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2694
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2699
    [TRAINER_PBL_KANE] =
    {
#line 2700
        .trainerName = _("STEVEN"),
#line 2701
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2702
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2704
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2706
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2710
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2709
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2708
            .lvl = 42,
#line 2707
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2711
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2716
    [TRAINER_PBL_KIRK] =
    {
#line 2717
        .trainerName = _("STEVEN"),
#line 2718
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2719
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2721
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2723
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2727
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2726
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2725
            .lvl = 42,
#line 2724
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2728
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2733
    [TRAINER_PBL_DALTON] =
    {
#line 2734
        .trainerName = _("STEVEN"),
#line 2735
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2736
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2738
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2740
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2743
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2742
            .lvl = 42,
#line 2741
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2745
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2750
    [TRAINER_PBL_LEE] =
    {
#line 2751
        .trainerName = _("STEVEN"),
#line 2752
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2753
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2755
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2757
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2760
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2759
            .lvl = 42,
#line 2758
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2762
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2767
    [TRAINER_PBL_BLANCHE] =
    {
#line 2768
        .trainerName = _("STEVEN"),
#line 2769
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2770
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2772
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2774
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2778
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2777
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2776
            .lvl = 42,
#line 2775
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2779
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2784
    [TRAINER_PBL_TROY] =
    {
#line 2785
        .trainerName = _("STEVEN"),
#line 2786
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2787
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2789
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2791
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2795
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2794
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2793
            .lvl = 42,
#line 2792
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2796
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2801
    [TRAINER_PBL_ABED] =
    {
#line 2802
        .trainerName = _("STEVEN"),
#line 2803
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2804
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2806
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2808
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2812
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2811
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2810
            .lvl = 42,
#line 2809
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2813
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2818
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 2819
        .trainerName = _("STEVEN"),
#line 2820
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2821
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2823
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2825
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2829
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2828
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2827
            .lvl = 42,
#line 2826
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2830
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2835
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 2836
        .trainerName = _("STEVEN"),
#line 2837
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2838
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2840
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2842
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2846
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2845
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2844
            .lvl = 42,
#line 2843
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2847
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2852
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 2853
        .trainerName = _("STEVEN"),
#line 2854
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2855
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2857
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2859
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2863
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2862
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2861
            .lvl = 42,
#line 2860
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2864
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2869
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 2870
        .trainerName = _("STEVEN"),
#line 2871
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2872
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2874
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2876
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2880
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2879
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2878
            .lvl = 42,
#line 2877
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2881
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2886
    [TRAINER_PBL_ANITA] =
    {
#line 2887
        .trainerName = _("STEVEN"),
#line 2888
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2889
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2891
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2893
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2897
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2896
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2895
            .lvl = 42,
#line 2894
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2898
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2903
    [TRAINER_PBL_DESIREE] =
    {
#line 2904
        .trainerName = _("STEVEN"),
#line 2905
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2906
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2908
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2910
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2914
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2913
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2912
            .lvl = 42,
#line 2911
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2915
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2920
    [TRAINER_PBL_HOWARD] =
    {
#line 2921
        .trainerName = _("STEVEN"),
#line 2922
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2923
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2925
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2927
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2931
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2930
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2929
            .lvl = 42,
#line 2928
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2932
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2937
    [TRAINER_PBL_ELOISE] =
    {
#line 2938
        .trainerName = _("STEVEN"),
#line 2939
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2940
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2942
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2944
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2948
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2947
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2946
            .lvl = 42,
#line 2945
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2949
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2954
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 2955
        .trainerName = _("STEVEN"),
#line 2956
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2957
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2959
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2961
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2965
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2964
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2963
            .lvl = 42,
#line 2962
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2966
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2971
    [TRAINER_PBL_AMIR] =
    {
#line 2972
        .trainerName = _("STEVEN"),
#line 2973
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2974
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2976
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2978
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2982
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2981
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2980
            .lvl = 42,
#line 2979
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2983
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2988
    [TRAINER_PBL_GETHIN] =
    {
#line 2989
        .trainerName = _("STEVEN"),
#line 2990
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2991
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2993
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2995
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2999
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2998
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2997
            .lvl = 42,
#line 2996
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3000
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3005
    [TRAINER_PBL_BERNARD] =
    {
#line 3006
        .trainerName = _("STEVEN"),
#line 3007
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3008
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3010
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3012
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3016
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3015
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3014
            .lvl = 42,
#line 3013
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3017
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3022
    [TRAINER_PBL_ELLIE] =
    {
#line 3023
        .trainerName = _("STEVEN"),
#line 3024
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3025
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3027
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3029
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3033
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3032
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3031
            .lvl = 42,
#line 3030
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3034
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3039
    [TRAINER_PBL_RUSTY] =
    {
#line 3040
        .trainerName = _("STEVEN"),
#line 3041
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3042
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3044
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3046
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3050
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3049
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3048
            .lvl = 42,
#line 3047
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3051
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3056
    [TRAINER_PBL_CODY] =
    {
#line 3057
        .trainerName = _("STEVEN"),
#line 3058
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3059
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3061
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3063
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3067
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3066
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3065
            .lvl = 42,
#line 3064
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3068
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3073
    [TRAINER_PBL_LEWIS] =
    {
#line 3074
        .trainerName = _("STEVEN"),
#line 3075
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3076
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3078
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3080
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3084
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3083
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3082
            .lvl = 42,
#line 3081
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3085
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3090
    [TRAINER_PBL_CORNELIUS] =
    {
#line 3091
        .trainerName = _("STEVEN"),
#line 3092
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3093
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3095
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3097
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3101
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3100
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3099
            .lvl = 42,
#line 3098
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3102
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3107
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 3108
        .trainerName = _("STEVEN"),
#line 3109
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3110
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3112
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3114
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3118
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3117
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3116
            .lvl = 42,
#line 3115
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3119
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3124
    [TRAINER_PBL_HELEN] =
    {
#line 3125
        .trainerName = _("STEVEN"),
#line 3126
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3127
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3129
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3131
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3135
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3134
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3133
            .lvl = 42,
#line 3132
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3136
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3141
    [TRAINER_PBL_WESLEY] =
    {
#line 3142
        .trainerName = _("STEVEN"),
#line 3143
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3144
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3146
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3148
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3151
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3150
            .lvl = 42,
#line 3149
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3153
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3158
    [TRAINER_PBL_ALFREDO] =
    {
#line 3159
        .trainerName = _("STEVEN"),
#line 3160
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3161
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3163
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3165
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3169
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3168
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3167
            .lvl = 42,
#line 3166
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3170
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3175
    [TRAINER_PBL_IAN] =
    {
#line 3176
        .trainerName = _("STEVEN"),
#line 3177
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3178
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3180
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3182
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3185
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3184
            .lvl = 42,
#line 3183
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3187
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3192
    [TRAINER_PBL_AUDREY] =
    {
#line 3193
        .trainerName = _("STEVEN"),
#line 3194
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3195
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3197
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3199
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3203
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3202
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3201
            .lvl = 42,
#line 3200
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3204
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3209
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 3210
        .trainerName = _("STEVEN"),
#line 3211
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3212
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3214
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3216
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3219
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3218
            .lvl = 42,
#line 3217
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3221
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3226
    [TRAINER_PBL_EDGARDO] =
    {
#line 3227
        .trainerName = _("STEVEN"),
#line 3228
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3229
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3231
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3233
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3237
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3236
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3235
            .lvl = 42,
#line 3234
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3238
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3243
    [TRAINER_PBL_JEAN] =
    {
#line 3244
        .trainerName = _("STEVEN"),
#line 3245
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3246
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3248
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3250
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3253
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3252
            .lvl = 42,
#line 3251
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3255
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3260
    [TRAINER_PBL_ROSE] =
    {
#line 3261
        .trainerName = _("STEVEN"),
#line 3262
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3263
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3265
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3267
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3270
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3269
            .lvl = 42,
#line 3268
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3272
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3277
    [TRAINER_PBL_JENNIFER] =
    {
#line 3278
        .trainerName = _("STEVEN"),
#line 3279
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3280
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3282
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3284
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3287
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3286
            .lvl = 42,
#line 3285
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3289
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3294
    [TRAINER_PBL_MATTHEW] =
    {
#line 3295
        .trainerName = _("STEVEN"),
#line 3296
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3297
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3299
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3301
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3305
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3304
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3303
            .lvl = 42,
#line 3302
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3311
    [TRAINER_PBL_KERRY] =
    {
#line 3312
        .trainerName = _("STEVEN"),
#line 3313
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3314
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3316
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3318
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3321
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3320
            .lvl = 42,
#line 3319
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3323
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3328
    [TRAINER_PBL_ANNIE] =
    {
#line 3329
        .trainerName = _("STEVEN"),
#line 3330
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3331
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3333
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3335
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3339
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3338
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3337
            .lvl = 42,
#line 3336
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3340
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3345
    [TRAINER_PBL_CHRISTI] =
    {
#line 3346
        .trainerName = _("STEVEN"),
#line 3347
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3348
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3350
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3352
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3356
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3355
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3354
            .lvl = 42,
#line 3353
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3357
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3362
    [TRAINER_PBL_SPENCER] =
    {
#line 3363
        .trainerName = _("STEVEN"),
#line 3364
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3365
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3367
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3369
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3372
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3371
            .lvl = 42,
#line 3370
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3374
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3379
    [TRAINER_PBL_HAYWOOD] =
    {
#line 3380
        .trainerName = _("STEVEN"),
#line 3381
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3382
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3384
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3386
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3389
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3388
            .lvl = 42,
#line 3387
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3391
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3396
    [TRAINER_PBL_MONROE] =
    {
#line 3397
        .trainerName = _("STEVEN"),
#line 3398
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3399
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3401
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3403
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3407
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3406
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3405
            .lvl = 42,
#line 3404
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3408
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3413
    [TRAINER_PBL_DAVID] =
    {
#line 3414
        .trainerName = _("STEVEN"),
#line 3415
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3416
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3418
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3420
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3424
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3423
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3422
            .lvl = 42,
#line 3421
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3425
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3430
    [TRAINER_PBL_DOMINIK] =
    {
#line 3431
        .trainerName = _("STEVEN"),
#line 3432
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3433
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3435
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3437
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3440
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3439
            .lvl = 42,
#line 3438
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3442
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3447
    [TRAINER_PBL_DOUGLAS] =
    {
#line 3448
        .trainerName = _("STEVEN"),
#line 3449
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3450
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3452
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3454
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3458
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3457
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3456
            .lvl = 42,
#line 3455
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3459
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3464
    [TRAINER_PBL_NADINE] =
    {
#line 3465
        .trainerName = _("STEVEN"),
#line 3466
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3467
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3469
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3471
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3475
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3474
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3473
            .lvl = 42,
#line 3472
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3476
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3481
    [TRAINER_PBL_SANDY] =
    {
#line 3482
        .trainerName = _("STEVEN"),
#line 3483
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3484
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3486
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3488
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3491
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3490
            .lvl = 42,
#line 3489
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3493
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3498
    [TRAINER_PBL_SHELDON] =
    {
#line 3499
        .trainerName = _("STEVEN"),
#line 3500
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3501
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3503
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3505
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3508
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3507
            .lvl = 42,
#line 3506
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3510
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3515
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 3516
        .trainerName = _("STEVEN"),
#line 3517
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3518
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3520
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3522
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3525
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3524
            .lvl = 42,
#line 3523
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3527
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3532
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 3533
        .trainerName = _("STEVEN"),
#line 3534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3535
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3537
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3539
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3543
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3542
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3541
            .lvl = 42,
#line 3540
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3544
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3549
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 3550
        .trainerName = _("STEVEN"),
#line 3551
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3552
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3554
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3556
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3560
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3559
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3558
            .lvl = 42,
#line 3557
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3561
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3566
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 3567
        .trainerName = _("STEVEN"),
#line 3568
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3569
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3571
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3573
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3577
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3576
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3575
            .lvl = 42,
#line 3574
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3578
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3583
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 3584
        .trainerName = _("STEVEN"),
#line 3585
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3586
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3588
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3590
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3594
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3593
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3592
            .lvl = 42,
#line 3591
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3595
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
