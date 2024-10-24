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
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
#line 106
        .randomLead = TRUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 108
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 113
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 112
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 109
            .ability = ABILITY_CHLOROPHYLL,
#line 111
            .lvl = 2,
#line 110
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 114
            .teraType = TYPE_FIRE,
            .moves = {
#line 115
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 120
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 124
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 121
            .ability = ABILITY_BLAZE,
#line 123
            .lvl = 2,
#line 122
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 126
            .teraType = TYPE_FIRE,
            .moves = {
#line 127
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 132
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 136
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 135
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 134
            .lvl = 2,
#line 133
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 137
            .teraType = TYPE_FIRE,
            .moves = {
#line 138
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 143
            .species = SPECIES_CHIKORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 147
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 146
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 145
            .lvl = 2,
#line 144
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 148
            .teraType = TYPE_FIRE,
            .moves = {
#line 149
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 154
            .species = SPECIES_CYNDAQUIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 159
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 158
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 155
            .ability = ABILITY_FLASH_FIRE,
#line 157
            .lvl = 2,
#line 156
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 160
            .teraType = TYPE_FIRE,
            .moves = {
#line 161
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 166
            .species = SPECIES_TOTODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 170
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 169
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 168
            .lvl = 2,
#line 167
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 171
            .teraType = TYPE_FIRE,
            .moves = {
#line 172
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 177
    [TRAINER_PBL_MARIAM] =
    {
#line 178
        .trainerName = _("Mariam"),
#line 179
        .trainerClass = TRAINER_CLASS_LASS,
#line 180
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 181
            TRAINER_ENCOUNTER_MUSIC_GIRL,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 183
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 187
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 186
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 1,
#line 184
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 188
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 192
    [TRAINER_PBL_OSCAR] =
    {
#line 193
        .trainerName = _("STEVEN"),
#line 194
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 195
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 197
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 199
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 202
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 201
            .lvl = 42,
#line 200
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 204
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 209
    [TRAINER_PBL_COREY_LEVIATHAN_1] =
    {
#line 210
        .trainerName = _("STEVEN"),
#line 211
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 212
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 214
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 216
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 220
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 219
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 218
            .lvl = 42,
#line 217
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 221
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 226
    [TRAINER_PBL_COREY_LEVIATHAN_1_BRUTAL] =
    {
#line 227
        .trainerName = _("STEVEN"),
#line 228
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 229
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 231
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 233
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 237
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 236
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 235
            .lvl = 42,
#line 234
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 238
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 243
    [TRAINER_PBL_POLLY] =
    {
#line 244
        .trainerName = _("STEVEN"),
#line 245
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 246
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 248
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 250
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 253
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 252
            .lvl = 42,
#line 251
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 255
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 260
    [TRAINER_PBL_JEREMIAH] =
    {
#line 261
        .trainerName = _("STEVEN"),
#line 262
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 263
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 265
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 267
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 270
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 269
            .lvl = 42,
#line 268
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 272
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 277
    [TRAINER_PBL_HARPER] =
    {
#line 278
        .trainerName = _("STEVEN"),
#line 279
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 280
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 282
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 284
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 287
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 286
            .lvl = 42,
#line 285
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 289
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 294
    [TRAINER_PBL_ARTHUR] =
    {
#line 295
        .trainerName = _("STEVEN"),
#line 296
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 297
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 299
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 301
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 305
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 304
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 303
            .lvl = 42,
#line 302
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 306
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 311
    [TRAINER_PBL_JOEY_LEVIATHAN_2] =
    {
#line 312
        .trainerName = _("STEVEN"),
#line 313
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 314
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 316
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 318
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 321
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 320
            .lvl = 42,
#line 319
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 323
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 328
    [TRAINER_PBL_JOEY_LEVIATHAN_2_BRUTAL] =
    {
#line 329
        .trainerName = _("STEVEN"),
#line 330
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 331
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 333
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 335
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 338
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 337
            .lvl = 42,
#line 336
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 340
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 345
    [TRAINER_PBL_JEMMA] =
    {
#line 346
        .trainerName = _("STEVEN"),
#line 347
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 348
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 350
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 352
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 355
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 354
            .lvl = 42,
#line 353
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 357
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 362
    [TRAINER_PBL_PATRICK] =
    {
#line 363
        .trainerName = _("STEVEN"),
#line 364
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 365
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 367
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 369
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 373
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 372
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 371
            .lvl = 42,
#line 370
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 374
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 379
    [TRAINER_PBL_ANNABELLE] =
    {
#line 380
        .trainerName = _("STEVEN"),
#line 381
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 382
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 384
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 386
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 390
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 389
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 388
            .lvl = 42,
#line 387
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 391
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 396
    [TRAINER_PBL_BORIS] =
    {
#line 397
        .trainerName = _("STEVEN"),
#line 398
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 399
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 401
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 403
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 407
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 406
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 405
            .lvl = 42,
#line 404
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 408
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 413
    [TRAINER_PBL_RICHARD] =
    {
#line 414
        .trainerName = _("STEVEN"),
#line 415
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 416
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 418
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 420
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 423
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 422
            .lvl = 42,
#line 421
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 425
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 430
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3] =
    {
#line 431
        .trainerName = _("STEVEN"),
#line 432
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 433
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 435
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 437
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 441
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 440
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 439
            .lvl = 42,
#line 438
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 442
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 447
    [TRAINER_PBL_PHILLIPA_LEVIATHAN_3_BRUTAL] =
    {
#line 448
        .trainerName = _("STEVEN"),
#line 449
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 450
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 452
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 454
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 458
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 457
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 456
            .lvl = 42,
#line 455
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 459
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 464
    [TRAINER_PBL_HERMAN] =
    {
#line 465
        .trainerName = _("STEVEN"),
#line 466
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 467
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 469
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 471
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 475
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 474
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 473
            .lvl = 42,
#line 472
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 476
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 481
    [TRAINER_PBL_RALPH] =
    {
#line 482
        .trainerName = _("STEVEN"),
#line 483
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 484
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 486
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 488
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 492
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 491
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 490
            .lvl = 42,
#line 489
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 493
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 498
    [TRAINER_PBL_SANTIAGO] =
    {
#line 499
        .trainerName = _("STEVEN"),
#line 500
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 501
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 503
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 505
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 509
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 508
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 507
            .lvl = 42,
#line 506
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 510
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 515
    [TRAINER_PBL_CHLOE_AND_KAYA] =
    {
#line 516
        .trainerName = _("STEVEN"),
#line 517
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 518
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 520
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 522
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 526
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 525
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 524
            .lvl = 42,
#line 523
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 527
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 532
    [TRAINER_PBL_FRED] =
    {
#line 533
        .trainerName = _("STEVEN"),
#line 534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 535
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 537
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 539
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 543
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 542
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 541
            .lvl = 42,
#line 540
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 544
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 549
    [TRAINER_PBL_LUCIA] =
    {
#line 550
        .trainerName = _("STEVEN"),
#line 551
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 552
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 554
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 556
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 560
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 559
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 558
            .lvl = 42,
#line 557
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 561
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 566
    [TRAINER_PBL_RITA_LEVIATHAN_4] =
    {
#line 567
        .trainerName = _("STEVEN"),
#line 568
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 569
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 571
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 573
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 577
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 576
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 575
            .lvl = 42,
#line 574
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 578
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 583
    [TRAINER_PBL_RITA_LEVIATHAN_4_BRUTAL] =
    {
#line 584
        .trainerName = _("STEVEN"),
#line 585
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 586
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 588
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 590
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 593
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 592
            .lvl = 42,
#line 591
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 595
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 600
    [TRAINER_PBL_ANNE_AND_JUNE] =
    {
#line 601
        .trainerName = _("STEVEN"),
#line 602
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 603
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 605
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 607
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 610
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 609
            .lvl = 42,
#line 608
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 612
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 617
    [TRAINER_PBL_GILBERT] =
    {
#line 618
        .trainerName = _("STEVEN"),
#line 619
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 620
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 622
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 624
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 627
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 626
            .lvl = 42,
#line 625
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 629
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 634
    [TRAINER_PBL_CLINTON] =
    {
#line 635
        .trainerName = _("STEVEN"),
#line 636
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 637
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 639
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 641
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 645
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 644
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 643
            .lvl = 42,
#line 642
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 646
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 651
    [TRAINER_PBL_REBECCA] =
    {
#line 652
        .trainerName = _("STEVEN"),
#line 653
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 654
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 656
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 658
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 661
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 660
            .lvl = 42,
#line 659
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 663
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 668
    [TRAINER_PBL_RYAN] =
    {
#line 669
        .trainerName = _("STEVEN"),
#line 670
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 671
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 673
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 675
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 679
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 678
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 677
            .lvl = 42,
#line 676
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 680
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 685
    [TRAINER_PBL_CAITLYN] =
    {
#line 686
        .trainerName = _("STEVEN"),
#line 687
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 688
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 690
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 692
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 696
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 695
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 694
            .lvl = 42,
#line 693
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 697
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 702
    [TRAINER_PBL_KENNETH] =
    {
#line 703
        .trainerName = _("STEVEN"),
#line 704
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 705
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 707
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 709
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 712
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 711
            .lvl = 42,
#line 710
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 714
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 719
    [TRAINER_PBL_KEVIN] =
    {
#line 720
        .trainerName = _("STEVEN"),
#line 721
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 722
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 724
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 726
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 729
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 728
            .lvl = 42,
#line 727
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 731
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 736
    [TRAINER_PBL_DECLAN_LEVIATHAN_5] =
    {
#line 737
        .trainerName = _("STEVEN"),
#line 738
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 739
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 741
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 743
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 747
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 746
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 745
            .lvl = 42,
#line 744
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 748
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 753
    [TRAINER_PBL_ZACK] =
    {
#line 754
        .trainerName = _("STEVEN"),
#line 755
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 756
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 758
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 760
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 764
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 763
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 762
            .lvl = 42,
#line 761
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 765
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 770
    [TRAINER_PBL_MELANIE] =
    {
#line 771
        .trainerName = _("STEVEN"),
#line 772
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 773
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 775
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 777
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 781
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 780
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 779
            .lvl = 42,
#line 778
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 782
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 787
    [TRAINER_PBL_CONSTANCE] =
    {
#line 788
        .trainerName = _("STEVEN"),
#line 789
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 790
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 792
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 794
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 798
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 797
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 796
            .lvl = 42,
#line 795
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 799
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 804
    [TRAINER_PBL_FRANK] =
    {
#line 805
        .trainerName = _("STEVEN"),
#line 806
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 807
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 809
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 811
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 815
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 814
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 813
            .lvl = 42,
#line 812
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 816
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 821
    [TRAINER_PBL_DUDLEY] =
    {
#line 822
        .trainerName = _("STEVEN"),
#line 823
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 824
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 826
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 828
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 832
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 831
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 830
            .lvl = 42,
#line 829
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 833
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 838
    [TRAINER_PBL_DAISY] =
    {
#line 839
        .trainerName = _("STEVEN"),
#line 840
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 841
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 843
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 845
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 849
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 848
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 847
            .lvl = 42,
#line 846
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 850
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 855
    [TRAINER_PBL_MINA_LEVIATHAN_6] =
    {
#line 856
        .trainerName = _("STEVEN"),
#line 857
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 858
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 860
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 862
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 866
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 865
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 864
            .lvl = 42,
#line 863
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 867
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 872
    [TRAINER_PBL_MILLIE] =
    {
#line 873
        .trainerName = _("STEVEN"),
#line 874
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 875
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 877
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 879
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 883
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 882
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 881
            .lvl = 42,
#line 880
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 884
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 889
    [TRAINER_PBL_JAMAL] =
    {
#line 890
        .trainerName = _("STEVEN"),
#line 891
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 892
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 894
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 896
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 899
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 898
            .lvl = 42,
#line 897
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 901
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 906
    [TRAINER_PBL_PAIGE] =
    {
#line 907
        .trainerName = _("STEVEN"),
#line 908
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 909
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 911
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 913
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 917
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 916
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 915
            .lvl = 42,
#line 914
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 918
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 923
    [TRAINER_PBL_SETH] =
    {
#line 924
        .trainerName = _("STEVEN"),
#line 925
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 926
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 928
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 930
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 934
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 933
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 932
            .lvl = 42,
#line 931
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 935
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 940
    [TRAINER_PBL_CONNIE] =
    {
#line 941
        .trainerName = _("STEVEN"),
#line 942
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 943
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 945
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 947
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 950
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 949
            .lvl = 42,
#line 948
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 952
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 957
    [TRAINER_PBL_BETTY_LEVIATHAN_7] =
    {
#line 958
        .trainerName = _("STEVEN"),
#line 959
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 960
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 962
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 964
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 967
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 966
            .lvl = 42,
#line 965
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 969
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 974
    [TRAINER_PBL_BETTY_LEVIATHAN_7_BRUTAL] =
    {
#line 975
        .trainerName = _("STEVEN"),
#line 976
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 977
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 979
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 981
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 985
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 984
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 983
            .lvl = 42,
#line 982
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 986
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 991
    [TRAINER_PBL_JIMMY] =
    {
#line 992
        .trainerName = _("STEVEN"),
#line 993
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 994
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 996
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 998
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1002
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1001
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1000
            .lvl = 42,
#line 999
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1003
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1008
    [TRAINER_PBL_EMILIANO] =
    {
#line 1009
        .trainerName = _("STEVEN"),
#line 1010
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1011
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1013
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1015
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1019
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1018
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1017
            .lvl = 42,
#line 1016
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1020
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1025
    [TRAINER_PBL_KAREN] =
    {
#line 1026
        .trainerName = _("STEVEN"),
#line 1027
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1028
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1030
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1032
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1036
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1035
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1034
            .lvl = 42,
#line 1033
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1037
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1042
    [TRAINER_PBL_JAYDEN] =
    {
#line 1043
        .trainerName = _("STEVEN"),
#line 1044
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1045
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1047
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1049
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1053
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1052
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1051
            .lvl = 42,
#line 1050
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1054
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1059
    [TRAINER_PBL_NEIL] =
    {
#line 1060
        .trainerName = _("STEVEN"),
#line 1061
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1062
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1064
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1066
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1070
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1069
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1068
            .lvl = 42,
#line 1067
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1071
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1076
    [TRAINER_PBL_TAMARA] =
    {
#line 1077
        .trainerName = _("STEVEN"),
#line 1078
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1079
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1081
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1083
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1087
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1086
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1085
            .lvl = 42,
#line 1084
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1088
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1093
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8] =
    {
#line 1094
        .trainerName = _("STEVEN"),
#line 1095
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1096
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1098
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1100
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1103
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1102
            .lvl = 42,
#line 1101
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1105
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1110
    [TRAINER_PBL_MIRAGE_LEVIATHAN_8_BRUTAL] =
    {
#line 1111
        .trainerName = _("STEVEN"),
#line 1112
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1113
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1115
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1117
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1121
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1120
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1119
            .lvl = 42,
#line 1118
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1122
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1127
    [TRAINER_PBL_WALLY_ZONE8D] =
    {
#line 1128
        .trainerName = _("STEVEN"),
#line 1129
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1130
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1132
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1134
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1137
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1136
            .lvl = 42,
#line 1135
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1139
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1144
    [TRAINER_PBL_COOPER] =
    {
#line 1145
        .trainerName = _("STEVEN"),
#line 1146
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1147
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1149
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1151
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1155
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1154
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1153
            .lvl = 42,
#line 1152
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1156
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1161
    [TRAINER_PBL_CARMINE] =
    {
#line 1162
        .trainerName = _("STEVEN"),
#line 1163
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1164
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1166
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1168
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1171
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1170
            .lvl = 42,
#line 1169
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1173
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1178
    [TRAINER_PBL_ARI] =
    {
#line 1179
        .trainerName = _("STEVEN"),
#line 1180
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1181
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1183
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1185
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1189
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1188
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1187
            .lvl = 42,
#line 1186
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1190
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1195
    [TRAINER_PBL_BERTHA] =
    {
#line 1196
        .trainerName = _("STEVEN"),
#line 1197
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1198
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1200
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1202
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1206
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1205
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1204
            .lvl = 42,
#line 1203
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1207
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1212
    [TRAINER_PBL_CASSANDRA] =
    {
#line 1213
        .trainerName = _("STEVEN"),
#line 1214
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1215
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1217
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1219
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1222
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1221
            .lvl = 42,
#line 1220
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1224
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1229
    [TRAINER_PBL_DOMINIC] =
    {
#line 1230
        .trainerName = _("STEVEN"),
#line 1231
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1232
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1234
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1236
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1240
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1239
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1238
            .lvl = 42,
#line 1237
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1241
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1246
    [TRAINER_PBL_ERICA] =
    {
#line 1247
        .trainerName = _("STEVEN"),
#line 1248
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1249
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1251
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1253
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1257
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1256
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1255
            .lvl = 42,
#line 1254
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1258
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1263
    [TRAINER_PBL_KYLE] =
    {
#line 1264
        .trainerName = _("STEVEN"),
#line 1265
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1266
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1268
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1270
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1273
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1272
            .lvl = 42,
#line 1271
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1275
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1280
    [TRAINER_PBL_BELLE] =
    {
#line 1281
        .trainerName = _("STEVEN"),
#line 1282
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1283
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1285
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1287
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1291
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1290
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1289
            .lvl = 42,
#line 1288
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1292
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1297
    [TRAINER_PBL_DEWEY] =
    {
#line 1298
        .trainerName = _("STEVEN"),
#line 1299
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1300
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1302
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1304
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1308
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1307
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1306
            .lvl = 42,
#line 1305
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1309
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1314
    [TRAINER_PBL_PEARLIE] =
    {
#line 1315
        .trainerName = _("STEVEN"),
#line 1316
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1317
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1319
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1321
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1324
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1323
            .lvl = 42,
#line 1322
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1326
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1331
    [TRAINER_PBL_ERNEST] =
    {
#line 1332
        .trainerName = _("STEVEN"),
#line 1333
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1334
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1336
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1338
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1342
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1341
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1340
            .lvl = 42,
#line 1339
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1343
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1348
    [TRAINER_PBL_ALANA] =
    {
#line 1349
        .trainerName = _("STEVEN"),
#line 1350
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1351
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1353
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1355
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1359
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1358
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1357
            .lvl = 42,
#line 1356
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1360
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1365
    [TRAINER_PBL_SUSAN] =
    {
#line 1366
        .trainerName = _("STEVEN"),
#line 1367
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1368
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1370
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1372
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1376
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1375
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1374
            .lvl = 42,
#line 1373
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1377
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1382
    [TRAINER_PBL_CONRAD] =
    {
#line 1383
        .trainerName = _("STEVEN"),
#line 1384
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1385
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1387
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1389
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1393
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1392
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1391
            .lvl = 42,
#line 1390
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1394
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1399
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9] =
    {
#line 1400
        .trainerName = _("STEVEN"),
#line 1401
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1402
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1404
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1406
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1409
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1408
            .lvl = 42,
#line 1407
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1411
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1416
    [TRAINER_PBL_ADAMINA_LEVIATHAN_9_BRUTAL] =
    {
#line 1417
        .trainerName = _("STEVEN"),
#line 1418
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1419
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1421
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1423
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1427
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1426
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1425
            .lvl = 42,
#line 1424
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1428
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1433
    [TRAINER_PBL_JEANETTE] =
    {
#line 1434
        .trainerName = _("STEVEN"),
#line 1435
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1436
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1438
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1440
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1444
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1443
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1442
            .lvl = 42,
#line 1441
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1445
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1450
    [TRAINER_PBL_EMMA_AND_LEO] =
    {
#line 1451
        .trainerName = _("STEVEN"),
#line 1452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1453
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1455
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1457
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1461
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1460
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1459
            .lvl = 42,
#line 1458
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1462
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1467
    [TRAINER_PBL_JOEL] =
    {
#line 1468
        .trainerName = _("STEVEN"),
#line 1469
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1470
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1472
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1474
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1477
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1476
            .lvl = 42,
#line 1475
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1479
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1484
    [TRAINER_PBL_MARION] =
    {
#line 1485
        .trainerName = _("STEVEN"),
#line 1486
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1487
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1489
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1491
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1495
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1494
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1493
            .lvl = 42,
#line 1492
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1496
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1501
    [TRAINER_PBL_REGINA] =
    {
#line 1502
        .trainerName = _("STEVEN"),
#line 1503
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1504
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1506
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1508
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1512
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1511
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1510
            .lvl = 42,
#line 1509
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1513
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1518
    [TRAINER_PBL_NEWTON_LEVIATHAN_10] =
    {
#line 1519
        .trainerName = _("STEVEN"),
#line 1520
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1521
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1523
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1525
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1529
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1528
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1527
            .lvl = 42,
#line 1526
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1530
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1535
    [TRAINER_PBL_NEWTON_LEVIATHAN_10_BRUTAL] =
    {
#line 1536
        .trainerName = _("STEVEN"),
#line 1537
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1538
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1540
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1542
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1546
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1545
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1544
            .lvl = 42,
#line 1543
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1547
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1552
    [TRAINER_PBL_ESSENCE] =
    {
#line 1553
        .trainerName = _("STEVEN"),
#line 1554
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1555
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1557
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1559
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1562
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1561
            .lvl = 42,
#line 1560
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1564
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1569
    [TRAINER_PBL_DOLORES] =
    {
#line 1570
        .trainerName = _("STEVEN"),
#line 1571
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1572
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1574
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1576
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1579
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1578
            .lvl = 42,
#line 1577
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1581
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1586
    [TRAINER_PBL_JULIE] =
    {
#line 1587
        .trainerName = _("STEVEN"),
#line 1588
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1589
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1591
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1593
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1596
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1595
            .lvl = 42,
#line 1594
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1598
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1603
    [TRAINER_PBL_ROMULUS] =
    {
#line 1604
        .trainerName = _("STEVEN"),
#line 1605
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1606
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1608
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1610
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1613
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1612
            .lvl = 42,
#line 1611
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1615
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1620
    [TRAINER_PBL_TREVOR] =
    {
#line 1621
        .trainerName = _("STEVEN"),
#line 1622
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1623
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1625
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1627
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1631
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1630
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1629
            .lvl = 42,
#line 1628
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1632
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1637
    [TRAINER_PBL_FEDERICO] =
    {
#line 1638
        .trainerName = _("STEVEN"),
#line 1639
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1640
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1642
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1644
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1648
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1647
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1646
            .lvl = 42,
#line 1645
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1649
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1654
    [TRAINER_PBL_GENIE] =
    {
#line 1655
        .trainerName = _("STEVEN"),
#line 1656
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1657
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1659
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1661
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1665
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1664
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1663
            .lvl = 42,
#line 1662
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1666
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1671
    [TRAINER_PBL_HILDA] =
    {
#line 1672
        .trainerName = _("STEVEN"),
#line 1673
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1674
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1676
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1678
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1682
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1681
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1680
            .lvl = 42,
#line 1679
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1683
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1688
    [TRAINER_PBL_KINLEY] =
    {
#line 1689
        .trainerName = _("STEVEN"),
#line 1690
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1691
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1693
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1695
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1699
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1698
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1697
            .lvl = 42,
#line 1696
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1700
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1705
    [TRAINER_PBL_VIOLET] =
    {
#line 1706
        .trainerName = _("STEVEN"),
#line 1707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1708
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1710
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1712
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1716
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1715
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1714
            .lvl = 42,
#line 1713
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1717
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1722
    [TRAINER_PBL_WANDA] =
    {
#line 1723
        .trainerName = _("STEVEN"),
#line 1724
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1725
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1727
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1729
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1733
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1732
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1731
            .lvl = 42,
#line 1730
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1734
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1739
    [TRAINER_PBL_AMBER_AND_KIM] =
    {
#line 1740
        .trainerName = _("STEVEN"),
#line 1741
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1742
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1744
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1746
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1750
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1749
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1748
            .lvl = 42,
#line 1747
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1751
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1756
    [TRAINER_PBL_JAN_AND_ERIN] =
    {
#line 1757
        .trainerName = _("STEVEN"),
#line 1758
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1759
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1761
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1763
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1767
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1766
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1765
            .lvl = 42,
#line 1764
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1768
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1773
    [TRAINER_PBL_STEVE] =
    {
#line 1774
        .trainerName = _("STEVEN"),
#line 1775
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1776
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1778
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1784
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1783
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1782
            .lvl = 42,
#line 1781
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1785
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1790
    [TRAINER_PBL_GOULD] =
    {
#line 1791
        .trainerName = _("STEVEN"),
#line 1792
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1793
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1795
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1797
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1801
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1800
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1799
            .lvl = 42,
#line 1798
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1802
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1807
    [TRAINER_PBL_MENDEL] =
    {
#line 1808
        .trainerName = _("STEVEN"),
#line 1809
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1810
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1812
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1814
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1818
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1817
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1816
            .lvl = 42,
#line 1815
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1819
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1824
    [TRAINER_PBL_DARWIN] =
    {
#line 1825
        .trainerName = _("STEVEN"),
#line 1826
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1827
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1829
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1831
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1835
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1834
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1833
            .lvl = 42,
#line 1832
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1836
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1841
    [TRAINER_PBL_JENNY_LEVIATHAN_11] =
    {
#line 1842
        .trainerName = _("STEVEN"),
#line 1843
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1844
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1846
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1848
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1852
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1851
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1850
            .lvl = 42,
#line 1849
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1853
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1858
    [TRAINER_PBL_JENNY_LEVIATHAN_11_BRUTAL] =
    {
#line 1859
        .trainerName = _("STEVEN"),
#line 1860
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1861
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1863
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1865
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1869
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1868
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1867
            .lvl = 42,
#line 1866
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1870
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1875
    [TRAINER_PBL_BART] =
    {
#line 1876
        .trainerName = _("STEVEN"),
#line 1877
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1878
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1880
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1882
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1886
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1885
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1884
            .lvl = 42,
#line 1883
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1887
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1892
    [TRAINER_PBL_NIGEL] =
    {
#line 1893
        .trainerName = _("STEVEN"),
#line 1894
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1895
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1897
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1899
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1902
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1901
            .lvl = 42,
#line 1900
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1904
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1909
    [TRAINER_PBL_LOLA] =
    {
#line 1910
        .trainerName = _("STEVEN"),
#line 1911
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1912
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1914
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1916
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1920
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1919
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1918
            .lvl = 42,
#line 1917
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1921
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1926
    [TRAINER_PBL_CHARLIE] =
    {
#line 1927
        .trainerName = _("STEVEN"),
#line 1928
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1929
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1931
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1933
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1937
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1936
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1935
            .lvl = 42,
#line 1934
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1938
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1943
    [TRAINER_PBL_RANDOLPH] =
    {
#line 1944
        .trainerName = _("STEVEN"),
#line 1945
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1946
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1948
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1950
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1953
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1952
            .lvl = 42,
#line 1951
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1955
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1960
    [TRAINER_PBL_TODD] =
    {
#line 1961
        .trainerName = _("STEVEN"),
#line 1962
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1963
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1965
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1967
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1970
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1969
            .lvl = 42,
#line 1968
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1972
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1977
    [TRAINER_PBL_RUSSELL] =
    {
#line 1978
        .trainerName = _("STEVEN"),
#line 1979
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1980
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1982
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1984
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1988
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 1987
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1986
            .lvl = 42,
#line 1985
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1989
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 1994
    [TRAINER_PBL_OTIS] =
    {
#line 1995
        .trainerName = _("STEVEN"),
#line 1996
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 1997
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 1999
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2001
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2005
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2004
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2003
            .lvl = 42,
#line 2002
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2006
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2011
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12] =
    {
#line 2012
        .trainerName = _("STEVEN"),
#line 2013
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2014
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2016
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2018
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2022
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2021
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2020
            .lvl = 42,
#line 2019
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2023
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2028
    [TRAINER_PBL_MIGUEL_LEVIATHAN_12_BRUTAL] =
    {
#line 2029
        .trainerName = _("STEVEN"),
#line 2030
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2031
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2033
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2035
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2039
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2038
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2037
            .lvl = 42,
#line 2036
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2040
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2045
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13] =
    {
#line 2046
        .trainerName = _("STEVEN"),
#line 2047
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2048
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2050
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2052
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2056
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2055
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2054
            .lvl = 42,
#line 2053
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2057
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2062
    [TRAINER_PBL_MIRAGE_LEVIATHAN_13_BRUTAL] =
    {
#line 2063
        .trainerName = _("STEVEN"),
#line 2064
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2065
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2067
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2069
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2073
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2072
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2071
            .lvl = 42,
#line 2070
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2074
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2079
    [TRAINER_PBL_IONA] =
    {
#line 2080
        .trainerName = _("STEVEN"),
#line 2081
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2082
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2084
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2086
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2090
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2089
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2088
            .lvl = 42,
#line 2087
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2091
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2096
    [TRAINER_PBL_BERKE] =
    {
#line 2097
        .trainerName = _("STEVEN"),
#line 2098
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2099
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2101
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2103
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2107
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2106
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2105
            .lvl = 42,
#line 2104
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2108
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2113
    [TRAINER_PBL_TANISHA] =
    {
#line 2114
        .trainerName = _("STEVEN"),
#line 2115
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2116
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2118
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2124
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2123
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2122
            .lvl = 42,
#line 2121
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2125
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2130
    [TRAINER_PBL_ROBERT] =
    {
#line 2131
        .trainerName = _("STEVEN"),
#line 2132
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2133
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2135
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2137
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2141
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2140
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2139
            .lvl = 42,
#line 2138
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2142
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2147
    [TRAINER_PBL_CHRIS] =
    {
#line 2148
        .trainerName = _("STEVEN"),
#line 2149
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2150
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2152
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2154
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2158
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2157
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2156
            .lvl = 42,
#line 2155
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2159
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2164
    [TRAINER_PBL_ANGUS] =
    {
#line 2165
        .trainerName = _("STEVEN"),
#line 2166
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2167
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2169
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2171
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2175
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2174
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2173
            .lvl = 42,
#line 2172
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2176
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2181
    [TRAINER_PBL_LILY_LEVIATHAN_14] =
    {
#line 2182
        .trainerName = _("STEVEN"),
#line 2183
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2184
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2186
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2188
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2192
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2191
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2190
            .lvl = 42,
#line 2189
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2193
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2198
    [TRAINER_PBL_LILY_LEVIATHAN_14_BRUTAL] =
    {
#line 2199
        .trainerName = _("STEVEN"),
#line 2200
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2201
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2203
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2205
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2209
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2208
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2207
            .lvl = 42,
#line 2206
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2210
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2215
    [TRAINER_PBL_AXLE] =
    {
#line 2216
        .trainerName = _("STEVEN"),
#line 2217
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2218
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2220
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2222
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2226
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2225
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2224
            .lvl = 42,
#line 2223
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2227
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2232
    [TRAINER_PBL_RAFAEL] =
    {
#line 2233
        .trainerName = _("STEVEN"),
#line 2234
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2235
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2237
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2239
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2243
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2242
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2241
            .lvl = 42,
#line 2240
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2244
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2249
    [TRAINER_PBL_GEORGINA] =
    {
#line 2250
        .trainerName = _("STEVEN"),
#line 2251
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2252
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2254
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2256
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2260
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2259
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2258
            .lvl = 42,
#line 2257
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2261
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2266
    [TRAINER_PBL_MIA_LEVIATHAN_15] =
    {
#line 2267
        .trainerName = _("STEVEN"),
#line 2268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2269
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2271
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2273
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2277
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2276
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2275
            .lvl = 42,
#line 2274
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2278
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2283
    [TRAINER_PBL_MIA_LEVIATHAN_15_BRUTAL] =
    {
#line 2284
        .trainerName = _("STEVEN"),
#line 2285
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2286
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2288
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2290
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2294
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2293
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2292
            .lvl = 42,
#line 2291
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2295
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2300
    [TRAINER_PBL_DORIS] =
    {
#line 2301
        .trainerName = _("STEVEN"),
#line 2302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2303
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2305
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2307
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2311
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2310
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2309
            .lvl = 42,
#line 2308
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2312
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2317
    [TRAINER_PBL_HOMER] =
    {
#line 2318
        .trainerName = _("STEVEN"),
#line 2319
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2320
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2322
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2324
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2328
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2327
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2326
            .lvl = 42,
#line 2325
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2329
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2334
    [TRAINER_PBL_JOHN] =
    {
#line 2335
        .trainerName = _("STEVEN"),
#line 2336
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2337
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2339
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2341
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2345
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2344
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2343
            .lvl = 42,
#line 2342
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2346
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2351
    [TRAINER_PBL_GLENN] =
    {
#line 2352
        .trainerName = _("STEVEN"),
#line 2353
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2354
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2356
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2358
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2361
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2360
            .lvl = 42,
#line 2359
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2363
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2368
    [TRAINER_PBL_JAY] =
    {
#line 2369
        .trainerName = _("STEVEN"),
#line 2370
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2371
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2373
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2375
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2378
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2377
            .lvl = 42,
#line 2376
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2380
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2385
    [TRAINER_PBL_TYLER] =
    {
#line 2386
        .trainerName = _("STEVEN"),
#line 2387
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2388
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2390
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2392
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2395
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2394
            .lvl = 42,
#line 2393
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2397
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2402
    [TRAINER_PBL_TERRENCE] =
    {
#line 2403
        .trainerName = _("STEVEN"),
#line 2404
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2405
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2407
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2409
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2413
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2412
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2411
            .lvl = 42,
#line 2410
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2414
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2419
    [TRAINER_PBL_MARTY] =
    {
#line 2420
        .trainerName = _("STEVEN"),
#line 2421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2422
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2424
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2426
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2430
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2429
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2428
            .lvl = 42,
#line 2427
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2431
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2436
    [TRAINER_PBL_KARI] =
    {
#line 2437
        .trainerName = _("STEVEN"),
#line 2438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2439
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2441
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2443
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2447
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2446
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2445
            .lvl = 42,
#line 2444
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2448
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2453
    [TRAINER_PBL_ABRAHAM] =
    {
#line 2454
        .trainerName = _("STEVEN"),
#line 2455
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2456
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2458
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2460
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2464
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2463
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2462
            .lvl = 42,
#line 2461
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2465
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2470
    [TRAINER_PBL_MELINDA] =
    {
#line 2471
        .trainerName = _("STEVEN"),
#line 2472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2473
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2475
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2477
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2481
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2480
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2479
            .lvl = 42,
#line 2478
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2482
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2487
    [TRAINER_PBL_EMILIO] =
    {
#line 2488
        .trainerName = _("STEVEN"),
#line 2489
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2490
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2492
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2494
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2498
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2497
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2496
            .lvl = 42,
#line 2495
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2499
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2504
    [TRAINER_PBL_REX] =
    {
#line 2505
        .trainerName = _("STEVEN"),
#line 2506
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2507
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2509
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2511
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2515
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2514
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2513
            .lvl = 42,
#line 2512
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2516
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2521
    [TRAINER_PBL_LOUIS] =
    {
#line 2522
        .trainerName = _("STEVEN"),
#line 2523
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2524
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2526
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2528
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2532
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2531
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2530
            .lvl = 42,
#line 2529
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2533
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2538
    [TRAINER_PBL_LEROY] =
    {
#line 2539
        .trainerName = _("STEVEN"),
#line 2540
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2541
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2543
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2545
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2548
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2547
            .lvl = 42,
#line 2546
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2550
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2555
    [TRAINER_PBL_ELTON] =
    {
#line 2556
        .trainerName = _("STEVEN"),
#line 2557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2558
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2560
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2562
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2566
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2565
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2564
            .lvl = 42,
#line 2563
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2567
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2572
    [TRAINER_PBL_WILLIE] =
    {
#line 2573
        .trainerName = _("STEVEN"),
#line 2574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2575
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2577
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2579
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2582
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2581
            .lvl = 42,
#line 2580
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2584
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2589
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16] =
    {
#line 2590
        .trainerName = _("STEVEN"),
#line 2591
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2592
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2594
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2596
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2600
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2599
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2598
            .lvl = 42,
#line 2597
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2601
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2606
    [TRAINER_PBL_ZOE_AND_ELI_LEVIATHAN_16_BRUTAL] =
    {
#line 2607
        .trainerName = _("STEVEN"),
#line 2608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2609
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2611
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2613
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2617
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2616
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2615
            .lvl = 42,
#line 2614
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2618
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2623
    [TRAINER_PBL_PIRATE_1] =
    {
#line 2624
        .trainerName = _("STEVEN"),
#line 2625
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2626
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2628
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2630
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2634
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2633
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2632
            .lvl = 42,
#line 2631
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2635
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2640
    [TRAINER_PBL_PIRATE_2] =
    {
#line 2641
        .trainerName = _("STEVEN"),
#line 2642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2643
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2645
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2647
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2650
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2649
            .lvl = 42,
#line 2648
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2652
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2657
    [TRAINER_PBL_PIRATE_3] =
    {
#line 2658
        .trainerName = _("STEVEN"),
#line 2659
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2660
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2662
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2664
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2668
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2667
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2666
            .lvl = 42,
#line 2665
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2669
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2674
    [TRAINER_PBL_PIRATE_4] =
    {
#line 2675
        .trainerName = _("STEVEN"),
#line 2676
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2677
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2679
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2681
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2685
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2684
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2683
            .lvl = 42,
#line 2682
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2686
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2691
    [TRAINER_PBL_SHAWN] =
    {
#line 2692
        .trainerName = _("STEVEN"),
#line 2693
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2694
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2696
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2698
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2702
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2701
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2700
            .lvl = 42,
#line 2699
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2703
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2708
    [TRAINER_PBL_FERNANDO] =
    {
#line 2709
        .trainerName = _("STEVEN"),
#line 2710
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2711
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2713
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2715
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2718
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2717
            .lvl = 42,
#line 2716
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2720
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2725
    [TRAINER_PBL_KANE] =
    {
#line 2726
        .trainerName = _("STEVEN"),
#line 2727
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2728
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2730
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2732
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2736
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2735
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2734
            .lvl = 42,
#line 2733
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2737
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2742
    [TRAINER_PBL_KIRK] =
    {
#line 2743
        .trainerName = _("STEVEN"),
#line 2744
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2745
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2747
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2749
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2752
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2751
            .lvl = 42,
#line 2750
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2754
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2759
    [TRAINER_PBL_DALTON] =
    {
#line 2760
        .trainerName = _("STEVEN"),
#line 2761
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2762
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2764
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2766
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2770
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2769
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2768
            .lvl = 42,
#line 2767
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2771
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2776
    [TRAINER_PBL_LEE] =
    {
#line 2777
        .trainerName = _("STEVEN"),
#line 2778
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2779
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2781
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2783
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2786
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2785
            .lvl = 42,
#line 2784
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2788
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2793
    [TRAINER_PBL_BLANCHE] =
    {
#line 2794
        .trainerName = _("STEVEN"),
#line 2795
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2796
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2798
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2800
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2804
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2803
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2802
            .lvl = 42,
#line 2801
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2805
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2810
    [TRAINER_PBL_TROY] =
    {
#line 2811
        .trainerName = _("STEVEN"),
#line 2812
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2813
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2815
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2817
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2820
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2819
            .lvl = 42,
#line 2818
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2822
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2827
    [TRAINER_PBL_ABED] =
    {
#line 2828
        .trainerName = _("STEVEN"),
#line 2829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2830
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2832
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2834
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2837
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2836
            .lvl = 42,
#line 2835
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2839
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2844
    [TRAINER_PBL_TROY_BRUTAL] =
    {
#line 2845
        .trainerName = _("STEVEN"),
#line 2846
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2847
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2849
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2851
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2854
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2853
            .lvl = 42,
#line 2852
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2856
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2861
    [TRAINER_PBL_ABED_BRUTAL] =
    {
#line 2862
        .trainerName = _("STEVEN"),
#line 2863
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2864
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2866
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2868
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2872
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2871
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2870
            .lvl = 42,
#line 2869
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2873
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2878
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17] =
    {
#line 2879
        .trainerName = _("STEVEN"),
#line 2880
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2881
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2883
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2885
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2889
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2888
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2887
            .lvl = 42,
#line 2886
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2890
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2895
    [TRAINER_PBL_MIRAGE_LEVIATHAN_17_BRUTAL] =
    {
#line 2896
        .trainerName = _("STEVEN"),
#line 2897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2898
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2900
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2902
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2906
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2905
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2904
            .lvl = 42,
#line 2903
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2907
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2912
    [TRAINER_PBL_ANITA] =
    {
#line 2913
        .trainerName = _("STEVEN"),
#line 2914
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2915
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2917
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2919
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2923
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2922
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2921
            .lvl = 42,
#line 2920
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2924
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2929
    [TRAINER_PBL_DESIREE] =
    {
#line 2930
        .trainerName = _("STEVEN"),
#line 2931
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2932
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2934
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2936
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2940
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2939
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .lvl = 42,
#line 2937
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2941
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2946
    [TRAINER_PBL_HOWARD] =
    {
#line 2947
        .trainerName = _("STEVEN"),
#line 2948
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2949
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2951
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2953
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2957
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2956
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2955
            .lvl = 42,
#line 2954
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2958
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2963
    [TRAINER_PBL_ELOISE] =
    {
#line 2964
        .trainerName = _("STEVEN"),
#line 2965
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2966
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2968
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2970
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2973
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2972
            .lvl = 42,
#line 2971
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2975
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2980
    [TRAINER_PBL_ALLY_AND_EMMY] =
    {
#line 2981
        .trainerName = _("STEVEN"),
#line 2982
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 2983
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 2985
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2987
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2991
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 2990
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2989
            .lvl = 42,
#line 2988
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2992
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 2997
    [TRAINER_PBL_AMIR] =
    {
#line 2998
        .trainerName = _("STEVEN"),
#line 2999
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3000
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3002
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3004
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3008
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3007
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3006
            .lvl = 42,
#line 3005
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3009
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3014
    [TRAINER_PBL_GETHIN] =
    {
#line 3015
        .trainerName = _("STEVEN"),
#line 3016
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3017
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3019
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3021
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3024
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3023
            .lvl = 42,
#line 3022
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3026
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3031
    [TRAINER_PBL_BERNARD] =
    {
#line 3032
        .trainerName = _("STEVEN"),
#line 3033
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3034
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3036
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3038
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3041
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3040
            .lvl = 42,
#line 3039
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3043
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3048
    [TRAINER_PBL_ELLIE] =
    {
#line 3049
        .trainerName = _("STEVEN"),
#line 3050
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3051
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3053
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3055
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3058
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3057
            .lvl = 42,
#line 3056
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3060
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3065
    [TRAINER_PBL_RUSTY] =
    {
#line 3066
        .trainerName = _("STEVEN"),
#line 3067
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3068
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3070
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3072
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3075
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3074
            .lvl = 42,
#line 3073
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3077
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3082
    [TRAINER_PBL_CODY] =
    {
#line 3083
        .trainerName = _("STEVEN"),
#line 3084
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3085
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3087
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3089
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3092
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3091
            .lvl = 42,
#line 3090
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3099
    [TRAINER_PBL_LEWIS] =
    {
#line 3100
        .trainerName = _("STEVEN"),
#line 3101
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3102
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3104
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3106
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3110
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3109
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3108
            .lvl = 42,
#line 3107
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3111
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3116
    [TRAINER_PBL_CORNELIUS] =
    {
#line 3117
        .trainerName = _("STEVEN"),
#line 3118
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3119
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3121
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3123
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3126
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3125
            .lvl = 42,
#line 3124
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3128
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3133
    [TRAINER_PBL_INEZ_AND_EMMA] =
    {
#line 3134
        .trainerName = _("STEVEN"),
#line 3135
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3136
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3138
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3140
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3143
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3142
            .lvl = 42,
#line 3141
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3145
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3150
    [TRAINER_PBL_HELEN] =
    {
#line 3151
        .trainerName = _("STEVEN"),
#line 3152
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3153
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3155
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3157
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3161
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3160
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3159
            .lvl = 42,
#line 3158
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3162
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3167
    [TRAINER_PBL_WESLEY] =
    {
#line 3168
        .trainerName = _("STEVEN"),
#line 3169
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3170
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3172
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3174
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3178
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3177
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3176
            .lvl = 42,
#line 3175
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3179
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3184
    [TRAINER_PBL_ALFREDO] =
    {
#line 3185
        .trainerName = _("STEVEN"),
#line 3186
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3187
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3189
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3191
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3194
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3193
            .lvl = 42,
#line 3192
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3196
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3201
    [TRAINER_PBL_IAN] =
    {
#line 3202
        .trainerName = _("STEVEN"),
#line 3203
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3204
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3206
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3208
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3212
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3211
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3210
            .lvl = 42,
#line 3209
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3213
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3218
    [TRAINER_PBL_AUDREY] =
    {
#line 3219
        .trainerName = _("STEVEN"),
#line 3220
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3221
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3223
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3225
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3228
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3227
            .lvl = 42,
#line 3226
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3230
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3235
    [TRAINER_PBL_LEVIATHAN13] =
    {
#line 3236
        .trainerName = _("STEVEN"),
#line 3237
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3238
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3240
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3242
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3246
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3245
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3244
            .lvl = 42,
#line 3243
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3247
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3252
    [TRAINER_PBL_EDGARDO] =
    {
#line 3253
        .trainerName = _("STEVEN"),
#line 3254
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3255
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3257
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3259
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3262
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3261
            .lvl = 42,
#line 3260
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3264
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3269
    [TRAINER_PBL_JEAN] =
    {
#line 3270
        .trainerName = _("STEVEN"),
#line 3271
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3272
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3274
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3276
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3279
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3278
            .lvl = 42,
#line 3277
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3286
    [TRAINER_PBL_ROSE] =
    {
#line 3287
        .trainerName = _("STEVEN"),
#line 3288
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3289
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3291
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3293
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3297
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3296
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3295
            .lvl = 42,
#line 3294
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3298
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3303
    [TRAINER_PBL_JENNIFER] =
    {
#line 3304
        .trainerName = _("STEVEN"),
#line 3305
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3306
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3308
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3310
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3314
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3313
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3312
            .lvl = 42,
#line 3311
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3315
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3320
    [TRAINER_PBL_MATTHEW] =
    {
#line 3321
        .trainerName = _("STEVEN"),
#line 3322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3323
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3325
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3327
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3330
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3329
            .lvl = 42,
#line 3328
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3332
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3337
    [TRAINER_PBL_KERRY] =
    {
#line 3338
        .trainerName = _("STEVEN"),
#line 3339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3340
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3342
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3344
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3347
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3346
            .lvl = 42,
#line 3345
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3349
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3354
    [TRAINER_PBL_ANNIE] =
    {
#line 3355
        .trainerName = _("STEVEN"),
#line 3356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3357
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3359
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3361
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3365
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3364
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3363
            .lvl = 42,
#line 3362
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3366
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3371
    [TRAINER_PBL_CHRISTI] =
    {
#line 3372
        .trainerName = _("STEVEN"),
#line 3373
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3374
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3376
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3378
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3381
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3380
            .lvl = 42,
#line 3379
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3383
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3388
    [TRAINER_PBL_SPENCER] =
    {
#line 3389
        .trainerName = _("STEVEN"),
#line 3390
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3391
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3393
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3395
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3399
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3398
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3397
            .lvl = 42,
#line 3396
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3400
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3405
    [TRAINER_PBL_HAYWOOD] =
    {
#line 3406
        .trainerName = _("STEVEN"),
#line 3407
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3408
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3410
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3412
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3415
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3414
            .lvl = 42,
#line 3413
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3417
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3422
    [TRAINER_PBL_MONROE] =
    {
#line 3423
        .trainerName = _("STEVEN"),
#line 3424
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3425
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3427
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3429
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3432
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3431
            .lvl = 42,
#line 3430
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3434
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3439
    [TRAINER_PBL_DAVID] =
    {
#line 3440
        .trainerName = _("STEVEN"),
#line 3441
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3442
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3444
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3446
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3450
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3449
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3448
            .lvl = 42,
#line 3447
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3456
    [TRAINER_PBL_DOMINIK] =
    {
#line 3457
        .trainerName = _("STEVEN"),
#line 3458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3459
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3461
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3463
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3467
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3466
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3465
            .lvl = 42,
#line 3464
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3468
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3473
    [TRAINER_PBL_DOUGLAS] =
    {
#line 3474
        .trainerName = _("STEVEN"),
#line 3475
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3476
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3478
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3480
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3484
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3483
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3482
            .lvl = 42,
#line 3481
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3485
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3490
    [TRAINER_PBL_NADINE] =
    {
#line 3491
        .trainerName = _("STEVEN"),
#line 3492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3493
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3495
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3497
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3500
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3499
            .lvl = 42,
#line 3498
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3502
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3507
    [TRAINER_PBL_SANDY] =
    {
#line 3508
        .trainerName = _("STEVEN"),
#line 3509
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3510
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3512
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3514
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3518
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3517
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3516
            .lvl = 42,
#line 3515
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3519
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3524
    [TRAINER_PBL_SHELDON] =
    {
#line 3525
        .trainerName = _("STEVEN"),
#line 3526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3527
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3529
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3531
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3535
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3534
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3533
            .lvl = 42,
#line 3532
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3541
    [TRAINER_PBL_LEVIATHAN14] =
    {
#line 3542
        .trainerName = _("STEVEN"),
#line 3543
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3544
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3546
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3548
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3551
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3550
            .lvl = 42,
#line 3549
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3553
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3558
    [TRAINER_PBL_LEVIATHAN12_BRUTAL] =
    {
#line 3559
        .trainerName = _("STEVEN"),
#line 3560
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3561
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3563
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3565
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3569
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3568
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3567
            .lvl = 42,
#line 3566
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3570
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3575
    [TRAINER_PBL_LEVIATHAN13_BRUTAL] =
    {
#line 3576
        .trainerName = _("STEVEN"),
#line 3577
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3578
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3580
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3582
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3586
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3585
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3584
            .lvl = 42,
#line 3583
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3592
    [TRAINER_PBL_LEVIATHAN14_BRUTAL] =
    {
#line 3593
        .trainerName = _("STEVEN"),
#line 3594
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3595
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3597
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3599
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3602
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3601
            .lvl = 42,
#line 3600
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
#line 3609
    [TRAINER_PBL_LEVIATHAN12] =
    {
#line 3610
        .trainerName = _("STEVEN"),
#line 3611
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 3612
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 3614
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3616
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .evs = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 3619
            .ivs = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3618
            .lvl = 42,
#line 3617
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3621
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
        },
    },
